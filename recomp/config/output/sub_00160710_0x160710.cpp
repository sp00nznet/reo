#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160710
// Address: 0x160710 - 0x1607d8
void sub_00160710_0x160710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160710u;

    // 0x160710: 0x27bdffb0
    ctx->pc = 0x160710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x160714: 0xffb00040
    ctx->pc = 0x160714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x160718: 0xffbf0048
    ctx->pc = 0x160718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16071c: 0xc057ff0
    ctx->pc = 0x16071Cu;
    SET_GPR_U32(ctx, 31, 0x160724u);
    ctx->pc = 0x160720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160724u; }
    }
    if (ctx->pc != 0x160724u) { return; }
    ctx->pc = 0x160724u;
    // 0x160724: 0x3a0282d
    ctx->pc = 0x160724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160728: 0x14400007
    ctx->pc = 0x160728u;
    {
        const bool branch_taken_0x160728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16072Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160728) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x160730u;
    // 0x160730: 0x3c040024
    ctx->pc = 0x160730u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160734: 0xc058dd4
    ctx->pc = 0x160734u;
    SET_GPR_U32(ctx, 31, 0x16073Cu);
    ctx->pc = 0x160738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965112));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16073Cu; }
    }
    if (ctx->pc != 0x16073Cu) { return; }
    ctx->pc = 0x16073Cu;
    // 0x16073c: 0x10000005
    ctx->pc = 0x16073Cu;
    {
        const bool branch_taken_0x16073c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16073c) {
            ctx->pc = 0x160754u;
            goto label_160754;
        }
    }
    ctx->pc = 0x160744u;
    // 0x160744: 0x0
    ctx->pc = 0x160744u;
    // NOP
label_160748:
    // 0x160748: 0xc057fa2
    ctx->pc = 0x160748u;
    SET_GPR_U32(ctx, 31, 0x160750u);
    ctx->pc = 0x15FE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE88_0x15fe88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160750u; }
    }
    if (ctx->pc != 0x160750u) { return; }
    ctx->pc = 0x160750u;
    // 0x160750: 0x8fa20010
    ctx->pc = 0x160750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_160754:
    // 0x160754: 0xdfb00040
    ctx->pc = 0x160754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160758: 0xdfbf0048
    ctx->pc = 0x160758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16075c: 0x3e00008
    ctx->pc = 0x16075Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160748u: goto label_160748;
            case 0x160754u: goto label_160754;
            case 0x1607A8u: goto label_1607a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160764u;
    // 0x160764: 0x0
    ctx->pc = 0x160764u;
    // NOP
    // 0x160768: 0x27bdffe0
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16076c: 0xffb00000
    ctx->pc = 0x16076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160770: 0x80802d
    ctx->pc = 0x160770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160774: 0xffb10008
    ctx->pc = 0x160774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160778: 0xffbf0010
    ctx->pc = 0x160778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16077c: 0xc057ff0
    ctx->pc = 0x16077Cu;
    SET_GPR_U32(ctx, 31, 0x160784u);
    ctx->pc = 0x160780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160784u; }
    }
    if (ctx->pc != 0x160784u) { return; }
    ctx->pc = 0x160784u;
    // 0x160784: 0x14400008
    ctx->pc = 0x160784u;
    {
        const bool branch_taken_0x160784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160788u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160784) {
            ctx->pc = 0x1607A8u;
            goto label_1607a8;
        }
    }
    ctx->pc = 0x16078Cu;
    // 0x16078c: 0x3c040024
    ctx->pc = 0x16078cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160790: 0xdfb00000
    ctx->pc = 0x160790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160794: 0xdfb10008
    ctx->pc = 0x160794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160798: 0x2484f7b0
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965168));
    // 0x16079c: 0xdfbf0010
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1607a0: 0x8058dd4
    ctx->pc = 0x1607A0u;
    ctx->pc = 0x1607A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1607A8u;
label_1607a8:
    // 0x1607a8: 0xc057ec8
    ctx->pc = 0x1607A8u;
    SET_GPR_U32(ctx, 31, 0x1607B0u);
    ctx->pc = 0x15FB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FB20_0x15fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607B0u; }
    }
    if (ctx->pc != 0x1607B0u) { return; }
    ctx->pc = 0x1607B0u;
    // 0x1607b0: 0x3a260001
    ctx->pc = 0x1607b0u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 17), 1));
    // 0x1607b4: 0xdfb00000
    ctx->pc = 0x1607b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1607b8: 0x24050007
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1607bc: 0xdfb10008
    ctx->pc = 0x1607bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1607c0: 0x40202d
    ctx->pc = 0x1607c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607c4: 0xdfbf0010
    ctx->pc = 0x1607c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1607c8: 0x6302b
    ctx->pc = 0x1607c8u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1607cc: 0x805d4ce
    ctx->pc = 0x1607CCu;
    ctx->pc = 0x1607D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x1607D4u;
    // 0x1607d4: 0x0
    ctx->pc = 0x1607d4u;
    // NOP
}
