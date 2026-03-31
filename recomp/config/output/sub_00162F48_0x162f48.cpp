#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162F48
// Address: 0x162f48 - 0x162fa0
void sub_00162F48_0x162f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162f48u;

label_162f48:
    // 0x162f48: 0x27bdfff0
    ctx->pc = 0x162f48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_162f4c:
    // 0x162f4c: 0xffb00000
    ctx->pc = 0x162f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162f50:
    // 0x162f50: 0xffbf0008
    ctx->pc = 0x162f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_162f54:
    // 0x162f54: 0xc058d10
label_162f58:
    if (ctx->pc == 0x162F58u) {
        ctx->pc = 0x162F58u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162F5Cu;
        goto label_162f5c;
    }
    ctx->pc = 0x162F54u;
    SET_GPR_U32(ctx, 31, 0x162F5Cu);
    ctx->pc = 0x162F58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F5Cu; }
    }
    if (ctx->pc != 0x162F5Cu) { return; }
    ctx->pc = 0x162F5Cu;
label_162f5c:
    // 0x162f5c: 0x24030001
    ctx->pc = 0x162f5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_162f60:
    // 0x162f60: 0x5443000b
label_162f64:
    if (ctx->pc == 0x162F64u) {
        ctx->pc = 0x162F64u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162F68u;
        goto label_162f68;
    }
    ctx->pc = 0x162F60u;
    {
        const bool branch_taken_0x162f60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x162f60) {
            ctx->pc = 0x162F64u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162F90u;
            goto label_162f90;
        }
    }
    ctx->pc = 0x162F68u;
label_162f68:
    // 0x162f68: 0xc058d08
label_162f6c:
    if (ctx->pc == 0x162F6Cu) {
        ctx->pc = 0x162F70u;
        goto label_162f70;
    }
    ctx->pc = 0x162F68u;
    SET_GPR_U32(ctx, 31, 0x162F70u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F70u; }
    }
    if (ctx->pc != 0x162F70u) { return; }
    ctx->pc = 0x162F70u;
label_162f70:
    // 0x162f70: 0x10400006
label_162f74:
    if (ctx->pc == 0x162F74u) {
        ctx->pc = 0x162F74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x162F78u;
        goto label_162f78;
    }
    ctx->pc = 0x162F70u;
    {
        const bool branch_taken_0x162f70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162F74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x162f70) {
            ctx->pc = 0x162F8Cu;
            goto label_162f8c;
        }
    }
    ctx->pc = 0x162F78u;
label_162f78:
    // 0x162f78: 0x8c420018
    ctx->pc = 0x162f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_162f7c:
    // 0x162f7c: 0x50400004
label_162f80:
    if (ctx->pc == 0x162F80u) {
        ctx->pc = 0x162F80u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162F84u;
        goto label_162f84;
    }
    ctx->pc = 0x162F7Cu;
    {
        const bool branch_taken_0x162f7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162f7c) {
            ctx->pc = 0x162F80u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162F90u;
            goto label_162f90;
        }
    }
    ctx->pc = 0x162F84u;
label_162f84:
    // 0x162f84: 0x40f809
label_162f88:
    if (ctx->pc == 0x162F88u) {
        ctx->pc = 0x162F8Cu;
        goto label_162f8c;
    }
    ctx->pc = 0x162F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162F8Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162F48u: goto label_162f48;
            case 0x162F4Cu: goto label_162f4c;
            case 0x162F50u: goto label_162f50;
            case 0x162F54u: goto label_162f54;
            case 0x162F58u: goto label_162f58;
            case 0x162F5Cu: goto label_162f5c;
            case 0x162F60u: goto label_162f60;
            case 0x162F64u: goto label_162f64;
            case 0x162F68u: goto label_162f68;
            case 0x162F6Cu: goto label_162f6c;
            case 0x162F70u: goto label_162f70;
            case 0x162F74u: goto label_162f74;
            case 0x162F78u: goto label_162f78;
            case 0x162F7Cu: goto label_162f7c;
            case 0x162F80u: goto label_162f80;
            case 0x162F84u: goto label_162f84;
            case 0x162F88u: goto label_162f88;
            case 0x162F8Cu: goto label_162f8c;
            case 0x162F90u: goto label_162f90;
            case 0x162F94u: goto label_162f94;
            case 0x162F98u: goto label_162f98;
            case 0x162F9Cu: goto label_162f9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162F8Cu; }
            if (ctx->pc != 0x162F8Cu) { return; }
        }
    }
    ctx->pc = 0x162F8Cu;
label_162f8c:
    // 0x162f8c: 0xdfb00000
    ctx->pc = 0x162f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162f90:
    // 0x162f90: 0xdfbf0008
    ctx->pc = 0x162f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162f94:
    // 0x162f94: 0x3e00008
label_162f98:
    if (ctx->pc == 0x162F98u) {
        ctx->pc = 0x162F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162F9Cu;
        goto label_162f9c;
    }
    ctx->pc = 0x162F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162F48u: goto label_162f48;
            case 0x162F4Cu: goto label_162f4c;
            case 0x162F50u: goto label_162f50;
            case 0x162F54u: goto label_162f54;
            case 0x162F58u: goto label_162f58;
            case 0x162F5Cu: goto label_162f5c;
            case 0x162F60u: goto label_162f60;
            case 0x162F64u: goto label_162f64;
            case 0x162F68u: goto label_162f68;
            case 0x162F6Cu: goto label_162f6c;
            case 0x162F70u: goto label_162f70;
            case 0x162F74u: goto label_162f74;
            case 0x162F78u: goto label_162f78;
            case 0x162F7Cu: goto label_162f7c;
            case 0x162F80u: goto label_162f80;
            case 0x162F84u: goto label_162f84;
            case 0x162F88u: goto label_162f88;
            case 0x162F8Cu: goto label_162f8c;
            case 0x162F90u: goto label_162f90;
            case 0x162F94u: goto label_162f94;
            case 0x162F98u: goto label_162f98;
            case 0x162F9Cu: goto label_162f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162F9Cu;
label_162f9c:
    // 0x162f9c: 0x0
    ctx->pc = 0x162f9cu;
    // NOP
}
