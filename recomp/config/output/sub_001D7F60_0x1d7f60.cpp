#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7F60
// Address: 0x1d7f60 - 0x1d8070
void sub_001D7F60_0x1d7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7f60u;

    // 0x1d7f60: 0x27bdffb0
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d7f64: 0xffbf0040
    ctx->pc = 0x1d7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d7f68: 0x7fb30030
    ctx->pc = 0x1d7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d7f6c: 0x7fb20020
    ctx->pc = 0x1d7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7f70: 0x7fb10010
    ctx->pc = 0x1d7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7f74: 0x80902d
    ctx->pc = 0x1d7f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f78: 0x7fb00000
    ctx->pc = 0x1d7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7f7c: 0xa0882d
    ctx->pc = 0x1d7f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f80: 0xc075e38
    ctx->pc = 0x1D7F80u;
    SET_GPR_U32(ctx, 31, 0x1D7F88u);
    ctx->pc = 0x1D7F84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F88u; }
    }
    if (ctx->pc != 0x1D7F88u) { return; }
    ctx->pc = 0x1D7F88u;
    // 0x1d7f88: 0x10143c
    ctx->pc = 0x1d7f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7f8c: 0x2143f
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7f90: 0x24420026
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 38));
    // 0x1d7f94: 0x2c411001
    ctx->pc = 0x1d7f94u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 4097));
    // 0x1d7f98: 0x14200003
    ctx->pc = 0x1D7F98u;
    {
        const bool branch_taken_0x1d7f98 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7f98) {
            ctx->pc = 0x1D7FA8u;
            goto label_1d7fa8;
        }
    }
    ctx->pc = 0x1D7FA0u;
    // 0x1d7fa0: 0x24100fd9
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4057));
    // 0x1d7fa4: 0x0
    ctx->pc = 0x1d7fa4u;
    // NOP
label_1d7fa8:
    // 0x1d7fa8: 0x3c040034
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d7fac: 0x24846280
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25216));
    // 0x1d7fb0: 0x282d
    ctx->pc = 0x1d7fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb4: 0xc041f1a
    ctx->pc = 0x1D7FB4u;
    SET_GPR_U32(ctx, 31, 0x1D7FBCu);
    ctx->pc = 0x1D7FB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FBCu; }
    }
    if (ctx->pc != 0x1D7FBCu) { return; }
    ctx->pc = 0x1D7FBCu;
    // 0x1d7fbc: 0x3c020034
    ctx->pc = 0x1d7fbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7fc0: 0x109c3c
    ctx->pc = 0x1d7fc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d7fc4: 0x2442729c
    ctx->pc = 0x1d7fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7fc8: 0x139c3f
    ctx->pc = 0x1d7fc8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1d7fcc: 0xa4520000
    ctx->pc = 0x1d7fccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d7fd0: 0x26660026
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 38));
    // 0x1d7fd4: 0x3c050034
    ctx->pc = 0x1d7fd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7fd8: 0x3c070034
    ctx->pc = 0x1d7fd8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7fdc: 0xa4500002
    ctx->pc = 0x1d7fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d7fe0: 0x24040012
    ctx->pc = 0x1d7fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d7fe4: 0x24a57280
    ctx->pc = 0x1d7fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7fe8: 0x24e76280
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7fec: 0xc075e40
    ctx->pc = 0x1D7FECu;
    SET_GPR_U32(ctx, 31, 0x1D7FF4u);
    ctx->pc = 0x1D7FF0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FF4u; }
    }
    if (ctx->pc != 0x1D7FF4u) { return; }
    ctx->pc = 0x1D7FF4u;
    // 0x1d7ff4: 0xc045228
    ctx->pc = 0x1D7FF4u;
    SET_GPR_U32(ctx, 31, 0x1D7FFCu);
    ctx->pc = 0x1D7FF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FFCu; }
    }
    if (ctx->pc != 0x1D7FFCu) { return; }
    ctx->pc = 0x1D7FFCu;
    // 0x1d7ffc: 0x3c010034
    ctx->pc = 0x1d7ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8000: 0x3c120034
    ctx->pc = 0x1d8000u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x1d8004: 0x8c226298
    ctx->pc = 0x1d8004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 25240)));
    // 0x1d8008: 0x262082a
    ctx->pc = 0x1d8008u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1d800c: 0x14200004
    ctx->pc = 0x1D800Cu;
    {
        const bool branch_taken_0x1d800c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D8010u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 25244));
        if (branch_taken_0x1d800c) {
            ctx->pc = 0x1D8020u;
            goto label_1d8020;
        }
    }
    ctx->pc = 0x1D8014u;
    // 0x1d8014: 0x2843c
    ctx->pc = 0x1d8014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d8018: 0x10000005
    ctx->pc = 0x1D8018u;
    {
        const bool branch_taken_0x1d8018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D801Cu;
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        if (branch_taken_0x1d8018) {
            ctx->pc = 0x1D8030u;
            goto label_1d8030;
        }
    }
    ctx->pc = 0x1D8020u;
label_1d8020:
    // 0x1d8020: 0x3c040023
    ctx->pc = 0x1d8020u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1d8024: 0xc0423b4
    ctx->pc = 0x1D8024u;
    SET_GPR_U32(ctx, 31, 0x1D802Cu);
    ctx->pc = 0x1D8028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27056));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D802Cu; }
    }
    if (ctx->pc != 0x1D802Cu) { return; }
    ctx->pc = 0x1D802Cu;
    // 0x1d802c: 0x0
    ctx->pc = 0x1d802cu;
    // NOP
label_1d8030:
    // 0x1d8030: 0x10343c
    ctx->pc = 0x1d8030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d8034: 0x6343f
    ctx->pc = 0x1d8034u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d8038: 0x18c00003
    ctx->pc = 0x1D8038u;
    {
        const bool branch_taken_0x1d8038 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D803Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d8038) {
            ctx->pc = 0x1D8048u;
            goto label_1d8048;
        }
    }
    ctx->pc = 0x1D8040u;
    // 0x1d8040: 0xc041eac
    ctx->pc = 0x1D8040u;
    SET_GPR_U32(ctx, 31, 0x1D8048u);
    ctx->pc = 0x1D8044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8048u; }
    }
    if (ctx->pc != 0x1D8048u) { return; }
    ctx->pc = 0x1D8048u;
label_1d8048:
    // 0x1d8048: 0xc075e3c
    ctx->pc = 0x1D8048u;
    SET_GPR_U32(ctx, 31, 0x1D8050u);
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8050u; }
    }
    if (ctx->pc != 0x1D8050u) { return; }
    ctx->pc = 0x1D8050u;
    // 0x1d8050: 0x200102d
    ctx->pc = 0x1d8050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8054: 0xdfbf0040
    ctx->pc = 0x1d8054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8058: 0x7bb30030
    ctx->pc = 0x1d8058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d805c: 0x7bb20020
    ctx->pc = 0x1d805cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8060: 0x7bb10010
    ctx->pc = 0x1d8060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8064: 0x7bb00000
    ctx->pc = 0x1d8064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8068: 0x3e00008
    ctx->pc = 0x1D8068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D806Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7FA8u: goto label_1d7fa8;
            case 0x1D8020u: goto label_1d8020;
            case 0x1D8030u: goto label_1d8030;
            case 0x1D8048u: goto label_1d8048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8070u;
}
