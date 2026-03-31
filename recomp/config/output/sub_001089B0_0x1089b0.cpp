#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001089B0
// Address: 0x1089b0 - 0x108b48
void sub_001089B0_0x1089b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1089b0u;

    // 0x1089b0: 0x27bdffd0
    ctx->pc = 0x1089b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1089b4: 0xffb00000
    ctx->pc = 0x1089b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1089b8: 0xa0802d
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089bc: 0xffb20010
    ctx->pc = 0x1089bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1089c0: 0xffb40020
    ctx->pc = 0x1089c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1089c4: 0x24940014
    ctx->pc = 0x1089c4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 20));
    // 0x1089c8: 0xffb10008
    ctx->pc = 0x1089c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1089cc: 0xffb30018
    ctx->pc = 0x1089ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1089d0: 0xffbf0028
    ctx->pc = 0x1089d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1089d4: 0x8c820010
    ctx->pc = 0x1089d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1089d8: 0x21080
    ctx->pc = 0x1089d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1089dc: 0x2829021
    ctx->pc = 0x1089dcu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1089e0: 0x2652fffc
    ctx->pc = 0x1089e0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1089e4: 0x8e530000
    ctx->pc = 0x1089e4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1089e8: 0xc042042
    ctx->pc = 0x1089E8u;
    SET_GPR_U32(ctx, 31, 0x1089F0u);
    ctx->pc = 0x1089ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108108u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108108_0x108108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1089F0u; }
    }
    if (ctx->pc != 0x1089F0u) { return; }
    ctx->pc = 0x1089F0u;
    // 0x1089f0: 0x40302d
    ctx->pc = 0x1089f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f4: 0x24020020
    ctx->pc = 0x1089f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1089f8: 0x461023
    ctx->pc = 0x1089f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1089fc: 0x28c3000b
    ctx->pc = 0x1089fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 11));
    // 0x108a00: 0x1060001b
    ctx->pc = 0x108A00u;
    {
        const bool branch_taken_0x108a00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108A04u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x108a00) {
            ctx->pc = 0x108A70u;
            goto label_108a70;
        }
    }
    ctx->pc = 0x108A08u;
    // 0x108a08: 0x2402000b
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x108a0c: 0x3c043ff0
    ctx->pc = 0x108a0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
    // 0x108a10: 0x461023
    ctx->pc = 0x108a10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x108a14: 0x3c03ffff
    ctx->pc = 0x108a14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x108a18: 0x3183e
    ctx->pc = 0x108a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x108a1c: 0x531006
    ctx->pc = 0x108a1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x108a20: 0x2238824
    ctx->pc = 0x108a20u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x108a24: 0x441025
    ctx->pc = 0x108a24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108a28: 0x202d
    ctx->pc = 0x108a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a2c: 0x2103c
    ctx->pc = 0x108a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108a30: 0x292182b
    ctx->pc = 0x108a30u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x108a34: 0x10600002
    ctx->pc = 0x108A34u;
    {
        const bool branch_taken_0x108a34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108A38u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x108a34) {
            ctx->pc = 0x108A40u;
            goto label_108a40;
        }
    }
    ctx->pc = 0x108A3Cu;
    // 0x108a3c: 0x8e44fffc
    ctx->pc = 0x108a3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_108a40:
    // 0x108a40: 0x2402000b
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x108a44: 0x24c30015
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 21));
    // 0x108a48: 0x461023
    ctx->pc = 0x108a48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x108a4c: 0x731804
    ctx->pc = 0x108a4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x108a50: 0x441006
    ctx->pc = 0x108a50u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x108a54: 0x2404ffff
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108a58: 0x4203c
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x108a5c: 0x621825
    ctx->pc = 0x108a5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108a60: 0x2248824
    ctx->pc = 0x108a60u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x108a64: 0x3183c
    ctx->pc = 0x108a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108a68: 0x1000002d
    ctx->pc = 0x108A68u;
    {
        const bool branch_taken_0x108a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108A6Cu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        if (branch_taken_0x108a68) {
            ctx->pc = 0x108B20u;
            goto label_108b20;
        }
    }
    ctx->pc = 0x108A70u;
