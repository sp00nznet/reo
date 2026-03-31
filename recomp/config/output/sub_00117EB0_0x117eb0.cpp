#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117EB0
// Address: 0x117eb0 - 0x117f08
void sub_00117EB0_0x117eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117eb0u;

    // 0x117eb0: 0x27bdffd0
    ctx->pc = 0x117eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117eb4: 0xffb00000
    ctx->pc = 0x117eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117eb8: 0xffb10010
    ctx->pc = 0x117eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117ebc: 0xffbf0020
    ctx->pc = 0x117ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117ec0: 0xc047598
    ctx->pc = 0x117EC0u;
    SET_GPR_U32(ctx, 31, 0x117EC8u);
    ctx->pc = 0x117EC4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EC8u; }
    }
    if (ctx->pc != 0x117EC8u) { return; }
    ctx->pc = 0x117EC8u;
    // 0x117ec8: 0x8e11000c
    ctx->pc = 0x117ec8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117ecc: 0x56200003
    ctx->pc = 0x117ECCu;
    {
        const bool branch_taken_0x117ecc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x117ecc) {
            ctx->pc = 0x117ED0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->pc = 0x117EDCu;
            goto label_117edc;
        }
    }
    ctx->pc = 0x117ED4u;
    // 0x117ed4: 0x10000004
    ctx->pc = 0x117ED4u;
    {
        const bool branch_taken_0x117ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117ED8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x117ed4) {
            ctx->pc = 0x117EE8u;
            goto label_117ee8;
        }
    }
    ctx->pc = 0x117EDCu;
label_117edc:
    // 0x117edc: 0x24020001
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x117ee0: 0xae020004
    ctx->pc = 0x117ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x117ee4: 0xae03000c
    ctx->pc = 0x117ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_117ee8:
    // 0x117ee8: 0xc0475ae
    ctx->pc = 0x117EE8u;
    SET_GPR_U32(ctx, 31, 0x117EF0u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EF0u; }
    }
    if (ctx->pc != 0x117EF0u) { return; }
    ctx->pc = 0x117EF0u;
    // 0x117ef0: 0x220102d
    ctx->pc = 0x117ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ef4: 0xdfbf0020
    ctx->pc = 0x117ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117ef8: 0xdfb10010
    ctx->pc = 0x117ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117efc: 0xdfb00000
    ctx->pc = 0x117efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117f00: 0x3e00008
    ctx->pc = 0x117F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117EDCu: goto label_117edc;
            case 0x117EE8u: goto label_117ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117F08u;
}
