#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168578
// Address: 0x168578 - 0x168610
void sub_00168578_0x168578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168578u;

    // 0x168578: 0x27bdffb0
    ctx->pc = 0x168578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16857c: 0xffb00020
    ctx->pc = 0x16857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x168580: 0x80802d
    ctx->pc = 0x168580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168584: 0xffb10028
    ctx->pc = 0x168584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x168588: 0xa0882d
    ctx->pc = 0x168588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16858c: 0xffb20030
    ctx->pc = 0x16858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x168590: 0xffb30038
    ctx->pc = 0x168590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x168594: 0xffbf0040
    ctx->pc = 0x168594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168598: 0xc0560fc
    ctx->pc = 0x168598u;
    SET_GPR_U32(ctx, 31, 0x1685A0u);
    ctx->pc = 0x16859Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583F0_0x1583f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685A0u; }
    }
    if (ctx->pc != 0x1685A0u) { return; }
    ctx->pc = 0x1685A0u;
    // 0x1685a0: 0x40902d
    ctx->pc = 0x1685a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685a4: 0x27a70010
    ctx->pc = 0x1685a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1685a8: 0x200282d
    ctx->pc = 0x1685a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685ac: 0x220302d
    ctx->pc = 0x1685acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685b0: 0x240202d
    ctx->pc = 0x1685b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685b4: 0x1240000f
    ctx->pc = 0x1685B4u;
    {
        const bool branch_taken_0x1685b4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1685B8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 20));
        if (branch_taken_0x1685b4) {
            ctx->pc = 0x1685F4u;
            goto label_1685f4;
        }
    }
    ctx->pc = 0x1685BCu;
    // 0x1685bc: 0xc055900
    ctx->pc = 0x1685BCu;
    SET_GPR_U32(ctx, 31, 0x1685C4u);
    ctx->pc = 0x156400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156400_0x156400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685C4u; }
    }
    if (ctx->pc != 0x1685C4u) { return; }
    ctx->pc = 0x1685C4u;
    // 0x1685c4: 0x3c030001
    ctx->pc = 0x1685c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1685c8: 0x8fa20014
    ctx->pc = 0x1685c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1685cc: 0x3a0282d
    ctx->pc = 0x1685ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685d0: 0x431024
    ctx->pc = 0x1685d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1685d4: 0x10400007
    ctx->pc = 0x1685D4u;
    {
        const bool branch_taken_0x1685d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1685D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1685d4) {
            ctx->pc = 0x1685F4u;
            goto label_1685f4;
        }
    }
    ctx->pc = 0x1685DCu;
    // 0x1685dc: 0xc055f74
    ctx->pc = 0x1685DCu;
    SET_GPR_U32(ctx, 31, 0x1685E4u);
    ctx->pc = 0x157DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157DD0_0x157dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685E4u; }
    }
    if (ctx->pc != 0x1685E4u) { return; }
    ctx->pc = 0x1685E4u;
    // 0x1685e4: 0xc05615a
    ctx->pc = 0x1685E4u;
    SET_GPR_U32(ctx, 31, 0x1685ECu);
    ctx->pc = 0x1685E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158568u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158568_0x158568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685ECu; }
    }
    if (ctx->pc != 0x1685ECu) { return; }
    ctx->pc = 0x1685ECu;
    // 0x1685ec: 0x8fa30008
    ctx->pc = 0x1685ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1685f0: 0xae630000
    ctx->pc = 0x1685f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1685f4:
    // 0x1685f4: 0xdfb00020
    ctx->pc = 0x1685f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1685f8: 0xdfb10028
    ctx->pc = 0x1685f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1685fc: 0xdfb20030
    ctx->pc = 0x1685fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168600: 0xdfb30038
    ctx->pc = 0x168600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x168604: 0xdfbf0040
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168608: 0x3e00008
    ctx->pc = 0x168608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16860Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1685F4u: goto label_1685f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168610u;
}
