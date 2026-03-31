#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101388
// Address: 0x101388 - 0x101788
void sub_00101388_0x101388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101388u;

label_101388:
    // 0x101388: 0x27bdff60
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10138c: 0xffb60070
    ctx->pc = 0x10138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x101390: 0x3c160020
    ctx->pc = 0x101390u;
    SET_GPR_U32(ctx, 22, ((uint32_t)32 << 16));
    // 0x101394: 0xffb20030
    ctx->pc = 0x101394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x101398: 0x8ec27910
    ctx->pc = 0x101398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
    // 0x10139c: 0x80902d
    ctx->pc = 0x10139cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013a0: 0xffbf0090
    ctx->pc = 0x1013a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1013a4: 0xffb70080
    ctx->pc = 0x1013a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1013a8: 0xffb50060
    ctx->pc = 0x1013a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1013ac: 0xffb40050
    ctx->pc = 0x1013acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1013b0: 0xffb30040
    ctx->pc = 0x1013b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1013b4: 0xffb10020
    ctx->pc = 0x1013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1013b8: 0x18400004
    ctx->pc = 0x1013B8u;
    {
        const bool branch_taken_0x1013b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1013BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x1013b8) {
            ctx->pc = 0x1013CCu;
            goto label_1013cc;
        }
    }
    ctx->pc = 0x1013C0u;
    // 0x1013c0: 0x3c040023
    ctx->pc = 0x1013c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1013c4: 0xc045a12
    ctx->pc = 0x1013C4u;
    SET_GPR_U32(ctx, 31, 0x1013CCu);
    ctx->pc = 0x1013C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30184));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013CCu; }
    }
    if (ctx->pc != 0x1013CCu) { return; }
    ctx->pc = 0x1013CCu;
label_1013cc:
    // 0x1013cc: 0xc040164
    ctx->pc = 0x1013CCu;
    SET_GPR_U32(ctx, 31, 0x1013D4u);
    ctx->pc = 0x1013D0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)32 << 16));
    ctx->pc = 0x100590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100590_0x100590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013D4u; }
    }
    if (ctx->pc != 0x1013D4u) { return; }
    ctx->pc = 0x1013D4u;
    // 0x1013d4: 0x8e64792c
    ctx->pc = 0x1013d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 31020)));
    // 0x1013d8: 0xc04519c
    ctx->pc = 0x1013D8u;
    SET_GPR_U32(ctx, 31, 0x1013E0u);
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013E0u; }
    }
    if (ctx->pc != 0x1013E0u) { return; }
    ctx->pc = 0x1013E0u;
    // 0x1013e0: 0x8e63792c
    ctx->pc = 0x1013e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 31020)));
    // 0x1013e4: 0x1462005b
    ctx->pc = 0x1013E4u;
    {
        const bool branch_taken_0x1013e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1013E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1013e4) {
            ctx->pc = 0x101554u;
            goto label_101554;
        }
    }
    ctx->pc = 0x1013ECu;
    // 0x1013ec: 0xc040386
    ctx->pc = 0x1013ECu;
    SET_GPR_U32(ctx, 31, 0x1013F4u);
    ctx->pc = 0x1013F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100E18_0x100e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013F4u; }
    }
    if (ctx->pc != 0x1013F4u) { return; }
    ctx->pc = 0x1013F4u;
    // 0x1013f4: 0x14400045
    ctx->pc = 0x1013F4u;
    {
        const bool branch_taken_0x1013f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1013F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1013f4) {
            ctx->pc = 0x10150Cu;
            goto label_10150c;
        }
    }
    ctx->pc = 0x1013FCu;
    // 0x1013fc: 0xc045c20
    ctx->pc = 0x1013FCu;
    SET_GPR_U32(ctx, 31, 0x101404u);
    ctx->pc = 0x101400u;
    SET_GPR_U32(ctx, 17, ((uint32_t)32 << 16));
    ctx->pc = 0x117080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117080_0x117080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101404u; }
    }
    if (ctx->pc != 0x101404u) { return; }
    ctx->pc = 0x101404u;
    // 0x101404: 0x8e227948
    ctx->pc = 0x101404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 31048)));
    // 0x101408: 0x441002c
    ctx->pc = 0x101408u;
    {
        const bool branch_taken_0x101408 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10140Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
        if (branch_taken_0x101408) {
            ctx->pc = 0x1014BCu;
            goto label_1014bc;
        }
    }
    ctx->pc = 0x101410u;
    // 0x101410: 0x3c140026
    ctx->pc = 0x101410u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x101414: 0x1000000b
    ctx->pc = 0x101414u;
    {
        const bool branch_taken_0x101414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101418u;
        SET_GPR_U32(ctx, 23, ((uint32_t)33 << 16));
        if (branch_taken_0x101414) {
            ctx->pc = 0x101444u;
            goto label_101444;
        }
    }
    ctx->pc = 0x10141Cu;
    // 0x10141c: 0x0
    ctx->pc = 0x10141cu;
    // NOP
