#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135EF0
// Address: 0x135ef0 - 0x135f50
void sub_00135EF0_0x135ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135ef0u;

label_135ef0:
    // 0x135ef0: 0x27bdffe0
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_135ef4:
    // 0x135ef4: 0x3c020026
    ctx->pc = 0x135ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_135ef8:
    // 0x135ef8: 0xffbf0010
    ctx->pc = 0x135ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_135efc:
    // 0x135efc: 0xffb00000
    ctx->pc = 0x135efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135f00:
    // 0x135f00: 0x24502068
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 8296));
label_135f04:
    // 0x135f04: 0xffb10008
    ctx->pc = 0x135f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135f08:
    // 0x135f08: 0x2411001f
    ctx->pc = 0x135f08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 31));
label_135f0c:
    // 0x135f0c: 0x8e020000
    ctx->pc = 0x135f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_135f10:
    // 0x135f10: 0x10400006
label_135f14:
    if (ctx->pc == 0x135F14u) {
        ctx->pc = 0x135F14u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x135F18u;
        goto label_135f18;
    }
    ctx->pc = 0x135F10u;
    {
        const bool branch_taken_0x135f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x135F14u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x135f10) {
            ctx->pc = 0x135F2Cu;
            goto label_135f2c;
        }
    }
    ctx->pc = 0x135F18u;
label_135f18:
    // 0x135f18: 0x8c420000
    ctx->pc = 0x135f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135f1c:
    // 0x135f1c: 0x50400004
label_135f20:
    if (ctx->pc == 0x135F20u) {
        ctx->pc = 0x135F20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x135F24u;
        goto label_135f24;
    }
    ctx->pc = 0x135F1Cu;
    {
        const bool branch_taken_0x135f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x135f1c) {
            ctx->pc = 0x135F20u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x135F30u;
            goto label_135f30;
        }
    }
    ctx->pc = 0x135F24u;
label_135f24:
    // 0x135f24: 0x40f809
label_135f28:
    if (ctx->pc == 0x135F28u) {
        ctx->pc = 0x135F2Cu;
        goto label_135f2c;
    }
    ctx->pc = 0x135F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135F2Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135EF0u: goto label_135ef0;
            case 0x135EF4u: goto label_135ef4;
            case 0x135EF8u: goto label_135ef8;
            case 0x135EFCu: goto label_135efc;
            case 0x135F00u: goto label_135f00;
            case 0x135F04u: goto label_135f04;
            case 0x135F08u: goto label_135f08;
            case 0x135F0Cu: goto label_135f0c;
            case 0x135F10u: goto label_135f10;
            case 0x135F14u: goto label_135f14;
            case 0x135F18u: goto label_135f18;
            case 0x135F1Cu: goto label_135f1c;
            case 0x135F20u: goto label_135f20;
            case 0x135F24u: goto label_135f24;
            case 0x135F28u: goto label_135f28;
            case 0x135F2Cu: goto label_135f2c;
            case 0x135F30u: goto label_135f30;
            case 0x135F34u: goto label_135f34;
            case 0x135F38u: goto label_135f38;
            case 0x135F3Cu: goto label_135f3c;
            case 0x135F40u: goto label_135f40;
            case 0x135F44u: goto label_135f44;
            case 0x135F48u: goto label_135f48;
            case 0x135F4Cu: goto label_135f4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135F2Cu; }
            if (ctx->pc != 0x135F2Cu) { return; }
        }
    }
    ctx->pc = 0x135F2Cu;
label_135f2c:
    // 0x135f2c: 0x2631ffff
    ctx->pc = 0x135f2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_135f30:
    // 0x135f30: 0x623fff7
label_135f34:
    if (ctx->pc == 0x135F34u) {
        ctx->pc = 0x135F34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x135F38u;
        goto label_135f38;
    }
    ctx->pc = 0x135F30u;
    {
        const bool branch_taken_0x135f30 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x135f30) {
            ctx->pc = 0x135F34u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x135F10u;
            goto label_135f10;
        }
    }
    ctx->pc = 0x135F38u;
label_135f38:
    // 0x135f38: 0xdfb00000
    ctx->pc = 0x135f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135f3c:
    // 0x135f3c: 0xdfb10008
    ctx->pc = 0x135f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135f40:
    // 0x135f40: 0xdfbf0010
    ctx->pc = 0x135f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135f44:
    // 0x135f44: 0x3e00008
label_135f48:
    if (ctx->pc == 0x135F48u) {
        ctx->pc = 0x135F48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x135F4Cu;
        goto label_135f4c;
    }
    ctx->pc = 0x135F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135EF0u: goto label_135ef0;
            case 0x135EF4u: goto label_135ef4;
            case 0x135EF8u: goto label_135ef8;
            case 0x135EFCu: goto label_135efc;
            case 0x135F00u: goto label_135f00;
            case 0x135F04u: goto label_135f04;
            case 0x135F08u: goto label_135f08;
            case 0x135F0Cu: goto label_135f0c;
            case 0x135F10u: goto label_135f10;
            case 0x135F14u: goto label_135f14;
            case 0x135F18u: goto label_135f18;
            case 0x135F1Cu: goto label_135f1c;
            case 0x135F20u: goto label_135f20;
            case 0x135F24u: goto label_135f24;
            case 0x135F28u: goto label_135f28;
            case 0x135F2Cu: goto label_135f2c;
            case 0x135F30u: goto label_135f30;
            case 0x135F34u: goto label_135f34;
            case 0x135F38u: goto label_135f38;
            case 0x135F3Cu: goto label_135f3c;
            case 0x135F40u: goto label_135f40;
            case 0x135F44u: goto label_135f44;
            case 0x135F48u: goto label_135f48;
            case 0x135F4Cu: goto label_135f4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135F4Cu;
label_135f4c:
    // 0x135f4c: 0x0
    ctx->pc = 0x135f4cu;
    // NOP
}
