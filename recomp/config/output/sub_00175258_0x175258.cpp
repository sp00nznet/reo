#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175258
// Address: 0x175258 - 0x1752e0
void sub_00175258_0x175258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175258u;

    // 0x175258: 0x27bdfff0
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17525c: 0xffb00000
    ctx->pc = 0x17525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175260: 0xffbf0008
    ctx->pc = 0x175260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175264: 0x8c902ab0
    ctx->pc = 0x175264u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x175268: 0x8e020dbc
    ctx->pc = 0x175268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3516)));
    // 0x17526c: 0x5c400017
    ctx->pc = 0x17526Cu;
    {
        const bool branch_taken_0x17526c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x17526c) {
            ctx->pc = 0x175270u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x1752CCu;
            goto label_1752cc;
        }
    }
    ctx->pc = 0x175274u;
    // 0x175274: 0x8e040db0
    ctx->pc = 0x175274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x175278: 0x8e060db4
    ctx->pc = 0x175278u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 3508)));
    // 0x17527c: 0x18800003
    ctx->pc = 0x17527Cu;
    {
        const bool branch_taken_0x17527c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x175280u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 3512)));
        if (branch_taken_0x17527c) {
            ctx->pc = 0x17528Cu;
            goto label_17528c;
        }
    }
    ctx->pc = 0x175284u;
    // 0x175284: 0x1cc0000e
    ctx->pc = 0x175284u;
    {
        const bool branch_taken_0x175284 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x175284) {
            ctx->pc = 0x1752C0u;
            goto label_1752c0;
        }
    }
    ctx->pc = 0x17528Cu;
label_17528c:
    // 0x17528c: 0x8e020004
    ctx->pc = 0x17528cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x175290: 0x5c40000e
    ctx->pc = 0x175290u;
    {
        const bool branch_taken_0x175290 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x175290) {
            ctx->pc = 0x175294u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x1752CCu;
            goto label_1752cc;
        }
    }
    ctx->pc = 0x175298u;
    // 0x175298: 0x58800001
    ctx->pc = 0x175298u;
    {
        const bool branch_taken_0x175298 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x175298) {
            ctx->pc = 0x17529Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3480)));
            ctx->pc = 0x1752A0u;
            goto label_1752a0;
        }
    }
    ctx->pc = 0x1752A0u;
label_1752a0:
    // 0x1752a0: 0x1cc00003
    ctx->pc = 0x1752A0u;
    {
        const bool branch_taken_0x1752a0 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1752a0) {
            ctx->pc = 0x1752B0u;
            goto label_1752b0;
        }
    }
    ctx->pc = 0x1752A8u;
    // 0x1752a8: 0x8e060d9c
    ctx->pc = 0x1752a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
    // 0x1752ac: 0x8e050da0
    ctx->pc = 0x1752acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1752b0:
    // 0x1752b0: 0x58800006
    ctx->pc = 0x1752B0u;
    {
        const bool branch_taken_0x1752b0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1752b0) {
            ctx->pc = 0x1752B4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x1752CCu;
            goto label_1752cc;
        }
    }
    ctx->pc = 0x1752B8u;
    // 0x1752b8: 0x58c00004
    ctx->pc = 0x1752B8u;
    {
        const bool branch_taken_0x1752b8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1752b8) {
            ctx->pc = 0x1752BCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x1752CCu;
            goto label_1752cc;
        }
    }
    ctx->pc = 0x1752C0u;
label_1752c0:
    // 0x1752c0: 0xc056ea0
    ctx->pc = 0x1752C0u;
    SET_GPR_U32(ctx, 31, 0x1752C8u);
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752C8u; }
    }
    if (ctx->pc != 0x1752C8u) { return; }
    ctx->pc = 0x1752C8u;
    // 0x1752c8: 0xae020d94
    ctx->pc = 0x1752c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
label_1752cc:
    // 0x1752cc: 0xdfb00000
    ctx->pc = 0x1752ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1752d0: 0xdfbf0008
    ctx->pc = 0x1752d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1752d4: 0x3e00008
    ctx->pc = 0x1752D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17528Cu: goto label_17528c;
            case 0x1752A0u: goto label_1752a0;
            case 0x1752B0u: goto label_1752b0;
            case 0x1752C0u: goto label_1752c0;
            case 0x1752CCu: goto label_1752cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1752DCu;
    // 0x1752dc: 0x0
    ctx->pc = 0x1752dcu;
    // NOP
}
