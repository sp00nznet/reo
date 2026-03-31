#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E860
// Address: 0x15e860 - 0x15e930
void sub_0015E860_0x15e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e860u;

    // 0x15e860: 0x27bdffe0
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e864: 0xffb00000
    ctx->pc = 0x15e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e868: 0xffb10008
    ctx->pc = 0x15e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15e86c: 0xffbf0010
    ctx->pc = 0x15e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e870: 0xc05799e
    ctx->pc = 0x15E870u;
    SET_GPR_U32(ctx, 31, 0x15E878u);
    ctx->pc = 0x15E874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E878u; }
    }
    if (ctx->pc != 0x15E878u) { return; }
    ctx->pc = 0x15E878u;
    // 0x15e878: 0x40882d
    ctx->pc = 0x15e878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e87c: 0x282d
    ctx->pc = 0x15e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e880: 0x220202d
    ctx->pc = 0x15e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e884: 0xc041f1a
    ctx->pc = 0x15E884u;
    SET_GPR_U32(ctx, 31, 0x15E88Cu);
    ctx->pc = 0x15E888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4328));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E88Cu; }
    }
    if (ctx->pc != 0x15E88Cu) { return; }
    ctx->pc = 0x15E88Cu;
    // 0x15e88c: 0xc05909c
    ctx->pc = 0x15E88Cu;
    SET_GPR_U32(ctx, 31, 0x15E894u);
    ctx->pc = 0x15E890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164270_0x164270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E894u; }
    }
    if (ctx->pc != 0x15E894u) { return; }
    ctx->pc = 0x15E894u;
    // 0x15e894: 0x24040001
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e898: 0x24020001
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e89c: 0xae200058
    ctx->pc = 0x15e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x15e8a0: 0x1200000b
    ctx->pc = 0x15E8A0u;
    {
        const bool branch_taken_0x15e8a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E8A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x15e8a0) {
            ctx->pc = 0x15E8D0u;
            goto label_15e8d0;
        }
    }
    ctx->pc = 0x15E8A8u;
    // 0x15e8a8: 0x8e020004
    ctx->pc = 0x15e8a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e8ac: 0x8e03000c
    ctx->pc = 0x15e8acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e8b0: 0xaca20004
    ctx->pc = 0x15e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15e8b4: 0xc6000000
    ctx->pc = 0x15e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e8b8: 0x8e020008
    ctx->pc = 0x15e8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15e8bc: 0xaca3000c
    ctx->pc = 0x15e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x15e8c0: 0xe4a00000
    ctx->pc = 0x15e8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x15e8c4: 0x10000009
    ctx->pc = 0x15E8C4u;
    {
        const bool branch_taken_0x15e8c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E8C8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x15e8c4) {
            ctx->pc = 0x15E8ECu;
            goto label_15e8ec;
        }
    }
    ctx->pc = 0x15E8CCu;
    // 0x15e8cc: 0x0
    ctx->pc = 0x15e8ccu;
    // NOP
label_15e8d0:
    // 0x15e8d0: 0x3c01426f
    ctx->pc = 0x15e8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17007 << 16));
    // 0x15e8d4: 0x3421c28f
    ctx->pc = 0x15e8d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x15e8d8: 0x44810000
    ctx->pc = 0x15e8d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x15e8dc: 0xaca0000c
    ctx->pc = 0x15e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x15e8e0: 0xe4a00000
    ctx->pc = 0x15e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x15e8e4: 0xaca20008
    ctx->pc = 0x15e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x15e8e8: 0xaca20004
    ctx->pc = 0x15e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_15e8ec:
    // 0x15e8ec: 0xae24003c
    ctx->pc = 0x15e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x15e8f0: 0xae240038
    ctx->pc = 0x15e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x15e8f4: 0xdfb00000
    ctx->pc = 0x15e8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e8f8: 0xdfb10008
    ctx->pc = 0x15e8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e8fc: 0xdfbf0010
    ctx->pc = 0x15e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e900: 0x3e00008
    ctx->pc = 0x15E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E8D0u: goto label_15e8d0;
            case 0x15E8ECu: goto label_15e8ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E908u;
    // 0x15e908: 0x27bdfff0
    ctx->pc = 0x15e908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e90c: 0xffb00000
    ctx->pc = 0x15e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e910: 0xffbf0008
    ctx->pc = 0x15e910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15e914: 0xc05799e
    ctx->pc = 0x15E914u;
    SET_GPR_U32(ctx, 31, 0x15E91Cu);
    ctx->pc = 0x15E918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E91Cu; }
    }
    if (ctx->pc != 0x15E91Cu) { return; }
    ctx->pc = 0x15E91Cu;
    // 0x15e91c: 0xac500038
    ctx->pc = 0x15e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x15e920: 0xdfbf0008
    ctx->pc = 0x15e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e924: 0xdfb00000
    ctx->pc = 0x15e924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e928: 0x3e00008
    ctx->pc = 0x15E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E92Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E8D0u: goto label_15e8d0;
            case 0x15E8ECu: goto label_15e8ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E930u;
}
