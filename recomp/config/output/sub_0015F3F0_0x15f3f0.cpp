#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F3F0
// Address: 0x15f3f0 - 0x15f5b0
void sub_0015F3F0_0x15f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f3f0u;

label_15f3f0:
    // 0x15f3f0: 0x27bdffc0
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_15f3f4:
    // 0x15f3f4: 0xffb00010
    ctx->pc = 0x15f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15f3f8:
    // 0x15f3f8: 0x80802d
    ctx->pc = 0x15f3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f3fc:
    // 0x15f3fc: 0xffb20020
    ctx->pc = 0x15f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15f400:
    // 0x15f400: 0xffb10018
    ctx->pc = 0x15f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15f404:
    // 0x15f404: 0xffb30028
    ctx->pc = 0x15f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15f408:
    // 0x15f408: 0xffbf0030
    ctx->pc = 0x15f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15f40c:
    // 0x15f40c: 0xc057ff0
label_15f410:
    if (ctx->pc == 0x15F410u) {
        ctx->pc = 0x15F410u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F414u;
        goto label_15f414;
    }
    ctx->pc = 0x15F40Cu;
    SET_GPR_U32(ctx, 31, 0x15F414u);
    ctx->pc = 0x15F410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F414u; }
    }
    if (ctx->pc != 0x15F414u) { return; }
    ctx->pc = 0x15F414u;
label_15f414:
    // 0x15f414: 0x54400006
label_15f418:
    if (ctx->pc == 0x15F418u) {
        ctx->pc = 0x15F418u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
        ctx->pc = 0x15F41Cu;
        goto label_15f41c;
    }
    ctx->pc = 0x15F414u;
    {
        const bool branch_taken_0x15f414 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15f414) {
            ctx->pc = 0x15F418u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
            ctx->pc = 0x15F430u;
            goto label_15f430;
        }
    }
    ctx->pc = 0x15F41Cu;
label_15f41c:
    // 0x15f41c: 0x3c040024
    ctx->pc = 0x15f41cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15f420:
    // 0x15f420: 0xc058dd4
label_15f424:
    if (ctx->pc == 0x15F424u) {
        ctx->pc = 0x15F424u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963656));
        ctx->pc = 0x15F428u;
        goto label_15f428;
    }
    ctx->pc = 0x15F420u;
    SET_GPR_U32(ctx, 31, 0x15F428u);
    ctx->pc = 0x15F424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963656));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F428u; }
    }
    if (ctx->pc != 0x15F428u) { return; }
    ctx->pc = 0x15F428u;
label_15f428:
    // 0x15f428: 0x10000032
label_15f42c:
    if (ctx->pc == 0x15F42Cu) {
        ctx->pc = 0x15F42Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x15F430u;
        goto label_15f430;
    }
    ctx->pc = 0x15F428u;
    {
        const bool branch_taken_0x15f428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F42Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x15f428) {
            ctx->pc = 0x15F4F4u;
            goto label_15f4f4;
        }
    }
    ctx->pc = 0x15F430u;
label_15f430:
    // 0x15f430: 0x14400003
label_15f434:
    if (ctx->pc == 0x15F434u) {
        ctx->pc = 0x15F434u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x15F438u;
        goto label_15f438;
    }
    ctx->pc = 0x15F430u;
    {
        const bool branch_taken_0x15f430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F434u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        if (branch_taken_0x15f430) {
            ctx->pc = 0x15F440u;
            goto label_15f440;
        }
    }
    ctx->pc = 0x15F438u;
label_15f438:
    // 0x15f438: 0x5240002e
label_15f43c:
    if (ctx->pc == 0x15F43Cu) {
        ctx->pc = 0x15F43Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x15F440u;
        goto label_15f440;
    }
    ctx->pc = 0x15F438u;
    {
        const bool branch_taken_0x15f438 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x15f438) {
            ctx->pc = 0x15F43Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x15F4F4u;
            goto label_15f4f4;
        }
    }
    ctx->pc = 0x15F440u;
label_15f440:
    // 0x15f440: 0xc057a5e
label_15f444:
    if (ctx->pc == 0x15F444u) {
        ctx->pc = 0x15F448u;
        goto label_15f448;
    }
    ctx->pc = 0x15F440u;
    SET_GPR_U32(ctx, 31, 0x15F448u);
    ctx->pc = 0x15E978u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E978_0x15e978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F448u; }
    }
    if (ctx->pc != 0x15F448u) { return; }
    ctx->pc = 0x15F448u;
label_15f448:
    // 0x15f448: 0x40182d
    ctx->pc = 0x15f448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f44c:
    // 0x15f44c: 0x24020001
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15f450:
    // 0x15f450: 0x14620012
