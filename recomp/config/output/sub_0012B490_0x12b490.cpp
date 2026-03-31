#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B490
// Address: 0x12b490 - 0x12b530
void sub_0012B490_0x12b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b490u;

    // 0x12b490: 0x3c020021
    ctx->pc = 0x12b490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b494: 0x27bdffc0
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b498: 0x8c477d78
    ctx->pc = 0x12b498u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32120)));
    // 0x12b49c: 0x3c020026
    ctx->pc = 0x12b49cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x12b4a0: 0x3c050013
    ctx->pc = 0x12b4a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12b4a4: 0x3c030021
    ctx->pc = 0x12b4a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b4a8: 0xffb00030
    ctx->pc = 0x12b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b4ac: 0x3c100021
    ctx->pc = 0x12b4acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x12b4b0: 0x24635d70
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23920));
    // 0x12b4b4: 0x3a0202d
    ctx->pc = 0x12b4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4b8: 0x24062000
    ctx->pc = 0x12b4b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x12b4bc: 0x24a5af60
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946656));
    // 0x12b4c0: 0x24421cf0
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x12b4c4: 0xffbf0038
    ctx->pc = 0x12b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b4c8: 0xafa50004
    ctx->pc = 0x12b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12b4cc: 0x261004f0
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1264));
    // 0x12b4d0: 0xafa30008
    ctx->pc = 0x12b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12b4d4: 0xafa6000c
    ctx->pc = 0x12b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12b4d8: 0xafa70014
    ctx->pc = 0x12b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12b4dc: 0xc045108
    ctx->pc = 0x12B4DCu;
    SET_GPR_U32(ctx, 31, 0x12B4E4u);
    ctx->pc = 0x12B4E0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4E4u; }
    }
    if (ctx->pc != 0x12B4E4u) { return; }
    ctx->pc = 0x12B4E4u;
    // 0x12b4e4: 0xae020000
    ctx->pc = 0x12b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b4e8: 0x282d
    ctx->pc = 0x12b4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4ec: 0x8e020000
    ctx->pc = 0x12b4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b4f0: 0xc045110
    ctx->pc = 0x12B4F0u;
    SET_GPR_U32(ctx, 31, 0x12B4F8u);
    ctx->pc = 0x12B4F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4F8u; }
    }
    if (ctx->pc != 0x12B4F8u) { return; }
    ctx->pc = 0x12B4F8u;
    // 0x12b4f8: 0x8e040000
    ctx->pc = 0x12b4f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b4fc: 0x3c020021
    ctx->pc = 0x12b4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b500: 0xc04512c
    ctx->pc = 0x12B500u;
    SET_GPR_U32(ctx, 31, 0x12B508u);
    ctx->pc = 0x12B504u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1148)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B508u; }
    }
    if (ctx->pc != 0x12B508u) { return; }
    ctx->pc = 0x12B508u;
    // 0x12b508: 0x8e040000
    ctx->pc = 0x12b508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b50c: 0xc04ac56
    ctx->pc = 0x12B50Cu;
    SET_GPR_U32(ctx, 31, 0x12B514u);
    ctx->pc = 0x12B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B158_0x12b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B514u; }
    }
    if (ctx->pc != 0x12B514u) { return; }
    ctx->pc = 0x12B514u;
    // 0x12b514: 0x3c030021
    ctx->pc = 0x12b514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b518: 0x246304ec
    ctx->pc = 0x12b518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1260));
    // 0x12b51c: 0xdfb00030
    ctx->pc = 0x12b51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b520: 0x8c620000
    ctx->pc = 0x12b520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b524: 0xdfbf0038
    ctx->pc = 0x12b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b528: 0x3e00008
    ctx->pc = 0x12B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B530u;
}
