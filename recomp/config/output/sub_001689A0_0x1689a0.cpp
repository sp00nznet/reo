#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001689A0
// Address: 0x1689a0 - 0x168ba8
void sub_001689A0_0x1689a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1689a0u;

    // 0x1689a0: 0x27bdffc0
    ctx->pc = 0x1689a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1689a4: 0x3c020027
    ctx->pc = 0x1689a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1689a8: 0xffb00010
    ctx->pc = 0x1689a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1689ac: 0xa0802d
    ctx->pc = 0x1689acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689b0: 0x2a030801
    ctx->pc = 0x1689b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2049));
    // 0x1689b4: 0x24050800
    ctx->pc = 0x1689b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1689b8: 0xa3800a
    ctx->pc = 0x1689b8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
    // 0x1689bc: 0x80282d
    ctx->pc = 0x1689bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689c0: 0x24420770
    ctx->pc = 0x1689c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1904));
    // 0x1689c4: 0xffb20020
    ctx->pc = 0x1689c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1689c8: 0x40202d
    ctx->pc = 0x1689c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689cc: 0xc0902d
    ctx->pc = 0x1689ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689d0: 0x200302d
    ctx->pc = 0x1689d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689d4: 0xffb10018
    ctx->pc = 0x1689d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1689d8: 0xffb30028
    ctx->pc = 0x1689d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1689dc: 0xffbf0030
    ctx->pc = 0x1689dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1689e0: 0xc041eac
    ctx->pc = 0x1689E0u;
    SET_GPR_U32(ctx, 31, 0x1689E8u);
    ctx->pc = 0x1689E4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689E8u; }
    }
    if (ctx->pc != 0x1689E8u) { return; }
    ctx->pc = 0x1689E8u;
    // 0x1689e8: 0x1a00001c
    ctx->pc = 0x1689E8u;
    {
        const bool branch_taken_0x1689e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1689ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1689e8) {
            ctx->pc = 0x168A5Cu;
            goto label_168a5c;
        }
    }
    ctx->pc = 0x1689F0u;
    // 0x1689f0: 0x3c020024
    ctx->pc = 0x1689f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1689f4: 0x245305a8
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1448));
label_1689f8:
    // 0x1689f8: 0x200282d
    ctx->pc = 0x1689f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689fc: 0x2610fffc
    ctx->pc = 0x1689fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x168a00: 0x220202d
    ctx->pc = 0x168a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a04: 0xc0591d0
    ctx->pc = 0x168A04u;
    SET_GPR_U32(ctx, 31, 0x168A0Cu);
    ctx->pc = 0x168A08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A0Cu; }
    }
    if (ctx->pc != 0x168A0Cu) { return; }
    ctx->pc = 0x168A0Cu;
    // 0x168a0c: 0x10400010
    ctx->pc = 0x168A0Cu;
    {
        const bool branch_taken_0x168a0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x168a0c) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x168A14u;
    // 0x168a14: 0xae53000c
    ctx->pc = 0x168a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x168a18: 0x92230007
    ctx->pc = 0x168a18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x168a1c: 0xa2430028
    ctx->pc = 0x168a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x168a20: 0x92250009
    ctx->pc = 0x168a20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x168a24: 0x92230008
    ctx->pc = 0x168a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x168a28: 0x9224000a
    ctx->pc = 0x168a28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x168a2c: 0x52c00
    ctx->pc = 0x168a2cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x168a30: 0x9226000b
    ctx->pc = 0x168a30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x168a34: 0x31e00
    ctx->pc = 0x168a34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x168a38: 0x42200
    ctx->pc = 0x168a38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x168a3c: 0x661825
    ctx->pc = 0x168a3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x168a40: 0x852025
    ctx->pc = 0x168a40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x168a44: 0x641825
    ctx->pc = 0x168a44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168a48: 0x10000004
    ctx->pc = 0x168A48u;
    {
        const bool branch_taken_0x168a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168A4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x168a48) {
            ctx->pc = 0x168A5Cu;
            goto label_168a5c;
        }
    }
    ctx->pc = 0x168A50u;
