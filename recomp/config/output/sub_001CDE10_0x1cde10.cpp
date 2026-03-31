#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CDE10
// Address: 0x1cde10 - 0x1cdfe0
void sub_001CDE10_0x1cde10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cde10u;

    // 0x1cde10: 0x27bdfcb0
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x1cde14: 0x2403ffff
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cde18: 0xffbf0040
    ctx->pc = 0x1cde18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cde1c: 0x7fb30030
    ctx->pc = 0x1cde1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cde20: 0x7fb20020
    ctx->pc = 0x1cde20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cde24: 0xa0982d
    ctx->pc = 0x1cde24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde28: 0x7fb10010
    ctx->pc = 0x1cde28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cde2c: 0x16630005
    ctx->pc = 0x1CDE2Cu;
    {
        const bool branch_taken_0x1cde2c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CDE30u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1cde2c) {
            ctx->pc = 0x1CDE44u;
            goto label_1cde44;
        }
    }
    ctx->pc = 0x1CDE34u;
    // 0x1cde34: 0x3c010023
    ctx->pc = 0x1cde34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cde38: 0x8c3366c8
    ctx->pc = 0x1cde38u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1cde3c: 0x12630061
    ctx->pc = 0x1CDE3Cu;
    {
        const bool branch_taken_0x1cde3c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cde3c) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDE44u;
label_1cde44:
    // 0x1cde44: 0x80282d
    ctx->pc = 0x1cde44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde48: 0x302d
    ctx->pc = 0x1cde48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde4c: 0x260202d
    ctx->pc = 0x1cde4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde50: 0xc0735c4
    ctx->pc = 0x1CDE50u;
    SET_GPR_U32(ctx, 31, 0x1CDE58u);
    ctx->pc = 0x1CDE54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD710_0x1cd710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE58u; }
    }
    if (ctx->pc != 0x1CDE58u) { return; }
    ctx->pc = 0x1CDE58u;
    // 0x1cde58: 0x40802d
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde5c: 0x12000059
    ctx->pc = 0x1CDE5Cu;
    {
        const bool branch_taken_0x1cde5c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDE60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cde5c) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDE64u;
    // 0x1cde64: 0xc042c56
    ctx->pc = 0x1CDE64u;
    SET_GPR_U32(ctx, 31, 0x1CDE6Cu);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE6Cu; }
    }
    if (ctx->pc != 0x1CDE6Cu) { return; }
    ctx->pc = 0x1CDE6Cu;
    // 0x1cde6c: 0x10400055
    ctx->pc = 0x1CDE6Cu;
    {
        const bool branch_taken_0x1cde6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDE70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 592));
        if (branch_taken_0x1cde6c) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDE74u;
    // 0x1cde74: 0xc042bf0
    ctx->pc = 0x1CDE74u;
    SET_GPR_U32(ctx, 31, 0x1CDE7Cu);
    ctx->pc = 0x1CDE78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE7Cu; }
    }
    if (ctx->pc != 0x1CDE7Cu) { return; }
    ctx->pc = 0x1CDE7Cu;
    // 0x1cde7c: 0x27a40250
    ctx->pc = 0x1cde7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 592));
    // 0x1cde80: 0xc042dee
    ctx->pc = 0x1CDE80u;
    SET_GPR_U32(ctx, 31, 0x1CDE88u);
    ctx->pc = 0x1CDE84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 92));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE88u; }
    }
    if (ctx->pc != 0x1CDE88u) { return; }
    ctx->pc = 0x1CDE88u;
    // 0x1cde88: 0x200202d
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde8c: 0xa0400001
    ctx->pc = 0x1cde8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cde90: 0x3c010034
    ctx->pc = 0x1cde90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cde94: 0x24060001
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cde98: 0x8c300ae0
    ctx->pc = 0x1cde98u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 2784)));
    // 0x1cde9c: 0x382d
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdea0: 0xc07323c
    ctx->pc = 0x1CDEA0u;
    SET_GPR_U32(ctx, 31, 0x1CDEA8u);
    ctx->pc = 0x1CDEA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEA8u; }
    }
    if (ctx->pc != 0x1CDEA8u) { return; }
    ctx->pc = 0x1CDEA8u;
    // 0x1cdea8: 0x40902d
    ctx->pc = 0x1cdea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeac: 0x12400045
    ctx->pc = 0x1CDEACu;
    {
        const bool branch_taken_0x1cdeac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDEB0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cdeac) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDEB4u;
    // 0x1cdeb4: 0x27a40150
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
label_1cdeb8:
    // 0x1cdeb8: 0xc042bf0
    ctx->pc = 0x1CDEB8u;
    SET_GPR_U32(ctx, 31, 0x1CDEC0u);
    ctx->pc = 0x1CDEBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 592));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEC0u; }
    }
    if (ctx->pc != 0x1CDEC0u) { return; }
    ctx->pc = 0x1CDEC0u;
    // 0x1cdec0: 0x27a40050
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdec4: 0x10000007
    ctx->pc = 0x1CDEC4u;
    {
        const bool branch_taken_0x1cdec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDEC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1cdec4) {
            ctx->pc = 0x1CDEE4u;
            goto label_1cdee4;
        }
    }
    ctx->pc = 0x1CDECCu;
