#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164B70
// Address: 0x164b70 - 0x164ba0
void sub_00164B70_0x164b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164b70u;

label_164b70:
    // 0x164b70: 0x27bdfff0
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_164b74:
    // 0x164b74: 0x8c830000
    ctx->pc = 0x164b74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164b78:
    // 0x164b78: 0xffbf0000
    ctx->pc = 0x164b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164b7c:
    // 0x164b7c: 0xc0382d
    ctx->pc = 0x164b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164b80:
    // 0x164b80: 0xa0302d
    ctx->pc = 0x164b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164b84:
    // 0x164b84: 0x8c620018
    ctx->pc = 0x164b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_164b88:
    // 0x164b88: 0x40f809
label_164b8c:
    if (ctx->pc == 0x164B8Cu) {
        ctx->pc = 0x164B8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164B90u;
        goto label_164b90;
    }
    ctx->pc = 0x164B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164B90u);
        ctx->pc = 0x164B8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164B70u: goto label_164b70;
            case 0x164B74u: goto label_164b74;
            case 0x164B78u: goto label_164b78;
            case 0x164B7Cu: goto label_164b7c;
            case 0x164B80u: goto label_164b80;
            case 0x164B84u: goto label_164b84;
            case 0x164B88u: goto label_164b88;
            case 0x164B8Cu: goto label_164b8c;
            case 0x164B90u: goto label_164b90;
            case 0x164B94u: goto label_164b94;
            case 0x164B98u: goto label_164b98;
            case 0x164B9Cu: goto label_164b9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164B90u; }
            if (ctx->pc != 0x164B90u) { return; }
        }
    }
    ctx->pc = 0x164B90u;
label_164b90:
    // 0x164b90: 0xdfbf0000
    ctx->pc = 0x164b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164b94:
    // 0x164b94: 0x3e00008
label_164b98:
    if (ctx->pc == 0x164B98u) {
        ctx->pc = 0x164B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164B9Cu;
        goto label_164b9c;
    }
    ctx->pc = 0x164B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164B70u: goto label_164b70;
            case 0x164B74u: goto label_164b74;
            case 0x164B78u: goto label_164b78;
            case 0x164B7Cu: goto label_164b7c;
            case 0x164B80u: goto label_164b80;
            case 0x164B84u: goto label_164b84;
            case 0x164B88u: goto label_164b88;
            case 0x164B8Cu: goto label_164b8c;
            case 0x164B90u: goto label_164b90;
            case 0x164B94u: goto label_164b94;
            case 0x164B98u: goto label_164b98;
            case 0x164B9Cu: goto label_164b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164B9Cu;
label_164b9c:
    // 0x164b9c: 0x0
    ctx->pc = 0x164b9cu;
    // NOP
}
