#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AAAD0
// Address: 0x1aaad0 - 0x1aad20
void sub_001AAAD0_0x1aaad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aaad0u;

    // 0x1aaad0: 0x27bdfe30
    ctx->pc = 0x1aaad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1aaad4: 0x3c010032
    ctx->pc = 0x1aaad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aaad8: 0xffbf0090
    ctx->pc = 0x1aaad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1aaadc: 0x7fbe0080
    ctx->pc = 0x1aaadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1aaae0: 0x7fb70070
    ctx->pc = 0x1aaae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1aaae4: 0x7fb60060
    ctx->pc = 0x1aaae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aaae8: 0x7fb50050
    ctx->pc = 0x1aaae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aaaec: 0xa0b02d
    ctx->pc = 0x1aaaecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaf0: 0x7fb40040
    ctx->pc = 0x1aaaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aaaf4: 0xc0a82d
    ctx->pc = 0x1aaaf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaf8: 0x7fb30030
    ctx->pc = 0x1aaaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aaafc: 0x7fb20020
    ctx->pc = 0x1aaafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aab00: 0x7fb10010
    ctx->pc = 0x1aab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aab04: 0x7fb00000
    ctx->pc = 0x1aab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aab08: 0x8c33440c
    ctx->pc = 0x1aab08u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aab0c: 0x10800006
    ctx->pc = 0x1AAB0Cu;
    {
        const bool branch_taken_0x1aab0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB10u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aab0c) {
            ctx->pc = 0x1AAB28u;
            goto label_1aab28;
        }
    }
    ctx->pc = 0x1AAB14u;
    // 0x1aab14: 0x2403ffff
    ctx->pc = 0x1aab14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aab18: 0x16a3002b
    ctx->pc = 0x1AAB18u;
    {
        const bool branch_taken_0x1aab18 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 3));
        if (branch_taken_0x1aab18) {
            ctx->pc = 0x1AABC8u;
            goto label_1aabc8;
        }
    }
    ctx->pc = 0x1AAB20u;
    // 0x1aab20: 0x10000071
    ctx->pc = 0x1AAB20u;
    {
        const bool branch_taken_0x1aab20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1aab20) {
            ctx->pc = 0x1AACE8u;
            goto label_1aace8;
        }
    }
    ctx->pc = 0x1AAB28u;
