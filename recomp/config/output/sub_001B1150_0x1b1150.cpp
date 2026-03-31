#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1150
// Address: 0x1b1150 - 0x1b11e0
void sub_001B1150_0x1b1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1150u;

    // 0x1b1150: 0x27bdfff0
    ctx->pc = 0x1b1150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1154: 0x3c040050
    ctx->pc = 0x1b1154u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1b1158: 0x3c020007
    ctx->pc = 0x1b1158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)7 << 16));
    // 0x1b115c: 0xffbf0000
    ctx->pc = 0x1b115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1160: 0x24848fb0
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938544));
    // 0x1b1164: 0x282d
    ctx->pc = 0x1b1164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1168: 0xc041f1a
    ctx->pc = 0x1B1168u;
    SET_GPR_U32(ctx, 31, 0x1B1170u);
    ctx->pc = 0x1B116Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 2048));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1170u; }
    }
    if (ctx->pc != 0x1B1170u) { return; }
    ctx->pc = 0x1B1170u;
    // 0x1b1170: 0x3c03004f
    ctx->pc = 0x1b1170u;
    SET_GPR_U32(ctx, 3, ((uint32_t)79 << 16));
    // 0x1b1174: 0x3c070057
    ctx->pc = 0x1b1174u;
    SET_GPR_U32(ctx, 7, ((uint32_t)87 << 16));
    // 0x1b1178: 0x2463dd80
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958464));
    // 0x1b117c: 0x3c01004f
    ctx->pc = 0x1b117cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)79 << 16));
    // 0x1b1180: 0x24e79620
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294940192));
    // 0x1b1184: 0xac23cb70
    ctx->pc = 0x1b1184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953840), GPR_U32(ctx, 3));
    // 0x1b1188: 0x302d
    ctx->pc = 0x1b1188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b118c:
    // 0x1b118c: 0x3c01004f
    ctx->pc = 0x1b118cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)79 << 16));
    // 0x1b1190: 0x24c30001
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b1194: 0x8c25cb70
    ctx->pc = 0x1b1194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294953840)));
    // 0x1b1198: 0x3343c
    ctx->pc = 0x1b1198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b119c: 0x6343f
    ctx->pc = 0x1b119cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1b11a0: 0x28c30480
    ctx->pc = 0x1b11a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 1152));
    // 0x1b11a4: 0x24a4fffc
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1b11a8: 0x3c01004f
    ctx->pc = 0x1b11a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)79 << 16));
    // 0x1b11ac: 0xac24cb70
    ctx->pc = 0x1b11acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953840), GPR_U32(ctx, 4));
    // 0x1b11b0: 0xaca7fffc
    ctx->pc = 0x1b11b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 7));
    // 0x1b11b4: 0x1460fff5
    ctx->pc = 0x1B11B4u;
    {
        const bool branch_taken_0x1b11b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B11B8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966896));
        if (branch_taken_0x1b11b4) {
            ctx->pc = 0x1B118Cu;
            goto label_1b118c;
        }
    }
    ctx->pc = 0x1B11BCu;
    // 0x1b11bc: 0x24030480
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1152));
    // 0x1b11c0: 0x3c01004f
    ctx->pc = 0x1b11c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)79 << 16));
    // 0x1b11c4: 0xa423dd80
    ctx->pc = 0x1b11c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958464), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b11c8: 0xdfbf0000
    ctx->pc = 0x1b11c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b11cc: 0x3e00008
    ctx->pc = 0x1B11CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B118Cu: goto label_1b118c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B11D4u;
    // 0x1b11d4: 0x0
    ctx->pc = 0x1b11d4u;
    // NOP
    // 0x1b11d8: 0x0
    ctx->pc = 0x1b11d8u;
    // NOP
    // 0x1b11dc: 0x0
    ctx->pc = 0x1b11dcu;
    // NOP
}
