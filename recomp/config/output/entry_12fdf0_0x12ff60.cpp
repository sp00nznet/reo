#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12fdf0
// Address: 0x12fdf0 - 0x12ff60
void entry_12fdf0_0x12ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fdf0u;

label_12fdf0:
    // 0x12fdf0: 0x27bdffc0
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_12fdf4:
    // 0x12fdf4: 0xffb00010
    ctx->pc = 0x12fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_12fdf8:
    // 0x12fdf8: 0xffb10018
    ctx->pc = 0x12fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_12fdfc:
    // 0x12fdfc: 0x80882d
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12fe00:
    // 0x12fe00: 0xffb20020
    ctx->pc = 0x12fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_12fe04:
    // 0x12fe04: 0x263202c8
    ctx->pc = 0x12fe04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 712));
label_12fe08:
    // 0x12fe08: 0xffb30028
    ctx->pc = 0x12fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_12fe0c:
    // 0x12fe0c: 0x982d
    ctx->pc = 0x12fe0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fe10:
    // 0x12fe10: 0xffb40030
    ctx->pc = 0x12fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_12fe14:
    // 0x12fe14: 0x26300004
    ctx->pc = 0x12fe14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4));
label_12fe18:
    // 0x12fe18: 0xffbf0038
    ctx->pc = 0x12fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_12fe1c:
    // 0x12fe1c: 0x1000000e
label_12fe20:
    if (ctx->pc == 0x12FE20u) {
        ctx->pc = 0x12FE20u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x12FE24u;
        goto label_12fe24;
    }
    ctx->pc = 0x12FE1Cu;
    {
        const bool branch_taken_0x12fe1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FE20u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x12fe1c) {
            ctx->pc = 0x12FE58u;
            goto label_12fe58;
        }
    }
    ctx->pc = 0x12FE24u;
label_12fe24:
    // 0x12fe24: 0x0
    ctx->pc = 0x12fe24u;
    // NOP
label_12fe28:
    // 0x12fe28: 0x8e070000
    ctx->pc = 0x12fe28u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12fe2c:
    // 0x12fe2c: 0x26100004
    ctx->pc = 0x12fe2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_12fe30:
    // 0x12fe30: 0x8fa30000
    ctx->pc = 0x12fe30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12fe34:
    // 0x12fe34: 0x26730001
    ctx->pc = 0x12fe34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_12fe38:
    // 0x12fe38: 0x8ce80000
    ctx->pc = 0x12fe38u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_12fe3c:
    // 0x12fe3c: 0xe0202d
    ctx->pc = 0x12fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12fe40:
    // 0x12fe40: 0x94620000
    ctx->pc = 0x12fe40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_12fe44:
    // 0x12fe44: 0xa6420000
    ctx->pc = 0x12fe44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_12fe48:
    // 0x12fe48: 0xa6420004
    ctx->pc = 0x12fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_12fe4c:
    // 0x12fe4c: 0x8d02001c
    ctx->pc = 0x12fe4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_12fe50:
    // 0x12fe50: 0x40f809