label_1aab28:
    // 0x1aab28: 0xc073474
    ctx->pc = 0x1AAB28u;
    SET_GPR_U32(ctx, 31, 0x1AAB30u);
    ctx->pc = 0x1AAB2Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1D0_0x1cd1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB30u; }
    }
    if (ctx->pc != 0x1AAB30u) { return; }
    ctx->pc = 0x1AAB30u;
    // 0x1aab30: 0x40a82d
    ctx->pc = 0x1aab30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab34: 0x2403ffff
    ctx->pc = 0x1aab34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aab38: 0x12a3006a
    ctx->pc = 0x1AAB38u;
    {
        const bool branch_taken_0x1aab38 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AAB3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aab38) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAB40u;
    // 0x1aab40: 0x2a0202d
    ctx->pc = 0x1aab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab44: 0x302d
    ctx->pc = 0x1aab44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab48: 0xc0735c4
    ctx->pc = 0x1AAB48u;
    SET_GPR_U32(ctx, 31, 0x1AAB50u);
    ctx->pc = 0x1AAB4Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD710_0x1cd710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB50u; }
    }
    if (ctx->pc != 0x1AAB50u) { return; }
    ctx->pc = 0x1AAB50u;
    // 0x1aab50: 0x40802d
    ctx->pc = 0x1aab50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab54: 0x12000063
    ctx->pc = 0x1AAB54u;
    {
        const bool branch_taken_0x1aab54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aab54) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAB5Cu;
    // 0x1aab5c: 0xc042c56
    ctx->pc = 0x1AAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB64u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB64u; }
    }
    if (ctx->pc != 0x1AAB64u) { return; }
    ctx->pc = 0x1AAB64u;
    // 0x1aab64: 0x1040005f
    ctx->pc = 0x1AAB64u;
    {
        const bool branch_taken_0x1aab64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aab64) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAB6Cu;
    // 0x1aab6c: 0xc042dee
    ctx->pc = 0x1AAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB74u);
    ctx->pc = 0x1AAB70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 92));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB74u; }
    }
    if (ctx->pc != 0x1AAB74u) { return; }
    ctx->pc = 0x1AAB74u;
    // 0x1aab74: 0x1040005b
    ctx->pc = 0x1AAB74u;
    {
        const bool branch_taken_0x1aab74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1aab74) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAB7Cu;
    // 0x1aab7c: 0xc042bf0
    ctx->pc = 0x1AAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB84u);
    ctx->pc = 0x1AAB80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB84u; }
    }
    if (ctx->pc != 0x1AAB84u) { return; }
    ctx->pc = 0x1AAB84u;
    // 0x1aab84: 0x27a400a0
    ctx->pc = 0x1aab84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aab88: 0xc042dee
    ctx->pc = 0x1AAB88u;
    SET_GPR_U32(ctx, 31, 0x1AAB90u);
    ctx->pc = 0x1AAB8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB90u; }
    }
    if (ctx->pc != 0x1AAB90u) { return; }
    ctx->pc = 0x1AAB90u;
    // 0x1aab90: 0x10400002
    ctx->pc = 0x1AAB90u;
    {
        const bool branch_taken_0x1aab90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAB94u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1aab90) {
            ctx->pc = 0x1AAB9Cu;
            goto label_1aab9c;
        }
    }
    ctx->pc = 0x1AAB98u;
    // 0x1aab98: 0xa0400000
    ctx->pc = 0x1aab98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aab9c:
    // 0x1aab9c: 0x27a400a0
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aaba0: 0xc042aee
    ctx->pc = 0x1AABA0u;
    SET_GPR_U32(ctx, 31, 0x1AABA8u);
    ctx->pc = 0x1AABA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABA8u; }
    }
    if (ctx->pc != 0x1AABA8u) { return; }
    ctx->pc = 0x1AABA8u;
    // 0x1aaba8: 0x27a400a0
    ctx->pc = 0x1aaba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aabac: 0x260282d
    ctx->pc = 0x1aabacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabb0: 0xc06a8f8
    ctx->pc = 0x1AABB0u;
    SET_GPR_U32(ctx, 31, 0x1AABB8u);
    ctx->pc = 0x1AABB4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABB8u; }
    }
    if (ctx->pc != 0x1AABB8u) { return; }
    ctx->pc = 0x1AABB8u;
    // 0x1aabb8: 0x1c40001d
    ctx->pc = 0x1AABB8u;
    {
        const bool branch_taken_0x1aabb8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AABBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 416));
        if (branch_taken_0x1aabb8) {
            ctx->pc = 0x1AAC30u;
            goto label_1aac30;
        }
    }
    ctx->pc = 0x1AABC0u;
    // 0x1aabc0: 0x10000048
    ctx->pc = 0x1AABC0u;
    {
        const bool branch_taken_0x1aabc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aabc0) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AABC8u;
label_1aabc8:
    // 0x1aabc8: 0x3c020001
    ctx->pc = 0x1aabc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1aabcc: 0x2821024
    ctx->pc = 0x1aabccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1aabd0: 0x1040000b
    ctx->pc = 0x1AABD0u;
    {
        const bool branch_taken_0x1aabd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AABD4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aabd0) {
            ctx->pc = 0x1AAC00u;
            goto label_1aac00;
        }
    }
    ctx->pc = 0x1AABD8u;
    // 0x1aabd8: 0x80302d
    ctx->pc = 0x1aabd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabdc: 0x3c050025
    ctx->pc = 0x1aabdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aabe0: 0x27a400a0
    ctx->pc = 0x1aabe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aabe4: 0xc042a0c
    ctx->pc = 0x1AABE4u;
    SET_GPR_U32(ctx, 31, 0x1AABECu);
    ctx->pc = 0x1AABE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABECu; }
    }
    if (ctx->pc != 0x1AABECu) { return; }
    ctx->pc = 0x1AABECu;
    // 0x1aabec: 0x27a400a0
    ctx->pc = 0x1aabecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aabf0: 0xc06a8f8
    ctx->pc = 0x1AABF0u;
    SET_GPR_U32(ctx, 31, 0x1AABF8u);
    ctx->pc = 0x1AABF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABF8u; }
    }
    if (ctx->pc != 0x1AABF8u) { return; }
    ctx->pc = 0x1AABF8u;
    // 0x1aabf8: 0x1000000a
    ctx->pc = 0x1AABF8u;
    {
        const bool branch_taken_0x1aabf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aabf8) {
            ctx->pc = 0x1AAC24u;
            goto label_1aac24;
        }
    }
    ctx->pc = 0x1AAC00u;
