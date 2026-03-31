#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162FA0
// Address: 0x162fa0 - 0x163078
void sub_00162FA0_0x162fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162fa0u;

label_162fa0:
    // 0x162fa0: 0x27bdffe0
    ctx->pc = 0x162fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_162fa4:
    // 0x162fa4: 0xffb00000
    ctx->pc = 0x162fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162fa8:
    // 0x162fa8: 0x80802d
    ctx->pc = 0x162fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162fac:
    // 0x162fac: 0xffb10008
    ctx->pc = 0x162facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162fb0:
    // 0x162fb0: 0xffbf0010
    ctx->pc = 0x162fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162fb4:
    // 0x162fb4: 0xc058d10
label_162fb8:
    if (ctx->pc == 0x162FB8u) {
        ctx->pc = 0x162FB8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162FBCu;
        goto label_162fbc;
    }
    ctx->pc = 0x162FB4u;
    SET_GPR_U32(ctx, 31, 0x162FBCu);
    ctx->pc = 0x162FB8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FBCu; }
    }
    if (ctx->pc != 0x162FBCu) { return; }
    ctx->pc = 0x162FBCu;
label_162fbc:
    // 0x162fbc: 0x24030001
    ctx->pc = 0x162fbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_162fc0:
    // 0x162fc0: 0x1443000c
label_162fc4:
    if (ctx->pc == 0x162FC4u) {
        ctx->pc = 0x162FC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162FC8u;
        goto label_162fc8;
    }
    ctx->pc = 0x162FC0u;
    {
        const bool branch_taken_0x162fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x162FC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162fc0) {
            ctx->pc = 0x162FF4u;
            goto label_162ff4;
        }
    }
    ctx->pc = 0x162FC8u;
label_162fc8:
    // 0x162fc8: 0xc058d08
label_162fcc:
    if (ctx->pc == 0x162FCCu) {
        ctx->pc = 0x162FD0u;
        goto label_162fd0;
    }
    ctx->pc = 0x162FC8u;
    SET_GPR_U32(ctx, 31, 0x162FD0u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD0u; }
    }
    if (ctx->pc != 0x162FD0u) { return; }
    ctx->pc = 0x162FD0u;
label_162fd0:
    // 0x162fd0: 0x10400007
label_162fd4:
    if (ctx->pc == 0x162FD4u) {
        ctx->pc = 0x162FD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x162FD8u;
        goto label_162fd8;
    }
    ctx->pc = 0x162FD0u;
    {
        const bool branch_taken_0x162fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162FD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x162fd0) {
            ctx->pc = 0x162FF0u;
            goto label_162ff0;
        }
    }
    ctx->pc = 0x162FD8u;
label_162fd8:
    // 0x162fd8: 0x8c42001c
    ctx->pc = 0x162fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_162fdc:
    // 0x162fdc: 0x50400005
label_162fe0:
    if (ctx->pc == 0x162FE0u) {
        ctx->pc = 0x162FE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162FE4u;
        goto label_162fe4;
    }
    ctx->pc = 0x162FDCu;
    {
        const bool branch_taken_0x162fdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162fdc) {
            ctx->pc = 0x162FE0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x162FF4u;
            goto label_162ff4;
        }
    }
    ctx->pc = 0x162FE4u;
label_162fe4:
    // 0x162fe4: 0x40f809
