#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_146188
// Address: 0x146188 - 0x146200
void entry_146188_0x146200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146188u;

    // 0x146188: 0x80302d
    ctx->pc = 0x146188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14618c: 0x382d
    ctx->pc = 0x14618cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146190: 0x8cc30168
    ctx->pc = 0x146190u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 360)));
    // 0x146194: 0x24020003
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x146198: 0x10620009
    ctx->pc = 0x146198u;
    {
        const bool branch_taken_0x146198 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x14619Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146198) {
            ctx->pc = 0x1461C0u;
            goto label_1461c0;
        }
    }
    ctx->pc = 0x1461A0u;
    // 0x1461a0: 0x50a00008
    ctx->pc = 0x1461A0u;
    {
        const bool branch_taken_0x1461a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1461a0) {
            ctx->pc = 0x1461A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2148)));
            ctx->pc = 0x1461C4u;
            goto label_1461c4;
        }
    }
    ctx->pc = 0x1461A8u;
    // 0x1461a8: 0x4a30004
    ctx->pc = 0x1461A8u;
    {
        const bool branch_taken_0x1461a8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1461a8) {
            ctx->pc = 0x1461ACu;
            WRITE32(ADD32(GPR_U32(ctx, 6), 2156), GPR_U32(ctx, 0));
            ctx->pc = 0x1461BCu;
            goto label_1461bc;
        }
    }
    ctx->pc = 0x1461B0u;
    // 0x1461b0: 0x8cc2086c
    ctx->pc = 0x1461b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2156)));
    // 0x1461b4: 0x2c470001
    ctx->pc = 0x1461b4u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1461b8: 0xacc0086c
    ctx->pc = 0x1461b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2156), GPR_U32(ctx, 0));
label_1461bc:
    // 0x1461bc: 0xa0202d
    ctx->pc = 0x1461bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1461c0:
    // 0x1461c0: 0x8cc20864
    ctx->pc = 0x1461c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2148)));
label_1461c4:
    // 0x1461c4: 0x451821
    ctx->pc = 0x1461c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1461c8: 0x10e00006
    ctx->pc = 0x1461C8u;
    {
        const bool branch_taken_0x1461c8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1461CCu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 3));
        if (branch_taken_0x1461c8) {
            ctx->pc = 0x1461E4u;
            goto label_1461e4;
        }
    }
    ctx->pc = 0x1461D0u;
    // 0x1461d0: 0x85102a
    ctx->pc = 0x1461d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x1461d4: 0x54400004
    ctx->pc = 0x1461D4u;
    {
        const bool branch_taken_0x1461d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1461d4) {
            ctx->pc = 0x1461D8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2152)));
            ctx->pc = 0x1461E8u;
            goto label_1461e8;
        }
    }
    ctx->pc = 0x1461DCu;
    // 0x1461dc: 0x24620400
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1461e0: 0xacc201c4
    ctx->pc = 0x1461e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 2));
label_1461e4:
    // 0x1461e4: 0x8cc20868
    ctx->pc = 0x1461e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2152)));
label_1461e8:
    // 0x1461e8: 0x8cc401c4
    ctx->pc = 0x1461e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 452)));
    // 0x1461ec: 0x44182a
    ctx->pc = 0x1461ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1461f0: 0x83100b
    ctx->pc = 0x1461f0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x1461f4: 0x3e00008
    ctx->pc = 0x1461F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461F8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 2152), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1461BCu: goto label_1461bc;
            case 0x1461C0u: goto label_1461c0;
            case 0x1461C4u: goto label_1461c4;
            case 0x1461E4u: goto label_1461e4;
            case 0x1461E8u: goto label_1461e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1461FCu;
    // 0x1461fc: 0x0
    ctx->pc = 0x1461fcu;
    // NOP
}
