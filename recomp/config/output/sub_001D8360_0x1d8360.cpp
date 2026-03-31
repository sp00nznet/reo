#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8360
// Address: 0x1d8360 - 0x1d83d0
void sub_001D8360_0x1d8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8360u;

    // 0x1d8360: 0x27bdffd0
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8364: 0xffbf0020
    ctx->pc = 0x1d8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8368: 0x7fb10010
    ctx->pc = 0x1d8368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d836c: 0x7fb00000
    ctx->pc = 0x1d836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8370: 0x80882d
    ctx->pc = 0x1d8370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8374: 0xc075e38
    ctx->pc = 0x1D8374u;
    SET_GPR_U32(ctx, 31, 0x1D837Cu);
    ctx->pc = 0x1D8378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D837Cu; }
    }
    if (ctx->pc != 0x1D837Cu) { return; }
    ctx->pc = 0x1D837Cu;
    // 0x1d837c: 0x3c020034
    ctx->pc = 0x1d837cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d8380: 0x3c050034
    ctx->pc = 0x1d8380u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8384: 0x2442729c
    ctx->pc = 0x1d8384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d8388: 0x3c070034
    ctx->pc = 0x1d8388u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d838c: 0xac510000
    ctx->pc = 0x1d838cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1d8390: 0x2404001d
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1d8394: 0x24a57280
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8398: 0xac500004
    ctx->pc = 0x1d8398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1d839c: 0x24060028
    ctx->pc = 0x1d839cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d83a0: 0x24e76280
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d83a4: 0xc075e40
    ctx->pc = 0x1D83A4u;
    SET_GPR_U32(ctx, 31, 0x1D83ACu);
    ctx->pc = 0x1D83A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83ACu; }
    }
    if (ctx->pc != 0x1D83ACu) { return; }
    ctx->pc = 0x1D83ACu;
    // 0x1d83ac: 0x3c010034
    ctx->pc = 0x1d83acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d83b0: 0xc075e3c
    ctx->pc = 0x1D83B0u;
    SET_GPR_U32(ctx, 31, 0x1D83B8u);
    ctx->pc = 0x1D83B4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83B8u; }
    }
    if (ctx->pc != 0x1D83B8u) { return; }
    ctx->pc = 0x1D83B8u;
    // 0x1d83b8: 0x200102d
    ctx->pc = 0x1d83b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83bc: 0xdfbf0020
    ctx->pc = 0x1d83bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d83c0: 0x7bb10010
    ctx->pc = 0x1d83c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d83c4: 0x7bb00000
    ctx->pc = 0x1d83c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d83c8: 0x3e00008
    ctx->pc = 0x1D83C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D83D0u;
}
