#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E968
// Address: 0x12e968 - 0x12ebf0
void sub_0012E968_0x12e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e968u;

    // 0x12e968: 0x27bdff90
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e96c: 0x24060008
    ctx->pc = 0x12e96cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x12e970: 0xffb30038
    ctx->pc = 0x12e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x12e974: 0x80982d
    ctx->pc = 0x12e974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e978: 0xffb40040
    ctx->pc = 0x12e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12e97c: 0xa02d
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e980: 0xffb60050
    ctx->pc = 0x12e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x12e984: 0x52080
    ctx->pc = 0x12e984u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x12e988: 0xffb70058
    ctx->pc = 0x12e988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x12e98c: 0x51980
    ctx->pc = 0x12e98cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x12e990: 0xffbe0060
    ctx->pc = 0x12e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x12e994: 0x241effff
    ctx->pc = 0x12e994u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e998: 0xffb00020
    ctx->pc = 0x12e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12e99c: 0x52900
    ctx->pc = 0x12e99cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x12e9a0: 0xffb10028
    ctx->pc = 0x12e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12e9a4: 0x2631821
    ctx->pc = 0x12e9a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x12e9a8: 0xffb20030
    ctx->pc = 0x12e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12e9ac: 0x2652821
    ctx->pc = 0x12e9acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x12e9b0: 0xffb50048
    ctx->pc = 0x12e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x12e9b4: 0x24a502a8
    ctx->pc = 0x12e9b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 680));
    // 0x12e9b8: 0xffbf0068
    ctx->pc = 0x12e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12e9bc: 0x932021
    ctx->pc = 0x12e9bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12e9c0: 0x8e620054
    ctx->pc = 0x12e9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x12e9c4: 0xc2001a
    ctx->pc = 0x12e9c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12e9c8: 0x24660210
    ctx->pc = 0x12e9c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 528));
    // 0x12e9cc: 0x3812
    ctx->pc = 0x12e9ccu;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x12e9d0: 0xafa70014
    ctx->pc = 0x12e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12e9d4: 0x50400001
    ctx->pc = 0x12E9D4u;
    {
        const bool branch_taken_0x12e9d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e9d4) {
            ctx->pc = 0x12E9D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12E9DCu;
            goto label_12e9dc;
        }
    }
    ctx->pc = 0x12E9DCu;
