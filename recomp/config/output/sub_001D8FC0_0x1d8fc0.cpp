#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8FC0
// Address: 0x1d8fc0 - 0x1d9030
void sub_001D8FC0_0x1d8fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8fc0u;

    // 0x1d8fc0: 0x27bdffd0
    ctx->pc = 0x1d8fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8fc4: 0xffbf0020
    ctx->pc = 0x1d8fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8fc8: 0x7fb10010
    ctx->pc = 0x1d8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8fcc: 0x7fb00000
    ctx->pc = 0x1d8fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8fd0: 0x80882d
    ctx->pc = 0x1d8fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fd4: 0xc075e38
    ctx->pc = 0x1D8FD4u;
    SET_GPR_U32(ctx, 31, 0x1D8FDCu);
    ctx->pc = 0x1D8FD8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FDCu; }
    }
    if (ctx->pc != 0x1D8FDCu) { return; }
    ctx->pc = 0x1D8FDCu;
    // 0x1d8fdc: 0x3c020034
    ctx->pc = 0x1d8fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d8fe0: 0x3c050034
    ctx->pc = 0x1d8fe0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8fe4: 0x2442729c
    ctx->pc = 0x1d8fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d8fe8: 0x3c070034
    ctx->pc = 0x1d8fe8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8fec: 0xac510000
    ctx->pc = 0x1d8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1d8ff0: 0x24040037
    ctx->pc = 0x1d8ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 55));
    // 0x1d8ff4: 0x24a57280
    ctx->pc = 0x1d8ff4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8ff8: 0xac500004
    ctx->pc = 0x1d8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1d8ffc: 0x24060028
    ctx->pc = 0x1d8ffcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d9000: 0x24e76280
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d9004: 0xc075e40
    ctx->pc = 0x1D9004u;
    SET_GPR_U32(ctx, 31, 0x1D900Cu);
    ctx->pc = 0x1D9008u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D900Cu; }
    }
    if (ctx->pc != 0x1D900Cu) { return; }
    ctx->pc = 0x1D900Cu;
    // 0x1d900c: 0x3c010034
    ctx->pc = 0x1d900cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d9010: 0xc075e3c
    ctx->pc = 0x1D9010u;
    SET_GPR_U32(ctx, 31, 0x1D9018u);
    ctx->pc = 0x1D9014u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9018u; }
    }
    if (ctx->pc != 0x1D9018u) { return; }
    ctx->pc = 0x1D9018u;
    // 0x1d9018: 0x200102d
    ctx->pc = 0x1d9018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d901c: 0xdfbf0020
    ctx->pc = 0x1d901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9020: 0x7bb10010
    ctx->pc = 0x1d9020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9024: 0x7bb00000
    ctx->pc = 0x1d9024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9028: 0x3e00008
    ctx->pc = 0x1D9028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D902Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9030u;
}
