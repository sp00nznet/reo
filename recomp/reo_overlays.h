#pragma once
// Overlays share load addresses (netdnas/insdnas/nethttp all sit at 0x6E0000, and game.bin
// spans 0x570000-0x743100 across them), so the runtime's address-keyed function map can hold
// only one of them. Every overlay address maps to one trampoline instead, which looks at the
// MWo3 header the game's loader leaves at each overlay base and calls the function of the
// overlay that is resident right now.
#include <cstddef>
#include <cstdint>

class PS2Runtime;
struct R5900Context;

using ReoOverlayFn = void (*)(uint8_t *, R5900Context *, PS2Runtime *);

struct ReoOverlayEntry
{
    uint32_t address;
    ReoOverlayFn function;
};

struct ReoOverlay
{
    const char *name; // MWo3 header name, e.g. "game.bin"
    uint32_t base;    // load address (the MWo3 header sits here)
    uint32_t end;
    const ReoOverlayEntry *entries;
    size_t count;
};

// Generated <prefix>_register.cpp files declare one of these at namespace scope.
struct ReoOverlayRegistrar
{
    explicit ReoOverlayRegistrar(const ReoOverlay &overlay);
};

void reoInstallOverlays(PS2Runtime &runtime);
