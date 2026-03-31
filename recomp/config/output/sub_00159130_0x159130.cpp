#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159130
// Address: 0x159130 - 0x1591e8
void sub_00159130_0x159130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159130u;

    // 0x159130: 0x27bdffd0
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159134: 0xffb00000
    ctx->pc = 0x159134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159138: 0xa0802d
    ctx->pc = 0x159138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15913c: 0xffb30018
    ctx->pc = 0x15913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x159140: 0xffb10008
    ctx->pc = 0x159140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159144: 0xffb20010
    ctx->pc = 0x159144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159148: 0xffbf0020
    ctx->pc = 0x159148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15914c: 0xc056dec
    ctx->pc = 0x15914Cu;
    SET_GPR_U32(ctx, 31, 0x159154u);
    ctx->pc = 0x159150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159154u; }
    }
    if (ctx->pc != 0x159154u) { return; }
    ctx->pc = 0x159154u;
    // 0x159154: 0x1040000a
    ctx->pc = 0x159154u;
    {
        const bool branch_taken_0x159154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x159158u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x159154) {
            ctx->pc = 0x159180u;
            goto label_159180;
        }
    }
    ctx->pc = 0x15915Cu;
    // 0x15915c: 0x3c05ff03
    ctx->pc = 0x15915cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x159160: 0xdfb00000
    ctx->pc = 0x159160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159164: 0x202d
    ctx->pc = 0x159164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159168: 0xdfb20010
    ctx->pc = 0x159168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15916c: 0x34a5020a
    ctx->pc = 0x15916cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 522));
    // 0x159170: 0xdfb30018
    ctx->pc = 0x159170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159174: 0xdfbf0020
    ctx->pc = 0x159174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159178: 0x80563ce
    ctx->pc = 0x159178u;
    ctx->pc = 0x15917Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x159180u;
label_159180:
    // 0x159180: 0x3c11ff03
    ctx->pc = 0x159180u;
    SET_GPR_U32(ctx, 17, ((uint32_t)65283 << 16));
    // 0x159184: 0x24120004
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
    // 0x159188: 0x36310305
    ctx->pc = 0x159188u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 773));
    // 0x15918c: 0x0
    ctx->pc = 0x15918cu;
    // NOP
label_159190:
    // 0x159190: 0xc056b7a
    ctx->pc = 0x159190u;
    SET_GPR_U32(ctx, 31, 0x159198u);
    ctx->pc = 0x159194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159198u; }
    }
    if (ctx->pc != 0x159198u) { return; }
    ctx->pc = 0x159198u;
    // 0x159198: 0x200202d
    ctx->pc = 0x159198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15919c: 0x24050001
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1591a0: 0x24060004
    ctx->pc = 0x1591a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1591a4: 0x10400007
    ctx->pc = 0x1591A4u;
    {
        const bool branch_taken_0x1591a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1591A8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 204));
        if (branch_taken_0x1591a4) {
            ctx->pc = 0x1591C4u;
            goto label_1591c4;
        }
    }
    ctx->pc = 0x1591ACu;
    // 0x1591ac: 0x54600005
    ctx->pc = 0x1591ACu;
    {
        const bool branch_taken_0x1591ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1591ac) {
            ctx->pc = 0x1591B0u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1591C4u;
            goto label_1591c4;
        }
    }
    ctx->pc = 0x1591B4u;
    // 0x1591b4: 0xc056c04
    ctx->pc = 0x1591B4u;
    SET_GPR_U32(ctx, 31, 0x1591BCu);
    ctx->pc = 0x15B010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B010_0x15b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591BCu; }
    }
    if (ctx->pc != 0x1591BCu) { return; }
    ctx->pc = 0x1591BCu;
    // 0x1591bc: 0x1052fff4
    ctx->pc = 0x1591BCu;
    {
        const bool branch_taken_0x1591bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x1591bc) {
            ctx->pc = 0x159190u;
            goto label_159190;
        }
    }
    ctx->pc = 0x1591C4u;
label_1591c4:
    // 0x1591c4: 0x260202d
    ctx->pc = 0x1591c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591c8: 0xdfb30018
    ctx->pc = 0x1591c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1591cc: 0x220282d
    ctx->pc = 0x1591ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591d0: 0xdfb10008
    ctx->pc = 0x1591d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1591d4: 0xdfb00000
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1591d8: 0xdfb20010
    ctx->pc = 0x1591d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1591dc: 0xdfbf0020
    ctx->pc = 0x1591dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1591e0: 0x80563ce
    ctx->pc = 0x1591E0u;
    ctx->pc = 0x1591E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x1591E8u;
}
