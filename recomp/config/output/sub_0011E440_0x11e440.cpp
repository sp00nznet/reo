#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011E440
// Address: 0x11e440 - 0x11e4c8
void sub_0011E440_0x11e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e440u;

    // 0x11e440: 0x80302d
    ctx->pc = 0x11e440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e444: 0x3c090021
    ctx->pc = 0x11e444u;
    SET_GPR_U32(ctx, 9, ((uint32_t)33 << 16));
    // 0x11e448: 0xdcc20020
    ctx->pc = 0x11e448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x11e44c: 0x2525b3e8
    ctx->pc = 0x11e44cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 4294947816));
    // 0x11e450: 0xdcc30010
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11e454: 0x402d
    ctx->pc = 0x11e454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e458: 0xdcc40018
    ctx->pc = 0x11e458u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x11e45c: 0x43102d
    ctx->pc = 0x11e45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11e460: 0x8ca50018
    ctx->pc = 0x11e460u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x11e464: 0x10000003
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E468u;
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E474u;
            goto label_11e474;
        }
    }
    ctx->pc = 0x11E46Cu;
    // 0x11e46c: 0x0
    ctx->pc = 0x11e46cu;
    // NOP
label_11e470:
    // 0x11e470: 0x8d050000
    ctx->pc = 0x11e470u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_11e474:
    // 0x11e474: 0x50a0000a
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E478u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->pc = 0x11E4A0u;
            goto label_11e4a0;
        }
    }
    ctx->pc = 0x11E47Cu;
    // 0x11e47c: 0xdca20020
    ctx->pc = 0x11e47cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11e480: 0xdca30010
    ctx->pc = 0x11e480u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11e484: 0xdca40018
    ctx->pc = 0x11e484u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x11e488: 0x43102d
    ctx->pc = 0x11e488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11e48c: 0x44102f
    ctx->pc = 0x11e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x11e490: 0xe2102b
    ctx->pc = 0x11e490u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11e494: 0x5040fff6
    ctx->pc = 0x11E494u;
    {
        const bool branch_taken_0x11e494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11e494) {
            ctx->pc = 0x11E498u;
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x11E470u;
            goto label_11e470;
        }
    }
    ctx->pc = 0x11E49Cu;
    // 0x11e49c: 0xacc80004
    ctx->pc = 0x11e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_11e4a0:
    // 0x11e4a0: 0x10a00002
    ctx->pc = 0x11E4A0u;
    {
        const bool branch_taken_0x11e4a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E4A4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x11e4a0) {
            ctx->pc = 0x11E4ACu;
            goto label_11e4ac;
        }
    }
    ctx->pc = 0x11E4A8u;
    // 0x11e4a8: 0xaca60004
    ctx->pc = 0x11e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_11e4ac:
    // 0x11e4ac: 0x11000003
    ctx->pc = 0x11E4ACu;
    {
        const bool branch_taken_0x11e4ac = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E4B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294947816));
        if (branch_taken_0x11e4ac) {
            ctx->pc = 0x11E4BCu;
            goto label_11e4bc;
        }
    }
    ctx->pc = 0x11E4B4u;
    // 0x11e4b4: 0x3e00008
    ctx->pc = 0x11E4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E470u: goto label_11e470;
            case 0x11E474u: goto label_11e474;
            case 0x11E4A0u: goto label_11e4a0;
            case 0x11E4ACu: goto label_11e4ac;
            case 0x11E4BCu: goto label_11e4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E4BCu;
label_11e4bc:
    // 0x11e4bc: 0x3e00008
    ctx->pc = 0x11E4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E4C0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E470u: goto label_11e470;
            case 0x11E474u: goto label_11e474;
            case 0x11E4A0u: goto label_11e4a0;
            case 0x11E4ACu: goto label_11e4ac;
            case 0x11E4BCu: goto label_11e4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E4C4u;
    // 0x11e4c4: 0x0
    ctx->pc = 0x11e4c4u;
    // NOP
}