label_15f454:
    if (ctx->pc == 0x15F454u) {
        ctx->pc = 0x15F454u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F458u;
        goto label_15f458;
    }
    ctx->pc = 0x15F450u;
    {
        const bool branch_taken_0x15f450 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x15F454u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f450) {
            ctx->pc = 0x15F49Cu;
            goto label_15f49c;
        }
    }
    ctx->pc = 0x15F458u;
label_15f458:
    // 0x15f458: 0x8e11000c
    ctx->pc = 0x15f458u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f45c:
    // 0x15f45c: 0x1623000f
label_15f460:
    if (ctx->pc == 0x15F460u) {
        ctx->pc = 0x15F464u;
        goto label_15f464;
    }
    ctx->pc = 0x15F45Cu;
    {
        const bool branch_taken_0x15f45c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x15f45c) {
            ctx->pc = 0x15F49Cu;
            goto label_15f49c;
        }
    }
    ctx->pc = 0x15F464u;
label_15f464:
    // 0x15f464: 0x24050006
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_15f468:
    // 0x15f468: 0xc05d562
label_15f46c:
    if (ctx->pc == 0x15F46Cu) {
        ctx->pc = 0x15F46Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F470u;
        goto label_15f470;
    }
    ctx->pc = 0x15F468u;
    SET_GPR_U32(ctx, 31, 0x15F470u);
    ctx->pc = 0x15F46Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175588u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175588_0x175588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F470u; }
    }
    if (ctx->pc != 0x15F470u) { return; }
    ctx->pc = 0x15F470u;
label_15f470:
    // 0x15f470: 0x14400007
label_15f474:
    if (ctx->pc == 0x15F474u) {
        ctx->pc = 0x15F474u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x15F478u;
        goto label_15f478;
    }
    ctx->pc = 0x15F470u;
    {
        const bool branch_taken_0x15f470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F474u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15f470) {
            ctx->pc = 0x15F490u;
            goto label_15f490;
        }
    }
    ctx->pc = 0x15F478u;
label_15f478:
    // 0x15f478: 0x54510008
label_15f47c:
    if (ctx->pc == 0x15F47Cu) {
        ctx->pc = 0x15F47Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F480u;
        goto label_15f480;
    }
    ctx->pc = 0x15F478u;
    {
        const bool branch_taken_0x15f478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x15f478) {
            ctx->pc = 0x15F47Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x15F49Cu;
            goto label_15f49c;
        }
    }
    ctx->pc = 0x15F480u;
label_15f480:
    // 0x15f480: 0xc0590ec
label_15f484:
    if (ctx->pc == 0x15F484u) {
        ctx->pc = 0x15F484u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F488u;
        goto label_15f488;
    }
    ctx->pc = 0x15F480u;
    SET_GPR_U32(ctx, 31, 0x15F488u);
    ctx->pc = 0x15F484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1643B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001643B0_0x1643b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F488u; }
    }
    if (ctx->pc != 0x15F488u) { return; }
    ctx->pc = 0x15F488u;
label_15f488:
    // 0x15f488: 0x10000004
label_15f48c:
    if (ctx->pc == 0x15F48Cu) {
        ctx->pc = 0x15F48Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F490u;
        goto label_15f490;
    }
    ctx->pc = 0x15F488u;
    {
        const bool branch_taken_0x15f488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F48Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f488) {
            ctx->pc = 0x15F49Cu;
            goto label_15f49c;
        }
    }
    ctx->pc = 0x15F490u;
label_15f490:
    // 0x15f490: 0xc0590ec
label_15f494:
    if (ctx->pc == 0x15F494u) {
        ctx->pc = 0x15F494u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F498u;
        goto label_15f498;
    }
    ctx->pc = 0x15F490u;
    SET_GPR_U32(ctx, 31, 0x15F498u);
    ctx->pc = 0x15F494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1643B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001643B0_0x1643b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F498u; }
    }
    if (ctx->pc != 0x15F498u) { return; }
    ctx->pc = 0x15F498u;
label_15f498:
    // 0x15f498: 0x260202d
    ctx->pc = 0x15f498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f49c:
    // 0x15f49c: 0xc05c832
label_15f4a0:
    if (ctx->pc == 0x15F4A0u) {
        ctx->pc = 0x15F4A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F4A4u;
        goto label_15f4a4;
    }
    ctx->pc = 0x15F49Cu;
    SET_GPR_U32(ctx, 31, 0x15F4A4u);
    ctx->pc = 0x15F4A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1720C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001720C8_0x1720c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4A4u; }
    }
    if (ctx->pc != 0x15F4A4u) { return; }
    ctx->pc = 0x15F4A4u;
