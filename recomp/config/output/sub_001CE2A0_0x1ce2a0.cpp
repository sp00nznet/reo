#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE2A0
// Address: 0x1ce2a0 - 0x1ce570
void sub_001CE2A0_0x1ce2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce2a0u;

    // 0x1ce2a0: 0x27bdfe90
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1ce2a4: 0x2402ffff
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce2a8: 0xffbf0060
    ctx->pc = 0x1ce2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ce2ac: 0x7fb50050
    ctx->pc = 0x1ce2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ce2b0: 0x7fb40040
    ctx->pc = 0x1ce2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce2b4: 0x80a82d
    ctx->pc = 0x1ce2b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2b8: 0x7fb30030
    ctx->pc = 0x1ce2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce2bc: 0xa0a02d
    ctx->pc = 0x1ce2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2c0: 0x7fb20020
    ctx->pc = 0x1ce2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce2c4: 0xc0982d
    ctx->pc = 0x1ce2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2c8: 0x7fb10010
    ctx->pc = 0x1ce2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce2cc: 0xe0902d
    ctx->pc = 0x1ce2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2d0: 0x7fb00000
    ctx->pc = 0x1ce2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce2d4: 0x16820007
    ctx->pc = 0x1CE2D4u;
    {
        const bool branch_taken_0x1ce2d4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CE2D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2d4) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE2DCu;
    // 0x1ce2dc: 0x3c010023
    ctx->pc = 0x1ce2dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ce2e0: 0x8c3466c8
    ctx->pc = 0x1ce2e0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1ce2e4: 0x16820004
    ctx->pc = 0x1CE2E4u;
    {
        const bool branch_taken_0x1ce2e4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CE2E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2e4) {
            ctx->pc = 0x1CE2F8u;
            goto label_1ce2f8;
        }
    }
    ctx->pc = 0x1CE2ECu;
    // 0x1ce2ec: 0x10000035
    ctx->pc = 0x1CE2ECu;
    {
        const bool branch_taken_0x1ce2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE2F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2ec) {
            ctx->pc = 0x1CE3C4u;
            goto label_1ce3c4;
        }
    }
    ctx->pc = 0x1CE2F4u;
label_1ce2f4:
    // 0x1ce2f4: 0x280202d
    ctx->pc = 0x1ce2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2f8:
    // 0x1ce2f8: 0x2a0282d
    ctx->pc = 0x1ce2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2fc: 0x24060001
    ctx->pc = 0x1ce2fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce300: 0xc0735c4
    ctx->pc = 0x1CE300u;
    SET_GPR_U32(ctx, 31, 0x1CE308u);
    ctx->pc = 0x1CE304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD710_0x1cd710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE308u; }
    }
    if (ctx->pc != 0x1CE308u) { return; }
    ctx->pc = 0x1CE308u;
    // 0x1ce308: 0x14400003
    ctx->pc = 0x1CE308u;
    {
        const bool branch_taken_0x1ce308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE30Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1ce308) {
            ctx->pc = 0x1CE318u;
            goto label_1ce318;
        }
    }
    ctx->pc = 0x1CE310u;
    // 0x1ce310: 0x1000002c
    ctx->pc = 0x1CE310u;
    {
        const bool branch_taken_0x1ce310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE314u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce310) {
            ctx->pc = 0x1CE3C4u;
            goto label_1ce3c4;
        }
    }
    ctx->pc = 0x1CE318u;
