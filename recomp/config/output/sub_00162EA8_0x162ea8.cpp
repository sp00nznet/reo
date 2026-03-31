#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162EA8
// Address: 0x162ea8 - 0x162ef0
void sub_00162EA8_0x162ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162ea8u;

label_162ea8:
    // 0x162ea8: 0x27bdfff0
    ctx->pc = 0x162ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_162eac:
    // 0x162eac: 0xffb00000
    ctx->pc = 0x162eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162eb0:
    // 0x162eb0: 0xffbf0008
    ctx->pc = 0x162eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_162eb4:
    // 0x162eb4: 0xc058d08
label_162eb8:
    if (ctx->pc == 0x162EB8u) {
        ctx->pc = 0x162EB8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162EBCu;
        goto label_162ebc;
    }
    ctx->pc = 0x162EB4u;
    SET_GPR_U32(ctx, 31, 0x162EBCu);
    ctx->pc = 0x162EB8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162EBCu; }
    }
    if (ctx->pc != 0x162EBCu) { return; }
    ctx->pc = 0x162EBCu;
label_162ebc:
    // 0x162ebc: 0x52000009
label_162ec0:
    if (ctx->pc == 0x162EC0u) {
        ctx->pc = 0x162EC0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162EC4u;
        goto label_162ec4;
    }
    ctx->pc = 0x162EBCu;
    {
        const bool branch_taken_0x162ebc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x162ebc) {
            ctx->pc = 0x162EC0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162EC4u;
label_162ec4:
    // 0x162ec4: 0x50400007
label_162ec8:
    if (ctx->pc == 0x162EC8u) {
        ctx->pc = 0x162EC8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162ECCu;
        goto label_162ecc;
    }
    ctx->pc = 0x162EC4u;
    {
        const bool branch_taken_0x162ec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162ec4) {
            ctx->pc = 0x162EC8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162ECCu;
label_162ecc:
    // 0x162ecc: 0x8c420010
    ctx->pc = 0x162eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_162ed0:
    // 0x162ed0: 0x50400004
label_162ed4:
    if (ctx->pc == 0x162ED4u) {
        ctx->pc = 0x162ED4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162ED8u;
        goto label_162ed8;
    }
    ctx->pc = 0x162ED0u;
    {
        const bool branch_taken_0x162ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162ed0) {
            ctx->pc = 0x162ED4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162EE4u;
            goto label_162ee4;
        }
    }
    ctx->pc = 0x162ED8u;
label_162ed8:
    // 0x162ed8: 0x40f809
label_162edc:
    if (ctx->pc == 0x162EDCu) {
        ctx->pc = 0x162EDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162EE0u;
        goto label_162ee0;
    }
    ctx->pc = 0x162ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162EE0u);
        ctx->pc = 0x162EDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162EA8u: goto label_162ea8;
            case 0x162EACu: goto label_162eac;
            case 0x162EB0u: goto label_162eb0;
            case 0x162EB4u: goto label_162eb4;
            case 0x162EB8u: goto label_162eb8;
            case 0x162EBCu: goto label_162ebc;
            case 0x162EC0u: goto label_162ec0;
            case 0x162EC4u: goto label_162ec4;
            case 0x162EC8u: goto label_162ec8;
            case 0x162ECCu: goto label_162ecc;
            case 0x162ED0u: goto label_162ed0;
            case 0x162ED4u: goto label_162ed4;
            case 0x162ED8u: goto label_162ed8;
            case 0x162EDCu: goto label_162edc;
            case 0x162EE0u: goto label_162ee0;
            case 0x162EE4u: goto label_162ee4;
            case 0x162EE8u: goto label_162ee8;
            case 0x162EECu: goto label_162eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162EE0u; }
            if (ctx->pc != 0x162EE0u) { return; }
        }
    }
    ctx->pc = 0x162EE0u;
label_162ee0:
    // 0x162ee0: 0xdfb00000
    ctx->pc = 0x162ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ee4:
    // 0x162ee4: 0xdfbf0008
    ctx->pc = 0x162ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162ee8:
    // 0x162ee8: 0x3e00008
label_162eec:
    if (ctx->pc == 0x162EECu) {
        ctx->pc = 0x162EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162EF0u;
        goto label_fallthrough_0x162ee8;
    }
    ctx->pc = 0x162EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162EA8u: goto label_162ea8;
            case 0x162EACu: goto label_162eac;
            case 0x162EB0u: goto label_162eb0;
            case 0x162EB4u: goto label_162eb4;
            case 0x162EB8u: goto label_162eb8;
            case 0x162EBCu: goto label_162ebc;
            case 0x162EC0u: goto label_162ec0;
            case 0x162EC4u: goto label_162ec4;
            case 0x162EC8u: goto label_162ec8;
            case 0x162ECCu: goto label_162ecc;
            case 0x162ED0u: goto label_162ed0;
            case 0x162ED4u: goto label_162ed4;
            case 0x162ED8u: goto label_162ed8;
            case 0x162EDCu: goto label_162edc;
            case 0x162EE0u: goto label_162ee0;
            case 0x162EE4u: goto label_162ee4;
            case 0x162EE8u: goto label_162ee8;
            case 0x162EECu: goto label_162eec;
            default: break;
        }
        return;
    }
label_fallthrough_0x162ee8:
    ctx->pc = 0x162EF0u;
}
