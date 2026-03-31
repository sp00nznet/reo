#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001686C8
// Address: 0x1686c8 - 0x168718
void sub_001686C8_0x1686c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1686c8u;

    // 0x1686c8: 0x27bdffe0
    ctx->pc = 0x1686c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1686cc: 0x28a20801
    ctx->pc = 0x1686ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2049));
    // 0x1686d0: 0xffb00000
    ctx->pc = 0x1686d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1686d4: 0x24100800
    ctx->pc = 0x1686d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1686d8: 0xa2800b
    ctx->pc = 0x1686d8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
    // 0x1686dc: 0x80282d
    ctx->pc = 0x1686dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686e0: 0xffb10008
    ctx->pc = 0x1686e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1686e4: 0xc0882d
    ctx->pc = 0x1686e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686e8: 0x26240094
    ctx->pc = 0x1686e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 148));
    // 0x1686ec: 0xffbf0010
    ctx->pc = 0x1686ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1686f0: 0xc055798
    ctx->pc = 0x1686F0u;
    SET_GPR_U32(ctx, 31, 0x1686F8u);
    ctx->pc = 0x1686F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686F8u; }
    }
    if (ctx->pc != 0x1686F8u) { return; }
    ctx->pc = 0x1686F8u;
    // 0x1686f8: 0xdfbf0010
    ctx->pc = 0x1686f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1686fc: 0x220202d
    ctx->pc = 0x1686fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168700: 0xae300090
    ctx->pc = 0x168700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x168704: 0xdfb00000
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168708: 0xdfb10008
    ctx->pc = 0x168708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16870c: 0x805a4cc
    ctx->pc = 0x16870Cu;
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169330u;
    sub_00169330_0x169330(rdram, ctx, runtime); return;
    ctx->pc = 0x168714u;
    // 0x168714: 0x0
    ctx->pc = 0x168714u;
    // NOP
}
