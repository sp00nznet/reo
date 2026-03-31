#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011AD80
// Address: 0x11ad80 - 0x11b010
void sub_0011AD80_0x11ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ad80u;

    // 0x11ad80: 0x27bdff20
    ctx->pc = 0x11ad80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11ad84: 0xffb00040
    ctx->pc = 0x11ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11ad88: 0xffb700b0
    ctx->pc = 0x11ad88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11ad8c: 0x80802d
    ctx->pc = 0x11ad8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad90: 0xffb600a0
    ctx->pc = 0x11ad90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11ad94: 0xc0b82d
    ctx->pc = 0x11ad94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad98: 0xffb30070
    ctx->pc = 0x11ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11ad9c: 0xe0b02d
    ctx->pc = 0x11ad9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ada0: 0xffb10050
    ctx->pc = 0x11ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11ada4: 0xa0982d
    ctx->pc = 0x11ada4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ada8: 0xffbe00c0
    ctx->pc = 0x11ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x11adac: 0x100882d
    ctx->pc = 0x11adacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adb0: 0xffb20060
    ctx->pc = 0x11adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11adb4: 0x24040014
    ctx->pc = 0x11adb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x11adb8: 0xffbf00d0
    ctx->pc = 0x11adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11adbc: 0x3c1e0026
    ctx->pc = 0x11adbcu;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x11adc0: 0xffb50090
    ctx->pc = 0x11adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11adc4: 0x27d2ca40
    ctx->pc = 0x11adc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x11adc8: 0xc04619c
    ctx->pc = 0x11ADC8u;
    SET_GPR_U32(ctx, 31, 0x11ADD0u);
    ctx->pc = 0x11ADCCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADD0u; }
    }
    if (ctx->pc != 0x11ADD0u) { return; }
    ctx->pc = 0x11ADD0u;
    // 0x11add0: 0x3c030021
    ctx->pc = 0x11add0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11add4: 0x8c629ddc
    ctx->pc = 0x11add4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x11add8: 0x54400004
    ctx->pc = 0x11ADD8u;
    {
        const bool branch_taken_0x11add8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11add8) {
            ctx->pc = 0x11ADDCu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11ADECu;
            goto label_11adec;
        }
    }
    ctx->pc = 0x11ADE0u;
    // 0x11ade0: 0xc0461e8
    ctx->pc = 0x11ADE0u;
    SET_GPR_U32(ctx, 31, 0x11ADE8u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADE8u; }
    }
    if (ctx->pc != 0x11ADE8u) { return; }
    ctx->pc = 0x11ADE8u;
    // 0x11ade8: 0x92020000
    ctx->pc = 0x11ade8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11adec:
    // 0x11adec: 0x282d
    ctx->pc = 0x11adecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adf0: 0x21e00
    ctx->pc = 0x11adf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11adf4: 0x1060000f
    ctx->pc = 0x11ADF4u;
    {
        const bool branch_taken_0x11adf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11ADF8u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11adf4) {
            ctx->pc = 0x11AE34u;
            goto label_11ae34;
        }
    }
    ctx->pc = 0x11ADFCu;
    // 0x11adfc: 0x2a270401
    ctx->pc = 0x11adfcu;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 17), 1025));
    // 0x11ae00: 0x24a50001
    ctx->pc = 0x11ae00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ae04: 0x0
    ctx->pc = 0x11ae04u;
    // NOP
label_11ae08:
    // 0x11ae08: 0x28a20400
    ctx->pc = 0x11ae08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x11ae0c: 0x1040000a
    ctx->pc = 0x11AE0Cu;
    {
        const bool branch_taken_0x11ae0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AE10u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x11ae0c) {
            ctx->pc = 0x11AE38u;
            goto label_11ae38;
        }
    }
    ctx->pc = 0x11AE14u;
    // 0x11ae14: 0x2452021
    ctx->pc = 0x11ae14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x11ae18: 0x90430000
    ctx->pc = 0x11ae18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ae1c: 0xa083000c
    ctx->pc = 0x11ae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ae20: 0x31e00
    ctx->pc = 0x11ae20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x11ae24: 0x5460fff8
    ctx->pc = 0x11AE24u;
    {
        const bool branch_taken_0x11ae24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ae24) {
            ctx->pc = 0x11AE28u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x11AE08u;
            goto label_11ae08;
        }
    }
    ctx->pc = 0x11AE2Cu;
    // 0x11ae2c: 0x10000003
    ctx->pc = 0x11AE2Cu;
    {
        const bool branch_taken_0x11ae2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AE30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x11ae2c) {
            ctx->pc = 0x11AE3Cu;
            goto label_11ae3c;
        }
    }
    ctx->pc = 0x11AE34u;
