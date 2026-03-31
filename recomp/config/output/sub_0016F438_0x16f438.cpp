#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F438
// Address: 0x16f438 - 0x16f4e0
void sub_0016F438_0x16f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f438u;

    // 0x16f438: 0x27bdffd0
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f43c: 0xffb00010
    ctx->pc = 0x16f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f440: 0xa0802d
    ctx->pc = 0x16f440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f444: 0xffb10018
    ctx->pc = 0x16f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16f448: 0xc0882d
    ctx->pc = 0x16f448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f44c: 0xffb20020
    ctx->pc = 0x16f44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16f450: 0xffbf0028
    ctx->pc = 0x16f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16f454: 0x8e020044
    ctx->pc = 0x16f454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16f458: 0x8c921b30
    ctx->pc = 0x16f458u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x16f45c: 0x2442ffff
    ctx->pc = 0x16f45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f460: 0x2c420002
    ctx->pc = 0x16f460u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16f464: 0x10400003
    ctx->pc = 0x16F464u;
    {
        const bool branch_taken_0x16f464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F468u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 2384));
        if (branch_taken_0x16f464) {
            ctx->pc = 0x16F474u;
            goto label_16f474;
        }
    }
    ctx->pc = 0x16F46Cu;
    // 0x16f46c: 0xc05bd96
    ctx->pc = 0x16F46Cu;
    SET_GPR_U32(ctx, 31, 0x16F474u);
    ctx->pc = 0x16F470u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x16F658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F658_0x16f658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F474u; }
    }
    if (ctx->pc != 0x16F474u) { return; }
    ctx->pc = 0x16F474u;
label_16f474:
    // 0x16f474: 0x3a0282d
    ctx->pc = 0x16f474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f478: 0x220202d
    ctx->pc = 0x16f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f47c: 0x27a60004
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x16f480: 0xc05bd38
    ctx->pc = 0x16F480u;
    SET_GPR_U32(ctx, 31, 0x16F488u);
    ctx->pc = 0x16F484u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x16F4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F4E0_0x16f4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F488u; }
    }
    if (ctx->pc != 0x16F488u) { return; }
    ctx->pc = 0x16F488u;
    // 0x16f488: 0x8fa20000
    ctx->pc = 0x16f488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f48c: 0x24030003
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f490: 0x1443000b
    ctx->pc = 0x16F490u;
    {
        const bool branch_taken_0x16f490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16F494u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 2384));
        if (branch_taken_0x16f490) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F498u;
    // 0x16f498: 0x8e020028
    ctx->pc = 0x16f498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16f49c: 0x8fa50004
    ctx->pc = 0x16f49cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f4a0: 0x8fa60008
    ctx->pc = 0x16f4a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f4a4: 0xc041eac
    ctx->pc = 0x16F4A4u;
    SET_GPR_U32(ctx, 31, 0x16F4ACu);
    ctx->pc = 0x16F4A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4ACu; }
    }
    if (ctx->pc != 0x16F4ACu) { return; }
    ctx->pc = 0x16F4ACu;
    // 0x16f4ac: 0x8e030028
    ctx->pc = 0x16f4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16f4b0: 0x8fa20008
    ctx->pc = 0x16f4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f4b4: 0x10000004
    ctx->pc = 0x16F4B4u;
    {
        const bool branch_taken_0x16f4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x16f4b4) {
            ctx->pc = 0x16F4C8u;
            goto label_16f4c8;
        }
    }
    ctx->pc = 0x16F4BCu;
    // 0x16f4bc: 0x0
    ctx->pc = 0x16f4bcu;
    // NOP
label_16f4c0:
    // 0x16f4c0: 0xc05bd96
    ctx->pc = 0x16F4C0u;
    SET_GPR_U32(ctx, 31, 0x16F4C8u);
    ctx->pc = 0x16F4C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x16F658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F658_0x16f658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4C8u; }
    }
    if (ctx->pc != 0x16F4C8u) { return; }
    ctx->pc = 0x16F4C8u;
label_16f4c8:
    // 0x16f4c8: 0xdfb00010
    ctx->pc = 0x16f4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f4cc: 0xdfb10018
    ctx->pc = 0x16f4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f4d0: 0xdfb20020
    ctx->pc = 0x16f4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f4d4: 0xdfbf0028
    ctx->pc = 0x16f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f4d8: 0x3e00008
    ctx->pc = 0x16F4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F474u: goto label_16f474;
            case 0x16F4C0u: goto label_16f4c0;
            case 0x16F4C8u: goto label_16f4c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F4E0u;
}
