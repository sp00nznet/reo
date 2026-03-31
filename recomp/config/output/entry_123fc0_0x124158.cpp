#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_123fc0
// Address: 0x123fc0 - 0x124158
void entry_123fc0_0x124158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123fc0u;

label_123fc0:
    // 0x123fc0: 0x27bdffe0
    ctx->pc = 0x123fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_123fc4:
    // 0x123fc4: 0x24020001
    ctx->pc = 0x123fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123fc8:
    // 0x123fc8: 0xffb00000
    ctx->pc = 0x123fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_123fcc:
    // 0x123fcc: 0x80802d
    ctx->pc = 0x123fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123fd0:
    // 0x123fd0: 0xffb10008
    ctx->pc = 0x123fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_123fd4:
    // 0x123fd4: 0x26110048
    ctx->pc = 0x123fd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_123fd8:
    // 0x123fd8: 0xffb20010
    ctx->pc = 0x123fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_123fdc:
    // 0x123fdc: 0xffbf0018
    ctx->pc = 0x123fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_123fe0:
    // 0x123fe0: 0x8e030004
    ctx->pc = 0x123fe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_123fe4:
    // 0x123fe4: 0x1462004c
label_123fe8:
    if (ctx->pc == 0x123FE8u) {
        ctx->pc = 0x123FE8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x123FECu;
        goto label_123fec;
    }
    ctx->pc = 0x123FE4u;
    {
        const bool branch_taken_0x123fe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123FE8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x123fe4) {
            ctx->pc = 0x124118u;
            goto label_124118;
        }
    }
    ctx->pc = 0x123FECu;
label_123fec:
    // 0x123fec: 0xc04d3e6
label_123ff0:
    if (ctx->pc == 0x123FF0u) {
        ctx->pc = 0x123FF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x123FF4u;
        goto label_123ff4;
    }
    ctx->pc = 0x123FECu;
    SET_GPR_U32(ctx, 31, 0x123FF4u);
    ctx->pc = 0x123FF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123FF4u; }
    }
    if (ctx->pc != 0x123FF4u) { return; }
    ctx->pc = 0x123FF4u;
label_123ff4:
    // 0x123ff4: 0x54400048
label_123ff8:
    if (ctx->pc == 0x123FF8u) {
        ctx->pc = 0x123FF8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x123FFCu;
        goto label_123ffc;
    }
    ctx->pc = 0x123FF4u;
    {
        const bool branch_taken_0x123ff4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x123ff4) {
            ctx->pc = 0x123FF8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x124118u;
            goto label_124118;
        }
    }
    ctx->pc = 0x123FFCu;
label_123ffc:
    // 0x123ffc: 0x8e04007c
    ctx->pc = 0x123ffcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_124000:
    // 0x124000: 0x26050068
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_124004:
    // 0x124004: 0x8e020078
    ctx->pc = 0x124004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_124008:
    // 0x124008: 0x2606006c
    ctx->pc = 0x124008u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_12400c:
    // 0x12400c: 0x40f809