label_12e9dc:
    // 0x12e9dc: 0x8e620044
    ctx->pc = 0x12e9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12e9e0: 0x24670110
    ctx->pc = 0x12e9e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 272));
    // 0x12e9e4: 0xafa6000c
    ctx->pc = 0x12e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12e9e8: 0x24630190
    ctx->pc = 0x12e9e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 400));
    // 0x12e9ec: 0xafa50010
    ctx->pc = 0x12e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12e9f0: 0x8fb60014
    ctx->pc = 0x12e9f0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12e9f4: 0x8c970080
    ctx->pc = 0x12e9f4u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x12e9f8: 0xafa00000
    ctx->pc = 0x12e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12e9fc: 0xafa70004
    ctx->pc = 0x12e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x12ea00: 0x1840006e
    ctx->pc = 0x12EA00u;
    {
        const bool branch_taken_0x12ea00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EA04u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x12ea00) {
            ctx->pc = 0x12EBBCu;
            goto label_12ebbc;
        }
    }
    ctx->pc = 0x12EA08u;
    // 0x12ea08: 0x24151249
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4681));
    // 0x12ea0c: 0x280282d
    ctx->pc = 0x12ea0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12ea10:
    // 0x12ea10: 0xc04b954
    ctx->pc = 0x12EA10u;
    SET_GPR_U32(ctx, 31, 0x12EA18u);
    ctx->pc = 0x12EA14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12E550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E550_0x12e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA18u; }
    }
    if (ctx->pc != 0x12EA18u) { return; }
    ctx->pc = 0x12EA18u;
    // 0x12ea18: 0x148840
    ctx->pc = 0x12ea18u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 1));
    // 0x12ea1c: 0x8fa40004
    ctx->pc = 0x12ea1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ea20: 0x2241821
    ctx->pc = 0x12ea20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x12ea24: 0x22400
    ctx->pc = 0x12ea24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 16));
    // 0x12ea28: 0xa4620000
    ctx->pc = 0x12ea28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ea2c: 0xc0448ba
    ctx->pc = 0x12EA2Cu;
    SET_GPR_U32(ctx, 31, 0x12EA34u);
    ctx->pc = 0x12EA30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA34u; }
    }
    if (ctx->pc != 0x12EA34u) { return; }
    ctx->pc = 0x12EA34u;
    // 0x12ea34: 0xdef20080
    ctx->pc = 0x12ea34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x12ea38: 0x40202d
    ctx->pc = 0x12ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea3c: 0xc04476c
    ctx->pc = 0x12EA3Cu;
    SET_GPR_U32(ctx, 31, 0x12EA44u);
    ctx->pc = 0x12EA40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA44u; }
    }
    if (ctx->pc != 0x12EA44u) { return; }
    ctx->pc = 0x12EA44u;
    // 0x12ea44: 0xc0448e8
    ctx->pc = 0x12EA44u;
    SET_GPR_U32(ctx, 31, 0x12EA4Cu);
    ctx->pc = 0x12EA48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA4Cu; }
    }
    if (ctx->pc != 0x12EA4Cu) { return; }
    ctx->pc = 0x12EA4Cu;
    // 0x12ea4c: 0x24057fff
    ctx->pc = 0x12ea4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12ea50: 0x40202d
    ctx->pc = 0x12ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea54: 0xa4102a
    ctx->pc = 0x12ea54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x12ea58: 0x14400007
    ctx->pc = 0x12EA58u;
    {
        const bool branch_taken_0x12ea58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EA5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32767));
        if (branch_taken_0x12ea58) {
            ctx->pc = 0x12EA78u;
            goto label_12ea78;
        }
    }
    ctx->pc = 0x12EA60u;
    // 0x12ea60: 0x80182d
    ctx->pc = 0x12ea60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea64: 0x28628000
    ctx->pc = 0x12ea64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294934528));
    // 0x12ea68: 0x54400003
    ctx->pc = 0x12EA68u;
    {
        const bool branch_taken_0x12ea68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12ea68) {
            ctx->pc = 0x12EA6Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
            ctx->pc = 0x12EA78u;
            goto label_12ea78;
        }
    }
    ctx->pc = 0x12EA70u;
    // 0x12ea70: 0x10000002
    ctx->pc = 0x12EA70u;
    {
        const bool branch_taken_0x12ea70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EA74u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x12ea70) {
            ctx->pc = 0x12EA7Cu;
            goto label_12ea7c;
        }
    }
    ctx->pc = 0x12EA78u;
label_12ea78:
    // 0x12ea78: 0x8fa60008
    ctx->pc = 0x12ea78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12ea7c:
    // 0x12ea7c: 0x60202d
    ctx->pc = 0x12ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea80: 0x41c00
    ctx->pc = 0x12ea80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 16));
    // 0x12ea84: 0x2261021
    ctx->pc = 0x12ea84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x12ea88: 0x4610003
    ctx->pc = 0x12EA88u;
    {
        const bool branch_taken_0x12ea88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12EA8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x12ea88) {
            ctx->pc = 0x12EA98u;
            goto label_12ea98;
        }
    }
    ctx->pc = 0x12EA90u;
    // 0x12ea90: 0x10000002
    ctx->pc = 0x12EA90u;
    {
        const bool branch_taken_0x12ea90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294964956));
        if (branch_taken_0x12ea90) {
            ctx->pc = 0x12EA9Cu;
            goto label_12ea9c;
        }
    }
    ctx->pc = 0x12EA98u;
label_12ea98:
    // 0x12ea98: 0x24820924
    ctx->pc = 0x12ea98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2340));
label_12ea9c:
    // 0x12ea9c: 0x52a00001
    ctx->pc = 0x12EA9Cu;
    {
        const bool branch_taken_0x12ea9c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x12ea9c) {
            ctx->pc = 0x12EAA0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12EAA4u;
            goto label_12eaa4;
        }
    }
    ctx->pc = 0x12EAA4u;