label_101420:
    // 0x101420: 0x2403ffff
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101424: 0x0
    ctx->pc = 0x101424u;
    // NOP
label_101428:
    // 0x101428: 0x2442ffff
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10142c: 0x0
    ctx->pc = 0x10142cu;
    // NOP
    // 0x101430: 0x0
    ctx->pc = 0x101430u;
    // NOP
    // 0x101434: 0x0
    ctx->pc = 0x101434u;
    // NOP
    // 0x101438: 0x0
    ctx->pc = 0x101438u;
    // NOP
    // 0x10143c: 0x1443fffa
    ctx->pc = 0x10143Cu;
    {
        const bool branch_taken_0x10143c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10143c) {
            ctx->pc = 0x101428u;
            goto label_101428;
        }
    }
    ctx->pc = 0x101444u;
label_101444:
    // 0x101444: 0x26b0a1d0
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294943184));
label_101448:
    // 0x101448: 0x3c058000
    ctx->pc = 0x101448u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x10144c: 0x200202d
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101450: 0x34a5059a
    ctx->pc = 0x101450u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1434));
    // 0x101454: 0xc045e06
    ctx->pc = 0x101454u;
    SET_GPR_U32(ctx, 31, 0x10145Cu);
    ctx->pc = 0x101458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117818_0x117818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10145Cu; }
    }
    if (ctx->pc != 0x10145Cu) { return; }
    ctx->pc = 0x10145Cu;
    // 0x10145c: 0x4430013
    ctx->pc = 0x10145Cu;
    {
        const bool branch_taken_0x10145c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10145c) {
            ctx->pc = 0x101460u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x1014ACu;
            goto label_1014ac;
        }
    }
    ctx->pc = 0x101464u;
    // 0x101464: 0x8ec27910
    ctx->pc = 0x101464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
    // 0x101468: 0x18400005
    ctx->pc = 0x101468u;
    {
        const bool branch_taken_0x101468 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10146Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x101468) {
            ctx->pc = 0x101480u;
            goto label_101480;
        }
    }
    ctx->pc = 0x101470u;
    // 0x101470: 0x3c040023
    ctx->pc = 0x101470u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x101474: 0xc045a12
    ctx->pc = 0x101474u;
    SET_GPR_U32(ctx, 31, 0x10147Cu);
    ctx->pc = 0x101478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30208));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10147Cu; }
    }
    if (ctx->pc != 0x10147Cu) { return; }
    ctx->pc = 0x10147Cu;
    // 0x10147c: 0x3c020010
    ctx->pc = 0x10147cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_101480:
    // 0x101480: 0x2403ffff
    ctx->pc = 0x101480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101484: 0x0
    ctx->pc = 0x101484u;
    // NOP
