#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FC18
// Address: 0x15fc18 - 0x15fe88
void sub_0015FC18_0x15fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fc18u;

    // 0x15fc18: 0x27bdffb0
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15fc1c: 0xffb00040
    ctx->pc = 0x15fc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x15fc20: 0xffbf0048
    ctx->pc = 0x15fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15fc24: 0xc057ff0
    ctx->pc = 0x15FC24u;
    SET_GPR_U32(ctx, 31, 0x15FC2Cu);
    ctx->pc = 0x15FC28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC2Cu; }
    }
    if (ctx->pc != 0x15FC2Cu) { return; }
    ctx->pc = 0x15FC2Cu;
    // 0x15fc2c: 0x14400006
    ctx->pc = 0x15FC2Cu;
    {
        const bool branch_taken_0x15fc2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FC30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fc2c) {
            ctx->pc = 0x15FC48u;
            goto label_15fc48;
        }
    }
    ctx->pc = 0x15FC34u;
    // 0x15fc34: 0x3c040024
    ctx->pc = 0x15fc34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fc38: 0xc058dd4
    ctx->pc = 0x15FC38u;
    SET_GPR_U32(ctx, 31, 0x15FC40u);
    ctx->pc = 0x15FC3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964072));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC40u; }
    }
    if (ctx->pc != 0x15FC40u) { return; }
    ctx->pc = 0x15FC40u;
    // 0x15fc40: 0x10000009
    ctx->pc = 0x15FC40u;
    {
        const bool branch_taken_0x15fc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FC44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fc40) {
            ctx->pc = 0x15FC68u;
            goto label_15fc68;
        }
    }
    ctx->pc = 0x15FC48u;
label_15fc48:
    // 0x15fc48: 0xc057ec8
    ctx->pc = 0x15FC48u;
    SET_GPR_U32(ctx, 31, 0x15FC50u);
    ctx->pc = 0x15FB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FB20_0x15fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC50u; }
    }
    if (ctx->pc != 0x15FC50u) { return; }
    ctx->pc = 0x15FC50u;
    // 0x15fc50: 0x40202d
    ctx->pc = 0x15fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc54: 0xc05d5c4
    ctx->pc = 0x15FC54u;
    SET_GPR_U32(ctx, 31, 0x15FC5Cu);
    ctx->pc = 0x15FC58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175710_0x175710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC5Cu; }
    }
    if (ctx->pc != 0x15FC5Cu) { return; }
    ctx->pc = 0x15FC5Cu;
    // 0x15fc5c: 0x8fa30004
    ctx->pc = 0x15fc5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15fc60: 0x8fa20010
    ctx->pc = 0x15fc60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fc64: 0x621023
    ctx->pc = 0x15fc64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15fc68:
    // 0x15fc68: 0xdfb00040
    ctx->pc = 0x15fc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fc6c: 0xdfbf0048
    ctx->pc = 0x15fc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15fc70: 0x3e00008
    ctx->pc = 0x15FC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FC48u: goto label_15fc48;
            case 0x15FC68u: goto label_15fc68;
            case 0x15FCC0u: goto label_15fcc0;
            case 0x15FD18u: goto label_15fd18;
            case 0x15FD40u: goto label_15fd40;
            case 0x15FD90u: goto label_15fd90;
            case 0x15FD9Cu: goto label_15fd9c;
            case 0x15FDF0u: goto label_15fdf0;
            case 0x15FE18u: goto label_15fe18;
            case 0x15FE68u: goto label_15fe68;
            case 0x15FE74u: goto label_15fe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FC78u;
    // 0x15fc78: 0x27bdffe0
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fc7c: 0xffb00000
    ctx->pc = 0x15fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fc80: 0xa0802d
    ctx->pc = 0x15fc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc84: 0xffb10008
    ctx->pc = 0x15fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15fc88: 0xffbf0010
    ctx->pc = 0x15fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fc8c: 0xc057ff0
    ctx->pc = 0x15FC8Cu;
    SET_GPR_U32(ctx, 31, 0x15FC94u);
    ctx->pc = 0x15FC90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC94u; }
    }
    if (ctx->pc != 0x15FC94u) { return; }
    ctx->pc = 0x15FC94u;
    // 0x15fc94: 0x3a100001
    ctx->pc = 0x15fc94u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 16), 1));
    // 0x15fc98: 0x3c040024
    ctx->pc = 0x15fc98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fc9c: 0x2484f3a0
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964128));
    // 0x15fca0: 0x10302b
    ctx->pc = 0x15fca0u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x15fca4: 0x14400006
    ctx->pc = 0x15FCA4u;
    {
        const bool branch_taken_0x15fca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FCA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x15fca4) {
            ctx->pc = 0x15FCC0u;
            goto label_15fcc0;
        }
    }
    ctx->pc = 0x15FCACu;
    // 0x15fcac: 0xdfb00000
    ctx->pc = 0x15fcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fcb0: 0xdfb10008
    ctx->pc = 0x15fcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fcb4: 0xdfbf0010
    ctx->pc = 0x15fcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fcb8: 0x8058dd4
    ctx->pc = 0x15FCB8u;
    ctx->pc = 0x15FCBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FCC0u;
