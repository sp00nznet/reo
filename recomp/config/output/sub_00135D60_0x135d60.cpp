#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135D60
// Address: 0x135d60 - 0x135dc8
void sub_00135D60_0x135d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135d60u;

label_135d60:
    // 0x135d60: 0x27bdfff0
    ctx->pc = 0x135d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_135d64:
    // 0x135d64: 0xffb00000
    ctx->pc = 0x135d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135d68:
    // 0x135d68: 0x14800007
label_135d6c:
    if (ctx->pc == 0x135D6Cu) {
        ctx->pc = 0x135D6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x135D70u;
        goto label_135d70;
    }
    ctx->pc = 0x135D68u;
    {
        const bool branch_taken_0x135d68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x135D6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x135d68) {
            ctx->pc = 0x135D88u;
            goto label_135d88;
        }
    }
    ctx->pc = 0x135D70u;
label_135d70:
    // 0x135d70: 0x3c040024
    ctx->pc = 0x135d70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_135d74:
    // 0x135d74: 0xc04d480
label_135d78:
    if (ctx->pc == 0x135D78u) {
        ctx->pc = 0x135D78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949320));
        ctx->pc = 0x135D7Cu;
        goto label_135d7c;
    }
    ctx->pc = 0x135D74u;
    SET_GPR_U32(ctx, 31, 0x135D7Cu);
    ctx->pc = 0x135D78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949320));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D7Cu; }
    }
    if (ctx->pc != 0x135D7Cu) { return; }
    ctx->pc = 0x135D7Cu;
label_135d7c:
    // 0x135d7c: 0x1000000e
label_135d80:
    if (ctx->pc == 0x135D80u) {
        ctx->pc = 0x135D80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135D84u;
        goto label_135d84;
    }
    ctx->pc = 0x135D7Cu;
    {
        const bool branch_taken_0x135d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135D80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135d7c) {
            ctx->pc = 0x135DB8u;
            goto label_135db8;
        }
    }
    ctx->pc = 0x135D84u;
label_135d84:
    // 0x135d84: 0x0
    ctx->pc = 0x135d84u;
    // NOP
label_135d88:
    // 0x135d88: 0x8c820000
    ctx->pc = 0x135d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135d8c:
    // 0x135d8c: 0x8c420018
    ctx->pc = 0x135d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_135d90:
    // 0x135d90: 0x50400005
label_135d94:
    if (ctx->pc == 0x135D94u) {
        ctx->pc = 0x135D94u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x135D98u;
        goto label_135d98;
    }
    ctx->pc = 0x135D90u;
    {
        const bool branch_taken_0x135d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135d90) {
            ctx->pc = 0x135D94u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x135DA8u;
            goto label_135da8;
        }
    }
    ctx->pc = 0x135D98u;
label_135d98:
    // 0x135d98: 0x40f809
label_135d9c:
    if (ctx->pc == 0x135D9Cu) {
        ctx->pc = 0x135D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x135DA0u;
        goto label_135da0;
    }
    ctx->pc = 0x135D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135DA0u);
        ctx->pc = 0x135D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135D60u: goto label_135d60;
            case 0x135D64u: goto label_135d64;
            case 0x135D68u: goto label_135d68;
            case 0x135D6Cu: goto label_135d6c;
            case 0x135D70u: goto label_135d70;
            case 0x135D74u: goto label_135d74;
            case 0x135D78u: goto label_135d78;
            case 0x135D7Cu: goto label_135d7c;
            case 0x135D80u: goto label_135d80;
            case 0x135D84u: goto label_135d84;
            case 0x135D88u: goto label_135d88;
            case 0x135D8Cu: goto label_135d8c;
            case 0x135D90u: goto label_135d90;
            case 0x135D94u: goto label_135d94;
            case 0x135D98u: goto label_135d98;
            case 0x135D9Cu: goto label_135d9c;
            case 0x135DA0u: goto label_135da0;
            case 0x135DA4u: goto label_135da4;
            case 0x135DA8u: goto label_135da8;
            case 0x135DACu: goto label_135dac;
            case 0x135DB0u: goto label_135db0;
            case 0x135DB4u: goto label_135db4;
            case 0x135DB8u: goto label_135db8;
            case 0x135DBCu: goto label_135dbc;
            case 0x135DC0u: goto label_135dc0;
            case 0x135DC4u: goto label_135dc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135DA0u; }
            if (ctx->pc != 0x135DA0u) { return; }
        }
    }
    ctx->pc = 0x135DA0u;
label_135da0:
    // 0x135da0: 0x10000004
label_135da4:
    if (ctx->pc == 0x135DA4u) {
        ctx->pc = 0x135DA4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x135DA8u;
        goto label_135da8;
    }
    ctx->pc = 0x135DA0u;
    {
        const bool branch_taken_0x135da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135DA4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135da0) {
            ctx->pc = 0x135DB4u;
            goto label_135db4;
        }
    }
    ctx->pc = 0x135DA8u;
label_135da8:
    // 0x135da8: 0x802d
    ctx->pc = 0x135da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135dac:
    // 0x135dac: 0xc04d480
label_135db0:
    if (ctx->pc == 0x135DB0u) {
        ctx->pc = 0x135DB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949352));
        ctx->pc = 0x135DB4u;
        goto label_135db4;
    }
    ctx->pc = 0x135DACu;
    SET_GPR_U32(ctx, 31, 0x135DB4u);
    ctx->pc = 0x135DB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949352));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DB4u; }
    }
    if (ctx->pc != 0x135DB4u) { return; }
    ctx->pc = 0x135DB4u;
label_135db4:
    // 0x135db4: 0x200102d
    ctx->pc = 0x135db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135db8:
    // 0x135db8: 0xdfb00000
    ctx->pc = 0x135db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135dbc:
    // 0x135dbc: 0xdfbf0008
    ctx->pc = 0x135dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135dc0:
    // 0x135dc0: 0x3e00008
label_135dc4:
    if (ctx->pc == 0x135DC4u) {
        ctx->pc = 0x135DC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x135DC8u;
        goto label_fallthrough_0x135dc0;
    }
    ctx->pc = 0x135DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135DC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135D60u: goto label_135d60;
            case 0x135D64u: goto label_135d64;
            case 0x135D68u: goto label_135d68;
            case 0x135D6Cu: goto label_135d6c;
            case 0x135D70u: goto label_135d70;
            case 0x135D74u: goto label_135d74;
            case 0x135D78u: goto label_135d78;
            case 0x135D7Cu: goto label_135d7c;
            case 0x135D80u: goto label_135d80;
            case 0x135D84u: goto label_135d84;
            case 0x135D88u: goto label_135d88;
            case 0x135D8Cu: goto label_135d8c;
            case 0x135D90u: goto label_135d90;
            case 0x135D94u: goto label_135d94;
            case 0x135D98u: goto label_135d98;
            case 0x135D9Cu: goto label_135d9c;
            case 0x135DA0u: goto label_135da0;
            case 0x135DA4u: goto label_135da4;
            case 0x135DA8u: goto label_135da8;
            case 0x135DACu: goto label_135dac;
            case 0x135DB0u: goto label_135db0;
            case 0x135DB4u: goto label_135db4;
            case 0x135DB8u: goto label_135db8;
            case 0x135DBCu: goto label_135dbc;
            case 0x135DC0u: goto label_135dc0;
            case 0x135DC4u: goto label_135dc4;
            default: break;
        }
        return;
    }
label_fallthrough_0x135dc0:
    ctx->pc = 0x135DC8u;
}
