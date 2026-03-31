#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13e5e8
// Address: 0x13e5e8 - 0x13e640
void entry_13e5e8_0x13e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e5e8u;

    // 0x13e5e8: 0x27bdffe0
    ctx->pc = 0x13e5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e5ec: 0x3c030022
    ctx->pc = 0x13e5ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13e5f0: 0xffb00000
    ctx->pc = 0x13e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e5f4: 0x24701468
    ctx->pc = 0x13e5f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 5224));
    // 0x13e5f8: 0x8e020000
    ctx->pc = 0x13e5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e5fc: 0xffb10008
    ctx->pc = 0x13e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e600: 0x24110001
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e604: 0x10510008
    ctx->pc = 0x13E604u;
    {
        const bool branch_taken_0x13e604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x13E608u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x13e604) {
            ctx->pc = 0x13E628u;
            goto label_13e628;
        }
    }
    ctx->pc = 0x13E60Cu;
    // 0x13e60c: 0x2404000e
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x13e610: 0x282d
    ctx->pc = 0x13e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e614: 0x302d
    ctx->pc = 0x13e614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e618: 0x382d
    ctx->pc = 0x13e618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e61c: 0xc04e518
    ctx->pc = 0x13E61Cu;
    SET_GPR_U32(ctx, 31, 0x13E624u);
    ctx->pc = 0x13E620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E624u; }
    }
    if (ctx->pc != 0x13E624u) { return; }
    ctx->pc = 0x13E624u;
    // 0x13e624: 0xae110000
    ctx->pc = 0x13e624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_13e628:
    // 0x13e628: 0xdfb00000
    ctx->pc = 0x13e628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e62c: 0xdfb10008
    ctx->pc = 0x13e62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e630: 0xdfbf0010
    ctx->pc = 0x13e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e634: 0x3e00008
    ctx->pc = 0x13E634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E628u: goto label_13e628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E63Cu;
    // 0x13e63c: 0x0
    ctx->pc = 0x13e63cu;
    // NOP
}