label_1cdecc:
    // 0x1cdecc: 0x26310001
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1cded0: 0xa0850000
    ctx->pc = 0x1cded0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cded4: 0x232082a
    ctx->pc = 0x1cded4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x1cded8: 0x26100001
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cdedc: 0x10200039
    ctx->pc = 0x1CDEDCu;
    {
        const bool branch_taken_0x1cdedc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDEE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1cdedc) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDEE4u;
label_1cdee4:
    // 0x1cdee4: 0x82050000
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdee8: 0x10a30003
    ctx->pc = 0x1CDEE8u;
    {
        const bool branch_taken_0x1cdee8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cdee8) {
            ctx->pc = 0x1CDEF8u;
            goto label_1cdef8;
        }
    }
    ctx->pc = 0x1CDEF0u;
    // 0x1cdef0: 0x14a0fff6
    ctx->pc = 0x1CDEF0u;
    {
        const bool branch_taken_0x1cdef0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cdef0) {
            ctx->pc = 0x1CDECCu;
            goto label_1cdecc;
        }
    }
    ctx->pc = 0x1CDEF8u;
label_1cdef8:
    // 0x1cdef8: 0xa0800000
    ctx->pc = 0x1cdef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdefc: 0x2405002e
    ctx->pc = 0x1cdefcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1cdf00: 0x27a40050
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdf04: 0x26100001
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cdf08: 0xc042dee
    ctx->pc = 0x1CDF08u;
    SET_GPR_U32(ctx, 31, 0x1CDF10u);
    ctx->pc = 0x1CDF0Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF10u; }
    }
    if (ctx->pc != 0x1CDF10u) { return; }
    ctx->pc = 0x1CDF10u;
    // 0x1cdf10: 0x14400007
    ctx->pc = 0x1CDF10u;
    {
        const bool branch_taken_0x1cdf10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x1cdf10) {
            ctx->pc = 0x1CDF30u;
            goto label_1cdf30;
        }
    }
    ctx->pc = 0x1CDF18u;
    // 0x1cdf18: 0xc042dee
    ctx->pc = 0x1CDF18u;
    SET_GPR_U32(ctx, 31, 0x1CDF20u);
    ctx->pc = 0x1CDF1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF20u; }
    }
    if (ctx->pc != 0x1CDF20u) { return; }
    ctx->pc = 0x1CDF20u;
    // 0x1cdf20: 0x10400005
    ctx->pc = 0x1CDF20u;
    {
        const bool branch_taken_0x1cdf20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x1cdf20) {
            ctx->pc = 0x1CDF38u;
            goto label_1cdf38;
        }
    }
    ctx->pc = 0x1CDF28u;
    // 0x1cdf28: 0x10000002
    ctx->pc = 0x1CDF28u;
    {
        const bool branch_taken_0x1cdf28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1cdf28) {
            ctx->pc = 0x1CDF34u;
            goto label_1cdf34;
        }
    }
    ctx->pc = 0x1CDF30u;
label_1cdf30:
    // 0x1cdf30: 0xa0400000
    ctx->pc = 0x1cdf30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cdf34:
    // 0x1cdf34: 0x27a40050
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_1cdf38:
    // 0x1cdf38: 0xc042c56
    ctx->pc = 0x1CDF38u;
    SET_GPR_U32(ctx, 31, 0x1CDF40u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF40u; }
    }
    if (ctx->pc != 0x1CDF40u) { return; }
    ctx->pc = 0x1CDF40u;
    // 0x1cdf40: 0x10400020
    ctx->pc = 0x1CDF40u;
    {
        const bool branch_taken_0x1cdf40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x1cdf40) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDF48u;
    // 0x1cdf48: 0xc042dee
    ctx->pc = 0x1CDF48u;
    SET_GPR_U32(ctx, 31, 0x1CDF50u);
    ctx->pc = 0x1CDF4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF50u; }
    }
    if (ctx->pc != 0x1CDF50u) { return; }
    ctx->pc = 0x1CDF50u;
    // 0x1cdf50: 0x10400006
    ctx->pc = 0x1CDF50u;
    {
        const bool branch_taken_0x1cdf50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
        if (branch_taken_0x1cdf50) {
            ctx->pc = 0x1CDF6Cu;
            goto label_1cdf6c;
        }
    }
    ctx->pc = 0x1CDF58u;
    // 0x1cdf58: 0x24450001
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cdf5c: 0xc042aee
    ctx->pc = 0x1CDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF64u);
    ctx->pc = 0x1CDF60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF64u; }
    }
    if (ctx->pc != 0x1CDF64u) { return; }
    ctx->pc = 0x1CDF64u;
    // 0x1cdf64: 0x10000003
    ctx->pc = 0x1CDF64u;
    {
        const bool branch_taken_0x1cdf64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdf64) {
            ctx->pc = 0x1CDF74u;
            goto label_1cdf74;
        }
    }
    ctx->pc = 0x1CDF6Cu;
