#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_18c570
// Address: 0x18c570 - 0x18c5f0
void entry_18c570_0x18c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c570u;

    // 0x18c570: 0x1080001d
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C578u;
    // 0x18c578: 0x2c810281
    ctx->pc = 0x18c578u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 641));
    // 0x18c57c: 0x14200003
    ctx->pc = 0x18C57Cu;
    {
        const bool branch_taken_0x18c57c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c57c) {
            ctx->pc = 0x18C58Cu;
            goto label_18c58c;
        }
    }
    ctx->pc = 0x18C584u;
    // 0x18c584: 0x10000018
    ctx->pc = 0x18C584u;
    {
        const bool branch_taken_0x18c584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c584) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C58Cu;
label_18c58c:
    // 0x18c58c: 0x4a00016
    ctx->pc = 0x18C58Cu;
    {
        const bool branch_taken_0x18c58c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18c58c) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C594u;
    // 0x18c594: 0x28a30020
    ctx->pc = 0x18c594u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
    // 0x18c598: 0x14600003
    ctx->pc = 0x18C598u;
    {
        const bool branch_taken_0x18c598 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c598) {
            ctx->pc = 0x18C5A8u;
            goto label_18c5a8;
        }
    }
    ctx->pc = 0x18C5A0u;
    // 0x18c5a0: 0x10000011
    ctx->pc = 0x18C5A0u;
    {
        const bool branch_taken_0x18c5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c5a0) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5A8u;
label_18c5a8:
    // 0x18c5a8: 0x10c0000f
    ctx->pc = 0x18C5A8u;
    {
        const bool branch_taken_0x18c5a8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c5a8) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5B0u;
    // 0x18c5b0: 0x3c010029
    ctx->pc = 0x18c5b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c5b4: 0x2487ffff
    ctx->pc = 0x18c5b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c5b8: 0x8c2341a0
    ctx->pc = 0x18c5b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x18c5bc: 0x72040
    ctx->pc = 0x18c5bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 1));
    // 0x18c5c0: 0x872021
    ctx->pc = 0x18c5c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18c5c4: 0x52880
    ctx->pc = 0x18c5c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x18c5c8: 0x421c0
    ctx->pc = 0x18c5c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x18c5cc: 0x641821
    ctx->pc = 0x18c5ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c5d0: 0xa32021
    ctx->pc = 0x18c5d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18c5d4: 0x8c830080
    ctx->pc = 0x18c5d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x18c5d8: 0x10660003
    ctx->pc = 0x18C5D8u;
    {
        const bool branch_taken_0x18c5d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x18C5DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x18c5d8) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5E0u;
    // 0x18c5e0: 0xaca60000
    ctx->pc = 0x18c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18c5e4: 0xac860100
    ctx->pc = 0x18c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
label_18c5e8:
    // 0x18c5e8: 0x3e00008
    ctx->pc = 0x18C5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C58Cu: goto label_18c58c;
            case 0x18C5A8u: goto label_18c5a8;
            case 0x18C5E8u: goto label_18c5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C5F0u;
}
