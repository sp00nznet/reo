#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001157E0
// Address: 0x1157e0 - 0x115810
void sub_001157E0_0x1157e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1157e0u;

    // 0x1157e0: 0x52e00
    ctx->pc = 0x1157e0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1157e4: 0x27bdffe0
    ctx->pc = 0x1157e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1157e8: 0x52e03
    ctx->pc = 0x1157e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1157ec: 0xafa40000
    ctx->pc = 0x1157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1157f0: 0xafa50004
    ctx->pc = 0x1157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1157f4: 0x24040003
    ctx->pc = 0x1157f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1157f8: 0xffbf0010
    ctx->pc = 0x1157f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1157fc: 0xc045294
    ctx->pc = 0x1157FCu;
    SET_GPR_U32(ctx, 31, 0x115804u);
    ctx->pc = 0x115800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115804u; }
    }
    if (ctx->pc != 0x115804u) { return; }
    ctx->pc = 0x115804u;
    // 0x115804: 0xdfbf0010
    ctx->pc = 0x115804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115808: 0x3e00008
    ctx->pc = 0x115808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11580Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115810u;
}
