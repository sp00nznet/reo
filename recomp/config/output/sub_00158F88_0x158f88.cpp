#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158F88
// Address: 0x158f88 - 0x159128
void sub_00158F88_0x158f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158f88u;

label_158f88:
    // 0x158f88: 0x27bdfff0
    ctx->pc = 0x158f88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_158f8c:
    // 0x158f8c: 0xa0102d
    ctx->pc = 0x158f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158f90:
    // 0x158f90: 0xffbf0000
    ctx->pc = 0x158f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_158f94:
    // 0x158f94: 0x10400006
label_158f98:
    if (ctx->pc == 0x158F98u) {
        ctx->pc = 0x158F98u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x158F9Cu;
        goto label_158f9c;
    }
    ctx->pc = 0x158F94u;
    {
        const bool branch_taken_0x158f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158F98u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x158f94) {
            ctx->pc = 0x158FB0u;
            goto label_158fb0;
        }
    }
    ctx->pc = 0x158F9Cu;
label_158f9c:
    // 0x158f9c: 0x8c820000
    ctx->pc = 0x158f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_158fa0:
    // 0x158fa0: 0x50400004
label_158fa4:
    if (ctx->pc == 0x158FA4u) {
        ctx->pc = 0x158FA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x158FA8u;
        goto label_158fa8;
    }
    ctx->pc = 0x158FA0u;
    {
        const bool branch_taken_0x158fa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x158fa0) {
            ctx->pc = 0x158FA4u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x158FB4u;
            goto label_158fb4;
        }
    }
    ctx->pc = 0x158FA8u;
label_158fa8:
    // 0x158fa8: 0x40f809
label_158fac:
    if (ctx->pc == 0x158FACu) {
        ctx->pc = 0x158FACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x158FB0u;
        goto label_158fb0;
    }
    ctx->pc = 0x158FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158FB0u);
        ctx->pc = 0x158FACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x158FB0u; }
            if (ctx->pc != 0x158FB0u) { return; }
        }
    }
    ctx->pc = 0x158FB0u;
label_158fb0:
    // 0x158fb0: 0xdfbf0000
    ctx->pc = 0x158fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158fb4:
    // 0x158fb4: 0x3e00008
label_158fb8:
    if (ctx->pc == 0x158FB8u) {
        ctx->pc = 0x158FB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x158FBCu;
        goto label_158fbc;
    }
    ctx->pc = 0x158FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158FB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158FBCu;
label_158fbc:
    // 0x158fbc: 0x0
    ctx->pc = 0x158fbcu;
    // NOP
label_158fc0:
    // 0x158fc0: 0x27bdffd0
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_158fc4:
    // 0x158fc4: 0xffb00000
    ctx->pc = 0x158fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158fc8:
    // 0x158fc8: 0xe0802d
    ctx->pc = 0x158fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_158fcc:
    // 0x158fcc: 0xffb10008
    ctx->pc = 0x158fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158fd0:
    // 0x158fd0: 0x80882d
    ctx->pc = 0x158fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158fd4:
    // 0x158fd4: 0xffb20010
    ctx->pc = 0x158fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158fd8:
    // 0x158fd8: 0xffb30018
    ctx->pc = 0x158fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_158fdc:
    // 0x158fdc: 0xa0982d
    ctx->pc = 0x158fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158fe0:
    // 0x158fe0: 0xffb40020
    ctx->pc = 0x158fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_158fe4:
    // 0x158fe4: 0xc0a02d
    ctx->pc = 0x158fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_158fe8:
    // 0x158fe8: 0xffbf0028
    ctx->pc = 0x158fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_158fec:
    // 0x158fec: 0x8e650004
    ctx->pc = 0x158fecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_158ff0:
    // 0x158ff0: 0xc04fcd8
label_158ff4:
    if (ctx->pc == 0x158FF4u) {
        ctx->pc = 0x158FF4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x158FF8u;
        goto label_158ff8;
    }
    ctx->pc = 0x158FF0u;
    SET_GPR_U32(ctx, 31, 0x158FF8u);
    ctx->pc = 0x158FF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FF8u; }
    }
    if (ctx->pc != 0x158FF8u) { return; }
    ctx->pc = 0x158FF8u;
label_158ff8:
    // 0x158ff8: 0x220202d
    ctx->pc = 0x158ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158ffc:
    // 0x158ffc: 0x40902d
    ctx->pc = 0x158ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159000:
    // 0x159000: 0x2402ffff
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_159004:
    // 0x159004: 0x200302d
    ctx->pc = 0x159004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159008:
    // 0x159008: 0x12400011
label_15900c:
    if (ctx->pc == 0x15900Cu) {
        ctx->pc = 0x15900Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159010u;
        goto label_159010;
    }
    ctx->pc = 0x159008u;
    {
        const bool branch_taken_0x159008 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x15900Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159008) {
            ctx->pc = 0x159050u;
            goto label_159050;
        }
    }
    ctx->pc = 0x159010u;