label_124010:
    if (ctx->pc == 0x124010u) {
        ctx->pc = 0x124010u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x124014u;
        goto label_124014;
    }
    ctx->pc = 0x12400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124014u);
        ctx->pc = 0x124010u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123FC0u: goto label_123fc0;
            case 0x123FC4u: goto label_123fc4;
            case 0x123FC8u: goto label_123fc8;
            case 0x123FCCu: goto label_123fcc;
            case 0x123FD0u: goto label_123fd0;
            case 0x123FD4u: goto label_123fd4;
            case 0x123FD8u: goto label_123fd8;
            case 0x123FDCu: goto label_123fdc;
            case 0x123FE0u: goto label_123fe0;
            case 0x123FE4u: goto label_123fe4;
            case 0x123FE8u: goto label_123fe8;
            case 0x123FECu: goto label_123fec;
            case 0x123FF0u: goto label_123ff0;
            case 0x123FF4u: goto label_123ff4;
            case 0x123FF8u: goto label_123ff8;
            case 0x123FFCu: goto label_123ffc;
            case 0x124000u: goto label_124000;
            case 0x124004u: goto label_124004;
            case 0x124008u: goto label_124008;
            case 0x12400Cu: goto label_12400c;
            case 0x124010u: goto label_124010;
            case 0x124014u: goto label_124014;
            case 0x124018u: goto label_124018;
            case 0x12401Cu: goto label_12401c;
            case 0x124020u: goto label_124020;
            case 0x124024u: goto label_124024;
            case 0x124028u: goto label_124028;
            case 0x12402Cu: goto label_12402c;
            case 0x124030u: goto label_124030;
            case 0x124034u: goto label_124034;
            case 0x124038u: goto label_124038;
            case 0x12403Cu: goto label_12403c;
            case 0x124040u: goto label_124040;
            case 0x124044u: goto label_124044;
            case 0x124048u: goto label_124048;
            case 0x12404Cu: goto label_12404c;
            case 0x124050u: goto label_124050;
            case 0x124054u: goto label_124054;
            case 0x124058u: goto label_124058;
            case 0x12405Cu: goto label_12405c;
            case 0x124060u: goto label_124060;
            case 0x124064u: goto label_124064;
            case 0x124068u: goto label_124068;
            case 0x12406Cu: goto label_12406c;
            case 0x124070u: goto label_124070;
            case 0x124074u: goto label_124074;
            case 0x124078u: goto label_124078;
            case 0x12407Cu: goto label_12407c;
            case 0x124080u: goto label_124080;
            case 0x124084u: goto label_124084;
            case 0x124088u: goto label_124088;
            case 0x12408Cu: goto label_12408c;
            case 0x124090u: goto label_124090;
            case 0x124094u: goto label_124094;
            case 0x124098u: goto label_124098;
            case 0x12409Cu: goto label_12409c;
            case 0x1240A0u: goto label_1240a0;
            case 0x1240A4u: goto label_1240a4;
            case 0x1240A8u: goto label_1240a8;
            case 0x1240ACu: goto label_1240ac;
            case 0x1240B0u: goto label_1240b0;
            case 0x1240B4u: goto label_1240b4;
            case 0x1240B8u: goto label_1240b8;
            case 0x1240BCu: goto label_1240bc;
            case 0x1240C0u: goto label_1240c0;
            case 0x1240C4u: goto label_1240c4;
            case 0x1240C8u: goto label_1240c8;
            case 0x1240CCu: goto label_1240cc;
            case 0x1240D0u: goto label_1240d0;
            case 0x1240D4u: goto label_1240d4;
            case 0x1240D8u: goto label_1240d8;
            case 0x1240DCu: goto label_1240dc;
            case 0x1240E0u: goto label_1240e0;
            case 0x1240E4u: goto label_1240e4;
            case 0x1240E8u: goto label_1240e8;
            case 0x1240ECu: goto label_1240ec;
            case 0x1240F0u: goto label_1240f0;
            case 0x1240F4u: goto label_1240f4;
            case 0x1240F8u: goto label_1240f8;
            case 0x1240FCu: goto label_1240fc;
            case 0x124100u: goto label_124100;
            case 0x124104u: goto label_124104;
            case 0x124108u: goto label_124108;
            case 0x12410Cu: goto label_12410c;
            case 0x124110u: goto label_124110;
            case 0x124114u: goto label_124114;
            case 0x124118u: goto label_124118;
            case 0x12411Cu: goto label_12411c;
            case 0x124120u: goto label_124120;
            case 0x124124u: goto label_124124;
            case 0x124128u: goto label_124128;
            case 0x12412Cu: goto label_12412c;
            case 0x124130u: goto label_124130;
            case 0x124134u: goto label_124134;
            case 0x124138u: goto label_124138;
            case 0x12413Cu: goto label_12413c;
            case 0x124140u: goto label_124140;
            case 0x124144u: goto label_124144;
            case 0x124148u: goto label_124148;
            case 0x12414Cu: goto label_12414c;
            case 0x124150u: goto label_124150;
            case 0x124154u: goto label_124154;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124014u; }
            if (ctx->pc != 0x124014u) { return; }
        }
    }
    ctx->pc = 0x124014u;
