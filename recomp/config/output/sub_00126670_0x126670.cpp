#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00126670
// Address: 0x126670 - 0x126798
void sub_00126670_0x126670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126670u;

    // 0x126670: 0x3c087fff
    ctx->pc = 0x126670u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32767 << 16));
    // 0x126674: 0x24a5ffff
    ctx->pc = 0x126674u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x126678: 0x3508ffff
    ctx->pc = 0x126678u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x12667c: 0x24090080
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    // 0x126680: 0x18a00012
    ctx->pc = 0x126680u;
    {
        const bool branch_taken_0x126680 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x126684u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126680) {
            ctx->pc = 0x1266CCu;
            goto label_1266cc;
        }
    }
    ctx->pc = 0x126688u;
    // 0x126688: 0x84820000
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12668c: 0x54490004
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        if (branch_taken_0x12668c) {
            ctx->pc = 0x126690u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1266A0u;
            goto label_1266a0;
        }
    }
    ctx->pc = 0x126694u;
    // 0x126694: 0x1000000d
    ctx->pc = 0x126694u;
    {
        const bool branch_taken_0x126694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126698u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126694) {
            ctx->pc = 0x1266CCu;
            goto label_1266cc;
        }
    }
    ctx->pc = 0x12669Cu;
    // 0x12669c: 0x0
    ctx->pc = 0x12669cu;
    // NOP
label_1266a0:
    // 0x1266a0: 0xe5102a
    ctx->pc = 0x1266a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x1266a4: 0x10400009
    ctx->pc = 0x1266A4u;
    {
        const bool branch_taken_0x1266a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1266A8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        if (branch_taken_0x1266a4) {
            ctx->pc = 0x1266CCu;
            goto label_1266cc;
        }
    }
    ctx->pc = 0x1266ACu;
    // 0x1266ac: 0x84620000
    ctx->pc = 0x1266acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1266b0: 0x0
    ctx->pc = 0x1266b0u;
    // NOP
    // 0x1266b4: 0x0
    ctx->pc = 0x1266b4u;
    // NOP
    // 0x1266b8: 0x0
    ctx->pc = 0x1266b8u;
    // NOP
    // 0x1266bc: 0x5449fff8
    ctx->pc = 0x1266BCu;
    {
        const bool branch_taken_0x1266bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        if (branch_taken_0x1266bc) {
            ctx->pc = 0x1266C0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1266A0u;
            goto label_1266a0;
        }
    }
    ctx->pc = 0x1266C4u;
    // 0x1266c4: 0xe8102a
    ctx->pc = 0x1266c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x1266c8: 0xe2400b
    ctx->pc = 0x1266c8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 7));
label_1266cc:
    // 0x1266cc: 0x3c027fff
    ctx->pc = 0x1266ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1266d0: 0x3442ffff
    ctx->pc = 0x1266d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1266d4: 0x51020004
    ctx->pc = 0x1266D4u;
    {
        const bool branch_taken_0x1266d4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        if (branch_taken_0x1266d4) {
            ctx->pc = 0x1266D8u;
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1266E8u;
            goto label_1266e8;
        }
    }
    ctx->pc = 0x1266DCu;
    // 0x1266dc: 0xa4c80000
    ctx->pc = 0x1266dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1266e0: 0x3e00008
    ctx->pc = 0x1266E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1266E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1266A0u: goto label_1266a0;
            case 0x1266CCu: goto label_1266cc;
            case 0x1266E8u: goto label_1266e8;
            case 0x12677Cu: goto label_12677c;
            case 0x126780u: goto label_126780;
            case 0x126784u: goto label_126784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1266E8u;
