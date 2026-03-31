#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131E38
// Address: 0x131e38 - 0x131ef8
void sub_00131E38_0x131e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131e38u;

label_131e38:
    // 0x131e38: 0x27bdffe0
    ctx->pc = 0x131e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_131e3c:
    // 0x131e3c: 0xffb00000
    ctx->pc = 0x131e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131e40:
    // 0x131e40: 0x80802d
    ctx->pc = 0x131e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131e44:
    // 0x131e44: 0xffb10008
    ctx->pc = 0x131e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_131e48:
    // 0x131e48: 0x16000009
label_131e4c:
    if (ctx->pc == 0x131E4Cu) {
        ctx->pc = 0x131E4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x131E50u;
        goto label_131e50;
    }
    ctx->pc = 0x131E48u;
    {
        const bool branch_taken_0x131e48 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x131E4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x131e48) {
            ctx->pc = 0x131E70u;
            goto label_131e70;
        }
    }
    ctx->pc = 0x131E50u;
label_131e50:
    // 0x131e50: 0x3c040024
    ctx->pc = 0x131e50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_131e54:
    // 0x131e54: 0xdfb00000
    ctx->pc = 0x131e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131e58:
    // 0x131e58: 0xdfb10008
    ctx->pc = 0x131e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131e5c:
    // 0x131e5c: 0x2484af20
    ctx->pc = 0x131e5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946592));
label_131e60:
    // 0x131e60: 0xdfbf0010
    ctx->pc = 0x131e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131e64:
    // 0x131e64: 0x804a034
label_131e68:
    if (ctx->pc == 0x131E68u) {
        ctx->pc = 0x131E68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x131E6Cu;
        goto label_131e6c;
    }
    ctx->pc = 0x131E64u;
    ctx->pc = 0x131E68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x131E6Cu;
label_131e6c:
    // 0x131e6c: 0x0
    ctx->pc = 0x131e6cu;
    // NOP
label_131e70:
    // 0x131e70: 0x3c020022
    ctx->pc = 0x131e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_131e74:
    // 0x131e74: 0x2451b798
    ctx->pc = 0x131e74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294948760));
label_131e78:
    // 0x131e78: 0x8e230000
    ctx->pc = 0x131e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_131e7c:
    // 0x131e7c: 0x50600007
label_131e80:
    if (ctx->pc == 0x131E80u) {
        ctx->pc = 0x131E80u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x131E84u;
        goto label_131e84;
    }
    ctx->pc = 0x131E7Cu;
    {
        const bool branch_taken_0x131e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x131e7c) {
            ctx->pc = 0x131E80u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x131E9Cu;
            goto label_131e9c;
        }
    }
    ctx->pc = 0x131E84u;
label_131e84:
    // 0x131e84: 0xc04b32c
label_131e88:
    if (ctx->pc == 0x131E88u) {
        ctx->pc = 0x131E88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x131E8Cu;
        goto label_131e8c;
    }
    ctx->pc = 0x131E84u;
    SET_GPR_U32(ctx, 31, 0x131E8Cu);
    ctx->pc = 0x131E88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CCB0_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131E8Cu; }
    }
    if (ctx->pc != 0x131E8Cu) { return; }
    ctx->pc = 0x131E8Cu;
label_131e8c:
    // 0x131e8c: 0x8e220000
    ctx->pc = 0x131e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_131e90:
    // 0x131e90: 0x40f809
