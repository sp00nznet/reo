#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13d190
// Address: 0x13d190 - 0x13d228
void entry_13d190_0x13d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d190u;

    // 0x13d190: 0x27bdfff0
    ctx->pc = 0x13d190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d194: 0x14800006
    ctx->pc = 0x13D194u;
    {
        const bool branch_taken_0x13d194 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D198u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d194) {
            ctx->pc = 0x13D1B0u;
            goto label_13d1b0;
        }
    }
    ctx->pc = 0x13D19Cu;
    // 0x13d19c: 0x3c040024
    ctx->pc = 0x13d19cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d1a0: 0xc04f53e
    ctx->pc = 0x13D1A0u;
    SET_GPR_U32(ctx, 31, 0x13D1A8u);
    ctx->pc = 0x13D1A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1A8u; }
    }
    if (ctx->pc != 0x13D1A8u) { return; }
    ctx->pc = 0x13D1A8u;
    // 0x13d1a8: 0x1000001b
    ctx->pc = 0x13D1A8u;
    {
        const bool branch_taken_0x13d1a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D1ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d1a8) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D1B0u;
label_13d1b0:
    // 0x13d1b0: 0x24860038
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d1b4: 0x8cc20000
    ctx->pc = 0x13d1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d1b8: 0x1045000c
    ctx->pc = 0x13D1B8u;
    {
        const bool branch_taken_0x13d1b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D1BCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d1b8) {
            ctx->pc = 0x13D1ECu;
            goto label_13d1ec;
        }
    }
    ctx->pc = 0x13D1C0u;
    // 0x13d1c0: 0x24630001
    ctx->pc = 0x13d1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d1c4: 0x0
    ctx->pc = 0x13d1c4u;
    // NOP
label_13d1c8:
    // 0x13d1c8: 0x28620010
    ctx->pc = 0x13d1c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d1cc: 0x10400007
    ctx->pc = 0x13D1CCu;
    {
        const bool branch_taken_0x13d1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D1D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d1cc) {
            ctx->pc = 0x13D1ECu;
            goto label_13d1ec;
        }
    }
    ctx->pc = 0x13D1D4u;
    // 0x13d1d4: 0x8cc20000
    ctx->pc = 0x13d1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d1d8: 0x0
    ctx->pc = 0x13d1d8u;
    // NOP
    // 0x13d1dc: 0x0
    ctx->pc = 0x13d1dcu;
    // NOP
    // 0x13d1e0: 0x0
    ctx->pc = 0x13d1e0u;
    // NOP
    // 0x13d1e4: 0x5445fff8
    ctx->pc = 0x13D1E4u;
    {
        const bool branch_taken_0x13d1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d1e4) {
            ctx->pc = 0x13D1E8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D1C8u;
            goto label_13d1c8;
        }
    }
    ctx->pc = 0x13D1ECu;
label_13d1ec:
    // 0x13d1ec: 0x24020010
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d1f0: 0x54620007
    ctx->pc = 0x13D1F0u;
    {
        const bool branch_taken_0x13d1f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d1f0) {
            ctx->pc = 0x13D1F4u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D210u;
            goto label_13d210;
        }
    }
    ctx->pc = 0x13D1F8u;
    // 0x13d1f8: 0x3c040024
    ctx->pc = 0x13d1f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d1fc: 0xc04f53e
    ctx->pc = 0x13D1FCu;
    SET_GPR_U32(ctx, 31, 0x13D204u);
    ctx->pc = 0x13D200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D204u; }
    }
    if (ctx->pc != 0x13D204u) { return; }
    ctx->pc = 0x13D204u;
    // 0x13d204: 0x10000004
    ctx->pc = 0x13D204u;
    {
        const bool branch_taken_0x13d204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d204) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D20Cu;
    // 0x13d20c: 0x0
    ctx->pc = 0x13d20cu;
    // NOP
label_13d210:
    // 0x13d210: 0x641821
    ctx->pc = 0x13d210u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d214: 0x8c62003c
    ctx->pc = 0x13d214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_13d218:
    // 0x13d218: 0xdfbf0000
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d21c: 0x3e00008
    ctx->pc = 0x13D21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D224u;
    // 0x13d224: 0x0
    ctx->pc = 0x13d224u;
    // NOP
}
