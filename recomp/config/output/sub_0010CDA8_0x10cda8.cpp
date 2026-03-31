#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010CDA8
// Address: 0x10cda8 - 0x10cdf8
void sub_0010CDA8_0x10cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10cda8u;

    // 0x10cda8: 0x80820000
    ctx->pc = 0x10cda8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10cdac: 0x80282d
    ctx->pc = 0x10cdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdb0: 0x1040000e
    ctx->pc = 0x10CDB0u;
    {
        const bool branch_taken_0x10cdb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CDB4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x10cdb0) {
            ctx->pc = 0x10CDECu;
            goto label_10cdec;
        }
    }
    ctx->pc = 0x10CDB8u;
label_10cdb8:
    // 0x10cdb8: 0x31600
    ctx->pc = 0x10cdb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x10cdbc: 0x21603
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10cdc0: 0x3c030023
    ctx->pc = 0x10cdc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x10cdc4: 0x621821
    ctx->pc = 0x10cdc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cdc8: 0x90637769
    ctx->pc = 0x10cdc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30569)));
    // 0x10cdcc: 0x30630002
    ctx->pc = 0x10cdccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x10cdd0: 0x10600002
    ctx->pc = 0x10CDD0u;
    {
        const bool branch_taken_0x10cdd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CDD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
        if (branch_taken_0x10cdd0) {
            ctx->pc = 0x10CDDCu;
            goto label_10cddc;
        }
    }
    ctx->pc = 0x10CDD8u;
    // 0x10cdd8: 0xa0a20000
    ctx->pc = 0x10cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_10cddc:
    // 0x10cddc: 0x24a50001
    ctx->pc = 0x10cddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10cde0: 0x90a20000
    ctx->pc = 0x10cde0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10cde4: 0x1440fff4
    ctx->pc = 0x10CDE4u;
    {
        const bool branch_taken_0x10cde4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10CDE8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10cde4) {
            ctx->pc = 0x10CDB8u;
            goto label_10cdb8;
        }
    }
    ctx->pc = 0x10CDECu;
label_10cdec:
    // 0x10cdec: 0x3e00008
    ctx->pc = 0x10CDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CDF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CDB8u: goto label_10cdb8;
            case 0x10CDDCu: goto label_10cddc;
            case 0x10CDECu: goto label_10cdec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10CDF4u;
    // 0x10cdf4: 0x0
    ctx->pc = 0x10cdf4u;
    // NOP
}