label_15f4a4:
    // 0x15f4a4: 0x5040000f
label_15f4a8:
    if (ctx->pc == 0x15F4A8u) {
        ctx->pc = 0x15F4A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 492));
        ctx->pc = 0x15F4ACu;
        goto label_15f4ac;
    }
    ctx->pc = 0x15F4A4u;
    {
        const bool branch_taken_0x15f4a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15f4a4) {
            ctx->pc = 0x15F4A8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 492));
            ctx->pc = 0x15F4E4u;
            goto label_15f4e4;
        }
    }
    ctx->pc = 0x15F4ACu;
label_15f4ac:
    // 0x15f4ac: 0xc057abc
label_15f4b0:
    if (ctx->pc == 0x15F4B0u) {
        ctx->pc = 0x15F4B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966986));
        ctx->pc = 0x15F4B4u;
        goto label_15f4b4;
    }
    ctx->pc = 0x15F4ACu;
    SET_GPR_U32(ctx, 31, 0x15F4B4u);
    ctx->pc = 0x15F4B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966986));
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4B4u; }
    }
    if (ctx->pc != 0x15F4B4u) { return; }
    ctx->pc = 0x15F4B4u;
label_15f4b4:
    // 0x15f4b4: 0x3c030024
    ctx->pc = 0x15f4b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_15f4b8:
    // 0x15f4b8: 0x24020001
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15f4bc:
    // 0x15f4bc: 0x16420004
label_15f4c0:
    if (ctx->pc == 0x15F4C0u) {
        ctx->pc = 0x15F4C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294963696));
        ctx->pc = 0x15F4C4u;
        goto label_15f4c4;
    }
    ctx->pc = 0x15F4BCu;
    {
        const bool branch_taken_0x15f4bc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x15F4C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294963696));
        if (branch_taken_0x15f4bc) {
            ctx->pc = 0x15F4D0u;
            goto label_15f4d0;
        }
    }
    ctx->pc = 0x15F4C4u;
label_15f4c4:
    // 0x15f4c4: 0x3c020024
    ctx->pc = 0x15f4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_15f4c8:
    // 0x15f4c8: 0x10000003
label_15f4cc:
    if (ctx->pc == 0x15F4CCu) {
        ctx->pc = 0x15F4CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294963736));
        ctx->pc = 0x15F4D0u;
        goto label_15f4d0;
    }
    ctx->pc = 0x15F4C8u;
    {
        const bool branch_taken_0x15f4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F4CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294963736));
        if (branch_taken_0x15f4c8) {
            ctx->pc = 0x15F4D8u;
            goto label_15f4d8;
        }
    }
    ctx->pc = 0x15F4D0u;
label_15f4d0:
    // 0x15f4d0: 0x3c020024
    ctx->pc = 0x15f4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_15f4d4:
    // 0x15f4d4: 0x2445f220
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294963744));
label_15f4d8:
    // 0x15f4d8: 0xc058dd4
label_15f4dc:
    if (ctx->pc == 0x15F4DCu) {
        ctx->pc = 0x15F4E0u;
        goto label_15f4e0;
    }
    ctx->pc = 0x15F4D8u;
    SET_GPR_U32(ctx, 31, 0x15F4E0u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4E0u; }
    }
    if (ctx->pc != 0x15F4E0u) { return; }
    ctx->pc = 0x15F4E0u;
label_15f4e0:
    // 0x15f4e0: 0x260401ec
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 492));
label_15f4e4:
    // 0x15f4e4: 0xc058c1e
label_15f4e8:
    if (ctx->pc == 0x15F4E8u) {
        ctx->pc = 0x15F4E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F4ECu;
        goto label_15f4ec;
    }
    ctx->pc = 0x15F4E4u;
    SET_GPR_U32(ctx, 31, 0x15F4ECu);
    ctx->pc = 0x15F4E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163078_0x163078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4ECu; }
    }
    if (ctx->pc != 0x15F4ECu) { return; }
    ctx->pc = 0x15F4ECu;
label_15f4ec:
    // 0x15f4ec: 0xa2120072
    ctx->pc = 0x15f4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 18));
label_15f4f0:
    // 0x15f4f0: 0xdfb00010
    ctx->pc = 0x15f4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f4f4:
    // 0x15f4f4: 0xdfb10018
    ctx->pc = 0x15f4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f4f8:
    // 0x15f4f8: 0xdfb20020
    ctx->pc = 0x15f4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f4fc:
    // 0x15f4fc: 0xdfb30028
    ctx->pc = 0x15f4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15f500:
    // 0x15f500: 0xdfbf0030
    ctx->pc = 0x15f500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f504:
    // 0x15f504: 0x3e00008
