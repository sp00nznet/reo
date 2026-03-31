#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B990
// Address: 0x16b990 - 0x16baf0
void sub_0016B990_0x16b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b990u;

    // 0x16b990: 0x27bdfff0
    ctx->pc = 0x16b990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b994: 0xffbf0000
    ctx->pc = 0x16b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b998: 0xdfbf0000
    ctx->pc = 0x16b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b99c: 0x805615a
    ctx->pc = 0x16B99Cu;
    ctx->pc = 0x16B9A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x158568u;
    sub_00158568_0x158568(rdram, ctx, runtime); return;
    ctx->pc = 0x16B9A4u;
    // 0x16b9a4: 0x0
    ctx->pc = 0x16b9a4u;
    // NOP
    // 0x16b9a8: 0x3e00008
    ctx->pc = 0x16B9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAD0u: goto label_16bad0;
            case 0x16BAD4u: goto label_16bad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B9B0u;
    // 0x16b9b0: 0x3e00008
    ctx->pc = 0x16B9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAD0u: goto label_16bad0;
            case 0x16BAD4u: goto label_16bad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B9B8u;
    // 0x16b9b8: 0x3e00008
    ctx->pc = 0x16B9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAD0u: goto label_16bad0;
            case 0x16BAD4u: goto label_16bad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B9C0u;
    // 0x16b9c0: 0x3e00008
    ctx->pc = 0x16B9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAD0u: goto label_16bad0;
            case 0x16BAD4u: goto label_16bad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B9C8u;
    // 0x16b9c8: 0x27bdfff0
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b9cc: 0x3c05ff00
    ctx->pc = 0x16b9ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16b9d0: 0xffbf0000
    ctx->pc = 0x16b9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9d4: 0x34a50d0b
    ctx->pc = 0x16b9d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    // 0x16b9d8: 0xdfbf0000
    ctx->pc = 0x16b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b9dc: 0x805a704
    ctx->pc = 0x16B9DCu;
    ctx->pc = 0x16B9E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16B9E4u;
    // 0x16b9e4: 0x0
    ctx->pc = 0x16b9e4u;
    // NOP
    // 0x16b9e8: 0x27bdfff0
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b9ec: 0x3c05ff00
    ctx->pc = 0x16b9ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16b9f0: 0xffbf0000
    ctx->pc = 0x16b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b9f4: 0x34a50d0b
    ctx->pc = 0x16b9f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    // 0x16b9f8: 0xdfbf0000
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b9fc: 0x805a704
    ctx->pc = 0x16B9FCu;
    ctx->pc = 0x16BA00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BA04u;
    // 0x16ba04: 0x0
    ctx->pc = 0x16ba04u;
    // NOP
    // 0x16ba08: 0x27bdfff0
    ctx->pc = 0x16ba08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba0c: 0x3c05ff00
    ctx->pc = 0x16ba0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16ba10: 0xffbf0000
    ctx->pc = 0x16ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba14: 0x34a50d0b
    ctx->pc = 0x16ba14u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    // 0x16ba18: 0xdfbf0000
    ctx->pc = 0x16ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba1c: 0x805a704
    ctx->pc = 0x16BA1Cu;
    ctx->pc = 0x16BA20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BA24u;
    // 0x16ba24: 0x0
    ctx->pc = 0x16ba24u;
    // NOP
    // 0x16ba28: 0x27bdfff0
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba2c: 0x3c05ff00
    ctx->pc = 0x16ba2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16ba30: 0xffbf0000
    ctx->pc = 0x16ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba34: 0x34a50d0b
    ctx->pc = 0x16ba34u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3339));
    // 0x16ba38: 0xdfbf0000
    ctx->pc = 0x16ba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba3c: 0x805a704
    ctx->pc = 0x16BA3Cu;
    ctx->pc = 0x16BA40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BA44u;
    // 0x16ba44: 0x0
    ctx->pc = 0x16ba44u;
    // NOP
    // 0x16ba48: 0x27bdffd0
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ba4c: 0xffb00000
    ctx->pc = 0x16ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ba50: 0xffb10008
    ctx->pc = 0x16ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ba54: 0xffb20010
    ctx->pc = 0x16ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ba58: 0xffb30018
    ctx->pc = 0x16ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ba5c: 0xffbf0020
    ctx->pc = 0x16ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ba60: 0xc05aee6
    ctx->pc = 0x16BA60u;
    SET_GPR_U32(ctx, 31, 0x16BA68u);
    ctx->pc = 0x16BA64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BB98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BB98_0x16bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA68u; }
    }
    if (ctx->pc != 0x16BA68u) { return; }
    ctx->pc = 0x16BA68u;
    // 0x16ba68: 0x40802d
    ctx->pc = 0x16ba68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba6c: 0x52000019
    ctx->pc = 0x16BA6Cu;
    {
        const bool branch_taken_0x16ba6c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ba6c) {
            ctx->pc = 0x16BA70u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16BAD4u;
            goto label_16bad4;
        }
    }
    ctx->pc = 0x16BA74u;
    // 0x16ba74: 0x8e030000
    ctx->pc = 0x16ba74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ba78: 0x10600015
    ctx->pc = 0x16BA78u;
    {
        const bool branch_taken_0x16ba78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BA7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ba78) {
            ctx->pc = 0x16BAD0u;
            goto label_16bad0;
        }
    }
    ctx->pc = 0x16BA80u;
    // 0x16ba80: 0x8e321aec
    ctx->pc = 0x16ba80u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 6892)));
    // 0x16ba84: 0xc05a49e
    ctx->pc = 0x16BA84u;
    SET_GPR_U32(ctx, 31, 0x16BA8Cu);
    ctx->pc = 0x16BA88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169278u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169278_0x169278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA8Cu; }
    }
    if (ctx->pc != 0x16BA8Cu) { return; }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0xc05aebc
    ctx->pc = 0x16BA8Cu;
    SET_GPR_U32(ctx, 31, 0x16BA94u);
    ctx->pc = 0x16BA90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BAF0_0x16baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA94u; }
    }
    if (ctx->pc != 0x16BA94u) { return; }
    ctx->pc = 0x16BA94u;
    // 0x16ba94: 0x220202d
    ctx->pc = 0x16ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba98: 0x240282d
    ctx->pc = 0x16ba98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba9c: 0x200302d
    ctx->pc = 0x16ba9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baa0: 0xc05aebe
    ctx->pc = 0x16BAA0u;
    SET_GPR_U32(ctx, 31, 0x16BAA8u);
    ctx->pc = 0x16BAA4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 3264));
    ctx->pc = 0x16BAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BAF8_0x16baf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAA8u; }
    }
    if (ctx->pc != 0x16BAA8u) { return; }
    ctx->pc = 0x16BAA8u;
    // 0x16baa8: 0x5440000a
    ctx->pc = 0x16BAA8u;
    {
        const bool branch_taken_0x16baa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16baa8) {
            ctx->pc = 0x16BAACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16BAD4u;
            goto label_16bad4;
        }
    }
    ctx->pc = 0x16BAB0u;
    // 0x16bab0: 0x8e03001c
    ctx->pc = 0x16bab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16bab4: 0xae430020
    ctx->pc = 0x16bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x16bab8: 0x8e040020
    ctx->pc = 0x16bab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16babc: 0xae440024
    ctx->pc = 0x16babcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x16bac0: 0x8e030014
    ctx->pc = 0x16bac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bac4: 0xae630114
    ctx->pc = 0x16bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
    // 0x16bac8: 0x8e040018
    ctx->pc = 0x16bac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bacc: 0xae44000c
    ctx->pc = 0x16baccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_16bad0:
    // 0x16bad0: 0xdfb00000
    ctx->pc = 0x16bad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bad4:
    // 0x16bad4: 0xdfb10008
    ctx->pc = 0x16bad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bad8: 0xdfb20010
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16badc: 0xdfb30018
    ctx->pc = 0x16badcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bae0: 0xdfbf0020
    ctx->pc = 0x16bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bae4: 0x3e00008
    ctx->pc = 0x16BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BAD0u: goto label_16bad0;
            case 0x16BAD4u: goto label_16bad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BAECu;
    // 0x16baec: 0x0
    ctx->pc = 0x16baecu;
    // NOP
}