label_1ce318:
    // 0x1ce318: 0x2446000f
    ctx->pc = 0x1ce318u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ce31c: 0x27a40070
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce320: 0xc042a0c
    ctx->pc = 0x1CE320u;
    SET_GPR_U32(ctx, 31, 0x1CE328u);
    ctx->pc = 0x1CE324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24792));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE328u; }
    }
    if (ctx->pc != 0x1CE328u) { return; }
    ctx->pc = 0x1CE328u;
    // 0x1ce328: 0x3c050025
    ctx->pc = 0x1ce328u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce32c: 0x27a40070
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce330: 0xc042aee
    ctx->pc = 0x1CE330u;
    SET_GPR_U32(ctx, 31, 0x1CE338u);
    ctx->pc = 0x1CE334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24808));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE338u; }
    }
    if (ctx->pc != 0x1CE338u) { return; }
    ctx->pc = 0x1CE338u;
    // 0x1ce338: 0x3c010034
    ctx->pc = 0x1ce338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ce33c: 0x27a40070
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce340: 0x8c300ad8
    ctx->pc = 0x1ce340u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ce344: 0x24060001
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce348: 0x382d
    ctx->pc = 0x1ce348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce34c: 0xc07323c
    ctx->pc = 0x1CE34Cu;
    SET_GPR_U32(ctx, 31, 0x1CE354u);
    ctx->pc = 0x1CE350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE354u; }
    }
    if (ctx->pc != 0x1CE354u) { return; }
    ctx->pc = 0x1CE354u;
    // 0x1ce354: 0x1840001a
    ctx->pc = 0x1CE354u;
    {
        const bool branch_taken_0x1ce354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce354) {
            ctx->pc = 0x1CE3C0u;
            goto label_1ce3c0;
        }
    }
    ctx->pc = 0x1CE35Cu;
    // 0x1ce35c: 0x2a821200
    ctx->pc = 0x1ce35cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4608));
    // 0x1ce360: 0x14400005
    ctx->pc = 0x1CE360u;
    {
        const bool branch_taken_0x1ce360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE364u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce360) {
            ctx->pc = 0x1CE378u;
            goto label_1ce378;
        }
    }
    ctx->pc = 0x1CE368u;
    // 0x1ce368: 0x2a811400
    ctx->pc = 0x1ce368u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 5120));
    // 0x1ce36c: 0x10200003
    ctx->pc = 0x1CE36Cu;
    {
        const bool branch_taken_0x1ce36c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE370u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 5120));
        if (branch_taken_0x1ce36c) {
            ctx->pc = 0x1CE37Cu;
            goto label_1ce37c;
        }
    }
    ctx->pc = 0x1CE374u;
    // 0x1ce374: 0x24030001
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ce378:
    // 0x1ce378: 0x2a821400
    ctx->pc = 0x1ce378u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 5120));
