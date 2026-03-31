#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C02A0
// Address: 0x1c02a0 - 0x1c0370
void sub_001C02A0_0x1c02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c02a0u;

    // 0x1c02a0: 0x27bdffe0
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c02a4: 0x24020001
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02a8: 0xffbf0010
    ctx->pc = 0x1c02a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c02ac: 0x7fb00000
    ctx->pc = 0x1c02acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c02b0: 0x8c830004
    ctx->pc = 0x1c02b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c02b4: 0x1062001e
    ctx->pc = 0x1C02B4u;
    {
        const bool branch_taken_0x1c02b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C02B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c02b4) {
            ctx->pc = 0x1C0330u;
            goto label_1c0330;
        }
    }
    ctx->pc = 0x1C02BCu;
    // 0x1c02bc: 0x10600003
    ctx->pc = 0x1C02BCu;
    {
        const bool branch_taken_0x1c02bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c02bc) {
            ctx->pc = 0x1C02CCu;
            goto label_1c02cc;
        }
    }
    ctx->pc = 0x1C02C4u;
    // 0x1c02c4: 0x10000023
    ctx->pc = 0x1C02C4u;
    {
        const bool branch_taken_0x1c02c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C02C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c02c4) {
            ctx->pc = 0x1C0354u;
            goto label_1c0354;
        }
    }
    ctx->pc = 0x1C02CCu;
label_1c02cc:
    // 0x1c02cc: 0xc06fe04
    ctx->pc = 0x1C02CCu;
    SET_GPR_U32(ctx, 31, 0x1C02D4u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C02D4u; }
    }
    if (ctx->pc != 0x1C02D4u) { return; }
    ctx->pc = 0x1C02D4u;
    // 0x1c02d4: 0x440001e
    ctx->pc = 0x1C02D4u;
    {
        const bool branch_taken_0x1c02d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c02d4) {
            ctx->pc = 0x1C0350u;
            goto label_1c0350;
        }
    }
    ctx->pc = 0x1C02DCu;
    // 0x1c02dc: 0xae00000c
    ctx->pc = 0x1c02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c02e0: 0x3c020032
    ctx->pc = 0x1c02e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c02e4: 0x8e030014
    ctx->pc = 0x1c02e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c02e8: 0x24426c40
    ctx->pc = 0x1c02e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1c02ec: 0x8e08009c
    ctx->pc = 0x1c02ecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c02f0: 0x26050044
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 68));
    // 0x1c02f4: 0x302d
    ctx->pc = 0x1c02f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02f8: 0x24070100
    ctx->pc = 0x1c02f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c02fc: 0x31880
    ctx->pc = 0x1c02fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0300: 0x431021
    ctx->pc = 0x1c0300u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0304: 0x8c440000
    ctx->pc = 0x1c0304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0308: 0xc060558
    ctx->pc = 0x1C0308u;
    SET_GPR_U32(ctx, 31, 0x1C0310u);
    ctx->pc = 0x1C030Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x181560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00181560_0x181560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0310u; }
    }
    if (ctx->pc != 0x1C0310u) { return; }
    ctx->pc = 0x1C0310u;
    // 0x1c0310: 0x4410003
    ctx->pc = 0x1C0310u;
    {
        const bool branch_taken_0x1c0310 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c0310) {
            ctx->pc = 0x1C0320u;
            goto label_1c0320;
        }
    }
    ctx->pc = 0x1C0318u;
    // 0x1c0318: 0x1000000e
    ctx->pc = 0x1C0318u;
    {
        const bool branch_taken_0x1c0318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C031Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c0318) {
            ctx->pc = 0x1C0354u;
            goto label_1c0354;
        }
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x8e020004
    ctx->pc = 0x1c0320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0324: 0x24420001
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0328: 0x10000009
    ctx->pc = 0x1C0328u;
    {
        const bool branch_taken_0x1c0328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C032Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0328) {
            ctx->pc = 0x1C0350u;
            goto label_1c0350;
        }
    }
    ctx->pc = 0x1C0330u;
label_1c0330:
    // 0x1c0330: 0xc06fe04
    ctx->pc = 0x1C0330u;
    SET_GPR_U32(ctx, 31, 0x1C0338u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0338u; }
    }
    if (ctx->pc != 0x1C0338u) { return; }
    ctx->pc = 0x1C0338u;
    // 0x1c0338: 0x4400005
    ctx->pc = 0x1C0338u;
    {
        const bool branch_taken_0x1c0338 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c0338) {
            ctx->pc = 0x1C0350u;
            goto label_1c0350;
        }
    }
    ctx->pc = 0x1C0340u;
    // 0x1c0340: 0xae000004
    ctx->pc = 0x1c0340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c0344: 0x8e02001c
    ctx->pc = 0x1c0344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c0348: 0x10000002
    ctx->pc = 0x1C0348u;
    {
        const bool branch_taken_0x1c0348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C034Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
        if (branch_taken_0x1c0348) {
            ctx->pc = 0x1C0354u;
            goto label_1c0354;
        }
    }
    ctx->pc = 0x1C0350u;
label_1c0350:
    // 0x1c0350: 0x2402ffff
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0354:
    // 0x1c0354: 0xdfbf0010
    ctx->pc = 0x1c0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0358: 0x7bb00000
    ctx->pc = 0x1c0358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c035c: 0x3e00008
    ctx->pc = 0x1C035Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0360u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C02CCu: goto label_1c02cc;
            case 0x1C0320u: goto label_1c0320;
            case 0x1C0330u: goto label_1c0330;
            case 0x1C0350u: goto label_1c0350;
            case 0x1C0354u: goto label_1c0354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0364u;
    // 0x1c0364: 0x0
    ctx->pc = 0x1c0364u;
    // NOP
    // 0x1c0368: 0x0
    ctx->pc = 0x1c0368u;
    // NOP
    // 0x1c036c: 0x0
    ctx->pc = 0x1c036cu;
    // NOP
}
