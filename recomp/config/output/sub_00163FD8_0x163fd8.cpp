#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163FD8
// Address: 0x163fd8 - 0x164008
void sub_00163FD8_0x163fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163fd8u;

label_163fd8:
    // 0x163fd8: 0x27bdfff0
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_163fdc:
    // 0x163fdc: 0xffbf0000
    ctx->pc = 0x163fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163fe0:
    // 0x163fe0: 0xc05799e
label_163fe4:
    if (ctx->pc == 0x163FE4u) {
        ctx->pc = 0x163FE8u;
        goto label_163fe8;
    }
    ctx->pc = 0x163FE0u;
    SET_GPR_U32(ctx, 31, 0x163FE8u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FE8u; }
    }
    if (ctx->pc != 0x163FE8u) { return; }
    ctx->pc = 0x163FE8u;
label_163fe8:
    // 0x163fe8: 0x8c430040
    ctx->pc = 0x163fe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_163fec:
    // 0x163fec: 0x10600003
label_163ff0:
    if (ctx->pc == 0x163FF0u) {
        ctx->pc = 0x163FF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->pc = 0x163FF4u;
        goto label_163ff4;
    }
    ctx->pc = 0x163FECu;
    {
        const bool branch_taken_0x163fec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x163FF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 68)));
        if (branch_taken_0x163fec) {
            ctx->pc = 0x163FFCu;
            goto label_163ffc;
        }
    }
    ctx->pc = 0x163FF4u;
label_163ff4:
    // 0x163ff4: 0x60f809
label_163ff8:
    if (ctx->pc == 0x163FF8u) {
        ctx->pc = 0x163FFCu;
        goto label_163ffc;
    }
    ctx->pc = 0x163FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163FFCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163FD8u: goto label_163fd8;
            case 0x163FDCu: goto label_163fdc;
            case 0x163FE0u: goto label_163fe0;
            case 0x163FE4u: goto label_163fe4;
            case 0x163FE8u: goto label_163fe8;
            case 0x163FECu: goto label_163fec;
            case 0x163FF0u: goto label_163ff0;
            case 0x163FF4u: goto label_163ff4;
            case 0x163FF8u: goto label_163ff8;
            case 0x163FFCu: goto label_163ffc;
            case 0x164000u: goto label_164000;
            case 0x164004u: goto label_164004;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163FFCu; }
            if (ctx->pc != 0x163FFCu) { return; }
        }
    }
    ctx->pc = 0x163FFCu;
label_163ffc:
    // 0x163ffc: 0xdfbf0000
    ctx->pc = 0x163ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164000:
    // 0x164000: 0x3e00008
label_164004:
    if (ctx->pc == 0x164004u) {
        ctx->pc = 0x164004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164008u;
        goto label_fallthrough_0x164000;
    }
    ctx->pc = 0x164000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163FD8u: goto label_163fd8;
            case 0x163FDCu: goto label_163fdc;
            case 0x163FE0u: goto label_163fe0;
            case 0x163FE4u: goto label_163fe4;
            case 0x163FE8u: goto label_163fe8;
            case 0x163FECu: goto label_163fec;
            case 0x163FF0u: goto label_163ff0;
            case 0x163FF4u: goto label_163ff4;
            case 0x163FF8u: goto label_163ff8;
            case 0x163FFCu: goto label_163ffc;
            case 0x164000u: goto label_164000;
            case 0x164004u: goto label_164004;
            default: break;
        }
        return;
    }
label_fallthrough_0x164000:
    ctx->pc = 0x164008u;
}
