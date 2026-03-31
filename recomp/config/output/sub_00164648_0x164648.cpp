#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164648
// Address: 0x164648 - 0x1646c0
void sub_00164648_0x164648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164648u;

    // 0x164648: 0x27bdffd0
    ctx->pc = 0x164648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16464c: 0xffb00000
    ctx->pc = 0x16464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164650: 0x80802d
    ctx->pc = 0x164650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164654: 0xffb10008
    ctx->pc = 0x164654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164658: 0xa0882d
    ctx->pc = 0x164658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16465c: 0xffb20010
    ctx->pc = 0x16465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164660: 0xc0902d
    ctx->pc = 0x164660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164664: 0xffb30018
    ctx->pc = 0x164664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164668: 0xe0982d
    ctx->pc = 0x164668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16466c: 0xffb40020
    ctx->pc = 0x16466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x164670: 0xffbf0028
    ctx->pc = 0x164670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x164674: 0xc04c148
    ctx->pc = 0x164674u;
    SET_GPR_U32(ctx, 31, 0x16467Cu);
    ctx->pc = 0x164678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130520_0x130520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16467Cu; }
    }
    if (ctx->pc != 0x16467Cu) { return; }
    ctx->pc = 0x16467Cu;
    // 0x16467c: 0x200202d
    ctx->pc = 0x16467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164680: 0x220282d
    ctx->pc = 0x164680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164684: 0x240302d
    ctx->pc = 0x164684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164688: 0x260382d
    ctx->pc = 0x164688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16468c: 0xc04c11e
    ctx->pc = 0x16468Cu;
    SET_GPR_U32(ctx, 31, 0x164694u);
    ctx->pc = 0x164690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130478_0x130478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164694u; }
    }
    if (ctx->pc != 0x164694u) { return; }
    ctx->pc = 0x164694u;
    // 0x164694: 0x200202d
    ctx->pc = 0x164694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164698: 0x280282d
    ctx->pc = 0x164698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16469c: 0xdfb40020
    ctx->pc = 0x16469cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1646a0: 0xdfb00000
    ctx->pc = 0x1646a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646a4: 0xdfb10008
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1646a8: 0xdfb20010
    ctx->pc = 0x1646a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1646ac: 0xdfb30018
    ctx->pc = 0x1646acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1646b0: 0xdfbf0028
    ctx->pc = 0x1646b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1646b4: 0x804c1ea
    ctx->pc = 0x1646B4u;
    ctx->pc = 0x1646B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1307A8u;
    sub_001307A8_0x1307a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1646BCu;
    // 0x1646bc: 0x0
    ctx->pc = 0x1646bcu;
    // NOP
}
