/*
 * REO Bootstrap — Main entry point for running recompiled RE Outbreak
 *
 * This program:
 *   1. Initializes the PS2Recomp runtime
 *   2. Loads the RE Outbreak ELF into guest memory
 *   3. Registers all 3,209 recompiled functions
 *   4. Applies game-specific overrides
 *   5. Starts execution at the ELF entry point (0x00100008)
 *
 * Build: compile all generated .cpp files + this bootstrap against
 *        PS2Recomp's runtime library.
 */

#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include <cstdio>
#include <cstdlib>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

// Defined in the generated register_functions.cpp
extern void registerAllFunctions(PS2Runtime& runtime);

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
    printf("  Static recompilation — no emulator\n");
    printf("  Don't let the memory of Raccoon City die.\n");
    printf("\n");
}

int main(int argc, char* argv[]) {
    print_banner();

    // Determine paths
    std::string elf_path = "game_data/SLUS_207.65";
    std::string game_data = "game_data";

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--elf") == 0 && i + 1 < argc) {
            elf_path = argv[++i];
        } else if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) {
            game_data = argv[++i];
        } else if (strcmp(argv[i], "--help") == 0) {
            printf("Usage: reo [--elf <path>] [--data <path>]\n");
            printf("  --elf   Path to SLUS_207.65 (default: game_data/SLUS_207.65)\n");
            printf("  --data  Path to extracted game data (default: game_data/)\n");
            return 0;
        }
    }

    if (!fs::exists(elf_path)) {
        fprintf(stderr, "[REO] ELF not found: %s\n", elf_path.c_str());
        fprintf(stderr, "[REO] Run reo-extract on your Outbreak ISO first.\n");
        return 1;
    }

    printf("[BOOT] ELF: %s\n", elf_path.c_str());
    printf("[BOOT] Game data: %s\n", game_data.c_str());

    // Initialize the PS2Recomp runtime
    printf("[BOOT] Initializing PS2 runtime...\n");
    PS2Runtime runtime;

    if (!runtime.initialize("RE Outbreak: Recompiled")) {
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

    // Create save directory
    fs::create_directories("saves");

    // Load the ELF into guest memory
    printf("[BOOT] Loading ELF into guest memory...\n");
    if (!runtime.loadELF(elf_path)) {
        fprintf(stderr, "[BOOT] Failed to load ELF: %s\n", elf_path.c_str());
        return 1;
    }

    // Register all recompiled functions (3,209 functions from PS2Recomp output)
    printf("[BOOT] Registering recompiled functions...\n");
    registerAllFunctions(runtime);
    printf("[BOOT] All functions registered.\n");

    // The game override system will auto-apply our RE Outbreak overrides
    // (registered via PS2_REGISTER_GAME_OVERRIDE in reo_override.cpp)

    // Begin execution
    printf("[BOOT] Starting execution at entry point 0x00100008...\n");
    printf("[BOOT] ========================================\n\n");

    runtime.run();

    printf("\n[BOOT] ========================================\n");
    printf("[BOOT] Execution ended.\n");

    return 0;
}
