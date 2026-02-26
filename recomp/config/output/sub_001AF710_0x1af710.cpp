/*
 * REO Override: sub_001AF710 — GS VRAM buffer allocator
 *
 * Original function scans 8 DMA channel slots, accumulates requested sizes,
 * and tail-calls the heap allocator (sub_001899F0 via entry_18dbe0).
 * Without initialized heap structures, the allocator returns 0, causing a
 * catastrophic 6MB memset at address 0 that wipes the stack.
 *
 * This override uses a simple bump allocator in high guest memory (0x600000+)
 * to provide valid buffer addresses for GS/DMA allocations.
 */
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF710
// Address: 0x1af710 - 0x1af770
void sub_001AF710_0x1af710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // Bump allocator for GS/DMA buffers in high guest memory
    // PS2 has 32MB RAM — use region 0x600000..0x1FFFFFF for HLE buffers
    static uint32_t nextAlloc = 0x600000u;

    uint32_t size = getRegU32(ctx, 4);  // a0 = requested size
    if (size == 0) size = 0x1000;       // minimum 4KB allocation

    // Align size up to 64 bytes (GS requirement)
    size = (size + 63u) & ~63u;

    uint32_t addr = nextAlloc;
    nextAlloc += size;

    // Wrap around if we exceed available space (leave last 8MB for stack/heap)
    if (nextAlloc > 0x1800000u) {
        nextAlloc = 0x600000u;
        addr = nextAlloc;
        nextAlloc += size;
    }

    // Also update the slot tracking array so sub_001AF7A0 can find entries
    // Array at 0x2B8E08, 8 bytes per slot, field+0 = occupied flag, field+4 = alloc ptr
    uint32_t slotBase = 0x2B8E08u & PS2_RAM_MASK;
    // Find first empty slot and fill it
    for (int i = 7; i >= 0; i--) {
        uint32_t slotAddr = (slotBase - i * 8) & PS2_RAM_MASK;
        if (slotAddr + 8 <= PS2_RAM_SIZE && READ32(slotAddr) == 0) {
            WRITE32(slotAddr, 1);        // mark occupied
            WRITE32(slotAddr + 4, addr); // store allocation pointer
            break;
        }
    }

    setReturnU32(ctx, addr);
    ctx->pc = getRegU32(ctx, 31);
}