label_15f508:
    if (ctx->pc == 0x15F508u) {
        ctx->pc = 0x15F508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15F50Cu;
        goto label_15f50c;
    }
    ctx->pc = 0x15F504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F3F0u: goto label_15f3f0;
            case 0x15F3F4u: goto label_15f3f4;
            case 0x15F3F8u: goto label_15f3f8;
            case 0x15F3FCu: goto label_15f3fc;
            case 0x15F400u: goto label_15f400;
            case 0x15F404u: goto label_15f404;
            case 0x15F408u: goto label_15f408;
            case 0x15F40Cu: goto label_15f40c;
            case 0x15F410u: goto label_15f410;
            case 0x15F414u: goto label_15f414;
            case 0x15F418u: goto label_15f418;
            case 0x15F41Cu: goto label_15f41c;
            case 0x15F420u: goto label_15f420;
            case 0x15F424u: goto label_15f424;
            case 0x15F428u: goto label_15f428;
            case 0x15F42Cu: goto label_15f42c;
            case 0x15F430u: goto label_15f430;
            case 0x15F434u: goto label_15f434;
            case 0x15F438u: goto label_15f438;
            case 0x15F43Cu: goto label_15f43c;
            case 0x15F440u: goto label_15f440;
            case 0x15F444u: goto label_15f444;
            case 0x15F448u: goto label_15f448;
            case 0x15F44Cu: goto label_15f44c;
            case 0x15F450u: goto label_15f450;
            case 0x15F454u: goto label_15f454;
            case 0x15F458u: goto label_15f458;
            case 0x15F45Cu: goto label_15f45c;
            case 0x15F460u: goto label_15f460;
            case 0x15F464u: goto label_15f464;
            case 0x15F468u: goto label_15f468;
            case 0x15F46Cu: goto label_15f46c;
            case 0x15F470u: goto label_15f470;
            case 0x15F474u: goto label_15f474;
            case 0x15F478u: goto label_15f478;
            case 0x15F47Cu: goto label_15f47c;
            case 0x15F480u: goto label_15f480;
            case 0x15F484u: goto label_15f484;
            case 0x15F488u: goto label_15f488;
            case 0x15F48Cu: goto label_15f48c;
            case 0x15F490u: goto label_15f490;
            case 0x15F494u: goto label_15f494;
            case 0x15F498u: goto label_15f498;
            case 0x15F49Cu: goto label_15f49c;
            case 0x15F4A0u: goto label_15f4a0;
            case 0x15F4A4u: goto label_15f4a4;
            case 0x15F4A8u: goto label_15f4a8;
            case 0x15F4ACu: goto label_15f4ac;
            case 0x15F4B0u: goto label_15f4b0;
            case 0x15F4B4u: goto label_15f4b4;
            case 0x15F4B8u: goto label_15f4b8;
            case 0x15F4BCu: goto label_15f4bc;
            case 0x15F4C0u: goto label_15f4c0;
            case 0x15F4C4u: goto label_15f4c4;
            case 0x15F4C8u: goto label_15f4c8;
            case 0x15F4CCu: goto label_15f4cc;
            case 0x15F4D0u: goto label_15f4d0;
            case 0x15F4D4u: goto label_15f4d4;
            case 0x15F4D8u: goto label_15f4d8;
            case 0x15F4DCu: goto label_15f4dc;
            case 0x15F4E0u: goto label_15f4e0;
            case 0x15F4E4u: goto label_15f4e4;
            case 0x15F4E8u: goto label_15f4e8;
            case 0x15F4ECu: goto label_15f4ec;
            case 0x15F4F0u: goto label_15f4f0;
            case 0x15F4F4u: goto label_15f4f4;
            case 0x15F4F8u: goto label_15f4f8;
            case 0x15F4FCu: goto label_15f4fc;
            case 0x15F500u: goto label_15f500;
            case 0x15F504u: goto label_15f504;
            case 0x15F508u: goto label_15f508;
            case 0x15F50Cu: goto label_15f50c;
            case 0x15F510u: goto label_15f510;
            case 0x15F514u: goto label_15f514;
            case 0x15F518u: goto label_15f518;
            case 0x15F51Cu: goto label_15f51c;
            case 0x15F520u: goto label_15f520;
            case 0x15F524u: goto label_15f524;
            case 0x15F528u: goto label_15f528;
            case 0x15F52Cu: goto label_15f52c;
            case 0x15F530u: goto label_15f530;
            case 0x15F534u: goto label_15f534;
            case 0x15F538u: goto label_15f538;
            case 0x15F53Cu: goto label_15f53c;
            case 0x15F540u: goto label_15f540;
            case 0x15F544u: goto label_15f544;
            case 0x15F548u: goto label_15f548;
            case 0x15F54Cu: goto label_15f54c;
            case 0x15F550u: goto label_15f550;
            case 0x15F554u: goto label_15f554;
            case 0x15F558u: goto label_15f558;
            case 0x15F55Cu: goto label_15f55c;
            case 0x15F560u: goto label_15f560;
            case 0x15F564u: goto label_15f564;
            case 0x15F568u: goto label_15f568;
            case 0x15F56Cu: goto label_15f56c;
            case 0x15F570u: goto label_15f570;
            case 0x15F574u: goto label_15f574;
            case 0x15F578u: goto label_15f578;
            case 0x15F57Cu: goto label_15f57c;
            case 0x15F580u: goto label_15f580;
            case 0x15F584u: goto label_15f584;
            case 0x15F588u: goto label_15f588;
            case 0x15F58Cu: goto label_15f58c;
            case 0x15F590u: goto label_15f590;
            case 0x15F594u: goto label_15f594;
            case 0x15F598u: goto label_15f598;
            case 0x15F59Cu: goto label_15f59c;
            case 0x15F5A0u: goto label_15f5a0;
            case 0x15F5A4u: goto label_15f5a4;
            case 0x15F5A8u: goto label_15f5a8;
            case 0x15F5ACu: goto label_15f5ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F50Cu;
