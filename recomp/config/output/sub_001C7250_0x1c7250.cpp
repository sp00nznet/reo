#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7250
// Address: 0x1c7250 - 0x1c72e0
void sub_001C7250_0x1c7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7250u;

    // 0x1c7250: 0x27bdffc0
    ctx->pc = 0x1c7250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c7254: 0xffbf0030
    ctx->pc = 0x1c7254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c7258: 0x7fb20020
    ctx->pc = 0x1c7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c725c: 0x80902d
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7260: 0x7fb10010
    ctx->pc = 0x1c7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7264: 0x3c040033
    ctx->pc = 0x1c7264u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c7268: 0xa0882d
    ctx->pc = 0x1c7268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c726c: 0x24842f90
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    // 0x1c7270: 0xc071f24
    ctx->pc = 0x1C7270u;
    SET_GPR_U32(ctx, 31, 0x1C7278u);
    ctx->pc = 0x1C7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7C90_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7278u; }
    }
    if (ctx->pc != 0x1C7278u) { return; }
    ctx->pc = 0x1C7278u;
    // 0x1c7278: 0x14400003
    ctx->pc = 0x1C7278u;
    {
        const bool branch_taken_0x1c7278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C727Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x1c7278) {
            ctx->pc = 0x1C7288u;
            goto label_1c7288;
        }
    }
    ctx->pc = 0x1C7280u;
    // 0x1c7280: 0x10000011
    ctx->pc = 0x1C7280u;
    {
        const bool branch_taken_0x1c7280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7280) {
            ctx->pc = 0x1C72C8u;
            goto label_1c72c8;
        }
    }
    ctx->pc = 0x1C7288u;
label_1c7288:
    // 0x1c7288: 0xc071f5c
    ctx->pc = 0x1C7288u;
    SET_GPR_U32(ctx, 31, 0x1C7290u);
    ctx->pc = 0x1C728Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    ctx->pc = 0x1C7D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D70_0x1c7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7290u; }
    }
    if (ctx->pc != 0x1C7290u) { return; }
    ctx->pc = 0x1C7290u;
    // 0x1c7290: 0x3043ffff
    ctx->pc = 0x1c7290u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1c7294: 0x3c040033
    ctx->pc = 0x1c7294u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c7298: 0x31303
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1c729c: 0x24842f90
    ctx->pc = 0x1c729cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    // 0x1c72a0: 0x3042000f
    ctx->pc = 0x1c72a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1c72a4: 0x30700fff
    ctx->pc = 0x1c72a4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), 4095));
    // 0x1c72a8: 0xc071f30
    ctx->pc = 0x1C72A8u;
    SET_GPR_U32(ctx, 31, 0x1C72B0u);
    ctx->pc = 0x1C72ACu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1C7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CC0_0x1c7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72B0u; }
    }
    if (ctx->pc != 0x1C72B0u) { return; }
    ctx->pc = 0x1C72B0u;
    // 0x1c72b0: 0x3c040033
    ctx->pc = 0x1c72b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c72b4: 0xae420000
    ctx->pc = 0x1c72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c72b8: 0x24842f90
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    // 0x1c72bc: 0xc071f7c
    ctx->pc = 0x1C72BCu;
    SET_GPR_U32(ctx, 31, 0x1C72C4u);
    ctx->pc = 0x1C72C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7DF0_0x1c7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72C4u; }
    }
    if (ctx->pc != 0x1C72C4u) { return; }
    ctx->pc = 0x1C72C4u;
    // 0x1c72c4: 0x200102d
    ctx->pc = 0x1c72c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c72c8:
    // 0x1c72c8: 0xdfbf0030
    ctx->pc = 0x1c72c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c72cc: 0x7bb20020
    ctx->pc = 0x1c72ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c72d0: 0x7bb10010
    ctx->pc = 0x1c72d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c72d4: 0x7bb00000
    ctx->pc = 0x1c72d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c72d8: 0x3e00008
    ctx->pc = 0x1C72D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C72DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7288u: goto label_1c7288;
            case 0x1C72C8u: goto label_1c72c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C72E0u;
}
