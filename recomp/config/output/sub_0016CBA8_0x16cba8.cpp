#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CBA8
// Address: 0x16cba8 - 0x16cc10
void sub_0016CBA8_0x16cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16cba8u;

    // 0x16cba8: 0x80382d
    ctx->pc = 0x16cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbac: 0xa0302d
    ctx->pc = 0x16cbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbb0: 0x8ce30000
    ctx->pc = 0x16cbb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16cbb4: 0xc3102b
    ctx->pc = 0x16cbb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16cbb8: 0x14400006
    ctx->pc = 0x16CBB8u;
    {
        const bool branch_taken_0x16cbb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CBBCu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        if (branch_taken_0x16cbb8) {
            ctx->pc = 0x16CBD4u;
            goto label_16cbd4;
        }
    }
    ctx->pc = 0x16CBC0u;
    // 0x16cbc0: 0x8ce20004
    ctx->pc = 0x16cbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16cbc4: 0x621021
    ctx->pc = 0x16cbc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cbc8: 0xc2102b
    ctx->pc = 0x16cbc8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16cbcc: 0x1440000d
    ctx->pc = 0x16CBCCu;
    {
        const bool branch_taken_0x16cbcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cbcc) {
            ctx->pc = 0x16CC04u;
            goto label_16cc04;
        }
    }
    ctx->pc = 0x16CBD4u;
label_16cbd4:
    // 0x16cbd4: 0x8ce50008
    ctx->pc = 0x16cbd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x16cbd8: 0xc5102b
    ctx->pc = 0x16cbd8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16cbdc: 0x14400009
    ctx->pc = 0x16CBDCu;
    {
        const bool branch_taken_0x16cbdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CBE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cbdc) {
            ctx->pc = 0x16CC04u;
            goto label_16cc04;
        }
    }
    ctx->pc = 0x16CBE4u;
    // 0x16cbe4: 0x8ce2000c
    ctx->pc = 0x16cbe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x16cbe8: 0xa21021
    ctx->pc = 0x16cbe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16cbec: 0xc2102b
    ctx->pc = 0x16cbecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16cbf0: 0x10400004
    ctx->pc = 0x16CBF0u;
    {
        const bool branch_taken_0x16cbf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cbf0) {
            ctx->pc = 0x16CC04u;
            goto label_16cc04;
        }
    }
    ctx->pc = 0x16CBF8u;
    // 0x16cbf8: 0x8ce30004
    ctx->pc = 0x16cbf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16cbfc: 0xc51023
    ctx->pc = 0x16cbfcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16cc00: 0x432021
    ctx->pc = 0x16cc00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16cc04:
    // 0x16cc04: 0x3e00008
    ctx->pc = 0x16CC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CBD4u: goto label_16cbd4;
            case 0x16CC04u: goto label_16cc04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CC0Cu;
    // 0x16cc0c: 0x0
    ctx->pc = 0x16cc0cu;
    // NOP
}
