#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_141d70
// Address: 0x141d70 - 0x141db0
void entry_141d70_0x141db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141d70u;

label_141d70:
    // 0x141d70: 0x27bdfff0
    ctx->pc = 0x141d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_141d74:
    // 0x141d74: 0x3c020026
    ctx->pc = 0x141d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_141d78:
    // 0x141d78: 0x244249a0
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18848));
label_141d7c:
    // 0x141d7c: 0x420c0
    ctx->pc = 0x141d7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_141d80:
    // 0x141d80: 0xffbf0000
    ctx->pc = 0x141d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141d84:
    // 0x141d84: 0x441821
    ctx->pc = 0x141d84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141d88:
    // 0x141d88: 0x822021
    ctx->pc = 0x141d88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_141d8c:
    // 0x141d8c: 0x8c820000
    ctx->pc = 0x141d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141d90:
    // 0x141d90: 0x50400004
label_141d94:
    if (ctx->pc == 0x141D94u) {
        ctx->pc = 0x141D94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x141D98u;
        goto label_141d98;
    }
    ctx->pc = 0x141D90u;
    {
        const bool branch_taken_0x141d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x141d90) {
            ctx->pc = 0x141D94u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x141DA4u;
            goto label_141da4;
        }
    }
    ctx->pc = 0x141D98u;
label_141d98:
    // 0x141d98: 0x40f809
label_141d9c:
    if (ctx->pc == 0x141D9Cu) {
        ctx->pc = 0x141D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x141DA0u;
        goto label_141da0;
    }
    ctx->pc = 0x141D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141DA0u);
        ctx->pc = 0x141D9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141D70u: goto label_141d70;
            case 0x141D74u: goto label_141d74;
            case 0x141D78u: goto label_141d78;
            case 0x141D7Cu: goto label_141d7c;
            case 0x141D80u: goto label_141d80;
            case 0x141D84u: goto label_141d84;
            case 0x141D88u: goto label_141d88;
            case 0x141D8Cu: goto label_141d8c;
            case 0x141D90u: goto label_141d90;
            case 0x141D94u: goto label_141d94;
            case 0x141D98u: goto label_141d98;
            case 0x141D9Cu: goto label_141d9c;
            case 0x141DA0u: goto label_141da0;
            case 0x141DA4u: goto label_141da4;
            case 0x141DA8u: goto label_141da8;
            case 0x141DACu: goto label_141dac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141DA0u; }
            if (ctx->pc != 0x141DA0u) { return; }
        }
    }
    ctx->pc = 0x141DA0u;
label_141da0:
    // 0x141da0: 0xdfbf0000
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141da4:
    // 0x141da4: 0x3e00008
label_141da8:
    if (ctx->pc == 0x141DA8u) {
        ctx->pc = 0x141DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x141DACu;
        goto label_141dac;
    }
    ctx->pc = 0x141DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141D70u: goto label_141d70;
            case 0x141D74u: goto label_141d74;
            case 0x141D78u: goto label_141d78;
            case 0x141D7Cu: goto label_141d7c;
            case 0x141D80u: goto label_141d80;
            case 0x141D84u: goto label_141d84;
            case 0x141D88u: goto label_141d88;
            case 0x141D8Cu: goto label_141d8c;
            case 0x141D90u: goto label_141d90;
            case 0x141D94u: goto label_141d94;
            case 0x141D98u: goto label_141d98;
            case 0x141D9Cu: goto label_141d9c;
            case 0x141DA0u: goto label_141da0;
            case 0x141DA4u: goto label_141da4;
            case 0x141DA8u: goto label_141da8;
            case 0x141DACu: goto label_141dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141DACu;
label_141dac:
    // 0x141dac: 0x0
    ctx->pc = 0x141dacu;
    // NOP
}
