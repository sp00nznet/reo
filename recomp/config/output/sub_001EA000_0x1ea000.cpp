#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EA000
// Address: 0x1ea000 - 0x1ea02c
void sub_001EA000_0x1ea000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ea000u;

    // 0x1ea000: 0x27bdffe0
    ctx->pc = 0x1ea000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea004: 0xffbe0010
    ctx->pc = 0x1ea004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1ea008: 0x3a0f02d
    ctx->pc = 0x1ea008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea00c: 0x40024800
    ctx->pc = 0x1ea00cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x1ea010: 0xafc20000
    ctx->pc = 0x1ea010u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1ea014: 0x8fc20000
    ctx->pc = 0x1ea014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea018: 0x3c0e82d
    ctx->pc = 0x1ea018u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea01c: 0xdfbe0010
    ctx->pc = 0x1ea01cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea020: 0x27bd0020
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ea024: 0x3e00008
    ctx->pc = 0x1EA024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA02Cu;
}
