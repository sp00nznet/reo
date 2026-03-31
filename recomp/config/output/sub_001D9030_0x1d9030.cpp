#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9030
// Address: 0x1d9030 - 0x1d90e0
void sub_001D9030_0x1d9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9030u;

    // 0x1d9030: 0x27bdffb0
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9034: 0xffbf0040
    ctx->pc = 0x1d9034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d9038: 0x7fb30030
    ctx->pc = 0x1d9038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d903c: 0x7fb20020
    ctx->pc = 0x1d903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9040: 0x80982d
    ctx->pc = 0x1d9040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9044: 0x7fb10010
    ctx->pc = 0x1d9044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9048: 0xa0902d
    ctx->pc = 0x1d9048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d904c: 0xc0882d
    ctx->pc = 0x1d904cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9050: 0xc075e38
    ctx->pc = 0x1D9050u;
    SET_GPR_U32(ctx, 31, 0x1D9058u);
    ctx->pc = 0x1D9054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9058u; }
    }
    if (ctx->pc != 0x1D9058u) { return; }
    ctx->pc = 0x1D9058u;
    // 0x1d9058: 0x3c100034
    ctx->pc = 0x1d9058u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x1d905c: 0x12600006
    ctx->pc = 0x1D905Cu;
    {
        const bool branch_taken_0x1d905c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9060u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 29340));
        if (branch_taken_0x1d905c) {
            ctx->pc = 0x1D9078u;
            goto label_1d9078;
        }
    }
    ctx->pc = 0x1D9064u;
    // 0x1d9064: 0x260282d
    ctx->pc = 0x1d9064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9068: 0xc042bf0
    ctx->pc = 0x1D9068u;
    SET_GPR_U32(ctx, 31, 0x1D9070u);
    ctx->pc = 0x1D906Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9070u; }
    }
    if (ctx->pc != 0x1D9070u) { return; }
    ctx->pc = 0x1D9070u;
    // 0x1d9070: 0x10000003
    ctx->pc = 0x1D9070u;
    {
        const bool branch_taken_0x1d9070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9070) {
            ctx->pc = 0x1D9080u;
            goto label_1d9080;
        }
    }
    ctx->pc = 0x1D9078u;
label_1d9078:
    // 0x1d9078: 0xa2000000
    ctx->pc = 0x1d9078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d907c: 0x0
    ctx->pc = 0x1d907cu;
    // NOP
label_1d9080:
    // 0x1d9080: 0x3c050034
    ctx->pc = 0x1d9080u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d9084: 0x3c070034
    ctx->pc = 0x1d9084u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d9088: 0xae120100
    ctx->pc = 0x1d9088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 18));
    // 0x1d908c: 0x24040038
    ctx->pc = 0x1d908cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d9090: 0x24a57280
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d9094: 0x24060128
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 296));
    // 0x1d9098: 0x24e76280
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d909c: 0x24080020
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d90a0: 0xc075e40
    ctx->pc = 0x1D90A0u;
    SET_GPR_U32(ctx, 31, 0x1D90A8u);
    ctx->pc = 0x1D90A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 17));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90A8u; }
    }
    if (ctx->pc != 0x1D90A8u) { return; }
    ctx->pc = 0x1D90A8u;
    // 0x1d90a8: 0x3c010034
    ctx->pc = 0x1d90a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d90ac: 0xc075e3c
    ctx->pc = 0x1D90ACu;
    SET_GPR_U32(ctx, 31, 0x1D90B4u);
    ctx->pc = 0x1D90B0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90B4u; }
    }
    if (ctx->pc != 0x1D90B4u) { return; }
    ctx->pc = 0x1D90B4u;
    // 0x1d90b4: 0x200102d
    ctx->pc = 0x1d90b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90b8: 0xdfbf0040
    ctx->pc = 0x1d90b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d90bc: 0x7bb30030
    ctx->pc = 0x1d90bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d90c0: 0x7bb20020
    ctx->pc = 0x1d90c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d90c4: 0x7bb10010
    ctx->pc = 0x1d90c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d90c8: 0x7bb00000
    ctx->pc = 0x1d90c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d90cc: 0x3e00008
    ctx->pc = 0x1D90CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D90D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9078u: goto label_1d9078;
            case 0x1D9080u: goto label_1d9080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D90D4u;
    // 0x1d90d4: 0x0
    ctx->pc = 0x1d90d4u;
    // NOP
    // 0x1d90d8: 0x0
    ctx->pc = 0x1d90d8u;
    // NOP
    // 0x1d90dc: 0x0
    ctx->pc = 0x1d90dcu;
    // NOP
}
