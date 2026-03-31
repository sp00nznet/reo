#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00136F98
// Address: 0x136f98 - 0x136fe8
void sub_00136F98_0x136f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x136f98u;

label_136f98:
    // 0x136f98: 0x27bdfff0
    ctx->pc = 0x136f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_136f9c:
    // 0x136f9c: 0xffbf0000
    ctx->pc = 0x136f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_136fa0:
    // 0x136fa0: 0xc04d558
label_136fa4:
    if (ctx->pc == 0x136FA4u) {
        ctx->pc = 0x136FA8u;
        goto label_136fa8;
    }
    ctx->pc = 0x136FA0u;
    SET_GPR_U32(ctx, 31, 0x136FA8u);
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FA8u; }
    }
    if (ctx->pc != 0x136FA8u) { return; }
    ctx->pc = 0x136FA8u;
label_136fa8:
    // 0x136fa8: 0x40182d
    ctx->pc = 0x136fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136fac:
    // 0x136fac: 0x1060000c
label_136fb0:
    if (ctx->pc == 0x136FB0u) {
        ctx->pc = 0x136FB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x136FB4u;
        goto label_136fb4;
    }
    ctx->pc = 0x136FACu;
    {
        const bool branch_taken_0x136fac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x136FB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x136fac) {
            ctx->pc = 0x136FE0u;
            goto label_136fe0;
        }
    }
    ctx->pc = 0x136FB4u;
label_136fb4:
    // 0x136fb4: 0x8c620060
    ctx->pc = 0x136fb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_136fb8:
    // 0x136fb8: 0x10400007
label_136fbc:
    if (ctx->pc == 0x136FBCu) {
        ctx->pc = 0x136FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136FC0u;
        goto label_136fc0;
    }
    ctx->pc = 0x136FB8u;
    {
        const bool branch_taken_0x136fb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x136FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x136fb8) {
            ctx->pc = 0x136FD8u;
            goto label_136fd8;
        }
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x24050064
    ctx->pc = 0x136fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
label_136fc4:
    // 0x136fc4: 0x302d
    ctx->pc = 0x136fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136fc8:
    // 0x136fc8: 0x40f809
label_136fcc:
    if (ctx->pc == 0x136FCCu) {
        ctx->pc = 0x136FCCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136FD0u;
        goto label_136fd0;
    }
    ctx->pc = 0x136FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136FD0u);
        ctx->pc = 0x136FCCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136F98u: goto label_136f98;
            case 0x136F9Cu: goto label_136f9c;
            case 0x136FA0u: goto label_136fa0;
            case 0x136FA4u: goto label_136fa4;
            case 0x136FA8u: goto label_136fa8;
            case 0x136FACu: goto label_136fac;
            case 0x136FB0u: goto label_136fb0;
            case 0x136FB4u: goto label_136fb4;
            case 0x136FB8u: goto label_136fb8;
            case 0x136FBCu: goto label_136fbc;
            case 0x136FC0u: goto label_136fc0;
            case 0x136FC4u: goto label_136fc4;
            case 0x136FC8u: goto label_136fc8;
            case 0x136FCCu: goto label_136fcc;
            case 0x136FD0u: goto label_136fd0;
            case 0x136FD4u: goto label_136fd4;
            case 0x136FD8u: goto label_136fd8;
            case 0x136FDCu: goto label_136fdc;
            case 0x136FE0u: goto label_136fe0;
            case 0x136FE4u: goto label_136fe4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136FD0u; }
            if (ctx->pc != 0x136FD0u) { return; }
        }
    }
    ctx->pc = 0x136FD0u;
label_136fd0:
    // 0x136fd0: 0x10000003
label_136fd4:
    if (ctx->pc == 0x136FD4u) {
        ctx->pc = 0x136FD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x136FD8u;
        goto label_136fd8;
    }
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x136FD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x136FE0u;
            goto label_136fe0;
        }
    }
    ctx->pc = 0x136FD8u;
label_136fd8:
    // 0x136fd8: 0x102d
    ctx->pc = 0x136fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136fdc:
    // 0x136fdc: 0xdfbf0000
    ctx->pc = 0x136fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136fe0:
    // 0x136fe0: 0x3e00008
label_136fe4:
    if (ctx->pc == 0x136FE4u) {
        ctx->pc = 0x136FE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x136FE8u;
        goto label_fallthrough_0x136fe0;
    }
    ctx->pc = 0x136FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136FE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136F98u: goto label_136f98;
            case 0x136F9Cu: goto label_136f9c;
            case 0x136FA0u: goto label_136fa0;
            case 0x136FA4u: goto label_136fa4;
            case 0x136FA8u: goto label_136fa8;
            case 0x136FACu: goto label_136fac;
            case 0x136FB0u: goto label_136fb0;
            case 0x136FB4u: goto label_136fb4;
            case 0x136FB8u: goto label_136fb8;
            case 0x136FBCu: goto label_136fbc;
            case 0x136FC0u: goto label_136fc0;
            case 0x136FC4u: goto label_136fc4;
            case 0x136FC8u: goto label_136fc8;
            case 0x136FCCu: goto label_136fcc;
            case 0x136FD0u: goto label_136fd0;
            case 0x136FD4u: goto label_136fd4;
            case 0x136FD8u: goto label_136fd8;
            case 0x136FDCu: goto label_136fdc;
            case 0x136FE0u: goto label_136fe0;
            case 0x136FE4u: goto label_136fe4;
            default: break;
        }
        return;
    }
label_fallthrough_0x136fe0:
    ctx->pc = 0x136FE8u;
}
