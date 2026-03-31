#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107DF8
// Address: 0x107df8 - 0x107ea0
void sub_00107DF8_0x107df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107df8u;

    // 0x107df8: 0x27bdffe0
    ctx->pc = 0x107df8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107dfc: 0xffb00000
    ctx->pc = 0x107dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107e00: 0x80802d
    ctx->pc = 0x107e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e04: 0xffb10008
    ctx->pc = 0x107e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107e08: 0xa0882d
    ctx->pc = 0x107e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e0c: 0xffbf0010
    ctx->pc = 0x107e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107e10: 0x8e03004c
    ctx->pc = 0x107e10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x107e14: 0x14600006
    ctx->pc = 0x107E14u;
    {
        const bool branch_taken_0x107e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x107E18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x107e14) {
            ctx->pc = 0x107E30u;
            goto label_107e30;
        }
    }
    ctx->pc = 0x107E1Cu;
    // 0x107e1c: 0xc040e4e
    ctx->pc = 0x107E1Cu;
    SET_GPR_U32(ctx, 31, 0x107E24u);
    ctx->pc = 0x107E20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x103938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103938_0x103938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E24u; }
    }
    if (ctx->pc != 0x107E24u) { return; }
    ctx->pc = 0x107E24u;
    // 0x107e24: 0x40182d
    ctx->pc = 0x107e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e28: 0x10600017
    ctx->pc = 0x107E28u;
    {
        const bool branch_taken_0x107e28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x107E2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        if (branch_taken_0x107e28) {
            ctx->pc = 0x107E88u;
            goto label_107e88;
        }
    }
    ctx->pc = 0x107E30u;
label_107e30:
    // 0x107e30: 0x111080
    ctx->pc = 0x107e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x107e34: 0x432021
    ctx->pc = 0x107e34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107e38: 0x8c830000
    ctx->pc = 0x107e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107e3c: 0x10600004
    ctx->pc = 0x107E3Cu;
    {
        const bool branch_taken_0x107e3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x107E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x107e3c) {
            ctx->pc = 0x107E50u;
            goto label_107e50;
        }
    }
    ctx->pc = 0x107E44u;
    // 0x107e44: 0x8c620000
    ctx->pc = 0x107e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107e48: 0x1000000c
    ctx->pc = 0x107E48u;
    {
        const bool branch_taken_0x107e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107E4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x107e48) {
            ctx->pc = 0x107E7Cu;
            goto label_107e7c;
        }
    }
    ctx->pc = 0x107E50u;
label_107e50:
    // 0x107e50: 0x200202d
    ctx->pc = 0x107e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e54: 0x2228004
    ctx->pc = 0x107e54u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x107e58: 0x24050001
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e5c: 0x103080
    ctx->pc = 0x107e5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 2));
    // 0x107e60: 0xc040e4e
    ctx->pc = 0x107E60u;
    SET_GPR_U32(ctx, 31, 0x107E68u);
    ctx->pc = 0x107E64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20));
    ctx->pc = 0x103938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103938_0x103938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E68u; }
    }
    if (ctx->pc != 0x107E68u) { return; }
    ctx->pc = 0x107E68u;
    // 0x107e68: 0x40182d
    ctx->pc = 0x107e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e6c: 0x50600007
    ctx->pc = 0x107E6Cu;
    {
        const bool branch_taken_0x107e6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x107e6c) {
            ctx->pc = 0x107E70u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x107E8Cu;
            goto label_107e8c;
        }
    }
    ctx->pc = 0x107E74u;
    // 0x107e74: 0xac710004
    ctx->pc = 0x107e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x107e78: 0xac700008
    ctx->pc = 0x107e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_107e7c:
    // 0x107e7c: 0xac600010
    ctx->pc = 0x107e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x107e80: 0x60102d
    ctx->pc = 0x107e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e84: 0xac60000c
    ctx->pc = 0x107e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_107e88:
    // 0x107e88: 0xdfb00000
    ctx->pc = 0x107e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107e8c:
    // 0x107e8c: 0xdfb10008
    ctx->pc = 0x107e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107e90: 0xdfbf0010
    ctx->pc = 0x107e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107e94: 0x3e00008
    ctx->pc = 0x107E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107E30u: goto label_107e30;
            case 0x107E50u: goto label_107e50;
            case 0x107E7Cu: goto label_107e7c;
            case 0x107E88u: goto label_107e88;
            case 0x107E8Cu: goto label_107e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107E9Cu;
    // 0x107e9c: 0x0
    ctx->pc = 0x107e9cu;
    // NOP
}
