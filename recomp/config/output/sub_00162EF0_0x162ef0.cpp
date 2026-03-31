#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162EF0
// Address: 0x162ef0 - 0x162f48
void sub_00162EF0_0x162ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162ef0u;

label_162ef0:
    // 0x162ef0: 0x27bdfff0
    ctx->pc = 0x162ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_162ef4:
    // 0x162ef4: 0xffb00000
    ctx->pc = 0x162ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162ef8:
    // 0x162ef8: 0xffbf0008
    ctx->pc = 0x162ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_162efc:
    // 0x162efc: 0xc058d10
label_162f00:
    if (ctx->pc == 0x162F00u) {
        ctx->pc = 0x162F00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162F04u;
        goto label_162f04;
    }
    ctx->pc = 0x162EFCu;
    SET_GPR_U32(ctx, 31, 0x162F04u);
    ctx->pc = 0x162F00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F04u; }
    }
    if (ctx->pc != 0x162F04u) { return; }
    ctx->pc = 0x162F04u;
label_162f04:
    // 0x162f04: 0x24030001
    ctx->pc = 0x162f04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_162f08:
    // 0x162f08: 0x5443000c
label_162f0c:
    if (ctx->pc == 0x162F0Cu) {
        ctx->pc = 0x162F0Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162F10u;
        goto label_162f10;
    }
    ctx->pc = 0x162F08u;
    {
        const bool branch_taken_0x162f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x162f08) {
            ctx->pc = 0x162F0Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162F10u;
label_162f10:
    // 0x162f10: 0xc058d08
label_162f14:
    if (ctx->pc == 0x162F14u) {
        ctx->pc = 0x162F18u;
        goto label_162f18;
    }
    ctx->pc = 0x162F10u;
    SET_GPR_U32(ctx, 31, 0x162F18u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F18u; }
    }
    if (ctx->pc != 0x162F18u) { return; }
    ctx->pc = 0x162F18u;
label_162f18:
    // 0x162f18: 0x8e05000c
    ctx->pc = 0x162f18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_162f1c:
    // 0x162f1c: 0x10400006
label_162f20:
    if (ctx->pc == 0x162F20u) {
        ctx->pc = 0x162F20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x162F24u;
        goto label_162f24;
    }
    ctx->pc = 0x162F1Cu;
    {
        const bool branch_taken_0x162f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162F20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x162f1c) {
            ctx->pc = 0x162F38u;
            goto label_162f38;
        }
    }
    ctx->pc = 0x162F24u;
label_162f24:
    // 0x162f24: 0x8c420014
    ctx->pc = 0x162f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_162f28:
    // 0x162f28: 0x50400004
label_162f2c:
    if (ctx->pc == 0x162F2Cu) {
        ctx->pc = 0x162F2Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162F30u;
        goto label_162f30;
    }
    ctx->pc = 0x162F28u;
    {
        const bool branch_taken_0x162f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162f28) {
            ctx->pc = 0x162F2Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162F30u;
label_162f30:
    // 0x162f30: 0x40f809
label_162f34:
    if (ctx->pc == 0x162F34u) {
        ctx->pc = 0x162F38u;
        goto label_162f38;
    }
    ctx->pc = 0x162F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162F38u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162EF0u: goto label_162ef0;
            case 0x162EF4u: goto label_162ef4;
            case 0x162EF8u: goto label_162ef8;
            case 0x162EFCu: goto label_162efc;
            case 0x162F00u: goto label_162f00;
            case 0x162F04u: goto label_162f04;
            case 0x162F08u: goto label_162f08;
            case 0x162F0Cu: goto label_162f0c;
            case 0x162F10u: goto label_162f10;
            case 0x162F14u: goto label_162f14;
            case 0x162F18u: goto label_162f18;
            case 0x162F1Cu: goto label_162f1c;
            case 0x162F20u: goto label_162f20;
            case 0x162F24u: goto label_162f24;
            case 0x162F28u: goto label_162f28;
            case 0x162F2Cu: goto label_162f2c;
            case 0x162F30u: goto label_162f30;
            case 0x162F34u: goto label_162f34;
            case 0x162F38u: goto label_162f38;
            case 0x162F3Cu: goto label_162f3c;
            case 0x162F40u: goto label_162f40;
            case 0x162F44u: goto label_162f44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162F38u; }
            if (ctx->pc != 0x162F38u) { return; }
        }
    }
    ctx->pc = 0x162F38u;
label_162f38:
    // 0x162f38: 0xdfb00000
    ctx->pc = 0x162f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162f3c:
    // 0x162f3c: 0xdfbf0008
    ctx->pc = 0x162f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162f40:
    // 0x162f40: 0x3e00008
label_162f44:
    if (ctx->pc == 0x162F44u) {
        ctx->pc = 0x162F44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162F48u;
        goto label_fallthrough_0x162f40;
    }
    ctx->pc = 0x162F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162EF0u: goto label_162ef0;
            case 0x162EF4u: goto label_162ef4;
            case 0x162EF8u: goto label_162ef8;
            case 0x162EFCu: goto label_162efc;
            case 0x162F00u: goto label_162f00;
            case 0x162F04u: goto label_162f04;
            case 0x162F08u: goto label_162f08;
            case 0x162F0Cu: goto label_162f0c;
            case 0x162F10u: goto label_162f10;
            case 0x162F14u: goto label_162f14;
            case 0x162F18u: goto label_162f18;
            case 0x162F1Cu: goto label_162f1c;
            case 0x162F20u: goto label_162f20;
            case 0x162F24u: goto label_162f24;
            case 0x162F28u: goto label_162f28;
            case 0x162F2Cu: goto label_162f2c;
            case 0x162F30u: goto label_162f30;
            case 0x162F34u: goto label_162f34;
            case 0x162F38u: goto label_162f38;
            case 0x162F3Cu: goto label_162f3c;
            case 0x162F40u: goto label_162f40;
            case 0x162F44u: goto label_162f44;
            default: break;
        }
        return;
    }
label_fallthrough_0x162f40:
    ctx->pc = 0x162F48u;
}
