#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACB60
// Address: 0x1acb60 - 0x1acea0
void sub_001ACB60_0x1acb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1acb60u;

    // 0x1acb60: 0x27bdff70
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1acb64: 0x41040
    ctx->pc = 0x1acb64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1acb68: 0xffbf0080
    ctx->pc = 0x1acb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1acb6c: 0x443021
    ctx->pc = 0x1acb6cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1acb70: 0x7fb70070
    ctx->pc = 0x1acb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1acb74: 0x51040
    ctx->pc = 0x1acb74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1acb78: 0x7fb60060
    ctx->pc = 0x1acb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1acb7c: 0x3c03002b
    ctx->pc = 0x1acb7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1acb80: 0x7fb50050
    ctx->pc = 0x1acb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1acb84: 0x451021
    ctx->pc = 0x1acb84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1acb88: 0x7fb40040
    ctx->pc = 0x1acb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1acb8c: 0xa0b02d
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb90: 0x7fb30030
    ctx->pc = 0x1acb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1acb94: 0x24633950
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14672));
    // 0x1acb98: 0x62a40
    ctx->pc = 0x1acb98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 9));
    // 0x1acb9c: 0x7fb20020
    ctx->pc = 0x1acb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1acba0: 0x65b821
    ctx->pc = 0x1acba0u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1acba4: 0x21080
    ctx->pc = 0x1acba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acba8: 0x2e29021
    ctx->pc = 0x1acba8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1acbac: 0x7fb10010
    ctx->pc = 0x1acbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acbb0: 0x3c02002b
    ctx->pc = 0x1acbb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1acbb4: 0x3c03002b
    ctx->pc = 0x1acbb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1acbb8: 0x24423934
    ctx->pc = 0x1acbb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14644));
    // 0x1acbbc: 0x7fb00000
    ctx->pc = 0x1acbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acbc0: 0x441021
    ctx->pc = 0x1acbc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1acbc4: 0xe0a82d
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbc8: 0x90420000
    ctx->pc = 0x1acbc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acbcc: 0x100a02d
    ctx->pc = 0x1acbccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbd0: 0x104000a3
    ctx->pc = 0x1ACBD0u;
    {
        const bool branch_taken_0x1acbd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACBD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14400));
        if (branch_taken_0x1acbd0) {
            ctx->pc = 0x1ACE60u;
            goto label_1ace60;
        }
    }
    ctx->pc = 0x1ACBD8u;
    // 0x1acbd8: 0x831821
    ctx->pc = 0x1acbd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1acbdc: 0x24020002
    ctx->pc = 0x1acbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acbe0: 0x906300e4
    ctx->pc = 0x1acbe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1acbe4: 0x1062009f
    ctx->pc = 0x1ACBE4u;
    {
        const bool branch_taken_0x1acbe4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ACBE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 127));
        if (branch_taken_0x1acbe4) {
            ctx->pc = 0x1ACE64u;
            goto label_1ace64;
        }
    }
    ctx->pc = 0x1ACBECu;
    // 0x1acbec: 0x1000009f
    ctx->pc = 0x1ACBECu;
    {
        const bool branch_taken_0x1acbec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACBF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acbec) {
            ctx->pc = 0x1ACE6Cu;
            goto label_1ace6c;
        }
    }
    ctx->pc = 0x1ACBF4u;
label_1acbf4:
    // 0x1acbf4: 0x2ec10080
    ctx->pc = 0x1acbf4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 22), 128));
    // 0x1acbf8: 0x10200097
    ctx->pc = 0x1ACBF8u;
    {
        const bool branch_taken_0x1acbf8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACBFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1acbf8) {
            ctx->pc = 0x1ACE58u;
            goto label_1ace58;
        }
    }
    ctx->pc = 0x1ACC00u;
    // 0x1acc00: 0x92430000
    ctx->pc = 0x1acc00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1acc04: 0x14600078
    ctx->pc = 0x1ACC04u;
    {
        const bool branch_taken_0x1acc04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACC08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1acc04) {
            ctx->pc = 0x1ACDE8u;
            goto label_1acde8;
        }
    }
    ctx->pc = 0x1ACC0Cu;
    // 0x1acc0c: 0x92430005
    ctx->pc = 0x1acc0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x1acc10: 0x240200ff
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1acc14: 0x14620003
    ctx->pc = 0x1ACC14u;
    {
        const bool branch_taken_0x1acc14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1ACC18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acc14) {
            ctx->pc = 0x1ACC24u;
            goto label_1acc24;
        }
    }
    ctx->pc = 0x1ACC1Cu;
    // 0x1acc1c: 0x16820002
    ctx->pc = 0x1ACC1Cu;
    {
        const bool branch_taken_0x1acc1c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x1acc1c) {
            ctx->pc = 0x1ACC28u;
            goto label_1acc28;
        }
    }
    ctx->pc = 0x1ACC24u;
