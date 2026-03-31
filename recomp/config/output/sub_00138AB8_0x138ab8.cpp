#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138AB8
// Address: 0x138ab8 - 0x138ba8
void sub_00138AB8_0x138ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138ab8u;

    // 0x138ab8: 0x27bdffd0
    ctx->pc = 0x138ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138abc: 0xffb10008
    ctx->pc = 0x138abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138ac0: 0xffb20010
    ctx->pc = 0x138ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138ac4: 0x80902d
    ctx->pc = 0x138ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ac8: 0xffb30018
    ctx->pc = 0x138ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x138acc: 0xffb00000
    ctx->pc = 0x138accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138ad0: 0xffbf0020
    ctx->pc = 0x138ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138ad4: 0xc04fc96
    ctx->pc = 0x138AD4u;
    SET_GPR_U32(ctx, 31, 0x138ADCu);
    ctx->pc = 0x138AD8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138ADCu; }
    }
    if (ctx->pc != 0x138ADCu) { return; }
    ctx->pc = 0x138ADCu;
    // 0x138adc: 0x3c020022
    ctx->pc = 0x138adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138ae0: 0x2451bc08
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294949896));
    // 0x138ae4: 0x82230000
    ctx->pc = 0x138ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138ae8: 0x1060000c
    ctx->pc = 0x138AE8u;
    {
        const bool branch_taken_0x138ae8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x138AECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138ae8) {
            ctx->pc = 0x138B1Cu;
            goto label_138b1c;
        }
    }
    ctx->pc = 0x138AF0u;
    // 0x138af0: 0x220302d
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138af4: 0x220202d
    ctx->pc = 0x138af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138af8:
    // 0x138af8: 0x24a50001
    ctx->pc = 0x138af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x138afc: 0x24840040
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x138b00: 0x28a20020
    ctx->pc = 0x138b00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x138b04: 0x10400005
    ctx->pc = 0x138B04u;
    {
        const bool branch_taken_0x138b04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138B08u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
        if (branch_taken_0x138b04) {
            ctx->pc = 0x138B1Cu;
            goto label_138b1c;
        }
    }
    ctx->pc = 0x138B0Cu;
    // 0x138b0c: 0x80820000
    ctx->pc = 0x138b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138b10: 0x0
    ctx->pc = 0x138b10u;
    // NOP
    // 0x138b14: 0x1440fff8
    ctx->pc = 0x138B14u;
    {
        const bool branch_taken_0x138b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x138B18u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x138b14) {
            ctx->pc = 0x138AF8u;
            goto label_138af8;
        }
    }
    ctx->pc = 0x138B1Cu;
label_138b1c:
    // 0x138b1c: 0x24020020
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x138b20: 0x14a20009
    ctx->pc = 0x138B20u;
    {
        const bool branch_taken_0x138b20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x138B24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138b20) {
            ctx->pc = 0x138B48u;
            goto label_138b48;
        }
    }
    ctx->pc = 0x138B28u;
    // 0x138b28: 0x3c040024
    ctx->pc = 0x138b28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138b2c: 0x24050020
    ctx->pc = 0x138b2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x138b30: 0x2484c908
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953224));
    // 0x138b34: 0xc045a12
    ctx->pc = 0x138B34u;
    SET_GPR_U32(ctx, 31, 0x138B3Cu);
    ctx->pc = 0x138B38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B3Cu; }
    }
    if (ctx->pc != 0x138B3Cu) { return; }
    ctx->pc = 0x138B3Cu;
    // 0x138b3c: 0x1000000f
    ctx->pc = 0x138B3Cu;
    {
        const bool branch_taken_0x138b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x138B40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138b3c) {
            ctx->pc = 0x138B7Cu;
            goto label_138b7c;
        }
    }
    ctx->pc = 0x138B44u;
    // 0x138b44: 0x0
    ctx->pc = 0x138b44u;
    // NOP
label_138b48:
    // 0x138b48: 0x282d
    ctx->pc = 0x138b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b4c: 0x24060040
    ctx->pc = 0x138b4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x138b50: 0xc041f1a
    ctx->pc = 0x138B50u;
    SET_GPR_U32(ctx, 31, 0x138B58u);
    ctx->pc = 0x138B54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B58u; }
    }
    if (ctx->pc != 0x138B58u) { return; }
    ctx->pc = 0x138B58u;
    // 0x138b58: 0xa2200001
    ctx->pc = 0x138b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x138b5c: 0x24020001
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x138b60: 0xae300038
    ctx->pc = 0x138b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x138b64: 0xae320004
    ctx->pc = 0x138b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x138b68: 0xae330008
    ctx->pc = 0x138b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x138b6c: 0xa2220000
    ctx->pc = 0x138b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x138b70: 0xa2200002
    ctx->pc = 0x138b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138b74: 0xae220030
    ctx->pc = 0x138b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x138b78: 0xae200034
    ctx->pc = 0x138b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_138b7c:
    // 0x138b7c: 0xc04fc9c
    ctx->pc = 0x138B7Cu;
    SET_GPR_U32(ctx, 31, 0x138B84u);
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B84u; }
    }
    if (ctx->pc != 0x138B84u) { return; }
    ctx->pc = 0x138B84u;
    // 0x138b84: 0x220102d
    ctx->pc = 0x138b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b88: 0xdfb00000
    ctx->pc = 0x138b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138b8c: 0xdfb10008
    ctx->pc = 0x138b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138b90: 0xdfb20010
    ctx->pc = 0x138b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138b94: 0xdfb30018
    ctx->pc = 0x138b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138b98: 0xdfbf0020
    ctx->pc = 0x138b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138b9c: 0x3e00008
    ctx->pc = 0x138B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138AF8u: goto label_138af8;
            case 0x138B1Cu: goto label_138b1c;
            case 0x138B48u: goto label_138b48;
            case 0x138B7Cu: goto label_138b7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138BA4u;
    // 0x138ba4: 0x0
    ctx->pc = 0x138ba4u;
    // NOP
}
