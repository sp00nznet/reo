#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135F50
// Address: 0x135f50 - 0x135fb8
void sub_00135F50_0x135f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135f50u;

label_135f50:
    // 0x135f50: 0x27bdfff0
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135f54:
    // 0x135f54: 0xffb00000
    ctx->pc = 0x135f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135f58:
    // 0x135f58: 0x24100003
    ctx->pc = 0x135f58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_135f5c:
    // 0x135f5c: 0x14800006
label_135f60:
    if (ctx->pc == 0x135F60u) {
        ctx->pc = 0x135F60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135F64u;
        goto label_135f64;
    }
    ctx->pc = 0x135F5Cu;
    {
        const bool branch_taken_0x135f5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135F60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135f5c) {
            ctx->pc = 0x135F78u;
            goto label_135f78;
        }
    }
    ctx->pc = 0x135F64u;
label_135f64:
    // 0x135f64: 0x3c040024
    ctx->pc = 0x135f64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135f68:
    // 0x135f68: 0xc04d480
label_135f6c:
    if (ctx->pc == 0x135F6Cu) {
        ctx->pc = 0x135F6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949552));
        ctx->pc = 0x135F70u;
        goto label_135f70;
    }
    ctx->pc = 0x135F68u;
    SET_GPR_U32(ctx, 31, 0x135F70u);
    ctx->pc = 0x135F6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949552));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F70u; }
    }
    if (ctx->pc != 0x135F70u) { return; }
    ctx->pc = 0x135F70u;
label_135f70:
    // 0x135f70: 0x1000000c
label_135f74:
    if (ctx->pc == 0x135F74u) {
        ctx->pc = 0x135F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x135F78u;
        goto label_135f78;
    }
    ctx->pc = 0x135F70u;
    {
        const bool branch_taken_0x135f70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x135f70) {
            ctx->pc = 0x135FA4u;
            goto label_135fa4;
        }
    }
    ctx->pc = 0x135F78u;
label_135f78:
    // 0x135f78: 0x8c820000
    ctx->pc = 0x135f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135f7c:
    // 0x135f7c: 0x8c42002c
    ctx->pc = 0x135f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_135f80:
    // 0x135f80: 0x50400005
label_135f84:
    if (ctx->pc == 0x135F84u) {
        ctx->pc = 0x135F84u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135F88u;
        goto label_135f88;
    }
    ctx->pc = 0x135F80u;
    {
        const bool branch_taken_0x135f80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135f80) {
            ctx->pc = 0x135F84u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135F98u;
            goto label_135f98;
        }
    }
    ctx->pc = 0x135F88u;
label_135f88:
    // 0x135f88: 0x40f809
label_135f8c:
    if (ctx->pc == 0x135F8Cu) {
        ctx->pc = 0x135F8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135F90u;
        goto label_135f90;
    }
    ctx->pc = 0x135F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135F90u);
        ctx->pc = 0x135F8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135F50u: goto label_135f50;
            case 0x135F54u: goto label_135f54;
            case 0x135F58u: goto label_135f58;
            case 0x135F5Cu: goto label_135f5c;
            case 0x135F60u: goto label_135f60;
            case 0x135F64u: goto label_135f64;
            case 0x135F68u: goto label_135f68;
            case 0x135F6Cu: goto label_135f6c;
            case 0x135F70u: goto label_135f70;
            case 0x135F74u: goto label_135f74;
            case 0x135F78u: goto label_135f78;
            case 0x135F7Cu: goto label_135f7c;
            case 0x135F80u: goto label_135f80;
            case 0x135F84u: goto label_135f84;
            case 0x135F88u: goto label_135f88;
            case 0x135F8Cu: goto label_135f8c;
            case 0x135F90u: goto label_135f90;
            case 0x135F94u: goto label_135f94;
            case 0x135F98u: goto label_135f98;
            case 0x135F9Cu: goto label_135f9c;
            case 0x135FA0u: goto label_135fa0;
            case 0x135FA4u: goto label_135fa4;
            case 0x135FA8u: goto label_135fa8;
            case 0x135FACu: goto label_135fac;
            case 0x135FB0u: goto label_135fb0;
            case 0x135FB4u: goto label_135fb4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135F90u; }
            if (ctx->pc != 0x135F90u) { return; }
        }
    }
    ctx->pc = 0x135F90u;
label_135f90:
    // 0x135f90: 0x10000003
label_135f94:
    if (ctx->pc == 0x135F94u) {
        ctx->pc = 0x135F94u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135F98u;
        goto label_135f98;
    }
    ctx->pc = 0x135F90u;
    {
        const bool branch_taken_0x135f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135F94u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135f90) {
            ctx->pc = 0x135FA0u;
            goto label_135fa0;
        }
    }
    ctx->pc = 0x135F98u;
label_135f98:
    // 0x135f98: 0xc04d480
label_135f9c:
    if (ctx->pc == 0x135F9Cu) {
        ctx->pc = 0x135F9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949584));
        ctx->pc = 0x135FA0u;
        goto label_135fa0;
    }
    ctx->pc = 0x135F98u;
    SET_GPR_U32(ctx, 31, 0x135FA0u);
    ctx->pc = 0x135F9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949584));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FA0u; }
    }
    if (ctx->pc != 0x135FA0u) { return; }
    ctx->pc = 0x135FA0u;
label_135fa0:
    // 0x135fa0: 0x200102d
    ctx->pc = 0x135fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135fa4:
    // 0x135fa4: 0xdfb00000
    ctx->pc = 0x135fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135fa8:
    // 0x135fa8: 0xdfbf0008
    ctx->pc = 0x135fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135fac:
    // 0x135fac: 0x3e00008
label_135fb0:
    if (ctx->pc == 0x135FB0u) {
        ctx->pc = 0x135FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135FB4u;
        goto label_135fb4;
    }
    ctx->pc = 0x135FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135F50u: goto label_135f50;
            case 0x135F54u: goto label_135f54;
            case 0x135F58u: goto label_135f58;
            case 0x135F5Cu: goto label_135f5c;
            case 0x135F60u: goto label_135f60;
            case 0x135F64u: goto label_135f64;
            case 0x135F68u: goto label_135f68;
            case 0x135F6Cu: goto label_135f6c;
            case 0x135F70u: goto label_135f70;
            case 0x135F74u: goto label_135f74;
            case 0x135F78u: goto label_135f78;
            case 0x135F7Cu: goto label_135f7c;
            case 0x135F80u: goto label_135f80;
            case 0x135F84u: goto label_135f84;
            case 0x135F88u: goto label_135f88;
            case 0x135F8Cu: goto label_135f8c;
            case 0x135F90u: goto label_135f90;
            case 0x135F94u: goto label_135f94;
            case 0x135F98u: goto label_135f98;
            case 0x135F9Cu: goto label_135f9c;
            case 0x135FA0u: goto label_135fa0;
            case 0x135FA4u: goto label_135fa4;
            case 0x135FA8u: goto label_135fa8;
            case 0x135FACu: goto label_135fac;
            case 0x135FB0u: goto label_135fb0;
            case 0x135FB4u: goto label_135fb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135FB4u;
label_135fb4:
    // 0x135fb4: 0x0
    ctx->pc = 0x135fb4u;
    // NOP
}