label_1ce37c:
    // 0x1ce37c: 0x14400004
    ctx->pc = 0x1CE37Cu;
    {
        const bool branch_taken_0x1ce37c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE380u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 6144));
        if (branch_taken_0x1ce37c) {
            ctx->pc = 0x1CE390u;
            goto label_1ce390;
        }
    }
    ctx->pc = 0x1CE384u;
    // 0x1ce384: 0x10200002
    ctx->pc = 0x1CE384u;
    {
        const bool branch_taken_0x1ce384 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce384) {
            ctx->pc = 0x1CE390u;
            goto label_1ce390;
        }
    }
    ctx->pc = 0x1CE38Cu;
    // 0x1ce38c: 0x24030002
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1ce390:
    // 0x1ce390: 0x1060000c
    ctx->pc = 0x1CE390u;
    {
        const bool branch_taken_0x1ce390 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE394u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce390) {
            ctx->pc = 0x1CE3C4u;
            goto label_1ce3c4;
        }
    }
    ctx->pc = 0x1CE398u;
    // 0x1ce398: 0x306400ff
    ctx->pc = 0x1ce398u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x1ce39c: 0xc0739e4
    ctx->pc = 0x1CE39Cu;
    SET_GPR_U32(ctx, 31, 0x1CE3A4u);
    ctx->pc = 0x1CE3A0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 21), 65535));
    ctx->pc = 0x1CE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE790_0x1ce790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3A4u; }
    }
    if (ctx->pc != 0x1CE3A4u) { return; }
    ctx->pc = 0x1CE3A4u;
    // 0x1ce3a4: 0x10400006
    ctx->pc = 0x1CE3A4u;
    {
        const bool branch_taken_0x1ce3a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE3A8u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 255));
        if (branch_taken_0x1ce3a4) {
            ctx->pc = 0x1CE3C0u;
            goto label_1ce3c0;
        }
    }
    ctx->pc = 0x1CE3ACu;
    // 0x1ce3ac: 0x260202d
    ctx->pc = 0x1ce3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3b0: 0x200282d
    ctx->pc = 0x1ce3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3b4: 0xc06abec
    ctx->pc = 0x1CE3B4u;
    SET_GPR_U32(ctx, 31, 0x1CE3BCu);
    ctx->pc = 0x1CE3B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1AAFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAFB0_0x1aafb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3BCu; }
    }
    if (ctx->pc != 0x1CE3BCu) { return; }
    ctx->pc = 0x1CE3BCu;
    // 0x1ce3bc: 0x24110001
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1ce3c0:
    // 0x1ce3c0: 0x220102d
    ctx->pc = 0x1ce3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce3c4:
    // 0x1ce3c4: 0xdfbf0060
    ctx->pc = 0x1ce3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce3c8: 0x7bb50050
    ctx->pc = 0x1ce3c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce3cc: 0x7bb40040
    ctx->pc = 0x1ce3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce3d0: 0x7bb30030
    ctx->pc = 0x1ce3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce3d4: 0x7bb20020
    ctx->pc = 0x1ce3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce3d8: 0x7bb10010
    ctx->pc = 0x1ce3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce3dc: 0x7bb00000
    ctx->pc = 0x1ce3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce3e0: 0x3e00008
    ctx->pc = 0x1CE3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE2F4u: goto label_1ce2f4;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE318u: goto label_1ce318;
            case 0x1CE378u: goto label_1ce378;
            case 0x1CE37Cu: goto label_1ce37c;
            case 0x1CE390u: goto label_1ce390;
            case 0x1CE3C0u: goto label_1ce3c0;
            case 0x1CE3C4u: goto label_1ce3c4;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE4BCu: goto label_1ce4bc;
            case 0x1CE4C8u: goto label_1ce4c8;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE54Cu: goto label_1ce54c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE3E8u;
    // 0x1ce3e8: 0x0
    ctx->pc = 0x1ce3e8u;
    // NOP
    // 0x1ce3ec: 0x0
    ctx->pc = 0x1ce3ecu;
    // NOP
    // 0x1ce3f0: 0x27bdfdb0
    ctx->pc = 0x1ce3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1ce3f4: 0x30a700ff
    ctx->pc = 0x1ce3f4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 255));
    // 0x1ce3f8: 0xffbf0040
    ctx->pc = 0x1ce3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce3fc: 0x3c050025
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce400: 0x7fb30030
    ctx->pc = 0x1ce400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce404: 0x30c800ff
    ctx->pc = 0x1ce404u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 6), 255));
    // 0x1ce408: 0x7fb20020
    ctx->pc = 0x1ce408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce40c: 0x24a560f0
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24816));
    // 0x1ce410: 0x7fb10010
    ctx->pc = 0x1ce410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce414: 0x7fb00000
    ctx->pc = 0x1ce414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce418: 0x309000ff
    ctx->pc = 0x1ce418u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 255));
    // 0x1ce41c: 0x27a40150
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1ce420: 0xc042a0c
    ctx->pc = 0x1CE420u;
    SET_GPR_U32(ctx, 31, 0x1CE428u);
    ctx->pc = 0x1CE424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE428u; }
    }
    if (ctx->pc != 0x1CE428u) { return; }
    ctx->pc = 0x1CE428u;
    // 0x1ce428: 0x3c010032
    ctx->pc = 0x1ce428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ce42c: 0x882d
    ctx->pc = 0x1ce42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce430: 0x8c32442c
    ctx->pc = 0x1ce430u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 17452)));
    // 0x1ce434: 0x3c010032
    ctx->pc = 0x1ce434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ce438: 0x802243d7
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17367)));
    // 0x1ce43c: 0x14400012
    ctx->pc = 0x1CE43Cu;
    {
        const bool branch_taken_0x1ce43c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE440u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce43c) {
            ctx->pc = 0x1CE488u;
            goto label_1ce488;
        }
    }
    ctx->pc = 0x1CE444u;
    // 0x1ce444: 0x3c050025
    ctx->pc = 0x1ce444u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce448: 0x27a40050
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce44c: 0x24a56110
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24848));
    // 0x1ce450: 0x200302d
    ctx->pc = 0x1ce450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce454: 0xc042a0c
    ctx->pc = 0x1CE454u;
    SET_GPR_U32(ctx, 31, 0x1CE45Cu);
    ctx->pc = 0x1CE458u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE45Cu; }
    }
    if (ctx->pc != 0x1CE45Cu) { return; }
    ctx->pc = 0x1CE45Cu;
    // 0x1ce45c: 0x27a40050
    ctx->pc = 0x1ce45cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce460: 0x240282d
    ctx->pc = 0x1ce460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce464: 0x24060001
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce468: 0xc07323c
    ctx->pc = 0x1CE468u;
    SET_GPR_U32(ctx, 31, 0x1CE470u);
    ctx->pc = 0x1CE46Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE470u; }
    }
    if (ctx->pc != 0x1CE470u) { return; }
    ctx->pc = 0x1CE470u;
    // 0x1ce470: 0x18400015
    ctx->pc = 0x1CE470u;
    {
        const bool branch_taken_0x1ce470 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce470) {
            ctx->pc = 0x1CE4C8u;
            goto label_1ce4c8;
        }
    }
    ctx->pc = 0x1CE478u;
    // 0x1ce478: 0x2443003f
    ctx->pc = 0x1ce478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1ce47c: 0x2402ffc0
    ctx->pc = 0x1ce47cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1ce480: 0x1000000e
    ctx->pc = 0x1CE480u;
    {
        const bool branch_taken_0x1ce480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE484u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1ce480) {
            ctx->pc = 0x1CE4BCu;
            goto label_1ce4bc;
        }
    }
    ctx->pc = 0x1CE488u;
