#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158428
// Address: 0x158428 - 0x158500
void sub_00158428_0x158428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158428u;

    // 0x158428: 0x3c030023
    ctx->pc = 0x158428u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15842c: 0x302d
    ctx->pc = 0x15842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158430: 0x8c62d870
    ctx->pc = 0x158430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957168)));
    // 0x158434: 0x8c45000c
    ctx->pc = 0x158434u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x158438: 0x18a0000e
    ctx->pc = 0x158438u;
    {
        const bool branch_taken_0x158438 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x15843Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x158438) {
            ctx->pc = 0x158474u;
            goto label_158474;
        }
    }
    ctx->pc = 0x158440u;
    // 0x158440: 0x40202d
    ctx->pc = 0x158440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158444: 0x24070001
    ctx->pc = 0x158444u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x158448: 0x8c830000
    ctx->pc = 0x158448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15844c: 0x0
    ctx->pc = 0x15844cu;
    // NOP
label_158450:
    // 0x158450: 0x80102d
    ctx->pc = 0x158450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158454: 0x10670008
    ctx->pc = 0x158454u;
    {
        const bool branch_taken_0x158454 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        ctx->pc = 0x158458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 192));
        if (branch_taken_0x158454) {
            ctx->pc = 0x158478u;
            goto label_158478;
        }
    }
    ctx->pc = 0x15845Cu;
    // 0x15845c: 0x24c60001
    ctx->pc = 0x15845cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x158460: 0xc5102a
    ctx->pc = 0x158460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x158464: 0x0
    ctx->pc = 0x158464u;
    // NOP
    // 0x158468: 0x0
    ctx->pc = 0x158468u;
    // NOP
    // 0x15846c: 0x5440fff8
    ctx->pc = 0x15846Cu;
    {
        const bool branch_taken_0x15846c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15846c) {
            ctx->pc = 0x158470u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x158450u;
            goto label_158450;
        }
    }
    ctx->pc = 0x158474u;
label_158474:
    // 0x158474: 0x102d
    ctx->pc = 0x158474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158478:
    // 0x158478: 0x3e00008
    ctx->pc = 0x158478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158450u: goto label_158450;
            case 0x158474u: goto label_158474;
            case 0x158478u: goto label_158478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158480u;
    // 0x158480: 0x27bdffe0
    ctx->pc = 0x158480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158484: 0x282d
    ctx->pc = 0x158484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158488: 0xffb00000
    ctx->pc = 0x158488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15848c: 0x80802d
    ctx->pc = 0x15848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158490: 0xffb10008
    ctx->pc = 0x158490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158494: 0x24110002
    ctx->pc = 0x158494u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x158498: 0xffbf0010
    ctx->pc = 0x158498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15849c: 0xc0558b4
    ctx->pc = 0x15849Cu;
    SET_GPR_U32(ctx, 31, 0x1584A4u);
    ctx->pc = 0x1584A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584A4u; }
    }
    if (ctx->pc != 0x1584A4u) { return; }
    ctx->pc = 0x1584A4u;
    // 0x1584a4: 0xae110000
    ctx->pc = 0x1584a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1584a8: 0xc05607a
    ctx->pc = 0x1584A8u;
    SET_GPR_U32(ctx, 31, 0x1584B0u);
    ctx->pc = 0x1584ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1581E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001581E8_0x1581e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584B0u; }
    }
    if (ctx->pc != 0x1584B0u) { return; }
    ctx->pc = 0x1584B0u;
    // 0x1584b0: 0xae110010
    ctx->pc = 0x1584b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1584b4: 0xc056140
    ctx->pc = 0x1584B4u;
    SET_GPR_U32(ctx, 31, 0x1584BCu);
    ctx->pc = 0x1584B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x158500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158500_0x158500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584BCu; }
    }
    if (ctx->pc != 0x1584BCu) { return; }
    ctx->pc = 0x1584BCu;
    // 0x1584bc: 0xc056146
    ctx->pc = 0x1584BCu;
    SET_GPR_U32(ctx, 31, 0x1584C4u);
    ctx->pc = 0x1584C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x158518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158518_0x158518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584C4u; }
    }
    if (ctx->pc != 0x1584C4u) { return; }
    ctx->pc = 0x1584C4u;
    // 0x1584c4: 0xc056146
    ctx->pc = 0x1584C4u;
    SET_GPR_U32(ctx, 31, 0x1584CCu);
    ctx->pc = 0x1584C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x158518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158518_0x158518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584CCu; }
    }
    if (ctx->pc != 0x1584CCu) { return; }
    ctx->pc = 0x1584CCu;
    // 0x1584cc: 0xc056146
    ctx->pc = 0x1584CCu;
    SET_GPR_U32(ctx, 31, 0x1584D4u);
    ctx->pc = 0x1584D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x158518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158518_0x158518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584D4u; }
    }
    if (ctx->pc != 0x1584D4u) { return; }
    ctx->pc = 0x1584D4u;
    // 0x1584d4: 0xc056146
    ctx->pc = 0x1584D4u;
    SET_GPR_U32(ctx, 31, 0x1584DCu);
    ctx->pc = 0x1584D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x158518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158518_0x158518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584DCu; }
    }
    if (ctx->pc != 0x1584DCu) { return; }
    ctx->pc = 0x1584DCu;
    // 0x1584dc: 0xc056150
    ctx->pc = 0x1584DCu;
    SET_GPR_U32(ctx, 31, 0x1584E4u);
    ctx->pc = 0x1584E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    ctx->pc = 0x158540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158540_0x158540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584E4u; }
    }
    if (ctx->pc != 0x1584E4u) { return; }
    ctx->pc = 0x1584E4u;
    // 0x1584e4: 0x200102d
    ctx->pc = 0x1584e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584e8: 0xdfb10008
    ctx->pc = 0x1584e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1584ec: 0xdfb00000
    ctx->pc = 0x1584ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1584f0: 0xdfbf0010
    ctx->pc = 0x1584f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1584f4: 0x3e00008
    ctx->pc = 0x1584F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1584F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158450u: goto label_158450;
            case 0x158474u: goto label_158474;
            case 0x158478u: goto label_158478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1584FCu;
    // 0x1584fc: 0x0
    ctx->pc = 0x1584fcu;
    // NOP
}