label_131e94:
    if (ctx->pc == 0x131E94u) {
        ctx->pc = 0x131E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131E98u;
        goto label_131e98;
    }
    ctx->pc = 0x131E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131E98u);
        ctx->pc = 0x131E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131E38u: goto label_131e38;
            case 0x131E3Cu: goto label_131e3c;
            case 0x131E40u: goto label_131e40;
            case 0x131E44u: goto label_131e44;
            case 0x131E48u: goto label_131e48;
            case 0x131E4Cu: goto label_131e4c;
            case 0x131E50u: goto label_131e50;
            case 0x131E54u: goto label_131e54;
            case 0x131E58u: goto label_131e58;
            case 0x131E5Cu: goto label_131e5c;
            case 0x131E60u: goto label_131e60;
            case 0x131E64u: goto label_131e64;
            case 0x131E68u: goto label_131e68;
            case 0x131E6Cu: goto label_131e6c;
            case 0x131E70u: goto label_131e70;
            case 0x131E74u: goto label_131e74;
            case 0x131E78u: goto label_131e78;
            case 0x131E7Cu: goto label_131e7c;
            case 0x131E80u: goto label_131e80;
            case 0x131E84u: goto label_131e84;
            case 0x131E88u: goto label_131e88;
            case 0x131E8Cu: goto label_131e8c;
            case 0x131E90u: goto label_131e90;
            case 0x131E94u: goto label_131e94;
            case 0x131E98u: goto label_131e98;
            case 0x131E9Cu: goto label_131e9c;
            case 0x131EA0u: goto label_131ea0;
            case 0x131EA4u: goto label_131ea4;
            case 0x131EA8u: goto label_131ea8;
            case 0x131EACu: goto label_131eac;
            case 0x131EB0u: goto label_131eb0;
            case 0x131EB4u: goto label_131eb4;
            case 0x131EB8u: goto label_131eb8;
            case 0x131EBCu: goto label_131ebc;
            case 0x131EC0u: goto label_131ec0;
            case 0x131EC4u: goto label_131ec4;
            case 0x131EC8u: goto label_131ec8;
            case 0x131ECCu: goto label_131ecc;
            case 0x131ED0u: goto label_131ed0;
            case 0x131ED4u: goto label_131ed4;
            case 0x131ED8u: goto label_131ed8;
            case 0x131EDCu: goto label_131edc;
            case 0x131EE0u: goto label_131ee0;
            case 0x131EE4u: goto label_131ee4;
            case 0x131EE8u: goto label_131ee8;
            case 0x131EECu: goto label_131eec;
            case 0x131EF0u: goto label_131ef0;
            case 0x131EF4u: goto label_131ef4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131E98u; }
            if (ctx->pc != 0x131E98u) { return; }
        }
    }
    ctx->pc = 0x131E98u;
label_131e98:
    // 0x131e98: 0x8e040008
    ctx->pc = 0x131e98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_131e9c:
    // 0x131e9c: 0x50800004
label_131ea0:
    if (ctx->pc == 0x131EA0u) {
        ctx->pc = 0x131EA0u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->pc = 0x131EA4u;
        goto label_131ea4;
    }
    ctx->pc = 0x131E9Cu;
    {
        const bool branch_taken_0x131e9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131e9c) {
            ctx->pc = 0x131EA0u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x131EB0u;
            goto label_131eb0;
        }
    }
    ctx->pc = 0x131EA4u;
label_131ea4:
    // 0x131ea4: 0xc04c148
label_131ea8:
    if (ctx->pc == 0x131EA8u) {
        ctx->pc = 0x131EACu;
        goto label_131eac;
    }
    ctx->pc = 0x131EA4u;
    SET_GPR_U32(ctx, 31, 0x131EACu);
    ctx->pc = 0x130520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130520_0x130520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131EACu; }
    }
    if (ctx->pc != 0x131EACu) { return; }
    ctx->pc = 0x131EACu;
label_131eac:
    // 0x131eac: 0x82030002
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_131eb0:
    // 0x131eb0: 0x24020004
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_131eb4:
    // 0x131eb4: 0x5462000b
label_131eb8:
    if (ctx->pc == 0x131EB8u) {
        ctx->pc = 0x131EB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131EBCu;
        goto label_131ebc;
    }
    ctx->pc = 0x131EB4u;
    {
        const bool branch_taken_0x131eb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x131eb4) {
            ctx->pc = 0x131EB8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x131EE4u;
            goto label_131ee4;
        }
    }
    ctx->pc = 0x131EBCu;
label_131ebc:
    // 0x131ebc: 0xc04f3de
label_131ec0:
    if (ctx->pc == 0x131EC0u) {
        ctx->pc = 0x131EC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x131EC4u;
        goto label_131ec4;
    }
    ctx->pc = 0x131EBCu;
    SET_GPR_U32(ctx, 31, 0x131EC4u);
    ctx->pc = 0x131EC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131EC4u; }
    }
    if (ctx->pc != 0x131EC4u) { return; }
    ctx->pc = 0x131EC4u;
label_131ec4:
    // 0x131ec4: 0x8e020014
    ctx->pc = 0x131ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131ec8:
    // 0x131ec8: 0x10400005
