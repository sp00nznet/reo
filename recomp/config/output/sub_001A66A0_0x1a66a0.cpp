#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A66A0
// Address: 0x1a66a0 - 0x1a6720
void sub_001A66A0_0x1a66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a66a0u;

    // 0x1a66a0: 0x27bdffa0
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a66a4: 0x24020002
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a66a8: 0xffbf0030
    ctx->pc = 0x1a66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a66ac: 0x7fb20020
    ctx->pc = 0x1a66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a66b0: 0x7fb10010
    ctx->pc = 0x1a66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a66b4: 0x80902d
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66b8: 0x7fb00000
    ctx->pc = 0x1a66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a66bc: 0xa0882d
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66c0: 0xafa0004c
    ctx->pc = 0x1a66c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1a66c4: 0xc0802d
    ctx->pc = 0x1a66c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66c8: 0xafb20044
    ctx->pc = 0x1a66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
    // 0x1a66cc: 0xafb10048
    ctx->pc = 0x1a66ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
    // 0x1a66d0: 0xafa20040
    ctx->pc = 0x1a66d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1a66d4: 0x8cc50008
    ctx->pc = 0x1a66d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a66d8: 0xc0600de
    ctx->pc = 0x1A66D8u;
    SET_GPR_U32(ctx, 31, 0x1A66E0u);
    ctx->pc = 0x1A66DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x180378u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180378_0x180378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E0u; }
    }
    if (ctx->pc != 0x1A66E0u) { return; }
    ctx->pc = 0x1A66E0u;
    // 0x1a66e0: 0x304300ff
    ctx->pc = 0x1a66e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a66e4: 0x4600006
    ctx->pc = 0x1A66E4u;
    {
        const bool branch_taken_0x1a66e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A66E8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a66e4) {
            ctx->pc = 0x1A6700u;
            goto label_1a6700;
        }
    }
    ctx->pc = 0x1A66ECu;
    // 0x1a66ec: 0x24030001
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a66f0: 0xa2030000
    ctx->pc = 0x1a66f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a66f4: 0xa2000001
    ctx->pc = 0x1a66f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a66f8: 0xa2120002
    ctx->pc = 0x1a66f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x1a66fc: 0xa2110003
    ctx->pc = 0x1a66fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
label_1a6700:
    // 0x1a6700: 0xdfbf0030
    ctx->pc = 0x1a6700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6704: 0x7bb20020
    ctx->pc = 0x1a6704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6708: 0x7bb10010
    ctx->pc = 0x1a6708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a670c: 0x7bb00000
    ctx->pc = 0x1a670cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6710: 0x3e00008
    ctx->pc = 0x1A6710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6700u: goto label_1a6700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6718u;
    // 0x1a6718: 0x0
    ctx->pc = 0x1a6718u;
    // NOP
    // 0x1a671c: 0x0
    ctx->pc = 0x1a671cu;
    // NOP
}
