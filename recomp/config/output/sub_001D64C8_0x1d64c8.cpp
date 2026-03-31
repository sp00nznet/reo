#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D64C8
// Address: 0x1d64c8 - 0x1d6538
void sub_001D64C8_0x1d64c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d64c8u;

    // 0x1d64c8: 0x24020054
    ctx->pc = 0x1d64c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 84));
    // 0x1d64cc: 0x30880001
    ctx->pc = 0x1d64ccu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), 1));
    // 0x1d64d0: 0x1022018
    ctx->pc = 0x1d64d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d64d4: 0x3c090025
    ctx->pc = 0x1d64d4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)37 << 16));
    // 0x1d64d8: 0x25267b58
    ctx->pc = 0x1d64d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 9), 31576));
    // 0x1d64dc: 0x30a500ff
    ctx->pc = 0x1d64dcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x1d64e0: 0xa0502d
    ctx->pc = 0x1d64e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64e4: 0x861021
    ctx->pc = 0x1d64e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d64e8: 0x90430000
    ctx->pc = 0x1d64e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d64ec: 0x10a3000d
    ctx->pc = 0x1D64ECu;
    {
        const bool branch_taken_0x1d64ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D64F0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d64ec) {
            ctx->pc = 0x1D6524u;
            goto label_1d6524;
        }
    }
    ctx->pc = 0x1D64F4u;
    // 0x1d64f4: 0x24e70001
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1d64f8:
    // 0x1d64f8: 0x2ce20015
    ctx->pc = 0x1d64f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 21));
    // 0x1d64fc: 0x1040000c
    ctx->pc = 0x1D64FCu;
    {
        const bool branch_taken_0x1d64fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6500u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
        if (branch_taken_0x1d64fc) {
            ctx->pc = 0x1D6530u;
            goto label_1d6530;
        }
    }
    ctx->pc = 0x1D6504u;
    // 0x1d6504: 0x72080
    ctx->pc = 0x1d6504u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d6508: 0x1031818
    ctx->pc = 0x1d6508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d650c: 0x25267b58
    ctx->pc = 0x1d650cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 9), 31576));
    // 0x1d6510: 0x832021
    ctx->pc = 0x1d6510u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6514: 0x861021
    ctx->pc = 0x1d6514u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d6518: 0x90430000
    ctx->pc = 0x1d6518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d651c: 0x1543fff6
    ctx->pc = 0x1D651Cu;
    {
        const bool branch_taken_0x1d651c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D6520u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1d651c) {
            ctx->pc = 0x1D64F8u;
            goto label_1d64f8;
        }
    }
    ctx->pc = 0x1D6524u;
label_1d6524:
    // 0x1d6524: 0xc41021
    ctx->pc = 0x1d6524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d6528: 0x94430002
    ctx->pc = 0x1d6528u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d652c: 0x34654000
    ctx->pc = 0x1d652cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 16384));
label_1d6530:
    // 0x1d6530: 0x3e00008
    ctx->pc = 0x1D6530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6534u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D64F8u: goto label_1d64f8;
            case 0x1D6524u: goto label_1d6524;
            case 0x1D6530u: goto label_1d6530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6538u;
}
