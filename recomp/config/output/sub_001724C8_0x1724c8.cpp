#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001724C8
// Address: 0x1724c8 - 0x172530
void sub_001724C8_0x1724c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1724c8u;

    // 0x1724c8: 0x27bdffe0
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1724cc: 0x3c020023
    ctx->pc = 0x1724ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1724d0: 0xffbf0010
    ctx->pc = 0x1724d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1724d4: 0xffb00000
    ctx->pc = 0x1724d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1724d8: 0x2450f18c
    ctx->pc = 0x1724d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x1724dc: 0xffb10008
    ctx->pc = 0x1724dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1724e0: 0x882d
    ctx->pc = 0x1724e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724e4: 0x8e020000
    ctx->pc = 0x1724e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1724e8:
    // 0x1724e8: 0x26100004
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1724ec: 0x10400005
    ctx->pc = 0x1724ECu;
    {
        const bool branch_taken_0x1724ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1724F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1724ec) {
            ctx->pc = 0x172504u;
            goto label_172504;
        }
    }
    ctx->pc = 0x1724F4u;
    // 0x1724f4: 0xc05c928
    ctx->pc = 0x1724F4u;
    SET_GPR_U32(ctx, 31, 0x1724FCu);
    ctx->pc = 0x1724A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001724A0_0x1724a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724FCu; }
    }
    if (ctx->pc != 0x1724FCu) { return; }
    ctx->pc = 0x1724FCu;
    // 0x1724fc: 0x50400007
    ctx->pc = 0x1724FCu;
    {
        const bool branch_taken_0x1724fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1724fc) {
            ctx->pc = 0x172500u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x17251Cu;
            goto label_17251c;
        }
    }
    ctx->pc = 0x172504u;
label_172504:
    // 0x172504: 0x26310001
    ctx->pc = 0x172504u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x172508: 0x2a220008
    ctx->pc = 0x172508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x17250c: 0x5440fff6
    ctx->pc = 0x17250Cu;
    {
        const bool branch_taken_0x17250c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17250c) {
            ctx->pc = 0x172510u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1724E8u;
            goto label_1724e8;
        }
    }
    ctx->pc = 0x172514u;
    // 0x172514: 0x24020001
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172518: 0xdfb00000
    ctx->pc = 0x172518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17251c:
    // 0x17251c: 0xdfb10008
    ctx->pc = 0x17251cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172520: 0xdfbf0010
    ctx->pc = 0x172520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172524: 0x3e00008
    ctx->pc = 0x172524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1724E8u: goto label_1724e8;
            case 0x172504u: goto label_172504;
            case 0x17251Cu: goto label_17251c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17252Cu;
    // 0x17252c: 0x0
    ctx->pc = 0x17252cu;
    // NOP
}