label_101488:
    // 0x101488: 0x2442ffff
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10148c: 0x0
    ctx->pc = 0x10148cu;
    // NOP
    // 0x101490: 0x0
    ctx->pc = 0x101490u;
    // NOP
    // 0x101494: 0x0
    ctx->pc = 0x101494u;
    // NOP
    // 0x101498: 0x0
    ctx->pc = 0x101498u;
    // NOP
    // 0x10149c: 0x1443fffa
    ctx->pc = 0x10149Cu;
    {
        const bool branch_taken_0x10149c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x10149c) {
            ctx->pc = 0x101488u;
            goto label_101488;
        }
    }
    ctx->pc = 0x1014A4u;
    // 0x1014a4: 0x1000ffe8
    ctx->pc = 0x1014A4u;
    {
        const bool branch_taken_0x1014a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1014A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294943184));
        if (branch_taken_0x1014a4) {
            ctx->pc = 0x101448u;
            goto label_101448;
        }
    }
    ctx->pc = 0x1014ACu;
label_1014ac:
    // 0x1014ac: 0x1040ffdc
    ctx->pc = 0x1014ACu;
    {
        const bool branch_taken_0x1014ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1014B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x1014ac) {
            ctx->pc = 0x101420u;
            goto label_101420;
        }
    }
    ctx->pc = 0x1014B4u;
    // 0x1014b4: 0x10000003
    ctx->pc = 0x1014B4u;
    {
        const bool branch_taken_0x1014b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1014B8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 31048), GPR_U32(ctx, 0));
        if (branch_taken_0x1014b4) {
            ctx->pc = 0x1014C4u;
            goto label_1014c4;
        }
    }
    ctx->pc = 0x1014BCu;
label_1014bc:
    // 0x1014bc: 0x3c140026
    ctx->pc = 0x1014bcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x1014c0: 0x3c170021
    ctx->pc = 0x1014c0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)33 << 16));
label_1014c4:
    // 0x1014c4: 0x2690a210
    ctx->pc = 0x1014c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294943248));
    // 0x1014c8: 0xae92a210
    ctx->pc = 0x1014c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943248), GPR_U32(ctx, 18));
    // 0x1014cc: 0x200202d
    ctx->pc = 0x1014ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d0: 0xc045bf4
    ctx->pc = 0x1014D0u;
    SET_GPR_U32(ctx, 31, 0x1014D8u);
    ctx->pc = 0x1014D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D8u; }
    }
    if (ctx->pc != 0x1014D8u) { return; }
    ctx->pc = 0x1014D8u;
    // 0x1014d8: 0x26f18b00
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 23), 4294937344));
    // 0x1014dc: 0x26a4a1d0
    ctx->pc = 0x1014dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294943184));
    // 0x1014e0: 0x200382d
    ctx->pc = 0x1014e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014e4: 0xafa00000
    ctx->pc = 0x1014e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1014e8: 0x282d
    ctx->pc = 0x1014e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014ec: 0x302d
    ctx->pc = 0x1014ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014f0: 0x24080004
    ctx->pc = 0x1014f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1014f4: 0x220482d
    ctx->pc = 0x1014f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014f8: 0x240a0004
    ctx->pc = 0x1014f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1014fc: 0xc045e7a
    ctx->pc = 0x1014FCu;
    SET_GPR_U32(ctx, 31, 0x101504u);
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101504u; }
    }
    if (ctx->pc != 0x101504u) { return; }
    ctx->pc = 0x101504u;
    // 0x101504: 0x4430009
    ctx->pc = 0x101504u;
    {
        const bool branch_taken_0x101504 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x101504) {
            ctx->pc = 0x101508u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
            ctx->pc = 0x10152Cu;
            goto label_10152c;
        }
    }
    ctx->pc = 0x10150Cu;
