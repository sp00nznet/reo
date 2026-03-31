#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B7F40
// Address: 0x1b7f40 - 0x1b7fb0
void sub_001B7F40_0x1b7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b7f40u;

label_1b7f40:
    // 0x1b7f40: 0x27bdffd0
    ctx->pc = 0x1b7f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b7f44:
    // 0x1b7f44: 0x51c3c
    ctx->pc = 0x1b7f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_1b7f48:
    // 0x1b7f48: 0xffbf0020
    ctx->pc = 0x1b7f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b7f4c:
    // 0x1b7f4c: 0x31c3f
    ctx->pc = 0x1b7f4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b7f50:
    // 0x1b7f50: 0x7fb10010
    ctx->pc = 0x1b7f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b7f54:
    // 0x1b7f54: 0x3c020031
    ctx->pc = 0x1b7f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_1b7f58:
    // 0x1b7f58: 0x7fb00000
    ctx->pc = 0x1b7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b7f5c:
    // 0x1b7f5c: 0x24426350
    ctx->pc = 0x1b7f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25424));
label_1b7f60:
    // 0x1b7f60: 0x31940
    ctx->pc = 0x1b7f60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_1b7f64:
    // 0x1b7f64: 0x438021
    ctx->pc = 0x1b7f64u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b7f68:
    // 0x1b7f68: 0x8e020014
    ctx->pc = 0x1b7f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b7f6c:
    // 0x1b7f6c: 0x10400003
label_1b7f70:
    if (ctx->pc == 0x1B7F70u) {
        ctx->pc = 0x1B7F70u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F74u;
        goto label_1b7f74;
    }
    ctx->pc = 0x1B7F6Cu;
    {
        const bool branch_taken_0x1b7f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7F70u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f6c) {
            ctx->pc = 0x1B7F7Cu;
            goto label_1b7f7c;
        }
    }
    ctx->pc = 0x1B7F74u;
label_1b7f74:
    // 0x1b7f74: 0x40f809
label_1b7f78:
    if (ctx->pc == 0x1B7F78u) {
        ctx->pc = 0x1B7F7Cu;
        goto label_1b7f7c;
    }
    ctx->pc = 0x1B7F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7F7Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F44u: goto label_1b7f44;
            case 0x1B7F48u: goto label_1b7f48;
            case 0x1B7F4Cu: goto label_1b7f4c;
            case 0x1B7F50u: goto label_1b7f50;
            case 0x1B7F54u: goto label_1b7f54;
            case 0x1B7F58u: goto label_1b7f58;
            case 0x1B7F5Cu: goto label_1b7f5c;
            case 0x1B7F60u: goto label_1b7f60;
            case 0x1B7F64u: goto label_1b7f64;
            case 0x1B7F68u: goto label_1b7f68;
            case 0x1B7F6Cu: goto label_1b7f6c;
            case 0x1B7F70u: goto label_1b7f70;
            case 0x1B7F74u: goto label_1b7f74;
            case 0x1B7F78u: goto label_1b7f78;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7F80u: goto label_1b7f80;
            case 0x1B7F84u: goto label_1b7f84;
            case 0x1B7F88u: goto label_1b7f88;
            case 0x1B7F8Cu: goto label_1b7f8c;
            case 0x1B7F90u: goto label_1b7f90;
            case 0x1B7F94u: goto label_1b7f94;
            case 0x1B7F98u: goto label_1b7f98;
            case 0x1B7F9Cu: goto label_1b7f9c;
            case 0x1B7FA0u: goto label_1b7fa0;
            case 0x1B7FA4u: goto label_1b7fa4;
            case 0x1B7FA8u: goto label_1b7fa8;
            case 0x1B7FACu: goto label_1b7fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F7Cu; }
            if (ctx->pc != 0x1B7F7Cu) { return; }
        }
    }
    ctx->pc = 0x1B7F7Cu;
label_1b7f7c:
    // 0x1b7f7c: 0x200202d
    ctx->pc = 0x1b7f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f80:
    // 0x1b7f80: 0x282d
    ctx->pc = 0x1b7f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f84:
    // 0x1b7f84: 0xc041f1a
label_1b7f88:
    if (ctx->pc == 0x1B7F88u) {
        ctx->pc = 0x1B7F88u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B7F8Cu;
        goto label_1b7f8c;
    }
    ctx->pc = 0x1B7F84u;
    SET_GPR_U32(ctx, 31, 0x1B7F8Cu);
    ctx->pc = 0x1B7F88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F8Cu; }
    }
    if (ctx->pc != 0x1B7F8Cu) { return; }
    ctx->pc = 0x1B7F8Cu;
label_1b7f8c:
    // 0x1b7f8c: 0xae110004
    ctx->pc = 0x1b7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1b7f90:
    // 0x1b7f90: 0x24030004
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1b7f94:
    // 0x1b7f94: 0xa6030000
    ctx->pc = 0x1b7f94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1b7f98:
    // 0x1b7f98: 0xdfbf0020
    ctx->pc = 0x1b7f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7f9c:
    // 0x1b7f9c: 0x7bb10010
    ctx->pc = 0x1b7f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7fa0:
    // 0x1b7fa0: 0x7bb00000
    ctx->pc = 0x1b7fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7fa4:
    // 0x1b7fa4: 0x3e00008
label_1b7fa8:
    if (ctx->pc == 0x1B7FA8u) {
        ctx->pc = 0x1B7FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B7FACu;
        goto label_1b7fac;
    }
    ctx->pc = 0x1B7FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F44u: goto label_1b7f44;
            case 0x1B7F48u: goto label_1b7f48;
            case 0x1B7F4Cu: goto label_1b7f4c;
            case 0x1B7F50u: goto label_1b7f50;
            case 0x1B7F54u: goto label_1b7f54;
            case 0x1B7F58u: goto label_1b7f58;
            case 0x1B7F5Cu: goto label_1b7f5c;
            case 0x1B7F60u: goto label_1b7f60;
            case 0x1B7F64u: goto label_1b7f64;
            case 0x1B7F68u: goto label_1b7f68;
            case 0x1B7F6Cu: goto label_1b7f6c;
            case 0x1B7F70u: goto label_1b7f70;
            case 0x1B7F74u: goto label_1b7f74;
            case 0x1B7F78u: goto label_1b7f78;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7F80u: goto label_1b7f80;
            case 0x1B7F84u: goto label_1b7f84;
            case 0x1B7F88u: goto label_1b7f88;
            case 0x1B7F8Cu: goto label_1b7f8c;
            case 0x1B7F90u: goto label_1b7f90;
            case 0x1B7F94u: goto label_1b7f94;
            case 0x1B7F98u: goto label_1b7f98;
            case 0x1B7F9Cu: goto label_1b7f9c;
            case 0x1B7FA0u: goto label_1b7fa0;
            case 0x1B7FA4u: goto label_1b7fa4;
            case 0x1B7FA8u: goto label_1b7fa8;
            case 0x1B7FACu: goto label_1b7fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7FACu;
label_1b7fac:
    // 0x1b7fac: 0x0
    ctx->pc = 0x1b7facu;
    // NOP
}