label_1aac00:
    // 0x1aac00: 0x3c050025
    ctx->pc = 0x1aac00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aac04: 0x3c060025
    ctx->pc = 0x1aac04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aac08: 0x27a400a0
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aac0c: 0x24a5d0b8
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955192));
    // 0x1aac10: 0xc042a0c
    ctx->pc = 0x1AAC10u;
    SET_GPR_U32(ctx, 31, 0x1AAC18u);
    ctx->pc = 0x1AAC14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC18u; }
    }
    if (ctx->pc != 0x1AAC18u) { return; }
    ctx->pc = 0x1AAC18u;
    // 0x1aac18: 0x27a400a0
    ctx->pc = 0x1aac18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1aac1c: 0xc06a920
    ctx->pc = 0x1AAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC24u);
    ctx->pc = 0x1AAC20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA480_0x1aa480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC24u; }
    }
    if (ctx->pc != 0x1AAC24u) { return; }
    ctx->pc = 0x1AAC24u;
label_1aac24:
    // 0x1aac24: 0x1840002f
    ctx->pc = 0x1AAC24u;
    {
        const bool branch_taken_0x1aac24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aac24) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAC2Cu;
    // 0x1aac2c: 0x27a401a0
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 416));
label_1aac30:
    // 0x1aac30: 0x260282d
    ctx->pc = 0x1aac30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac34: 0xc041eac
    ctx->pc = 0x1AAC34u;
    SET_GPR_U32(ctx, 31, 0x1AAC3Cu);
    ctx->pc = 0x1AAC38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC3Cu; }
    }
    if (ctx->pc != 0x1AAC3Cu) { return; }
    ctx->pc = 0x1AAC3Cu;
    // 0x1aac3c: 0xc073470
    ctx->pc = 0x1AAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC44u);
    ctx->pc = 0x1AAC40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC44u; }
    }
    if (ctx->pc != 0x1AAC44u) { return; }
    ctx->pc = 0x1AAC44u;
    // 0x1aac44: 0x8fa301a4
    ctx->pc = 0x1aac44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1aac48: 0x10600026
    ctx->pc = 0x1AAC48u;
    {
        const bool branch_taken_0x1aac48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAC4Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 29), 428)));
        if (branch_taken_0x1aac48) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AAC50u;
    // 0x1aac50: 0x2638821
    ctx->pc = 0x1aac50u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1aac54: 0x3c010032
    ctx->pc = 0x1aac54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aac58: 0x8c23440c
    ctx->pc = 0x1aac58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aac5c: 0x3c020018
    ctx->pc = 0x1aac5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x1aac60: 0x802d
    ctx->pc = 0x1aac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac64: 0x1000000c
    ctx->pc = 0x1AAC64u;
    {
        const bool branch_taken_0x1aac64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAC68u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1aac64) {
            ctx->pc = 0x1AAC98u;
            goto label_1aac98;
        }
    }
    ctx->pc = 0x1AAC6Cu;
