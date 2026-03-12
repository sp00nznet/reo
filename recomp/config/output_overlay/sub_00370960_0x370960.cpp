#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370960
// Address: 0x370960 - 0x370ac0
void sub_00370960_0x370960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370960u;

    // 0x370960: 0x27bdff80
    ctx->pc = 0x370960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x370964: 0xffbf0070
    ctx->pc = 0x370964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x370968: 0x7fb60060
    ctx->pc = 0x370968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37096c: 0x7fb50050
    ctx->pc = 0x37096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x370970: 0x7fb40040
    ctx->pc = 0x370970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x370974: 0x7fb30030
    ctx->pc = 0x370974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x370978: 0xa02d
    ctx->pc = 0x370978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37097c: 0x7fb20020
    ctx->pc = 0x37097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370980: 0x982d
    ctx->pc = 0x370980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370984: 0x7fb10010
    ctx->pc = 0x370984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370988: 0x80902d
    ctx->pc = 0x370988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37098c: 0x7fb00000
    ctx->pc = 0x37098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370990: 0xa0882d
    ctx->pc = 0x370990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370994: 0x1000000b
    ctx->pc = 0x370994u;
    {
        const bool branch_taken_0x370994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370998u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x370994) {
            ctx->pc = 0x3709C4u;
            goto label_3709c4;
        }
    }
    ctx->pc = 0x37099Cu;
label_37099c:
    // 0x37099c: 0x1318c0
    ctx->pc = 0x37099cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x3709a0: 0x210c0
    ctx->pc = 0x3709a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x3709a4: 0x2432021
    ctx->pc = 0x3709a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3709a8: 0x2422821
    ctx->pc = 0x3709a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3709ac: 0x26620002
    ctx->pc = 0x3709acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2));
    // 0x3709b0: 0x210c0
    ctx->pc = 0x3709b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x3709b4: 0xc0dc1d8
    ctx->pc = 0x3709B4u;
    SET_GPR_U32(ctx, 31, 0x3709BCu);
    ctx->pc = 0x3709B8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x370760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370760_0x370760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3709BCu; }
    }
    if (ctx->pc != 0x3709BCu) { return; }
    ctx->pc = 0x3709BCu;
    // 0x3709bc: 0x282a021
    ctx->pc = 0x3709bcu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3709c0: 0x26730001
    ctx->pc = 0x3709c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_3709c4:
    // 0x3709c4: 0x2602fffe
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x3709c8: 0x262102a
    ctx->pc = 0x3709c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x3709cc: 0x1440fff3
    ctx->pc = 0x3709CCu;
    {
        const bool branch_taken_0x3709cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3709D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x3709cc) {
            ctx->pc = 0x37099Cu;
            goto label_37099c;
        }
    }
    ctx->pc = 0x3709D4u;
    // 0x3709d4: 0x14a82a
    ctx->pc = 0x3709d4u;
    SET_GPR_U32(ctx, 21, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
    // 0x3709d8: 0xb02d
    ctx->pc = 0x3709d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709dc: 0x3ab50001
    ctx->pc = 0x3709dcu;
    SET_GPR_U32(ctx, 21, XOR32(GPR_U32(ctx, 21), 1));
    // 0x3709e0: 0x982d
    ctx->pc = 0x3709e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709e4: 0x10000022
    ctx->pc = 0x3709E4u;
    {
        const bool branch_taken_0x3709e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3709E8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3709e4) {
            ctx->pc = 0x370A70u;
            goto label_370a70;
        }
    }
    ctx->pc = 0x3709ECu;
label_3709ec:
    // 0x3709ec: 0x1418c0
    ctx->pc = 0x3709ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 3));
    // 0x3709f0: 0x210c0
    ctx->pc = 0x3709f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x3709f4: 0x2432821
    ctx->pc = 0x3709f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3709f8: 0x2423021
    ctx->pc = 0x3709f8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3709fc: 0x240202d
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a00: 0xc0dc1e8
    ctx->pc = 0x370A00u;
    SET_GPR_U32(ctx, 31, 0x370A08u);
    ctx->pc = 0x370A04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3707A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003707A0_0x3707a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370A08u; }
    }
    if (ctx->pc != 0x370A08u) { return; }
    ctx->pc = 0x370A08u;
    // 0x370a08: 0x304300ff
    ctx->pc = 0x370a08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x370a0c: 0x10600016
    ctx->pc = 0x370A0Cu;
    {
        const bool branch_taken_0x370a0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x370a0c) {
            ctx->pc = 0x370A68u;
            goto label_370a68;
        }
    }
    ctx->pc = 0x370A14u;
    // 0x370a14: 0x12a0000b
    ctx->pc = 0x370A14u;
    {
        const bool branch_taken_0x370a14 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x370A18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x370a14) {
            ctx->pc = 0x370A44u;
            goto label_370a44;
        }
    }
    ctx->pc = 0x370A1Cu;
    // 0x370a1c: 0x24020001
    ctx->pc = 0x370a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x370a20: 0x14620005
    ctx->pc = 0x370A20u;
    {
        const bool branch_taken_0x370a20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x370A24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x370a20) {
            ctx->pc = 0x370A38u;
            goto label_370a38;
        }
    }
    ctx->pc = 0x370A28u;
    // 0x370a28: 0x26c20001
    ctx->pc = 0x370a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
    // 0x370a2c: 0x2b63c
    ctx->pc = 0x370a2cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370a30: 0x1000000d
    ctx->pc = 0x370A30u;
    {
        const bool branch_taken_0x370a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370A34u;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370a30) {
            ctx->pc = 0x370A68u;
            goto label_370a68;
        }
    }
    ctx->pc = 0x370A38u;