label_10150c:
    // 0x10150c: 0x8e64792c
    ctx->pc = 0x10150cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 31020)));
    // 0x101510: 0xc045190
    ctx->pc = 0x101510u;
    SET_GPR_U32(ctx, 31, 0x101518u);
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101518u; }
    }
    if (ctx->pc != 0x101518u) { return; }
    ctx->pc = 0x101518u;
    // 0x101518: 0x3a440008
    ctx->pc = 0x101518u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 18), 8));
    // 0x10151c: 0x2403ffff
    ctx->pc = 0x10151cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101520: 0x24020006
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x101524: 0x1000000b
    ctx->pc = 0x101524u;
    {
        const bool branch_taken_0x101524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101528u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        if (branch_taken_0x101524) {
            ctx->pc = 0x101554u;
            goto label_101554;
        }
    }
    ctx->pc = 0x10152Cu;
label_10152c:
    // 0x10152c: 0x18400003
    ctx->pc = 0x10152Cu;
    {
        const bool branch_taken_0x10152c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101530u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x10152c) {
            ctx->pc = 0x10153Cu;
            goto label_10153c;
        }
    }
    ctx->pc = 0x101534u;
    // 0x101534: 0xc045a12
    ctx->pc = 0x101534u;
    SET_GPR_U32(ctx, 31, 0x10153Cu);
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30240));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10153Cu; }
    }
    if (ctx->pc != 0x10153Cu) { return; }
    ctx->pc = 0x10153Cu;
label_10153c:
    // 0x10153c: 0x3c022000
    ctx->pc = 0x10153cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x101540: 0x8e64792c
    ctx->pc = 0x101540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 31020)));
    // 0x101544: 0x2221025
    ctx->pc = 0x101544u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x101548: 0xc045190
    ctx->pc = 0x101548u;
    SET_GPR_U32(ctx, 31, 0x101550u);
    ctx->pc = 0x10154Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101550u; }
    }
    if (ctx->pc != 0x101550u) { return; }
    ctx->pc = 0x101550u;
    // 0x101550: 0x200102d
    ctx->pc = 0x101550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101554:
    // 0x101554: 0xdfbf0090
    ctx->pc = 0x101554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101558: 0xdfb70080
    ctx->pc = 0x101558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10155c: 0xdfb60070
    ctx->pc = 0x10155cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101560: 0xdfb50060
    ctx->pc = 0x101560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101564: 0xdfb40050
    ctx->pc = 0x101564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101568: 0xdfb30040
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10156c: 0xdfb20030
    ctx->pc = 0x10156cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101570: 0xdfb10020
    ctx->pc = 0x101570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101574: 0xdfb00010
    ctx->pc = 0x101574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101578: 0x3e00008
    ctx->pc = 0x101578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10157Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101388u: goto label_101388;
            case 0x1013CCu: goto label_1013cc;
            case 0x101420u: goto label_101420;
            case 0x101428u: goto label_101428;
            case 0x101444u: goto label_101444;
            case 0x101448u: goto label_101448;
            case 0x101480u: goto label_101480;
            case 0x101488u: goto label_101488;
            case 0x1014ACu: goto label_1014ac;
            case 0x1014BCu: goto label_1014bc;
            case 0x1014C4u: goto label_1014c4;
            case 0x10150Cu: goto label_10150c;
            case 0x10152Cu: goto label_10152c;
            case 0x10153Cu: goto label_10153c;
            case 0x101554u: goto label_101554;
            case 0x1015C0u: goto label_1015c0;
            case 0x101600u: goto label_101600;
            case 0x101610u: goto label_101610;
            case 0x101630u: goto label_101630;
            case 0x101634u: goto label_101634;
            case 0x10166Cu: goto label_10166c;
            case 0x101670u: goto label_101670;
            case 0x101694u: goto label_101694;
            case 0x1016A4u: goto label_1016a4;
            case 0x1016A8u: goto label_1016a8;
            case 0x101708u: goto label_101708;
            case 0x101718u: goto label_101718;
            case 0x10172Cu: goto label_10172c;
            case 0x101734u: goto label_101734;
            case 0x101744u: goto label_101744;
            case 0x10175Cu: goto label_10175c;
            case 0x101760u: goto label_101760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101580u;
    // 0x101580: 0x27bdff70
    ctx->pc = 0x101580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x101584: 0xffb60070
    ctx->pc = 0x101584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x101588: 0x3c160020
    ctx->pc = 0x101588u;
    SET_GPR_U32(ctx, 22, ((uint32_t)32 << 16));
    // 0x10158c: 0xffb20030
    ctx->pc = 0x10158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x101590: 0x8ec27910
    ctx->pc = 0x101590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
    // 0x101594: 0x80902d
    ctx->pc = 0x101594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101598: 0xffbf0080
    ctx->pc = 0x101598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10159c: 0xffb50060
    ctx->pc = 0x10159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1015a0: 0xffb40050
    ctx->pc = 0x1015a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1015a4: 0xffb30040
    ctx->pc = 0x1015a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1015a8: 0xffb10020
    ctx->pc = 0x1015a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1015ac: 0x18400004
    ctx->pc = 0x1015ACu;
    {
        const bool branch_taken_0x1015ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1015B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x1015ac) {
            ctx->pc = 0x1015C0u;
            goto label_1015c0;
        }
    }
    ctx->pc = 0x1015B4u;
    // 0x1015b4: 0x3c040023
    ctx->pc = 0x1015b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1015b8: 0xc045a12
    ctx->pc = 0x1015B8u;
    SET_GPR_U32(ctx, 31, 0x1015C0u);
    ctx->pc = 0x1015BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30264));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015C0u; }
    }
    if (ctx->pc != 0x1015C0u) { return; }
    ctx->pc = 0x1015C0u;