label_15fcc0:
    // 0x15fcc0: 0x8e240040
    ctx->pc = 0x15fcc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15fcc4: 0xdfb00000
    ctx->pc = 0x15fcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fcc8: 0xdfb10008
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fccc: 0xdfbf0010
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fcd0: 0x805d4ce
    ctx->pc = 0x15FCD0u;
    ctx->pc = 0x15FCD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x15FCD8u;
    // 0x15fcd8: 0x27bdffe0
    ctx->pc = 0x15fcd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fcdc: 0xffb00000
    ctx->pc = 0x15fcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fce0: 0xa0802d
    ctx->pc = 0x15fce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fce4: 0xffb10008
    ctx->pc = 0x15fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15fce8: 0xffbf0010
    ctx->pc = 0x15fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fcec: 0xc057ff0
    ctx->pc = 0x15FCECu;
    SET_GPR_U32(ctx, 31, 0x15FCF4u);
    ctx->pc = 0x15FCF0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCF4u; }
    }
    if (ctx->pc != 0x15FCF4u) { return; }
    ctx->pc = 0x15FCF4u;
    // 0x15fcf4: 0x3c040024
    ctx->pc = 0x15fcf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fcf8: 0x200282d
    ctx->pc = 0x15fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcfc: 0x14400006
    ctx->pc = 0x15FCFCu;
    {
        const bool branch_taken_0x15fcfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FD00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964176));
        if (branch_taken_0x15fcfc) {
            ctx->pc = 0x15FD18u;
            goto label_15fd18;
        }
    }
    ctx->pc = 0x15FD04u;
    // 0x15fd04: 0xdfb00000
    ctx->pc = 0x15fd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fd08: 0xdfb10008
    ctx->pc = 0x15fd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fd0c: 0xdfbf0010
    ctx->pc = 0x15fd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fd10: 0x8058dd4
    ctx->pc = 0x15FD10u;
    ctx->pc = 0x15FD14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FD18u;
label_15fd18:
    // 0x15fd18: 0xc05c8d0
    ctx->pc = 0x15FD18u;
    SET_GPR_U32(ctx, 31, 0x15FD20u);
    ctx->pc = 0x15FD1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x172340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172340_0x172340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD20u; }
    }
    if (ctx->pc != 0x15FD20u) { return; }
    ctx->pc = 0x15FD20u;
    // 0x15fd20: 0x3c040024
    ctx->pc = 0x15fd20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fd24: 0x10400006
    ctx->pc = 0x15FD24u;
    {
        const bool branch_taken_0x15fd24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FD28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964224));
        if (branch_taken_0x15fd24) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FD2Cu;
    // 0x15fd2c: 0xdfb00000
    ctx->pc = 0x15fd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fd30: 0xdfb10008
    ctx->pc = 0x15fd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fd34: 0xdfbf0010
    ctx->pc = 0x15fd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fd38: 0x8058dd4
    ctx->pc = 0x15FD38u;
    ctx->pc = 0x15FD3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FD40u;
label_15fd40:
    // 0x15fd40: 0xdfb00000
    ctx->pc = 0x15fd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fd44: 0xdfb10008
    ctx->pc = 0x15fd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fd48: 0xdfbf0010
    ctx->pc = 0x15fd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fd4c: 0x3e00008
    ctx->pc = 0x15FD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FC48u: goto label_15fc48;
            case 0x15FC68u: goto label_15fc68;
            case 0x15FCC0u: goto label_15fcc0;
            case 0x15FD18u: goto label_15fd18;
            case 0x15FD40u: goto label_15fd40;
            case 0x15FD90u: goto label_15fd90;
            case 0x15FD9Cu: goto label_15fd9c;
            case 0x15FDF0u: goto label_15fdf0;
            case 0x15FE18u: goto label_15fe18;
            case 0x15FE68u: goto label_15fe68;
            case 0x15FE74u: goto label_15fe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FD54u;
    // 0x15fd54: 0x0
    ctx->pc = 0x15fd54u;
    // NOP
    // 0x15fd58: 0x27bdffb0
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15fd5c: 0xffb00040
    ctx->pc = 0x15fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x15fd60: 0xffbf0048
    ctx->pc = 0x15fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15fd64: 0xc057ff0
    ctx->pc = 0x15FD64u;
    SET_GPR_U32(ctx, 31, 0x15FD6Cu);
    ctx->pc = 0x15FD68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD6Cu; }
    }
    if (ctx->pc != 0x15FD6Cu) { return; }
    ctx->pc = 0x15FD6Cu;
    // 0x15fd6c: 0x3a0282d
    ctx->pc = 0x15fd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd70: 0x14400007
    ctx->pc = 0x15FD70u;
    {
        const bool branch_taken_0x15fd70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FD74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fd70) {
            ctx->pc = 0x15FD90u;
            goto label_15fd90;
        }
    }
    ctx->pc = 0x15FD78u;
    // 0x15fd78: 0x3c040024
    ctx->pc = 0x15fd78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fd7c: 0xc058dd4
    ctx->pc = 0x15FD7Cu;
    SET_GPR_U32(ctx, 31, 0x15FD84u);
    ctx->pc = 0x15FD80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964264));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD84u; }
    }
    if (ctx->pc != 0x15FD84u) { return; }
    ctx->pc = 0x15FD84u;
    // 0x15fd84: 0x10000005
    ctx->pc = 0x15FD84u;
    {
        const bool branch_taken_0x15fd84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FD88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15fd84) {
            ctx->pc = 0x15FD9Cu;
            goto label_15fd9c;
        }
    }
    ctx->pc = 0x15FD8Cu;
    // 0x15fd8c: 0x0
    ctx->pc = 0x15fd8cu;
    // NOP
