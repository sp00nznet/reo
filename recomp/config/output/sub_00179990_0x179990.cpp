#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179990
// Address: 0x179990 - 0x179b38
void sub_00179990_0x179990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179990u;

    // 0x179990: 0x80830000
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179994: 0x2402002e
    ctx->pc = 0x179994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x179998: 0x1062001c
    ctx->pc = 0x179998u;
    {
        const bool branch_taken_0x179998 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17999Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179998) {
            ctx->pc = 0x179A0Cu;
            goto label_179a0c;
        }
    }
    ctx->pc = 0x1799A0u;
    // 0x1799a0: 0x24020020
    ctx->pc = 0x1799a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1799a4: 0x5062001a
    ctx->pc = 0x1799A4u;
    {
        const bool branch_taken_0x1799a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1799a4) {
            ctx->pc = 0x1799A8u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x179A10u;
            goto label_179a10;
        }
    }
    ctx->pc = 0x1799ACu;
    // 0x1799ac: 0x50600018
    ctx->pc = 0x1799ACu;
    {
        const bool branch_taken_0x1799ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1799ac) {
            ctx->pc = 0x1799B0u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x179A10u;
            goto label_179a10;
        }
    }
    ctx->pc = 0x1799B4u;
    // 0x1799b4: 0x2462ffd0
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1799b8: 0x2c42000a
    ctx->pc = 0x1799b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x1799bc: 0x50400014
    ctx->pc = 0x1799BCu;
    {
        const bool branch_taken_0x1799bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1799bc) {
            ctx->pc = 0x1799C0u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x179A10u;
            goto label_179a10;
        }
    }
    ctx->pc = 0x1799C4u;
    // 0x1799c4: 0x2408002e
    ctx->pc = 0x1799c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1799c8: 0x24070020
    ctx->pc = 0x1799c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1799cc: 0x61080
    ctx->pc = 0x1799ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_1799d0:
    // 0x1799d0: 0x24840001
    ctx->pc = 0x1799d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1799d4: 0x461021
    ctx->pc = 0x1799d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1799d8: 0x21040
    ctx->pc = 0x1799d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1799dc: 0x431021
    ctx->pc = 0x1799dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1799e0: 0x80830000
    ctx->pc = 0x1799e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1799e4: 0x2446ffd0
    ctx->pc = 0x1799e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1799e8: 0x10680008
    ctx->pc = 0x1799E8u;
    {
        const bool branch_taken_0x1799e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        ctx->pc = 0x1799ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
        if (branch_taken_0x1799e8) {
            ctx->pc = 0x179A0Cu;
            goto label_179a0c;
        }
    }
    ctx->pc = 0x1799F0u;
    // 0x1799f0: 0x50670007
    ctx->pc = 0x1799F0u;
    {
        const bool branch_taken_0x1799f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        if (branch_taken_0x1799f0) {
            ctx->pc = 0x1799F4u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x179A10u;
            goto label_179a10;
        }
    }
    ctx->pc = 0x1799F8u;
    // 0x1799f8: 0x50600005
    ctx->pc = 0x1799F8u;
    {
        const bool branch_taken_0x1799f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1799f8) {
            ctx->pc = 0x1799FCu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x179A10u;
            goto label_179a10;
        }
    }
    ctx->pc = 0x179A00u;
    // 0x179a00: 0x2c42000a
    ctx->pc = 0x179a00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x179a04: 0x5440fff2
    ctx->pc = 0x179A04u;
    {
        const bool branch_taken_0x179a04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x179a04) {
            ctx->pc = 0x179A08u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x1799D0u;
            goto label_1799d0;
        }
    }
    ctx->pc = 0x179A0Cu;