label_1acc24:
    // 0x1acc24: 0x307400ff
    ctx->pc = 0x1acc24u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 255));
label_1acc28:
    // 0x1acc28: 0x92420007
    ctx->pc = 0x1acc28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x1acc2c: 0x10400016
    ctx->pc = 0x1ACC2Cu;
    {
        const bool branch_taken_0x1acc2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACC30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1acc2c) {
            ctx->pc = 0x1ACC88u;
            goto label_1acc88;
        }
    }
    ctx->pc = 0x1ACC34u;
    // 0x1acc34: 0xc06bb20
    ctx->pc = 0x1ACC34u;
    SET_GPR_U32(ctx, 31, 0x1ACC3Cu);
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC3Cu; }
    }
    if (ctx->pc != 0x1ACC3Cu) { return; }
    ctx->pc = 0x1ACC3Cu;
    // 0x1acc3c: 0x3042ffff
    ctx->pc = 0x1acc3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1acc40: 0x24110001
    ctx->pc = 0x1acc40u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc44: 0x30430001
    ctx->pc = 0x1acc44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x1acc48: 0x24040001
    ctx->pc = 0x1acc48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc4c: 0x2402ffff
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acc50: 0xc06bb20
    ctx->pc = 0x1ACC50u;
    SET_GPR_U32(ctx, 31, 0x1ACC58u);
    ctx->pc = 0x1ACC54u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC58u; }
    }
    if (ctx->pc != 0x1ACC58u) { return; }
    ctx->pc = 0x1ACC58u;
    // 0x1acc58: 0x92430007
    ctx->pc = 0x1acc58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x1acc5c: 0x3044ffff
    ctx->pc = 0x1acc5cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1acc60: 0x96420002
    ctx->pc = 0x1acc60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1acc64: 0x83001a
    ctx->pc = 0x1acc64u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1acc68: 0x24422000
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8192));
    // 0x1acc6c: 0x0
    ctx->pc = 0x1acc6cu;
    // NOP
    // 0x1acc70: 0x1810
    ctx->pc = 0x1acc70u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1acc74: 0x2231818
    ctx->pc = 0x1acc74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1acc78: 0x31940
    ctx->pc = 0x1acc78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x1acc7c: 0x431021
    ctx->pc = 0x1acc7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acc80: 0x10000004
    ctx->pc = 0x1ACC80u;
    {
        const bool branch_taken_0x1acc80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACC84u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 16383));
        if (branch_taken_0x1acc80) {
            ctx->pc = 0x1ACC94u;
            goto label_1acc94;
        }
    }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x96420002
    ctx->pc = 0x1acc88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1acc8c: 0x24422000
    ctx->pc = 0x1acc8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8192));
    // 0x1acc90: 0x30533fff
    ctx->pc = 0x1acc90u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 16383));
label_1acc94:
    // 0x1acc94: 0xc06bb20
    ctx->pc = 0x1ACC94u;
    SET_GPR_U32(ctx, 31, 0x1ACC9Cu);
    ctx->pc = 0x1ACC98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC9Cu; }
    }
    if (ctx->pc != 0x1ACC9Cu) { return; }
    ctx->pc = 0x1ACC9Cu;
    // 0x1acc9c: 0x3042ffff
    ctx->pc = 0x1acc9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1acca0: 0x24110001
    ctx->pc = 0x1acca0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acca4: 0x30430001
    ctx->pc = 0x1acca4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x1acca8: 0x2402ffff
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1accac: 0x43880a
    ctx->pc = 0x1accacu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x1accb0: 0x92420006
    ctx->pc = 0x1accb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1accb4: 0x1040000d
    ctx->pc = 0x1ACCB4u;
    {
        const bool branch_taken_0x1accb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACCB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1accb4) {
            ctx->pc = 0x1ACCECu;
            goto label_1accec;
        }
    }
    ctx->pc = 0x1ACCBCu;
    // 0x1accbc: 0xc06bb20
    ctx->pc = 0x1ACCBCu;
    SET_GPR_U32(ctx, 31, 0x1ACCC4u);
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCC4u; }
    }
    if (ctx->pc != 0x1ACCC4u) { return; }
    ctx->pc = 0x1ACCC4u;
    // 0x1accc4: 0x92430006
    ctx->pc = 0x1accc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1accc8: 0x3044ffff
    ctx->pc = 0x1accc8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1acccc: 0x92420004
    ctx->pc = 0x1accccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1accd0: 0x83001a
    ctx->pc = 0x1accd0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1accd4: 0x0
    ctx->pc = 0x1accd4u;
    // NOP
    // 0x1accd8: 0x0
    ctx->pc = 0x1accd8u;
    // NOP
    // 0x1accdc: 0x1810
    ctx->pc = 0x1accdcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1acce0: 0x2231818
    ctx->pc = 0x1acce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1acce4: 0x10000002
    ctx->pc = 0x1ACCE4u;
    {
        const bool branch_taken_0x1acce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACCE8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1acce4) {
            ctx->pc = 0x1ACCF0u;
            goto label_1accf0;
        }
    }
    ctx->pc = 0x1ACCECu;