label_15f50c:
    // 0x15f50c: 0x0
    ctx->pc = 0x15f50cu;
    // NOP
label_15f510:
    // 0x15f510: 0x27bdffe0
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_15f514:
    // 0x15f514: 0xffb00000
    ctx->pc = 0x15f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f518:
    // 0x15f518: 0x80802d
    ctx->pc = 0x15f518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f51c:
    // 0x15f51c: 0xffb10008
    ctx->pc = 0x15f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15f520:
    // 0x15f520: 0xa0882d
    ctx->pc = 0x15f520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f524:
    // 0x15f524: 0xffb20010
    ctx->pc = 0x15f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15f528:
    // 0x15f528: 0xffbf0018
    ctx->pc = 0x15f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_15f52c:
    // 0x15f52c: 0xc057ff0
label_15f530:
    if (ctx->pc == 0x15F530u) {
        ctx->pc = 0x15F530u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F534u;
        goto label_15f534;
    }
    ctx->pc = 0x15F52Cu;
    SET_GPR_U32(ctx, 31, 0x15F534u);
    ctx->pc = 0x15F530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F534u; }
    }
    if (ctx->pc != 0x15F534u) { return; }
    ctx->pc = 0x15F534u;
label_15f534:
    // 0x15f534: 0x1440000a
label_15f538:
    if (ctx->pc == 0x15F538u) {
        ctx->pc = 0x15F538u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F53Cu;
        goto label_15f53c;
    }
    ctx->pc = 0x15F534u;
    {
        const bool branch_taken_0x15f534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F538u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f534) {
            ctx->pc = 0x15F560u;
            goto label_15f560;
        }
    }
    ctx->pc = 0x15F53Cu;
label_15f53c:
    // 0x15f53c: 0x3c040024
    ctx->pc = 0x15f53cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15f540:
    // 0x15f540: 0xdfb00000
    ctx->pc = 0x15f540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f544:
    // 0x15f544: 0xdfb10008
    ctx->pc = 0x15f544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f548:
    // 0x15f548: 0x2484f228
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963752));
label_15f54c:
    // 0x15f54c: 0xdfb20010
    ctx->pc = 0x15f54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f550:
    // 0x15f550: 0xdfbf0018
    ctx->pc = 0x15f550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f554:
    // 0x15f554: 0x8058dd4
label_15f558:
    if (ctx->pc == 0x15F558u) {
        ctx->pc = 0x15F558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F55Cu;
        goto label_15f55c;
    }
    ctx->pc = 0x15F554u;
    ctx->pc = 0x15F558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x0
    ctx->pc = 0x15f55cu;
    // NOP
label_15f560:
    // 0x15f560: 0xc0581f6
label_15f564:
    if (ctx->pc == 0x15F564u) {
        ctx->pc = 0x15F568u;
        goto label_15f568;
    }
    ctx->pc = 0x15F560u;
    SET_GPR_U32(ctx, 31, 0x15F568u);
    ctx->pc = 0x1607D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001607D8_0x1607d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F568u; }
    }
    if (ctx->pc != 0x15F568u) { return; }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x40282d
    ctx->pc = 0x15f568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f56c:
    // 0x15f56c: 0x8e020000
    ctx->pc = 0x15f56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f570:
    // 0x15f570: 0x8c43003c
    ctx->pc = 0x15f570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15f574:
    // 0x15f574: 0x60f809