label_11ae34:
    // 0x11ae34: 0x2a270401
    ctx->pc = 0x11ae34u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 17), 1025));
label_11ae38:
    // 0x11ae38: 0x24020400
    ctx->pc = 0x11ae38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_11ae3c:
    // 0x11ae3c: 0x50a20001
    ctx->pc = 0x11AE3Cu;
    {
        const bool branch_taken_0x11ae3c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ae3c) {
            ctx->pc = 0x11AE40u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11AE44u;
            goto label_11ae44;
        }
    }
    ctx->pc = 0x11AE44u;
label_11ae44:
    // 0x11ae44: 0x92620000
    ctx->pc = 0x11ae44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11ae48: 0x282d
    ctx->pc = 0x11ae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae4c: 0x21e00
    ctx->pc = 0x11ae4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11ae50: 0x1060000c
    ctx->pc = 0x11AE50u;
    {
        const bool branch_taken_0x11ae50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AE54u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x11ae50) {
            ctx->pc = 0x11AE84u;
            goto label_11ae84;
        }
    }
    ctx->pc = 0x11AE58u;
    // 0x11ae58: 0x2646040c
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 1036));
    // 0x11ae5c: 0x24a50001
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_11ae60:
    // 0x11ae60: 0x28a20400
    ctx->pc = 0x11ae60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x11ae64: 0x10400007
    ctx->pc = 0x11AE64u;
    {
        const bool branch_taken_0x11ae64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AE68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        if (branch_taken_0x11ae64) {
            ctx->pc = 0x11AE84u;
            goto label_11ae84;
        }
    }
    ctx->pc = 0x11AE6Cu;
    // 0x11ae6c: 0xc52021
    ctx->pc = 0x11ae6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11ae70: 0x90430000
    ctx->pc = 0x11ae70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ae74: 0xa0830000
    ctx->pc = 0x11ae74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ae78: 0x31e00
    ctx->pc = 0x11ae78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x11ae7c: 0x5460fff8
    ctx->pc = 0x11AE7Cu;
    {
        const bool branch_taken_0x11ae7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ae7c) {
            ctx->pc = 0x11AE80u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x11AE60u;
            goto label_11ae60;
        }
    }
    ctx->pc = 0x11AE84u;
label_11ae84:
    // 0x11ae84: 0x24020400
    ctx->pc = 0x11ae84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11ae88: 0x50a20001
    ctx->pc = 0x11AE88u;
    {
        const bool branch_taken_0x11ae88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x11ae88) {
            ctx->pc = 0x11AE8Cu;
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x11AE90u;
            goto label_11ae90;
        }
    }
    ctx->pc = 0x11AE90u;
label_11ae90:
    // 0x11ae90: 0x14e00005
    ctx->pc = 0x11AE90u;
    {
        const bool branch_taken_0x11ae90 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ae90) {
            ctx->pc = 0x11AEA8u;
            goto label_11aea8;
        }
    }
    ctx->pc = 0x11AE98u;
    // 0x11ae98: 0xc0461a8
    ctx->pc = 0x11AE98u;
    SET_GPR_U32(ctx, 31, 0x11AEA0u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEA0u; }
    }
    if (ctx->pc != 0x11AEA0u) { return; }
    ctx->pc = 0x11AEA0u;
    // 0x11aea0: 0x10000046
    ctx->pc = 0x11AEA0u;
    {
        const bool branch_taken_0x11aea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AEA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        if (branch_taken_0x11aea0) {
            ctx->pc = 0x11AFBCu;
            goto label_11afbc;
        }
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x1a20000f
    ctx->pc = 0x11AEA8u;
    {
        const bool branch_taken_0x11aea8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11AEACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11aea8) {
            ctx->pc = 0x11AEE8u;
            goto label_11aee8;
        }
    }
    ctx->pc = 0x11AEB0u;
    // 0x11aeb0: 0x2646080c
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 2060));
    // 0x11aeb4: 0x27b30030
    ctx->pc = 0x11aeb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aeb8: 0x3c150026
    ctx->pc = 0x11aeb8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11aebc: 0x3c140026
    ctx->pc = 0x11aebcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_11aec0:
    // 0x11aec0: 0x2c51021
    ctx->pc = 0x11aec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x11aec4: 0xc52021
    ctx->pc = 0x11aec4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11aec8: 0x90430000
    ctx->pc = 0x11aec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11aecc: 0x24a50001
    ctx->pc = 0x11aeccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x11aed0: 0xb1102a
    ctx->pc = 0x11aed0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x11aed4: 0xa0830000
    ctx->pc = 0x11aed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11aed8: 0x1440fff9
    ctx->pc = 0x11AED8u;
    {
        const bool branch_taken_0x11aed8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11aed8) {
            ctx->pc = 0x11AEC0u;
            goto label_11aec0;
        }
    }
    ctx->pc = 0x11AEE0u;
    // 0x11aee0: 0x10000005
    ctx->pc = 0x11AEE0u;
    {
        const bool branch_taken_0x11aee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AEE4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        if (branch_taken_0x11aee0) {
            ctx->pc = 0x11AEF8u;
            goto label_11aef8;
        }
    }
    ctx->pc = 0x11AEE8u;