label_124014:
    // 0x124014: 0x8e240018
    ctx->pc = 0x124014u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_124018:
    // 0x124018: 0x8e270020
    ctx->pc = 0x124018u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_12401c:
    // 0x12401c: 0x24060002
    ctx->pc = 0x12401cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_124020:
    // 0x124020: 0x8e230024
    ctx->pc = 0x124020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_124024:
    // 0x124024: 0x874823
    ctx->pc = 0x124024u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_124028:
    // 0x124028: 0x8204000e
    ctx->pc = 0x124028u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_12402c:
    // 0x12402c: 0x69102a
    ctx->pc = 0x12402cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_124030:
    // 0x124030: 0x8e250004
    ctx->pc = 0x124030u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_124034:
    // 0x124034: 0x62480b
    ctx->pc = 0x124034u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_124038:
    // 0x124038: 0x71840
    ctx->pc = 0x124038u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_12403c:
    // 0x12403c: 0x8e2b0014
    ctx->pc = 0x12403cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_124040:
    // 0x124040: 0xa9102a
    ctx->pc = 0x124040u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_124044:
    // 0x124044: 0xa2480b
    ctx->pc = 0x124044u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_124048:
    // 0x124048: 0x1635021
    ctx->pc = 0x124048u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_12404c:
    // 0x12404c: 0x1486001c
label_124050:
    if (ctx->pc == 0x124050u) {
        ctx->pc = 0x124050u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x124054u;
        goto label_124054;
    }
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x124050u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12404c) {
            ctx->pc = 0x1240C0u;
            goto label_1240c0;
        }
    }
    ctx->pc = 0x124054u;
label_124054:
    // 0x124054: 0x8e22001c
    ctx->pc = 0x124054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_124058:
    // 0x124058: 0x402d
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12405c:
    // 0x12405c: 0x471021
    ctx->pc = 0x12405cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_124060:
    // 0x124060: 0x21040
    ctx->pc = 0x124060u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_124064:
    // 0x124064: 0x19200024
label_124068:
    if (ctx->pc == 0x124068u) {
        ctx->pc = 0x124068u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x12406Cu;
        goto label_12406c;
    }
    ctx->pc = 0x124064u;
    {
        const bool branch_taken_0x124064 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x124068u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x124064) {
            ctx->pc = 0x1240F8u;
            goto label_1240f8;
        }
    }
    ctx->pc = 0x12406Cu;
label_12406c:
    // 0x12406c: 0x240382d
    ctx->pc = 0x12406cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124070:
    // 0x124070: 0x94e20000
    ctx->pc = 0x124070u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_124074:
    // 0x124074: 0x82040
    ctx->pc = 0x124074u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_124078:
    // 0x124078: 0x8a2821
    ctx->pc = 0x124078u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_12407c:
    // 0x12407c: 0x8b2021
    ctx->pc = 0x12407cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_124080:
    // 0x124080: 0x21a00
    ctx->pc = 0x124080u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_124084:
    // 0x124084: 0x21202
    ctx->pc = 0x124084u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_124088:
    // 0x124088: 0x431025
    ctx->pc = 0x124088u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12408c:
    // 0x12408c: 0x25080001
    ctx->pc = 0x12408cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_124090:
    // 0x124090: 0xa4a20000
    ctx->pc = 0x124090u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_124094:
    // 0x124094: 0x109302a
    ctx->pc = 0x124094u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_124098:
    // 0x124098: 0x94e20002
    ctx->pc = 0x124098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_12409c:
    // 0x12409c: 0x24e70004
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_1240a0:
    // 0x1240a0: 0x21a00
    ctx->pc = 0x1240a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1240a4:
    // 0x1240a4: 0x21202
    ctx->pc = 0x1240a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1240a8:
    // 0x1240a8: 0x431025
    ctx->pc = 0x1240a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1240ac:
    // 0x1240ac: 0x14c0fff0