label_162fe8:
    if (ctx->pc == 0x162FE8u) {
        ctx->pc = 0x162FECu;
        goto label_162fec;
    }
    ctx->pc = 0x162FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162FECu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162FA0u: goto label_162fa0;
            case 0x162FA4u: goto label_162fa4;
            case 0x162FA8u: goto label_162fa8;
            case 0x162FACu: goto label_162fac;
            case 0x162FB0u: goto label_162fb0;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x162FBCu: goto label_162fbc;
            case 0x162FC0u: goto label_162fc0;
            case 0x162FC4u: goto label_162fc4;
            case 0x162FC8u: goto label_162fc8;
            case 0x162FCCu: goto label_162fcc;
            case 0x162FD0u: goto label_162fd0;
            case 0x162FD4u: goto label_162fd4;
            case 0x162FD8u: goto label_162fd8;
            case 0x162FDCu: goto label_162fdc;
            case 0x162FE0u: goto label_162fe0;
            case 0x162FE4u: goto label_162fe4;
            case 0x162FE8u: goto label_162fe8;
            case 0x162FECu: goto label_162fec;
            case 0x162FF0u: goto label_162ff0;
            case 0x162FF4u: goto label_162ff4;
            case 0x162FF8u: goto label_162ff8;
            case 0x162FFCu: goto label_162ffc;
            case 0x163000u: goto label_163000;
            case 0x163004u: goto label_163004;
            case 0x163008u: goto label_163008;
            case 0x16300Cu: goto label_16300c;
            case 0x163010u: goto label_163010;
            case 0x163014u: goto label_163014;
            case 0x163018u: goto label_163018;
            case 0x16301Cu: goto label_16301c;
            case 0x163020u: goto label_163020;
            case 0x163024u: goto label_163024;
            case 0x163028u: goto label_163028;
            case 0x16302Cu: goto label_16302c;
            case 0x163030u: goto label_163030;
            case 0x163034u: goto label_163034;
            case 0x163038u: goto label_163038;
            case 0x16303Cu: goto label_16303c;
            case 0x163040u: goto label_163040;
            case 0x163044u: goto label_163044;
            case 0x163048u: goto label_163048;
            case 0x16304Cu: goto label_16304c;
            case 0x163050u: goto label_163050;
            case 0x163054u: goto label_163054;
            case 0x163058u: goto label_163058;
            case 0x16305Cu: goto label_16305c;
            case 0x163060u: goto label_163060;
            case 0x163064u: goto label_163064;
            case 0x163068u: goto label_163068;
            case 0x16306Cu: goto label_16306c;
            case 0x163070u: goto label_163070;
            case 0x163074u: goto label_163074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162FECu; }
            if (ctx->pc != 0x162FECu) { return; }
        }
    }
    ctx->pc = 0x162FECu;
label_162fec:
    // 0x162fec: 0x40882d
    ctx->pc = 0x162fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162ff0:
    // 0x162ff0: 0x220102d
    ctx->pc = 0x162ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162ff4:
    // 0x162ff4: 0xdfb00000
    ctx->pc = 0x162ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ff8:
    // 0x162ff8: 0xdfb10008
    ctx->pc = 0x162ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162ffc:
    // 0x162ffc: 0xdfbf0010
    ctx->pc = 0x162ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163000:
    // 0x163000: 0x3e00008
label_163004:
    if (ctx->pc == 0x163004u) {
        ctx->pc = 0x163004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163008u;
        goto label_163008;
    }
    ctx->pc = 0x163000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162FA0u: goto label_162fa0;
            case 0x162FA4u: goto label_162fa4;
            case 0x162FA8u: goto label_162fa8;
            case 0x162FACu: goto label_162fac;
            case 0x162FB0u: goto label_162fb0;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x162FBCu: goto label_162fbc;
            case 0x162FC0u: goto label_162fc0;
            case 0x162FC4u: goto label_162fc4;
            case 0x162FC8u: goto label_162fc8;
            case 0x162FCCu: goto label_162fcc;
            case 0x162FD0u: goto label_162fd0;
            case 0x162FD4u: goto label_162fd4;
            case 0x162FD8u: goto label_162fd8;
            case 0x162FDCu: goto label_162fdc;
            case 0x162FE0u: goto label_162fe0;
            case 0x162FE4u: goto label_162fe4;
            case 0x162FE8u: goto label_162fe8;
            case 0x162FECu: goto label_162fec;
            case 0x162FF0u: goto label_162ff0;
            case 0x162FF4u: goto label_162ff4;
            case 0x162FF8u: goto label_162ff8;
            case 0x162FFCu: goto label_162ffc;
            case 0x163000u: goto label_163000;
            case 0x163004u: goto label_163004;
            case 0x163008u: goto label_163008;
            case 0x16300Cu: goto label_16300c;
            case 0x163010u: goto label_163010;
            case 0x163014u: goto label_163014;
            case 0x163018u: goto label_163018;
            case 0x16301Cu: goto label_16301c;
            case 0x163020u: goto label_163020;
            case 0x163024u: goto label_163024;
            case 0x163028u: goto label_163028;
            case 0x16302Cu: goto label_16302c;
            case 0x163030u: goto label_163030;
            case 0x163034u: goto label_163034;
            case 0x163038u: goto label_163038;
            case 0x16303Cu: goto label_16303c;
            case 0x163040u: goto label_163040;
            case 0x163044u: goto label_163044;
            case 0x163048u: goto label_163048;
            case 0x16304Cu: goto label_16304c;
            case 0x163050u: goto label_163050;
            case 0x163054u: goto label_163054;
            case 0x163058u: goto label_163058;
            case 0x16305Cu: goto label_16305c;
            case 0x163060u: goto label_163060;
            case 0x163064u: goto label_163064;
            case 0x163068u: goto label_163068;
            case 0x16306Cu: goto label_16306c;
            case 0x163070u: goto label_163070;
            case 0x163074u: goto label_163074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163008u;
