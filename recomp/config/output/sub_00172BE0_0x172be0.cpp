#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172BE0
// Address: 0x172be0 - 0x172c48
void sub_00172BE0_0x172be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172be0u;

    // 0x172be0: 0x27bdfff0
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172be4: 0x80282d
    ctx->pc = 0x172be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172be8: 0xffbf0000
    ctx->pc = 0x172be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172bec: 0x24a609a0
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 2464));
    // 0x172bf0: 0x24020001
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172bf4: 0x8cc30038
    ctx->pc = 0x172bf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x172bf8: 0x1060000f
    ctx->pc = 0x172BF8u;
    {
        const bool branch_taken_0x172bf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x172BFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3264));
        if (branch_taken_0x172bf8) {
            ctx->pc = 0x172C38u;
            goto label_172c38;
        }
    }
    ctx->pc = 0x172C00u;
    // 0x172c00: 0x8cc30014
    ctx->pc = 0x172c00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x172c04: 0x5060000d
    ctx->pc = 0x172C04u;
    {
        const bool branch_taken_0x172c04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x172c04) {
            ctx->pc = 0x172C08u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x172C3Cu;
            goto label_172c3c;
        }
    }
    ctx->pc = 0x172C0Cu;
    // 0x172c0c: 0x8ca3026c
    ctx->pc = 0x172c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 620)));
    // 0x172c10: 0x5460000a
    ctx->pc = 0x172C10u;
    {
        const bool branch_taken_0x172c10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x172c10) {
            ctx->pc = 0x172C14u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x172C3Cu;
            goto label_172c3c;
        }
    }
    ctx->pc = 0x172C18u;
    // 0x172c18: 0x8ca30288
    ctx->pc = 0x172c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 648)));
    // 0x172c1c: 0x8cc500b4
    ctx->pc = 0x172c1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x172c20: 0x65182a
    ctx->pc = 0x172c20u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x172c24: 0x50600005
    ctx->pc = 0x172C24u;
    {
        const bool branch_taken_0x172c24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x172c24) {
            ctx->pc = 0x172C28u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x172C3Cu;
            goto label_172c3c;
        }
    }
    ctx->pc = 0x172C2Cu;
    // 0x172c2c: 0xc05cc84
    ctx->pc = 0x172C2Cu;
    SET_GPR_U32(ctx, 31, 0x172C34u);
    ctx->pc = 0x173210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C34u; }
    }
    if (ctx->pc != 0x172C34u) { return; }
    ctx->pc = 0x172C34u;
    // 0x172c34: 0x2102b
    ctx->pc = 0x172c34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_172c38:
    // 0x172c38: 0xdfbf0000
    ctx->pc = 0x172c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172c3c:
    // 0x172c3c: 0x3e00008
    ctx->pc = 0x172C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172C38u: goto label_172c38;
            case 0x172C3Cu: goto label_172c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172C44u;
    // 0x172c44: 0x0
    ctx->pc = 0x172c44u;
    // NOP
}
