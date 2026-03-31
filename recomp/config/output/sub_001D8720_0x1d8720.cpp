#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8720
// Address: 0x1d8720 - 0x1d8780
void sub_001D8720_0x1d8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8720u;

    // 0x1d8720: 0x27bdffe0
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8724: 0xffbf0010
    ctx->pc = 0x1d8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8728: 0x7fb00000
    ctx->pc = 0x1d8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d872c: 0xc075e38
    ctx->pc = 0x1D872Cu;
    SET_GPR_U32(ctx, 31, 0x1D8734u);
    ctx->pc = 0x1D8730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8734u; }
    }
    if (ctx->pc != 0x1D8734u) { return; }
    ctx->pc = 0x1D8734u;
    // 0x1d8734: 0x3c050034
    ctx->pc = 0x1d8734u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8738: 0x3c070034
    ctx->pc = 0x1d8738u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d873c: 0x3c010034
    ctx->pc = 0x1d873cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8740: 0x2404001a
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d8744: 0x24a57280
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8748: 0x24060022
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d874c: 0x24e76280
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8750: 0x24080020
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8754: 0xc075e40
    ctx->pc = 0x1D8754u;
    SET_GPR_U32(ctx, 31, 0x1D875Cu);
    ctx->pc = 0x1D8758u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D875Cu; }
    }
    if (ctx->pc != 0x1D875Cu) { return; }
    ctx->pc = 0x1D875Cu;
    // 0x1d875c: 0x3c010034
    ctx->pc = 0x1d875cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8760: 0xc075e3c
    ctx->pc = 0x1D8760u;
    SET_GPR_U32(ctx, 31, 0x1D8768u);
    ctx->pc = 0x1D8764u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8768u; }
    }
    if (ctx->pc != 0x1D8768u) { return; }
    ctx->pc = 0x1D8768u;
    // 0x1d8768: 0x200102d
    ctx->pc = 0x1d8768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d876c: 0xdfbf0010
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8770: 0x7bb00000
    ctx->pc = 0x1d8770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8774: 0x3e00008
    ctx->pc = 0x1D8774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D877Cu;
    // 0x1d877c: 0x0
    ctx->pc = 0x1d877cu;
    // NOP
}
