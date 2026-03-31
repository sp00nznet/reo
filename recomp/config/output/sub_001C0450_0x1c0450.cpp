#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C0450
// Address: 0x1c0450 - 0x1c04e0
void sub_001C0450_0x1c0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c0450u;

    // 0x1c0450: 0x3c010032
    ctx->pc = 0x1c0450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0454: 0x24030001
    ctx->pc = 0x1c0454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0458: 0xac206c50
    ctx->pc = 0x1c0458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27728), GPR_U32(ctx, 0));
    // 0x1c045c: 0x3c010032
    ctx->pc = 0x1c045cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0460: 0xac206c54
    ctx->pc = 0x1c0460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27732), GPR_U32(ctx, 0));
    // 0x1c0464: 0x3c010032
    ctx->pc = 0x1c0464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0468: 0xac236ce8
    ctx->pc = 0x1c0468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27880), GPR_U32(ctx, 3));
    // 0x1c046c: 0x2403ffff
    ctx->pc = 0x1c046cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0470: 0x3c010032
    ctx->pc = 0x1c0470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0474: 0xac236c74
    ctx->pc = 0x1c0474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27764), GPR_U32(ctx, 3));
    // 0x1c0478: 0x3c010032
    ctx->pc = 0x1c0478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c047c: 0x3e00008
    ctx->pc = 0x1C047Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0480u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 27748), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C04CCu: goto label_1c04cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0484u;
    // 0x1c0484: 0x0
    ctx->pc = 0x1c0484u;
    // NOP
    // 0x1c0488: 0x0
    ctx->pc = 0x1c0488u;
    // NOP
    // 0x1c048c: 0x0
    ctx->pc = 0x1c048cu;
    // NOP
    // 0x1c0490: 0x27bdffe0
    ctx->pc = 0x1c0490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0494: 0xffbf0010
    ctx->pc = 0x1c0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c0498: 0x7fb00000
    ctx->pc = 0x1c0498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c049c: 0xc06fe10
    ctx->pc = 0x1C049Cu;
    SET_GPR_U32(ctx, 31, 0x1C04A4u);
    ctx->pc = 0x1C04A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BF840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF840_0x1bf840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04A4u; }
    }
    if (ctx->pc != 0x1C04A4u) { return; }
    ctx->pc = 0x1C04A4u;
    // 0x1c04a4: 0x4400009
    ctx->pc = 0x1C04A4u;
    {
        const bool branch_taken_0x1c04a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c04a4) {
            ctx->pc = 0x1C04CCu;
            goto label_1c04cc;
        }
    }
    ctx->pc = 0x1C04ACu;
    // 0x1c04ac: 0x8e030014
    ctx->pc = 0x1c04acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c04b0: 0x24640001
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c04b4: 0xae040014
    ctx->pc = 0x1c04b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1c04b8: 0x8e030010
    ctx->pc = 0x1c04b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c04bc: 0x83182a
    ctx->pc = 0x1c04bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c04c0: 0x14600002
    ctx->pc = 0x1C04C0u;
    {
        const bool branch_taken_0x1c04c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c04c0) {
            ctx->pc = 0x1C04CCu;
            goto label_1c04cc;
        }
    }
    ctx->pc = 0x1C04C8u;
    // 0x1c04c8: 0xae000014
    ctx->pc = 0x1c04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1c04cc:
    // 0x1c04cc: 0xdfbf0010
    ctx->pc = 0x1c04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c04d0: 0x7bb00000
    ctx->pc = 0x1c04d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c04d4: 0x3e00008
    ctx->pc = 0x1C04D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C04D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C04CCu: goto label_1c04cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C04DCu;
    // 0x1c04dc: 0x0
    ctx->pc = 0x1c04dcu;
    // NOP
}
