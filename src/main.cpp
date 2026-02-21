/*
 * REO - Resident Evil Outbreak: Recompiled
 *
 * Static recompilation of RE Outbreak (PS2) for native Windows.
 * Fan project. Not affiliated with Capcom or Sony.
 */

#include <cstdio>
#include <cstdlib>
#include <string>
#include <filesystem>

#include "config.h"
#include "runtime/core/context.h"
#include "runtime/core/memory.h"
#include "runtime/gs/gs_renderer.h"
#include "runtime/spu2/spu2.h"
#include "runtime/input/input.h"
#include "runtime/cdvd/cdvd.h"
#include "runtime/timer/timer.h"
#include "runtime/iop/iop_hle.h"
#include "network/snap_client/snap_protocol.h"
#include "network/dnas/dnas_bypass.h"

namespace fs = std::filesystem;

static void print_banner() {
    printf("\n");
    printf("  ██████╗ ███████╗ ██████╗ \n");
    printf("  ██╔══██╗██╔════╝██╔═══██╗\n");
    printf("  ██████╔╝█████╗  ██║   ██║\n");
    printf("  ██╔══██╗██╔══╝  ██║   ██║\n");
    printf("  ██║  ██║███████╗╚██████╔╝\n");
    printf("  ╚═╝  ╚═╝╚══════╝ ╚═════╝ \n");
    printf("\n");
    printf("  Resident Evil Outbreak: Recompiled\n");
    printf("  v%s\n", REO_VERSION_STRING);
    printf("  Don't let the memory of Raccoon City die.\n");
    printf("\n");
}

int main(int argc, char* argv[]) {
    print_banner();

    // Load configuration
    reo::Config config;
    if (!config.load(argc, argv)) {
        fprintf(stderr, "Failed to load configuration.\n");
        return 1;
    }

    // Verify game data exists
    fs::path game_data_path = config.game_data_path;
    if (!fs::exists(game_data_path)) {
        fprintf(stderr, "Game data not found at: %s\n", game_data_path.string().c_str());
        fprintf(stderr, "Run: reo-extract <path-to-Outbreak.iso> to extract game files.\n");
        return 1;
    }

    printf("[BOOT] Initializing PS2 subsystems...\n");

    // Initialize the PS2 memory map (32MB main RAM + MMIO regions)
    reo::Memory memory;
    if (!memory.init()) {
        fprintf(stderr, "[BOOT] Failed to initialize memory subsystem.\n");
        return 1;
    }
    printf("[BOOT] Memory: 32MB main RAM mapped\n");

    // Initialize the EE CPU context (register file, PC, etc.)
    reo::EEContext cpu(memory);
    printf("[BOOT] EE CPU context ready (MIPS R5900 → x86-64)\n");

    // Initialize the Graphics Synthesizer replacement
    reo::GSRenderer gs;
    if (!gs.init(config.window_width, config.window_height, config.fullscreen)) {
        fprintf(stderr, "[BOOT] Failed to initialize GS renderer.\n");
        return 1;
    }
    printf("[BOOT] GS Renderer: %s (%dx%d)\n",
           gs.backend_name(), config.window_width, config.window_height);

    // Initialize SPU2 audio
    reo::SPU2 spu2;
    if (!spu2.init()) {
        fprintf(stderr, "[BOOT] Failed to initialize SPU2 audio.\n");
        return 1;
    }
    printf("[BOOT] SPU2: 48 voices, software mixer → WASAPI\n");

    // Initialize IOP high-level emulation
    reo::IopHLE iop(memory);
    printf("[BOOT] IOP: High-level emulation ready\n");

    // Initialize input system
    reo::Input input;
    if (!input.init()) {
        fprintf(stderr, "[BOOT] Failed to initialize input system.\n");
        return 1;
    }
    printf("[BOOT] Input: XInput + keyboard mapped\n");

    // Initialize CDVD (file system redirect)
    reo::CDVD cdvd(game_data_path);
    printf("[BOOT] CDVD: Redirected to %s\n", game_data_path.string().c_str());

    // Initialize timer system
    reo::Timer timer;
    timer.init();
    printf("[BOOT] Timer: High-resolution Windows timers\n");

    // Network (if online mode enabled)
    if (config.online_enabled) {
        printf("[BOOT] Network: Initializing online subsystem...\n");
        reo::DnasBypass::apply();
        printf("[BOOT] DNAS: Bypassed (connecting to community servers)\n");

        reo::SnapProtocol snap;
        if (snap.connect(config.server_address, config.server_port)) {
            printf("[BOOT] Connected to %s:%d\n",
                   config.server_address.c_str(), config.server_port);
        } else {
            printf("[BOOT] Network: Could not connect (offline mode)\n");
        }
    }

    printf("\n[BOOT] All subsystems initialized. Loading game...\n\n");

    // TODO: Load the recompiled game code
    // TODO: Set up the ELF entry point
    // TODO: Begin main game loop
    //
    // The main loop will:
    //   1. Execute recompiled EE code (one frame's worth)
    //   2. Process VU microprograms (geometry transforms)
    //   3. Submit GS draw calls (render frame)
    //   4. Mix SPU2 audio (fill audio buffer)
    //   5. Poll input
    //   6. Handle network events
    //   7. Present frame and vsync

    printf("[TODO] Recompiled game code not yet linked.\n");
    printf("[TODO] This is where the magic happens.\n");
    printf("\nPress Enter to exit...\n");
    getchar();

    // Cleanup
    spu2.shutdown();
    gs.shutdown();
    input.shutdown();

    return 0;
}
