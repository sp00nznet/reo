#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1970
// Address: 0x1b1970 - 0x1b19d0
void sub_001B1970_0x1b1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1970u;

    // 0x1b1970: 0x27bdffd0
    ctx->pc = 0x1b1970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1974: 0xffbf0020
    ctx->pc = 0x1b1974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1978: 0x7fb10010
    ctx->pc = 0x1b1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b197c: 0x7fb00000
    ctx->pc = 0x1b197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1980: 0x3c110057
    ctx->pc = 0x1b1980u;
    SET_GPR_U32(ctx, 17, ((uint32_t)87 << 16));
    // 0x1b1984: 0x263197d0
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294940624));
    // 0x1b1988: 0x802d
    ctx->pc = 0x1b1988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b198c:
    // 0x1b198c: 0x8e240000
    ctx->pc = 0x1b198cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b1990: 0x2403ffff
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1994: 0x10830005
    ctx->pc = 0x1B1994u;
    {
        const bool branch_taken_0x1b1994 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b1994) {
            ctx->pc = 0x1B19ACu;
            goto label_1b19ac;
        }
    }
    ctx->pc = 0x1B199Cu;
    // 0x1b199c: 0xc064960
    ctx->pc = 0x1B199Cu;
    SET_GPR_U32(ctx, 31, 0x1B19A4u);
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19A4u; }
    }
    if (ctx->pc != 0x1B19A4u) { return; }
    ctx->pc = 0x1B19A4u;
    // 0x1b19a4: 0x2403ffff
    ctx->pc = 0x1b19a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b19a8: 0xae230000
    ctx->pc = 0x1b19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b19ac:
    // 0x1b19ac: 0x26100001
    ctx->pc = 0x1b19acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b19b0: 0x2a030040
    ctx->pc = 0x1b19b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 64));
    // 0x1b19b4: 0x1460fff5
    ctx->pc = 0x1B19B4u;
    {
        const bool branch_taken_0x1b19b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B19B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1b19b4) {
            ctx->pc = 0x1B198Cu;
            goto label_1b198c;
        }
    }
    ctx->pc = 0x1B19BCu;
    // 0x1b19bc: 0xdfbf0020
    ctx->pc = 0x1b19bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b19c0: 0x7bb10010
    ctx->pc = 0x1b19c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b19c4: 0x7bb00000
    ctx->pc = 0x1b19c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19c8: 0x3e00008
    ctx->pc = 0x1B19C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B198Cu: goto label_1b198c;
            case 0x1B19ACu: goto label_1b19ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B19D0u;
}
