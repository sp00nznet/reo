#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c1b88
// Address: 0x1c1b88 - 0x1c1c20
void entry_1c1b88_0x1c1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1b88u;

label_1c1b88:
    // 0x1c1b88: 0x27bdffd0
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1b8c: 0xffb10010
    ctx->pc = 0x1c1b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1b90: 0xffb00000
    ctx->pc = 0x1c1b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1b94: 0x80882d
    ctx->pc = 0x1c1b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b98: 0xffbf0020
    ctx->pc = 0x1c1b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1b9c: 0xc070640
    ctx->pc = 0x1C1B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C1BA4u);
    ctx->pc = 0x1C1BA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C1900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1900_0x1c1900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BA4u; }
    }
    if (ctx->pc != 0x1C1BA4u) { return; }
    ctx->pc = 0x1C1BA4u;
    // 0x1c1ba4: 0x92220002
    ctx->pc = 0x1c1ba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c1ba8: 0x508021
    ctx->pc = 0x1c1ba8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c1bac: 0x602000e
    ctx->pc = 0x1C1BACu;
    {
        const bool branch_taken_0x1c1bac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c1bac) {
            ctx->pc = 0x1C1BB0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
            ctx->pc = 0x1C1BE8u;
            goto label_1c1be8;
        }
    }
    ctx->pc = 0x1C1BB4u;
    // 0x1c1bb4: 0x2a02003c
    ctx->pc = 0x1c1bb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 60));
    // 0x1c1bb8: 0x54400010
    ctx->pc = 0x1C1BB8u;
    {
        const bool branch_taken_0x1c1bb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c1bb8) {
            ctx->pc = 0x1C1BBCu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->pc = 0x1C1BFCu;
            goto label_1c1bfc;
        }
    }
    ctx->pc = 0x1C1BC0u;
    // 0x1c1bc0: 0x220202d
    ctx->pc = 0x1c1bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bc4: 0x0
    ctx->pc = 0x1c1bc4u;
    // NOP
label_1c1bc8:
    // 0x1c1bc8: 0xc0706cc
    ctx->pc = 0x1C1BC8u;
    SET_GPR_U32(ctx, 31, 0x1C1BD0u);
    ctx->pc = 0x1C1BCCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->pc = 0x1C1B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1B30_0x1c1b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BD0u; }
    }
    if (ctx->pc != 0x1C1BD0u) { return; }
    ctx->pc = 0x1C1BD0u;
    // 0x1c1bd0: 0x2a02003c
    ctx->pc = 0x1c1bd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 60));
    // 0x1c1bd4: 0x1040fffc
    ctx->pc = 0x1C1BD4u;
    {
        const bool branch_taken_0x1c1bd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1BD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd4) {
            ctx->pc = 0x1C1BC8u;
            goto label_1c1bc8;
        }
    }
    ctx->pc = 0x1C1BDCu;
    // 0x1c1bdc: 0x10000008
    ctx->pc = 0x1C1BDCu;
    {
        const bool branch_taken_0x1c1bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1BE0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x1c1bdc) {
            ctx->pc = 0x1C1C00u;
            goto label_1c1c00;
        }
    }
    ctx->pc = 0x1C1BE4u;
    // 0x1c1be4: 0x0
    ctx->pc = 0x1c1be4u;
    // NOP
label_1c1be8:
    // 0x1c1be8: 0xc0706d8
    ctx->pc = 0x1C1BE8u;
    SET_GPR_U32(ctx, 31, 0x1C1BF0u);
    ctx->pc = 0x1C1BECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C1B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1B60_0x1c1b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BF0u; }
    }
    if (ctx->pc != 0x1C1BF0u) { return; }
    ctx->pc = 0x1C1BF0u;
    // 0x1c1bf0: 0x602fffd
    ctx->pc = 0x1C1BF0u;
    {
        const bool branch_taken_0x1c1bf0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c1bf0) {
            ctx->pc = 0x1C1BF4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 60));
            ctx->pc = 0x1C1BE8u;
            goto label_1c1be8;
        }
    }
    ctx->pc = 0x1C1BF8u;
    // 0x1c1bf8: 0xa2300002
    ctx->pc = 0x1c1bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_1c1bfc:
    // 0x1c1bfc: 0x220202d
    ctx->pc = 0x1c1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c00:
    // 0x1c1c00: 0xdfbf0020
    ctx->pc = 0x1c1c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1c04: 0xdfb10010
    ctx->pc = 0x1c1c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c08: 0xdfb00000
    ctx->pc = 0x1c1c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c0c: 0x807065a
    ctx->pc = 0x1C1C0Cu;
    ctx->pc = 0x1C1C10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1C1968u;
    entry_1c1968_0x1c19d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1C14u;
    // 0x1c1c14: 0x0
    ctx->pc = 0x1c1c14u;
    // NOP
    // 0x1c1c18: 0x80706e2
    ctx->pc = 0x1C1C18u;
    ctx->pc = 0x1C1C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966756));
    ctx->pc = 0x1C1B88u;
    goto label_1c1b88;
    ctx->pc = 0x1C1C20u;
}
