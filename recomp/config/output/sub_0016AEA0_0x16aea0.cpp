#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016AEA0
// Address: 0x16aea0 - 0x16afc8
void sub_0016AEA0_0x16aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16aea0u;

    // 0x16aea0: 0x27bdff80
    ctx->pc = 0x16aea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16aea4: 0xffb20040
    ctx->pc = 0x16aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16aea8: 0xc0902d
    ctx->pc = 0x16aea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeac: 0x3a0302d
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeb0: 0xffb10038
    ctx->pc = 0x16aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16aeb4: 0xffb60060
    ctx->pc = 0x16aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16aeb8: 0x80b02d
    ctx->pc = 0x16aeb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aebc: 0xffb70068
    ctx->pc = 0x16aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x16aec0: 0xa0b82d
    ctx->pc = 0x16aec0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aec4: 0xffbe0070
    ctx->pc = 0x16aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x16aec8: 0x100f02d
    ctx->pc = 0x16aec8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aecc: 0xffb00030
    ctx->pc = 0x16aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16aed0: 0xffb30048
    ctx->pc = 0x16aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x16aed4: 0xffb40050
    ctx->pc = 0x16aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16aed8: 0xffb50058
    ctx->pc = 0x16aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x16aedc: 0xffbf0078
    ctx->pc = 0x16aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x16aee0: 0xc059bf4
    ctx->pc = 0x16AEE0u;
    SET_GPR_U32(ctx, 31, 0x16AEE8u);
    ctx->pc = 0x16AEE4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FD0_0x166fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE8u; }
    }
    if (ctx->pc != 0x16AEE8u) { return; }
    ctx->pc = 0x16AEE8u;
    // 0x16aee8: 0x1440002b
    ctx->pc = 0x16AEE8u;
    {
        const bool branch_taken_0x16aee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AEECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x16aee8) {
            ctx->pc = 0x16AF98u;
            goto label_16af98;
        }
    }
    ctx->pc = 0x16AEF0u;
    // 0x16aef0: 0x8fb00004
    ctx->pc = 0x16aef0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16aef4: 0x8fa3000c
    ctx->pc = 0x16aef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16aef8: 0x8fb30000
    ctx->pc = 0x16aef8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aefc: 0x211202a
    ctx->pc = 0x16aefcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x16af00: 0x2031821
    ctx->pc = 0x16af00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16af04: 0x8fb40008
    ctx->pc = 0x16af04u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16af08: 0x71182a
    ctx->pc = 0x16af08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x16af0c: 0x14600021
    ctx->pc = 0x16AF0Cu;
    {
        const bool branch_taken_0x16af0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AF10u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x16af0c) {
            ctx->pc = 0x16AF94u;
            goto label_16af94;
        }
    }
    ctx->pc = 0x16AF14u;
    // 0x16af14: 0x14800006
    ctx->pc = 0x16AF14u;
    {
        const bool branch_taken_0x16af14 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AF18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16af14) {
            ctx->pc = 0x16AF30u;
            goto label_16af30;
        }
    }
    ctx->pc = 0x16AF1Cu;
    // 0x16af1c: 0x260202d
    ctx->pc = 0x16af1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af20: 0xc055798
    ctx->pc = 0x16AF20u;
    SET_GPR_U32(ctx, 31, 0x16AF28u);
    ctx->pc = 0x16AF24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF28u; }
    }
    if (ctx->pc != 0x16AF28u) { return; }
    ctx->pc = 0x16AF28u;
    // 0x16af28: 0x10000009
    ctx->pc = 0x16AF28u;
    {
        const bool branch_taken_0x16af28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AF2Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16af28) {
            ctx->pc = 0x16AF50u;
            goto label_16af50;
        }
    }
    ctx->pc = 0x16AF30u;
