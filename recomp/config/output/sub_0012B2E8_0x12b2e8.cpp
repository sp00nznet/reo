#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B2E8
// Address: 0x12b2e8 - 0x12b370
void sub_0012B2E8_0x12b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b2e8u;

    // 0x12b2e8: 0x3c020021
    ctx->pc = 0x12b2e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b2ec: 0x27bdffc0
    ctx->pc = 0x12b2ecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b2f0: 0x8c477d78
    ctx->pc = 0x12b2f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32120)));
    // 0x12b2f4: 0x3c020026
    ctx->pc = 0x12b2f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x12b2f8: 0x3c050013
    ctx->pc = 0x12b2f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12b2fc: 0x3c030021
    ctx->pc = 0x12b2fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b300: 0xffb00030
    ctx->pc = 0x12b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b304: 0x3c100021
    ctx->pc = 0x12b304u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x12b308: 0x24631d70
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7536));
    // 0x12b30c: 0x3a0202d
    ctx->pc = 0x12b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b310: 0x24061000
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12b314: 0x24a5ac90
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945936));
    // 0x12b318: 0x24421cf0
    ctx->pc = 0x12b318u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x12b31c: 0xffbf0038
    ctx->pc = 0x12b31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b320: 0xafa50004
    ctx->pc = 0x12b320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12b324: 0x261004e0
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1248));
    // 0x12b328: 0xafa30008
    ctx->pc = 0x12b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12b32c: 0xafa6000c
    ctx->pc = 0x12b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12b330: 0xafa70014
    ctx->pc = 0x12b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12b334: 0xc045108
    ctx->pc = 0x12B334u;
    SET_GPR_U32(ctx, 31, 0x12B33Cu);
    ctx->pc = 0x12B338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B33Cu; }
    }
    if (ctx->pc != 0x12B33Cu) { return; }
    ctx->pc = 0x12B33Cu;
    // 0x12b33c: 0xae020000
    ctx->pc = 0x12b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b340: 0x282d
    ctx->pc = 0x12b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b344: 0x8e020000
    ctx->pc = 0x12b344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b348: 0xc045110
    ctx->pc = 0x12B348u;
    SET_GPR_U32(ctx, 31, 0x12B350u);
    ctx->pc = 0x12B34Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B350u; }
    }
    if (ctx->pc != 0x12B350u) { return; }
    ctx->pc = 0x12B350u;
    // 0x12b350: 0x8e040000
    ctx->pc = 0x12b350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b354: 0x3c020021
    ctx->pc = 0x12b354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b358: 0xc04512c
    ctx->pc = 0x12B358u;
    SET_GPR_U32(ctx, 31, 0x12B360u);
    ctx->pc = 0x12B35Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1132)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B360u; }
    }
    if (ctx->pc != 0x12B360u) { return; }
    ctx->pc = 0x12B360u;
    // 0x12b360: 0xdfb00030
    ctx->pc = 0x12b360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b364: 0xdfbf0038
    ctx->pc = 0x12b364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b368: 0x3e00008
    ctx->pc = 0x12B368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B36Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B370u;
}
