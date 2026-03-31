#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C890
// Address: 0x12c890 - 0x12c8b0
void sub_0012C890_0x12c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c890u;

    // 0x12c890: 0x3e00008
    ctx->pc = 0x12C890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C898u;
    // 0x12c898: 0x27bdfff0
    ctx->pc = 0x12c898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c89c: 0xffbf0000
    ctx->pc = 0x12c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c8a0: 0xdfbf0000
    ctx->pc = 0x12c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c8a4: 0x804fc40
    ctx->pc = 0x12C8A4u;
    ctx->pc = 0x12C8A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F100u;
    entry_13f100_0x13f158(rdram, ctx, runtime); return;
    ctx->pc = 0x12C8ACu;
    // 0x12c8ac: 0x0
    ctx->pc = 0x12c8acu;
    // NOP
}
