#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F4A10
// Address: 0x1f4a10 - 0x1f4b20
void sub_001F4A10_0x1f4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f4a10u;

    // 0x1f4a10: 0x27bdff90
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f4a14: 0xffbf0060
    ctx->pc = 0x1f4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f4a18: 0x7fb50050
    ctx->pc = 0x1f4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f4a1c: 0x7fb40040
    ctx->pc = 0x1f4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f4a20: 0xa0a82d
    ctx->pc = 0x1f4a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a24: 0x7fb30030
    ctx->pc = 0x1f4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f4a28: 0x80a02d
    ctx->pc = 0x1f4a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a2c: 0x7fb20020
    ctx->pc = 0x1f4a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f4a30: 0xc0982d
    ctx->pc = 0x1f4a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a34: 0x7fb10010
    ctx->pc = 0x1f4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4a38: 0xe0902d
    ctx->pc = 0x1f4a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a3c: 0x7fb00000
    ctx->pc = 0x1f4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4a40: 0x282d
    ctx->pc = 0x1f4a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a44: 0x8c91001c
    ctx->pc = 0x1f4a44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1f4a48: 0x24060008
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f4a4c: 0x8c900024
    ctx->pc = 0x1f4a4cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f4a50: 0xc041f1a
    ctx->pc = 0x1F4A50u;
    SET_GPR_U32(ctx, 31, 0x1F4A58u);
    ctx->pc = 0x1F4A54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A58u; }
    }
    if (ctx->pc != 0x1F4A58u) { return; }
    ctx->pc = 0x1F4A58u;
    // 0x1f4a58: 0x32a4ffff
    ctx->pc = 0x1f4a58u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 21), 65535));
    // 0x1f4a5c: 0x14800006
    ctx->pc = 0x1F4A5Cu;
    {
        const bool branch_taken_0x1f4a5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A60u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x1f4a5c) {
            ctx->pc = 0x1F4A78u;
            goto label_1f4a78;
        }
    }
    ctx->pc = 0x1F4A64u;
    // 0x1f4a64: 0x92020003
    ctx->pc = 0x1f4a64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1f4a68: 0xa2220003
    ctx->pc = 0x1f4a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4a6c: 0x92020004
    ctx->pc = 0x1f4a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4a70: 0x1000000b
    ctx->pc = 0x1F4A70u;
    {
        const bool branch_taken_0x1f4a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4A74u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f4a70) {
            ctx->pc = 0x1F4AA0u;
            goto label_1f4aa0;
        }
    }
    ctx->pc = 0x1F4A78u;
label_1f4a78:
    // 0x1f4a78: 0x3c030023
    ctx->pc = 0x1f4a78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1f4a7c: 0x3c020023
    ctx->pc = 0x1f4a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1f4a80: 0x24637330
    ctx->pc = 0x1f4a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1f4a84: 0x24427350
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29520));
    // 0x1f4a88: 0x641821
    ctx->pc = 0x1f4a88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f4a8c: 0x441021
    ctx->pc = 0x1f4a8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f4a90: 0x90630000
    ctx->pc = 0x1f4a90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4a94: 0xa2230003
    ctx->pc = 0x1f4a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4a98: 0x90420000
    ctx->pc = 0x1f4a98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f4a9c: 0xa2220004
    ctx->pc = 0x1f4a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_1f4aa0:
    // 0x1f4aa0: 0x326300ff
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 255));
    // 0x1f4aa4: 0x24020002
    ctx->pc = 0x1f4aa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4aa8: 0x1062000d
    ctx->pc = 0x1F4AA8u;
    {
        const bool branch_taken_0x1f4aa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F4AACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1f4aa8) {
            ctx->pc = 0x1F4AE0u;
            goto label_1f4ae0;
        }
    }
    ctx->pc = 0x1F4AB0u;
    // 0x1f4ab0: 0x10620006
    ctx->pc = 0x1F4AB0u;
    {
        const bool branch_taken_0x1f4ab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f4ab0) {
            ctx->pc = 0x1F4ACCu;
            goto label_1f4acc;
        }
    }
    ctx->pc = 0x1F4AB8u;
    // 0x1f4ab8: 0x24020001
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4abc: 0x10620003
    ctx->pc = 0x1F4ABCu;
    {
        const bool branch_taken_0x1f4abc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f4abc) {
            ctx->pc = 0x1F4ACCu;
            goto label_1f4acc;
        }
    }
    ctx->pc = 0x1F4AC4u;
    // 0x1f4ac4: 0x10000009
    ctx->pc = 0x1F4AC4u;
    {
        const bool branch_taken_0x1f4ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4AC8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x1f4ac4) {
            ctx->pc = 0x1F4AECu;
            goto label_1f4aec;
        }
    }
    ctx->pc = 0x1F4ACCu;
label_1f4acc:
    // 0x1f4acc: 0x92830031
    ctx->pc = 0x1f4accu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x1f4ad0: 0x24620001
    ctx->pc = 0x1f4ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f4ad4: 0xa2820031
    ctx->pc = 0x1f4ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4ad8: 0x10000003
    ctx->pc = 0x1F4AD8u;
    {
        const bool branch_taken_0x1f4ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4ADCu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1f4ad8) {
            ctx->pc = 0x1F4AE8u;
            goto label_1f4ae8;
        }
    }
    ctx->pc = 0x1F4AE0u;
label_1f4ae0:
    // 0x1f4ae0: 0x92020005
    ctx->pc = 0x1f4ae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1f4ae4: 0xa2220005
    ctx->pc = 0x1f4ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_1f4ae8:
    // 0x1f4ae8: 0xa2320006
    ctx->pc = 0x1f4ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 18));
label_1f4aec:
    // 0x1f4aec: 0x240200ff
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f4af0: 0xa2220007
    ctx->pc = 0x1f4af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4af4: 0xae80002c
    ctx->pc = 0x1f4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x1f4af8: 0x8e820020
    ctx->pc = 0x1f4af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1f4afc: 0xdfbf0060
    ctx->pc = 0x1f4afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f4b00: 0x7bb50050
    ctx->pc = 0x1f4b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f4b04: 0x7bb30030
    ctx->pc = 0x1f4b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4b08: 0x7bb20020
    ctx->pc = 0x1f4b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b0c: 0x7bb10010
    ctx->pc = 0x1f4b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b10: 0x7bb40040
    ctx->pc = 0x1f4b10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4b14: 0x7bb00000
    ctx->pc = 0x1f4b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b18: 0x3e00008
    ctx->pc = 0x1F4B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4A78u: goto label_1f4a78;
            case 0x1F4AA0u: goto label_1f4aa0;
            case 0x1F4ACCu: goto label_1f4acc;
            case 0x1F4AE0u: goto label_1f4ae0;
            case 0x1F4AE8u: goto label_1f4ae8;
            case 0x1F4AECu: goto label_1f4aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4B20u;
}