label_1accec:
    // 0x1accec: 0x92420004
    ctx->pc = 0x1accecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1accf0:
    // 0x1accf0: 0x4410003
    ctx->pc = 0x1ACCF0u;
    {
        const bool branch_taken_0x1accf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ACCF4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 128));
        if (branch_taken_0x1accf0) {
            ctx->pc = 0x1ACD00u;
            goto label_1acd00;
        }
    }
    ctx->pc = 0x1ACCF8u;
    // 0x1accf8: 0x10000004
    ctx->pc = 0x1ACCF8u;
    {
        const bool branch_taken_0x1accf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACCFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1accf8) {
            ctx->pc = 0x1ACD0Cu;
            goto label_1acd0c;
        }
    }
    ctx->pc = 0x1ACD00u;
label_1acd00:
    // 0x1acd00: 0x14200002
    ctx->pc = 0x1ACD00u;
    {
        const bool branch_taken_0x1acd00 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1acd00) {
            ctx->pc = 0x1ACD0Cu;
            goto label_1acd0c;
        }
    }
    ctx->pc = 0x1ACD08u;
    // 0x1acd08: 0x2402007f
    ctx->pc = 0x1acd08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
label_1acd0c:
    // 0x1acd0c: 0x44820000
    ctx->pc = 0x1acd0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1acd10: 0x6a00004
    ctx->pc = 0x1ACD10u;
    {
        const bool branch_taken_0x1acd10 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1ACD14u;
        ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1acd10) {
            ctx->pc = 0x1ACD24u;
            goto label_1acd24;
        }
    }
    ctx->pc = 0x1ACD18u;
    // 0x1acd18: 0x44950000
    ctx->pc = 0x1acd18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 21);
    // 0x1acd1c: 0x10000008
    ctx->pc = 0x1ACD1Cu;
    {
        const bool branch_taken_0x1acd1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACD20u;
        ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1acd1c) {
            ctx->pc = 0x1ACD40u;
            goto label_1acd40;
        }
    }
    ctx->pc = 0x1ACD24u;
label_1acd24:
    // 0x1acd24: 0x151842
    ctx->pc = 0x1acd24u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 21), 1));
    // 0x1acd28: 0x32a20001
    ctx->pc = 0x1acd28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 1));
    // 0x1acd2c: 0x621825
    ctx->pc = 0x1acd2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1acd30: 0x44830000
    ctx->pc = 0x1acd30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1acd34: 0x0
    ctx->pc = 0x1acd34u;
    // NOP
    // 0x1acd38: 0x468000a0
    ctx->pc = 0x1acd38u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1acd3c: 0x46021080
    ctx->pc = 0x1acd3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1acd40:
    // 0x1acd40: 0x3c034300
    ctx->pc = 0x1acd40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17152 << 16));
    // 0x1acd44: 0x3c024f00
    ctx->pc = 0x1acd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1acd48: 0x44830800
    ctx->pc = 0x1acd48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1acd4c: 0x44820000
    ctx->pc = 0x1acd4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1acd50: 0x0
    ctx->pc = 0x1acd50u;
    // NOP
    // 0x1acd54: 0x46011043
    ctx->pc = 0x1acd54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1acd58: 0x0
    ctx->pc = 0x1acd58u;
    // NOP
    // 0x1acd5c: 0x46011842
    ctx->pc = 0x1acd5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1acd60: 0x46010036
    ctx->pc = 0x1acd60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1acd64: 0x45010005
    ctx->pc = 0x1ACD64u;
    {
        const bool branch_taken_0x1acd64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1acd64) {
            ctx->pc = 0x1ACD7Cu;
            goto label_1acd7c;
        }
    }
    ctx->pc = 0x1ACD6Cu;
    // 0x1acd6c: 0x46000864
    ctx->pc = 0x1acd6cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1acd70: 0x44150800
    ctx->pc = 0x1acd70u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[1]);
    // 0x1acd74: 0x10000008
    ctx->pc = 0x1ACD74u;
    {
        const bool branch_taken_0x1acd74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACD78u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
        if (branch_taken_0x1acd74) {
            ctx->pc = 0x1ACD98u;
            goto label_1acd98;
        }
    }
    ctx->pc = 0x1ACD7Cu;
