#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0920
// Address: 0x1a0920 - 0x1a0ad0
void sub_001A0920_0x1a0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0920u;

    // 0x1a0920: 0x27bdffe0
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0924: 0x24020001
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0928: 0xffbf0010
    ctx->pc = 0x1a0928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a092c: 0x3c01002a
    ctx->pc = 0x1a092cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0930: 0x7fb00000
    ctx->pc = 0x1a0930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0934: 0x2483c
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a0938: 0x8c2cfed0
    ctx->pc = 0x1a0938u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 4294966992)));
    // 0x1a093c: 0x24040140
    ctx->pc = 0x1a093cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a0940: 0x24050010
    ctx->pc = 0x1a0940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0944: 0x3c01002a
    ctx->pc = 0x1a0944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0948: 0x2587ffff
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1a094c: 0x8c2bfed8
    ctx->pc = 0x1a094cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 4294967000)));
    // 0x1a0950: 0x7383c
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1a0954: 0x7383f
    ctx->pc = 0x1a0954u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1a0958: 0x3c01002a
    ctx->pc = 0x1a0958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a095c: 0x2568ffff
    ctx->pc = 0x1a095cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1a0960: 0x8c22fd50
    ctx->pc = 0x1a0960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
    // 0x1a0964: 0x8503c
    ctx->pc = 0x1a0964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1a0968: 0xa503f
    ctx->pc = 0x1a0968u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1a096c: 0x7443c
    ctx->pc = 0x1a096cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1a0970: 0xa5438
    ctx->pc = 0x1a0970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a0974: 0x1485025
    ctx->pc = 0x1a0974u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1a0978: 0x3c01002a
    ctx->pc = 0x1a0978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a097c: 0x8c2efd58
    ctx->pc = 0x1a097cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1a0980: 0x3c01002a
    ctx->pc = 0x1a0980u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0984: 0xe4100
    ctx->pc = 0x1a0984u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 14), 4));
    // 0x1a0988: 0x8c2dfd54
    ctx->pc = 0x1a0988u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1a098c: 0x84438
    ctx->pc = 0x1a098cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1a0990: 0x1cc3821
    ctx->pc = 0x1a0990u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1a0994: 0x3c01002a
    ctx->pc = 0x1a0994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0998: 0xdc26fdf0
    ctx->pc = 0x1a0998u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 4294966768)));
    // 0x1a099c: 0x3c01002a
    ctx->pc = 0x1a099cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09a0: 0xdc23fe08
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294966792)));
    // 0x1a09a4: 0x3c01002a
    ctx->pc = 0x1a09a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09a8: 0xfc2af760
    ctx->pc = 0x1a09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965088), GPR_U64(ctx, 10));
    // 0x1a09ac: 0x3c01002a
    ctx->pc = 0x1a09acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09b0: 0xfc26f7c0
    ctx->pc = 0x1a09b0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965184), GPR_U64(ctx, 6));
    // 0x1a09b4: 0x3c01002a
    ctx->pc = 0x1a09b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09b8: 0x1ab3021
    ctx->pc = 0x1a09b8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1a09bc: 0xfc23f7d0
    ctx->pc = 0x1a09bcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965200), GPR_U64(ctx, 3));
    // 0x1a09c0: 0x63100
    ctx->pc = 0x1a09c0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a09c4: 0xd1900
    ctx->pc = 0x1a09c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 4));
    // 0x1a09c8: 0x3c01002a
    ctx->pc = 0x1a09c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09cc: 0x681825
    ctx->pc = 0x1a09ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a09d0: 0xfc23f7a0
    ctx->pc = 0x1a09d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965152), GPR_U64(ctx, 3));
    // 0x1a09d4: 0x71900
    ctx->pc = 0x1a09d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a09d8: 0x3c01002a
    ctx->pc = 0x1a09d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09dc: 0x31c38
    ctx->pc = 0x1a09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a09e0: 0x23c02
    ctx->pc = 0x1a09e0u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1a09e4: 0xc31825
    ctx->pc = 0x1a09e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a09e8: 0x30e700ff
    ctx->pc = 0x1a09e8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x1a09ec: 0xfc23f7b0
    ctx->pc = 0x1a09ecu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965168), GPR_U64(ctx, 3));
    // 0x1a09f0: 0x3c01002a
    ctx->pc = 0x1a09f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a09f4: 0x21a02
    ctx->pc = 0x1a09f4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a09f8: 0xdc28fdd0
    ctx->pc = 0x1a09f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294966736)));
    // 0x1a09fc: 0x306600ff
    ctx->pc = 0x1a09fcu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 255));
    // 0x1a0a00: 0x304300ff
    ctx->pc = 0x1a0a00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a0a04: 0x63238
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x1a0a08: 0x21602
    ctx->pc = 0x1a0a08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x1a0a0c: 0xe63025
    ctx->pc = 0x1a0a0cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a0a10: 0x31c38
    ctx->pc = 0x1a0a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a0a14: 0x304200ff
    ctx->pc = 0x1a0a14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a0a18: 0x661825
    ctx->pc = 0x1a0a18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0a1c: 0x21638
    ctx->pc = 0x1a0a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a0a20: 0x431025
    ctx->pc = 0x1a0a20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0a24: 0x3c01002a
    ctx->pc = 0x1a0a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a28: 0x491025
    ctx->pc = 0x1a0a28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a0a2c: 0xdc27fdd8
    ctx->pc = 0x1a0a2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294966744)));
    // 0x1a0a30: 0x3c01002a
    ctx->pc = 0x1a0a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a34: 0xdc26fde0
    ctx->pc = 0x1a0a34u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 4294966752)));
    // 0x1a0a38: 0x3c01002a
    ctx->pc = 0x1a0a38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a3c: 0xfc22f790
    ctx->pc = 0x1a0a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965136), GPR_U64(ctx, 2));
    // 0x1a0a40: 0x3c01002a
    ctx->pc = 0x1a0a40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a44: 0xdc23fde8
    ctx->pc = 0x1a0a44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294966760)));
    // 0x1a0a48: 0x3c010029
    ctx->pc = 0x1a0a48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1a0a4c: 0x9c224190
    ctx->pc = 0x1a0a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16784)));
    // 0x1a0a50: 0x3c01002a
    ctx->pc = 0x1a0a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a54: 0xfc28f7e0
    ctx->pc = 0x1a0a54u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965216), GPR_U64(ctx, 8));
    // 0x1a0a58: 0x3c01002a
    ctx->pc = 0x1a0a58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a5c: 0xfc27f7f0
    ctx->pc = 0x1a0a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965232), GPR_U64(ctx, 7));
    // 0x1a0a60: 0x3c01002a
    ctx->pc = 0x1a0a60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a64: 0xfc26f800
    ctx->pc = 0x1a0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965248), GPR_U64(ctx, 6));
    // 0x1a0a68: 0x3c01002a
    ctx->pc = 0x1a0a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a6c: 0xfc23f810
    ctx->pc = 0x1a0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965264), GPR_U64(ctx, 3));
    // 0x1a0a70: 0x3c01002a
    ctx->pc = 0x1a0a70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a74: 0xfc22f820
    ctx->pc = 0x1a0a74u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965280), GPR_U64(ctx, 2));
    // 0x1a0a78: 0x3c01002a
    ctx->pc = 0x1a0a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0a7c: 0xc063774
    ctx->pc = 0x1A0A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A84u);
    ctx->pc = 0x1A0A80u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965296), GPR_U64(ctx, 2));
    ctx->pc = 0x18DDD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDD0_0x18ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A84u; }
    }
    if (ctx->pc != 0x1A0A84u) { return; }
    ctx->pc = 0x1A0A84u;
    // 0x1a0a84: 0x40802d
    ctx->pc = 0x1a0a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a88: 0x3c04002a
    ctx->pc = 0x1a0a88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x1a0a8c: 0x2484f730
    ctx->pc = 0x1a0a8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965040));
    // 0x1a0a90: 0x200282d
    ctx->pc = 0x1a0a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a94: 0xc0626c2
    ctx->pc = 0x1A0A94u;
    SET_GPR_U32(ctx, 31, 0x1A0A9Cu);
    ctx->pc = 0x1A0A98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A9Cu; }
    }
    if (ctx->pc != 0x1A0A9Cu) { return; }
    ctx->pc = 0x1A0A9Cu;
    // 0x1a0a9c: 0x10293c
    ctx->pc = 0x1a0a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 4));
    // 0x1a0aa0: 0x3c07002a
    ctx->pc = 0x1a0aa0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)42 << 16));
    // 0x1a0aa4: 0x5293e
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1a0aa8: 0x200302d
    ctx->pc = 0x1a0aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aac: 0x202d
    ctx->pc = 0x1a0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ab0: 0xc0633ec
    ctx->pc = 0x1A0AB0u;
    SET_GPR_U32(ctx, 31, 0x1A0AB8u);
    ctx->pc = 0x1A0AB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964976));
    ctx->pc = 0x18CFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CFB0_0x18cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AB8u; }
    }
    if (ctx->pc != 0x1A0AB8u) { return; }
    ctx->pc = 0x1A0AB8u;
    // 0x1a0ab8: 0xdfbf0010
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0abc: 0x7bb00000
    ctx->pc = 0x1a0abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ac0: 0x3e00008
    ctx->pc = 0x1A0AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0AC8u;
    // 0x1a0ac8: 0x0
    ctx->pc = 0x1a0ac8u;
    // NOP
    // 0x1a0acc: 0x0
    ctx->pc = 0x1a0accu;
    // NOP
}
