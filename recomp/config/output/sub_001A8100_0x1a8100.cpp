#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8100
// Address: 0x1a8100 - 0x1a81e0
void sub_001A8100_0x1a8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8100u;

    // 0x1a8100: 0x47602
    ctx->pc = 0x1a8100u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 4), 24));
    // 0x1a8104: 0x31cc0001
    ctx->pc = 0x1a8104u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 14), 1));
    // 0x1a8108: 0x11800002
    ctx->pc = 0x1A8108u;
    {
        const bool branch_taken_0x1a8108 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A810Cu;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a8108) {
            ctx->pc = 0x1A8114u;
            goto label_1a8114;
        }
    }
    ctx->pc = 0x1A8110u;
    // 0x1a8110: 0x25ad0001
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_1a8114:
    // 0x1a8114: 0x31cb0002
    ctx->pc = 0x1a8114u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 14), 2));
    // 0x1a8118: 0x11600002
    ctx->pc = 0x1A8118u;
    {
        const bool branch_taken_0x1a8118 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A811Cu;
        SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 14), 4));
        if (branch_taken_0x1a8118) {
            ctx->pc = 0x1A8124u;
            goto label_1a8124;
        }
    }
    ctx->pc = 0x1A8120u;
    // 0x1a8120: 0x25ad0001
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_1a8124:
    // 0x1a8124: 0x11400002
    ctx->pc = 0x1A8124u;
    {
        const bool branch_taken_0x1a8124 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8128u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8124) {
            ctx->pc = 0x1A8130u;
            goto label_1a8130;
        }
    }
    ctx->pc = 0x1A812Cu;
    // 0x1a812c: 0x25ad0002
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
label_1a8130:
    // 0x1a8130: 0x8c290a60
    ctx->pc = 0x1a8130u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a8134: 0x12d1021
    ctx->pc = 0x1a8134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1a8138: 0x28420200
    ctx->pc = 0x1a8138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 512));
    // 0x1a813c: 0x14400003
    ctx->pc = 0x1A813Cu;
    {
        const bool branch_taken_0x1a813c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x1a813c) {
            ctx->pc = 0x1A814Cu;
            goto label_1a814c;
        }
    }
    ctx->pc = 0x1A8144u;
    // 0x1a8144: 0x10000021
    ctx->pc = 0x1A8144u;
    {
        const bool branch_taken_0x1a8144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8148u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8144) {
            ctx->pc = 0x1A81CCu;
            goto label_1a81cc;
        }
    }
    ctx->pc = 0x1A814Cu;
label_1a814c:
    // 0x1a814c: 0x41c02
    ctx->pc = 0x1a814cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 16));
    // 0x1a8150: 0x24420cc0
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3264));
    // 0x1a8154: 0x494821
    ctx->pc = 0x1a8154u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a8158: 0xa12e0000
    ctx->pc = 0x1a8158u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x1a815c: 0x41202
    ctx->pc = 0x1a815cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
    // 0x1a8160: 0xa1230001
    ctx->pc = 0x1a8160u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8164: 0xa1220002
    ctx->pc = 0x1a8164u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a8168: 0xa1240003
    ctx->pc = 0x1a8168u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a816c: 0x11800003
    ctx->pc = 0x1A816Cu;
    {
        const bool branch_taken_0x1a816c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8170u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a816c) {
            ctx->pc = 0x1A817Cu;
            goto label_1a817c;
        }
    }
    ctx->pc = 0x1A8174u;
    // 0x1a8174: 0xa1250000
    ctx->pc = 0x1a8174u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a8178: 0x25290001
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_1a817c:
    // 0x1a817c: 0x11600003
    ctx->pc = 0x1A817Cu;
    {
        const bool branch_taken_0x1a817c = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a817c) {
            ctx->pc = 0x1A818Cu;
            goto label_1a818c;
        }
    }
    ctx->pc = 0x1A8184u;
    // 0x1a8184: 0xa1260000
    ctx->pc = 0x1a8184u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a8188: 0x25290001
    ctx->pc = 0x1a8188u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_1a818c:
    // 0x1a818c: 0x11400005
    ctx->pc = 0x1A818Cu;
    {
        const bool branch_taken_0x1a818c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8190u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 65535));
        if (branch_taken_0x1a818c) {
            ctx->pc = 0x1A81A4u;
            goto label_1a81a4;
        }
    }
    ctx->pc = 0x1A8194u;
    // 0x1a8194: 0x31203
    ctx->pc = 0x1a8194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1a8198: 0xa1220000
    ctx->pc = 0x1a8198u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a819c: 0xa1230001
    ctx->pc = 0x1a819cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a81a0: 0x25290002
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
label_1a81a4:
    // 0x1a81a4: 0xa1280000
    ctx->pc = 0x1a81a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a81a8: 0x3c01002b
    ctx->pc = 0x1a81a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a81ac: 0x8c240a60
    ctx->pc = 0x1a81acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a81b0: 0x25a50001
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1a81b4: 0x240300ff
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a81b8: 0x102d
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81bc: 0x852021
    ctx->pc = 0x1a81bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a81c0: 0x3c01002b
    ctx->pc = 0x1a81c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a81c4: 0xac240a60
    ctx->pc = 0x1a81c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2656), GPR_U32(ctx, 4));
    // 0x1a81c8: 0xa1230001
    ctx->pc = 0x1a81c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a81cc:
    // 0x1a81cc: 0x3e00008
    ctx->pc = 0x1A81CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8114u: goto label_1a8114;
            case 0x1A8124u: goto label_1a8124;
            case 0x1A8130u: goto label_1a8130;
            case 0x1A814Cu: goto label_1a814c;
            case 0x1A817Cu: goto label_1a817c;
            case 0x1A818Cu: goto label_1a818c;
            case 0x1A81A4u: goto label_1a81a4;
            case 0x1A81CCu: goto label_1a81cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A81D4u;
    // 0x1a81d4: 0x0
    ctx->pc = 0x1a81d4u;
    // NOP
    // 0x1a81d8: 0x0
    ctx->pc = 0x1a81d8u;
    // NOP
    // 0x1a81dc: 0x0
    ctx->pc = 0x1a81dcu;
    // NOP
}