label_12eaa4:
    // 0x12eaa4: 0x55001a
    ctx->pc = 0x12eaa4u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12eaa8: 0x1012
    ctx->pc = 0x12eaa8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x12eaac: 0x40202d
    ctx->pc = 0x12eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eab0: 0x28820007
    ctx->pc = 0x12eab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 7));
    // 0x12eab4: 0x10400008
    ctx->pc = 0x12EAB4u;
    {
        const bool branch_taken_0x12eab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EAB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x12eab4) {
            ctx->pc = 0x12EAD8u;
            goto label_12ead8;
        }
    }
    ctx->pc = 0x12EABCu;
    // 0x12eabc: 0x80802d
    ctx->pc = 0x12eabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eac0: 0x2a02fff8
    ctx->pc = 0x12eac0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4294967288));
    // 0x12eac4: 0x54400004
    ctx->pc = 0x12EAC4u;
    {
        const bool branch_taken_0x12eac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eac4) {
            ctx->pc = 0x12EAC8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->pc = 0x12EAD8u;
            goto label_12ead8;
        }
    }
    ctx->pc = 0x12EACCu;
    // 0x12eacc: 0x10000003
    ctx->pc = 0x12EACCu;
    {
        const bool branch_taken_0x12eacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EAD0u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 124)));
        if (branch_taken_0x12eacc) {
            ctx->pc = 0x12EADCu;
            goto label_12eadc;
        }
    }
    ctx->pc = 0x12EAD4u;
    // 0x12ead4: 0x0
    ctx->pc = 0x12ead4u;
    // NOP
label_12ead8:
    // 0x12ead8: 0x86e4007c
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 124)));
label_12eadc:
    // 0x12eadc: 0xc0448ba
    ctx->pc = 0x12EADCu;
    SET_GPR_U32(ctx, 31, 0x12EAE4u);
    ctx->pc = 0x12EAE0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAE4u; }
    }
    if (ctx->pc != 0x12EAE4u) { return; }
    ctx->pc = 0x12EAE4u;
    // 0x12eae4: 0x240282d
    ctx->pc = 0x12eae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eae8: 0xc04476c
    ctx->pc = 0x12EAE8u;
    SET_GPR_U32(ctx, 31, 0x12EAF0u);
    ctx->pc = 0x12EAECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAF0u; }
    }
    if (ctx->pc != 0x12EAF0u) { return; }
    ctx->pc = 0x12EAF0u;
    // 0x12eaf0: 0xc0448e8
    ctx->pc = 0x12EAF0u;
    SET_GPR_U32(ctx, 31, 0x12EAF8u);
    ctx->pc = 0x12EAF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAF8u; }
    }
    if (ctx->pc != 0x12EAF8u) { return; }
    ctx->pc = 0x12EAF8u;
    // 0x12eaf8: 0x24037fff
    ctx->pc = 0x12eaf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12eafc: 0x40202d
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb00: 0x64102a
    ctx->pc = 0x12eb00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x12eb04: 0x54400006
    ctx->pc = 0x12EB04u;
    {
        const bool branch_taken_0x12eb04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eb04) {
            ctx->pc = 0x12EB08u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32767));
            ctx->pc = 0x12EB20u;
            goto label_12eb20;
        }
    }
    ctx->pc = 0x12EB0Cu;
    // 0x12eb0c: 0x28828000
    ctx->pc = 0x12eb0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294934528));
    // 0x12eb10: 0x54400003
    ctx->pc = 0x12EB10u;
    {
        const bool branch_taken_0x12eb10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12eb10) {
            ctx->pc = 0x12EB14u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294934528));
            ctx->pc = 0x12EB20u;
            goto label_12eb20;
        }
    }
    ctx->pc = 0x12EB18u;
    // 0x12eb18: 0x10000002
    ctx->pc = 0x12EB18u;
    {
        const bool branch_taken_0x12eb18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB1Cu;
        { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x12eb18) {
            ctx->pc = 0x12EB24u;
            goto label_12eb24;
        }
    }
    ctx->pc = 0x12EB20u;
label_12eb20:
    // 0x12eb20: 0x296001a
    ctx->pc = 0x12eb20u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_12eb24:
    // 0x12eb24: 0x8fa5000c
    ctx->pc = 0x12eb24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12eb28: 0x2251021
    ctx->pc = 0x12eb28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12eb2c: 0xa4440000
    ctx->pc = 0x12eb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x12eb30: 0x52c00001
    ctx->pc = 0x12EB30u;
    {
        const bool branch_taken_0x12eb30 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x12eb30) {
            ctx->pc = 0x12EB34u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12EB38u;
            goto label_12eb38;
        }
    }
    ctx->pc = 0x12EB38u;
