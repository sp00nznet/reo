#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037A490
// Address: 0x37a490 - 0x37a4e0
void sub_0037A490_0x37a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37a490u;

label_37a490:
    // 0x37a490: 0x27bdfff0
    ctx->pc = 0x37a490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_37a494:
    // 0x37a494: 0x3c020034
    ctx->pc = 0x37a494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_37a498:
    // 0x37a498: 0xffbf0000
    ctx->pc = 0x37a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37a49c:
    // 0x37a49c: 0x24420a40
    ctx->pc = 0x37a49cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2624));
label_37a4a0:
    // 0x37a4a0: 0x3c010034
    ctx->pc = 0x37a4a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_37a4a4:
    // 0x37a4a4: 0x202d
    ctx->pc = 0x37a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a4a8:
    // 0x37a4a8: 0xc0dee40
label_37a4ac:
    if (ctx->pc == 0x37A4ACu) {
        ctx->pc = 0x37A4ACu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
        ctx->pc = 0x37A4B0u;
        goto label_37a4b0;
    }
    ctx->pc = 0x37A4A8u;
    SET_GPR_U32(ctx, 31, 0x37A4B0u);
    ctx->pc = 0x37A4ACu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
    ctx->pc = 0x37B900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B900_0x37b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A4B0u; }
    }
    if (ctx->pc != 0x37A4B0u) { return; }
    ctx->pc = 0x37A4B0u;
label_37a4b0:
    // 0x37a4b0: 0x3c010034
    ctx->pc = 0x37a4b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
label_37a4b4:
    // 0x37a4b4: 0x8c230a20
    ctx->pc = 0x37a4b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
label_37a4b8:
    // 0x37a4b8: 0x8c640000
    ctx->pc = 0x37a4b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37a4bc:
    // 0x37a4bc: 0x10800005
label_37a4c0:
    if (ctx->pc == 0x37A4C0u) {
        ctx->pc = 0x37A4C4u;
        goto label_37a4c4;
    }
    ctx->pc = 0x37A4BCu;
    {
        const bool branch_taken_0x37a4bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x37a4bc) {
            ctx->pc = 0x37A4D4u;
            goto label_37a4d4;
        }
    }
    ctx->pc = 0x37A4C4u;
label_37a4c4:
    // 0x37a4c4: 0x8c820000
    ctx->pc = 0x37a4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a4c8:
    // 0x37a4c8: 0x8c42001c
    ctx->pc = 0x37a4c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_37a4cc:
    // 0x37a4cc: 0x40f809
label_37a4d0:
    if (ctx->pc == 0x37A4D0u) {
        ctx->pc = 0x37A4D4u;
        goto label_37a4d4;
    }
    ctx->pc = 0x37A4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A4D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A490u: goto label_37a490;
            case 0x37A494u: goto label_37a494;
            case 0x37A498u: goto label_37a498;
            case 0x37A49Cu: goto label_37a49c;
            case 0x37A4A0u: goto label_37a4a0;
            case 0x37A4A4u: goto label_37a4a4;
            case 0x37A4A8u: goto label_37a4a8;
            case 0x37A4ACu: goto label_37a4ac;
            case 0x37A4B0u: goto label_37a4b0;
            case 0x37A4B4u: goto label_37a4b4;
            case 0x37A4B8u: goto label_37a4b8;
            case 0x37A4BCu: goto label_37a4bc;
            case 0x37A4C0u: goto label_37a4c0;
            case 0x37A4C4u: goto label_37a4c4;
            case 0x37A4C8u: goto label_37a4c8;
            case 0x37A4CCu: goto label_37a4cc;
            case 0x37A4D0u: goto label_37a4d0;
            case 0x37A4D4u: goto label_37a4d4;
            case 0x37A4D8u: goto label_37a4d8;
            case 0x37A4DCu: goto label_37a4dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A4D4u; }
            if (ctx->pc != 0x37A4D4u) { return; }
        }
    }
    ctx->pc = 0x37A4D4u;
label_37a4d4:
    // 0x37a4d4: 0xdfbf0000
    ctx->pc = 0x37a4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37a4d8:
    // 0x37a4d8: 0x3e00008
label_37a4dc:
    if (ctx->pc == 0x37A4DCu) {
        ctx->pc = 0x37A4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x37A4E0u;
        goto label_fallthrough_0x37a4d8;
    }
    ctx->pc = 0x37A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A490u: goto label_37a490;
            case 0x37A494u: goto label_37a494;
            case 0x37A498u: goto label_37a498;
            case 0x37A49Cu: goto label_37a49c;
            case 0x37A4A0u: goto label_37a4a0;
            case 0x37A4A4u: goto label_37a4a4;
            case 0x37A4A8u: goto label_37a4a8;
            case 0x37A4ACu: goto label_37a4ac;
            case 0x37A4B0u: goto label_37a4b0;
            case 0x37A4B4u: goto label_37a4b4;
            case 0x37A4B8u: goto label_37a4b8;
            case 0x37A4BCu: goto label_37a4bc;
            case 0x37A4C0u: goto label_37a4c0;
            case 0x37A4C4u: goto label_37a4c4;
            case 0x37A4C8u: goto label_37a4c8;
            case 0x37A4CCu: goto label_37a4cc;
            case 0x37A4D0u: goto label_37a4d0;
            case 0x37A4D4u: goto label_37a4d4;
            case 0x37A4D8u: goto label_37a4d8;
            case 0x37A4DCu: goto label_37a4dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x37a4d8:
    ctx->pc = 0x37A4E0u;
}