label_159010:
    // 0x159010: 0xc05644a
label_159014:
    if (ctx->pc == 0x159014u) {
        ctx->pc = 0x159018u;
        goto label_159018;
    }
    ctx->pc = 0x159010u;
    SET_GPR_U32(ctx, 31, 0x159018u);
    ctx->pc = 0x159128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159128_0x159128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159018u; }
    }
    if (ctx->pc != 0x159018u) { return; }
    ctx->pc = 0x159018u;
label_159018:
    // 0x159018: 0x8e430000
    ctx->pc = 0x159018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15901c:
    // 0x15901c: 0x40802d
    ctx->pc = 0x15901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159020:
    // 0x159020: 0x240202d
    ctx->pc = 0x159020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159024:
    // 0x159024: 0x8c620024
    ctx->pc = 0x159024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_159028:
    // 0x159028: 0x40f809
label_15902c:
    if (ctx->pc == 0x15902Cu) {
        ctx->pc = 0x15902Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x159030u;
        goto label_159030;
    }
    ctx->pc = 0x159028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159030u);
        ctx->pc = 0x15902Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159030u; }
            if (ctx->pc != 0x159030u) { return; }
        }
    }
    ctx->pc = 0x159030u;
label_159030:
    // 0x159030: 0x8e630004
    ctx->pc = 0x159030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_159034:
    // 0x159034: 0x8e450000
    ctx->pc = 0x159034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_159038:
    // 0x159038: 0x621823
    ctx->pc = 0x159038u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15903c:
    // 0x15903c: 0xae830000
    ctx->pc = 0x15903cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_159040:
    // 0x159040: 0x8ca2000c
    ctx->pc = 0x159040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_159044:
    // 0x159044: 0x40f809
label_159048:
    if (ctx->pc == 0x159048u) {
        ctx->pc = 0x159048u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15904Cu;
        goto label_15904c;
    }
    ctx->pc = 0x159044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15904Cu);
        ctx->pc = 0x159048u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15904Cu; }
            if (ctx->pc != 0x15904Cu) { return; }
        }
    }
    ctx->pc = 0x15904Cu;
label_15904c:
    // 0x15904c: 0x200102d
    ctx->pc = 0x15904cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159050:
    // 0x159050: 0xdfb00000
    ctx->pc = 0x159050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159054:
    // 0x159054: 0xdfb10008
    ctx->pc = 0x159054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159058:
    // 0x159058: 0xdfb20010
    ctx->pc = 0x159058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15905c:
    // 0x15905c: 0xdfb30018
    ctx->pc = 0x15905cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159060:
    // 0x159060: 0xdfb40020
    ctx->pc = 0x159060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159064:
    // 0x159064: 0xdfbf0028
    ctx->pc = 0x159064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_159068:
    // 0x159068: 0x3e00008
label_15906c:
    if (ctx->pc == 0x15906Cu) {
        ctx->pc = 0x15906Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x159070u;
        goto label_159070;
    }
    ctx->pc = 0x159068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15906Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159070u;
label_159070:
    // 0x159070: 0x27bdffd0
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_159074:
    // 0x159074: 0xffb00000
    ctx->pc = 0x159074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159078:
    // 0x159078: 0xa0802d
    ctx->pc = 0x159078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15907c:
    // 0x15907c: 0xffb20010
    ctx->pc = 0x15907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_159080:
    // 0x159080: 0x80902d
    ctx->pc = 0x159080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159084:
    // 0x159084: 0xffb30018
    ctx->pc = 0x159084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_159088:
    // 0x159088: 0xffb10008
    ctx->pc = 0x159088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15908c:
    // 0x15908c: 0xffbf0020
    ctx->pc = 0x15908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_159090:
    // 0x159090: 0xc056dec
label_159094:
    if (ctx->pc == 0x159094u) {
        ctx->pc = 0x159094u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159098u;
        goto label_159098;
    }
    ctx->pc = 0x159090u;
    SET_GPR_U32(ctx, 31, 0x159098u);
    ctx->pc = 0x159094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159098u; }
    }
    if (ctx->pc != 0x159098u) { return; }
    ctx->pc = 0x159098u;
label_159098:
    // 0x159098: 0x3c05ff03
    ctx->pc = 0x159098u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_15909c:
    // 0x15909c: 0x240600cc
    ctx->pc = 0x15909cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
label_1590a0:
    // 0x1590a0: 0x202d
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1590a4:
    // 0x1590a4: 0x10400008