label_168a50:
    // 0x168a50: 0x1e00ffe9
    ctx->pc = 0x168A50u;
    {
        const bool branch_taken_0x168a50 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x168A54u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x168a50) {
            ctx->pc = 0x1689F8u;
            goto label_1689f8;
        }
    }
    ctx->pc = 0x168A58u;
    // 0x168a58: 0x102d
    ctx->pc = 0x168a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168a5c:
    // 0x168a5c: 0xdfb00010
    ctx->pc = 0x168a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168a60: 0xdfb10018
    ctx->pc = 0x168a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168a64: 0xdfb20020
    ctx->pc = 0x168a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168a68: 0xdfb30028
    ctx->pc = 0x168a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168a6c: 0xdfbf0030
    ctx->pc = 0x168a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168a70: 0x3e00008
    ctx->pc = 0x168A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1689F8u: goto label_1689f8;
            case 0x168A50u: goto label_168a50;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AE4u: goto label_168ae4;
            case 0x168B20u: goto label_168b20;
            case 0x168B84u: goto label_168b84;
            case 0x168B98u: goto label_168b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168A78u;
    // 0x168a78: 0x27bdffe0
    ctx->pc = 0x168a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168a7c: 0x80102d
    ctx->pc = 0x168a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a80: 0xa0302d
    ctx->pc = 0x168a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a84: 0x40282d
    ctx->pc = 0x168a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a88: 0xffbf0010
    ctx->pc = 0x168a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168a8c: 0xc05a31c
    ctx->pc = 0x168A8Cu;
    SET_GPR_U32(ctx, 31, 0x168A94u);
    ctx->pc = 0x168A90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C70_0x168c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A94u; }
    }
    if (ctx->pc != 0x168A94u) { return; }
    ctx->pc = 0x168A94u;
    // 0x168a94: 0x14400004
    ctx->pc = 0x168A94u;
    {
        const bool branch_taken_0x168a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168A98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168a94) {
            ctx->pc = 0x168AA8u;
            goto label_168aa8;
        }
    }
    ctx->pc = 0x168A9Cu;
    // 0x168a9c: 0x10000011
    ctx->pc = 0x168A9Cu;
    {
        const bool branch_taken_0x168a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168AA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168a9c) {
            ctx->pc = 0x168AE4u;
            goto label_168ae4;
        }
    }
    ctx->pc = 0x168AA4u;
    // 0x168aa4: 0x0
    ctx->pc = 0x168aa4u;
    // NOP
label_168aa8:
    // 0x168aa8: 0x93a30000
    ctx->pc = 0x168aa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168aac: 0x2402ffff
    ctx->pc = 0x168aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168ab0: 0x93a40002
    ctx->pc = 0x168ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x168ab4: 0x31900
    ctx->pc = 0x168ab4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x168ab8: 0x641821
    ctx->pc = 0x168ab8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168abc: 0x31880
    ctx->pc = 0x168abcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x168ac0: 0x3c010024
    ctx->pc = 0x168ac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x168ac4: 0x230821
    ctx->pc = 0x168ac4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x168ac8: 0x8c230680
    ctx->pc = 0x168ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 1664)));
    // 0x168acc: 0x10650005
    ctx->pc = 0x168ACCu;
    {
        const bool branch_taken_0x168acc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x168AD0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 5));
        if (branch_taken_0x168acc) {
            ctx->pc = 0x168AE4u;
            goto label_168ae4;
        }
    }
    ctx->pc = 0x168AD4u;
    // 0x168ad4: 0x831023
    ctx->pc = 0x168ad4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168ad8: 0x21080
    ctx->pc = 0x168ad8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x168adc: 0x431021
    ctx->pc = 0x168adcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ae0: 0x210c0
    ctx->pc = 0x168ae0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_168ae4:
    // 0x168ae4: 0xdfbf0010
    ctx->pc = 0x168ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ae8: 0x3e00008
    ctx->pc = 0x168AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1689F8u: goto label_1689f8;
            case 0x168A50u: goto label_168a50;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AE4u: goto label_168ae4;
            case 0x168B20u: goto label_168b20;
            case 0x168B84u: goto label_168b84;
            case 0x168B98u: goto label_168b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168AF0u;
    // 0x168af0: 0x27bdffe0
    ctx->pc = 0x168af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168af4: 0x80102d
    ctx->pc = 0x168af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168af8: 0xa0302d
    ctx->pc = 0x168af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168afc: 0x40282d
    ctx->pc = 0x168afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b00: 0xffbf0010
    ctx->pc = 0x168b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168b04: 0xc05a31c
    ctx->pc = 0x168B04u;
    SET_GPR_U32(ctx, 31, 0x168B0Cu);
    ctx->pc = 0x168B08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C70_0x168c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B0Cu; }
    }
    if (ctx->pc != 0x168B0Cu) { return; }
    ctx->pc = 0x168B0Cu;
    // 0x168b0c: 0x14400004
    ctx->pc = 0x168B0Cu;
    {
        const bool branch_taken_0x168b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168B10u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168b0c) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168B14u;
    // 0x168b14: 0x10000020
    ctx->pc = 0x168B14u;
    {
        const bool branch_taken_0x168b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168b14) {
            ctx->pc = 0x168B98u;
            goto label_168b98;
        }
    }
    ctx->pc = 0x168B1Cu;
    // 0x168b1c: 0x0
    ctx->pc = 0x168b1cu;
    // NOP
