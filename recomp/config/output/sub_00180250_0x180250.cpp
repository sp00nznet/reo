#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180250
// Address: 0x180250 - 0x1802d0
void sub_00180250_0x180250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180250u;

    // 0x180250: 0x27bdffb0
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180254: 0xffbf0040
    ctx->pc = 0x180254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x180258: 0x7fb30030
    ctx->pc = 0x180258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18025c: 0x7fb20020
    ctx->pc = 0x18025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180260: 0xa0982d
    ctx->pc = 0x180260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180264: 0x7fb10010
    ctx->pc = 0x180264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180268: 0x80902d
    ctx->pc = 0x180268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18026c: 0x7fb00000
    ctx->pc = 0x18026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180270: 0x80882d
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180274: 0x8c900014
    ctx->pc = 0x180274u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x180278: 0xc045228
    ctx->pc = 0x180278u;
    SET_GPR_U32(ctx, 31, 0x180280u);
    ctx->pc = 0x18027Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180280u; }
    }
    if (ctx->pc != 0x180280u) { return; }
    ctx->pc = 0x180280u;
    // 0x180280: 0x12000007
    ctx->pc = 0x180280u;
    {
        const bool branch_taken_0x180280 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x180280) {
            ctx->pc = 0x1802A0u;
            goto label_1802a0;
        }
    }
    ctx->pc = 0x180288u;
    // 0x180288: 0x2539021
    ctx->pc = 0x180288u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x18028c: 0x200302d
    ctx->pc = 0x18028cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180290: 0x240202d
    ctx->pc = 0x180290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180294: 0xc041f1a
    ctx->pc = 0x180294u;
    SET_GPR_U32(ctx, 31, 0x18029Cu);
    ctx->pc = 0x180298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18029Cu; }
    }
    if (ctx->pc != 0x18029Cu) { return; }
    ctx->pc = 0x18029Cu;
    // 0x18029c: 0x0
    ctx->pc = 0x18029cu;
    // NOP
label_1802a0:
    // 0x1802a0: 0x8e240018
    ctx->pc = 0x1802a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1802a4: 0x8e25001c
    ctx->pc = 0x1802a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1802a8: 0x302d
    ctx->pc = 0x1802a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802ac: 0xc06007c
    ctx->pc = 0x1802ACu;
    SET_GPR_U32(ctx, 31, 0x1802B4u);
    ctx->pc = 0x1802B0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1801F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001801F0_0x1801f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802B4u; }
    }
    if (ctx->pc != 0x1802B4u) { return; }
    ctx->pc = 0x1802B4u;
    // 0x1802b4: 0xdfbf0040
    ctx->pc = 0x1802b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1802b8: 0x7bb30030
    ctx->pc = 0x1802b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1802bc: 0x7bb20020
    ctx->pc = 0x1802bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1802c0: 0x7bb10010
    ctx->pc = 0x1802c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1802c4: 0x7bb00000
    ctx->pc = 0x1802c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1802c8: 0x3e00008
    ctx->pc = 0x1802C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1802CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1802A0u: goto label_1802a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1802D0u;
}