label_15f578:
    if (ctx->pc == 0x15F578u) {
        ctx->pc = 0x15F578u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F57Cu;
        goto label_15f57c;
    }
    ctx->pc = 0x15F574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F57Cu);
        ctx->pc = 0x15F578u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F3F0u: goto label_15f3f0;
            case 0x15F3F4u: goto label_15f3f4;
            case 0x15F3F8u: goto label_15f3f8;
            case 0x15F3FCu: goto label_15f3fc;
            case 0x15F400u: goto label_15f400;
            case 0x15F404u: goto label_15f404;
            case 0x15F408u: goto label_15f408;
            case 0x15F40Cu: goto label_15f40c;
            case 0x15F410u: goto label_15f410;
            case 0x15F414u: goto label_15f414;
            case 0x15F418u: goto label_15f418;
            case 0x15F41Cu: goto label_15f41c;
            case 0x15F420u: goto label_15f420;
            case 0x15F424u: goto label_15f424;
            case 0x15F428u: goto label_15f428;
            case 0x15F42Cu: goto label_15f42c;
            case 0x15F430u: goto label_15f430;
            case 0x15F434u: goto label_15f434;
            case 0x15F438u: goto label_15f438;
            case 0x15F43Cu: goto label_15f43c;
            case 0x15F440u: goto label_15f440;
            case 0x15F444u: goto label_15f444;
            case 0x15F448u: goto label_15f448;
            case 0x15F44Cu: goto label_15f44c;
            case 0x15F450u: goto label_15f450;
            case 0x15F454u: goto label_15f454;
            case 0x15F458u: goto label_15f458;
            case 0x15F45Cu: goto label_15f45c;
            case 0x15F460u: goto label_15f460;
            case 0x15F464u: goto label_15f464;
            case 0x15F468u: goto label_15f468;
            case 0x15F46Cu: goto label_15f46c;
            case 0x15F470u: goto label_15f470;
            case 0x15F474u: goto label_15f474;
            case 0x15F478u: goto label_15f478;
            case 0x15F47Cu: goto label_15f47c;
            case 0x15F480u: goto label_15f480;
            case 0x15F484u: goto label_15f484;
            case 0x15F488u: goto label_15f488;
            case 0x15F48Cu: goto label_15f48c;
            case 0x15F490u: goto label_15f490;
            case 0x15F494u: goto label_15f494;
            case 0x15F498u: goto label_15f498;
            case 0x15F49Cu: goto label_15f49c;
            case 0x15F4A0u: goto label_15f4a0;
            case 0x15F4A4u: goto label_15f4a4;
            case 0x15F4A8u: goto label_15f4a8;
            case 0x15F4ACu: goto label_15f4ac;
            case 0x15F4B0u: goto label_15f4b0;
            case 0x15F4B4u: goto label_15f4b4;
            case 0x15F4B8u: goto label_15f4b8;
            case 0x15F4BCu: goto label_15f4bc;
            case 0x15F4C0u: goto label_15f4c0;
            case 0x15F4C4u: goto label_15f4c4;
            case 0x15F4C8u: goto label_15f4c8;
            case 0x15F4CCu: goto label_15f4cc;
            case 0x15F4D0u: goto label_15f4d0;
            case 0x15F4D4u: goto label_15f4d4;
            case 0x15F4D8u: goto label_15f4d8;
            case 0x15F4DCu: goto label_15f4dc;
            case 0x15F4E0u: goto label_15f4e0;
            case 0x15F4E4u: goto label_15f4e4;
            case 0x15F4E8u: goto label_15f4e8;
            case 0x15F4ECu: goto label_15f4ec;
            case 0x15F4F0u: goto label_15f4f0;
            case 0x15F4F4u: goto label_15f4f4;
            case 0x15F4F8u: goto label_15f4f8;
            case 0x15F4FCu: goto label_15f4fc;
            case 0x15F500u: goto label_15f500;
            case 0x15F504u: goto label_15f504;
            case 0x15F508u: goto label_15f508;
            case 0x15F50Cu: goto label_15f50c;
            case 0x15F510u: goto label_15f510;
            case 0x15F514u: goto label_15f514;
            case 0x15F518u: goto label_15f518;
            case 0x15F51Cu: goto label_15f51c;
            case 0x15F520u: goto label_15f520;
            case 0x15F524u: goto label_15f524;
            case 0x15F528u: goto label_15f528;
            case 0x15F52Cu: goto label_15f52c;
            case 0x15F530u: goto label_15f530;
            case 0x15F534u: goto label_15f534;
            case 0x15F538u: goto label_15f538;
            case 0x15F53Cu: goto label_15f53c;
            case 0x15F540u: goto label_15f540;
            case 0x15F544u: goto label_15f544;
            case 0x15F548u: goto label_15f548;
            case 0x15F54Cu: goto label_15f54c;
            case 0x15F550u: goto label_15f550;
            case 0x15F554u: goto label_15f554;
            case 0x15F558u: goto label_15f558;
            case 0x15F55Cu: goto label_15f55c;
            case 0x15F560u: goto label_15f560;
            case 0x15F564u: goto label_15f564;
            case 0x15F568u: goto label_15f568;
            case 0x15F56Cu: goto label_15f56c;
            case 0x15F570u: goto label_15f570;
            case 0x15F574u: goto label_15f574;
            case 0x15F578u: goto label_15f578;
            case 0x15F57Cu: goto label_15f57c;
            case 0x15F580u: goto label_15f580;
            case 0x15F584u: goto label_15f584;
            case 0x15F588u: goto label_15f588;
            case 0x15F58Cu: goto label_15f58c;
            case 0x15F590u: goto label_15f590;
            case 0x15F594u: goto label_15f594;
            case 0x15F598u: goto label_15f598;
            case 0x15F59Cu: goto label_15f59c;
            case 0x15F5A0u: goto label_15f5a0;
            case 0x15F5A4u: goto label_15f5a4;
            case 0x15F5A8u: goto label_15f5a8;
            case 0x15F5ACu: goto label_15f5ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F57Cu; }
            if (ctx->pc != 0x15F57Cu) { return; }
        }
    }
    ctx->pc = 0x15F57Cu;
