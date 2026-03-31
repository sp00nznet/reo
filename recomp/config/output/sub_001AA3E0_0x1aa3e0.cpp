#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA3E0
// Address: 0x1aa3e0 - 0x1aa480
void sub_001AA3E0_0x1aa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa3e0u;

    // 0x1aa3e0: 0x27bdffd0
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa3e4: 0x3c010032
    ctx->pc = 0x1aa3e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa3e8: 0xffbf0020
    ctx->pc = 0x1aa3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa3ec: 0x7fb10010
    ctx->pc = 0x1aa3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa3f0: 0x7fb00000
    ctx->pc = 0x1aa3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa3f4: 0x80882d
    ctx->pc = 0x1aa3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3f8: 0x942443da
    ctx->pc = 0x1aa3f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1aa3fc: 0xc06a878
    ctx->pc = 0x1AA3FCu;
    SET_GPR_U32(ctx, 31, 0x1AA404u);
    ctx->pc = 0x1AA400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA1E0_0x1aa1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA404u; }
    }
    if (ctx->pc != 0x1AA404u) { return; }
    ctx->pc = 0x1AA404u;
    // 0x1aa404: 0x3c01002b
    ctx->pc = 0x1aa404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa408: 0x220282d
    ctx->pc = 0x1aa408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa40c: 0x8c2416a0
    ctx->pc = 0x1aa40cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa410: 0x200302d
    ctx->pc = 0x1aa410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa414: 0xc06a7c8
    ctx->pc = 0x1AA414u;
    SET_GPR_U32(ctx, 31, 0x1AA41Cu);
    ctx->pc = 0x1AA418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9F20_0x1a9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA41Cu; }
    }
    if (ctx->pc != 0x1AA41Cu) { return; }
    ctx->pc = 0x1AA41Cu;
    // 0x1aa41c: 0xdfbf0020
    ctx->pc = 0x1aa41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa420: 0x7bb10010
    ctx->pc = 0x1aa420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa424: 0x7bb00000
    ctx->pc = 0x1aa424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa428: 0x3e00008
    ctx->pc = 0x1AA428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA42Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA430u;
    // 0x1aa430: 0x27bdffd0
    ctx->pc = 0x1aa430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa434: 0x3c010032
    ctx->pc = 0x1aa434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa438: 0xffbf0020
    ctx->pc = 0x1aa438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa43c: 0x7fb10010
    ctx->pc = 0x1aa43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa440: 0x7fb00000
    ctx->pc = 0x1aa440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa444: 0x80882d
    ctx->pc = 0x1aa444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa448: 0x942443da
    ctx->pc = 0x1aa448u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1aa44c: 0xc06a878
    ctx->pc = 0x1AA44Cu;
    SET_GPR_U32(ctx, 31, 0x1AA454u);
    ctx->pc = 0x1AA450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA1E0_0x1aa1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA454u; }
    }
    if (ctx->pc != 0x1AA454u) { return; }
    ctx->pc = 0x1AA454u;
    // 0x1aa454: 0x3c01002b
    ctx->pc = 0x1aa454u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa458: 0x220282d
    ctx->pc = 0x1aa458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa45c: 0x8c2416a0
    ctx->pc = 0x1aa45cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa460: 0x200302d
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa464: 0xc06a7c8
    ctx->pc = 0x1AA464u;
    SET_GPR_U32(ctx, 31, 0x1AA46Cu);
    ctx->pc = 0x1AA468u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9F20_0x1a9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA46Cu; }
    }
    if (ctx->pc != 0x1AA46Cu) { return; }
    ctx->pc = 0x1AA46Cu;
    // 0x1aa46c: 0xdfbf0020
    ctx->pc = 0x1aa46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa470: 0x7bb10010
    ctx->pc = 0x1aa470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa474: 0x7bb00000
    ctx->pc = 0x1aa474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa478: 0x3e00008
    ctx->pc = 0x1AA478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA47Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA480u;
}
