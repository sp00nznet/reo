#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016AE28
// Address: 0x16ae28 - 0x16aea0
void sub_0016AE28_0x16ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ae28u;

label_16ae28:
    // 0x16ae28: 0x27bdffd0
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_16ae2c:
    // 0x16ae2c: 0xffb00010
    ctx->pc = 0x16ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16ae30:
    // 0x16ae30: 0x80802d
    ctx->pc = 0x16ae30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ae34:
    // 0x16ae34: 0xffb10018
    ctx->pc = 0x16ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16ae38:
    // 0x16ae38: 0xa0882d
    ctx->pc = 0x16ae38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ae3c:
    // 0x16ae3c: 0xffbf0020
    ctx->pc = 0x16ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16ae40:
    // 0x16ae40: 0x3a0382d
    ctx->pc = 0x16ae40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16ae44:
    // 0x16ae44: 0x8e030000
    ctx->pc = 0x16ae44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ae48:
    // 0x16ae48: 0x8c620018
    ctx->pc = 0x16ae48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16ae4c:
    // 0x16ae4c: 0x40f809
label_16ae50:
    if (ctx->pc == 0x16AE50u) {
        ctx->pc = 0x16AE50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AE54u;
        goto label_16ae54;
    }
    ctx->pc = 0x16AE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16AE54u);
        ctx->pc = 0x16AE50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AE28u: goto label_16ae28;
            case 0x16AE2Cu: goto label_16ae2c;
            case 0x16AE30u: goto label_16ae30;
            case 0x16AE34u: goto label_16ae34;
            case 0x16AE38u: goto label_16ae38;
            case 0x16AE3Cu: goto label_16ae3c;
            case 0x16AE40u: goto label_16ae40;
            case 0x16AE44u: goto label_16ae44;
            case 0x16AE48u: goto label_16ae48;
            case 0x16AE4Cu: goto label_16ae4c;
            case 0x16AE50u: goto label_16ae50;
            case 0x16AE54u: goto label_16ae54;
            case 0x16AE58u: goto label_16ae58;
            case 0x16AE5Cu: goto label_16ae5c;
            case 0x16AE60u: goto label_16ae60;
            case 0x16AE64u: goto label_16ae64;
            case 0x16AE68u: goto label_16ae68;
            case 0x16AE6Cu: goto label_16ae6c;
            case 0x16AE70u: goto label_16ae70;
            case 0x16AE74u: goto label_16ae74;
            case 0x16AE78u: goto label_16ae78;
            case 0x16AE7Cu: goto label_16ae7c;
            case 0x16AE80u: goto label_16ae80;
            case 0x16AE84u: goto label_16ae84;
            case 0x16AE88u: goto label_16ae88;
            case 0x16AE8Cu: goto label_16ae8c;
            case 0x16AE90u: goto label_16ae90;
            case 0x16AE94u: goto label_16ae94;
            case 0x16AE98u: goto label_16ae98;
            case 0x16AE9Cu: goto label_16ae9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AE54u; }
            if (ctx->pc != 0x16AE54u) { return; }
        }
    }
    ctx->pc = 0x16AE54u;
label_16ae54:
    // 0x16ae54: 0x220282d
    ctx->pc = 0x16ae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ae58:
    // 0x16ae58: 0x8fa40000
    ctx->pc = 0x16ae58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ae5c:
    // 0x16ae5c: 0xc055798
label_16ae60:
    if (ctx->pc == 0x16AE60u) {
        ctx->pc = 0x16AE60u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16AE64u;
        goto label_16ae64;
    }
    ctx->pc = 0x16AE5Cu;
    SET_GPR_U32(ctx, 31, 0x16AE64u);
    ctx->pc = 0x16AE60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE64u; }
    }
    if (ctx->pc != 0x16AE64u) { return; }
    ctx->pc = 0x16AE64u;
label_16ae64:
    // 0x16ae64: 0x8e030000
    ctx->pc = 0x16ae64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ae68:
    // 0x16ae68: 0x200202d
    ctx->pc = 0x16ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ae6c:
    // 0x16ae6c: 0x24050001
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16ae70:
    // 0x16ae70: 0x8c620020
    ctx->pc = 0x16ae70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16ae74:
    // 0x16ae74: 0x40f809
label_16ae78:
    if (ctx->pc == 0x16AE78u) {
        ctx->pc = 0x16AE78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AE7Cu;
        goto label_16ae7c;
    }
    ctx->pc = 0x16AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16AE7Cu);
        ctx->pc = 0x16AE78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AE28u: goto label_16ae28;
            case 0x16AE2Cu: goto label_16ae2c;
            case 0x16AE30u: goto label_16ae30;
            case 0x16AE34u: goto label_16ae34;
            case 0x16AE38u: goto label_16ae38;
            case 0x16AE3Cu: goto label_16ae3c;
            case 0x16AE40u: goto label_16ae40;
            case 0x16AE44u: goto label_16ae44;
            case 0x16AE48u: goto label_16ae48;
            case 0x16AE4Cu: goto label_16ae4c;
            case 0x16AE50u: goto label_16ae50;
            case 0x16AE54u: goto label_16ae54;
            case 0x16AE58u: goto label_16ae58;
            case 0x16AE5Cu: goto label_16ae5c;
            case 0x16AE60u: goto label_16ae60;
            case 0x16AE64u: goto label_16ae64;
            case 0x16AE68u: goto label_16ae68;
            case 0x16AE6Cu: goto label_16ae6c;
            case 0x16AE70u: goto label_16ae70;
            case 0x16AE74u: goto label_16ae74;
            case 0x16AE78u: goto label_16ae78;
            case 0x16AE7Cu: goto label_16ae7c;
            case 0x16AE80u: goto label_16ae80;
            case 0x16AE84u: goto label_16ae84;
            case 0x16AE88u: goto label_16ae88;
            case 0x16AE8Cu: goto label_16ae8c;
            case 0x16AE90u: goto label_16ae90;
            case 0x16AE94u: goto label_16ae94;
            case 0x16AE98u: goto label_16ae98;
            case 0x16AE9Cu: goto label_16ae9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AE7Cu; }
            if (ctx->pc != 0x16AE7Cu) { return; }
        }
    }
    ctx->pc = 0x16AE7Cu;