label_163008:
    // 0x163008: 0x27bdffe0
    ctx->pc = 0x163008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16300c:
    // 0x16300c: 0xffb00000
    ctx->pc = 0x16300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163010:
    // 0x163010: 0x80802d
    ctx->pc = 0x163010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163014:
    // 0x163014: 0xffb10008
    ctx->pc = 0x163014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163018:
    // 0x163018: 0xa0882d
    ctx->pc = 0x163018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16301c:
    // 0x16301c: 0xffb20010
    ctx->pc = 0x16301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_163020:
    // 0x163020: 0xffbf0018
    ctx->pc = 0x163020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_163024:
    // 0x163024: 0xc058d10
label_163028:
    if (ctx->pc == 0x163028u) {
        ctx->pc = 0x163028u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16302Cu;
        goto label_16302c;
    }
    ctx->pc = 0x163024u;
    SET_GPR_U32(ctx, 31, 0x16302Cu);
    ctx->pc = 0x163028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16302Cu; }
    }
    if (ctx->pc != 0x16302Cu) { return; }
    ctx->pc = 0x16302Cu;
label_16302c:
    // 0x16302c: 0x24030001
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_163030:
    // 0x163030: 0x5443000b
label_163034:
    if (ctx->pc == 0x163034u) {
        ctx->pc = 0x163034u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163038u;
        goto label_163038;
    }
    ctx->pc = 0x163030u;
    {
        const bool branch_taken_0x163030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163030) {
            ctx->pc = 0x163034u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163060u;
            goto label_163060;
        }
    }
    ctx->pc = 0x163038u;
label_163038:
    // 0x163038: 0xc058d08
label_16303c:
    if (ctx->pc == 0x16303Cu) {
        ctx->pc = 0x163040u;
        goto label_163040;
    }
    ctx->pc = 0x163038u;
    SET_GPR_U32(ctx, 31, 0x163040u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163040u; }
    }
    if (ctx->pc != 0x163040u) { return; }
    ctx->pc = 0x163040u;
label_163040:
    // 0x163040: 0x10400006
label_163044:
    if (ctx->pc == 0x163044u) {
        ctx->pc = 0x163044u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x163048u;
        goto label_163048;
    }
    ctx->pc = 0x163040u;
    {
        const bool branch_taken_0x163040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163044u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x163040) {
            ctx->pc = 0x16305Cu;
            goto label_16305c;
        }
    }
    ctx->pc = 0x163048u;
label_163048:
    // 0x163048: 0x8c420020
    ctx->pc = 0x163048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16304c:
    // 0x16304c: 0x10400003
label_163050:
    if (ctx->pc == 0x163050u) {
        ctx->pc = 0x163050u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163054u;
        goto label_163054;
    }
    ctx->pc = 0x16304Cu;
    {
        const bool branch_taken_0x16304c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163050u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16304c) {
            ctx->pc = 0x16305Cu;
            goto label_16305c;
        }
    }
    ctx->pc = 0x163054u;
label_163054:
    // 0x163054: 0x40f809
label_163058:
    if (ctx->pc == 0x163058u) {
        ctx->pc = 0x163058u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16305Cu;
        goto label_16305c;
    }
    ctx->pc = 0x163054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16305Cu);
        ctx->pc = 0x163058u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162FA0u: goto label_162fa0;
            case 0x162FA4u: goto label_162fa4;
            case 0x162FA8u: goto label_162fa8;
            case 0x162FACu: goto label_162fac;
            case 0x162FB0u: goto label_162fb0;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x162FBCu: goto label_162fbc;
            case 0x162FC0u: goto label_162fc0;
            case 0x162FC4u: goto label_162fc4;
            case 0x162FC8u: goto label_162fc8;
            case 0x162FCCu: goto label_162fcc;
            case 0x162FD0u: goto label_162fd0;
            case 0x162FD4u: goto label_162fd4;
            case 0x162FD8u: goto label_162fd8;
            case 0x162FDCu: goto label_162fdc;
            case 0x162FE0u: goto label_162fe0;
            case 0x162FE4u: goto label_162fe4;
            case 0x162FE8u: goto label_162fe8;
            case 0x162FECu: goto label_162fec;
            case 0x162FF0u: goto label_162ff0;
            case 0x162FF4u: goto label_162ff4;
            case 0x162FF8u: goto label_162ff8;
            case 0x162FFCu: goto label_162ffc;
            case 0x163000u: goto label_163000;
            case 0x163004u: goto label_163004;
            case 0x163008u: goto label_163008;
            case 0x16300Cu: goto label_16300c;
            case 0x163010u: goto label_163010;
            case 0x163014u: goto label_163014;
            case 0x163018u: goto label_163018;
            case 0x16301Cu: goto label_16301c;
            case 0x163020u: goto label_163020;
            case 0x163024u: goto label_163024;
            case 0x163028u: goto label_163028;
            case 0x16302Cu: goto label_16302c;
            case 0x163030u: goto label_163030;
            case 0x163034u: goto label_163034;
            case 0x163038u: goto label_163038;
            case 0x16303Cu: goto label_16303c;
            case 0x163040u: goto label_163040;
            case 0x163044u: goto label_163044;
            case 0x163048u: goto label_163048;
            case 0x16304Cu: goto label_16304c;
            case 0x163050u: goto label_163050;
            case 0x163054u: goto label_163054;
            case 0x163058u: goto label_163058;
            case 0x16305Cu: goto label_16305c;
            case 0x163060u: goto label_163060;
            case 0x163064u: goto label_163064;
            case 0x163068u: goto label_163068;
            case 0x16306Cu: goto label_16306c;
            case 0x163070u: goto label_163070;
            case 0x163074u: goto label_163074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16305Cu; }
            if (ctx->pc != 0x16305Cu) { return; }
        }
    }
    ctx->pc = 0x16305Cu;
