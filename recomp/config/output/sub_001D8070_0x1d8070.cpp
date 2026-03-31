#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8070
// Address: 0x1d8070 - 0x1d8180
void sub_001D8070_0x1d8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8070u;

    // 0x1d8070: 0x27bdffb0
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d8074: 0xffbf0040
    ctx->pc = 0x1d8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d8078: 0x7fb30030
    ctx->pc = 0x1d8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d807c: 0x7fb20020
    ctx->pc = 0x1d807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8080: 0x7fb10010
    ctx->pc = 0x1d8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8084: 0x80902d
    ctx->pc = 0x1d8084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8088: 0x7fb00000
    ctx->pc = 0x1d8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d808c: 0xa0882d
    ctx->pc = 0x1d808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8090: 0xc075e38
    ctx->pc = 0x1D8090u;
    SET_GPR_U32(ctx, 31, 0x1D8098u);
    ctx->pc = 0x1D8094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8098u; }
    }
    if (ctx->pc != 0x1D8098u) { return; }
    ctx->pc = 0x1D8098u;
    // 0x1d8098: 0x10143c
    ctx->pc = 0x1d8098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d809c: 0x2143f
    ctx->pc = 0x1d809cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d80a0: 0x24420026
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 38));
    // 0x1d80a4: 0x2c411001
    ctx->pc = 0x1d80a4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 4097));
    // 0x1d80a8: 0x14200003
    ctx->pc = 0x1D80A8u;
    {
        const bool branch_taken_0x1d80a8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d80a8) {
            ctx->pc = 0x1D80B8u;
            goto label_1d80b8;
        }
    }
    ctx->pc = 0x1D80B0u;
    // 0x1d80b0: 0x24100fd9
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4057));
    // 0x1d80b4: 0x0
    ctx->pc = 0x1d80b4u;
    // NOP
label_1d80b8:
    // 0x1d80b8: 0x3c040034
    ctx->pc = 0x1d80b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d80bc: 0x24846280
    ctx->pc = 0x1d80bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25216));
    // 0x1d80c0: 0x282d
    ctx->pc = 0x1d80c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80c4: 0xc041f1a
    ctx->pc = 0x1D80C4u;
    SET_GPR_U32(ctx, 31, 0x1D80CCu);
    ctx->pc = 0x1D80C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80CCu; }
    }
    if (ctx->pc != 0x1D80CCu) { return; }
    ctx->pc = 0x1D80CCu;
    // 0x1d80cc: 0x3c020034
    ctx->pc = 0x1d80ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d80d0: 0x109c3c
    ctx->pc = 0x1d80d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d80d4: 0x2442729c
    ctx->pc = 0x1d80d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d80d8: 0x139c3f
    ctx->pc = 0x1d80d8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1d80dc: 0xa4520000
    ctx->pc = 0x1d80dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d80e0: 0x26660026
    ctx->pc = 0x1d80e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 38));
    // 0x1d80e4: 0x3c050034
    ctx->pc = 0x1d80e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d80e8: 0x3c070034
    ctx->pc = 0x1d80e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d80ec: 0xa4500002
    ctx->pc = 0x1d80ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d80f0: 0x24040013
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d80f4: 0x24a57280
    ctx->pc = 0x1d80f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d80f8: 0x24e76280
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d80fc: 0xc075e40
    ctx->pc = 0x1D80FCu;
    SET_GPR_U32(ctx, 31, 0x1D8104u);
    ctx->pc = 0x1D8100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8104u; }
    }
    if (ctx->pc != 0x1D8104u) { return; }
    ctx->pc = 0x1D8104u;
    // 0x1d8104: 0xc045228
    ctx->pc = 0x1D8104u;
    SET_GPR_U32(ctx, 31, 0x1D810Cu);
    ctx->pc = 0x1D8108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D810Cu; }
    }
    if (ctx->pc != 0x1D810Cu) { return; }
    ctx->pc = 0x1D810Cu;
    // 0x1d810c: 0x3c010034
    ctx->pc = 0x1d810cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8110: 0x3c120034
    ctx->pc = 0x1d8110u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x1d8114: 0x8c226298
    ctx->pc = 0x1d8114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 25240)));
    // 0x1d8118: 0x262082a
    ctx->pc = 0x1d8118u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1d811c: 0x14200004
    ctx->pc = 0x1D811Cu;
    {
        const bool branch_taken_0x1d811c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D8120u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 25244));
        if (branch_taken_0x1d811c) {
            ctx->pc = 0x1D8130u;
            goto label_1d8130;
        }
    }
    ctx->pc = 0x1D8124u;
    // 0x1d8124: 0x2843c
    ctx->pc = 0x1d8124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d8128: 0x10000005
    ctx->pc = 0x1D8128u;
    {
        const bool branch_taken_0x1d8128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D812Cu;
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        if (branch_taken_0x1d8128) {
            ctx->pc = 0x1D8140u;
            goto label_1d8140;
        }
    }
    ctx->pc = 0x1D8130u;
label_1d8130:
    // 0x1d8130: 0x3c040023
    ctx->pc = 0x1d8130u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1d8134: 0xc0423b4
    ctx->pc = 0x1D8134u;
    SET_GPR_U32(ctx, 31, 0x1D813Cu);
    ctx->pc = 0x1D8138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27056));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D813Cu; }
    }
    if (ctx->pc != 0x1D813Cu) { return; }
    ctx->pc = 0x1D813Cu;
    // 0x1d813c: 0x0
    ctx->pc = 0x1d813cu;
    // NOP
label_1d8140:
    // 0x1d8140: 0x10343c
    ctx->pc = 0x1d8140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d8144: 0x6343f
    ctx->pc = 0x1d8144u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d8148: 0x18c00003
    ctx->pc = 0x1D8148u;
    {
        const bool branch_taken_0x1d8148 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D814Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d8148) {
            ctx->pc = 0x1D8158u;
            goto label_1d8158;
        }
    }
    ctx->pc = 0x1D8150u;
    // 0x1d8150: 0xc041eac
    ctx->pc = 0x1D8150u;
    SET_GPR_U32(ctx, 31, 0x1D8158u);
    ctx->pc = 0x1D8154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8158u; }
    }
    if (ctx->pc != 0x1D8158u) { return; }
    ctx->pc = 0x1D8158u;
label_1d8158:
    // 0x1d8158: 0xc075e3c
    ctx->pc = 0x1D8158u;
    SET_GPR_U32(ctx, 31, 0x1D8160u);
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8160u; }
    }
    if (ctx->pc != 0x1D8160u) { return; }
    ctx->pc = 0x1D8160u;
    // 0x1d8160: 0x200102d
    ctx->pc = 0x1d8160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8164: 0xdfbf0040
    ctx->pc = 0x1d8164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8168: 0x7bb30030
    ctx->pc = 0x1d8168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d816c: 0x7bb20020
    ctx->pc = 0x1d816cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8170: 0x7bb10010
    ctx->pc = 0x1d8170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8174: 0x7bb00000
    ctx->pc = 0x1d8174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8178: 0x3e00008
    ctx->pc = 0x1D8178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D817Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D80B8u: goto label_1d80b8;
            case 0x1D8130u: goto label_1d8130;
            case 0x1D8140u: goto label_1d8140;
            case 0x1D8158u: goto label_1d8158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8180u;
}
