#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001921F0
// Address: 0x1921f0 - 0x192220
void sub_001921F0_0x1921f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1921f0u;

    // 0x1921f0: 0x8048934
    ctx->pc = 0x1921F0u;
    ctx->pc = 0x1224D0u;
    sub_001224D0_0x1224d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1921F8u;
    // 0x1921f8: 0x0
    ctx->pc = 0x1921f8u;
    // NOP
    // 0x1921fc: 0x0
    ctx->pc = 0x1921fcu;
    // NOP
    // 0x192200: 0x27bdffe0
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192204: 0xffbf0000
    ctx->pc = 0x192204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192208: 0xc0428bc
    ctx->pc = 0x192208u;
    SET_GPR_U32(ctx, 31, 0x192210u);
    ctx->pc = 0x19220Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x10A2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A2F0_0x10a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192210u; }
    }
    if (ctx->pc != 0x192210u) { return; }
    ctx->pc = 0x192210u;
    // 0x192210: 0xdfbf0000
    ctx->pc = 0x192210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192214: 0x3e00008
    ctx->pc = 0x192214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19221Cu;
    // 0x19221c: 0x0
    ctx->pc = 0x19221cu;
    // NOP
}