label_12fe54:
    if (ctx->pc == 0x12FE54u) {
        ctx->pc = 0x12FE54u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12FE58u;
        goto label_12fe58;
    }
    ctx->pc = 0x12FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12FE58u);
        ctx->pc = 0x12FE54u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FDF0u: goto label_12fdf0;
            case 0x12FDF4u: goto label_12fdf4;
            case 0x12FDF8u: goto label_12fdf8;
            case 0x12FDFCu: goto label_12fdfc;
            case 0x12FE00u: goto label_12fe00;
            case 0x12FE04u: goto label_12fe04;
            case 0x12FE08u: goto label_12fe08;
            case 0x12FE0Cu: goto label_12fe0c;
            case 0x12FE10u: goto label_12fe10;
            case 0x12FE14u: goto label_12fe14;
            case 0x12FE18u: goto label_12fe18;
            case 0x12FE1Cu: goto label_12fe1c;
            case 0x12FE20u: goto label_12fe20;
            case 0x12FE24u: goto label_12fe24;
            case 0x12FE28u: goto label_12fe28;
            case 0x12FE2Cu: goto label_12fe2c;
            case 0x12FE30u: goto label_12fe30;
            case 0x12FE34u: goto label_12fe34;
            case 0x12FE38u: goto label_12fe38;
            case 0x12FE3Cu: goto label_12fe3c;
            case 0x12FE40u: goto label_12fe40;
            case 0x12FE44u: goto label_12fe44;
            case 0x12FE48u: goto label_12fe48;
            case 0x12FE4Cu: goto label_12fe4c;
            case 0x12FE50u: goto label_12fe50;
            case 0x12FE54u: goto label_12fe54;
            case 0x12FE58u: goto label_12fe58;
            case 0x12FE5Cu: goto label_12fe5c;
            case 0x12FE60u: goto label_12fe60;
            case 0x12FE64u: goto label_12fe64;
            case 0x12FE68u: goto label_12fe68;
            case 0x12FE6Cu: goto label_12fe6c;
            case 0x12FE70u: goto label_12fe70;
            case 0x12FE74u: goto label_12fe74;
            case 0x12FE78u: goto label_12fe78;
            case 0x12FE7Cu: goto label_12fe7c;
            case 0x12FE80u: goto label_12fe80;
            case 0x12FE84u: goto label_12fe84;
            case 0x12FE88u: goto label_12fe88;
            case 0x12FE8Cu: goto label_12fe8c;
            case 0x12FE90u: goto label_12fe90;
            case 0x12FE94u: goto label_12fe94;
            case 0x12FE98u: goto label_12fe98;
            case 0x12FE9Cu: goto label_12fe9c;
            case 0x12FEA0u: goto label_12fea0;
            case 0x12FEA4u: goto label_12fea4;
            case 0x12FEA8u: goto label_12fea8;
            case 0x12FEACu: goto label_12feac;
            case 0x12FEB0u: goto label_12feb0;
            case 0x12FEB4u: goto label_12feb4;
            case 0x12FEB8u: goto label_12feb8;
            case 0x12FEBCu: goto label_12febc;
            case 0x12FEC0u: goto label_12fec0;
            case 0x12FEC4u: goto label_12fec4;
            case 0x12FEC8u: goto label_12fec8;
            case 0x12FECCu: goto label_12fecc;
            case 0x12FED0u: goto label_12fed0;
            case 0x12FED4u: goto label_12fed4;
            case 0x12FED8u: goto label_12fed8;
            case 0x12FEDCu: goto label_12fedc;
            case 0x12FEE0u: goto label_12fee0;
            case 0x12FEE4u: goto label_12fee4;
            case 0x12FEE8u: goto label_12fee8;
            case 0x12FEECu: goto label_12feec;
            case 0x12FEF0u: goto label_12fef0;
            case 0x12FEF4u: goto label_12fef4;
            case 0x12FEF8u: goto label_12fef8;
            case 0x12FEFCu: goto label_12fefc;
            case 0x12FF00u: goto label_12ff00;
            case 0x12FF04u: goto label_12ff04;
            case 0x12FF08u: goto label_12ff08;
            case 0x12FF0Cu: goto label_12ff0c;
            case 0x12FF10u: goto label_12ff10;
            case 0x12FF14u: goto label_12ff14;
            case 0x12FF18u: goto label_12ff18;
            case 0x12FF1Cu: goto label_12ff1c;
            case 0x12FF20u: goto label_12ff20;
            case 0x12FF24u: goto label_12ff24;
            case 0x12FF28u: goto label_12ff28;
            case 0x12FF2Cu: goto label_12ff2c;
            case 0x12FF30u: goto label_12ff30;
            case 0x12FF34u: goto label_12ff34;
            case 0x12FF38u: goto label_12ff38;
            case 0x12FF3Cu: goto label_12ff3c;
            case 0x12FF40u: goto label_12ff40;
            case 0x12FF44u: goto label_12ff44;
            case 0x12FF48u: goto label_12ff48;
            case 0x12FF4Cu: goto label_12ff4c;
            case 0x12FF50u: goto label_12ff50;
            case 0x12FF54u: goto label_12ff54;
            case 0x12FF58u: goto label_12ff58;
            case 0x12FF5Cu: goto label_12ff5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FE58u; }
            if (ctx->pc != 0x12FE58u) { return; }
        }
    }
    ctx->pc = 0x12FE58u;