label_1590a8:
    if (ctx->pc == 0x1590A8u) {
        ctx->pc = 0x1590A8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 522));
        ctx->pc = 0x1590ACu;
        goto label_1590ac;
    }
    ctx->pc = 0x1590A4u;
    {
        const bool branch_taken_0x1590a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1590A8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 522));
        if (branch_taken_0x1590a4) {
            ctx->pc = 0x1590C8u;
            goto label_1590c8;
        }
    }
    ctx->pc = 0x1590ACu;
label_1590ac:
    // 0x1590ac: 0xdfb00000
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1590b0:
    // 0x1590b0: 0xdfb10008
    ctx->pc = 0x1590b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1590b4:
    // 0x1590b4: 0xdfb20010
    ctx->pc = 0x1590b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1590b8:
    // 0x1590b8: 0xdfb30018
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1590bc:
    // 0x1590bc: 0xdfbf0020
    ctx->pc = 0x1590bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1590c0:
    // 0x1590c0: 0x80563ce
label_1590c4:
    if (ctx->pc == 0x1590C4u) {
        ctx->pc = 0x1590C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1590C8u;
        goto label_1590c8;
    }
    ctx->pc = 0x1590C0u;
    ctx->pc = 0x1590C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x1590C8u;
label_1590c8:
    // 0x1590c8: 0x8e110004
    ctx->pc = 0x1590c8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1590cc:
    // 0x1590cc: 0x8e100000
    ctx->pc = 0x1590ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1590d0:
    // 0x1590d0: 0x220282d
    ctx->pc = 0x1590d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1590d4:
    // 0x1590d4: 0xc0561d4
label_1590d8:
    if (ctx->pc == 0x1590D8u) {
        ctx->pc = 0x1590D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1590DCu;
        goto label_1590dc;
    }
    ctx->pc = 0x1590D4u;
    SET_GPR_U32(ctx, 31, 0x1590DCu);
    ctx->pc = 0x1590D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1590DCu; }
    }
    if (ctx->pc != 0x1590DCu) { return; }
    ctx->pc = 0x1590DCu;
label_1590dc:
    // 0x1590dc: 0x240202d
    ctx->pc = 0x1590dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1590e0:
    // 0x1590e0: 0x3c05ff03
    ctx->pc = 0x1590e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_1590e4:
    // 0x1590e4: 0x508023
    ctx->pc = 0x1590e4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1590e8:
    // 0x1590e8: 0x14400003
label_1590ec:
    if (ctx->pc == 0x1590ECu) {
        ctx->pc = 0x1590ECu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 773));
        ctx->pc = 0x1590F0u;
        goto label_1590f0;
    }
    ctx->pc = 0x1590E8u;
    {
        const bool branch_taken_0x1590e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1590ECu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 773));
        if (branch_taken_0x1590e8) {
            ctx->pc = 0x1590F8u;
            goto label_1590f8;
        }
    }
    ctx->pc = 0x1590F0u;
label_1590f0:
    // 0x1590f0: 0x10000003
label_1590f4:
    if (ctx->pc == 0x1590F4u) {
        ctx->pc = 0x1590F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x1590F8u;
        goto label_1590f8;
    }
    ctx->pc = 0x1590F0u;
    {
        const bool branch_taken_0x1590f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1590F4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x1590f0) {
            ctx->pc = 0x159100u;
            goto label_159100;
        }
    }
    ctx->pc = 0x1590F8u;
label_1590f8:
    // 0x1590f8: 0xae700000
    ctx->pc = 0x1590f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1590fc:
    // 0x1590fc: 0x282d
    ctx->pc = 0x1590fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159100:
    // 0x159100: 0xdfb00000
    ctx->pc = 0x159100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159104:
    // 0x159104: 0xdfb10008
    ctx->pc = 0x159104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159108:
    // 0x159108: 0xdfb20010
    ctx->pc = 0x159108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15910c:
    // 0x15910c: 0xdfb30018
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159110:
    // 0x159110: 0xdfbf0020
    ctx->pc = 0x159110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159114:
    // 0x159114: 0x80563ce
label_159118:
    if (ctx->pc == 0x159118u) {
        ctx->pc = 0x159118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15911Cu;
        goto label_15911c;
    }
    ctx->pc = 0x159114u;
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x15911Cu;
label_15911c:
    // 0x15911c: 0x0
    ctx->pc = 0x15911cu;
    // NOP
label_159120:
    // 0x159120: 0x3e00008