label_11aee8:
    // 0x11aee8: 0x27b30030
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aeec: 0x3c150026
    ctx->pc = 0x11aeecu;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11aef0: 0x3c140026
    ctx->pc = 0x11aef0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x11aef4: 0xae510c10
    ctx->pc = 0x11aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_11aef8:
    // 0x11aef8: 0x24020001
    ctx->pc = 0x11aef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aefc: 0xae570c0c
    ctx->pc = 0x11aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x11af00: 0x27a40010
    ctx->pc = 0x11af00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11af04: 0xafa20014
    ctx->pc = 0x11af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11af08: 0x27d0ca40
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x11af0c: 0xafa00018
    ctx->pc = 0x11af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11af10: 0x2694d680
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x11af14: 0xc045188
    ctx->pc = 0x11AF14u;
    SET_GPR_U32(ctx, 31, 0x11AF1Cu);
    ctx->pc = 0x11AF18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF1Cu; }
    }
    if (ctx->pc != 0x11AF1Cu) { return; }
    ctx->pc = 0x11AF1Cu;
    // 0x11af1c: 0x40882d
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af20: 0x200202d
    ctx->pc = 0x11af20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af24: 0x24020004
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11af28: 0xae530004
    ctx->pc = 0x11af28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x11af2c: 0xae420008
    ctx->pc = 0x11af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11af30: 0x24050c14
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3092));
    // 0x11af34: 0xc045bf4
    ctx->pc = 0x11AF34u;
    SET_GPR_U32(ctx, 31, 0x11AF3Cu);
    ctx->pc = 0x11AF38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF3Cu; }
    }
    if (ctx->pc != 0x11AF3Cu) { return; }
    ctx->pc = 0x11AF3Cu;
    // 0x11af3c: 0x26a4e140
    ctx->pc = 0x11af3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294959424));
    // 0x11af40: 0x200382d
    ctx->pc = 0x11af40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af44: 0xafa00000
    ctx->pc = 0x11af44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11af48: 0x24050014
    ctx->pc = 0x11af48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x11af4c: 0x302d
    ctx->pc = 0x11af4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af50: 0x24080c14
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3092));
    // 0x11af54: 0x280482d
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af58: 0x240a0004
    ctx->pc = 0x11af58u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11af5c: 0xc045e7a
    ctx->pc = 0x11AF5Cu;
    SET_GPR_U32(ctx, 31, 0x11AF64u);
    ctx->pc = 0x11AF60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF64u; }
    }
    if (ctx->pc != 0x11AF64u) { return; }
    ctx->pc = 0x11AF64u;
    // 0x11af64: 0x4410007
    ctx->pc = 0x11AF64u;
    {
        const bool branch_taken_0x11af64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11AF68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x11af64) {
            ctx->pc = 0x11AF84u;
            goto label_11af84;
        }
    }
    ctx->pc = 0x11AF6Cu;
    // 0x11af6c: 0xc04518c
    ctx->pc = 0x11AF6Cu;
    SET_GPR_U32(ctx, 31, 0x11AF74u);
    ctx->pc = 0x11AF70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF74u; }
    }
    if (ctx->pc != 0x11AF74u) { return; }
    ctx->pc = 0x11AF74u;
    // 0x11af74: 0xc0461a8
    ctx->pc = 0x11AF74u;
    SET_GPR_U32(ctx, 31, 0x11AF7Cu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF7Cu; }
    }
    if (ctx->pc != 0x11AF7Cu) { return; }
    ctx->pc = 0x11AF7Cu;
    // 0x11af7c: 0x1000000f
    ctx->pc = 0x11AF7Cu;
    {
        const bool branch_taken_0x11af7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AF80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11af7c) {
            ctx->pc = 0x11AFBCu;
            goto label_11afbc;
        }
    }
    ctx->pc = 0x11AF84u;