label_12fe58:
    // 0x12fe58: 0x8e230058
    ctx->pc = 0x12fe58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12fe5c:
    // 0x12fe5c: 0x263102a
    ctx->pc = 0x12fe5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_12fe60:
    // 0x12fe60: 0x10400010
label_12fe64:
    if (ctx->pc == 0x12FE64u) {
        ctx->pc = 0x12FE64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FE68u;
        goto label_12fe68;
    }
    ctx->pc = 0x12FE60u;
    {
        const bool branch_taken_0x12fe60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FE64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fe60) {
            ctx->pc = 0x12FEA4u;
            goto label_12fea4;
        }
    }
    ctx->pc = 0x12FE68u;
label_12fe68:
    // 0x12fe68: 0x8e080000
    ctx->pc = 0x12fe68u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12fe6c:
    // 0x12fe6c: 0x24050001
    ctx->pc = 0x12fe6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12fe70:
    // 0x12fe70: 0x24060002
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_12fe74:
    // 0x12fe74: 0x8d020000
    ctx->pc = 0x12fe74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_12fe78:
    // 0x12fe78: 0x8c430018
    ctx->pc = 0x12fe78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12fe7c:
    // 0x12fe7c: 0x60f809
label_12fe80:
    if (ctx->pc == 0x12FE80u) {
        ctx->pc = 0x12FE80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FE84u;
        goto label_12fe84;
    }
    ctx->pc = 0x12FE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12FE84u);
        ctx->pc = 0x12FE80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FDF0u: goto label_12fdf0;
            case 0x12FDF4u: goto label_12fdf4;
            case 0x12FDF8u: goto label_12fdf8;
            case 0x12FDFCu: goto label_12fdfc;
            case 0x12FE00u: goto label_12fe00;
            case 0x12FE04u: goto label_12fe04;
            case 0x12FE08u: goto label_12fe08;
            case 0x12FE0Cu: goto label_12fe0c;
            case 0x12FE10u: goto label_12fe10;
            case 0x12FE14u: goto label_12fe14;
            case 0x12FE18u: goto label_12fe18;
            case 0x12FE1Cu: goto label_12fe1c;
            case 0x12FE20u: goto label_12fe20;
            case 0x12FE24u: goto label_12fe24;
            case 0x12FE28u: goto label_12fe28;
            case 0x12FE2Cu: goto label_12fe2c;
            case 0x12FE30u: goto label_12fe30;
            case 0x12FE34u: goto label_12fe34;
            case 0x12FE38u: goto label_12fe38;
            case 0x12FE3Cu: goto label_12fe3c;
            case 0x12FE40u: goto label_12fe40;
            case 0x12FE44u: goto label_12fe44;
            case 0x12FE48u: goto label_12fe48;
            case 0x12FE4Cu: goto label_12fe4c;
            case 0x12FE50u: goto label_12fe50;
            case 0x12FE54u: goto label_12fe54;
            case 0x12FE58u: goto label_12fe58;
            case 0x12FE5Cu: goto label_12fe5c;
            case 0x12FE60u: goto label_12fe60;
            case 0x12FE64u: goto label_12fe64;
            case 0x12FE68u: goto label_12fe68;
            case 0x12FE6Cu: goto label_12fe6c;
            case 0x12FE70u: goto label_12fe70;
            case 0x12FE74u: goto label_12fe74;
            case 0x12FE78u: goto label_12fe78;
            case 0x12FE7Cu: goto label_12fe7c;
            case 0x12FE80u: goto label_12fe80;
            case 0x12FE84u: goto label_12fe84;
            case 0x12FE88u: goto label_12fe88;
            case 0x12FE8Cu: goto label_12fe8c;
            case 0x12FE90u: goto label_12fe90;
            case 0x12FE94u: goto label_12fe94;
            case 0x12FE98u: goto label_12fe98;
            case 0x12FE9Cu: goto label_12fe9c;
            case 0x12FEA0u: goto label_12fea0;
            case 0x12FEA4u: goto label_12fea4;
            case 0x12FEA8u: goto label_12fea8;
            case 0x12FEACu: goto label_12feac;
            case 0x12FEB0u: goto label_12feb0;
            case 0x12FEB4u: goto label_12feb4;
            case 0x12FEB8u: goto label_12feb8;
            case 0x12FEBCu: goto label_12febc;
            case 0x12FEC0u: goto label_12fec0;
            case 0x12FEC4u: goto label_12fec4;
            case 0x12FEC8u: goto label_12fec8;
            case 0x12FECCu: goto label_12fecc;
            case 0x12FED0u: goto label_12fed0;
            case 0x12FED4u: goto label_12fed4;
            case 0x12FED8u: goto label_12fed8;
            case 0x12FEDCu: goto label_12fedc;
            case 0x12FEE0u: goto label_12fee0;
            case 0x12FEE4u: goto label_12fee4;
            case 0x12FEE8u: goto label_12fee8;
            case 0x12FEECu: goto label_12feec;
            case 0x12FEF0u: goto label_12fef0;
            case 0x12FEF4u: goto label_12fef4;
            case 0x12FEF8u: goto label_12fef8;
            case 0x12FEFCu: goto label_12fefc;
            case 0x12FF00u: goto label_12ff00;
            case 0x12FF04u: goto label_12ff04;
            case 0x12FF08u: goto label_12ff08;
            case 0x12FF0Cu: goto label_12ff0c;
            case 0x12FF10u: goto label_12ff10;
            case 0x12FF14u: goto label_12ff14;
            case 0x12FF18u: goto label_12ff18;
            case 0x12FF1Cu: goto label_12ff1c;
            case 0x12FF20u: goto label_12ff20;
            case 0x12FF24u: goto label_12ff24;
            case 0x12FF28u: goto label_12ff28;
            case 0x12FF2Cu: goto label_12ff2c;
            case 0x12FF30u: goto label_12ff30;
            case 0x12FF34u: goto label_12ff34;
            case 0x12FF38u: goto label_12ff38;
            case 0x12FF3Cu: goto label_12ff3c;
            case 0x12FF40u: goto label_12ff40;
            case 0x12FF44u: goto label_12ff44;
            case 0x12FF48u: goto label_12ff48;
            case 0x12FF4Cu: goto label_12ff4c;
            case 0x12FF50u: goto label_12ff50;
            case 0x12FF54u: goto label_12ff54;
            case 0x12FF58u: goto label_12ff58;
            case 0x12FF5Cu: goto label_12ff5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FE84u; }
            if (ctx->pc != 0x12FE84u) { return; }
        }
    }
    ctx->pc = 0x12FE84u;
