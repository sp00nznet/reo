#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001720C8
// Address: 0x1720c8 - 0x172158
void sub_001720C8_0x1720c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1720c8u;

    // 0x1720c8: 0x27bdffe0
    ctx->pc = 0x1720c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1720cc: 0xffb00000
    ctx->pc = 0x1720ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1720d0: 0x80802d
    ctx->pc = 0x1720d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720d4: 0xffb10008
    ctx->pc = 0x1720d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1720d8: 0xffbf0010
    ctx->pc = 0x1720d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1720dc: 0xc05a78c
    ctx->pc = 0x1720DCu;
    SET_GPR_U32(ctx, 31, 0x1720E4u);
    ctx->pc = 0x1720E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720E4u; }
    }
    if (ctx->pc != 0x1720E4u) { return; }
    ctx->pc = 0x1720E4u;
    // 0x1720e4: 0x3c05ff00
    ctx->pc = 0x1720e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1720e8: 0x202d
    ctx->pc = 0x1720e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720ec: 0x34a50142
    ctx->pc = 0x1720ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 322));
    // 0x1720f0: 0x10400007
    ctx->pc = 0x1720F0u;
    {
        const bool branch_taken_0x1720f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1720F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1720f0) {
            ctx->pc = 0x172110u;
            goto label_172110;
        }
    }
    ctx->pc = 0x1720F8u;
    // 0x1720f8: 0xdfb00000
    ctx->pc = 0x1720f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720fc: 0xdfb10008
    ctx->pc = 0x1720fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172100: 0xdfbf0010
    ctx->pc = 0x172100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172104: 0x805a704
    ctx->pc = 0x172104u;
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17210Cu;
    // 0x17210c: 0x0
    ctx->pc = 0x17210cu;
    // NOP
label_172110:
    // 0x172110: 0x8e040050
    ctx->pc = 0x172110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x172114: 0x24030002
    ctx->pc = 0x172114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172118: 0x16200003
    ctx->pc = 0x172118u;
    {
        const bool branch_taken_0x172118 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x17211Cu;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
        if (branch_taken_0x172118) {
            ctx->pc = 0x172128u;
            goto label_172128;
        }
    }
    ctx->pc = 0x172120u;
    // 0x172120: 0x10800007
    ctx->pc = 0x172120u;
    {
        const bool branch_taken_0x172120 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x172124u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172120) {
            ctx->pc = 0x172140u;
            goto label_172140;
        }
    }
    ctx->pc = 0x172128u;
label_172128:
    // 0x172128: 0xae110050
    ctx->pc = 0x172128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x17212c: 0xc0282d
    ctx->pc = 0x17212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172130: 0xc05c856
    ctx->pc = 0x172130u;
    SET_GPR_U32(ctx, 31, 0x172138u);
    ctx->pc = 0x172134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172158_0x172158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172138u; }
    }
    if (ctx->pc != 0x172138u) { return; }
    ctx->pc = 0x172138u;
    // 0x172138: 0x24030001
    ctx->pc = 0x172138u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17213c: 0xae030044
    ctx->pc = 0x17213cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_172140:
    // 0x172140: 0xdfb00000
    ctx->pc = 0x172140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172144: 0xdfb10008
    ctx->pc = 0x172144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172148: 0xdfbf0010
    ctx->pc = 0x172148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17214c: 0x3e00008
    ctx->pc = 0x17214Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172110u: goto label_172110;
            case 0x172128u: goto label_172128;
            case 0x172140u: goto label_172140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172154u;
    // 0x172154: 0x0
    ctx->pc = 0x172154u;
    // NOP
}
