/*
 * REO Bootstrap — Main entry point for running recompiled RE Outbreak
 *
 * Supports both games:
 *   - RE Outbreak File #1 (SLUS-20765): 3,209 recompiled functions
 *   - RE Outbreak File #2 (SLUS-20984): 3,525 recompiled functions
 *
 * Build: compile all generated .cpp files + this bootstrap against
 *        PS2Recomp's runtime library.
 *
 * Usage:
 *   reo_recomp --game file1   (or --game file2)
 *   reo_recomp --elf <path> --data <path>   (manual override)
 */

#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "game_overrides.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <filesystem>

namespace fs = std::filesystem;

// Recompiled functions are no longer registered by a call: the generated
// register_functions.cpp defines a dense address-indexed table
// (g_ps2RecompiledFunctionTable) populated by a static initializer, which
// the runtime indexes directly. Mid-function addresses resolve to their
// parent, which resumes via its `switch (ctx->pc)` prologue.

// Overlay function registration — runtime-loaded code dumped from PCSX2
extern void registerOverlayFunctions(PS2Runtime& runtime);
extern void registerNetdnasFunctions(PS2Runtime& runtime);

// ---- MWo3 overlay image loading -------------------------------------------
// game_data/BIN/*.DAT are MWo3 containers holding the overlays that ship with
// filesz=0 in the ELF. Header is 64 bytes (load address at +0x08) followed by
// text then data. Payload is LZSS over 16-bit words: flag word consumed
// MSB-first, 0 = literal word, 1 = match token with dist = tok & 0x7FF words
// and len = tok >> 11 words, len == 0 escaping to the next word.
// See tools/ps2_debug/mwo3.py, which validates this byte-exact against the
// PCSX2 dump of the title overlay.
static std::vector<uint8_t> mwo3Unpack(const std::vector<uint8_t> &c)
{
    std::vector<uint8_t> out;
    size_t ci = 0;
    auto rd = [&](size_t o) -> uint16_t {
        return static_cast<uint16_t>(c[o] | (c[o + 1] << 8));
    };
    while (ci + 2 <= c.size())
    {
        uint16_t flag = rd(ci);
        ci += 2;
        for (int b = 15; b >= 0; --b)
        {
            if (ci + 2 > c.size()) return out;
            if (!((flag >> b) & 1))
            {
                out.push_back(c[ci]);
                out.push_back(c[ci + 1]);
                ci += 2;
                continue;
            }
            uint16_t tok = rd(ci);
            ci += 2;
            size_t dist = static_cast<size_t>(tok & 0x7FFu) * 2u;
            size_t len = static_cast<size_t>(tok >> 11) * 2u;
            if (len == 0u)
            {
                if (ci + 2 > c.size()) return out;
                len = static_cast<size_t>(rd(ci)) * 2u;
                ci += 2;
            }
            if (dist == 0u)
            {
                // Matches the game's own decoder at 0x1AF618/0x1AF628: dist==0
                // with len==0 terminates, dist==0 with a length emits a run of
                // zero words. Treating dist==0 as "end" truncates such a stream.
                if (len == 0u) return out;
                out.insert(out.end(), len, uint8_t(0));
                continue;
            }
            if (dist > out.size()) return out;
            const size_t p = out.size();
            for (size_t k = 0; k < len; ++k) out.push_back(out[p - dist + k]);
        }
    }
    return out;
}