label_12fe84:
    // 0x12fe84: 0x24050001
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12fe88:
    // 0x12fe88: 0x8fa20004
    ctx->pc = 0x12fe88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12fe8c:
    // 0x12fe8c: 0x1440ffe6
label_12fe90:
    if (ctx->pc == 0x12FE90u) {
        ctx->pc = 0x12FE90u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FE94u;
        goto label_12fe94;
    }
    ctx->pc = 0x12FE8Cu;
    {
        const bool branch_taken_0x12fe8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FE90u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fe8c) {
            ctx->pc = 0x12FE28u;
            goto label_12fe28;
        }
    }
    ctx->pc = 0x12FE94u;
label_12fe94:
    // 0x12fe94: 0x8e230058
    ctx->pc = 0x12fe94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12fe98:
    // 0x12fe98: 0x263102a
    ctx->pc = 0x12fe98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
label_12fe9c:
    // 0x12fe9c: 0x54400028
label_12fea0:
    if (ctx->pc == 0x12FEA0u) {
        ctx->pc = 0x12FEA0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x12FEA4u;
        goto label_12fea4;
    }
    ctx->pc = 0x12FE9Cu;
    {
        const bool branch_taken_0x12fe9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12fe9c) {
            ctx->pc = 0x12FEA0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x12FF40u;
            goto label_12ff40;
        }
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x5860000d
label_12fea8:
    if (ctx->pc == 0x12FEA8u) {
        ctx->pc = 0x12FEA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FEACu;
        goto label_12feac;
    }
    ctx->pc = 0x12FEA4u;
    {
        const bool branch_taken_0x12fea4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12fea4) {
            ctx->pc = 0x12FEA8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12FEDCu;
            goto label_12fedc;
        }
    }
    ctx->pc = 0x12FEACu;