label_1015c0:
    // 0x1015c0: 0xc040164
    ctx->pc = 0x1015C0u;
    SET_GPR_U32(ctx, 31, 0x1015C8u);
    ctx->pc = 0x1015C4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)32 << 16));
    ctx->pc = 0x100590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100590_0x100590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015C8u; }
    }
    if (ctx->pc != 0x1015C8u) { return; }
    ctx->pc = 0x1015C8u;
    // 0x1015c8: 0x8e847930
    ctx->pc = 0x1015c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 31024)));
    // 0x1015cc: 0xc04519c
    ctx->pc = 0x1015CCu;
    SET_GPR_U32(ctx, 31, 0x1015D4u);
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D4u; }
    }
    if (ctx->pc != 0x1015D4u) { return; }
    ctx->pc = 0x1015D4u;
    // 0x1015d4: 0x8e837930
    ctx->pc = 0x1015d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 31024)));
    // 0x1015d8: 0x1462004b
    ctx->pc = 0x1015D8u;
    {
        const bool branch_taken_0x1015d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1015DCu;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x1015d8) {
            ctx->pc = 0x101708u;
            goto label_101708;
        }
    }
    ctx->pc = 0x1015E0u;
    // 0x1015e0: 0x202d
    ctx->pc = 0x1015e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015e4: 0xc045c20
    ctx->pc = 0x1015E4u;
    SET_GPR_U32(ctx, 31, 0x1015ECu);
    ctx->pc = 0x1015E8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)32 << 16));
    ctx->pc = 0x117080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117080_0x117080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015ECu; }
    }
    if (ctx->pc != 0x1015ECu) { return; }
    ctx->pc = 0x1015ECu;
    // 0x1015ec: 0x8e627948
    ctx->pc = 0x1015ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 31048)));
    // 0x1015f0: 0x441002c
    ctx->pc = 0x1015F0u;
    {
        const bool branch_taken_0x1015f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1015F4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1015f0) {
            ctx->pc = 0x1016A4u;
            goto label_1016a4;
        }
    }
    ctx->pc = 0x1015F8u;
    // 0x1015f8: 0x1000000d
    ctx->pc = 0x1015F8u;
    {
        const bool branch_taken_0x1015f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1015FCu;
        SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
        if (branch_taken_0x1015f8) {
            ctx->pc = 0x101630u;
            goto label_101630;
        }
    }
    ctx->pc = 0x101600u;