label_131ecc:
    if (ctx->pc == 0x131ECCu) {
        ctx->pc = 0x131ECCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131ED0u;
        goto label_131ed0;
    }
    ctx->pc = 0x131EC8u;
    {
        const bool branch_taken_0x131ec8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x131ECCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131ec8) {
            ctx->pc = 0x131EE0u;
            goto label_131ee0;
        }
    }
    ctx->pc = 0x131ED0u;
label_131ed0:
    // 0x131ed0: 0x8c420000
    ctx->pc = 0x131ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_131ed4:
    // 0x131ed4: 0x8c430014
    ctx->pc = 0x131ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_131ed8:
    // 0x131ed8: 0x60f809
label_131edc:
    if (ctx->pc == 0x131EDCu) {
        ctx->pc = 0x131EE0u;
        goto label_131ee0;
    }
    ctx->pc = 0x131ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131EE0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131E38u: goto label_131e38;
            case 0x131E3Cu: goto label_131e3c;
            case 0x131E40u: goto label_131e40;
            case 0x131E44u: goto label_131e44;
            case 0x131E48u: goto label_131e48;
            case 0x131E4Cu: goto label_131e4c;
            case 0x131E50u: goto label_131e50;
            case 0x131E54u: goto label_131e54;
            case 0x131E58u: goto label_131e58;
            case 0x131E5Cu: goto label_131e5c;
            case 0x131E60u: goto label_131e60;
            case 0x131E64u: goto label_131e64;
            case 0x131E68u: goto label_131e68;
            case 0x131E6Cu: goto label_131e6c;
            case 0x131E70u: goto label_131e70;
            case 0x131E74u: goto label_131e74;
            case 0x131E78u: goto label_131e78;
            case 0x131E7Cu: goto label_131e7c;
            case 0x131E80u: goto label_131e80;
            case 0x131E84u: goto label_131e84;
            case 0x131E88u: goto label_131e88;
            case 0x131E8Cu: goto label_131e8c;
            case 0x131E90u: goto label_131e90;
            case 0x131E94u: goto label_131e94;
            case 0x131E98u: goto label_131e98;
            case 0x131E9Cu: goto label_131e9c;
            case 0x131EA0u: goto label_131ea0;
            case 0x131EA4u: goto label_131ea4;
            case 0x131EA8u: goto label_131ea8;
            case 0x131EACu: goto label_131eac;
            case 0x131EB0u: goto label_131eb0;
            case 0x131EB4u: goto label_131eb4;
            case 0x131EB8u: goto label_131eb8;
            case 0x131EBCu: goto label_131ebc;
            case 0x131EC0u: goto label_131ec0;
            case 0x131EC4u: goto label_131ec4;
            case 0x131EC8u: goto label_131ec8;
            case 0x131ECCu: goto label_131ecc;
            case 0x131ED0u: goto label_131ed0;
            case 0x131ED4u: goto label_131ed4;
            case 0x131ED8u: goto label_131ed8;
            case 0x131EDCu: goto label_131edc;
            case 0x131EE0u: goto label_131ee0;
            case 0x131EE4u: goto label_131ee4;
            case 0x131EE8u: goto label_131ee8;
            case 0x131EECu: goto label_131eec;
            case 0x131EF0u: goto label_131ef0;
            case 0x131EF4u: goto label_131ef4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131EE0u; }
            if (ctx->pc != 0x131EE0u) { return; }
        }
    }
    ctx->pc = 0x131EE0u;
label_131ee0:
    // 0x131ee0: 0x200202d
    ctx->pc = 0x131ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131ee4:
    // 0x131ee4: 0xdfb00000
    ctx->pc = 0x131ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131ee8:
    // 0x131ee8: 0xdfb10008
    ctx->pc = 0x131ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131eec:
    // 0x131eec: 0xdfbf0010
    ctx->pc = 0x131eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131ef0:
    // 0x131ef0: 0x804c766
label_131ef4:
    if (ctx->pc == 0x131EF4u) {
        ctx->pc = 0x131EF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x131EF8u;
        goto label_fallthrough_0x131ef0;
    }
    ctx->pc = 0x131EF0u;
    ctx->pc = 0x131EF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x131D98u;
    sub_00131D98_0x131d98(rdram, ctx, runtime); return;
label_fallthrough_0x131ef0:
    ctx->pc = 0x131EF8u;
}
