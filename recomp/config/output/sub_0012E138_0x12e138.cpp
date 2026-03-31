#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E138
// Address: 0x12e138 - 0x12e1d0
void sub_0012E138_0x12e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e138u;

    // 0x12e138: 0x3c030022
    ctx->pc = 0x12e138u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x12e13c: 0x24639ee0
    ctx->pc = 0x12e13cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294942432));
    // 0x12e140: 0x80620000
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e144: 0x10400010
    ctx->pc = 0x12E144u;
    {
        const bool branch_taken_0x12e144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E148u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e144) {
            ctx->pc = 0x12E188u;
            goto label_12e188;
        }
    }
    ctx->pc = 0x12E14Cu;
    // 0x12e14c: 0x60302d
    ctx->pc = 0x12e14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e150: 0x60282d
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e154: 0x0
    ctx->pc = 0x12e154u;
    // NOP
label_12e158:
    // 0x12e158: 0x24e70001
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x12e15c: 0x24c6000c
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
    // 0x12e160: 0x28e40010
    ctx->pc = 0x12e160u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), 16));
    // 0x12e164: 0x10800009
    ctx->pc = 0x12E164u;
    {
        const bool branch_taken_0x12e164 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E168u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
        if (branch_taken_0x12e164) {
            ctx->pc = 0x12E18Cu;
            goto label_12e18c;
        }
    }
    ctx->pc = 0x12E16Cu;
    // 0x12e16c: 0x80c20000
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e170: 0x0
    ctx->pc = 0x12e170u;
    // NOP
    // 0x12e174: 0x1440fff8
    ctx->pc = 0x12E174u;
    {
        const bool branch_taken_0x12e174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E178u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e174) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12E17Cu;
    // 0x12e17c: 0x10000004
    ctx->pc = 0x12E17Cu;
    {
        const bool branch_taken_0x12e17c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E180u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12e17c) {
            ctx->pc = 0x12E190u;
            goto label_12e190;
        }
    }
    ctx->pc = 0x12E184u;
    // 0x12e184: 0x0
    ctx->pc = 0x12e184u;
    // NOP
label_12e188:
    // 0x12e188: 0x24040001
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_12e18c:
    // 0x12e18c: 0x102d
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e190:
    // 0x12e190: 0x3e00008
    ctx->pc = 0x12E190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E194u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E158u: goto label_12e158;
            case 0x12E188u: goto label_12e188;
            case 0x12E18Cu: goto label_12e18c;
            case 0x12E190u: goto label_12e190;
            case 0x12E1C0u: goto label_12e1c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E198u;
    // 0x12e198: 0x27bdfff0
    ctx->pc = 0x12e198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e19c: 0x80102d
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a0: 0x10400007
    ctx->pc = 0x12E1A0u;
    {
        const bool branch_taken_0x12e1a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E1A4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x12e1a0) {
            ctx->pc = 0x12E1C0u;
            goto label_12e1c0;
        }
    }
    ctx->pc = 0x12E1A8u;
    // 0x12e1a8: 0xdfbf0000
    ctx->pc = 0x12e1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e1ac: 0x282d
    ctx->pc = 0x12e1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b0: 0x2406000c
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x12e1b4: 0xa0400000
    ctx->pc = 0x12e1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e1b8: 0x8041f1a
    ctx->pc = 0x12E1B8u;
    ctx->pc = 0x12E1BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12E1C0u;
label_12e1c0:
    // 0x12e1c0: 0xdfbf0000
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e1c4: 0x3e00008
    ctx->pc = 0x12E1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E158u: goto label_12e158;
            case 0x12E188u: goto label_12e188;
            case 0x12E18Cu: goto label_12e18c;
            case 0x12E190u: goto label_12e190;
            case 0x12E1C0u: goto label_12e1c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E1CCu;
    // 0x12e1cc: 0x0
    ctx->pc = 0x12e1ccu;
    // NOP
}