label_16ae7c:
    // 0x16ae7c: 0x8fa20004
    ctx->pc = 0x16ae7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16ae80:
    // 0x16ae80: 0xdfb00010
    ctx->pc = 0x16ae80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ae84:
    // 0x16ae84: 0xdfb10018
    ctx->pc = 0x16ae84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ae88:
    // 0x16ae88: 0xdfbf0020
    ctx->pc = 0x16ae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16ae8c:
    // 0x16ae8c: 0x3e00008
label_16ae90:
    if (ctx->pc == 0x16AE90u) {
        ctx->pc = 0x16AE90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16AE94u;
        goto label_16ae94;
    }
    ctx->pc = 0x16AE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AE28u: goto label_16ae28;
            case 0x16AE2Cu: goto label_16ae2c;
            case 0x16AE30u: goto label_16ae30;
            case 0x16AE34u: goto label_16ae34;
            case 0x16AE38u: goto label_16ae38;
            case 0x16AE3Cu: goto label_16ae3c;
            case 0x16AE40u: goto label_16ae40;
            case 0x16AE44u: goto label_16ae44;
            case 0x16AE48u: goto label_16ae48;
            case 0x16AE4Cu: goto label_16ae4c;
            case 0x16AE50u: goto label_16ae50;
            case 0x16AE54u: goto label_16ae54;
            case 0x16AE58u: goto label_16ae58;
            case 0x16AE5Cu: goto label_16ae5c;
            case 0x16AE60u: goto label_16ae60;
            case 0x16AE64u: goto label_16ae64;
            case 0x16AE68u: goto label_16ae68;
            case 0x16AE6Cu: goto label_16ae6c;
            case 0x16AE70u: goto label_16ae70;
            case 0x16AE74u: goto label_16ae74;
            case 0x16AE78u: goto label_16ae78;
            case 0x16AE7Cu: goto label_16ae7c;
            case 0x16AE80u: goto label_16ae80;
            case 0x16AE84u: goto label_16ae84;
            case 0x16AE88u: goto label_16ae88;
            case 0x16AE8Cu: goto label_16ae8c;
            case 0x16AE90u: goto label_16ae90;
            case 0x16AE94u: goto label_16ae94;
            case 0x16AE98u: goto label_16ae98;
            case 0x16AE9Cu: goto label_16ae9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AE94u;
label_16ae94:
    // 0x16ae94: 0x0
    ctx->pc = 0x16ae94u;
    // NOP
label_16ae98:
    // 0x16ae98: 0x3e00008
label_16ae9c:
    if (ctx->pc == 0x16AE9Cu) {
        ctx->pc = 0x16AE9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AEA0u;
        goto label_fallthrough_0x16ae98;
    }
    ctx->pc = 0x16AE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AE28u: goto label_16ae28;
            case 0x16AE2Cu: goto label_16ae2c;
            case 0x16AE30u: goto label_16ae30;
            case 0x16AE34u: goto label_16ae34;
            case 0x16AE38u: goto label_16ae38;
            case 0x16AE3Cu: goto label_16ae3c;
            case 0x16AE40u: goto label_16ae40;
            case 0x16AE44u: goto label_16ae44;
            case 0x16AE48u: goto label_16ae48;
            case 0x16AE4Cu: goto label_16ae4c;
            case 0x16AE50u: goto label_16ae50;
            case 0x16AE54u: goto label_16ae54;
            case 0x16AE58u: goto label_16ae58;
            case 0x16AE5Cu: goto label_16ae5c;
            case 0x16AE60u: goto label_16ae60;
            case 0x16AE64u: goto label_16ae64;
            case 0x16AE68u: goto label_16ae68;
            case 0x16AE6Cu: goto label_16ae6c;
            case 0x16AE70u: goto label_16ae70;
            case 0x16AE74u: goto label_16ae74;
            case 0x16AE78u: goto label_16ae78;
            case 0x16AE7Cu: goto label_16ae7c;
            case 0x16AE80u: goto label_16ae80;
            case 0x16AE84u: goto label_16ae84;
            case 0x16AE88u: goto label_16ae88;
            case 0x16AE8Cu: goto label_16ae8c;
            case 0x16AE90u: goto label_16ae90;
            case 0x16AE94u: goto label_16ae94;
            case 0x16AE98u: goto label_16ae98;
            case 0x16AE9Cu: goto label_16ae9c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16ae98:
    ctx->pc = 0x16AEA0u;
}
