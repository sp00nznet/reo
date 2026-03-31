#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e3b8
// Address: 0x17e3b8 - 0x17e408
void entry_17e3b8_0x17e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e3b8u;

    // 0x17e3b8: 0x27bdfff0
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e3bc: 0x3c020023
    ctx->pc = 0x17e3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17e3c0: 0xffb00000
    ctx->pc = 0x17e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e3c4: 0x2450f978
    ctx->pc = 0x17e3c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294965624));
    // 0x17e3c8: 0x8e030000
    ctx->pc = 0x17e3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e3cc: 0x1c600009
    ctx->pc = 0x17E3CCu;
    {
        const bool branch_taken_0x17e3cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x17E3D0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x17e3cc) {
            ctx->pc = 0x17E3F4u;
            goto label_17e3f4;
        }
    }
    ctx->pc = 0x17E3D4u;
    // 0x17e3d4: 0xc05f902
    ctx->pc = 0x17E3D4u;
    SET_GPR_U32(ctx, 31, 0x17E3DCu);
    ctx->pc = 0x17E408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E408_0x17e408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3DCu; }
    }
    if (ctx->pc != 0x17E3DCu) { return; }
    ctx->pc = 0x17E3DCu;
    // 0x17e3dc: 0x3c030027
    ctx->pc = 0x17e3dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x17e3e0: 0x8e040000
    ctx->pc = 0x17e3e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e3e4: 0x24636150
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24912));
    // 0x17e3e8: 0xac620000
    ctx->pc = 0x17e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17e3ec: 0x24840001
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17e3f0: 0xae040000
    ctx->pc = 0x17e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_17e3f4:
    // 0x17e3f4: 0xdfb00000
    ctx->pc = 0x17e3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3f8: 0xdfbf0008
    ctx->pc = 0x17e3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e3fc: 0x3e00008
    ctx->pc = 0x17E3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E400u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E3F4u: goto label_17e3f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E404u;
    // 0x17e404: 0x0
    ctx->pc = 0x17e404u;
    // NOP
}