label_15f57c:
    // 0x15f57c: 0x200202d
    ctx->pc = 0x15f57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f580:
    // 0x15f580: 0x220282d
    ctx->pc = 0x15f580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f584:
    // 0x15f584: 0xc057dc6
label_15f588:
    if (ctx->pc == 0x15F588u) {
        ctx->pc = 0x15F588u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F58Cu;
        goto label_15f58c;
    }
    ctx->pc = 0x15F584u;
    SET_GPR_U32(ctx, 31, 0x15F58Cu);
    ctx->pc = 0x15F588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F718u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F718_0x15f718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F58Cu; }
    }
    if (ctx->pc != 0x15F58Cu) { return; }
    ctx->pc = 0x15F58Cu;
label_15f58c:
    // 0x15f58c: 0x24020001
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15f590:
    // 0x15f590: 0xae020118
    ctx->pc = 0x15f590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_15f594:
    // 0x15f594: 0xdfb10008
    ctx->pc = 0x15f594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f598:
    // 0x15f598: 0xdfb00000
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f59c:
    // 0x15f59c: 0xdfb20010
    ctx->pc = 0x15f59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f5a0:
    // 0x15f5a0: 0xdfbf0018
    ctx->pc = 0x15f5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f5a4:
    // 0x15f5a4: 0x3e00008
