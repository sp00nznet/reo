#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147F68
// Address: 0x147f68 - 0x147fe0
void sub_00147F68_0x147f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147f68u;

label_147f68:
    // 0x147f68: 0x27bdffe0
    ctx->pc = 0x147f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_147f6c:
    // 0x147f6c: 0x482d
    ctx->pc = 0x147f6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147f70:
    // 0x147f70: 0xffbf0010
    ctx->pc = 0x147f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_147f74:
    // 0x147f74: 0x10800014
label_147f78:
    if (ctx->pc == 0x147F78u) {
        ctx->pc = 0x147F78u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x147F7Cu;
        goto label_147f7c;
    }
    ctx->pc = 0x147F74u;
    {
        const bool branch_taken_0x147f74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x147F78u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x147f74) {
            ctx->pc = 0x147FC8u;
            goto label_147fc8;
        }
    }
    ctx->pc = 0x147F7Cu;
label_147f7c:
    // 0x147f7c: 0x8c860040
    ctx->pc = 0x147f7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_147f80:
    // 0x147f80: 0x10c00011
label_147f84:
    if (ctx->pc == 0x147F84u) {
        ctx->pc = 0x147F84u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x147F88u;
        goto label_147f88;
    }
    ctx->pc = 0x147F80u;
    {
        const bool branch_taken_0x147f80 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x147F84u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x147f80) {
            ctx->pc = 0x147FC8u;
            goto label_147fc8;
        }
    }
    ctx->pc = 0x147F88u;
label_147f88:
    // 0x147f88: 0x8ca30000
    ctx->pc = 0x147f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147f8c:
    // 0x147f8c: 0x681818
    ctx->pc = 0x147f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_147f90:
    // 0x147f90: 0xc31021
    ctx->pc = 0x147f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_147f94:
    // 0x147f94: 0x8c47000c
    ctx->pc = 0x147f94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_147f98:
    // 0x147f98: 0x10e0000c
label_147f9c:
    if (ctx->pc == 0x147F9Cu) {
        ctx->pc = 0x147F9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x147FA0u;
        goto label_147fa0;
    }
    ctx->pc = 0x147F98u;
    {
        const bool branch_taken_0x147f98 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x147F9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x147f98) {
            ctx->pc = 0x147FCCu;
            goto label_147fcc;
        }
    }
    ctx->pc = 0x147FA0u;
label_147fa0:
    // 0x147fa0: 0x8c430014
    ctx->pc = 0x147fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_147fa4:
    // 0x147fa4: 0x380802d
    ctx->pc = 0x147fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_147fa8:
    // 0x147fa8: 0x60e02d
    ctx->pc = 0x147fa8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_147fac:
    // 0x147fac: 0x8ca20000
    ctx->pc = 0x147facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147fb0:
    // 0x147fb0: 0x481818
    ctx->pc = 0x147fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_147fb4:
    // 0x147fb4: 0x661021
    ctx->pc = 0x147fb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_147fb8:
    // 0x147fb8: 0xe0f809
label_147fbc:
    if (ctx->pc == 0x147FBCu) {
        ctx->pc = 0x147FBCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x147FC0u;
        goto label_147fc0;
    }
    ctx->pc = 0x147FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x147FC0u);
        ctx->pc = 0x147FBCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147F68u: goto label_147f68;
            case 0x147F6Cu: goto label_147f6c;
            case 0x147F70u: goto label_147f70;
            case 0x147F74u: goto label_147f74;
            case 0x147F78u: goto label_147f78;
            case 0x147F7Cu: goto label_147f7c;
            case 0x147F80u: goto label_147f80;
            case 0x147F84u: goto label_147f84;
            case 0x147F88u: goto label_147f88;
            case 0x147F8Cu: goto label_147f8c;
            case 0x147F90u: goto label_147f90;
            case 0x147F94u: goto label_147f94;
            case 0x147F98u: goto label_147f98;
            case 0x147F9Cu: goto label_147f9c;
            case 0x147FA0u: goto label_147fa0;
            case 0x147FA4u: goto label_147fa4;
            case 0x147FA8u: goto label_147fa8;
            case 0x147FACu: goto label_147fac;
            case 0x147FB0u: goto label_147fb0;
            case 0x147FB4u: goto label_147fb4;
            case 0x147FB8u: goto label_147fb8;
            case 0x147FBCu: goto label_147fbc;
            case 0x147FC0u: goto label_147fc0;
            case 0x147FC4u: goto label_147fc4;
            case 0x147FC8u: goto label_147fc8;
            case 0x147FCCu: goto label_147fcc;
            case 0x147FD0u: goto label_147fd0;
            case 0x147FD4u: goto label_147fd4;
            case 0x147FD8u: goto label_147fd8;
            case 0x147FDCu: goto label_147fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147FC0u; }
            if (ctx->pc != 0x147FC0u) { return; }
        }
    }
    ctx->pc = 0x147FC0u;
label_147fc0:
    // 0x147fc0: 0x40482d
    ctx->pc = 0x147fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_147fc4:
    // 0x147fc4: 0x200e02d
    ctx->pc = 0x147fc4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_147fc8:
    // 0x147fc8: 0xdfbf0010
    ctx->pc = 0x147fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_147fcc:
    // 0x147fcc: 0x120102d
    ctx->pc = 0x147fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_147fd0:
    // 0x147fd0: 0xdfb00000
    ctx->pc = 0x147fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_147fd4:
    // 0x147fd4: 0x3e00008
label_147fd8:
    if (ctx->pc == 0x147FD8u) {
        ctx->pc = 0x147FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x147FDCu;
        goto label_147fdc;
    }
    ctx->pc = 0x147FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147F68u: goto label_147f68;
            case 0x147F6Cu: goto label_147f6c;
            case 0x147F70u: goto label_147f70;
            case 0x147F74u: goto label_147f74;
            case 0x147F78u: goto label_147f78;
            case 0x147F7Cu: goto label_147f7c;
            case 0x147F80u: goto label_147f80;
            case 0x147F84u: goto label_147f84;
            case 0x147F88u: goto label_147f88;
            case 0x147F8Cu: goto label_147f8c;
            case 0x147F90u: goto label_147f90;
            case 0x147F94u: goto label_147f94;
            case 0x147F98u: goto label_147f98;
            case 0x147F9Cu: goto label_147f9c;
            case 0x147FA0u: goto label_147fa0;
            case 0x147FA4u: goto label_147fa4;
            case 0x147FA8u: goto label_147fa8;
            case 0x147FACu: goto label_147fac;
            case 0x147FB0u: goto label_147fb0;
            case 0x147FB4u: goto label_147fb4;
            case 0x147FB8u: goto label_147fb8;
            case 0x147FBCu: goto label_147fbc;
            case 0x147FC0u: goto label_147fc0;
            case 0x147FC4u: goto label_147fc4;
            case 0x147FC8u: goto label_147fc8;
            case 0x147FCCu: goto label_147fcc;
            case 0x147FD0u: goto label_147fd0;
            case 0x147FD4u: goto label_147fd4;
            case 0x147FD8u: goto label_147fd8;
            case 0x147FDCu: goto label_147fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147FDCu;
label_147fdc:
    // 0x147fdc: 0x0
    ctx->pc = 0x147fdcu;
    // NOP
}