// ponytail: copies one overlay image straight into guest RAM at its header load
// address, up front. The game loads overlays on demand through its own loader;
// doing it eagerly is enough for the recompiled overlay code to see its own
// data section, which is all we need to test whether the boot gate opens.
// Note the overlays are mutually exclusive by address -- game.bin (0x570000..
// 0x743100) overlaps netdnas.bin (0x6E0000..0x781000) -- so only one of an
// overlapping pair may be loaded. Upgrade path: hook the real overlay load
// request and place the image the game actually asks for.
static bool loadMwo3Overlay(PS2Runtime &runtime, const fs::path &path)
{
    std::ifstream f(path, std::ios::binary);
    if (!f) { printf("[BOOT] overlay: cannot open %s\n", path.string().c_str()); return false; }
    std::vector<uint8_t> raw((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    if (raw.size() < 0x40) return false;

    std::vector<uint8_t> img =
        (raw[0] == 'M' && raw[1] == 'W' && raw[2] == 'o' && raw[3] == '3') ? raw : mwo3Unpack(raw);
    if (img.size() < 0x40 || img[0] != 'M' || img[1] != 'W' || img[2] != 'o' || img[3] != '3')
    {
        printf("[BOOT] overlay: %s is not a valid MWo3 image\n", path.string().c_str());
        return false;
    }

    auto rd32 = [&](size_t o) {
        return static_cast<uint32_t>(img[o] | (img[o + 1] << 8) | (img[o + 2] << 16) | (img[o + 3] << 24));
    };
    const uint32_t addr = rd32(0x08);
    const uint32_t text = rd32(0x0C);
    const uint32_t data = rd32(0x10);
    const uint32_t end = rd32(0x18);
    if (addr + 0x40u + text + data != end)
    {
        printf("[BOOT] overlay: %s header is inconsistent (end mismatch)\n", path.string().c_str());
        return false;
    }

    uint8_t *dst = getMemPtr(runtime.memory().getRDRAM(), addr);
    if (!dst) { printf("[BOOT] overlay: no guest mapping for 0x%08X\n", addr); return false; }
    std::memcpy(dst, img.data(), img.size());
    printf("[BOOT] overlay: loaded %s at 0x%08X (text 0x%X, data 0x%X, %zu bytes)\n",
           reinterpret_cast<const char *>(&img[0x20]), addr, text, data, img.size());
    return true;
}

struct GameDef {
    const char* name;
    const char* elf_name;
    const char* serial;
    const char* default_data;
    uint32_t entry_point;
};

static const GameDef s_games[] = {
    { "Resident Evil Outbreak",          "SLUS_207.65", "SLUS-20765", "game_data",       0x00100008 },
    { "Resident Evil Outbreak: File #2", "SLUS_209.84", "SLUS-20984", "game_data_file2", 0x00100008 },
};

static void print_banner(const GameDef& g) {
    printf("\n");
    printf("  ██████╗ ███████╗ ██████╗ \n");
    printf("  ██╔══██╗██╔════╝██╔═══██╗\n");
    printf("  ██████╔╝█████╗  ██║   ██║\n");
    printf("  ██╔══██╗██╔══╝  ██║   ██║\n");
    printf("  ██║  ██║███████╗╚██████╔╝\n");
    printf("  ╚═╝  ╚═╝╚══════╝ ╚═════╝ \n");
    printf("\n");
    printf("  %s: Recompiled\n", g.name);
    printf("  [%s]  Static recompilation — no emulator\n", g.serial);
    printf("  Don't let the memory of Raccoon City die.\n");
    printf("\n");
}

int main(int argc, char* argv[]) {
    setvbuf(stdout, nullptr, _IONBF, 0);  // unbuffered: pinpoint crash location
    // Defaults — selected game determines paths
    int game_idx = -1;  // -1 = auto-detect from build target
    std::string elf_path;
    std::string game_data;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--game") == 0 && i + 1 < argc) {
            const char* g = argv[++i];
            if (strcmp(g, "file1") == 0 || strcmp(g, "outbreak") == 0 || strcmp(g, "1") == 0)
                game_idx = 0;
            else if (strcmp(g, "file2") == 0 || strcmp(g, "2") == 0)
                game_idx = 1;
            else {
                fprintf(stderr, "[REO] Unknown game: %s (use 'file1' or 'file2')\n", g);
                return 1;
            }
        } else if (strcmp(argv[i], "--elf") == 0 && i + 1 < argc) {
            elf_path = argv[++i];
        } else if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) {
            game_data = argv[++i];
        } else if (strcmp(argv[i], "--help") == 0) {
            printf("Usage: reo_recomp [--game file1|file2] [--elf <path>] [--data <path>]\n");
            printf("  --game   Which game to run: file1 or file2 (auto-detected if not set)\n");
            printf("  --elf    Path to game ELF (default: auto from game selection)\n");
            printf("  --data   Path to extracted game data (default: auto from game selection)\n");
            return 0;
        }
    }

    // Auto-detect game from build target (compile-time define)
#if defined(REO_GAME_FILE2)
    if (game_idx < 0) game_idx = 1;
#else
    if (game_idx < 0) game_idx = 0;
#endif

    const GameDef& g = s_games[game_idx];
    print_banner(g);

    // Resolve paths
    if (game_data.empty()) game_data = g.default_data;
    if (elf_path.empty())  elf_path = std::string(game_data) + "/" + g.elf_name;

    if (!fs::exists(elf_path)) {
        fprintf(stderr, "[REO] ELF not found: %s\n", elf_path.c_str());
        fprintf(stderr, "[REO] Run: reo-extract <ISO> %s\n", g.default_data);
        return 1;
    }

    printf("[BOOT] ELF: %s\n", elf_path.c_str());
    printf("[BOOT] Game data: %s\n", game_data.c_str());

    // Initialize the PS2Recomp runtime
    printf("[BOOT] Initializing PS2 runtime...\n");
    PS2Runtime runtime;

    if (!runtime.initialize(g.name)) {
        fprintf(stderr, "[BOOT] Failed to initialize runtime\n");
        return 1;
    }

    // Configure I/O paths
    PS2Runtime::IoPaths paths;
    paths.elfPath = elf_path;
    paths.elfDirectory = fs::path(elf_path).parent_path();
    paths.hostRoot = game_data;
    paths.cdRoot = game_data;
    paths.mcRoot = "saves";
    PS2Runtime::setIoPaths(paths);

    fs::create_directories("saves");

    // Load the ELF into guest memory
    printf("[BOOT] Loading ELF into guest memory...\n");
    if (!runtime.loadELF(elf_path)) {
        fprintf(stderr, "[BOOT] Failed to load ELF: %s\n", elf_path.c_str());
        return 1;
    }

    // Place the overlay images the ELF only reserves space for. Each
    // filesz=0 segment is the slot for one overlay; this must run AFTER
    // loadELF, which zero-fills those ranges.
    loadMwo3Overlay(runtime, fs::path(game_data) / "BIN" / "4.DAT");  // netdnas.bin @ 0x6E0000

    printf("[BOOT] Registering overlay functions (runtime-loaded code)...\n");
    registerOverlayFunctions(runtime);
    registerNetdnasFunctions(runtime);
    printf("[BOOT] All functions registered.\n");

    // Re-apply game overrides AFTER function registration.
    // loadELF() applies them first, but function registration overwrites
    // our custom handlers with the generated stubs. This second pass ensures
    // our overrides take precedence over generated code.
    printf("[BOOT] Applying game overrides (post-registration)...\n");
    // crc32=0/invalid: both REO descriptors register crc32==0, so applyMatching
    // skips the CRC check entirely and matches on elf name + entry point.
    ps2_game_overrides::applyMatching(runtime, elf_path, g.entry_point, 0u, false);

    // Begin execution
    printf("[BOOT] Starting execution at entry point 0x%08X...\n", g.entry_point);
    printf("[BOOT] ========================================\n\n");

    runtime.run();

    printf("\n[BOOT] ========================================\n");
    printf("[BOOT] Execution ended.\n");

    return 0;
}