label_1240b0:
    if (ctx->pc == 0x1240B0u) {
        ctx->pc = 0x1240B0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1240B4u;
        goto label_1240b4;
    }
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1240B0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x124070u;
            goto label_124070;
        }
    }
    ctx->pc = 0x1240B4u;
label_1240b4:
    // 0x1240b4: 0x10000010
label_1240b8:
    if (ctx->pc == 0x1240B8u) {
        ctx->pc = 0x1240B8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1240BCu;
        goto label_1240bc;
    }
    ctx->pc = 0x1240B4u;
    {
        const bool branch_taken_0x1240b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1240B8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1240b4) {
            ctx->pc = 0x1240F8u;
            goto label_1240f8;
        }
    }
    ctx->pc = 0x1240BCu;
label_1240bc:
    // 0x1240bc: 0x0
    ctx->pc = 0x1240bcu;
    // NOP
label_1240c0:
    // 0x1240c0: 0x1920000d
label_1240c4:
    if (ctx->pc == 0x1240C4u) {
        ctx->pc = 0x1240C4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1240C8u;
        goto label_1240c8;
    }
    ctx->pc = 0x1240C0u;
    {
        const bool branch_taken_0x1240c0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1240C4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1240c0) {
            ctx->pc = 0x1240F8u;
            goto label_1240f8;
        }
    }
    ctx->pc = 0x1240C8u;
label_1240c8:
    // 0x1240c8: 0x82040
    ctx->pc = 0x1240c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_1240cc:
    // 0x1240cc: 0x25080001
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1240d0:
    // 0x1240d0: 0x921021
    ctx->pc = 0x1240d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1240d4:
    // 0x1240d4: 0x8a2021
    ctx->pc = 0x1240d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1240d8:
    // 0x1240d8: 0x94420000
    ctx->pc = 0x1240d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1240dc:
    // 0x1240dc: 0x109282a
    ctx->pc = 0x1240dcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1240e0:
    // 0x1240e0: 0x21a00
    ctx->pc = 0x1240e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1240e4:
    // 0x1240e4: 0x21202
    ctx->pc = 0x1240e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1240e8:
    // 0x1240e8: 0x431025
    ctx->pc = 0x1240e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1240ec:
    // 0x1240ec: 0x14a0fff6
label_1240f0:
    if (ctx->pc == 0x1240F0u) {
        ctx->pc = 0x1240F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1240F4u;
        goto label_1240f4;
    }
    ctx->pc = 0x1240ECu;
    {
        const bool branch_taken_0x1240ec = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1240F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1240ec) {
            ctx->pc = 0x1240C8u;
            goto label_1240c8;
        }
    }
    ctx->pc = 0x1240F4u;
label_1240f4:
    // 0x1240f4: 0x9203000e
    ctx->pc = 0x1240f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1240f8:
    // 0x1240f8: 0x31600
    ctx->pc = 0x1240f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_1240fc:
    // 0x1240fc: 0x24030002
    ctx->pc = 0x1240fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_124100:
    // 0x124100: 0x21603
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_124104:
    // 0x124104: 0xae030004
    ctx->pc = 0x124104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_124108:
    // 0x124108: 0x1221018
    ctx->pc = 0x124108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_12410c:
    // 0x12410c: 0xae090090
    ctx->pc = 0x12410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_124110:
    // 0x124110: 0x21040
    ctx->pc = 0x124110u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_124114:
    // 0x124114: 0xae020094
    ctx->pc = 0x124114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_124118:
    // 0x124118: 0x24020002
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12411c:
    // 0x12411c: 0x54620009
