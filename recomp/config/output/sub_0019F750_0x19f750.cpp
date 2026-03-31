#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019F750
// Address: 0x19f750 - 0x19f810
void sub_0019F750_0x19f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19f750u;

    // 0x19f750: 0x27bdff60
    ctx->pc = 0x19f750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19f754: 0x3c040004
    ctx->pc = 0x19f754u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    // 0x19f758: 0xffbf0030
    ctx->pc = 0x19f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f75c: 0x282d
    ctx->pc = 0x19f75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f760: 0x7fb20020
    ctx->pc = 0x19f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f764: 0x7fb10010
    ctx->pc = 0x19f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f768: 0x7fb00000
    ctx->pc = 0x19f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f76c: 0xc063714
    ctx->pc = 0x19F76Cu;
    SET_GPR_U32(ctx, 31, 0x19F774u);
    ctx->pc = 0x19F770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F774u; }
    }
    if (ctx->pc != 0x19F774u) { return; }
    ctx->pc = 0x19F774u;
    // 0x19f774: 0x40902d
    ctx->pc = 0x19f774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f778: 0xc063728
    ctx->pc = 0x19F778u;
    SET_GPR_U32(ctx, 31, 0x19F780u);
    ctx->pc = 0x19F77Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F780u; }
    }
    if (ctx->pc != 0x19F780u) { return; }
    ctx->pc = 0x19F780u;
    // 0x19f780: 0x40882d
    ctx->pc = 0x19f780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f784: 0x24054000
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19f788: 0xc06270c
    ctx->pc = 0x19F788u;
    SET_GPR_U32(ctx, 31, 0x19F790u);
    ctx->pc = 0x19F78Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189C30_0x189c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F790u; }
    }
    if (ctx->pc != 0x19F790u) { return; }
    ctx->pc = 0x19F790u;
    // 0x19f790: 0x101180
    ctx->pc = 0x19f790u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 6));
label_19f794:
    // 0x19f794: 0x27a40040
    ctx->pc = 0x19f794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x19f798: 0x24c3c
    ctx->pc = 0x19f798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f79c: 0x282d
    ctx->pc = 0x19f79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7a0: 0x94c3f
    ctx->pc = 0x19f7a0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x19f7a4: 0x24060010
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f7a8: 0x382d
    ctx->pc = 0x19f7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7ac: 0x402d
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7b0: 0x240a0400
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x19f7b4: 0xc044de8
    ctx->pc = 0x19F7B4u;
    SET_GPR_U32(ctx, 31, 0x19F7BCu);
    ctx->pc = 0x19F7B8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1137A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001137A0_0x1137a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7BCu; }
    }
    if (ctx->pc != 0x19F7BCu) { return; }
    ctx->pc = 0x19F7BCu;
    // 0x19f7bc: 0xc045228
    ctx->pc = 0x19F7BCu;
    SET_GPR_U32(ctx, 31, 0x19F7C4u);
    ctx->pc = 0x19F7C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7C4u; }
    }
    if (ctx->pc != 0x19F7C4u) { return; }
    ctx->pc = 0x19F7C4u;
    // 0x19f7c4: 0x27a40040
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x19f7c8: 0xc044e62
    ctx->pc = 0x19F7C8u;
    SET_GPR_U32(ctx, 31, 0x19F7D0u);
    ctx->pc = 0x19F7CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113988u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00113988_0x113988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D0u; }
    }
    if (ctx->pc != 0x19F7D0u) { return; }
    ctx->pc = 0x19F7D0u;
    // 0x19f7d0: 0x202d
    ctx->pc = 0x19f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7d4: 0xc044d22
    ctx->pc = 0x19F7D4u;
    SET_GPR_U32(ctx, 31, 0x19F7DCu);
    ctx->pc = 0x19F7D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00113488_0x113488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7DCu; }
    }
    if (ctx->pc != 0x19F7DCu) { return; }
    ctx->pc = 0x19F7DCu;
    // 0x19f7dc: 0x26100001
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f7e0: 0x2e020010
    ctx->pc = 0x19f7e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 16));
    // 0x19f7e4: 0x1440ffeb
    ctx->pc = 0x19F7E4u;
    {
        const bool branch_taken_0x19f7e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F7E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x19f7e4) {
            ctx->pc = 0x19F794u;
            goto label_19f794;
        }
    }
    ctx->pc = 0x19F7ECu;
    // 0x19f7ec: 0xc063724
    ctx->pc = 0x19F7ECu;
    SET_GPR_U32(ctx, 31, 0x19F7F4u);
    ctx->pc = 0x19F7F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7F4u; }
    }
    if (ctx->pc != 0x19F7F4u) { return; }
    ctx->pc = 0x19F7F4u;
    // 0x19f7f4: 0xdfbf0030
    ctx->pc = 0x19f7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f7f8: 0x7bb20020
    ctx->pc = 0x19f7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f7fc: 0x7bb10010
    ctx->pc = 0x19f7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f800: 0x7bb00000
    ctx->pc = 0x19f800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f804: 0x3e00008
    ctx->pc = 0x19F804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F794u: goto label_19f794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F80Cu;
    // 0x19f80c: 0x0
    ctx->pc = 0x19f80cu;
    // NOP
}