label_15fd90:
    // 0x15fd90: 0xc057fa8
    ctx->pc = 0x15FD90u;
    SET_GPR_U32(ctx, 31, 0x15FD98u);
    ctx->pc = 0x15FEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FEA0_0x15fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD98u; }
    }
    if (ctx->pc != 0x15FD98u) { return; }
    ctx->pc = 0x15FD98u;
    // 0x15fd98: 0x8fa20024
    ctx->pc = 0x15fd98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_15fd9c:
    // 0x15fd9c: 0xdfb00040
    ctx->pc = 0x15fd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fda0: 0xdfbf0048
    ctx->pc = 0x15fda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15fda4: 0x3e00008
    ctx->pc = 0x15FDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FDA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FC48u: goto label_15fc48;
            case 0x15FC68u: goto label_15fc68;
            case 0x15FCC0u: goto label_15fcc0;
            case 0x15FD18u: goto label_15fd18;
            case 0x15FD40u: goto label_15fd40;
            case 0x15FD90u: goto label_15fd90;
            case 0x15FD9Cu: goto label_15fd9c;
            case 0x15FDF0u: goto label_15fdf0;
            case 0x15FE18u: goto label_15fe18;
            case 0x15FE68u: goto label_15fe68;
            case 0x15FE74u: goto label_15fe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FDACu;
    // 0x15fdac: 0x0
    ctx->pc = 0x15fdacu;
    // NOP
    // 0x15fdb0: 0x27bdffe0
    ctx->pc = 0x15fdb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fdb4: 0xffb00000
    ctx->pc = 0x15fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fdb8: 0xa0802d
    ctx->pc = 0x15fdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdbc: 0xffb10008
    ctx->pc = 0x15fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15fdc0: 0xffbf0010
    ctx->pc = 0x15fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fdc4: 0xc057ff0
    ctx->pc = 0x15FDC4u;
    SET_GPR_U32(ctx, 31, 0x15FDCCu);
    ctx->pc = 0x15FDC8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDCCu; }
    }
    if (ctx->pc != 0x15FDCCu) { return; }
    ctx->pc = 0x15FDCCu;
    // 0x15fdcc: 0x3c040024
    ctx->pc = 0x15fdccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fdd0: 0x200282d
    ctx->pc = 0x15fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdd4: 0x14400006
    ctx->pc = 0x15FDD4u;
    {
        const bool branch_taken_0x15fdd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FDD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964312));
        if (branch_taken_0x15fdd4) {
            ctx->pc = 0x15FDF0u;
            goto label_15fdf0;
        }
    }
    ctx->pc = 0x15FDDCu;
    // 0x15fddc: 0xdfb00000
    ctx->pc = 0x15fddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fde0: 0xdfb10008
    ctx->pc = 0x15fde0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fde4: 0xdfbf0010
    ctx->pc = 0x15fde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fde8: 0x8058dd4
    ctx->pc = 0x15FDE8u;
    ctx->pc = 0x15FDECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FDF0u;