label_1ce488:
    // 0x1ce488: 0x3c050025
    ctx->pc = 0x1ce488u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce48c: 0x27a40050
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce490: 0x24a56130
    ctx->pc = 0x1ce490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24880));
    // 0x1ce494: 0xc042a0c
    ctx->pc = 0x1CE494u;
    SET_GPR_U32(ctx, 31, 0x1CE49Cu);
    ctx->pc = 0x1CE498u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE49Cu; }
    }
    if (ctx->pc != 0x1CE49Cu) { return; }
    ctx->pc = 0x1CE49Cu;
    // 0x1ce49c: 0x27a40050
    ctx->pc = 0x1ce49cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce4a0: 0xc06a8f8
    ctx->pc = 0x1CE4A0u;
    SET_GPR_U32(ctx, 31, 0x1CE4A8u);
    ctx->pc = 0x1CE4A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4A8u; }
    }
    if (ctx->pc != 0x1CE4A8u) { return; }
    ctx->pc = 0x1CE4A8u;
    // 0x1ce4a8: 0x18400007
    ctx->pc = 0x1CE4A8u;
    {
        const bool branch_taken_0x1ce4a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce4a8) {
            ctx->pc = 0x1CE4C8u;
            goto label_1ce4c8;
        }
    }
    ctx->pc = 0x1CE4B0u;
    // 0x1ce4b0: 0x2443003f
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1ce4b4: 0x2402ffc0
    ctx->pc = 0x1ce4b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1ce4b8: 0x629824
    ctx->pc = 0x1ce4b8u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce4bc:
    // 0x1ce4bc: 0xc185878
    ctx->pc = 0x1CE4BCu;
    SET_GPR_U32(ctx, 31, 0x1CE4C4u);
    ctx->pc = 0x1CE4C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x6161E0u;
    {
        auto targetFn = runtime->lookupFunction(0x6161E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4C4u; }
        if (ctx->pc != 0x1CE4C4u) { return; }
    }
    ctx->pc = 0x1CE4C4u;
    // 0x1ce4c4: 0x24110001
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1ce4c8:
    // 0x1ce4c8: 0x3c010032
    ctx->pc = 0x1ce4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ce4cc: 0x802243d7
    ctx->pc = 0x1ce4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17367)));
    // 0x1ce4d0: 0x14400010
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE4D4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE514u;
            goto label_1ce514;
        }
    }
    ctx->pc = 0x1CE4D8u;
    // 0x1ce4d8: 0x3c050025
    ctx->pc = 0x1ce4d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce4dc: 0x200302d
    ctx->pc = 0x1ce4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4e0: 0x27a40050
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce4e4: 0x24a56140
    ctx->pc = 0x1ce4e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24896));
    // 0x1ce4e8: 0xc042a0c
    ctx->pc = 0x1CE4E8u;
    SET_GPR_U32(ctx, 31, 0x1CE4F0u);
    ctx->pc = 0x1CE4ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F0u; }
    }
    if (ctx->pc != 0x1CE4F0u) { return; }
    ctx->pc = 0x1CE4F0u;
    // 0x1ce4f0: 0x27a40050
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce4f4: 0x240282d
    ctx->pc = 0x1ce4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4f8: 0x24060001
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce4fc: 0xc07323c
    ctx->pc = 0x1CE4FCu;
    SET_GPR_U32(ctx, 31, 0x1CE504u);
    ctx->pc = 0x1CE500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE504u; }
    }
    if (ctx->pc != 0x1CE504u) { return; }
    ctx->pc = 0x1CE504u;
    // 0x1ce504: 0x18400011
    ctx->pc = 0x1CE504u;
    {
        const bool branch_taken_0x1ce504 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce504) {
            ctx->pc = 0x1CE54Cu;
            goto label_1ce54c;
        }
    }
    ctx->pc = 0x1CE50Cu;
    // 0x1ce50c: 0x1000000c
    ctx->pc = 0x1CE50Cu;
    {
        const bool branch_taken_0x1ce50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE510u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce50c) {
            ctx->pc = 0x1CE540u;
            goto label_1ce540;
        }
    }
    ctx->pc = 0x1CE514u;
