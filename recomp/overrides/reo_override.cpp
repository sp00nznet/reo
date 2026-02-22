/*
 * REO Game Override for PS2Recomp Runtime
 *
 * This registers RE Outbreak-specific function bindings and hardware
 * handlers with the PS2Recomp runtime. It's the bridge between the
 * recompiled game code and our native implementations.
 *
 * The override is auto-registered via PS2_REGISTER_GAME_OVERRIDE
 * and applied when the runtime detects the RE Outbreak ELF.
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

static void applyREOutbreakOverrides(PS2Runtime& runtime) {
    printf("[REO] Applying Resident Evil Outbreak overrides (NTSC-U v2.00)\n");

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
    //   ps2_game_overrides::bindAddressHandler(runtime, 0x001XXXXX, "ret0");  // DNAS init → success

    // Initialize our HAL subsystems
    // These register MMIO handlers for GS, SPU2, etc.
    // reo_hal::init_gs_renderer(runtime);
    // reo_hal::init_spu2(runtime);
    // reo_hal::init_input(runtime);
    // reo_hal::init_cdvd(runtime);
    // reo_hal::init_network(runtime);

    printf("[REO] Override applied. %d functions registered.\n",
           0); // Will be updated as we identify functions
}

// Register the override — matches against the ELF metadata
// Entry point: 0x00100008 (from our ELF analysis)
// CRC32: 0x00000000 (will be filled in once we compute it)
PS2_REGISTER_GAME_OVERRIDE(
    "RE Outbreak NTSC-U",   // Name
    "SLUS_207.65",          // ELF filename
    0x00100008,             // Entry point
    0x00000000,             // CRC32 (placeholder)
    applyREOutbreakOverrides
);