label_101600:
    // 0x101600: 0x10400045
    ctx->pc = 0x101600u;
    {
        const bool branch_taken_0x101600 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x101600) {
            ctx->pc = 0x101718u;
            goto label_101718;
        }
    }
    ctx->pc = 0x101608u;
    // 0x101608: 0x3c030010
    ctx->pc = 0x101608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x10160c: 0x2404ffff
    ctx->pc = 0x10160cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_101610:
    // 0x101610: 0x2463ffff
    ctx->pc = 0x101610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x101614: 0x0
    ctx->pc = 0x101614u;
    // NOP
    // 0x101618: 0x0
    ctx->pc = 0x101618u;
    // NOP
    // 0x10161c: 0x0
    ctx->pc = 0x10161cu;
    // NOP
    // 0x101620: 0x0
    ctx->pc = 0x101620u;
    // NOP
    // 0x101624: 0x1464fffa
    ctx->pc = 0x101624u;
    {
        const bool branch_taken_0x101624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x101624) {
            ctx->pc = 0x101610u;
            goto label_101610;
        }
    }
    ctx->pc = 0x10162Cu;
    // 0x10162c: 0x40882d
    ctx->pc = 0x10162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101630:
    // 0x101630: 0x26b0a1d0
    ctx->pc = 0x101630u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294943184));
label_101634:
    // 0x101634: 0x3c058000
    ctx->pc = 0x101634u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x101638: 0x200202d
    ctx->pc = 0x101638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10163c: 0x34a5059c
    ctx->pc = 0x10163cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1436));
    // 0x101640: 0xc045e06
    ctx->pc = 0x101640u;
    SET_GPR_U32(ctx, 31, 0x101648u);
    ctx->pc = 0x101644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117818_0x117818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101648u; }
    }
    if (ctx->pc != 0x101648u) { return; }
    ctx->pc = 0x101648u;
    // 0x101648: 0x4430012
    ctx->pc = 0x101648u;
    {
        const bool branch_taken_0x101648 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x101648) {
            ctx->pc = 0x10164Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x101694u;
            goto label_101694;
        }
    }
    ctx->pc = 0x101650u;
    // 0x101650: 0x8ec27910
    ctx->pc = 0x101650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
    // 0x101654: 0x18400005
    ctx->pc = 0x101654u;
    {
        const bool branch_taken_0x101654 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101658u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
        if (branch_taken_0x101654) {
            ctx->pc = 0x10166Cu;
            goto label_10166c;
        }
    }
    ctx->pc = 0x10165Cu;
    // 0x10165c: 0x3c040023
    ctx->pc = 0x10165cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x101660: 0xc045a12
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30208));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101668u; }
    }
    if (ctx->pc != 0x101668u) { return; }
    ctx->pc = 0x101668u;
    // 0x101668: 0x3c030010
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_10166c:
    // 0x10166c: 0x2402ffff
    ctx->pc = 0x10166cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_101670:
    // 0x101670: 0x2463ffff
    ctx->pc = 0x101670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x101674: 0x0
    ctx->pc = 0x101674u;
    // NOP
    // 0x101678: 0x0
    ctx->pc = 0x101678u;
    // NOP
    // 0x10167c: 0x0
    ctx->pc = 0x10167cu;
    // NOP
    // 0x101680: 0x0
    ctx->pc = 0x101680u;
    // NOP
    // 0x101684: 0x1462fffa
    ctx->pc = 0x101684u;
    {
        const bool branch_taken_0x101684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x101684) {
            ctx->pc = 0x101670u;
            goto label_101670;
        }
    }
    ctx->pc = 0x10168Cu;
    // 0x10168c: 0x1000ffe9
    ctx->pc = 0x10168Cu;
    {
        const bool branch_taken_0x10168c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101690u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294943184));
        if (branch_taken_0x10168c) {
            ctx->pc = 0x101634u;
            goto label_101634;
        }
    }
    ctx->pc = 0x101694u;
