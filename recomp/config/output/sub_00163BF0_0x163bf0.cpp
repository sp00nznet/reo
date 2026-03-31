#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163BF0
// Address: 0x163bf0 - 0x163c78
void sub_00163BF0_0x163bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163bf0u;

    // 0x163bf0: 0x27bdffe0
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163bf4: 0x24030001
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163bf8: 0xffb00000
    ctx->pc = 0x163bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163bfc: 0x80802d
    ctx->pc = 0x163bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c00: 0xffb10008
    ctx->pc = 0x163c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163c04: 0xffbf0010
    ctx->pc = 0x163c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163c08: 0x82020071
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x163c0c: 0x1443000d
    ctx->pc = 0x163C0Cu;
    {
        const bool branch_taken_0x163c0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x163C10u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        if (branch_taken_0x163c0c) {
            ctx->pc = 0x163C44u;
            goto label_163c44;
        }
    }
    ctx->pc = 0x163C14u;
    // 0x163c14: 0xc04f434
    ctx->pc = 0x163C14u;
    SET_GPR_U32(ctx, 31, 0x163C1Cu);
    ctx->pc = 0x163C18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x13D0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D0D0_0x13d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C1Cu; }
    }
    if (ctx->pc != 0x163C1Cu) { return; }
    ctx->pc = 0x163C1Cu;
    // 0x163c1c: 0x14400009
    ctx->pc = 0x163C1Cu;
    {
        const bool branch_taken_0x163c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x163c1c) {
            ctx->pc = 0x163C44u;
            goto label_163c44;
        }
    }
    ctx->pc = 0x163C24u;
    // 0x163c24: 0xc05cfca
    ctx->pc = 0x163C24u;
    SET_GPR_U32(ctx, 31, 0x163C2Cu);
    ctx->pc = 0x163C28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173F28_0x173f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C2Cu; }
    }
    if (ctx->pc != 0x163C2Cu) { return; }
    ctx->pc = 0x163C2Cu;
    // 0x163c2c: 0x3c040024
    ctx->pc = 0x163c2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x163c30: 0x10400003
    ctx->pc = 0x163C30u;
    {
        const bool branch_taken_0x163c30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163C34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1280));
        if (branch_taken_0x163c30) {
            ctx->pc = 0x163C40u;
            goto label_163c40;
        }
    }
    ctx->pc = 0x163C38u;
    // 0x163c38: 0xc058dd4
    ctx->pc = 0x163C38u;
    SET_GPR_U32(ctx, 31, 0x163C40u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C40u; }
    }
    if (ctx->pc != 0x163C40u) { return; }
    ctx->pc = 0x163C40u;
label_163c40:
    // 0x163c40: 0xa2000071
    ctx->pc = 0x163c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_163c44:
    // 0x163c44: 0xc05d4be
    ctx->pc = 0x163C44u;
    SET_GPR_U32(ctx, 31, 0x163C4Cu);
    ctx->pc = 0x163C48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1752F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001752F8_0x1752f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C4Cu; }
    }
    if (ctx->pc != 0x163C4Cu) { return; }
    ctx->pc = 0x163C4Cu;
    // 0x163c4c: 0x24030006
    ctx->pc = 0x163c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x163c50: 0x54430004
    ctx->pc = 0x163C50u;
    {
        const bool branch_taken_0x163c50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163c50) {
            ctx->pc = 0x163C54u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163C64u;
            goto label_163c64;
        }
    }
    ctx->pc = 0x163C58u;
    // 0x163c58: 0x24020003
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x163c5c: 0xae020008
    ctx->pc = 0x163c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x163c60: 0xdfb00000
    ctx->pc = 0x163c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163c64:
    // 0x163c64: 0xdfb10008
    ctx->pc = 0x163c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163c68: 0xdfbf0010
    ctx->pc = 0x163c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163c6c: 0x3e00008
    ctx->pc = 0x163C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163C40u: goto label_163c40;
            case 0x163C44u: goto label_163c44;
            case 0x163C64u: goto label_163c64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163C74u;
    // 0x163c74: 0x0
    ctx->pc = 0x163c74u;
    // NOP
}