label_1266e8:
    // 0x1266e8: 0x3e00008
    ctx->pc = 0x1266E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1266ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1266A0u: goto label_1266a0;
            case 0x1266CCu: goto label_1266cc;
            case 0x1266E8u: goto label_1266e8;
            case 0x12677Cu: goto label_12677c;
            case 0x126780u: goto label_126780;
            case 0x126784u: goto label_126784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1266F0u;
    // 0x1266f0: 0xa0402d
    ctx->pc = 0x1266f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266f4: 0x27bdffe0
    ctx->pc = 0x1266f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1266f8: 0x29030010
    ctx->pc = 0x1266f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 16));
    // 0x1266fc: 0xffb10008
    ctx->pc = 0x1266fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126700: 0xffb00000
    ctx->pc = 0x126700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126704: 0x80382d
    ctx->pc = 0x126704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126708: 0xffbf0010
    ctx->pc = 0x126708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12670c: 0xc0882d
    ctx->pc = 0x12670cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126710: 0x1460001b
    ctx->pc = 0x126710u;
    {
        const bool branch_taken_0x126710 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x126714u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126710) {
            ctx->pc = 0x126780u;
            goto label_126780;
        }
    }
    ctx->pc = 0x126718u;
    // 0x126718: 0x90e30000
    ctx->pc = 0x126718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12671c: 0x34058000
    ctx->pc = 0x12671cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x126720: 0x90e40001
    ctx->pc = 0x126720u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x126724: 0x31a00
    ctx->pc = 0x126724u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126728: 0x832025
    ctx->pc = 0x126728u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12672c: 0x14850015
    ctx->pc = 0x12672Cu;
    {
        const bool branch_taken_0x12672c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x126730u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12672c) {
            ctx->pc = 0x126784u;
            goto label_126784;
        }
    }
    ctx->pc = 0x126734u;
    // 0x126734: 0x90e30002
    ctx->pc = 0x126734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x126738: 0x24057fff
    ctx->pc = 0x126738u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12673c: 0x90e40003
    ctx->pc = 0x12673cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x126740: 0xa8282a
    ctx->pc = 0x126740u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
    // 0x126744: 0x31a00
    ctx->pc = 0x126744u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x126748: 0x641825
    ctx->pc = 0x126748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12674c: 0x2464fffe
    ctx->pc = 0x12674cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x126750: 0x24700004
    ctx->pc = 0x126750u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4));
    // 0x126754: 0x10a0000a
    ctx->pc = 0x126754u;
    {
        const bool branch_taken_0x126754 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x126758u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        if (branch_taken_0x126754) {
            ctx->pc = 0x126780u;
            goto label_126780;
        }
    }
    ctx->pc = 0x12675Cu;
    // 0x12675c: 0x3c050024
    ctx->pc = 0x12675cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x126760: 0x24060006
    ctx->pc = 0x126760u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x126764: 0xc041e86
    ctx->pc = 0x126764u;
    SET_GPR_U32(ctx, 31, 0x12676Cu);
    ctx->pc = 0x126768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941664));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12676Cu; }
    }
    if (ctx->pc != 0x12676Cu) { return; }
    ctx->pc = 0x12676Cu;
    // 0x12676c: 0x14400004
    ctx->pc = 0x12676Cu;
    {
        const bool branch_taken_0x12676c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x126770u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12676c) {
            ctx->pc = 0x126780u;
            goto label_126780;
        }
    }
    ctx->pc = 0x126774u;
    // 0x126774: 0x56200001
    ctx->pc = 0x126774u;
    {
        const bool branch_taken_0x126774 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x126774) {
            ctx->pc = 0x126778u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
            ctx->pc = 0x12677Cu;
            goto label_12677c;
        }
    }
    ctx->pc = 0x12677Cu;
label_12677c:
    // 0x12677c: 0x24020001
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_126780:
    // 0x126780: 0xdfb00000
    ctx->pc = 0x126780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126784:
    // 0x126784: 0xdfb10008
    ctx->pc = 0x126784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126788: 0xdfbf0010
    ctx->pc = 0x126788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12678c: 0x3e00008
    ctx->pc = 0x12678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1266A0u: goto label_1266a0;
            case 0x1266CCu: goto label_1266cc;
            case 0x1266E8u: goto label_1266e8;
            case 0x12677Cu: goto label_12677c;
            case 0x126780u: goto label_126780;
            case 0x126784u: goto label_126784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126794u;
    // 0x126794: 0x0
    ctx->pc = 0x126794u;
    // NOP
}
