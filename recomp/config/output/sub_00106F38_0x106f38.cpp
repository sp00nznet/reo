#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106F38
// Address: 0x106f38 - 0x106f80
void sub_00106F38_0x106f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106f38u;

    // 0x106f38: 0x27bdffe0
    ctx->pc = 0x106f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106f3c: 0xffb00000
    ctx->pc = 0x106f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106f40: 0x3c100021
    ctx->pc = 0x106f40u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x106f44: 0xffb10008
    ctx->pc = 0x106f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106f48: 0x80882d
    ctx->pc = 0x106f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f4c: 0xffbf0010
    ctx->pc = 0x106f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106f50: 0x261097f0
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294940656));
    // 0x106f54: 0xc041f4a
    ctx->pc = 0x106F54u;
    SET_GPR_U32(ctx, 31, 0x106F5Cu);
    ctx->pc = 0x106F58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x107D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107D28_0x107d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F5Cu; }
    }
    if (ctx->pc != 0x106F5Cu) { return; }
    ctx->pc = 0x106F5Cu;
    // 0x106f5c: 0x8e040000
    ctx->pc = 0x106f5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106f60: 0xc041636
    ctx->pc = 0x106F60u;
    SET_GPR_U32(ctx, 31, 0x106F68u);
    ctx->pc = 0x106F64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F68u; }
    }
    if (ctx->pc != 0x106F68u) { return; }
    ctx->pc = 0x106F68u;
    // 0x106f68: 0x8e040000
    ctx->pc = 0x106f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106f6c: 0xdfb10008
    ctx->pc = 0x106f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106f70: 0xdfb00000
    ctx->pc = 0x106f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106f74: 0xdfbf0010
    ctx->pc = 0x106f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106f78: 0x8041f6a
    ctx->pc = 0x106F78u;
    ctx->pc = 0x106F7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107DA8u;
    sub_00107DA8_0x107da8(rdram, ctx, runtime); return;
    ctx->pc = 0x106F80u;
}