label_16af30:
    // 0x16af30: 0x200302d
    ctx->pc = 0x16af30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af34: 0xc055798
    ctx->pc = 0x16AF34u;
    SET_GPR_U32(ctx, 31, 0x16AF3Cu);
    ctx->pc = 0x16AF38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF3Cu; }
    }
    if (ctx->pc != 0x16AF3Cu) { return; }
    ctx->pc = 0x16AF3Cu;
    // 0x16af3c: 0x280202d
    ctx->pc = 0x16af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af40: 0x2502821
    ctx->pc = 0x16af40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x16af44: 0xc055798
    ctx->pc = 0x16AF44u;
    SET_GPR_U32(ctx, 31, 0x16AF4Cu);
    ctx->pc = 0x16AF48u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF4Cu; }
    }
    if (ctx->pc != 0x16AF4Cu) { return; }
    ctx->pc = 0x16AF4Cu;
    // 0x16af4c: 0x2a0382d
    ctx->pc = 0x16af4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16af50:
    // 0x16af50: 0x2c0202d
    ctx->pc = 0x16af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af54: 0x2e0282d
    ctx->pc = 0x16af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af58: 0xc059c32
    ctx->pc = 0x16AF58u;
    SET_GPR_U32(ctx, 31, 0x16AF60u);
    ctx->pc = 0x16AF5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1670C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001670C8_0x1670c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF60u; }
    }
    if (ctx->pc != 0x16AF60u) { return; }
    ctx->pc = 0x16AF60u;
    // 0x16af60: 0x5440000d
    ctx->pc = 0x16AF60u;
    {
        const bool branch_taken_0x16af60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16af60) {
            ctx->pc = 0x16AF64u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x16AF98u;
            goto label_16af98;
        }
    }
    ctx->pc = 0x16AF68u;
    // 0x16af68: 0x7c00009
    ctx->pc = 0x16AF68u;
    {
        const bool branch_taken_0x16af68 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x16AF6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16af68) {
            ctx->pc = 0x16AF90u;
            goto label_16af90;
        }
    }
    ctx->pc = 0x16AF70u;
    // 0x16af70: 0x2e0282d
    ctx->pc = 0x16af70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af74: 0x27a60020
    ctx->pc = 0x16af74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16af78: 0xafbe0020
    ctx->pc = 0x16af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x16af7c: 0xafb30024
    ctx->pc = 0x16af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x16af80: 0xc05d086
    ctx->pc = 0x16AF80u;
    SET_GPR_U32(ctx, 31, 0x16AF88u);
    ctx->pc = 0x16AF84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    ctx->pc = 0x174218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174218_0x174218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF88u; }
    }
    if (ctx->pc != 0x16AF88u) { return; }
    ctx->pc = 0x16AF88u;
    // 0x16af88: 0x14400003
    ctx->pc = 0x16AF88u;
    {
        const bool branch_taken_0x16af88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AF8Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x16af88) {
            ctx->pc = 0x16AF98u;
            goto label_16af98;
        }
    }
    ctx->pc = 0x16AF90u;
label_16af90:
    // 0x16af90: 0x24020001
    ctx->pc = 0x16af90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16af94:
    // 0x16af94: 0xdfb00030
    ctx->pc = 0x16af94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16af98:
    // 0x16af98: 0xdfb10038
    ctx->pc = 0x16af98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16af9c: 0xdfb20040
    ctx->pc = 0x16af9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16afa0: 0xdfb30048
    ctx->pc = 0x16afa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16afa4: 0xdfb40050
    ctx->pc = 0x16afa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16afa8: 0xdfb50058
    ctx->pc = 0x16afa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16afac: 0xdfb60060
    ctx->pc = 0x16afacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16afb0: 0xdfb70068
    ctx->pc = 0x16afb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16afb4: 0xdfbe0070
    ctx->pc = 0x16afb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16afb8: 0xdfbf0078
    ctx->pc = 0x16afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16afbc: 0x3e00008
    ctx->pc = 0x16AFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AF30u: goto label_16af30;
            case 0x16AF50u: goto label_16af50;
            case 0x16AF90u: goto label_16af90;
            case 0x16AF94u: goto label_16af94;
            case 0x16AF98u: goto label_16af98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AFC4u;
    // 0x16afc4: 0x0
    ctx->pc = 0x16afc4u;
    // NOP
}
