#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1039f0
// Address: 0x1039f0 - 0x103a48
void entry_1039f0_0x103a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1039f0u;

    // 0x1039f0: 0x27bdffe0
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1039f4: 0x3c020037
    ctx->pc = 0x1039f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x1039f8: 0xffb00000
    ctx->pc = 0x1039f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1039fc: 0x80802d
    ctx->pc = 0x1039fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a00: 0xffb10008
    ctx->pc = 0x103a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103a04: 0x2451f0dc
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
    // 0x103a08: 0xa0202d
    ctx->pc = 0x103a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a0c: 0xffbf0010
    ctx->pc = 0x103a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103a10: 0xc045342
    ctx->pc = 0x103A10u;
    SET_GPR_U32(ctx, 31, 0x103A18u);
    ctx->pc = 0x103A14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114D08_0x114d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A18u; }
    }
    if (ctx->pc != 0x103A18u) { return; }
    ctx->pc = 0x103A18u;
    // 0x103a18: 0x40202d
    ctx->pc = 0x103a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a1c: 0x2403ffff
    ctx->pc = 0x103a1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103a20: 0x54830005
    ctx->pc = 0x103A20u;
    {
        const bool branch_taken_0x103a20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x103a20) {
            ctx->pc = 0x103A24u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x103A38u;
            goto label_103a38;
        }
    }
    ctx->pc = 0x103A28u;
    // 0x103a28: 0x8e230000
    ctx->pc = 0x103a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103a2c: 0x54600001
    ctx->pc = 0x103A2Cu;
    {
        const bool branch_taken_0x103a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x103a2c) {
            ctx->pc = 0x103A30u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x103A34u;
            goto label_103a34;
        }
    }
    ctx->pc = 0x103A34u;
label_103a34:
    // 0x103a34: 0xdfb00000
    ctx->pc = 0x103a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103a38:
    // 0x103a38: 0xdfb10008
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103a3c: 0xdfbf0010
    ctx->pc = 0x103a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a40: 0x3e00008
    ctx->pc = 0x103A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103A34u: goto label_103a34;
            case 0x103A38u: goto label_103a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103A48u;
}