label_101694:
    // 0x101694: 0x1040ffda
    ctx->pc = 0x101694u;
    {
        const bool branch_taken_0x101694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101698u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 17));
        if (branch_taken_0x101694) {
            ctx->pc = 0x101600u;
            goto label_101600;
        }
    }
    ctx->pc = 0x10169Cu;
    // 0x10169c: 0x10000002
    ctx->pc = 0x10169Cu;
    {
        const bool branch_taken_0x10169c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1016A0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 31048), GPR_U32(ctx, 0));
        if (branch_taken_0x10169c) {
            ctx->pc = 0x1016A8u;
            goto label_1016a8;
        }
    }
    ctx->pc = 0x1016A4u;
label_1016a4:
    // 0x1016a4: 0x3c150026
    ctx->pc = 0x1016a4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
label_1016a8:
    // 0x1016a8: 0x3c020026
    ctx->pc = 0x1016a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1016ac: 0x24050004
    ctx->pc = 0x1016acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1016b0: 0x2450a210
    ctx->pc = 0x1016b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294943248));
    // 0x1016b4: 0xac52a210
    ctx->pc = 0x1016b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943248), GPR_U32(ctx, 18));
    // 0x1016b8: 0xc045bf4
    ctx->pc = 0x1016B8u;
    SET_GPR_U32(ctx, 31, 0x1016C0u);
    ctx->pc = 0x1016BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016C0u; }
    }
    if (ctx->pc != 0x1016C0u) { return; }
    ctx->pc = 0x1016C0u;
    // 0x1016c0: 0x3c020021
    ctx->pc = 0x1016c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1016c4: 0x26a4a1d0
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294943184));
    // 0x1016c8: 0x24519380
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294939520));
    // 0x1016cc: 0x200382d
    ctx->pc = 0x1016ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016d0: 0xafa00000
    ctx->pc = 0x1016d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1016d4: 0x282d
    ctx->pc = 0x1016d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016d8: 0x302d
    ctx->pc = 0x1016d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016dc: 0x24080004
    ctx->pc = 0x1016dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1016e0: 0x220482d
    ctx->pc = 0x1016e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016e4: 0x240a0004
    ctx->pc = 0x1016e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1016e8: 0xc045e7a
    ctx->pc = 0x1016E8u;
    SET_GPR_U32(ctx, 31, 0x1016F0u);
    ctx->pc = 0x1016ECu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016F0u; }
    }
    if (ctx->pc != 0x1016F0u) { return; }
    ctx->pc = 0x1016F0u;
    // 0x1016f0: 0x4430010
    ctx->pc = 0x1016F0u;
    {
        const bool branch_taken_0x1016f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1016f0) {
            ctx->pc = 0x1016F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 30992)));
            ctx->pc = 0x101734u;
            goto label_101734;
        }
    }
    ctx->pc = 0x1016F8u;
    // 0x1016f8: 0x8e847930
    ctx->pc = 0x1016f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 31024)));
    // 0x1016fc: 0xc045190
    ctx->pc = 0x1016FCu;
    SET_GPR_U32(ctx, 31, 0x101704u);
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101704u; }
    }
    if (ctx->pc != 0x101704u) { return; }
    ctx->pc = 0x101704u;
    // 0x101704: 0x3a440008
    ctx->pc = 0x101704u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 18), 8));
label_101708:
    // 0x101708: 0x2403ffff
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10170c: 0x24020006
    ctx->pc = 0x10170cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x101710: 0x10000012
    ctx->pc = 0x101710u;
    {
        const bool branch_taken_0x101710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101714u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        if (branch_taken_0x101710) {
            ctx->pc = 0x10175Cu;
            goto label_10175c;
        }
    }
    ctx->pc = 0x101718u;
label_101718:
    // 0x101718: 0x8e847930
    ctx->pc = 0x101718u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 31024)));
    // 0x10171c: 0xc045190
    ctx->pc = 0x10171Cu;
    SET_GPR_U32(ctx, 31, 0x101724u);
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101724u; }
    }
    if (ctx->pc != 0x101724u) { return; }
    ctx->pc = 0x101724u;
    // 0x101724: 0xc0404e2
    ctx->pc = 0x101724u;
    SET_GPR_U32(ctx, 31, 0x10172Cu);
    ctx->pc = 0x101728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101388u;
    goto label_101388;
    ctx->pc = 0x10172Cu;