label_108a70:
    // 0x108a70: 0x292102b
    ctx->pc = 0x108a70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x108a74: 0x50400003
    ctx->pc = 0x108A74u;
    {
        const bool branch_taken_0x108a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x108a74) {
            ctx->pc = 0x108A78u;
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x108A84u;
            goto label_108a84;
        }
    }
    ctx->pc = 0x108A7Cu;
    // 0x108a7c: 0x2652fffc
    ctx->pc = 0x108a7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x108a80: 0x8e470000
    ctx->pc = 0x108a80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_108a84:
    // 0x108a84: 0x24c6fff5
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x108a88: 0x10c00019
    ctx->pc = 0x108A88u;
    {
        const bool branch_taken_0x108a88 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x108A8Cu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x108a88) {
            ctx->pc = 0x108AF0u;
            goto label_108af0;
        }
    }
    ctx->pc = 0x108A90u;
    // 0x108a90: 0xd31004
    ctx->pc = 0x108a90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x108a94: 0x671806
    ctx->pc = 0x108a94u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x108a98: 0x3c053ff0
    ctx->pc = 0x108a98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16368 << 16));
    // 0x108a9c: 0x431025
    ctx->pc = 0x108a9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108aa0: 0x292182b
    ctx->pc = 0x108aa0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x108aa4: 0x3c04ffff
    ctx->pc = 0x108aa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x108aa8: 0x4203e
    ctx->pc = 0x108aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x108aac: 0x451025
    ctx->pc = 0x108aacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x108ab0: 0x2248824
    ctx->pc = 0x108ab0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x108ab4: 0x2103c
    ctx->pc = 0x108ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108ab8: 0x2228825
    ctx->pc = 0x108ab8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x108abc: 0x10600002
    ctx->pc = 0x108ABCu;
    {
        const bool branch_taken_0x108abc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108AC0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108abc) {
            ctx->pc = 0x108AC8u;
            goto label_108ac8;
        }
    }
    ctx->pc = 0x108AC4u;
    // 0x108ac4: 0x8e53fffc
    ctx->pc = 0x108ac4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_108ac8:
    // 0x108ac8: 0x61023
    ctx->pc = 0x108ac8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x108acc: 0xc71804
    ctx->pc = 0x108accu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x108ad0: 0x531006
    ctx->pc = 0x108ad0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x108ad4: 0x2404ffff
    ctx->pc = 0x108ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108ad8: 0x4203c
    ctx->pc = 0x108ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x108adc: 0x621825
    ctx->pc = 0x108adcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108ae0: 0x2248824
    ctx->pc = 0x108ae0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x108ae4: 0x3183c
    ctx->pc = 0x108ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108ae8: 0x1000000d
    ctx->pc = 0x108AE8u;
    {
        const bool branch_taken_0x108ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108AECu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        if (branch_taken_0x108ae8) {
            ctx->pc = 0x108B20u;
            goto label_108b20;
        }
    }
    ctx->pc = 0x108AF0u;
label_108af0:
    // 0x108af0: 0x3c023ff0
    ctx->pc = 0x108af0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16368 << 16));
    // 0x108af4: 0x3c03ffff
    ctx->pc = 0x108af4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x108af8: 0x3183e
    ctx->pc = 0x108af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x108afc: 0x2621025
    ctx->pc = 0x108afcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108b00: 0x2238824
    ctx->pc = 0x108b00u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x108b04: 0x2103c
    ctx->pc = 0x108b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108b08: 0x2404ffff
    ctx->pc = 0x108b08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108b0c: 0x4203c
    ctx->pc = 0x108b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x108b10: 0x7183c
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x108b14: 0x2228825
    ctx->pc = 0x108b14u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x108b18: 0x3183e
    ctx->pc = 0x108b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x108b1c: 0x2248824
    ctx->pc = 0x108b1cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_108b20:
    // 0x108b20: 0x2238825
    ctx->pc = 0x108b20u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x108b24: 0x220102d
    ctx->pc = 0x108b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b28: 0xdfb00000
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b2c: 0xdfb10008
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108b30: 0xdfb20010
    ctx->pc = 0x108b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b34: 0xdfb30018
    ctx->pc = 0x108b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108b38: 0xdfb40020
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b3c: 0xdfbf0028
    ctx->pc = 0x108b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108b40: 0x3e00008
    ctx->pc = 0x108B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108A40u: goto label_108a40;
            case 0x108A70u: goto label_108a70;
            case 0x108A84u: goto label_108a84;
            case 0x108AC8u: goto label_108ac8;
            case 0x108AF0u: goto label_108af0;
            case 0x108B20u: goto label_108b20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108B48u;
}