label_179a0c:
    // 0x179a0c: 0xaca60000
    ctx->pc = 0x179a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_179a10:
    // 0x179a10: 0x3e00008
    ctx->pc = 0x179A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799D0u: goto label_1799d0;
            case 0x179A0Cu: goto label_179a0c;
            case 0x179A10u: goto label_179a10;
            case 0x179A50u: goto label_179a50;
            case 0x179A98u: goto label_179a98;
            case 0x179AE0u: goto label_179ae0;
            case 0x179B28u: goto label_179b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179A18u;
    // 0x179a18: 0x27bdffe0
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179a1c: 0xffb00000
    ctx->pc = 0x179a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179a20: 0xffb10008
    ctx->pc = 0x179a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179a24: 0xa0882d
    ctx->pc = 0x179a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a28: 0xffbf0010
    ctx->pc = 0x179a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179a2c: 0x8c820004
    ctx->pc = 0x179a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179a30: 0xc05e4a6
    ctx->pc = 0x179A30u;
    SET_GPR_U32(ctx, 31, 0x179A38u);
    ctx->pc = 0x179A34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A38u; }
    }
    if (ctx->pc != 0x179A38u) { return; }
    ctx->pc = 0x179A38u;
    // 0x179a38: 0x50400005
    ctx->pc = 0x179A38u;
    {
        const bool branch_taken_0x179a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179a38) {
            ctx->pc = 0x179A3Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179A50u;
            goto label_179a50;
        }
    }
    ctx->pc = 0x179A40u;
    // 0x179a40: 0x92030000
    ctx->pc = 0x179a40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179a44: 0x24020001
    ctx->pc = 0x179a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179a48: 0xae230000
    ctx->pc = 0x179a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179a4c: 0xdfb00000
    ctx->pc = 0x179a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179a50:
    // 0x179a50: 0xdfb10008
    ctx->pc = 0x179a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179a54: 0xdfbf0010
    ctx->pc = 0x179a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179a58: 0x3e00008
    ctx->pc = 0x179A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799D0u: goto label_1799d0;
            case 0x179A0Cu: goto label_179a0c;
            case 0x179A10u: goto label_179a10;
            case 0x179A50u: goto label_179a50;
            case 0x179A98u: goto label_179a98;
            case 0x179AE0u: goto label_179ae0;
            case 0x179B28u: goto label_179b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179A60u;
    // 0x179a60: 0x27bdffe0
    ctx->pc = 0x179a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179a64: 0xffb00000
    ctx->pc = 0x179a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179a68: 0xffb10008
    ctx->pc = 0x179a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179a6c: 0xa0882d
    ctx->pc = 0x179a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a70: 0xffbf0010
    ctx->pc = 0x179a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179a74: 0x8c820004
    ctx->pc = 0x179a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179a78: 0xc05e4a6
    ctx->pc = 0x179A78u;
    SET_GPR_U32(ctx, 31, 0x179A80u);
    ctx->pc = 0x179A7Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A80u; }
    }
    if (ctx->pc != 0x179A80u) { return; }
    ctx->pc = 0x179A80u;
    // 0x179a80: 0x50400005
    ctx->pc = 0x179A80u;
    {
        const bool branch_taken_0x179a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179a80) {
            ctx->pc = 0x179A84u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179A98u;
            goto label_179a98;
        }
    }
    ctx->pc = 0x179A88u;
    // 0x179a88: 0x92030001
    ctx->pc = 0x179a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x179a8c: 0x24020001
    ctx->pc = 0x179a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179a90: 0xae230000
    ctx->pc = 0x179a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179a94: 0xdfb00000
    ctx->pc = 0x179a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179a98:
    // 0x179a98: 0xdfb10008
    ctx->pc = 0x179a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179a9c: 0xdfbf0010
    ctx->pc = 0x179a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179aa0: 0x3e00008
    ctx->pc = 0x179AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799D0u: goto label_1799d0;
            case 0x179A0Cu: goto label_179a0c;
            case 0x179A10u: goto label_179a10;
            case 0x179A50u: goto label_179a50;
            case 0x179A98u: goto label_179a98;
            case 0x179AE0u: goto label_179ae0;
            case 0x179B28u: goto label_179b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179AA8u;
    // 0x179aa8: 0x27bdffe0
    ctx->pc = 0x179aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179aac: 0xffb00000
    ctx->pc = 0x179aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179ab0: 0xffb10008
    ctx->pc = 0x179ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179ab4: 0xa0882d
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab8: 0xffbf0010
    ctx->pc = 0x179ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179abc: 0x8c820004
    ctx->pc = 0x179abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179ac0: 0xc05e4a6
    ctx->pc = 0x179AC0u;
    SET_GPR_U32(ctx, 31, 0x179AC8u);
    ctx->pc = 0x179AC4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AC8u; }
    }
    if (ctx->pc != 0x179AC8u) { return; }
    ctx->pc = 0x179AC8u;
    // 0x179ac8: 0x50400005
    ctx->pc = 0x179AC8u;
    {
        const bool branch_taken_0x179ac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179ac8) {
            ctx->pc = 0x179ACCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179AE0u;
            goto label_179ae0;
        }
    }
    ctx->pc = 0x179AD0u;
    // 0x179ad0: 0x92030002
    ctx->pc = 0x179ad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x179ad4: 0x24020001
    ctx->pc = 0x179ad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ad8: 0xae230000
    ctx->pc = 0x179ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179adc: 0xdfb00000
    ctx->pc = 0x179adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179ae0:
    // 0x179ae0: 0xdfb10008
    ctx->pc = 0x179ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179ae4: 0xdfbf0010
    ctx->pc = 0x179ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179ae8: 0x3e00008
    ctx->pc = 0x179AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799D0u: goto label_1799d0;
            case 0x179A0Cu: goto label_179a0c;
            case 0x179A10u: goto label_179a10;
            case 0x179A50u: goto label_179a50;
            case 0x179A98u: goto label_179a98;
            case 0x179AE0u: goto label_179ae0;
            case 0x179B28u: goto label_179b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179AF0u;
    // 0x179af0: 0x27bdffe0
    ctx->pc = 0x179af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179af4: 0xffb00000
    ctx->pc = 0x179af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179af8: 0xffb10008
    ctx->pc = 0x179af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179afc: 0xa0882d
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b00: 0xffbf0010
    ctx->pc = 0x179b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179b04: 0x8c820004
    ctx->pc = 0x179b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179b08: 0xc05e4a6
    ctx->pc = 0x179B08u;
    SET_GPR_U32(ctx, 31, 0x179B10u);
    ctx->pc = 0x179B0Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x179298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179298_0x179298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B10u; }
    }
    if (ctx->pc != 0x179B10u) { return; }
    ctx->pc = 0x179B10u;
    // 0x179b10: 0x50400005
    ctx->pc = 0x179B10u;
    {
        const bool branch_taken_0x179b10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179b10) {
            ctx->pc = 0x179B14u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x179B28u;
            goto label_179b28;
        }
    }
    ctx->pc = 0x179B18u;
    // 0x179b18: 0x92030003
    ctx->pc = 0x179b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x179b1c: 0x24020001
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b20: 0xae230000
    ctx->pc = 0x179b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x179b24: 0xdfb00000
    ctx->pc = 0x179b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179b28:
    // 0x179b28: 0xdfb10008
    ctx->pc = 0x179b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179b2c: 0xdfbf0010
    ctx->pc = 0x179b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b30: 0x3e00008
    ctx->pc = 0x179B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799D0u: goto label_1799d0;
            case 0x179A0Cu: goto label_179a0c;
            case 0x179A10u: goto label_179a10;
            case 0x179A50u: goto label_179a50;
            case 0x179A98u: goto label_179a98;
            case 0x179AE0u: goto label_179ae0;
            case 0x179B28u: goto label_179b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179B38u;
}
