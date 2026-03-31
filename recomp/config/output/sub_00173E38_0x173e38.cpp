#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173E38
// Address: 0x173e38 - 0x173ea8
void sub_00173E38_0x173e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173e38u;

    // 0x173e38: 0x27bdffe0
    ctx->pc = 0x173e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173e3c: 0xffb00000
    ctx->pc = 0x173e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e40: 0xa0802d
    ctx->pc = 0x173e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e44: 0xffb10008
    ctx->pc = 0x173e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173e48: 0xffbf0010
    ctx->pc = 0x173e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173e4c: 0xc05a78c
    ctx->pc = 0x173E4Cu;
    SET_GPR_U32(ctx, 31, 0x173E54u);
    ctx->pc = 0x173E50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E54u; }
    }
    if (ctx->pc != 0x173E54u) { return; }
    ctx->pc = 0x173E54u;
    // 0x173e54: 0x3c05ff00
    ctx->pc = 0x173e54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173e58: 0x202d
    ctx->pc = 0x173e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e5c: 0x200382d
    ctx->pc = 0x173e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e60: 0x34a50134
    ctx->pc = 0x173e60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 308));
    // 0x173e64: 0x24060009
    ctx->pc = 0x173e64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x173e68: 0x10400007
    ctx->pc = 0x173E68u;
    {
        const bool branch_taken_0x173e68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173E6Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e68) {
            ctx->pc = 0x173E88u;
            goto label_173e88;
        }
    }
    ctx->pc = 0x173E70u;
    // 0x173e70: 0xdfb00000
    ctx->pc = 0x173e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e74: 0xdfb10008
    ctx->pc = 0x173e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e78: 0xdfbf0010
    ctx->pc = 0x173e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e7c: 0x805a704
    ctx->pc = 0x173E7Cu;
    ctx->pc = 0x173E80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x173E84u;
    // 0x173e84: 0x0
    ctx->pc = 0x173e84u;
    // NOP
label_173e88:
    // 0x173e88: 0x220202d
    ctx->pc = 0x173e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e8c: 0xdfb10008
    ctx->pc = 0x173e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e90: 0xdfb00000
    ctx->pc = 0x173e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e94: 0x282d
    ctx->pc = 0x173e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e98: 0xdfbf0010
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e9c: 0x805def8
    ctx->pc = 0x173E9Cu;
    ctx->pc = 0x173EA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177BE0u;
    sub_00177BE0_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x173EA4u;
    // 0x173ea4: 0x0
    ctx->pc = 0x173ea4u;
    // NOP
}
