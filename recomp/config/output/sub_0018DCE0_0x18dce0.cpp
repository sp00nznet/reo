#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DCE0
// Address: 0x18dce0 - 0x18dd40
void sub_0018DCE0_0x18dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dce0u;

    // 0x18dce0: 0x27bdffe0
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dce4: 0xffbf0010
    ctx->pc = 0x18dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dce8: 0x7fb00000
    ctx->pc = 0x18dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dcec: 0x802d
    ctx->pc = 0x18dcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcf0: 0x3c040008
    ctx->pc = 0x18dcf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
label_18dcf4:
    // 0x18dcf4: 0xc063714
    ctx->pc = 0x18DCF4u;
    SET_GPR_U32(ctx, 31, 0x18DCFCu);
    ctx->pc = 0x18DCF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCFCu; }
    }
    if (ctx->pc != 0x18DCFCu) { return; }
    ctx->pc = 0x18DCFCu;
    // 0x18dcfc: 0x3c03002a
    ctx->pc = 0x18dcfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)42 << 16));
    // 0x18dd00: 0x102080
    ctx->pc = 0x18dd00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x18dd04: 0x2463f9b0
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965680));
    // 0x18dd08: 0x26100001
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x18dd0c: 0x641821
    ctx->pc = 0x18dd0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dd10: 0xac620414
    ctx->pc = 0x18dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1044), GPR_U32(ctx, 2));
    // 0x18dd14: 0x2a020002
    ctx->pc = 0x18dd14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x18dd18: 0x1440fff6
    ctx->pc = 0x18DD18u;
    {
        const bool branch_taken_0x18dd18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18DD1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
        if (branch_taken_0x18dd18) {
            ctx->pc = 0x18DCF4u;
            goto label_18dcf4;
        }
    }
    ctx->pc = 0x18DD20u;
    // 0x18dd20: 0xc063750
    ctx->pc = 0x18DD20u;
    SET_GPR_U32(ctx, 31, 0x18DD28u);
    ctx->pc = 0x18DD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD40_0x18dd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD28u; }
    }
    if (ctx->pc != 0x18DD28u) { return; }
    ctx->pc = 0x18DD28u;
    // 0x18dd28: 0xdfbf0010
    ctx->pc = 0x18dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd2c: 0x7bb00000
    ctx->pc = 0x18dd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd30: 0x3e00008
    ctx->pc = 0x18DD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DCF4u: goto label_18dcf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DD38u;
    // 0x18dd38: 0x0
    ctx->pc = 0x18dd38u;
    // NOP
    // 0x18dd3c: 0x0
    ctx->pc = 0x18dd3cu;
    // NOP
}
