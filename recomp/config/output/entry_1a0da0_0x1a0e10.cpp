#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a0da0
// Address: 0x1a0da0 - 0x1a0e10
void entry_1a0da0_0x1a0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0da0u;

    // 0x1a0da0: 0xac860000
    ctx->pc = 0x1a0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1a0da4: 0xac850008
    ctx->pc = 0x1a0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a0da8: 0xac880004
    ctx->pc = 0x1a0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1a0dac: 0xac8a000c
    ctx->pc = 0x1a0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x1a0db0: 0x11400008
    ctx->pc = 0x1A0DB0u;
    {
        const bool branch_taken_0x1a0db0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0DB4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
        if (branch_taken_0x1a0db0) {
            ctx->pc = 0x1A0DD4u;
            goto label_1a0dd4;
        }
    }
    ctx->pc = 0x1A0DB8u;
    // 0x1a0db8: 0xe91021
    ctx->pc = 0x1a0db8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a0dbc: 0x2523ffff
    ctx->pc = 0x1a0dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a0dc0: 0x601827
    ctx->pc = 0x1a0dc0u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0dc4: 0x2442ffff
    ctx->pc = 0x1a0dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0dc8: 0x621024
    ctx->pc = 0x1a0dc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0dcc: 0x10000006
    ctx->pc = 0x1A0DCCu;
    {
        const bool branch_taken_0x1a0dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1a0dcc) {
            ctx->pc = 0x1A0DE8u;
            goto label_1a0de8;
        }
    }
    ctx->pc = 0x1A0DD4u;
label_1a0dd4:
    // 0x1a0dd4: 0x2523ffff
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a0dd8: 0xe81021
    ctx->pc = 0x1a0dd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a0ddc: 0x601827
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0de0: 0x621024
    ctx->pc = 0x1a0de0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0de4: 0xac820014
    ctx->pc = 0x1a0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1a0de8:
    // 0x1a0de8: 0x8c830014
    ctx->pc = 0x1a0de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a0dec: 0x3402ffff
    ctx->pc = 0x1a0decu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a0df0: 0x63100
    ctx->pc = 0x1a0df0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0df4: 0xac830010
    ctx->pc = 0x1a0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1a0df8: 0xac80001c
    ctx->pc = 0x1a0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1a0dfc: 0xac800020
    ctx->pc = 0x1a0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1a0e00: 0xac820024
    ctx->pc = 0x1a0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1a0e04: 0xa0202d
    ctx->pc = 0x1a0e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e08: 0x80696c4
    ctx->pc = 0x1A0E08u;
    ctx->pc = 0x1A0E0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5B10u;
    sub_001A5B10_0x1a5b10(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0E10u;
}