label_124120:
    if (ctx->pc == 0x124120u) {
        ctx->pc = 0x124120u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x124124u;
        goto label_124124;
    }
    ctx->pc = 0x12411Cu;
    {
        const bool branch_taken_0x12411c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12411c) {
            ctx->pc = 0x124120u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x124144u;
            goto label_124144;
        }
    }
    ctx->pc = 0x124124u;
label_124124:
    // 0x124124: 0x8e030080
    ctx->pc = 0x124124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_124128:
    // 0x124128: 0x8e040084
    ctx->pc = 0x124128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_12412c:
    // 0x12412c: 0x8e050094
    ctx->pc = 0x12412cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_124130:
    // 0x124130: 0x60f809
label_124134:
    if (ctx->pc == 0x124134u) {
        ctx->pc = 0x124134u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x124138u;
        goto label_124138;
    }
    ctx->pc = 0x124130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124138u);
        ctx->pc = 0x124134u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123FC0u: goto label_123fc0;
            case 0x123FC4u: goto label_123fc4;
            case 0x123FC8u: goto label_123fc8;
            case 0x123FCCu: goto label_123fcc;
            case 0x123FD0u: goto label_123fd0;
            case 0x123FD4u: goto label_123fd4;
            case 0x123FD8u: goto label_123fd8;
            case 0x123FDCu: goto label_123fdc;
            case 0x123FE0u: goto label_123fe0;
            case 0x123FE4u: goto label_123fe4;
            case 0x123FE8u: goto label_123fe8;
            case 0x123FECu: goto label_123fec;
            case 0x123FF0u: goto label_123ff0;
            case 0x123FF4u: goto label_123ff4;
            case 0x123FF8u: goto label_123ff8;
            case 0x123FFCu: goto label_123ffc;
            case 0x124000u: goto label_124000;
            case 0x124004u: goto label_124004;
            case 0x124008u: goto label_124008;
            case 0x12400Cu: goto label_12400c;
            case 0x124010u: goto label_124010;
            case 0x124014u: goto label_124014;
            case 0x124018u: goto label_124018;
            case 0x12401Cu: goto label_12401c;
            case 0x124020u: goto label_124020;
            case 0x124024u: goto label_124024;
            case 0x124028u: goto label_124028;
            case 0x12402Cu: goto label_12402c;
            case 0x124030u: goto label_124030;
            case 0x124034u: goto label_124034;
            case 0x124038u: goto label_124038;
            case 0x12403Cu: goto label_12403c;
            case 0x124040u: goto label_124040;
            case 0x124044u: goto label_124044;
            case 0x124048u: goto label_124048;
            case 0x12404Cu: goto label_12404c;
            case 0x124050u: goto label_124050;
            case 0x124054u: goto label_124054;
            case 0x124058u: goto label_124058;
            case 0x12405Cu: goto label_12405c;
            case 0x124060u: goto label_124060;
            case 0x124064u: goto label_124064;
            case 0x124068u: goto label_124068;
            case 0x12406Cu: goto label_12406c;
            case 0x124070u: goto label_124070;
            case 0x124074u: goto label_124074;
            case 0x124078u: goto label_124078;
            case 0x12407Cu: goto label_12407c;
            case 0x124080u: goto label_124080;
            case 0x124084u: goto label_124084;
            case 0x124088u: goto label_124088;
            case 0x12408Cu: goto label_12408c;
            case 0x124090u: goto label_124090;
            case 0x124094u: goto label_124094;
            case 0x124098u: goto label_124098;
            case 0x12409Cu: goto label_12409c;
            case 0x1240A0u: goto label_1240a0;
            case 0x1240A4u: goto label_1240a4;
            case 0x1240A8u: goto label_1240a8;
            case 0x1240ACu: goto label_1240ac;
            case 0x1240B0u: goto label_1240b0;
            case 0x1240B4u: goto label_1240b4;
            case 0x1240B8u: goto label_1240b8;
            case 0x1240BCu: goto label_1240bc;
            case 0x1240C0u: goto label_1240c0;
            case 0x1240C4u: goto label_1240c4;
            case 0x1240C8u: goto label_1240c8;
            case 0x1240CCu: goto label_1240cc;
            case 0x1240D0u: goto label_1240d0;
            case 0x1240D4u: goto label_1240d4;
            case 0x1240D8u: goto label_1240d8;
            case 0x1240DCu: goto label_1240dc;
            case 0x1240E0u: goto label_1240e0;
            case 0x1240E4u: goto label_1240e4;
            case 0x1240E8u: goto label_1240e8;
            case 0x1240ECu: goto label_1240ec;
            case 0x1240F0u: goto label_1240f0;
            case 0x1240F4u: goto label_1240f4;
            case 0x1240F8u: goto label_1240f8;
            case 0x1240FCu: goto label_1240fc;
            case 0x124100u: goto label_124100;
            case 0x124104u: goto label_124104;
            case 0x124108u: goto label_124108;
            case 0x12410Cu: goto label_12410c;
            case 0x124110u: goto label_124110;
            case 0x124114u: goto label_124114;
            case 0x124118u: goto label_124118;
            case 0x12411Cu: goto label_12411c;
            case 0x124120u: goto label_124120;
            case 0x124124u: goto label_124124;
            case 0x124128u: goto label_124128;
            case 0x12412Cu: goto label_12412c;
            case 0x124130u: goto label_124130;
            case 0x124134u: goto label_124134;
            case 0x124138u: goto label_124138;
            case 0x12413Cu: goto label_12413c;
            case 0x124140u: goto label_124140;
            case 0x124144u: goto label_124144;
            case 0x124148u: goto label_124148;
            case 0x12414Cu: goto label_12414c;
            case 0x124150u: goto label_124150;
            case 0x124154u: goto label_124154;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124138u; }
            if (ctx->pc != 0x124138u) { return; }
        }
    }
    ctx->pc = 0x124138u;
