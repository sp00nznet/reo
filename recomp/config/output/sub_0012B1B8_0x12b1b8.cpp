#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B1B8
// Address: 0x12b1b8 - 0x12b260
void sub_0012B1B8_0x12b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b1b8u;

    // 0x12b1b8: 0x3c020021
    ctx->pc = 0x12b1b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b1bc: 0x27bdffc0
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b1c0: 0x8c477d78
    ctx->pc = 0x12b1c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32120)));
    // 0x12b1c4: 0x3c020026
    ctx->pc = 0x12b1c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x12b1c8: 0x3c050013
    ctx->pc = 0x12b1c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12b1cc: 0x3c030021
    ctx->pc = 0x12b1ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b1d0: 0x24a5aba0
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945696));
    // 0x12b1d4: 0x24630570
    ctx->pc = 0x12b1d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1392));
    // 0x12b1d8: 0x3a0202d
    ctx->pc = 0x12b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1dc: 0x24060800
    ctx->pc = 0x12b1dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x12b1e0: 0x24421cf0
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x12b1e4: 0xffb00030
    ctx->pc = 0x12b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b1e8: 0xafa50004
    ctx->pc = 0x12b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12b1ec: 0xafa30008
    ctx->pc = 0x12b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12b1f0: 0xffbf0038
    ctx->pc = 0x12b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b1f4: 0xafa6000c
    ctx->pc = 0x12b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12b1f8: 0xafa70014
    ctx->pc = 0x12b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12b1fc: 0xc045108
    ctx->pc = 0x12B1FCu;
    SET_GPR_U32(ctx, 31, 0x12B204u);
    ctx->pc = 0x12B200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B204u; }
    }
    if (ctx->pc != 0x12B204u) { return; }
    ctx->pc = 0x12B204u;
    // 0x12b204: 0x3c030021
    ctx->pc = 0x12b204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b208: 0x282d
    ctx->pc = 0x12b208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b20c: 0x247004d8
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1240));
    // 0x12b210: 0xae020000
    ctx->pc = 0x12b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b214: 0x8e020000
    ctx->pc = 0x12b214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b218: 0xc045110
    ctx->pc = 0x12B218u;
    SET_GPR_U32(ctx, 31, 0x12B220u);
    ctx->pc = 0x12B21Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B220u; }
    }
    if (ctx->pc != 0x12B220u) { return; }
    ctx->pc = 0x12B220u;
    // 0x12b220: 0x8e030000
    ctx->pc = 0x12b220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b224: 0x10600006
    ctx->pc = 0x12B224u;
    {
        const bool branch_taken_0x12b224 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B228u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x12b224) {
            ctx->pc = 0x12B240u;
            goto label_12b240;
        }
    }
    ctx->pc = 0x12B22Cu;
    // 0x12b22c: 0x8e040000
    ctx->pc = 0x12b22cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b230: 0xc04ac56
    ctx->pc = 0x12B230u;
    SET_GPR_U32(ctx, 31, 0x12B238u);
    ctx->pc = 0x12B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B158_0x12b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B238u; }
    }
    if (ctx->pc != 0x12B238u) { return; }
    ctx->pc = 0x12B238u;
    // 0x12b238: 0x8e030000
    ctx->pc = 0x12b238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b23c: 0x3c020021
    ctx->pc = 0x12b23cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12b240:
    // 0x12b240: 0x8e040000
    ctx->pc = 0x12b240u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b244: 0xc04512c
    ctx->pc = 0x12B244u;
    SET_GPR_U32(ctx, 31, 0x12B24Cu);
    ctx->pc = 0x12B248u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1124)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B24Cu; }
    }
    if (ctx->pc != 0x12B24Cu) { return; }
    ctx->pc = 0x12B24Cu;
    // 0x12b24c: 0xdfb00030
    ctx->pc = 0x12b24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b250: 0xdfbf0038
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b254: 0x3e00008
    ctx->pc = 0x12B254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B240u: goto label_12b240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B25Cu;
    // 0x12b25c: 0x0
    ctx->pc = 0x12b25cu;
    // NOP
}
