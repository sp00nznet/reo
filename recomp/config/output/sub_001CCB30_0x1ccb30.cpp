#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CCB30
// Address: 0x1ccb30 - 0x1ccb90
void sub_001CCB30_0x1ccb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ccb30u;

    // 0x1ccb30: 0x3c020034
    ctx->pc = 0x1ccb30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1ccb34: 0x282d
    ctx->pc = 0x1ccb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb38: 0x1000000d
    ctx->pc = 0x1CCB38u;
    {
        const bool branch_taken_0x1ccb38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCB3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5696));
        if (branch_taken_0x1ccb38) {
            ctx->pc = 0x1CCB70u;
            goto label_1ccb70;
        }
    }
    ctx->pc = 0x1CCB40u;
label_1ccb40:
    // 0x1ccb40: 0x8c430000
    ctx->pc = 0x1ccb40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccb44: 0x10600008
    ctx->pc = 0x1CCB44u;
    {
        const bool branch_taken_0x1ccb44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ccb44) {
            ctx->pc = 0x1CCB68u;
            goto label_1ccb68;
        }
    }
    ctx->pc = 0x1CCB4Cu;
    // 0x1ccb4c: 0x8c430004
    ctx->pc = 0x1ccb4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ccb50: 0x14640005
    ctx->pc = 0x1CCB50u;
    {
        const bool branch_taken_0x1ccb50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ccb50) {
            ctx->pc = 0x1CCB68u;
            goto label_1ccb68;
        }
    }
    ctx->pc = 0x1CCB58u;
    // 0x1ccb58: 0x8443000e
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ccb5c: 0x24630001
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ccb60: 0x10000007
    ctx->pc = 0x1CCB60u;
    {
        const bool branch_taken_0x1ccb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCB64u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ccb60) {
            ctx->pc = 0x1CCB80u;
            goto label_1ccb80;
        }
    }
    ctx->pc = 0x1CCB68u;
label_1ccb68:
    // 0x1ccb68: 0x24a50001
    ctx->pc = 0x1ccb68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ccb6c: 0x24420010
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_1ccb70:
    // 0x1ccb70: 0x28a30100
    ctx->pc = 0x1ccb70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 256));
    // 0x1ccb74: 0x1460fff2
    ctx->pc = 0x1CCB74u;
    {
        const bool branch_taken_0x1ccb74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ccb74) {
            ctx->pc = 0x1CCB40u;
            goto label_1ccb40;
        }
    }
    ctx->pc = 0x1CCB7Cu;
    // 0x1ccb7c: 0x102d
    ctx->pc = 0x1ccb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb80:
    // 0x1ccb80: 0x3e00008
    ctx->pc = 0x1CCB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCB40u: goto label_1ccb40;
            case 0x1CCB68u: goto label_1ccb68;
            case 0x1CCB70u: goto label_1ccb70;
            case 0x1CCB80u: goto label_1ccb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCB88u;
    // 0x1ccb88: 0x0
    ctx->pc = 0x1ccb88u;
    // NOP
    // 0x1ccb8c: 0x0
    ctx->pc = 0x1ccb8cu;
    // NOP
}