label_12eb38:
    // 0x12eb38: 0x1810
    ctx->pc = 0x12eb38u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x12eb3c: 0x14600008
    ctx->pc = 0x12EB3Cu;
    {
        const bool branch_taken_0x12eb3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EB40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x12eb3c) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB44u;
    // 0x12eb44: 0x8fa20010
    ctx->pc = 0x12eb44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eb48: 0x27de0001
    ctx->pc = 0x12eb48u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
    // 0x12eb4c: 0x24060001
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb50: 0x5e3821
    ctx->pc = 0x12eb50u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x12eb54: 0xafa60000
    ctx->pc = 0x12eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x12eb58: 0x10000002
    ctx->pc = 0x12EB58u;
    {
        const bool branch_taken_0x12eb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12EB5Cu;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x12eb58) {
            ctx->pc = 0x12EB64u;
            goto label_12eb64;
        }
    }
    ctx->pc = 0x12EB60u;
label_12eb60:
    // 0x12eb60: 0x7e3821
    ctx->pc = 0x12eb60u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_12eb64:
    // 0x12eb64: 0x8fa20000
    ctx->pc = 0x12eb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb68: 0x24030008
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x12eb6c: 0x8fa60014
    ctx->pc = 0x12eb6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12eb70: 0x26940001
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x12eb74: 0x8e650054
    ctx->pc = 0x12eb74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x12eb78: 0xc22023
    ctx->pc = 0x12eb78u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12eb7c: 0x90e60000
    ctx->pc = 0x12eb7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12eb80: 0x651823
    ctx->pc = 0x12eb80u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12eb84: 0x852018
    ctx->pc = 0x12eb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x12eb88: 0x701004
    ctx->pc = 0x12eb88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x12eb8c: 0x8fa50000
    ctx->pc = 0x12eb8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb90: 0x304200ff
    ctx->pc = 0x12eb90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x12eb94: 0x628007
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x12eb98: 0x24a50001
    ctx->pc = 0x12eb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x12eb9c: 0x902004
    ctx->pc = 0x12eb9cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x12eba0: 0xafa50000
    ctx->pc = 0x12eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12eba4: 0xc43025
    ctx->pc = 0x12eba4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12eba8: 0xa0e60000
    ctx->pc = 0x12eba8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12ebac: 0x8e620044
    ctx->pc = 0x12ebacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x12ebb0: 0x282102a
    ctx->pc = 0x12ebb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x12ebb4: 0x1440ff96
    ctx->pc = 0x12EBB4u;
    {
        const bool branch_taken_0x12ebb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12EBB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ebb4) {
            ctx->pc = 0x12EA10u;
            goto label_12ea10;
        }
    }
    ctx->pc = 0x12EBBCu;
label_12ebbc:
    // 0x12ebbc: 0xdfb00020
    ctx->pc = 0x12ebbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ebc0: 0xdfb10028
    ctx->pc = 0x12ebc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ebc4: 0xdfb20030
    ctx->pc = 0x12ebc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ebc8: 0xdfb30038
    ctx->pc = 0x12ebc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ebcc: 0xdfb40040
    ctx->pc = 0x12ebccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ebd0: 0xdfb50048
    ctx->pc = 0x12ebd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ebd4: 0xdfb60050
    ctx->pc = 0x12ebd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ebd8: 0xdfb70058
    ctx->pc = 0x12ebd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12ebdc: 0xdfbe0060
    ctx->pc = 0x12ebdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ebe0: 0xdfbf0068
    ctx->pc = 0x12ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ebe4: 0x3e00008
    ctx->pc = 0x12EBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EBE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E9DCu: goto label_12e9dc;
            case 0x12EA10u: goto label_12ea10;
            case 0x12EA78u: goto label_12ea78;
            case 0x12EA7Cu: goto label_12ea7c;
            case 0x12EA98u: goto label_12ea98;
            case 0x12EA9Cu: goto label_12ea9c;
            case 0x12EAA4u: goto label_12eaa4;
            case 0x12EAD8u: goto label_12ead8;
            case 0x12EADCu: goto label_12eadc;
            case 0x12EB20u: goto label_12eb20;
            case 0x12EB24u: goto label_12eb24;
            case 0x12EB38u: goto label_12eb38;
            case 0x12EB60u: goto label_12eb60;
            case 0x12EB64u: goto label_12eb64;
            case 0x12EBBCu: goto label_12ebbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12EBECu;
    // 0x12ebec: 0x0
    ctx->pc = 0x12ebecu;
    // NOP
}
