#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E998
// Address: 0x15e998 - 0x15ea00
void sub_0015E998_0x15e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e998u;

    // 0x15e998: 0x27bdfff0
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e99c: 0x2405001b
    ctx->pc = 0x15e99cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    // 0x15e9a0: 0xffbf0000
    ctx->pc = 0x15e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e9a4: 0xc4800000
    ctx->pc = 0x15e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e9a8: 0x46000064
    ctx->pc = 0x15e9a8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x15e9ac: 0x44060800
    ctx->pc = 0x15e9acu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x15e9b0: 0xc057fae
    ctx->pc = 0x15E9B0u;
    SET_GPR_U32(ctx, 31, 0x15E9B8u);
    ctx->pc = 0x15E9B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FEB8_0x15feb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9B8u; }
    }
    if (ctx->pc != 0x15E9B8u) { return; }
    ctx->pc = 0x15E9B8u;
    // 0x15e9b8: 0x202d
    ctx->pc = 0x15e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9bc: 0xdfbf0000
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e9c0: 0x24050007
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x15e9c4: 0x24060001
    ctx->pc = 0x15e9c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e9c8: 0x8057fae
    ctx->pc = 0x15E9C8u;
    ctx->pc = 0x15E9CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15FEB8u;
    sub_0015FEB8_0x15feb8(rdram, ctx, runtime); return;
    ctx->pc = 0x15E9D0u;
    // 0x15e9d0: 0x27bdfff0
    ctx->pc = 0x15e9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e9d4: 0x3c020023
    ctx->pc = 0x15e9d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e9d8: 0xffbf0000
    ctx->pc = 0x15e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e9dc: 0x2442de50
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958672));
    // 0x15e9e0: 0x8c430000
    ctx->pc = 0x15e9e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e9e4: 0x10600004
    ctx->pc = 0x15E9E4u;
    {
        const bool branch_taken_0x15e9e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E9E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15e9e4) {
            ctx->pc = 0x15E9F8u;
            goto label_15e9f8;
        }
    }
    ctx->pc = 0x15E9ECu;
    // 0x15e9ec: 0x0
    ctx->pc = 0x15e9ecu;
    // NOP
    // 0x15e9f0: 0x80579a8
    ctx->pc = 0x15E9F0u;
    ctx->pc = 0x15E9F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15E6A0u;
    sub_0015E6A0_0x15e6a0(rdram, ctx, runtime); return;
    ctx->pc = 0x15E9F8u;
label_15e9f8:
    // 0x15e9f8: 0x3e00008
    ctx->pc = 0x15E9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E9FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E9F8u: goto label_15e9f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EA00u;
}
