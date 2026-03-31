#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B29E0
// Address: 0x1b29e0 - 0x1b2a70
void sub_001B29E0_0x1b29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b29e0u;

    // 0x1b29e0: 0x3c01002c
    ctx->pc = 0x1b29e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b29e4: 0x3c08002c
    ctx->pc = 0x1b29e4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x1b29e8: 0x84228eac
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938284)));
    // 0x1b29ec: 0x14400003
    ctx->pc = 0x1B29ECu;
    {
        const bool branch_taken_0x1b29ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B29F0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294938272));
        if (branch_taken_0x1b29ec) {
            ctx->pc = 0x1B29FCu;
            goto label_1b29fc;
        }
    }
    ctx->pc = 0x1B29F4u;
    // 0x1b29f4: 0x10000019
    ctx->pc = 0x1B29F4u;
    {
        const bool branch_taken_0x1b29f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B29F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b29f4) {
            ctx->pc = 0x1B2A5Cu;
            goto label_1b2a5c;
        }
    }
    ctx->pc = 0x1B29FCu;
label_1b29fc:
    // 0x1b29fc: 0x8503000c
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1b2a00: 0x4343c
    ctx->pc = 0x1b2a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1b2a04: 0x6343f
    ctx->pc = 0x1b2a04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1b2a08: 0x10000010
    ctx->pc = 0x1B2A08u;
    {
        const bool branch_taken_0x1b2a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2A0Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a08) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B2A10u;
label_1b2a10:
    // 0x1b2a10: 0x90820274
    ctx->pc = 0x1b2a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1b2a14: 0x1440000c
    ctx->pc = 0x1B2A14u;
    {
        const bool branch_taken_0x1b2a14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2A18u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1b2a14) {
            ctx->pc = 0x1B2A48u;
            goto label_1b2a48;
        }
    }
    ctx->pc = 0x1B2A1Cu;
    // 0x1b2a1c: 0x1021021
    ctx->pc = 0x1b2a1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1b2a20: 0x844201ac
    ctx->pc = 0x1b2a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1b2a24: 0x14460008
    ctx->pc = 0x1B2A24u;
    {
        const bool branch_taken_0x1b2a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x1b2a24) {
            ctx->pc = 0x1B2A48u;
            goto label_1b2a48;
        }
    }
    ctx->pc = 0x1B2A2Cu;
    // 0x1b2a2c: 0x30a300ff
    ctx->pc = 0x1b2a2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
    // 0x1b2a30: 0x71080
    ctx->pc = 0x1b2a30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b2a34: 0x24630001
    ctx->pc = 0x1b2a34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2a38: 0x481021
    ctx->pc = 0x1b2a38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b2a3c: 0xa0830274
    ctx->pc = 0x1b2a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2a40: 0x10000006
    ctx->pc = 0x1B2A40u;
    {
        const bool branch_taken_0x1b2a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2A44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
        if (branch_taken_0x1b2a40) {
            ctx->pc = 0x1B2A5Cu;
            goto label_1b2a5c;
        }
    }
    ctx->pc = 0x1B2A48u;
label_1b2a48:
    // 0x1b2a48: 0x24e70001
    ctx->pc = 0x1b2a48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1b2a4c:
    // 0x1b2a4c: 0xe3102a
    ctx->pc = 0x1b2a4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x1b2a50: 0x1440ffef
    ctx->pc = 0x1B2A50u;
    {
        const bool branch_taken_0x1b2a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2A54u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x1b2a50) {
            ctx->pc = 0x1B2A10u;
            goto label_1b2a10;
        }
    }
    ctx->pc = 0x1B2A58u;
    // 0x1b2a58: 0x102d
    ctx->pc = 0x1b2a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a5c:
    // 0x1b2a5c: 0x3e00008
    ctx->pc = 0x1B2A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B29FCu: goto label_1b29fc;
            case 0x1B2A10u: goto label_1b2a10;
            case 0x1B2A48u: goto label_1b2a48;
            case 0x1B2A4Cu: goto label_1b2a4c;
            case 0x1B2A5Cu: goto label_1b2a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2A64u;
    // 0x1b2a64: 0x0
    ctx->pc = 0x1b2a64u;
    // NOP
    // 0x1b2a68: 0x0
    ctx->pc = 0x1b2a68u;
    // NOP
    // 0x1b2a6c: 0x0
    ctx->pc = 0x1b2a6cu;
    // NOP
}
