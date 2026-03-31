#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B910
// Address: 0x15b910 - 0x15ba80
void sub_0015B910_0x15b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b910u;

    // 0x15b910: 0x27bdff50
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15b914: 0xffb00080
    ctx->pc = 0x15b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x15b918: 0x80802d
    ctx->pc = 0x15b918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b91c: 0xffb10088
    ctx->pc = 0x15b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x15b920: 0x3a0282d
    ctx->pc = 0x15b920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b924: 0xffb20090
    ctx->pc = 0x15b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x15b928: 0xffb30098
    ctx->pc = 0x15b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x15b92c: 0xffbf00a0
    ctx->pc = 0x15b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15b930: 0xc05412a
    ctx->pc = 0x15B930u;
    SET_GPR_U32(ctx, 31, 0x15B938u);
    ctx->pc = 0x15B934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 896)));
    ctx->pc = 0x1504A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001504A8_0x1504a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B938u; }
    }
    if (ctx->pc != 0x15B938u) { return; }
    ctx->pc = 0x15B938u;
    // 0x15b938: 0x8e040380
    ctx->pc = 0x15b938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x15b93c: 0xc054134
    ctx->pc = 0x15B93Cu;
    SET_GPR_U32(ctx, 31, 0x15B944u);
    ctx->pc = 0x15B940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1504D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001504D0_0x1504d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B944u; }
    }
    if (ctx->pc != 0x15B944u) { return; }
    ctx->pc = 0x15B944u;
    // 0x15b944: 0x8e040380
    ctx->pc = 0x15b944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x15b948: 0x27a50064
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 100));
    // 0x15b94c: 0x27a60068
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 104));
    // 0x15b950: 0xc05413e
    ctx->pc = 0x15B950u;
    SET_GPR_U32(ctx, 31, 0x15B958u);
    ctx->pc = 0x15B954u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 108));
    ctx->pc = 0x1504F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001504F8_0x1504f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B958u; }
    }
    if (ctx->pc != 0x15B958u) { return; }
    ctx->pc = 0x15B958u;
    // 0x15b958: 0x8e040380
    ctx->pc = 0x15b958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x15b95c: 0x27a50070
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b960: 0xc054148
    ctx->pc = 0x15B960u;
    SET_GPR_U32(ctx, 31, 0x15B968u);
    ctx->pc = 0x15B964u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 116));
    ctx->pc = 0x150520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00150520_0x150520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B968u; }
    }
    if (ctx->pc != 0x15B968u) { return; }
    ctx->pc = 0x15B968u;
    // 0x15b968: 0x8fa20000
    ctx->pc = 0x15b968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b96c: 0x8fa30004
    ctx->pc = 0x15b96cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b970: 0x8fa40008
    ctx->pc = 0x15b970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b974: 0x8fa5000c
    ctx->pc = 0x15b974u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15b978: 0x8fa70014
    ctx->pc = 0x15b978u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15b97c: 0x8fa9001c
    ctx->pc = 0x15b97cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x15b980: 0x8faa0020
    ctx->pc = 0x15b980u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b984: 0x8fb30040
    ctx->pc = 0x15b984u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b988: 0x8fab0024
    ctx->pc = 0x15b988u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x15b98c: 0x8fac0028
    ctx->pc = 0x15b98cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b990: 0x8fad002c
    ctx->pc = 0x15b990u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15b994: 0x8fae0030
    ctx->pc = 0x15b994u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b998: 0x8faf0034
    ctx->pc = 0x15b998u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x15b99c: 0x8fa60010
    ctx->pc = 0x15b99cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b9a0: 0x8fa80018
    ctx->pc = 0x15b9a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b9a4: 0x8fb10038
    ctx->pc = 0x15b9a4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15b9a8: 0x8fb2003c
    ctx->pc = 0x15b9a8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x15b9ac: 0xae0201d0
    ctx->pc = 0x15b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x15b9b0: 0xae0301d4
    ctx->pc = 0x15b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x15b9b4: 0xae0401d8
    ctx->pc = 0x15b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 4));
    // 0x15b9b8: 0xae0501dc
    ctx->pc = 0x15b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 5));
    // 0x15b9bc: 0xae0601e0
    ctx->pc = 0x15b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 6));
    // 0x15b9c0: 0xae0701e4
    ctx->pc = 0x15b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 7));
    // 0x15b9c4: 0xae0801e8
    ctx->pc = 0x15b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 8));
    // 0x15b9c8: 0xae0901ec
    ctx->pc = 0x15b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 9));
    // 0x15b9cc: 0xae0a01f0
    ctx->pc = 0x15b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 10));
    // 0x15b9d0: 0xae0b01f4
    ctx->pc = 0x15b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 11));
    // 0x15b9d4: 0xae0c01f8
    ctx->pc = 0x15b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 12));
    // 0x15b9d8: 0xae0d01fc
    ctx->pc = 0x15b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 13));
    // 0x15b9dc: 0xae0e0200
    ctx->pc = 0x15b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 14));
    // 0x15b9e0: 0xae0f0204
    ctx->pc = 0x15b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 15));
    // 0x15b9e4: 0xae110208
    ctx->pc = 0x15b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 17));
    // 0x15b9e8: 0xae12020c
    ctx->pc = 0x15b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 18));
    // 0x15b9ec: 0xae130210
    ctx->pc = 0x15b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 19));
    // 0x15b9f0: 0x8fa30064
    ctx->pc = 0x15b9f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15b9f4: 0x8fa50060
    ctx->pc = 0x15b9f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b9f8: 0x246407ff
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x15b9fc: 0x28620000
    ctx->pc = 0x15b9fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x15ba00: 0x8fa80068
    ctx->pc = 0x15ba00u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15ba04: 0x82180b
    ctx->pc = 0x15ba04u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x15ba08: 0x8fa90070
    ctx->pc = 0x15ba08u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ba0c: 0x31ac3
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x15ba10: 0x8fa20074
    ctx->pc = 0x15ba10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15ba14: 0x8faa0044
    ctx->pc = 0x15ba14u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15ba18: 0x8fa60048
    ctx->pc = 0x15ba18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ba1c: 0x8fa7004c
    ctx->pc = 0x15ba1cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15ba20: 0x8fa40050
    ctx->pc = 0x15ba20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ba24: 0xae0a0214
    ctx->pc = 0x15ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 10));
    // 0x15ba28: 0xae02028c
    ctx->pc = 0x15ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x15ba2c: 0xae060218
    ctx->pc = 0x15ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 6));
    // 0x15ba30: 0xae07021c
    ctx->pc = 0x15ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 7));
    // 0x15ba34: 0xae040220
    ctx->pc = 0x15ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 4));
    // 0x15ba38: 0xae05027c
    ctx->pc = 0x15ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 5));
    // 0x15ba3c: 0xae030280
    ctx->pc = 0x15ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
    // 0x15ba40: 0xae080290
    ctx->pc = 0x15ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 8));
    // 0x15ba44: 0xae090288
    ctx->pc = 0x15ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 9));
    // 0x15ba48: 0xdfb10088
    ctx->pc = 0x15ba48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15ba4c: 0xdfb00080
    ctx->pc = 0x15ba4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ba50: 0xdfb20090
    ctx->pc = 0x15ba50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ba54: 0xdfb30098
    ctx->pc = 0x15ba54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15ba58: 0xdfbf00a0
    ctx->pc = 0x15ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ba5c: 0x3e00008
    ctx->pc = 0x15BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BA64u;
    // 0x15ba64: 0x0
    ctx->pc = 0x15ba64u;
    // NOP
    // 0x15ba68: 0x27bdfff0
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ba6c: 0xffbf0000
    ctx->pc = 0x15ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ba70: 0xdfbf0000
    ctx->pc = 0x15ba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ba74: 0x8056ea0
    ctx->pc = 0x15BA74u;
    ctx->pc = 0x15BA78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15BA80u;
    sub_0015BA80_0x15ba80(rdram, ctx, runtime); return;
    ctx->pc = 0x15BA7Cu;
    // 0x15ba7c: 0x0
    ctx->pc = 0x15ba7cu;
    // NOP
}