label_1acd7c:
    // 0x1acd7c: 0x46000841
    ctx->pc = 0x1acd7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1acd80: 0x3c028000
    ctx->pc = 0x1acd80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1acd84: 0x46000864
    ctx->pc = 0x1acd84u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1acd88: 0x44150800
    ctx->pc = 0x1acd88u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[1]);
    // 0x1acd8c: 0x0
    ctx->pc = 0x1acd8cu;
    // NOP
    // 0x1acd90: 0x2a2a825
    ctx->pc = 0x1acd90u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1acd94: 0x92440009
    ctx->pc = 0x1acd94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_1acd98:
    // 0x1acd98: 0x32c2007f
    ctx->pc = 0x1acd98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 127));
    // 0x1acd9c: 0x92430008
    ctx->pc = 0x1acd9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1acda0: 0x21200
    ctx->pc = 0x1acda0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1acda4: 0x133c3c
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1acda8: 0x152e3c
    ctx->pc = 0x1acda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x1acdac: 0x14363c
    ctx->pc = 0x1acdacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 24));
    // 0x1acdb0: 0x2021025
    ctx->pc = 0x1acdb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acdb4: 0x73c3f
    ctx->pc = 0x1acdb4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1acdb8: 0x52e3f
    ctx->pc = 0x1acdb8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1acdbc: 0x6363f
    ctx->pc = 0x1acdbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1acdc0: 0x30840001
    ctx->pc = 0x1acdc0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x1acdc4: 0x421c0
    ctx->pc = 0x1acdc4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1acdc8: 0x3063007f
    ctx->pc = 0x1acdc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 127));
    // 0x1acdcc: 0x831825
    ctx->pc = 0x1acdccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1acdd0: 0xc069d54
    ctx->pc = 0x1ACDD0u;
    SET_GPR_U32(ctx, 31, 0x1ACDD8u);
    ctx->pc = 0x1ACDD4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A7550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7550_0x1a7550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDD8u; }
    }
    if (ctx->pc != 0x1ACDD8u) { return; }
    ctx->pc = 0x1ACDD8u;
    // 0x1acdd8: 0x4410016
    ctx->pc = 0x1ACDD8u;
    {
        const bool branch_taken_0x1acdd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1acdd8) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACDE0u;
    // 0x1acde0: 0x1000001c
    ctx->pc = 0x1ACDE0u;
    {
        const bool branch_taken_0x1acde0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1acde0) {
            ctx->pc = 0x1ACE54u;
            goto label_1ace54;
        }
    }
    ctx->pc = 0x1ACDE8u;
label_1acde8:
    // 0x1acde8: 0x14620010
    ctx->pc = 0x1ACDE8u;
    {
        const bool branch_taken_0x1acde8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1acde8) {
            ctx->pc = 0x1ACE2Cu;
            goto label_1ace2c;
        }
    }
    ctx->pc = 0x1ACDF0u;
    // 0x1acdf0: 0x92440009
    ctx->pc = 0x1acdf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1acdf4: 0x32c2007f
    ctx->pc = 0x1acdf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 127));
    // 0x1acdf8: 0x92430008
    ctx->pc = 0x1acdf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1acdfc: 0x21200
    ctx->pc = 0x1acdfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ace00: 0x2021025
    ctx->pc = 0x1ace00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ace04: 0x30840001
    ctx->pc = 0x1ace04u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x1ace08: 0x421c0
    ctx->pc = 0x1ace08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1ace0c: 0x3063007f
    ctx->pc = 0x1ace0cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 127));
    // 0x1ace10: 0x831825
    ctx->pc = 0x1ace10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ace14: 0xc069d0c
    ctx->pc = 0x1ACE14u;
    SET_GPR_U32(ctx, 31, 0x1ACE1Cu);
    ctx->pc = 0x1ACE18u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A7430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7430_0x1a7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE1Cu; }
    }
    if (ctx->pc != 0x1ACE1Cu) { return; }
    ctx->pc = 0x1ACE1Cu;
    // 0x1ace1c: 0x4410005
    ctx->pc = 0x1ACE1Cu;
    {
        const bool branch_taken_0x1ace1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ace1c) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACE24u;
    // 0x1ace24: 0x1000000b
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE54u;
            goto label_1ace54;
        }
    }
    ctx->pc = 0x1ACE2Cu;