label_370a38:
    // 0x370a38: 0x2b63c
    ctx->pc = 0x370a38u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370a3c: 0x1000000a
    ctx->pc = 0x370A3Cu;
    {
        const bool branch_taken_0x370a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370A40u;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370a3c) {
            ctx->pc = 0x370A68u;
            goto label_370a68;
        }
    }
    ctx->pc = 0x370A44u;
label_370a44:
    // 0x370a44: 0x14620005
    ctx->pc = 0x370A44u;
    {
        const bool branch_taken_0x370a44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x370a44) {
            ctx->pc = 0x370A5Cu;
            goto label_370a5c;
        }
    }
    ctx->pc = 0x370A4Cu;
    // 0x370a4c: 0x26c20001
    ctx->pc = 0x370a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
    // 0x370a50: 0x2b63c
    ctx->pc = 0x370a50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370a54: 0x10000004
    ctx->pc = 0x370A54u;
    {
        const bool branch_taken_0x370a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370A58u;
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
        if (branch_taken_0x370a54) {
            ctx->pc = 0x370A68u;
            goto label_370a68;
        }
    }
    ctx->pc = 0x370A5Cu;
label_370a5c:
    // 0x370a5c: 0x26c2ffff
    ctx->pc = 0x370a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x370a60: 0x2b63c
    ctx->pc = 0x370a60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 24));
    // 0x370a64: 0x16b63f
    ctx->pc = 0x370a64u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
label_370a68:
    // 0x370a68: 0x26730001
    ctx->pc = 0x370a68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x370a6c: 0x26940001
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_370a70:
    // 0x370a70: 0x2602fffe
    ctx->pc = 0x370a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x370a74: 0x262102a
    ctx->pc = 0x370a74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x370a78: 0x1440ffdc
    ctx->pc = 0x370A78u;
    {
        const bool branch_taken_0x370a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x370A7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x370a78) {
            ctx->pc = 0x3709ECu;
            goto label_3709ec;
        }
    }
    ctx->pc = 0x370A80u;
    // 0x370a80: 0x16163c
    ctx->pc = 0x370a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
    // 0x370a84: 0xdfbf0070
    ctx->pc = 0x370a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x370a88: 0x7bb60060
    ctx->pc = 0x370a88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x370a8c: 0x2163f
    ctx->pc = 0x370a8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x370a90: 0x7bb50050
    ctx->pc = 0x370a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370a94: 0x2102a
    ctx->pc = 0x370a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x370a98: 0x7bb40040
    ctx->pc = 0x370a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370a9c: 0x7bb30030
    ctx->pc = 0x370a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370aa0: 0x7bb20020
    ctx->pc = 0x370aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370aa4: 0x7bb10010
    ctx->pc = 0x370aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370aa8: 0x7bb00000
    ctx->pc = 0x370aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370aac: 0x3e00008
    ctx->pc = 0x370AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37099Cu: goto label_37099c;
            case 0x3709C4u: goto label_3709c4;
            case 0x3709ECu: goto label_3709ec;
            case 0x370A38u: goto label_370a38;
            case 0x370A44u: goto label_370a44;
            case 0x370A5Cu: goto label_370a5c;
            case 0x370A68u: goto label_370a68;
            case 0x370A70u: goto label_370a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x370AB4u;
    // 0x370ab4: 0x0
    ctx->pc = 0x370ab4u;
    // NOP
    // 0x370ab8: 0x0
    ctx->pc = 0x370ab8u;
    // NOP
    // 0x370abc: 0x0
    ctx->pc = 0x370abcu;
    // NOP
}
