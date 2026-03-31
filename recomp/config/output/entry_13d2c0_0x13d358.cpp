#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13d2c0
// Address: 0x13d2c0 - 0x13d358
void entry_13d2c0_0x13d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d2c0u;

    // 0x13d2c0: 0x27bdfff0
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d2c4: 0x14800006
    ctx->pc = 0x13D2C4u;
    {
        const bool branch_taken_0x13d2c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D2C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d2c4) {
            ctx->pc = 0x13D2E0u;
            goto label_13d2e0;
        }
    }
    ctx->pc = 0x13D2CCu;
    // 0x13d2cc: 0x3c040024
    ctx->pc = 0x13d2ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d2d0: 0xc04f53e
    ctx->pc = 0x13D2D0u;
    SET_GPR_U32(ctx, 31, 0x13D2D8u);
    ctx->pc = 0x13D2D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2D8u; }
    }
    if (ctx->pc != 0x13D2D8u) { return; }
    ctx->pc = 0x13D2D8u;
    // 0x13d2d8: 0x1000001b
    ctx->pc = 0x13D2D8u;
    {
        const bool branch_taken_0x13d2d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D2DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d8) {
            ctx->pc = 0x13D348u;
            goto label_13d348;
        }
    }
    ctx->pc = 0x13D2E0u;
label_13d2e0:
    // 0x13d2e0: 0x24860038
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d2e4: 0x8cc20000
    ctx->pc = 0x13d2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d2e8: 0x1045000c
    ctx->pc = 0x13D2E8u;
    {
        const bool branch_taken_0x13d2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D2ECu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d2e8) {
            ctx->pc = 0x13D31Cu;
            goto label_13d31c;
        }
    }
    ctx->pc = 0x13D2F0u;
    // 0x13d2f0: 0x24630001
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d2f4: 0x0
    ctx->pc = 0x13d2f4u;
    // NOP
label_13d2f8:
    // 0x13d2f8: 0x28620010
    ctx->pc = 0x13d2f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d2fc: 0x10400007
    ctx->pc = 0x13D2FCu;
    {
        const bool branch_taken_0x13d2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D300u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d2fc) {
            ctx->pc = 0x13D31Cu;
            goto label_13d31c;
        }
    }
    ctx->pc = 0x13D304u;
    // 0x13d304: 0x8cc20000
    ctx->pc = 0x13d304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d308: 0x0
    ctx->pc = 0x13d308u;
    // NOP
    // 0x13d30c: 0x0
    ctx->pc = 0x13d30cu;
    // NOP
    // 0x13d310: 0x0
    ctx->pc = 0x13d310u;
    // NOP
    // 0x13d314: 0x5445fff8
    ctx->pc = 0x13D314u;
    {
        const bool branch_taken_0x13d314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d314) {
            ctx->pc = 0x13D318u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D2F8u;
            goto label_13d2f8;
        }
    }
    ctx->pc = 0x13D31Cu;
label_13d31c:
    // 0x13d31c: 0x24020010
    ctx->pc = 0x13d31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d320: 0x54620007
    ctx->pc = 0x13D320u;
    {
        const bool branch_taken_0x13d320 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d320) {
            ctx->pc = 0x13D324u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D340u;
            goto label_13d340;
        }
    }
    ctx->pc = 0x13D328u;
    // 0x13d328: 0x3c040024
    ctx->pc = 0x13d328u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d32c: 0xc04f53e
    ctx->pc = 0x13D32Cu;
    SET_GPR_U32(ctx, 31, 0x13D334u);
    ctx->pc = 0x13D330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D334u; }
    }
    if (ctx->pc != 0x13D334u) { return; }
    ctx->pc = 0x13D334u;
    // 0x13d334: 0x10000004
    ctx->pc = 0x13D334u;
    {
        const bool branch_taken_0x13d334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D338u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d334) {
            ctx->pc = 0x13D348u;
            goto label_13d348;
        }
    }
    ctx->pc = 0x13D33Cu;
    // 0x13d33c: 0x0
    ctx->pc = 0x13d33cu;
    // NOP
label_13d340:
    // 0x13d340: 0x641821
    ctx->pc = 0x13d340u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d344: 0x8c620054
    ctx->pc = 0x13d344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_13d348:
    // 0x13d348: 0xdfbf0000
    ctx->pc = 0x13d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d34c: 0x3e00008
    ctx->pc = 0x13D34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D354u;
    // 0x13d354: 0x0
    ctx->pc = 0x13d354u;
    // NOP
}