label_12feac:
    // 0x12feac: 0x60982d
    ctx->pc = 0x12feacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12feb0:
    // 0x12feb0: 0x26230088
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 136));
label_12feb4:
    // 0x12feb4: 0x2624008c
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 140));
label_12feb8:
    // 0x12feb8: 0x94620240
    ctx->pc = 0x12feb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 576)));
label_12febc:
    // 0x12febc: 0x2673ffff
    ctx->pc = 0x12febcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12fec0:
    // 0x12fec0: 0xa4620000
    ctx->pc = 0x12fec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_12fec4:
    // 0x12fec4: 0x24630002
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_12fec8:
    // 0x12fec8: 0x94820240
    ctx->pc = 0x12fec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 576)));
label_12fecc:
    // 0x12fecc: 0xa4820000
    ctx->pc = 0x12feccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_12fed0:
    // 0x12fed0: 0x1660fff9
label_12fed4:
    if (ctx->pc == 0x12FED4u) {
        ctx->pc = 0x12FED4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x12FED8u;
        goto label_12fed8;
    }
    ctx->pc = 0x12FED0u;
    {
        const bool branch_taken_0x12fed0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FED4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x12fed0) {
            ctx->pc = 0x12FEB8u;
            goto label_12feb8;
        }
    }
    ctx->pc = 0x12FED8u;
label_12fed8:
    // 0x12fed8: 0x220202d
    ctx->pc = 0x12fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12fedc:
    // 0x12fedc: 0xc04bc24
label_12fee0:
    if (ctx->pc == 0x12FEE0u) {
        ctx->pc = 0x12FEE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FEE4u;
        goto label_12fee4;
    }
    ctx->pc = 0x12FEDCu;
    SET_GPR_U32(ctx, 31, 0x12FEE4u);
    ctx->pc = 0x12FEE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F090_0x12f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FEE4u; }
    }
    if (ctx->pc != 0x12FEE4u) { return; }
    ctx->pc = 0x12FEE4u;
label_12fee4:
    // 0x12fee4: 0x40202d
    ctx->pc = 0x12fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12fee8:
    // 0x12fee8: 0x10800014
label_12feec:
    if (ctx->pc == 0x12FEECu) {
        ctx->pc = 0x12FEECu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FEF0u;
        goto label_12fef0;
    }
    ctx->pc = 0x12FEE8u;
    {
        const bool branch_taken_0x12fee8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FEECu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fee8) {
            ctx->pc = 0x12FF3Cu;
            goto label_12ff3c;
        }
    }
    ctx->pc = 0x12FEF0u;
label_12fef0:
    // 0x12fef0: 0x8e22002c
    ctx->pc = 0x12fef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_12fef4:
    // 0x12fef4: 0x8e230058
    ctx->pc = 0x12fef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12fef8:
    // 0x12fef8: 0x441021
    ctx->pc = 0x12fef8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12fefc:
    // 0x12fefc: 0x1860000d
label_12ff00:
    if (ctx->pc == 0x12FF00u) {
        ctx->pc = 0x12FF00u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x12FF04u;
        goto label_12ff04;
    }
    ctx->pc = 0x12FEFCu;
    {
        const bool branch_taken_0x12fefc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12FF00u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x12fefc) {
            ctx->pc = 0x12FF34u;
            goto label_12ff34;
        }
    }
    ctx->pc = 0x12FF04u;