label_124138:
    // 0x124138: 0x24020003
    ctx->pc = 0x124138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_12413c:
    // 0x12413c: 0xae020004
    ctx->pc = 0x12413cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_124140:
    // 0x124140: 0xdfb00000
    ctx->pc = 0x124140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124144:
    // 0x124144: 0xdfb10008
    ctx->pc = 0x124144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124148:
    // 0x124148: 0xdfb20010
    ctx->pc = 0x124148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12414c:
    // 0x12414c: 0xdfbf0018
    ctx->pc = 0x12414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_124150:
    // 0x124150: 0x3e00008
label_124154:
    if (ctx->pc == 0x124154u) {
        ctx->pc = 0x124154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x124158u;
        goto label_fallthrough_0x124150;
    }
    ctx->pc = 0x124150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123FC0u: goto label_123fc0;
            case 0x123FC4u: goto label_123fc4;
            case 0x123FC8u: goto label_123fc8;
            case 0x123FCCu: goto label_123fcc;
            case 0x123FD0u: goto label_123fd0;
            case 0x123FD4u: goto label_123fd4;
            case 0x123FD8u: goto label_123fd8;
            case 0x123FDCu: goto label_123fdc;
            case 0x123FE0u: goto label_123fe0;
            case 0x123FE4u: goto label_123fe4;
            case 0x123FE8u: goto label_123fe8;
            case 0x123FECu: goto label_123fec;
            case 0x123FF0u: goto label_123ff0;
            case 0x123FF4u: goto label_123ff4;
            case 0x123FF8u: goto label_123ff8;
            case 0x123FFCu: goto label_123ffc;
            case 0x124000u: goto label_124000;
            case 0x124004u: goto label_124004;
            case 0x124008u: goto label_124008;
            case 0x12400Cu: goto label_12400c;
            case 0x124010u: goto label_124010;
            case 0x124014u: goto label_124014;
            case 0x124018u: goto label_124018;
            case 0x12401Cu: goto label_12401c;
            case 0x124020u: goto label_124020;
            case 0x124024u: goto label_124024;
            case 0x124028u: goto label_124028;
            case 0x12402Cu: goto label_12402c;
            case 0x124030u: goto label_124030;
            case 0x124034u: goto label_124034;
            case 0x124038u: goto label_124038;
            case 0x12403Cu: goto label_12403c;
            case 0x124040u: goto label_124040;
            case 0x124044u: goto label_124044;
            case 0x124048u: goto label_124048;
            case 0x12404Cu: goto label_12404c;
            case 0x124050u: goto label_124050;
            case 0x124054u: goto label_124054;
            case 0x124058u: goto label_124058;
            case 0x12405Cu: goto label_12405c;
            case 0x124060u: goto label_124060;
            case 0x124064u: goto label_124064;
            case 0x124068u: goto label_124068;
            case 0x12406Cu: goto label_12406c;
            case 0x124070u: goto label_124070;
            case 0x124074u: goto label_124074;
            case 0x124078u: goto label_124078;
            case 0x12407Cu: goto label_12407c;
            case 0x124080u: goto label_124080;
            case 0x124084u: goto label_124084;
            case 0x124088u: goto label_124088;
            case 0x12408Cu: goto label_12408c;
            case 0x124090u: goto label_124090;
            case 0x124094u: goto label_124094;
            case 0x124098u: goto label_124098;
            case 0x12409Cu: goto label_12409c;
            case 0x1240A0u: goto label_1240a0;
            case 0x1240A4u: goto label_1240a4;
            case 0x1240A8u: goto label_1240a8;
            case 0x1240ACu: goto label_1240ac;
            case 0x1240B0u: goto label_1240b0;
            case 0x1240B4u: goto label_1240b4;
            case 0x1240B8u: goto label_1240b8;
            case 0x1240BCu: goto label_1240bc;
            case 0x1240C0u: goto label_1240c0;
            case 0x1240C4u: goto label_1240c4;
            case 0x1240C8u: goto label_1240c8;
            case 0x1240CCu: goto label_1240cc;
            case 0x1240D0u: goto label_1240d0;
            case 0x1240D4u: goto label_1240d4;
            case 0x1240D8u: goto label_1240d8;
            case 0x1240DCu: goto label_1240dc;
            case 0x1240E0u: goto label_1240e0;
            case 0x1240E4u: goto label_1240e4;
            case 0x1240E8u: goto label_1240e8;
            case 0x1240ECu: goto label_1240ec;
            case 0x1240F0u: goto label_1240f0;
            case 0x1240F4u: goto label_1240f4;
            case 0x1240F8u: goto label_1240f8;
            case 0x1240FCu: goto label_1240fc;
            case 0x124100u: goto label_124100;
            case 0x124104u: goto label_124104;
            case 0x124108u: goto label_124108;
            case 0x12410Cu: goto label_12410c;
            case 0x124110u: goto label_124110;
            case 0x124114u: goto label_124114;
            case 0x124118u: goto label_124118;
            case 0x12411Cu: goto label_12411c;
            case 0x124120u: goto label_124120;
            case 0x124124u: goto label_124124;
            case 0x124128u: goto label_124128;
            case 0x12412Cu: goto label_12412c;
            case 0x124130u: goto label_124130;
            case 0x124134u: goto label_124134;
            case 0x124138u: goto label_124138;
            case 0x12413Cu: goto label_12413c;
            case 0x124140u: goto label_124140;
            case 0x124144u: goto label_124144;
            case 0x124148u: goto label_124148;
            case 0x12414Cu: goto label_12414c;
            case 0x124150u: goto label_124150;
            case 0x124154u: goto label_124154;
            default: break;
        }
        return;
    }
label_fallthrough_0x124150:
    ctx->pc = 0x124158u;
}
