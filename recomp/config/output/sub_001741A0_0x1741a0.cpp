#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001741A0
// Address: 0x1741a0 - 0x174218
void sub_001741A0_0x1741a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1741a0u;

    // 0x1741a0: 0x27bdffe0
    ctx->pc = 0x1741a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1741a4: 0xffb00000
    ctx->pc = 0x1741a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1741a8: 0x24b00003
    ctx->pc = 0x1741a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 3));
    // 0x1741ac: 0x108082
    ctx->pc = 0x1741acu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x1741b0: 0xffb20010
    ctx->pc = 0x1741b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1741b4: 0x108080
    ctx->pc = 0x1741b4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1741b8: 0x24d2fffc
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1741bc: 0xffb10008
    ctx->pc = 0x1741bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1741c0: 0x80882d
    ctx->pc = 0x1741c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c4: 0x240302d
    ctx->pc = 0x1741c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c8: 0x282d
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741cc: 0xffbf0018
    ctx->pc = 0x1741ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1741d0: 0xc041f1a
    ctx->pc = 0x1741D0u;
    SET_GPR_U32(ctx, 31, 0x1741D8u);
    ctx->pc = 0x1741D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741D8u; }
    }
    if (ctx->pc != 0x1741D8u) { return; }
    ctx->pc = 0x1741D8u;
    // 0x1741d8: 0xae300000
    ctx->pc = 0x1741d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1741dc: 0x2402000c
    ctx->pc = 0x1741dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1741e0: 0x242001a
    ctx->pc = 0x1741e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1741e4: 0x50400001
    ctx->pc = 0x1741E4u;
    {
        const bool branch_taken_0x1741e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1741e4) {
            ctx->pc = 0x1741E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1741ECu;
            goto label_1741ec;
        }
    }
    ctx->pc = 0x1741ECu;
label_1741ec:
    // 0x1741ec: 0xae200010
    ctx->pc = 0x1741ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1741f0: 0xae200008
    ctx->pc = 0x1741f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1741f4: 0xae20000c
    ctx->pc = 0x1741f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1741f8: 0xdfb00000
    ctx->pc = 0x1741f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1741fc: 0xdfbf0018
    ctx->pc = 0x1741fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174200: 0x9012
    ctx->pc = 0x174200u;
    SET_GPR_U32(ctx, 18, ctx->lo);
    // 0x174204: 0xae320004
    ctx->pc = 0x174204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x174208: 0xdfb10008
    ctx->pc = 0x174208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17420c: 0xdfb20010
    ctx->pc = 0x17420cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174210: 0x3e00008
    ctx->pc = 0x174210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1741ECu: goto label_1741ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174218u;
}
