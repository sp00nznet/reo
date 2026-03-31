#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F105C
// Address: 0x1f105c - 0x1f1104
void sub_001F105C_0x1f105c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f105cu;

label_1f105c:
    // 0x1f105c: 0x27bdffe0
    ctx->pc = 0x1f105cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1060:
    // 0x1f1060: 0xffbe0010
    ctx->pc = 0x1f1060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_1f1064:
    // 0x1f1064: 0xffbf0018
    ctx->pc = 0x1f1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f1068:
    // 0x1f1068: 0x3a0f02d
    ctx->pc = 0x1f1068u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f106c:
    // 0x1f106c: 0xafc40000
    ctx->pc = 0x1f106cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1f1070:
    // 0x1f1070: 0xafc50004
    ctx->pc = 0x1f1070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1f1074:
    // 0x1f1074: 0xafc00008
    ctx->pc = 0x1f1074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_1f1078:
    // 0x1f1078: 0x8fc30000
    ctx->pc = 0x1f1078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f107c:
    // 0x1f107c: 0x8fc20000
    ctx->pc = 0x1f107cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1080:
    // 0x1f1080: 0xac620000
    ctx->pc = 0x1f1080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1084:
    // 0x1f1084: 0x8fc30000
    ctx->pc = 0x1f1084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1088:
    // 0x1f1088: 0x8fc20000
    ctx->pc = 0x1f1088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f108c:
    // 0x1f108c: 0xac620004
    ctx->pc = 0x1f108cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f1090:
    // 0x1f1090: 0x8fc20000
    ctx->pc = 0x1f1090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1094:
    // 0x1f1094: 0xa440000c
    ctx->pc = 0x1f1094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
label_1f1098:
    // 0x1f1098: 0x8fc20000
    ctx->pc = 0x1f1098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f109c:
    // 0x1f109c: 0xa440000e
    ctx->pc = 0x1f109cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
label_1f10a0:
    // 0x1f10a0: 0x8fc30000
    ctx->pc = 0x1f10a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f10a4:
    // 0x1f10a4: 0x8fc20004
    ctx->pc = 0x1f10a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f10a8:
    // 0x1f10a8: 0xac620008
    ctx->pc = 0x1f10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f10ac:
    // 0x1f10ac: 0x8fc20000
    ctx->pc = 0x1f10acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f10b0:
    // 0x1f10b0: 0xac400010
    ctx->pc = 0x1f10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1f10b4:
    // 0x1f10b4: 0x8fc20000
    ctx->pc = 0x1f10b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f10b8:
    // 0x1f10b8: 0x8c420008
    ctx->pc = 0x1f10b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f10bc:
    // 0x1f10bc: 0x1040000a
label_1f10c0:
    if (ctx->pc == 0x1F10C0u) {
        ctx->pc = 0x1F10C4u;
        goto label_1f10c4;
    }
    ctx->pc = 0x1F10BCu;
    {
        const bool branch_taken_0x1f10bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f10bc) {
            ctx->pc = 0x1F10E8u;
            goto label_1f10e8;
        }
    }
    ctx->pc = 0x1F10C4u;
label_1f10c4:
    // 0x1f10c4: 0x8fc30000
    ctx->pc = 0x1f10c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f10c8:
    // 0x1f10c8: 0x8fc20000
    ctx->pc = 0x1f10c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f10cc:
    // 0x1f10cc: 0x24420010
    ctx->pc = 0x1f10ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_1f10d0:
    // 0x1f10d0: 0x8c630008
    ctx->pc = 0x1f10d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f10d4:
    // 0x1f10d4: 0x40202d
    ctx->pc = 0x1f10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f10d8:
    // 0x1f10d8: 0x282d
    ctx->pc = 0x1f10d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10dc:
    // 0x1f10dc: 0x60f809
label_1f10e0:
    if (ctx->pc == 0x1F10E0u) {
        ctx->pc = 0x1F10E4u;
        goto label_1f10e4;
    }
    ctx->pc = 0x1F10DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F10E4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            case 0x1F1074u: goto label_1f1074;
            case 0x1F1078u: goto label_1f1078;
            case 0x1F107Cu: goto label_1f107c;
            case 0x1F1080u: goto label_1f1080;
            case 0x1F1084u: goto label_1f1084;
            case 0x1F1088u: goto label_1f1088;
            case 0x1F108Cu: goto label_1f108c;
            case 0x1F1090u: goto label_1f1090;
            case 0x1F1094u: goto label_1f1094;
            case 0x1F1098u: goto label_1f1098;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10A4u: goto label_1f10a4;
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F10E4u; }
            if (ctx->pc != 0x1F10E4u) { return; }
        }
    }
    ctx->pc = 0x1F10E4u;
label_1f10e4:
    // 0x1f10e4: 0xafc20008
    ctx->pc = 0x1f10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_1f10e8:
    // 0x1f10e8: 0x8fc20008
    ctx->pc = 0x1f10e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f10ec:
    // 0x1f10ec: 0x3c0e82d
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f10f0:
    // 0x1f10f0: 0xdfbe0010
    ctx->pc = 0x1f10f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f10f4:
    // 0x1f10f4: 0xdfbf0018
    ctx->pc = 0x1f10f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f10f8:
    // 0x1f10f8: 0x27bd0020
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
label_1f10fc:
    // 0x1f10fc: 0x3e00008
label_1f1100:
    if (ctx->pc == 0x1F1100u) {
        ctx->pc = 0x1F1104u;
        goto label_fallthrough_0x1f10fc;
    }
    ctx->pc = 0x1F10FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            case 0x1F1074u: goto label_1f1074;
            case 0x1F1078u: goto label_1f1078;
            case 0x1F107Cu: goto label_1f107c;
            case 0x1F1080u: goto label_1f1080;
            case 0x1F1084u: goto label_1f1084;
            case 0x1F1088u: goto label_1f1088;
            case 0x1F108Cu: goto label_1f108c;
            case 0x1F1090u: goto label_1f1090;
            case 0x1F1094u: goto label_1f1094;
            case 0x1F1098u: goto label_1f1098;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10A4u: goto label_1f10a4;
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f10fc:
    ctx->pc = 0x1F1104u;
}
