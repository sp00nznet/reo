#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001383E8
// Address: 0x1383e8 - 0x1384a0
void sub_001383E8_0x1383e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1383e8u;

    // 0x1383e8: 0x27bdffe0
    ctx->pc = 0x1383e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1383ec: 0xffb00000
    ctx->pc = 0x1383ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1383f0: 0x80802d
    ctx->pc = 0x1383f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383f4: 0xffb10008
    ctx->pc = 0x1383f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1383f8: 0xa0882d
    ctx->pc = 0x1383f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383fc: 0xffb20010
    ctx->pc = 0x1383fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138400: 0xffbf0018
    ctx->pc = 0x138400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x138404: 0xc04e0bc
    ctx->pc = 0x138404u;
    SET_GPR_U32(ctx, 31, 0x13840Cu);
    ctx->pc = 0x138408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001382F0_0x1382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13840Cu; }
    }
    if (ctx->pc != 0x13840Cu) { return; }
    ctx->pc = 0x13840Cu;
    // 0x13840c: 0x3c020022
    ctx->pc = 0x13840cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138410: 0x24030001
    ctx->pc = 0x138410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x138414: 0x8c47bbf8
    ctx->pc = 0x138414u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294949880)));
    // 0x138418: 0x200202d
    ctx->pc = 0x138418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13841c: 0x11283c
    ctx->pc = 0x13841cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x138420: 0x5283f
    ctx->pc = 0x138420u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x138424: 0x14e3000c
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x138428u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138424) {
            ctx->pc = 0x138458u;
            goto label_138458;
        }
    }
    ctx->pc = 0x13842Cu;
    // 0x13842c: 0xc046c04
    ctx->pc = 0x13842Cu;
    SET_GPR_U32(ctx, 31, 0x138434u);
    ctx->pc = 0x138430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B010_0x11b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138434u; }
    }
    if (ctx->pc != 0x138434u) { return; }
    ctx->pc = 0x138434u;
    // 0x138434: 0x3c040024
    ctx->pc = 0x138434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138438: 0x40802d
    ctx->pc = 0x138438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13843c: 0x2484c700
    ctx->pc = 0x13843cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952704));
    // 0x138440: 0x601000e
    ctx->pc = 0x138440u;
    {
        const bool branch_taken_0x138440 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x138444u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138440) {
            ctx->pc = 0x13847Cu;
            goto label_13847c;
        }
    }
    ctx->pc = 0x138448u;
    // 0x138448: 0xc045a12
    ctx->pc = 0x138448u;
    SET_GPR_U32(ctx, 31, 0x138450u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138450u; }
    }
    if (ctx->pc != 0x138450u) { return; }
    ctx->pc = 0x138450u;
    // 0x138450: 0x1000000a
    ctx->pc = 0x138450u;
    {
        const bool branch_taken_0x138450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x138450) {
            ctx->pc = 0x13847Cu;
            goto label_13847c;
        }
    }
    ctx->pc = 0x138458u;
label_138458:
    // 0x138458: 0xc04639e
    ctx->pc = 0x138458u;
    SET_GPR_U32(ctx, 31, 0x138460u);
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138460u; }
    }
    if (ctx->pc != 0x138460u) { return; }
    ctx->pc = 0x138460u;
    // 0x138460: 0x3c040024
    ctx->pc = 0x138460u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138464: 0x40802d
    ctx->pc = 0x138464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138468: 0x2484c720
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952736));
    // 0x13846c: 0x6010003
    ctx->pc = 0x13846Cu;
    {
        const bool branch_taken_0x13846c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x138470u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13846c) {
            ctx->pc = 0x13847Cu;
            goto label_13847c;
        }
    }
    ctx->pc = 0x138474u;
    // 0x138474: 0xc045a12
    ctx->pc = 0x138474u;
    SET_GPR_U32(ctx, 31, 0x13847Cu);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13847Cu; }
    }
    if (ctx->pc != 0x13847Cu) { return; }
    ctx->pc = 0x13847Cu;
label_13847c:
    // 0x13847c: 0xc04e0ca
    ctx->pc = 0x13847Cu;
    SET_GPR_U32(ctx, 31, 0x138484u);
    ctx->pc = 0x138328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138328_0x138328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138484u; }
    }
    if (ctx->pc != 0x138484u) { return; }
    ctx->pc = 0x138484u;
    // 0x138484: 0x200102d
    ctx->pc = 0x138484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138488: 0xdfb10008
    ctx->pc = 0x138488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13848c: 0xdfb00000
    ctx->pc = 0x13848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138490: 0xdfb20010
    ctx->pc = 0x138490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138494: 0xdfbf0018
    ctx->pc = 0x138494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138498: 0x3e00008
    ctx->pc = 0x138498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13849Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138458u: goto label_138458;
            case 0x13847Cu: goto label_13847c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1384A0u;
}
