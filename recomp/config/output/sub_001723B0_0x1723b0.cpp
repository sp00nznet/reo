#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001723B0
// Address: 0x1723b0 - 0x172420
void sub_001723B0_0x1723b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1723b0u;

    // 0x1723b0: 0x27bdffe0
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1723b4: 0xffb00000
    ctx->pc = 0x1723b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1723b8: 0xa0802d
    ctx->pc = 0x1723b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723bc: 0xffb10008
    ctx->pc = 0x1723bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1723c0: 0xffbf0010
    ctx->pc = 0x1723c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1723c4: 0xc05a78c
    ctx->pc = 0x1723C4u;
    SET_GPR_U32(ctx, 31, 0x1723CCu);
    ctx->pc = 0x1723C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1723CCu; }
    }
    if (ctx->pc != 0x1723CCu) { return; }
    ctx->pc = 0x1723CCu;
    // 0x1723cc: 0x3c05ff00
    ctx->pc = 0x1723ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1723d0: 0x202d
    ctx->pc = 0x1723d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723d4: 0x200302d
    ctx->pc = 0x1723d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723d8: 0x10400007
    ctx->pc = 0x1723D8u;
    {
        const bool branch_taken_0x1723d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1723DCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 326));
        if (branch_taken_0x1723d8) {
            ctx->pc = 0x1723F8u;
            goto label_1723f8;
        }
    }
    ctx->pc = 0x1723E0u;
    // 0x1723e0: 0xdfb00000
    ctx->pc = 0x1723e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723e4: 0xdfb10008
    ctx->pc = 0x1723e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1723e8: 0xdfbf0010
    ctx->pc = 0x1723e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1723ec: 0x805a704
    ctx->pc = 0x1723ECu;
    ctx->pc = 0x1723F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1723F4u;
    // 0x1723f4: 0x0
    ctx->pc = 0x1723f4u;
    // NOP
label_1723f8:
    // 0x1723f8: 0x220202d
    ctx->pc = 0x1723f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723fc: 0xc05d518
    ctx->pc = 0x1723FCu;
    SET_GPR_U32(ctx, 31, 0x172404u);
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172404u; }
    }
    if (ctx->pc != 0x172404u) { return; }
    ctx->pc = 0x172404u;
    // 0x172404: 0x102d
    ctx->pc = 0x172404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172408: 0xdfb00000
    ctx->pc = 0x172408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17240c: 0xdfb10008
    ctx->pc = 0x17240cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172410: 0xdfbf0010
    ctx->pc = 0x172410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172414: 0x3e00008
    ctx->pc = 0x172414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1723F8u: goto label_1723f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17241Cu;
    // 0x17241c: 0x0
    ctx->pc = 0x17241cu;
    // NOP
}