label_1aac6c:
    // 0x1aac6c: 0x8e370000
    ctx->pc = 0x1aac6cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aac70: 0x26240004
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aac74: 0xc06bd74
    ctx->pc = 0x1AAC74u;
    SET_GPR_U32(ctx, 31, 0x1AAC7Cu);
    ctx->pc = 0x1AAC78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5D0_0x1af5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC7Cu; }
    }
    if (ctx->pc != 0x1AAC7Cu) { return; }
    ctx->pc = 0x1AAC7Cu;
    // 0x1aac7c: 0x240202d
    ctx->pc = 0x1aac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac80: 0xc0733f4
    ctx->pc = 0x1AAC80u;
    SET_GPR_U32(ctx, 31, 0x1AAC88u);
    ctx->pc = 0x1AAC84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFD0_0x1ccfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC88u; }
    }
    if (ctx->pc != 0x1AAC88u) { return; }
    ctx->pc = 0x1AAC88u;
    // 0x1aac88: 0x26220004
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aac8c: 0x26b50001
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x1aac90: 0x578821
    ctx->pc = 0x1aac90u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1aac94: 0x26100001
    ctx->pc = 0x1aac94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1aac98:
    // 0x1aac98: 0x21e102a
    ctx->pc = 0x1aac98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 30)));
    // 0x1aac9c: 0x1440fff3
    ctx->pc = 0x1AAC9Cu;
    {
        const bool branch_taken_0x1aac9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aac9c) {
            ctx->pc = 0x1AAC6Cu;
            goto label_1aac6c;
        }
    }
    ctx->pc = 0x1AACA4u;
    // 0x1aaca4: 0xc06372c
    ctx->pc = 0x1AACA4u;
    SET_GPR_U32(ctx, 31, 0x1AACACu);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACACu; }
    }
    if (ctx->pc != 0x1AACACu) { return; }
    ctx->pc = 0x1AACACu;
    // 0x1aacac: 0x8fa301b4
    ctx->pc = 0x1aacacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1aacb0: 0x1060000c
    ctx->pc = 0x1AACB0u;
    {
        const bool branch_taken_0x1aacb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aacb0) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AACB8u;
    // 0x1aacb8: 0x8fa401c4
    ctx->pc = 0x1aacb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1aacbc: 0x10800009
    ctx->pc = 0x1AACBCu;
    {
        const bool branch_taken_0x1aacbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AACC0u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 1));
        if (branch_taken_0x1aacbc) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AACC4u;
    // 0x1aacc4: 0x2643821
    ctx->pc = 0x1aacc4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1aacc8: 0x5287e
    ctx->pc = 0x1aacc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x1aaccc: 0x2633021
    ctx->pc = 0x1aacccu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1aacd0: 0x2c0202d
    ctx->pc = 0x1aacd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacd4: 0xc073d58
    ctx->pc = 0x1AACD4u;
    SET_GPR_U32(ctx, 31, 0x1AACDCu);
    ctx->pc = 0x1AACD8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACDCu; }
    }
    if (ctx->pc != 0x1AACDCu) { return; }
    ctx->pc = 0x1AACDCu;
    // 0x1aacdc: 0xc06372c
    ctx->pc = 0x1AACDCu;
    SET_GPR_U32(ctx, 31, 0x1AACE4u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACE4u; }
    }
    if (ctx->pc != 0x1AACE4u) { return; }
    ctx->pc = 0x1AACE4u;
label_1aace4:
    // 0x1aace4: 0xdfbf0090
    ctx->pc = 0x1aace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aace8:
    // 0x1aace8: 0x7bbe0080
    ctx->pc = 0x1aace8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aacec: 0x7bb70070
    ctx->pc = 0x1aacecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aacf0: 0x7bb60060
    ctx->pc = 0x1aacf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aacf4: 0x7bb50050
    ctx->pc = 0x1aacf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aacf8: 0x7bb40040
    ctx->pc = 0x1aacf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aacfc: 0x7bb30030
    ctx->pc = 0x1aacfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aad00: 0x7bb20020
    ctx->pc = 0x1aad00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aad04: 0x7bb10010
    ctx->pc = 0x1aad04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aad08: 0x7bb00000
    ctx->pc = 0x1aad08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aad0c: 0x3e00008
    ctx->pc = 0x1AAD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AAB28u: goto label_1aab28;
            case 0x1AAB9Cu: goto label_1aab9c;
            case 0x1AABC8u: goto label_1aabc8;
            case 0x1AAC00u: goto label_1aac00;
            case 0x1AAC24u: goto label_1aac24;
            case 0x1AAC30u: goto label_1aac30;
            case 0x1AAC6Cu: goto label_1aac6c;
            case 0x1AAC98u: goto label_1aac98;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AAD14u;
    // 0x1aad14: 0x0
    ctx->pc = 0x1aad14u;
    // NOP
    // 0x1aad18: 0x0
    ctx->pc = 0x1aad18u;
    // NOP
    // 0x1aad1c: 0x0
    ctx->pc = 0x1aad1cu;
    // NOP
}
