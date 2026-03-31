#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001740A0
// Address: 0x1740a0 - 0x174100
void sub_001740A0_0x1740a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1740a0u;

    // 0x1740a0: 0x27bdffe0
    ctx->pc = 0x1740a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1740a4: 0xffb00000
    ctx->pc = 0x1740a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1740a8: 0x80802d
    ctx->pc = 0x1740a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740ac: 0xffb10008
    ctx->pc = 0x1740acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1740b0: 0xffbf0010
    ctx->pc = 0x1740b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1740b4: 0xc05a78c
    ctx->pc = 0x1740B4u;
    SET_GPR_U32(ctx, 31, 0x1740BCu);
    ctx->pc = 0x1740B8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740BCu; }
    }
    if (ctx->pc != 0x1740BCu) { return; }
    ctx->pc = 0x1740BCu;
    // 0x1740bc: 0x3c05ff00
    ctx->pc = 0x1740bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1740c0: 0x10400007
    ctx->pc = 0x1740C0u;
    {
        const bool branch_taken_0x1740c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1740C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1740c0) {
            ctx->pc = 0x1740E0u;
            goto label_1740e0;
        }
    }
    ctx->pc = 0x1740C8u;
    // 0x1740c8: 0xdfb00000
    ctx->pc = 0x1740c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1740cc: 0x34a50139
    ctx->pc = 0x1740ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 313));
    // 0x1740d0: 0xdfb10008
    ctx->pc = 0x1740d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1740d4: 0xdfbf0010
    ctx->pc = 0x1740d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1740d8: 0x805a704
    ctx->pc = 0x1740D8u;
    ctx->pc = 0x1740DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1740E0u;
label_1740e0:
    // 0x1740e0: 0x200202d
    ctx->pc = 0x1740e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740e4: 0xdfb00000
    ctx->pc = 0x1740e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1740e8: 0x220282d
    ctx->pc = 0x1740e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740ec: 0xdfb10008
    ctx->pc = 0x1740ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1740f0: 0xdfbf0010
    ctx->pc = 0x1740f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1740f4: 0x8059b42
    ctx->pc = 0x1740F4u;
    ctx->pc = 0x1740F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x166D08u;
    entry_166d08_0x166db0(rdram, ctx, runtime); return;
    ctx->pc = 0x1740FCu;
    // 0x1740fc: 0x0
    ctx->pc = 0x1740fcu;
    // NOP
}
