#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D648
// Address: 0x16d648 - 0x16d6e8
void sub_0016D648_0x16d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d648u;

    // 0x16d648: 0x27bdfff0
    ctx->pc = 0x16d648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d64c: 0xa0182d
    ctx->pc = 0x16d64cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d650: 0x2402fffd
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x16d654: 0xffbf0000
    ctx->pc = 0x16d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d658: 0x10620015
    ctx->pc = 0x16D658u;
    {
        const bool branch_taken_0x16d658 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16D65Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d658) {
            ctx->pc = 0x16D6B0u;
            goto label_16d6b0;
        }
    }
    ctx->pc = 0x16D660u;
    // 0x16d660: 0x2c62fffe
    ctx->pc = 0x16d660u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 65534));
    // 0x16d664: 0x50400006
    ctx->pc = 0x16D664u;
    {
        const bool branch_taken_0x16d664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d664) {
            ctx->pc = 0x16D668u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->pc = 0x16D680u;
            goto label_16d680;
        }
    }
    ctx->pc = 0x16D66Cu;
    // 0x16d66c: 0x10600008
    ctx->pc = 0x16D66Cu;
    {
        const bool branch_taken_0x16d66c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D670u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d66c) {
            ctx->pc = 0x16D690u;
            goto label_16d690;
        }
    }
    ctx->pc = 0x16D674u;
    // 0x16d674: 0x10000014
    ctx->pc = 0x16D674u;
    {
        const bool branch_taken_0x16d674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D678u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d674) {
            ctx->pc = 0x16D6C8u;
            goto label_16d6c8;
        }
    }
    ctx->pc = 0x16D67Cu;
    // 0x16d67c: 0x0
    ctx->pc = 0x16d67cu;
    // NOP
label_16d680:
    // 0x16d680: 0x10620005
    ctx->pc = 0x16D680u;
    {
        const bool branch_taken_0x16d680 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16D684u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d680) {
            ctx->pc = 0x16D698u;
            goto label_16d698;
        }
    }
    ctx->pc = 0x16D688u;
    // 0x16d688: 0x1000000f
    ctx->pc = 0x16D688u;
    {
        const bool branch_taken_0x16d688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D68Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d688) {
            ctx->pc = 0x16D6C8u;
            goto label_16d6c8;
        }
    }
    ctx->pc = 0x16D690u;
label_16d690:
    // 0x16d690: 0x10000011
    ctx->pc = 0x16D690u;
    {
        const bool branch_taken_0x16d690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D694u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d690) {
            ctx->pc = 0x16D6D8u;
            goto label_16d6d8;
        }
    }
    ctx->pc = 0x16D698u;
label_16d698:
    // 0x16d698: 0x1cc0000f
    ctx->pc = 0x16D698u;
    {
        const bool branch_taken_0x16d698 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x16D69Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d698) {
            ctx->pc = 0x16D6D8u;
            goto label_16d6d8;
        }
    }
    ctx->pc = 0x16D6A0u;
    // 0x16d6a0: 0xdfbf0000
    ctx->pc = 0x16d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6a4: 0x805a704
    ctx->pc = 0x16D6A4u;
    ctx->pc = 0x16D6A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16D6ACu;
    // 0x16d6ac: 0x0
    ctx->pc = 0x16d6acu;
    // NOP
label_16d6b0:
    // 0x16d6b0: 0x1cc00009
    ctx->pc = 0x16D6B0u;
    {
        const bool branch_taken_0x16d6b0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x16D6B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d6b0) {
            ctx->pc = 0x16D6D8u;
            goto label_16d6d8;
        }
    }
    ctx->pc = 0x16D6B8u;
    // 0x16d6b8: 0xdfbf0000
    ctx->pc = 0x16d6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6bc: 0x805a704
    ctx->pc = 0x16D6BCu;
    ctx->pc = 0x16D6C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16D6C4u;
    // 0x16d6c4: 0x0
    ctx->pc = 0x16d6c4u;
    // NOP
label_16d6c8:
    // 0x16d6c8: 0xe0282d
    ctx->pc = 0x16d6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6cc: 0x805a704
    ctx->pc = 0x16D6CCu;
    ctx->pc = 0x16D6D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16D6D4u;
    // 0x16d6d4: 0x0
    ctx->pc = 0x16d6d4u;
    // NOP
label_16d6d8:
    // 0x16d6d8: 0xdfbf0000
    ctx->pc = 0x16d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6dc: 0x3e00008
    ctx->pc = 0x16D6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D6E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D680u: goto label_16d680;
            case 0x16D690u: goto label_16d690;
            case 0x16D698u: goto label_16d698;
            case 0x16D6B0u: goto label_16d6b0;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D6D8u: goto label_16d6d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D6E4u;
    // 0x16d6e4: 0x0
    ctx->pc = 0x16d6e4u;
    // NOP
}
