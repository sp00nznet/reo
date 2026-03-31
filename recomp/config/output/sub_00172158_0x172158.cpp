#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172158
// Address: 0x172158 - 0x1721e8
void sub_00172158_0x172158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172158u;

    // 0x172158: 0x27bdfff0
    ctx->pc = 0x172158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17215c: 0xa0302d
    ctx->pc = 0x17215cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172160: 0x24020001
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172164: 0xffbf0000
    ctx->pc = 0x172164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172168: 0x80182d
    ctx->pc = 0x172168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17216c: 0x10c2000c
    ctx->pc = 0x17216Cu;
    {
        const bool branch_taken_0x17216c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x172170u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17216c) {
            ctx->pc = 0x1721A0u;
            goto label_1721a0;
        }
    }
    ctx->pc = 0x172174u;
    // 0x172174: 0x50c00010
    ctx->pc = 0x172174u;
    {
        const bool branch_taken_0x172174 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x172174) {
            ctx->pc = 0x172178u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->pc = 0x1721B8u;
            goto label_1721b8;
        }
    }
    ctx->pc = 0x17217Cu;
    // 0x17217c: 0x24020002
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172180: 0x14c20015
    ctx->pc = 0x172180u;
    {
        const bool branch_taken_0x172180 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x172184u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172180) {
            ctx->pc = 0x1721D8u;
            goto label_1721d8;
        }
    }
    ctx->pc = 0x172188u;
    // 0x172188: 0x8c630048
    ctx->pc = 0x172188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17218c: 0x24020004
    ctx->pc = 0x17218cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x172190: 0x14620012
    ctx->pc = 0x172190u;
    {
        const bool branch_taken_0x172190 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x172194u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172190) {
            ctx->pc = 0x1721DCu;
            goto label_1721dc;
        }
    }
    ctx->pc = 0x172198u;
    // 0x172198: 0x1000000b
    ctx->pc = 0x172198u;
    {
        const bool branch_taken_0x172198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x172198) {
            ctx->pc = 0x1721C8u;
            goto label_1721c8;
        }
    }
    ctx->pc = 0x1721A0u;
label_1721a0:
    // 0x1721a0: 0x8c620054
    ctx->pc = 0x1721a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1721a4: 0x24420001
    ctx->pc = 0x1721a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1721a8: 0x1446000a
    ctx->pc = 0x1721A8u;
    {
        const bool branch_taken_0x1721a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x1721ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x1721a8) {
            ctx->pc = 0x1721D4u;
            goto label_1721d4;
        }
    }
    ctx->pc = 0x1721B0u;
    // 0x1721b0: 0x10000005
    ctx->pc = 0x1721B0u;
    {
        const bool branch_taken_0x1721b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1721b0) {
            ctx->pc = 0x1721C8u;
            goto label_1721c8;
        }
    }
    ctx->pc = 0x1721B8u;
label_1721b8:
    // 0x1721b8: 0x2442ffff
    ctx->pc = 0x1721b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1721bc: 0x14400005
    ctx->pc = 0x1721BCu;
    {
        const bool branch_taken_0x1721bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1721C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x1721bc) {
            ctx->pc = 0x1721D4u;
            goto label_1721d4;
        }
    }
    ctx->pc = 0x1721C4u;
    // 0x1721c4: 0x282d
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721c8:
    // 0x1721c8: 0xc05c87a
    ctx->pc = 0x1721C8u;
    SET_GPR_U32(ctx, 31, 0x1721D0u);
    ctx->pc = 0x1721E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001721E8_0x1721e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721D0u; }
    }
    if (ctx->pc != 0x1721D0u) { return; }
    ctx->pc = 0x1721D0u;
    // 0x1721d0: 0x40382d
    ctx->pc = 0x1721d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1721d4:
    // 0x1721d4: 0xdfbf0000
    ctx->pc = 0x1721d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1721d8:
    // 0x1721d8: 0xe0102d
    ctx->pc = 0x1721d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1721dc:
    // 0x1721dc: 0x3e00008
    ctx->pc = 0x1721DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1721A0u: goto label_1721a0;
            case 0x1721B8u: goto label_1721b8;
            case 0x1721C8u: goto label_1721c8;
            case 0x1721D4u: goto label_1721d4;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721DCu: goto label_1721dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1721E4u;
    // 0x1721e4: 0x0
    ctx->pc = 0x1721e4u;
    // NOP
}
