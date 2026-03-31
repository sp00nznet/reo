#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D61B8
// Address: 0x1d61b8 - 0x1d6220
void sub_001D61B8_0x1d61b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d61b8u;

    // 0x1d61b8: 0x24020038
    ctx->pc = 0x1d61b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d61bc: 0x3c030034
    ctx->pc = 0x1d61bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d61c0: 0x822018
    ctx->pc = 0x1d61c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d61c4: 0x8c662844
    ctx->pc = 0x1d61c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 10308)));
    // 0x1d61c8: 0xc43021
    ctx->pc = 0x1d61c8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d61cc: 0x24c70010
    ctx->pc = 0x1d61ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d61d0: 0x8ce20024
    ctx->pc = 0x1d61d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1d61d4: 0x5c400003
    ctx->pc = 0x1D61D4u;
    {
        const bool branch_taken_0x1d61d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d61d4) {
            ctx->pc = 0x1D61D8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 48)));
            ctx->pc = 0x1D61E4u;
            goto label_1d61e4;
        }
    }
    ctx->pc = 0x1D61DCu;
    // 0x1d61dc: 0x3e00008
    ctx->pc = 0x1D61DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61E4u: goto label_1d61e4;
            case 0x1D620Cu: goto label_1d620c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D61E4u;
label_1d61e4:
    // 0x1d61e4: 0x41040
    ctx->pc = 0x1d61e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d61e8: 0xc21021
    ctx->pc = 0x1d61e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d61ec: 0x24840001
    ctx->pc = 0x1d61ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d61f0: 0x94430022
    ctx->pc = 0x1d61f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x1d61f4: 0xa4a30000
    ctx->pc = 0x1d61f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d61f8: 0xacc40030
    ctx->pc = 0x1d61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x1d61fc: 0x8ce20020
    ctx->pc = 0x1d61fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1d6200: 0x28420004
    ctx->pc = 0x1d6200u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1d6204: 0x50400001
    ctx->pc = 0x1D6204u;
    {
        const bool branch_taken_0x1d6204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6204) {
            ctx->pc = 0x1D6208u;
            WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x1D620Cu;
            goto label_1d620c;
        }
    }
    ctx->pc = 0x1D620Cu;
label_1d620c:
    // 0x1d620c: 0x8ce30024
    ctx->pc = 0x1d620cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1d6210: 0x102d
    ctx->pc = 0x1d6210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6214: 0x2463ffff
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d6218: 0x3e00008
    ctx->pc = 0x1D6218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D621Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61E4u: goto label_1d61e4;
            case 0x1D620Cu: goto label_1d620c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6220u;
}
