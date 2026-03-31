#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6460
// Address: 0x1b6460 - 0x1b64f0
void sub_001B6460_0x1b6460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6460u;

    // 0x1b6460: 0x41202
    ctx->pc = 0x1b6460u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
    // 0x1b6464: 0x304600ff
    ctx->pc = 0x1b6464u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 255));
    // 0x1b6468: 0x28c100a0
    ctx->pc = 0x1b6468u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 160));
    // 0x1b646c: 0x10200003
    ctx->pc = 0x1B646Cu;
    {
        const bool branch_taken_0x1b646c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6470u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x1b646c) {
            ctx->pc = 0x1B647Cu;
            goto label_1b647c;
        }
    }
    ctx->pc = 0x1B6474u;
    // 0x1b6474: 0x10000002
    ctx->pc = 0x1B6474u;
    {
        const bool branch_taken_0x1b6474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
        if (branch_taken_0x1b6474) {
            ctx->pc = 0x1B6480u;
            goto label_1b6480;
        }
    }
    ctx->pc = 0x1B647Cu;
label_1b647c:
    // 0x1b647c: 0x240200b1
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 177));
label_1b6480:
    // 0x1b6480: 0x3043ffff
    ctx->pc = 0x1b6480u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b6484: 0xc31823
    ctx->pc = 0x1b6484u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b6488: 0x30a2ffff
    ctx->pc = 0x1b6488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1b648c: 0x3066ffff
    ctx->pc = 0x1b648cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1b6490: 0x28410080
    ctx->pc = 0x1b6490u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 128));
    // 0x1b6494: 0x61840
    ctx->pc = 0x1b6494u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1b6498: 0x24630001
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b649c: 0x14200003
    ctx->pc = 0x1B649Cu;
    {
        const bool branch_taken_0x1b649c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B64A0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x1b649c) {
            ctx->pc = 0x1B64ACu;
            goto label_1b64ac;
        }
    }
    ctx->pc = 0x1B64A4u;
    // 0x1b64a4: 0x24a2ffff
    ctx->pc = 0x1b64a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b64a8: 0x3045ffff
    ctx->pc = 0x1b64a8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1b64ac:
    // 0x1b64ac: 0x30a2ffff
    ctx->pc = 0x1b64acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1b64b0: 0x2842009e
    ctx->pc = 0x1b64b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 158));
    // 0x1b64b4: 0x14400006
    ctx->pc = 0x1B64B4u;
    {
        const bool branch_taken_0x1b64b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B64B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967265));
        if (branch_taken_0x1b64b4) {
            ctx->pc = 0x1B64D0u;
            goto label_1b64d0;
        }
    }
    ctx->pc = 0x1B64BCu;
    // 0x1b64bc: 0x24a3ff83
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967171));
    // 0x1b64c0: 0x24820001
    ctx->pc = 0x1b64c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b64c4: 0x3065ffff
    ctx->pc = 0x1b64c4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1b64c8: 0x10000002
    ctx->pc = 0x1B64C8u;
    {
        const bool branch_taken_0x1b64c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B64CCu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b64c8) {
            ctx->pc = 0x1B64D4u;
            goto label_1b64d4;
        }
    }
    ctx->pc = 0x1B64D0u;
label_1b64d0:
    // 0x1b64d0: 0x3045ffff
    ctx->pc = 0x1b64d0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1b64d4:
    // 0x1b64d4: 0x3083ffff
    ctx->pc = 0x1b64d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b64d8: 0x30a2ffff
    ctx->pc = 0x1b64d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1b64dc: 0x31a00
    ctx->pc = 0x1b64dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b64e0: 0x3e00008
    ctx->pc = 0x1B64E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B64E4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B647Cu: goto label_1b647c;
            case 0x1B6480u: goto label_1b6480;
            case 0x1B64ACu: goto label_1b64ac;
            case 0x1B64D0u: goto label_1b64d0;
            case 0x1B64D4u: goto label_1b64d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B64E8u;
    // 0x1b64e8: 0x0
    ctx->pc = 0x1b64e8u;
    // NOP
    // 0x1b64ec: 0x0
    ctx->pc = 0x1b64ecu;
    // NOP
}