label_10172c:
    // 0x10172c: 0x1000000c
    ctx->pc = 0x10172Cu;
    {
        const bool branch_taken_0x10172c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101730u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x10172c) {
            ctx->pc = 0x101760u;
            goto label_101760;
        }
    }
    ctx->pc = 0x101734u;
label_101734:
    // 0x101734: 0x18400003
    ctx->pc = 0x101734u;
    {
        const bool branch_taken_0x101734 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101738u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x101734) {
            ctx->pc = 0x101744u;
            goto label_101744;
        }
    }
    ctx->pc = 0x10173Cu;
    // 0x10173c: 0xc045a12
    ctx->pc = 0x10173Cu;
    SET_GPR_U32(ctx, 31, 0x101744u);
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30240));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101744u; }
    }
    if (ctx->pc != 0x101744u) { return; }
    ctx->pc = 0x101744u;
label_101744:
    // 0x101744: 0x3c022000
    ctx->pc = 0x101744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x101748: 0x8e847930
    ctx->pc = 0x101748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 31024)));
    // 0x10174c: 0x2221025
    ctx->pc = 0x10174cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x101750: 0xc045190
    ctx->pc = 0x101750u;
    SET_GPR_U32(ctx, 31, 0x101758u);
    ctx->pc = 0x101754u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101758u; }
    }
    if (ctx->pc != 0x101758u) { return; }
    ctx->pc = 0x101758u;
    // 0x101758: 0x200102d
    ctx->pc = 0x101758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10175c:
    // 0x10175c: 0xdfbf0080
    ctx->pc = 0x10175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_101760:
    // 0x101760: 0xdfb60070
    ctx->pc = 0x101760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101764: 0xdfb50060
    ctx->pc = 0x101764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101768: 0xdfb40050
    ctx->pc = 0x101768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10176c: 0xdfb30040
    ctx->pc = 0x10176cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101770: 0xdfb20030
    ctx->pc = 0x101770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101774: 0xdfb10020
    ctx->pc = 0x101774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101778: 0xdfb00010
    ctx->pc = 0x101778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10177c: 0x3e00008
    ctx->pc = 0x10177Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101388u: goto label_101388;
            case 0x1013CCu: goto label_1013cc;
            case 0x101420u: goto label_101420;
            case 0x101428u: goto label_101428;
            case 0x101444u: goto label_101444;
            case 0x101448u: goto label_101448;
            case 0x101480u: goto label_101480;
            case 0x101488u: goto label_101488;
            case 0x1014ACu: goto label_1014ac;
            case 0x1014BCu: goto label_1014bc;
            case 0x1014C4u: goto label_1014c4;
            case 0x10150Cu: goto label_10150c;
            case 0x10152Cu: goto label_10152c;
            case 0x10153Cu: goto label_10153c;
            case 0x101554u: goto label_101554;
            case 0x1015C0u: goto label_1015c0;
            case 0x101600u: goto label_101600;
            case 0x101610u: goto label_101610;
            case 0x101630u: goto label_101630;
            case 0x101634u: goto label_101634;
            case 0x10166Cu: goto label_10166c;
            case 0x101670u: goto label_101670;
            case 0x101694u: goto label_101694;
            case 0x1016A4u: goto label_1016a4;
            case 0x1016A8u: goto label_1016a8;
            case 0x101708u: goto label_101708;
            case 0x101718u: goto label_101718;
            case 0x10172Cu: goto label_10172c;
            case 0x101734u: goto label_101734;
            case 0x101744u: goto label_101744;
            case 0x10175Cu: goto label_10175c;
            case 0x101760u: goto label_101760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101784u;
    // 0x101784: 0x0
    ctx->pc = 0x101784u;
    // NOP
}
