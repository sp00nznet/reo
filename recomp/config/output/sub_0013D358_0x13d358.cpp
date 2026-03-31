#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D358
// Address: 0x13d358 - 0x13d3c0
void sub_0013D358_0x13d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d358u;

    // 0x13d358: 0x27bdfff0
    ctx->pc = 0x13d358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d35c: 0xa0182d
    ctx->pc = 0x13d35cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d360: 0x14800007
    ctx->pc = 0x13D360u;
    {
        const bool branch_taken_0x13d360 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D364u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d360) {
            ctx->pc = 0x13D380u;
            goto label_13d380;
        }
    }
    ctx->pc = 0x13D368u;
    // 0x13d368: 0x3c040024
    ctx->pc = 0x13d368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d36c: 0xdfbf0000
    ctx->pc = 0x13d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d370: 0x2484d368
    ctx->pc = 0x13d370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13d374: 0x804f53e
    ctx->pc = 0x13D374u;
    ctx->pc = 0x13D378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13D37Cu;
    // 0x13d37c: 0x0
    ctx->pc = 0x13d37cu;
    // NOP
label_13d380:
    // 0x13d380: 0x4620006
    ctx->pc = 0x13D380u;
    {
        const bool branch_taken_0x13d380 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x13d380) {
            ctx->pc = 0x13D384u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x13D39Cu;
            goto label_13d39c;
        }
    }
    ctx->pc = 0x13D388u;
    // 0x13d388: 0x8c820018
    ctx->pc = 0x13d388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13d38c: 0x43102a
    ctx->pc = 0x13d38cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x13d390: 0x10400007
    ctx->pc = 0x13D390u;
    {
        const bool branch_taken_0x13d390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D394u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13d390) {
            ctx->pc = 0x13D3B0u;
            goto label_13d3b0;
        }
    }
    ctx->pc = 0x13D398u;
    // 0x13d398: 0x3c040024
    ctx->pc = 0x13d398u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13d39c:
    // 0x13d39c: 0xdfbf0000
    ctx->pc = 0x13d39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3a0: 0x2484d400
    ctx->pc = 0x13d3a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956032));
    // 0x13d3a4: 0x804f53e
    ctx->pc = 0x13D3A4u;
    ctx->pc = 0x13D3A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13D3ACu;
    // 0x13d3ac: 0x0
    ctx->pc = 0x13d3acu;
    // NOP
label_13d3b0:
    // 0x13d3b0: 0xac830014
    ctx->pc = 0x13d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x13d3b4: 0x3e00008
    ctx->pc = 0x13D3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D380u: goto label_13d380;
            case 0x13D39Cu: goto label_13d39c;
            case 0x13D3B0u: goto label_13d3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D3BCu;
    // 0x13d3bc: 0x0
    ctx->pc = 0x13d3bcu;
    // NOP
}
