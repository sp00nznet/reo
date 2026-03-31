#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA8A0
// Address: 0x1ba8a0 - 0x1ba920
void sub_001BA8A0_0x1ba8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba8a0u;

    // 0x1ba8a0: 0x41840
    ctx->pc = 0x1ba8a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ba8a4: 0x27bdffe0
    ctx->pc = 0x1ba8a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba8a8: 0x642021
    ctx->pc = 0x1ba8a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ba8ac: 0xffbf0000
    ctx->pc = 0x1ba8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba8b0: 0x3c03002b
    ctx->pc = 0x1ba8b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1ba8b4: 0x420c0
    ctx->pc = 0x1ba8b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ba8b8: 0x24630a10
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1ba8bc: 0x644821
    ctx->pc = 0x1ba8bcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ba8c0: 0x8d230010
    ctx->pc = 0x1ba8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1ba8c4: 0x10600013
    ctx->pc = 0x1BA8C4u;
    {
        const bool branch_taken_0x1ba8c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba8c4) {
            ctx->pc = 0x1BA914u;
            goto label_1ba914;
        }
    }
    ctx->pc = 0x1BA8CCu;
    // 0x1ba8cc: 0x91230000
    ctx->pc = 0x1ba8ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ba8d0: 0x24040001
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba8d4: 0x1464000f
    ctx->pc = 0x1BA8D4u;
    {
        const bool branch_taken_0x1ba8d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ba8d4) {
            ctx->pc = 0x1BA914u;
            goto label_1ba914;
        }
    }
    ctx->pc = 0x1BA8DCu;
    // 0x1ba8dc: 0x24020003
    ctx->pc = 0x1ba8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba8e0: 0x27a6001f
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 31));
    // 0x1ba8e4: 0xa3a2001f
    ctx->pc = 0x1ba8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ba8e8: 0x24070002
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba8ec: 0x90a30001
    ctx->pc = 0x1ba8ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ba8f0: 0x90a20000
    ctx->pc = 0x1ba8f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ba8f4: 0x31840
    ctx->pc = 0x1ba8f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ba8f8: 0x30420001
    ctx->pc = 0x1ba8f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ba8fc: 0x80282d
    ctx->pc = 0x1ba8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba900: 0x621025
    ctx->pc = 0x1ba900u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba904: 0xa7a2001c
    ctx->pc = 0x1ba904u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba908: 0x91240006
    ctx->pc = 0x1ba908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1ba90c: 0xc062620
    ctx->pc = 0x1BA90Cu;
    SET_GPR_U32(ctx, 31, 0x1BA914u);
    ctx->pc = 0x1BA910u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x189880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA914u; }
    }
    if (ctx->pc != 0x1BA914u) { return; }
    ctx->pc = 0x1BA914u;
label_1ba914:
    // 0x1ba914: 0xdfbf0000
    ctx->pc = 0x1ba914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba918: 0x3e00008
    ctx->pc = 0x1BA918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA91Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA914u: goto label_1ba914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA920u;
}