label_16305c:
    // 0x16305c: 0xdfb00000
    ctx->pc = 0x16305cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163060:
    // 0x163060: 0xdfb10008
    ctx->pc = 0x163060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163064:
    // 0x163064: 0xdfb20010
    ctx->pc = 0x163064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163068:
    // 0x163068: 0xdfbf0018
    ctx->pc = 0x163068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16306c:
    // 0x16306c: 0x3e00008
label_163070:
    if (ctx->pc == 0x163070u) {
        ctx->pc = 0x163070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163074u;
        goto label_163074;
    }
    ctx->pc = 0x16306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162FA0u: goto label_162fa0;
            case 0x162FA4u: goto label_162fa4;
            case 0x162FA8u: goto label_162fa8;
            case 0x162FACu: goto label_162fac;
            case 0x162FB0u: goto label_162fb0;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x162FBCu: goto label_162fbc;
            case 0x162FC0u: goto label_162fc0;
            case 0x162FC4u: goto label_162fc4;
            case 0x162FC8u: goto label_162fc8;
            case 0x162FCCu: goto label_162fcc;
            case 0x162FD0u: goto label_162fd0;
            case 0x162FD4u: goto label_162fd4;
            case 0x162FD8u: goto label_162fd8;
            case 0x162FDCu: goto label_162fdc;
            case 0x162FE0u: goto label_162fe0;
            case 0x162FE4u: goto label_162fe4;
            case 0x162FE8u: goto label_162fe8;
            case 0x162FECu: goto label_162fec;
            case 0x162FF0u: goto label_162ff0;
            case 0x162FF4u: goto label_162ff4;
            case 0x162FF8u: goto label_162ff8;
            case 0x162FFCu: goto label_162ffc;
            case 0x163000u: goto label_163000;
            case 0x163004u: goto label_163004;
            case 0x163008u: goto label_163008;
            case 0x16300Cu: goto label_16300c;
            case 0x163010u: goto label_163010;
            case 0x163014u: goto label_163014;
            case 0x163018u: goto label_163018;
            case 0x16301Cu: goto label_16301c;
            case 0x163020u: goto label_163020;
            case 0x163024u: goto label_163024;
            case 0x163028u: goto label_163028;
            case 0x16302Cu: goto label_16302c;
            case 0x163030u: goto label_163030;
            case 0x163034u: goto label_163034;
            case 0x163038u: goto label_163038;
            case 0x16303Cu: goto label_16303c;
            case 0x163040u: goto label_163040;
            case 0x163044u: goto label_163044;
            case 0x163048u: goto label_163048;
            case 0x16304Cu: goto label_16304c;
            case 0x163050u: goto label_163050;
            case 0x163054u: goto label_163054;
            case 0x163058u: goto label_163058;
            case 0x16305Cu: goto label_16305c;
            case 0x163060u: goto label_163060;
            case 0x163064u: goto label_163064;
            case 0x163068u: goto label_163068;
            case 0x16306Cu: goto label_16306c;
            case 0x163070u: goto label_163070;
            case 0x163074u: goto label_163074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163074u;
label_163074:
    // 0x163074: 0x0
    ctx->pc = 0x163074u;
    // NOP
}