label_1ce514:
    // 0x1ce514: 0x3c050025
    ctx->pc = 0x1ce514u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce518: 0x27a40050
    ctx->pc = 0x1ce518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce51c: 0x24a56160
    ctx->pc = 0x1ce51cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24928));
    // 0x1ce520: 0xc042a0c
    ctx->pc = 0x1CE520u;
    SET_GPR_U32(ctx, 31, 0x1CE528u);
    ctx->pc = 0x1CE524u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE528u; }
    }
    if (ctx->pc != 0x1CE528u) { return; }
    ctx->pc = 0x1CE528u;
    // 0x1ce528: 0x27a40050
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce52c: 0xc06a8f8
    ctx->pc = 0x1CE52Cu;
    SET_GPR_U32(ctx, 31, 0x1CE534u);
    ctx->pc = 0x1CE530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE534u; }
    }
    if (ctx->pc != 0x1CE534u) { return; }
    ctx->pc = 0x1CE534u;
    // 0x1ce534: 0x18400005
    ctx->pc = 0x1CE534u;
    {
        const bool branch_taken_0x1ce534 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ce534) {
            ctx->pc = 0x1CE54Cu;
            goto label_1ce54c;
        }
    }
    ctx->pc = 0x1CE53Cu;
    // 0x1ce53c: 0x240202d
    ctx->pc = 0x1ce53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ce540:
    // 0x1ce540: 0xc1858c4
    ctx->pc = 0x1CE540u;
    SET_GPR_U32(ctx, 31, 0x1CE548u);
    ctx->pc = 0x616310u;
    {
        auto targetFn = runtime->lookupFunction(0x616310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE548u; }
        if (ctx->pc != 0x1CE548u) { return; }
    }
    ctx->pc = 0x1CE548u;
    // 0x1ce548: 0x26310002
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
label_1ce54c:
    // 0x1ce54c: 0x220102d
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce550: 0xdfbf0040
    ctx->pc = 0x1ce550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce554: 0x7bb30030
    ctx->pc = 0x1ce554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce558: 0x7bb20020
    ctx->pc = 0x1ce558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce55c: 0x7bb10010
    ctx->pc = 0x1ce55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce560: 0x7bb00000
    ctx->pc = 0x1ce560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce564: 0x3e00008
    ctx->pc = 0x1CE564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE2F4u: goto label_1ce2f4;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE318u: goto label_1ce318;
            case 0x1CE378u: goto label_1ce378;
            case 0x1CE37Cu: goto label_1ce37c;
            case 0x1CE390u: goto label_1ce390;
            case 0x1CE3C0u: goto label_1ce3c0;
            case 0x1CE3C4u: goto label_1ce3c4;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE4BCu: goto label_1ce4bc;
            case 0x1CE4C8u: goto label_1ce4c8;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE54Cu: goto label_1ce54c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE56Cu;
    // 0x1ce56c: 0x0
    ctx->pc = 0x1ce56cu;
    // NOP
}