label_168b20:
    // 0x168b20: 0x93a30000
    ctx->pc = 0x168b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b24: 0x93a40002
    ctx->pc = 0x168b24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x168b28: 0x32880
    ctx->pc = 0x168b28u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x168b2c: 0x31900
    ctx->pc = 0x168b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x168b30: 0x641821
    ctx->pc = 0x168b30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168b34: 0x31880
    ctx->pc = 0x168b34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x168b38: 0x3c010024
    ctx->pc = 0x168b38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x168b3c: 0x230821
    ctx->pc = 0x168b3cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x168b40: 0x8c230680
    ctx->pc = 0x168b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 1664)));
    // 0x168b44: 0x10660014
    ctx->pc = 0x168B44u;
    {
        const bool branch_taken_0x168b44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x168B48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168b44) {
            ctx->pc = 0x168B98u;
            goto label_168b98;
        }
    }
    ctx->pc = 0x168B4Cu;
    // 0x168b4c: 0x3c040024
    ctx->pc = 0x168b4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x168b50: 0x852021
    ctx->pc = 0x168b50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x168b54: 0x8c840780
    ctx->pc = 0x168b54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 1920)));
    // 0x168b58: 0x93a20003
    ctx->pc = 0x168b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x168b5c: 0x832018
    ctx->pc = 0x168b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x168b60: 0x21080
    ctx->pc = 0x168b60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x168b64: 0x3c030024
    ctx->pc = 0x168b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x168b68: 0x621821
    ctx->pc = 0x168b68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168b6c: 0x8c630670
    ctx->pc = 0x168b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x168b70: 0x41140
    ctx->pc = 0x168b70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
    // 0x168b74: 0x318c0
    ctx->pc = 0x168b74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x168b78: 0x441023
    ctx->pc = 0x168b78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168b7c: 0x50600001
    ctx->pc = 0x168B7Cu;
    {
        const bool branch_taken_0x168b7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x168b7c) {
            ctx->pc = 0x168B80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168B84u;
            goto label_168b84;
        }
    }
    ctx->pc = 0x168B84u;
label_168b84:
    // 0x168b84: 0x21080
    ctx->pc = 0x168b84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x168b88: 0x441021
    ctx->pc = 0x168b88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168b8c: 0x210c0
    ctx->pc = 0x168b8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x168b90: 0x43001a
    ctx->pc = 0x168b90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x168b94: 0x1012
    ctx->pc = 0x168b94u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_168b98:
    // 0x168b98: 0xdfbf0010
    ctx->pc = 0x168b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b9c: 0x3e00008
    ctx->pc = 0x168B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1689F8u: goto label_1689f8;
            case 0x168A50u: goto label_168a50;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AE4u: goto label_168ae4;
            case 0x168B20u: goto label_168b20;
            case 0x168B84u: goto label_168b84;
            case 0x168B98u: goto label_168b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168BA4u;
    // 0x168ba4: 0x0
    ctx->pc = 0x168ba4u;
    // NOP
}
