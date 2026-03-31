#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12d9b8
// Address: 0x12d9b8 - 0x12da10
void entry_12d9b8_0x12da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d9b8u;

    // 0x12d9b8: 0x27bdfff0
    ctx->pc = 0x12d9b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d9bc: 0xffb00000
    ctx->pc = 0x12d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d9c0: 0x80802d
    ctx->pc = 0x12d9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9c4: 0xffbf0008
    ctx->pc = 0x12d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d9c8: 0xc0493d2
    ctx->pc = 0x12D9C8u;
    SET_GPR_U32(ctx, 31, 0x12D9D0u);
    ctx->pc = 0x12D9CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F48_0x124f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D9D0u; }
    }
    if (ctx->pc != 0x12D9D0u) { return; }
    ctx->pc = 0x12D9D0u;
    // 0x12d9d0: 0x5840000b
    ctx->pc = 0x12D9D0u;
    {
        const bool branch_taken_0x12d9d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12d9d0) {
            ctx->pc = 0x12D9D4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12DA00u;
            goto label_12da00;
        }
    }
    ctx->pc = 0x12D9D8u;
    // 0x12d9d8: 0x92020001
    ctx->pc = 0x12d9d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x12d9dc: 0x2442fffe
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x12d9e0: 0x2c420002
    ctx->pc = 0x12d9e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x12d9e4: 0x50400006
    ctx->pc = 0x12D9E4u;
    {
        const bool branch_taken_0x12d9e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d9e4) {
            ctx->pc = 0x12D9E8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12DA00u;
            goto label_12da00;
        }
    }
    ctx->pc = 0x12D9ECu;
    // 0x12d9ec: 0x8e040004
    ctx->pc = 0x12d9ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12d9f0: 0xdfbf0008
    ctx->pc = 0x12d9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d9f4: 0xdfb00000
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d9f8: 0x80493da
    ctx->pc = 0x12D9F8u;
    ctx->pc = 0x12D9FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F68u;
    entry_124f68_0x124f70(rdram, ctx, runtime); return;
    ctx->pc = 0x12DA00u;
label_12da00:
    // 0x12da00: 0x102d
    ctx->pc = 0x12da00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da04: 0xdfbf0008
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12da08: 0x3e00008
    ctx->pc = 0x12DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DA00u: goto label_12da00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DA10u;
}
