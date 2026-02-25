/*
 * REO Game Override for PS2Recomp Runtime
 *
 * Registers hardware overrides for both RE Outbreak games:
 *   - File #1: SLUS-20765 (SLUS_207.65)
 *   - File #2: SLUS-20984 (SLUS_209.84)
 *
 * Both games share the same engine (derived from REOF2), so the
 * override structure is largely identical — same GS/SPU2/IOP
 * interfaces, same SN@P network stack, same DNAS flow.
 */

#include "ps2_runtime.h"
#include "game_overrides.h"
#include <cstdio>

// Forward declarations for our HAL integration
namespace reo_hal {
    void init_gs_renderer(PS2Runtime& runtime);
    void init_spu2(PS2Runtime& runtime);
    void init_input(PS2Runtime& runtime);
    void init_cdvd(PS2Runtime& runtime);
    void init_network(PS2Runtime& runtime);
}

// Shared HAL setup — identical for both games (same engine)
static void applySharedOverrides(PS2Runtime& runtime) {
    // TODO: Once we identify specific functions via Ghidra analysis,
    // bind them here. For example:
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "sceCdRead");
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "printf");
    //
    // The SN@P network stack functions will need custom handlers:
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "snap_connect");
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "snap_send");
    //
    // DNAS functions need to be stubbed to return success:
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "ret0");

    // Initialize our HAL subsystems (MMIO handlers for GS, SPU2, etc.)
    // reo_hal::init_gs_renderer(runtime);
    // reo_hal::init_spu2(runtime);
    // reo_hal::init_input(runtime);
    // reo_hal::init_cdvd(runtime);
    // reo_hal::init_network(runtime);
}

// ── File #1 overrides ──────────────────────────────────────────────
static void applyOutbreakOverrides(PS2Runtime& runtime) {
    printf("[REO] Applying RE Outbreak File #1 overrides (SLUS-20765, NTSC-U v2.00)\n");
    applySharedOverrides(runtime);

    // File #1-specific bindings (if any differ from shared engine)
    // e.g., different function addresses for game-specific systems

    printf("[REO] File #1 override applied.\n");
}

PS2_REGISTER_GAME_OVERRIDE(
    "RE Outbreak NTSC-U",
    "SLUS_207.65",
    0x00100008,
    0x00000000,
    applyOutbreakOverrides
);

// ── File #2 overrides ──────────────────────────────────────────────
static void applyFile2Overrides(PS2Runtime& runtime) {
    printf("[REO] Applying RE Outbreak File #2 overrides (SLUS-20984, NTSC-U v1.05)\n");
    applySharedOverrides(runtime);

    // File #2-specific bindings
    // File #2 adds: Wild Things scenario, new characters, LAN support (LANEGG.IRX)
    // Network addresses may differ from File #1

    printf("[REO] File #2 override applied.\n");
}

PS2_REGISTER_GAME_OVERRIDE(
    "RE Outbreak File #2 NTSC-U",
    "SLUS_209.84",
    0x00100008,
    0x00000000,
    applyFile2Overrides
);