label_12ff04:
    // 0x12ff04: 0x26300080
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 128));
label_12ff08:
    // 0x12ff08: 0x8e040000
    ctx->pc = 0x12ff08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ff0c:
    // 0x12ff0c: 0x0
    ctx->pc = 0x12ff0cu;
    // NOP
label_12ff10:
    // 0x12ff10: 0x26100004
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_12ff14:
    // 0x12ff14: 0x8e250064
    ctx->pc = 0x12ff14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_12ff18:
    // 0x12ff18: 0x26730001
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_12ff1c:
    // 0x12ff1c: 0xc04b8da
label_12ff20:
    if (ctx->pc == 0x12FF20u) {
        ctx->pc = 0x12FF20u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x12FF24u;
        goto label_12ff24;
    }
    ctx->pc = 0x12FF1Cu;
    SET_GPR_U32(ctx, 31, 0x12FF24u);
    ctx->pc = 0x12FF20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->pc = 0x12E368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E368_0x12e368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF24u; }
    }
    if (ctx->pc != 0x12FF24u) { return; }
    ctx->pc = 0x12FF24u;
label_12ff24:
    // 0x12ff24: 0x8e220058
    ctx->pc = 0x12ff24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12ff28:
    // 0x12ff28: 0x262102a
    ctx->pc = 0x12ff28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_12ff2c:
    // 0x12ff2c: 0x5440fff8
label_12ff30:
    if (ctx->pc == 0x12FF30u) {
        ctx->pc = 0x12FF30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x12FF34u;
        goto label_12ff34;
    }
    ctx->pc = 0x12FF2Cu;
    {
        const bool branch_taken_0x12ff2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12ff2c) {
            ctx->pc = 0x12FF30u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x12FF10u;
            goto label_12ff10;
        }
    }
    ctx->pc = 0x12FF34u;
label_12ff34:
    // 0x12ff34: 0x24020002
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12ff38:
    // 0x12ff38: 0xa2220001
    ctx->pc = 0x12ff38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_12ff3c:
    // 0x12ff3c: 0xdfb00010
    ctx->pc = 0x12ff3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12ff40:
    // 0x12ff40: 0xdfb10018
    ctx->pc = 0x12ff40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12ff44:
    // 0x12ff44: 0xdfb20020
    ctx->pc = 0x12ff44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12ff48:
    // 0x12ff48: 0xdfb30028
    ctx->pc = 0x12ff48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12ff4c:
    // 0x12ff4c: 0xdfb40030
    ctx->pc = 0x12ff4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12ff50:
    // 0x12ff50: 0xdfbf0038
    ctx->pc = 0x12ff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12ff54:
    // 0x12ff54: 0x3e00008