label_1ace2c:
    // 0x1ace2c: 0x1000000f
    ctx->pc = 0x1ACE2Cu;
    {
        const bool branch_taken_0x1ace2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACE30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ace2c) {
            ctx->pc = 0x1ACE6Cu;
            goto label_1ace6c;
        }
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0x9256000b
    ctx->pc = 0x1ace34u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x1ace38: 0x240200ff
    ctx->pc = 0x1ace38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ace3c: 0x12c20005
    ctx->pc = 0x1ACE3Cu;
    {
        const bool branch_taken_0x1ace3c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ACE40u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x1ace3c) {
            ctx->pc = 0x1ACE54u;
            goto label_1ace54;
        }
    }
    ctx->pc = 0x1ACE44u;
    // 0x1ace44: 0x561021
    ctx->pc = 0x1ace44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1ace48: 0x21080
    ctx->pc = 0x1ace48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ace4c: 0x1000ff69
    ctx->pc = 0x1ACE4Cu;
    {
        const bool branch_taken_0x1ace4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACE50u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        if (branch_taken_0x1ace4c) {
            ctx->pc = 0x1ACBF4u;
            goto label_1acbf4;
        }
    }
    ctx->pc = 0x1ACE54u;
label_1ace54:
    // 0x1ace54: 0x102d
    ctx->pc = 0x1ace54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace58:
    // 0x1ace58: 0x10000005
    ctx->pc = 0x1ACE58u;
    {
        const bool branch_taken_0x1ace58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACE5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x1ace58) {
            ctx->pc = 0x1ACE70u;
            goto label_1ace70;
        }
    }
    ctx->pc = 0x1ACE60u;
label_1ace60:
    // 0x1ace60: 0x3082007f
    ctx->pc = 0x1ace60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 127));
label_1ace64:
    // 0x1ace64: 0x1000ff63
    ctx->pc = 0x1ACE64u;
    {
        const bool branch_taken_0x1ace64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACE68u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1ace64) {
            ctx->pc = 0x1ACBF4u;
            goto label_1acbf4;
        }
    }
    ctx->pc = 0x1ACE6Cu;
label_1ace6c:
    // 0x1ace6c: 0xdfbf0080
    ctx->pc = 0x1ace6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ace70:
    // 0x1ace70: 0x7bb70070
    ctx->pc = 0x1ace70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ace74: 0x7bb60060
    ctx->pc = 0x1ace74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ace78: 0x7bb50050
    ctx->pc = 0x1ace78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ace7c: 0x7bb40040
    ctx->pc = 0x1ace7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace80: 0x7bb30030
    ctx->pc = 0x1ace80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ace84: 0x7bb20020
    ctx->pc = 0x1ace84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace88: 0x7bb10010
    ctx->pc = 0x1ace88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ace8c: 0x7bb00000
    ctx->pc = 0x1ace8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace90: 0x3e00008
    ctx->pc = 0x1ACE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACBF4u: goto label_1acbf4;
            case 0x1ACC24u: goto label_1acc24;
            case 0x1ACC28u: goto label_1acc28;
            case 0x1ACC88u: goto label_1acc88;
            case 0x1ACC94u: goto label_1acc94;
            case 0x1ACCECu: goto label_1accec;
            case 0x1ACCF0u: goto label_1accf0;
            case 0x1ACD00u: goto label_1acd00;
            case 0x1ACD0Cu: goto label_1acd0c;
            case 0x1ACD24u: goto label_1acd24;
            case 0x1ACD40u: goto label_1acd40;
            case 0x1ACD7Cu: goto label_1acd7c;
            case 0x1ACD98u: goto label_1acd98;
            case 0x1ACDE8u: goto label_1acde8;
            case 0x1ACE2Cu: goto label_1ace2c;
            case 0x1ACE34u: goto label_1ace34;
            case 0x1ACE54u: goto label_1ace54;
            case 0x1ACE58u: goto label_1ace58;
            case 0x1ACE60u: goto label_1ace60;
            case 0x1ACE64u: goto label_1ace64;
            case 0x1ACE6Cu: goto label_1ace6c;
            case 0x1ACE70u: goto label_1ace70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACE98u;
    // 0x1ace98: 0x0
    ctx->pc = 0x1ace98u;
    // NOP
    // 0x1ace9c: 0x0
    ctx->pc = 0x1ace9cu;
    // NOP
}
