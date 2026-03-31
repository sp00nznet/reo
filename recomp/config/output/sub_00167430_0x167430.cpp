#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167430
// Address: 0x167430 - 0x1674a0
void sub_00167430_0x167430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167430u;

    // 0x167430: 0x510c0
    ctx->pc = 0x167430u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167434: 0x27bdffd0
    ctx->pc = 0x167434u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167438: 0x451023
    ctx->pc = 0x167438u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16743c: 0xffb00010
    ctx->pc = 0x16743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167440: 0x21080
    ctx->pc = 0x167440u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167444: 0xffb10018
    ctx->pc = 0x167444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167448: 0x451021
    ctx->pc = 0x167448u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16744c: 0xffb20020
    ctx->pc = 0x16744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167450: 0x21080
    ctx->pc = 0x167450u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167454: 0xc0882d
    ctx->pc = 0x167454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167458: 0x828021
    ctx->pc = 0x167458u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16745c: 0x3a0202d
    ctx->pc = 0x16745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167460: 0x26101168
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4456));
    // 0x167464: 0xffbf0028
    ctx->pc = 0x167464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x167468: 0xc05a7b2
    ctx->pc = 0x167468u;
    SET_GPR_U32(ctx, 31, 0x167470u);
    ctx->pc = 0x16746Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167470u; }
    }
    if (ctx->pc != 0x167470u) { return; }
    ctx->pc = 0x167470u;
    // 0x167470: 0x8e030000
    ctx->pc = 0x167470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167474: 0x3a0202d
    ctx->pc = 0x167474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167478: 0xae230000
    ctx->pc = 0x167478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x16747c: 0x8e020004
    ctx->pc = 0x16747cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x167480: 0xc05a7b8
    ctx->pc = 0x167480u;
    SET_GPR_U32(ctx, 31, 0x167488u);
    ctx->pc = 0x167484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167488u; }
    }
    if (ctx->pc != 0x167488u) { return; }
    ctx->pc = 0x167488u;
    // 0x167488: 0xdfb00010
    ctx->pc = 0x167488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16748c: 0xdfb10018
    ctx->pc = 0x16748cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167490: 0xdfb20020
    ctx->pc = 0x167490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167494: 0xdfbf0028
    ctx->pc = 0x167494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167498: 0x3e00008
    ctx->pc = 0x167498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16749Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1674A0u;
}