label_1cdf6c:
    // 0x1cdf6c: 0xc042aee
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF74u; }
    }
    if (ctx->pc != 0x1CDF74u) { return; }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0x3c050025
    ctx->pc = 0x1cdf74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cdf78: 0x27a40150
    ctx->pc = 0x1cdf78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cdf7c: 0xc042aee
    ctx->pc = 0x1CDF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF84u);
    ctx->pc = 0x1CDF80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24768));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF84u; }
    }
    if (ctx->pc != 0x1CDF84u) { return; }
    ctx->pc = 0x1CDF84u;
    // 0x1cdf84: 0xc073768
    ctx->pc = 0x1CDF84u;
    SET_GPR_U32(ctx, 31, 0x1CDF8Cu);
    ctx->pc = 0x1CDF88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x1CDDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDDA0_0x1cdda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF8Cu; }
    }
    if (ctx->pc != 0x1CDF8Cu) { return; }
    ctx->pc = 0x1CDF8Cu;
    // 0x1cdf8c: 0x4410007
    ctx->pc = 0x1CDF8Cu;
    {
        const bool branch_taken_0x1cdf8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CDF90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4080));
        if (branch_taken_0x1cdf8c) {
            ctx->pc = 0x1CDFACu;
            goto label_1cdfac;
        }
    }
    ctx->pc = 0x1CDF94u;
    // 0x1cdf94: 0x27a40150
    ctx->pc = 0x1cdf94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cdf98: 0x260282d
    ctx->pc = 0x1cdf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf9c: 0xc073364
    ctx->pc = 0x1CDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDFA4u);
    ctx->pc = 0x1CDFA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CCD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCD90_0x1ccd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFA4u; }
    }
    if (ctx->pc != 0x1CDFA4u) { return; }
    ctx->pc = 0x1CDFA4u;
    // 0x1cdfa4: 0x10000005
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDFA8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CDFBCu;
            goto label_1cdfbc;
        }
    }
    ctx->pc = 0x1CDFACu;
label_1cdfac:
    // 0x1cdfac: 0x40282d
    ctx->pc = 0x1cdfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfb0: 0xc07333c
    ctx->pc = 0x1CDFB0u;
    SET_GPR_U32(ctx, 31, 0x1CDFB8u);
    ctx->pc = 0x1CDFB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCCF0_0x1cccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFB8u; }
    }
    if (ctx->pc != 0x1CDFB8u) { return; }
    ctx->pc = 0x1CDFB8u;
    // 0x1cdfb8: 0x26730001
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1cdfbc:
    // 0x1cdfbc: 0x1000ffbe
    ctx->pc = 0x1CDFBCu;
    {
        const bool branch_taken_0x1cdfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDFC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
        if (branch_taken_0x1cdfbc) {
            ctx->pc = 0x1CDEB8u;
            goto label_1cdeb8;
        }
    }
    ctx->pc = 0x1CDFC4u;
label_1cdfc4:
    // 0x1cdfc4: 0xdfbf0040
    ctx->pc = 0x1cdfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdfc8: 0x7bb30030
    ctx->pc = 0x1cdfc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdfcc: 0x7bb20020
    ctx->pc = 0x1cdfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdfd0: 0x7bb10010
    ctx->pc = 0x1cdfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdfd4: 0x7bb00000
    ctx->pc = 0x1cdfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdfd8: 0x3e00008
    ctx->pc = 0x1CDFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDFDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDE44u: goto label_1cde44;
            case 0x1CDEB8u: goto label_1cdeb8;
            case 0x1CDECCu: goto label_1cdecc;
            case 0x1CDEE4u: goto label_1cdee4;
            case 0x1CDEF8u: goto label_1cdef8;
            case 0x1CDF30u: goto label_1cdf30;
            case 0x1CDF34u: goto label_1cdf34;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF6Cu: goto label_1cdf6c;
            case 0x1CDF74u: goto label_1cdf74;
            case 0x1CDFACu: goto label_1cdfac;
            case 0x1CDFBCu: goto label_1cdfbc;
            case 0x1CDFC4u: goto label_1cdfc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDFE0u;
}
