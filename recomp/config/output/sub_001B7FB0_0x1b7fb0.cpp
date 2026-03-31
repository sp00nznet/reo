#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B7FB0
// Address: 0x1b7fb0 - 0x1b8010
void sub_001B7FB0_0x1b7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b7fb0u;

label_1b7fb0:
    // 0x1b7fb0: 0x4143c
    ctx->pc = 0x1b7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_1b7fb4:
    // 0x1b7fb4: 0x27bdffe0
    ctx->pc = 0x1b7fb4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b7fb8:
    // 0x1b7fb8: 0x2143f
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b7fbc:
    // 0x1b7fbc: 0xffbf0010
    ctx->pc = 0x1b7fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b7fc0:
    // 0x1b7fc0: 0x21940
    ctx->pc = 0x1b7fc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
label_1b7fc4:
    // 0x1b7fc4: 0x7fb00000
    ctx->pc = 0x1b7fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b7fc8:
    // 0x1b7fc8: 0x3c020031
    ctx->pc = 0x1b7fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_1b7fcc:
    // 0x1b7fcc: 0x24426350
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25424));
label_1b7fd0:
    // 0x1b7fd0: 0x438021
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b7fd4:
    // 0x1b7fd4: 0xa6000000
    ctx->pc = 0x1b7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1b7fd8:
    // 0x1b7fd8: 0x8e020014
    ctx->pc = 0x1b7fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b7fdc:
    // 0x1b7fdc: 0x10400003
label_1b7fe0:
    if (ctx->pc == 0x1B7FE0u) {
        ctx->pc = 0x1B7FE4u;
        goto label_1b7fe4;
    }
    ctx->pc = 0x1B7FDCu;
    {
        const bool branch_taken_0x1b7fdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b7fdc) {
            ctx->pc = 0x1B7FECu;
            goto label_1b7fec;
        }
    }
    ctx->pc = 0x1B7FE4u;
label_1b7fe4:
    // 0x1b7fe4: 0x40f809
label_1b7fe8:
    if (ctx->pc == 0x1B7FE8u) {
        ctx->pc = 0x1B7FECu;
        goto label_1b7fec;
    }
    ctx->pc = 0x1B7FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7FECu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7FB0u: goto label_1b7fb0;
            case 0x1B7FB4u: goto label_1b7fb4;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B7FBCu: goto label_1b7fbc;
            case 0x1B7FC0u: goto label_1b7fc0;
            case 0x1B7FC4u: goto label_1b7fc4;
            case 0x1B7FC8u: goto label_1b7fc8;
            case 0x1B7FCCu: goto label_1b7fcc;
            case 0x1B7FD0u: goto label_1b7fd0;
            case 0x1B7FD4u: goto label_1b7fd4;
            case 0x1B7FD8u: goto label_1b7fd8;
            case 0x1B7FDCu: goto label_1b7fdc;
            case 0x1B7FE0u: goto label_1b7fe0;
            case 0x1B7FE4u: goto label_1b7fe4;
            case 0x1B7FE8u: goto label_1b7fe8;
            case 0x1B7FECu: goto label_1b7fec;
            case 0x1B7FF0u: goto label_1b7ff0;
            case 0x1B7FF4u: goto label_1b7ff4;
            case 0x1B7FF8u: goto label_1b7ff8;
            case 0x1B7FFCu: goto label_1b7ffc;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8008u: goto label_1b8008;
            case 0x1B800Cu: goto label_1b800c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FECu; }
            if (ctx->pc != 0x1B7FECu) { return; }
        }
    }
    ctx->pc = 0x1B7FECu;
label_1b7fec:
    // 0x1b7fec: 0x200202d
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ff0:
    // 0x1b7ff0: 0x282d
    ctx->pc = 0x1b7ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ff4:
    // 0x1b7ff4: 0xc041f1a
label_1b7ff8:
    if (ctx->pc == 0x1B7FF8u) {
        ctx->pc = 0x1B7FF8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B7FFCu;
        goto label_1b7ffc;
    }
    ctx->pc = 0x1B7FF4u;
    SET_GPR_U32(ctx, 31, 0x1B7FFCu);
    ctx->pc = 0x1B7FF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FFCu; }
    }
    if (ctx->pc != 0x1B7FFCu) { return; }
    ctx->pc = 0x1B7FFCu;
label_1b7ffc:
    // 0x1b7ffc: 0xdfbf0010
    ctx->pc = 0x1b7ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8000:
    // 0x1b8000: 0x7bb00000
    ctx->pc = 0x1b8000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8004:
    // 0x1b8004: 0x3e00008
label_1b8008:
    if (ctx->pc == 0x1B8008u) {
        ctx->pc = 0x1B8008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B800Cu;
        goto label_1b800c;
    }
    ctx->pc = 0x1B8004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7FB0u: goto label_1b7fb0;
            case 0x1B7FB4u: goto label_1b7fb4;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B7FBCu: goto label_1b7fbc;
            case 0x1B7FC0u: goto label_1b7fc0;
            case 0x1B7FC4u: goto label_1b7fc4;
            case 0x1B7FC8u: goto label_1b7fc8;
            case 0x1B7FCCu: goto label_1b7fcc;
            case 0x1B7FD0u: goto label_1b7fd0;
            case 0x1B7FD4u: goto label_1b7fd4;
            case 0x1B7FD8u: goto label_1b7fd8;
            case 0x1B7FDCu: goto label_1b7fdc;
            case 0x1B7FE0u: goto label_1b7fe0;
            case 0x1B7FE4u: goto label_1b7fe4;
            case 0x1B7FE8u: goto label_1b7fe8;
            case 0x1B7FECu: goto label_1b7fec;
            case 0x1B7FF0u: goto label_1b7ff0;
            case 0x1B7FF4u: goto label_1b7ff4;
            case 0x1B7FF8u: goto label_1b7ff8;
            case 0x1B7FFCu: goto label_1b7ffc;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8008u: goto label_1b8008;
            case 0x1B800Cu: goto label_1b800c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B800Cu;
label_1b800c:
    // 0x1b800c: 0x0
    ctx->pc = 0x1b800cu;
    // NOP
}