label_159124:
    if (ctx->pc == 0x159124u) {
        ctx->pc = 0x159128u;
        goto label_fallthrough_0x159120;
    }
    ctx->pc = 0x159120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F88u: goto label_158f88;
            case 0x158F8Cu: goto label_158f8c;
            case 0x158F90u: goto label_158f90;
            case 0x158F94u: goto label_158f94;
            case 0x158F98u: goto label_158f98;
            case 0x158F9Cu: goto label_158f9c;
            case 0x158FA0u: goto label_158fa0;
            case 0x158FA4u: goto label_158fa4;
            case 0x158FA8u: goto label_158fa8;
            case 0x158FACu: goto label_158fac;
            case 0x158FB0u: goto label_158fb0;
            case 0x158FB4u: goto label_158fb4;
            case 0x158FB8u: goto label_158fb8;
            case 0x158FBCu: goto label_158fbc;
            case 0x158FC0u: goto label_158fc0;
            case 0x158FC4u: goto label_158fc4;
            case 0x158FC8u: goto label_158fc8;
            case 0x158FCCu: goto label_158fcc;
            case 0x158FD0u: goto label_158fd0;
            case 0x158FD4u: goto label_158fd4;
            case 0x158FD8u: goto label_158fd8;
            case 0x158FDCu: goto label_158fdc;
            case 0x158FE0u: goto label_158fe0;
            case 0x158FE4u: goto label_158fe4;
            case 0x158FE8u: goto label_158fe8;
            case 0x158FECu: goto label_158fec;
            case 0x158FF0u: goto label_158ff0;
            case 0x158FF4u: goto label_158ff4;
            case 0x158FF8u: goto label_158ff8;
            case 0x158FFCu: goto label_158ffc;
            case 0x159000u: goto label_159000;
            case 0x159004u: goto label_159004;
            case 0x159008u: goto label_159008;
            case 0x15900Cu: goto label_15900c;
            case 0x159010u: goto label_159010;
            case 0x159014u: goto label_159014;
            case 0x159018u: goto label_159018;
            case 0x15901Cu: goto label_15901c;
            case 0x159020u: goto label_159020;
            case 0x159024u: goto label_159024;
            case 0x159028u: goto label_159028;
            case 0x15902Cu: goto label_15902c;
            case 0x159030u: goto label_159030;
            case 0x159034u: goto label_159034;
            case 0x159038u: goto label_159038;
            case 0x15903Cu: goto label_15903c;
            case 0x159040u: goto label_159040;
            case 0x159044u: goto label_159044;
            case 0x159048u: goto label_159048;
            case 0x15904Cu: goto label_15904c;
            case 0x159050u: goto label_159050;
            case 0x159054u: goto label_159054;
            case 0x159058u: goto label_159058;
            case 0x15905Cu: goto label_15905c;
            case 0x159060u: goto label_159060;
            case 0x159064u: goto label_159064;
            case 0x159068u: goto label_159068;
            case 0x15906Cu: goto label_15906c;
            case 0x159070u: goto label_159070;
            case 0x159074u: goto label_159074;
            case 0x159078u: goto label_159078;
            case 0x15907Cu: goto label_15907c;
            case 0x159080u: goto label_159080;
            case 0x159084u: goto label_159084;
            case 0x159088u: goto label_159088;
            case 0x15908Cu: goto label_15908c;
            case 0x159090u: goto label_159090;
            case 0x159094u: goto label_159094;
            case 0x159098u: goto label_159098;
            case 0x15909Cu: goto label_15909c;
            case 0x1590A0u: goto label_1590a0;
            case 0x1590A4u: goto label_1590a4;
            case 0x1590A8u: goto label_1590a8;
            case 0x1590ACu: goto label_1590ac;
            case 0x1590B0u: goto label_1590b0;
            case 0x1590B4u: goto label_1590b4;
            case 0x1590B8u: goto label_1590b8;
            case 0x1590BCu: goto label_1590bc;
            case 0x1590C0u: goto label_1590c0;
            case 0x1590C4u: goto label_1590c4;
            case 0x1590C8u: goto label_1590c8;
            case 0x1590CCu: goto label_1590cc;
            case 0x1590D0u: goto label_1590d0;
            case 0x1590D4u: goto label_1590d4;
            case 0x1590D8u: goto label_1590d8;
            case 0x1590DCu: goto label_1590dc;
            case 0x1590E0u: goto label_1590e0;
            case 0x1590E4u: goto label_1590e4;
            case 0x1590E8u: goto label_1590e8;
            case 0x1590ECu: goto label_1590ec;
            case 0x1590F0u: goto label_1590f0;
            case 0x1590F4u: goto label_1590f4;
            case 0x1590F8u: goto label_1590f8;
            case 0x1590FCu: goto label_1590fc;
            case 0x159100u: goto label_159100;
            case 0x159104u: goto label_159104;
            case 0x159108u: goto label_159108;
            case 0x15910Cu: goto label_15910c;
            case 0x159110u: goto label_159110;
            case 0x159114u: goto label_159114;
            case 0x159118u: goto label_159118;
            case 0x15911Cu: goto label_15911c;
            case 0x159120u: goto label_159120;
            case 0x159124u: goto label_159124;
            default: break;
        }
        return;
    }
label_fallthrough_0x159120:
    ctx->pc = 0x159128u;
}