label_11af84:
    // 0x11af84: 0x2821025
    ctx->pc = 0x11af84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11af88: 0xc0461a8
    ctx->pc = 0x11AF88u;
    SET_GPR_U32(ctx, 31, 0x11AF90u);
    ctx->pc = 0x11AF8Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF90u; }
    }
    if (ctx->pc != 0x11AF90u) { return; }
    ctx->pc = 0x11AF90u;
    // 0x11af90: 0x16000005
    ctx->pc = 0x11AF90u;
    {
        const bool branch_taken_0x11af90 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11af90) {
            ctx->pc = 0x11AFA8u;
            goto label_11afa8;
        }
    }
    ctx->pc = 0x11AF98u;
    // 0x11af98: 0xc04518c
    ctx->pc = 0x11AF98u;
    SET_GPR_U32(ctx, 31, 0x11AFA0u);
    ctx->pc = 0x11AF9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFA0u; }
    }
    if (ctx->pc != 0x11AFA0u) { return; }
    ctx->pc = 0x11AFA0u;
    // 0x11afa0: 0x10000006
    ctx->pc = 0x11AFA0u;
    {
        const bool branch_taken_0x11afa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11AFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x11afa0) {
            ctx->pc = 0x11AFBCu;
            goto label_11afbc;
        }
    }
    ctx->pc = 0x11AFA8u;
label_11afa8:
    // 0x11afa8: 0xc045198
    ctx->pc = 0x11AFA8u;
    SET_GPR_U32(ctx, 31, 0x11AFB0u);
    ctx->pc = 0x11AFACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB0u; }
    }
    if (ctx->pc != 0x11AFB0u) { return; }
    ctx->pc = 0x11AFB0u;
    // 0x11afb0: 0xc04518c
    ctx->pc = 0x11AFB0u;
    SET_GPR_U32(ctx, 31, 0x11AFB8u);
    ctx->pc = 0x11AFB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB8u; }
    }
    if (ctx->pc != 0x11AFB8u) { return; }
    ctx->pc = 0x11AFB8u;
    // 0x11afb8: 0x8fa20030
    ctx->pc = 0x11afb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11afbc:
    // 0x11afbc: 0xdfbf00d0
    ctx->pc = 0x11afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11afc0: 0xdfbe00c0
    ctx->pc = 0x11afc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11afc4: 0xdfb700b0
    ctx->pc = 0x11afc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11afc8: 0xdfb600a0
    ctx->pc = 0x11afc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11afcc: 0xdfb50090
    ctx->pc = 0x11afccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11afd0: 0xdfb40080
    ctx->pc = 0x11afd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11afd4: 0xdfb30070
    ctx->pc = 0x11afd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11afd8: 0xdfb20060
    ctx->pc = 0x11afd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11afdc: 0xdfb10050
    ctx->pc = 0x11afdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11afe0: 0xdfb00040
    ctx->pc = 0x11afe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11afe4: 0x3e00008
    ctx->pc = 0x11AFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AFE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ADECu: goto label_11adec;
            case 0x11AE08u: goto label_11ae08;
            case 0x11AE34u: goto label_11ae34;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE3Cu: goto label_11ae3c;
            case 0x11AE44u: goto label_11ae44;
            case 0x11AE60u: goto label_11ae60;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE90u: goto label_11ae90;
            case 0x11AEA8u: goto label_11aea8;
            case 0x11AEC0u: goto label_11aec0;
            case 0x11AEE8u: goto label_11aee8;
            case 0x11AEF8u: goto label_11aef8;
            case 0x11AF84u: goto label_11af84;
            case 0x11AFA8u: goto label_11afa8;
            case 0x11AFBCu: goto label_11afbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AFECu;
    // 0x11afec: 0x0
    ctx->pc = 0x11afecu;
    // NOP
    // 0x11aff0: 0x27bdfff0
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11aff4: 0xffbf0000
    ctx->pc = 0x11aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aff8: 0xc0466ca
    ctx->pc = 0x11AFF8u;
    SET_GPR_U32(ctx, 31, 0x11B000u);
    ctx->pc = 0x11AFFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x119B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119B28_0x119b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B000u; }
    }
    if (ctx->pc != 0x11B000u) { return; }
    ctx->pc = 0x11B000u;
    // 0x11b000: 0xdfbf0000
    ctx->pc = 0x11b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b004: 0x3e00008
    ctx->pc = 0x11B004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ADECu: goto label_11adec;
            case 0x11AE08u: goto label_11ae08;
            case 0x11AE34u: goto label_11ae34;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE3Cu: goto label_11ae3c;
            case 0x11AE44u: goto label_11ae44;
            case 0x11AE60u: goto label_11ae60;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE90u: goto label_11ae90;
            case 0x11AEA8u: goto label_11aea8;
            case 0x11AEC0u: goto label_11aec0;
            case 0x11AEE8u: goto label_11aee8;
            case 0x11AEF8u: goto label_11aef8;
            case 0x11AF84u: goto label_11af84;
            case 0x11AFA8u: goto label_11afa8;
            case 0x11AFBCu: goto label_11afbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B00Cu;
    // 0x11b00c: 0x0
    ctx->pc = 0x11b00cu;
    // NOP
}
