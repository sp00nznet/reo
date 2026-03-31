#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F658
// Address: 0x16f658 - 0x16f6a0
void sub_0016F658_0x16f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f658u;

    // 0x16f658: 0x27bdffe0
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f65c: 0xffb00000
    ctx->pc = 0x16f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f660: 0xa0802d
    ctx->pc = 0x16f660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f664: 0xffb10008
    ctx->pc = 0x16f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f668: 0x80882d
    ctx->pc = 0x16f668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f66c: 0xffbf0010
    ctx->pc = 0x16f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f670: 0x8e240000
    ctx->pc = 0x16f670u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f674: 0x8e050000
    ctx->pc = 0x16f674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f678: 0xc041eac
    ctx->pc = 0x16F678u;
    SET_GPR_U32(ctx, 31, 0x16F680u);
    ctx->pc = 0x16F67Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F680u; }
    }
    if (ctx->pc != 0x16F680u) { return; }
    ctx->pc = 0x16F680u;
    // 0x16f680: 0x8e030004
    ctx->pc = 0x16f680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16f684: 0xdfbf0010
    ctx->pc = 0x16f684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f688: 0xae230004
    ctx->pc = 0x16f688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x16f68c: 0xdfb00000
    ctx->pc = 0x16f68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f690: 0xdfb10008
    ctx->pc = 0x16f690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f694: 0x3e00008
    ctx->pc = 0x16F694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F69Cu;
    // 0x16f69c: 0x0
    ctx->pc = 0x16f69cu;
    // NOP
}