label_12ff58:
    if (ctx->pc == 0x12FF58u) {
        ctx->pc = 0x12FF58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x12FF5Cu;
        goto label_12ff5c;
    }
    ctx->pc = 0x12FF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FDF0u: goto label_12fdf0;
            case 0x12FDF4u: goto label_12fdf4;
            case 0x12FDF8u: goto label_12fdf8;
            case 0x12FDFCu: goto label_12fdfc;
            case 0x12FE00u: goto label_12fe00;
            case 0x12FE04u: goto label_12fe04;
            case 0x12FE08u: goto label_12fe08;
            case 0x12FE0Cu: goto label_12fe0c;
            case 0x12FE10u: goto label_12fe10;
            case 0x12FE14u: goto label_12fe14;
            case 0x12FE18u: goto label_12fe18;
            case 0x12FE1Cu: goto label_12fe1c;
            case 0x12FE20u: goto label_12fe20;
            case 0x12FE24u: goto label_12fe24;
            case 0x12FE28u: goto label_12fe28;
            case 0x12FE2Cu: goto label_12fe2c;
            case 0x12FE30u: goto label_12fe30;
            case 0x12FE34u: goto label_12fe34;
            case 0x12FE38u: goto label_12fe38;
            case 0x12FE3Cu: goto label_12fe3c;
            case 0x12FE40u: goto label_12fe40;
            case 0x12FE44u: goto label_12fe44;
            case 0x12FE48u: goto label_12fe48;
            case 0x12FE4Cu: goto label_12fe4c;
            case 0x12FE50u: goto label_12fe50;
            case 0x12FE54u: goto label_12fe54;
            case 0x12FE58u: goto label_12fe58;
            case 0x12FE5Cu: goto label_12fe5c;
            case 0x12FE60u: goto label_12fe60;
            case 0x12FE64u: goto label_12fe64;
            case 0x12FE68u: goto label_12fe68;
            case 0x12FE6Cu: goto label_12fe6c;
            case 0x12FE70u: goto label_12fe70;
            case 0x12FE74u: goto label_12fe74;
            case 0x12FE78u: goto label_12fe78;
            case 0x12FE7Cu: goto label_12fe7c;
            case 0x12FE80u: goto label_12fe80;
            case 0x12FE84u: goto label_12fe84;
            case 0x12FE88u: goto label_12fe88;
            case 0x12FE8Cu: goto label_12fe8c;
            case 0x12FE90u: goto label_12fe90;
            case 0x12FE94u: goto label_12fe94;
            case 0x12FE98u: goto label_12fe98;
            case 0x12FE9Cu: goto label_12fe9c;
            case 0x12FEA0u: goto label_12fea0;
            case 0x12FEA4u: goto label_12fea4;
            case 0x12FEA8u: goto label_12fea8;
            case 0x12FEACu: goto label_12feac;
            case 0x12FEB0u: goto label_12feb0;
            case 0x12FEB4u: goto label_12feb4;
            case 0x12FEB8u: goto label_12feb8;
            case 0x12FEBCu: goto label_12febc;
            case 0x12FEC0u: goto label_12fec0;
            case 0x12FEC4u: goto label_12fec4;
            case 0x12FEC8u: goto label_12fec8;
            case 0x12FECCu: goto label_12fecc;
            case 0x12FED0u: goto label_12fed0;
            case 0x12FED4u: goto label_12fed4;
            case 0x12FED8u: goto label_12fed8;
            case 0x12FEDCu: goto label_12fedc;
            case 0x12FEE0u: goto label_12fee0;
            case 0x12FEE4u: goto label_12fee4;
            case 0x12FEE8u: goto label_12fee8;
            case 0x12FEECu: goto label_12feec;
            case 0x12FEF0u: goto label_12fef0;
            case 0x12FEF4u: goto label_12fef4;
            case 0x12FEF8u: goto label_12fef8;
            case 0x12FEFCu: goto label_12fefc;
            case 0x12FF00u: goto label_12ff00;
            case 0x12FF04u: goto label_12ff04;
            case 0x12FF08u: goto label_12ff08;
            case 0x12FF0Cu: goto label_12ff0c;
            case 0x12FF10u: goto label_12ff10;
            case 0x12FF14u: goto label_12ff14;
            case 0x12FF18u: goto label_12ff18;
            case 0x12FF1Cu: goto label_12ff1c;
            case 0x12FF20u: goto label_12ff20;
            case 0x12FF24u: goto label_12ff24;
            case 0x12FF28u: goto label_12ff28;
            case 0x12FF2Cu: goto label_12ff2c;
            case 0x12FF30u: goto label_12ff30;
            case 0x12FF34u: goto label_12ff34;
            case 0x12FF38u: goto label_12ff38;
            case 0x12FF3Cu: goto label_12ff3c;
            case 0x12FF40u: goto label_12ff40;
            case 0x12FF44u: goto label_12ff44;
            case 0x12FF48u: goto label_12ff48;
            case 0x12FF4Cu: goto label_12ff4c;
            case 0x12FF50u: goto label_12ff50;
            case 0x12FF54u: goto label_12ff54;
            case 0x12FF58u: goto label_12ff58;
            case 0x12FF5Cu: goto label_12ff5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FF5Cu;
label_12ff5c:
    // 0x12ff5c: 0x0
    ctx->pc = 0x12ff5cu;
    // NOP
}
