#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001888E0
// Address: 0x1888e0 - 0x188938
void sub_001888E0_0x1888e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1888e0u;

    // 0x1888e0: 0x27bdffd0
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1888e4: 0x3c040029
    ctx->pc = 0x1888e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x1888e8: 0xffb00010
    ctx->pc = 0x1888e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1888ec: 0x3c058000
    ctx->pc = 0x1888ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1888f0: 0x3c100029
    ctx->pc = 0x1888f0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)41 << 16));
    // 0x1888f4: 0xffbf0020
    ctx->pc = 0x1888f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1888f8: 0x26070c00
    ctx->pc = 0x1888f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 3072));
    // 0x1888fc: 0x24840b88
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2952));
    // 0x188900: 0xafa00000
    ctx->pc = 0x188900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188904: 0x34a51363
    ctx->pc = 0x188904u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4963));
    // 0x188908: 0x302d
    ctx->pc = 0x188908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18890c: 0x24080280
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188910: 0xe0482d
    ctx->pc = 0x188910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188914: 0x240a0280
    ctx->pc = 0x188914u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188918: 0xc045e7a
    ctx->pc = 0x188918u;
    SET_GPR_U32(ctx, 31, 0x188920u);
    ctx->pc = 0x18891Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188920u; }
    }
    if (ctx->pc != 0x188920u) { return; }
    ctx->pc = 0x188920u;
    // 0x188920: 0x8e020c00
    ctx->pc = 0x188920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x188924: 0xdfbf0020
    ctx->pc = 0x188924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188928: 0xdfb00010
    ctx->pc = 0x188928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18892c: 0x3e00008
    ctx->pc = 0x18892Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188934u;
    // 0x188934: 0x0
    ctx->pc = 0x188934u;
    // NOP
}