label_15fdf0:
    // 0x15fdf0: 0xc05c8ec
    ctx->pc = 0x15FDF0u;
    SET_GPR_U32(ctx, 31, 0x15FDF8u);
    ctx->pc = 0x15FDF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x1723B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001723B0_0x1723b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDF8u; }
    }
    if (ctx->pc != 0x15FDF8u) { return; }
    ctx->pc = 0x15FDF8u;
    // 0x15fdf8: 0x3c040024
    ctx->pc = 0x15fdf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fdfc: 0x10400006
    ctx->pc = 0x15FDFCu;
    {
        const bool branch_taken_0x15fdfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FE00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964360));
        if (branch_taken_0x15fdfc) {
            ctx->pc = 0x15FE18u;
            goto label_15fe18;
        }
    }
    ctx->pc = 0x15FE04u;
    // 0x15fe04: 0xdfb00000
    ctx->pc = 0x15fe04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fe08: 0xdfb10008
    ctx->pc = 0x15fe08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fe0c: 0xdfbf0010
    ctx->pc = 0x15fe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fe10: 0x8058dd4
    ctx->pc = 0x15FE10u;
    ctx->pc = 0x15FE14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FE18u;
label_15fe18:
    // 0x15fe18: 0xdfb00000
    ctx->pc = 0x15fe18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fe1c: 0xdfb10008
    ctx->pc = 0x15fe1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fe20: 0xdfbf0010
    ctx->pc = 0x15fe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fe24: 0x3e00008
    ctx->pc = 0x15FE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FC48u: goto label_15fc48;
            case 0x15FC68u: goto label_15fc68;
            case 0x15FCC0u: goto label_15fcc0;
            case 0x15FD18u: goto label_15fd18;
            case 0x15FD40u: goto label_15fd40;
            case 0x15FD90u: goto label_15fd90;
            case 0x15FD9Cu: goto label_15fd9c;
            case 0x15FDF0u: goto label_15fdf0;
            case 0x15FE18u: goto label_15fe18;
            case 0x15FE68u: goto label_15fe68;
            case 0x15FE74u: goto label_15fe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FE2Cu;
    // 0x15fe2c: 0x0
    ctx->pc = 0x15fe2cu;
    // NOP
    // 0x15fe30: 0x27bdffb0
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15fe34: 0xffb00040
    ctx->pc = 0x15fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x15fe38: 0xffbf0048
    ctx->pc = 0x15fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15fe3c: 0xc057ff0
    ctx->pc = 0x15FE3Cu;
    SET_GPR_U32(ctx, 31, 0x15FE44u);
    ctx->pc = 0x15FE40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE44u; }
    }
    if (ctx->pc != 0x15FE44u) { return; }
    ctx->pc = 0x15FE44u;
    // 0x15fe44: 0x3a0282d
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe48: 0x14400007
    ctx->pc = 0x15FE48u;
    {
        const bool branch_taken_0x15fe48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FE4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fe48) {
            ctx->pc = 0x15FE68u;
            goto label_15fe68;
        }
    }
    ctx->pc = 0x15FE50u;
    // 0x15fe50: 0x3c040024
    ctx->pc = 0x15fe50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fe54: 0xc058dd4
    ctx->pc = 0x15FE54u;
    SET_GPR_U32(ctx, 31, 0x15FE5Cu);
    ctx->pc = 0x15FE58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964408));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE5Cu; }
    }
    if (ctx->pc != 0x15FE5Cu) { return; }
    ctx->pc = 0x15FE5Cu;
    // 0x15fe5c: 0x10000005
    ctx->pc = 0x15FE5Cu;
    {
        const bool branch_taken_0x15fe5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FE60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15fe5c) {
            ctx->pc = 0x15FE74u;
            goto label_15fe74;
        }
    }
    ctx->pc = 0x15FE64u;
    // 0x15fe64: 0x0
    ctx->pc = 0x15fe64u;
    // NOP
label_15fe68:
    // 0x15fe68: 0xc057fa8
    ctx->pc = 0x15FE68u;
    SET_GPR_U32(ctx, 31, 0x15FE70u);
    ctx->pc = 0x15FEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FEA0_0x15fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE70u; }
    }
    if (ctx->pc != 0x15FE70u) { return; }
    ctx->pc = 0x15FE70u;
    // 0x15fe70: 0x8fa20028
    ctx->pc = 0x15fe70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_15fe74:
    // 0x15fe74: 0xdfb00040
    ctx->pc = 0x15fe74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fe78: 0xdfbf0048
    ctx->pc = 0x15fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15fe7c: 0x3e00008
    ctx->pc = 0x15FE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FC48u: goto label_15fc48;
            case 0x15FC68u: goto label_15fc68;
            case 0x15FCC0u: goto label_15fcc0;
            case 0x15FD18u: goto label_15fd18;
            case 0x15FD40u: goto label_15fd40;
            case 0x15FD90u: goto label_15fd90;
            case 0x15FD9Cu: goto label_15fd9c;
            case 0x15FDF0u: goto label_15fdf0;
            case 0x15FE18u: goto label_15fe18;
            case 0x15FE68u: goto label_15fe68;
            case 0x15FE74u: goto label_15fe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FE84u;
    // 0x15fe84: 0x0
    ctx->pc = 0x15fe84u;
    // NOP
}