label_15f5a8:
    if (ctx->pc == 0x15F5A8u) {
        ctx->pc = 0x15F5A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F5ACu;
        goto label_15f5ac;
    }
    ctx->pc = 0x15F5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F5A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F3F0u: goto label_15f3f0;
            case 0x15F3F4u: goto label_15f3f4;
            case 0x15F3F8u: goto label_15f3f8;
            case 0x15F3FCu: goto label_15f3fc;
            case 0x15F400u: goto label_15f400;
            case 0x15F404u: goto label_15f404;
            case 0x15F408u: goto label_15f408;
            case 0x15F40Cu: goto label_15f40c;
            case 0x15F410u: goto label_15f410;
            case 0x15F414u: goto label_15f414;
            case 0x15F418u: goto label_15f418;
            case 0x15F41Cu: goto label_15f41c;
            case 0x15F420u: goto label_15f420;
            case 0x15F424u: goto label_15f424;
            case 0x15F428u: goto label_15f428;
            case 0x15F42Cu: goto label_15f42c;
            case 0x15F430u: goto label_15f430;
            case 0x15F434u: goto label_15f434;
            case 0x15F438u: goto label_15f438;
            case 0x15F43Cu: goto label_15f43c;
            case 0x15F440u: goto label_15f440;
            case 0x15F444u: goto label_15f444;
            case 0x15F448u: goto label_15f448;
            case 0x15F44Cu: goto label_15f44c;
            case 0x15F450u: goto label_15f450;
            case 0x15F454u: goto label_15f454;
            case 0x15F458u: goto label_15f458;
            case 0x15F45Cu: goto label_15f45c;
            case 0x15F460u: goto label_15f460;
            case 0x15F464u: goto label_15f464;
            case 0x15F468u: goto label_15f468;
            case 0x15F46Cu: goto label_15f46c;
            case 0x15F470u: goto label_15f470;
            case 0x15F474u: goto label_15f474;
            case 0x15F478u: goto label_15f478;
            case 0x15F47Cu: goto label_15f47c;
            case 0x15F480u: goto label_15f480;
            case 0x15F484u: goto label_15f484;
            case 0x15F488u: goto label_15f488;
            case 0x15F48Cu: goto label_15f48c;
            case 0x15F490u: goto label_15f490;
            case 0x15F494u: goto label_15f494;
            case 0x15F498u: goto label_15f498;
            case 0x15F49Cu: goto label_15f49c;
            case 0x15F4A0u: goto label_15f4a0;
            case 0x15F4A4u: goto label_15f4a4;
            case 0x15F4A8u: goto label_15f4a8;
            case 0x15F4ACu: goto label_15f4ac;
            case 0x15F4B0u: goto label_15f4b0;
            case 0x15F4B4u: goto label_15f4b4;
            case 0x15F4B8u: goto label_15f4b8;
            case 0x15F4BCu: goto label_15f4bc;
            case 0x15F4C0u: goto label_15f4c0;
            case 0x15F4C4u: goto label_15f4c4;
            case 0x15F4C8u: goto label_15f4c8;
            case 0x15F4CCu: goto label_15f4cc;
            case 0x15F4D0u: goto label_15f4d0;
            case 0x15F4D4u: goto label_15f4d4;
            case 0x15F4D8u: goto label_15f4d8;
            case 0x15F4DCu: goto label_15f4dc;
            case 0x15F4E0u: goto label_15f4e0;
            case 0x15F4E4u: goto label_15f4e4;
            case 0x15F4E8u: goto label_15f4e8;
            case 0x15F4ECu: goto label_15f4ec;
            case 0x15F4F0u: goto label_15f4f0;
            case 0x15F4F4u: goto label_15f4f4;
            case 0x15F4F8u: goto label_15f4f8;
            case 0x15F4FCu: goto label_15f4fc;
            case 0x15F500u: goto label_15f500;
            case 0x15F504u: goto label_15f504;
            case 0x15F508u: goto label_15f508;
            case 0x15F50Cu: goto label_15f50c;
            case 0x15F510u: goto label_15f510;
            case 0x15F514u: goto label_15f514;
            case 0x15F518u: goto label_15f518;
            case 0x15F51Cu: goto label_15f51c;
            case 0x15F520u: goto label_15f520;
            case 0x15F524u: goto label_15f524;
            case 0x15F528u: goto label_15f528;
            case 0x15F52Cu: goto label_15f52c;
            case 0x15F530u: goto label_15f530;
            case 0x15F534u: goto label_15f534;
            case 0x15F538u: goto label_15f538;
            case 0x15F53Cu: goto label_15f53c;
            case 0x15F540u: goto label_15f540;
            case 0x15F544u: goto label_15f544;
            case 0x15F548u: goto label_15f548;
            case 0x15F54Cu: goto label_15f54c;
            case 0x15F550u: goto label_15f550;
            case 0x15F554u: goto label_15f554;
            case 0x15F558u: goto label_15f558;
            case 0x15F55Cu: goto label_15f55c;
            case 0x15F560u: goto label_15f560;
            case 0x15F564u: goto label_15f564;
            case 0x15F568u: goto label_15f568;
            case 0x15F56Cu: goto label_15f56c;
            case 0x15F570u: goto label_15f570;
            case 0x15F574u: goto label_15f574;
            case 0x15F578u: goto label_15f578;
            case 0x15F57Cu: goto label_15f57c;
            case 0x15F580u: goto label_15f580;
            case 0x15F584u: goto label_15f584;
            case 0x15F588u: goto label_15f588;
            case 0x15F58Cu: goto label_15f58c;
            case 0x15F590u: goto label_15f590;
            case 0x15F594u: goto label_15f594;
            case 0x15F598u: goto label_15f598;
            case 0x15F59Cu: goto label_15f59c;
            case 0x15F5A0u: goto label_15f5a0;
            case 0x15F5A4u: goto label_15f5a4;
            case 0x15F5A8u: goto label_15f5a8;
            case 0x15F5ACu: goto label_15f5ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F5ACu;
label_15f5ac:
    // 0x15f5ac: 0x0
    ctx->pc = 0x15f5acu;
    // NOP
}
