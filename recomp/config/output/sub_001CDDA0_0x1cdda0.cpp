#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CDDA0
// Address: 0x1cdda0 - 0x1cde10
void sub_001CDDA0_0x1cdda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cdda0u;

    // 0x1cdda0: 0x27bdfef0
    ctx->pc = 0x1cdda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1cdda4: 0xffbf0000
    ctx->pc = 0x1cdda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdda8: 0xc042dee
    ctx->pc = 0x1CDDA8u;
    SET_GPR_U32(ctx, 31, 0x1CDDB0u);
    ctx->pc = 0x1CDDACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 92));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDB0u; }
    }
    if (ctx->pc != 0x1CDDB0u) { return; }
    ctx->pc = 0x1CDDB0u;
    // 0x1cddb0: 0x24450001
    ctx->pc = 0x1cddb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cddb4: 0xc042bf0
    ctx->pc = 0x1CDDB4u;
    SET_GPR_U32(ctx, 31, 0x1CDDBCu);
    ctx->pc = 0x1CDDB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDBCu; }
    }
    if (ctx->pc != 0x1CDDBCu) { return; }
    ctx->pc = 0x1CDDBCu;
    // 0x1cddbc: 0xc04336a
    ctx->pc = 0x1CDDBCu;
    SET_GPR_U32(ctx, 31, 0x1CDDC4u);
    ctx->pc = 0x1CDDC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDC4u; }
    }
    if (ctx->pc != 0x1CDDC4u) { return; }
    ctx->pc = 0x1CDDC4u;
    // 0x1cddc4: 0x3c050025
    ctx->pc = 0x1cddc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cddc8: 0x27a40010
    ctx->pc = 0x1cddc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cddcc: 0xc042b9e
    ctx->pc = 0x1CDDCCu;
    SET_GPR_U32(ctx, 31, 0x1CDDD4u);
    ctx->pc = 0x1CDDD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24736));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDD4u; }
    }
    if (ctx->pc != 0x1CDDD4u) { return; }
    ctx->pc = 0x1CDDD4u;
    // 0x1cddd4: 0x14400003
    ctx->pc = 0x1CDDD4u;
    {
        const bool branch_taken_0x1cddd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDDD8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1cddd4) {
            ctx->pc = 0x1CDDE4u;
            goto label_1cdde4;
        }
    }
    ctx->pc = 0x1CDDDCu;
    // 0x1cdddc: 0x10000008
    ctx->pc = 0x1CDDDCu;
    {
        const bool branch_taken_0x1cdddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDDE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x1cdddc) {
            ctx->pc = 0x1CDE00u;
            goto label_1cde00;
        }
    }
    ctx->pc = 0x1CDDE4u;
label_1cdde4:
    // 0x1cdde4: 0x27a40010
    ctx->pc = 0x1cdde4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cdde8: 0xc042b9e
    ctx->pc = 0x1CDDE8u;
    SET_GPR_U32(ctx, 31, 0x1CDDF0u);
    ctx->pc = 0x1CDDECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24752));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDF0u; }
    }
    if (ctx->pc != 0x1CDDF0u) { return; }
    ctx->pc = 0x1CDDF0u;
    // 0x1cddf0: 0x24040080
    ctx->pc = 0x1cddf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cddf4: 0x2403ffff
    ctx->pc = 0x1cddf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cddf8: 0x62200b
    ctx->pc = 0x1cddf8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x1cddfc: 0x80102d
    ctx->pc = 0x1cddfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cde00:
    // 0x1cde00: 0xdfbf0000
    ctx->pc = 0x1cde00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cde04: 0x3e00008
    ctx->pc = 0x1CDE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDDE4u: goto label_1cdde4;
            case 0x1CDE00u: goto label_1cde00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDE0Cu;
    // 0x1cde0c: 0x0
    ctx->pc = 0x1cde0cu;
    // NOP
}
