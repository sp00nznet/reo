#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C6670
// Address: 0x1c6670 - 0x1c67b0
void sub_001C6670_0x1c6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c6670u;

    // 0x1c6670: 0x27bdfff0
    ctx->pc = 0x1c6670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6674: 0xffbf0000
    ctx->pc = 0x1c6674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6678: 0xc072204
    ctx->pc = 0x1C6678u;
    SET_GPR_U32(ctx, 31, 0x1C6680u);
    ctx->pc = 0x1C667Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8810_0x1c8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6680u; }
    }
    if (ctx->pc != 0x1C6680u) { return; }
    ctx->pc = 0x1C6680u;
    // 0x1c6680: 0xdfbf0000
    ctx->pc = 0x1c6680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6684: 0x304200ff
    ctx->pc = 0x1c6684u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c6688: 0x3e00008
    ctx->pc = 0x1C6688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C668Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6690u;
    // 0x1c6690: 0x27bdfff0
    ctx->pc = 0x1c6690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6694: 0xffbf0000
    ctx->pc = 0x1c6694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6698: 0xc072208
    ctx->pc = 0x1C6698u;
    SET_GPR_U32(ctx, 31, 0x1C66A0u);
    ctx->pc = 0x1C669Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8820_0x1c8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66A0u; }
    }
    if (ctx->pc != 0x1C66A0u) { return; }
    ctx->pc = 0x1C66A0u;
    // 0x1c66a0: 0xdfbf0000
    ctx->pc = 0x1c66a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66a4: 0x90420000
    ctx->pc = 0x1c66a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c66a8: 0x3e00008
    ctx->pc = 0x1C66A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C66ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C66B0u;
    // 0x1c66b0: 0x948501b0
    ctx->pc = 0x1c66b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1c66b4: 0x8c8301a8
    ctx->pc = 0x1c66b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x1c66b8: 0x8c8201ac
    ctx->pc = 0x1c66b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1c66bc: 0x651821
    ctx->pc = 0x1c66bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c66c0: 0x621823
    ctx->pc = 0x1c66c0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c66c4: 0x31080
    ctx->pc = 0x1c66c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c66c8: 0x431021
    ctx->pc = 0x1c66c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c66cc: 0x45001a
    ctx->pc = 0x1c66ccu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1c66d0: 0x0
    ctx->pc = 0x1c66d0u;
    // NOP
    // 0x1c66d4: 0x0
    ctx->pc = 0x1c66d4u;
    // NOP
    // 0x1c66d8: 0x1012
    ctx->pc = 0x1c66d8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1c66dc: 0x3e00008
    ctx->pc = 0x1C66DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C66E0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C66E4u;
    // 0x1c66e4: 0x0
    ctx->pc = 0x1c66e4u;
    // NOP
    // 0x1c66e8: 0x0
    ctx->pc = 0x1c66e8u;
    // NOP
    // 0x1c66ec: 0x0
    ctx->pc = 0x1c66ecu;
    // NOP
    // 0x1c66f0: 0xac8501a8
    ctx->pc = 0x1c66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 5));
    // 0x1c66f4: 0x30e200ff
    ctx->pc = 0x1c66f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 255));
    // 0x1c66f8: 0xac8501ac
    ctx->pc = 0x1c66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 5));
    // 0x1c66fc: 0xa48601b0
    ctx->pc = 0x1c66fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 432), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c6700: 0xa48201b4
    ctx->pc = 0x1c6700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 436), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c6704: 0x948601b0
    ctx->pc = 0x1c6704u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1c6708: 0x8c8401a8
    ctx->pc = 0x1c6708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x1c670c: 0x8041f1a
    ctx->pc = 0x1C670Cu;
    ctx->pc = 0x1C6710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6714u;
    // 0x1c6714: 0x0
    ctx->pc = 0x1c6714u;
    // NOP
    // 0x1c6718: 0x0
    ctx->pc = 0x1c6718u;
    // NOP
    // 0x1c671c: 0x0
    ctx->pc = 0x1c671cu;
    // NOP
    // 0x1c6720: 0xac8501b8
    ctx->pc = 0x1c6720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 5));
    // 0x1c6724: 0xac8501bc
    ctx->pc = 0x1c6724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 5));
    // 0x1c6728: 0xa48601c0
    ctx->pc = 0x1c6728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 448), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c672c: 0x948601c0
    ctx->pc = 0x1c672cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x1c6730: 0x8c8401b8
    ctx->pc = 0x1c6730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1c6734: 0x8041f1a
    ctx->pc = 0x1C6734u;
    ctx->pc = 0x1C6738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C673Cu;
    // 0x1c673c: 0x0
    ctx->pc = 0x1c673cu;
    // NOP
    // 0x1c6740: 0x27bdfff0
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6744: 0x10a00003
    ctx->pc = 0x1C6744u;
    {
        const bool branch_taken_0x1c6744 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6748u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1c6744) {
            ctx->pc = 0x1C6754u;
            goto label_1c6754;
        }
    }
    ctx->pc = 0x1C674Cu;
    // 0x1c674c: 0xc07220c
    ctx->pc = 0x1C674Cu;
    SET_GPR_U32(ctx, 31, 0x1C6754u);
    ctx->pc = 0x1C6750u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8830_0x1c8830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6754u; }
    }
    if (ctx->pc != 0x1C6754u) { return; }
    ctx->pc = 0x1C6754u;
label_1c6754:
    // 0x1c6754: 0xdfbf0000
    ctx->pc = 0x1c6754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6758: 0x3e00008
    ctx->pc = 0x1C6758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C675Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6760u;
    // 0x1c6760: 0xa48501e8
    ctx->pc = 0x1c6760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c6764: 0x3e00008
    ctx->pc = 0x1C6764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6768u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C676Cu;
    // 0x1c676c: 0x0
    ctx->pc = 0x1c676cu;
    // NOP
    // 0x1c6770: 0x27bdfff0
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6774: 0xffbf0000
    ctx->pc = 0x1c6774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6778: 0xc072210
    ctx->pc = 0x1C6778u;
    SET_GPR_U32(ctx, 31, 0x1C6780u);
    ctx->pc = 0x1C677Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8840_0x1c8840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6780u; }
    }
    if (ctx->pc != 0x1C6780u) { return; }
    ctx->pc = 0x1C6780u;
    // 0x1c6780: 0x3c02447a
    ctx->pc = 0x1c6780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17530 << 16));
    // 0x1c6784: 0xdfbf0000
    ctx->pc = 0x1c6784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6788: 0x44820800
    ctx->pc = 0x1c6788u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1c678c: 0x0
    ctx->pc = 0x1c678cu;
    // NOP
    // 0x1c6790: 0x46000802
    ctx->pc = 0x1c6790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c6794: 0x3e00008
    ctx->pc = 0x1C6794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C679Cu;
    // 0x1c679c: 0x0
    ctx->pc = 0x1c679cu;
    // NOP
    // 0x1c67a0: 0x3e00008
    ctx->pc = 0x1C67A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67A4u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 462)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6754u: goto label_1c6754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C67A8u;
    // 0x1c67a8: 0x0
    ctx->pc = 0x1c67a8u;
    // NOP
    // 0x1c67ac: 0x0
    ctx->pc = 0x1c67acu;
    // NOP
}
