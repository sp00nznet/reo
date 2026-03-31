#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1CB0
// Address: 0x1a1cb0 - 0x1a1d30
void sub_001A1CB0_0x1a1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1cb0u;

    // 0x1a1cb0: 0x482d
    ctx->pc = 0x1a1cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1cb4: 0x3c070024
    ctx->pc = 0x1a1cb4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x1a1cb8: 0x240500ff
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a1cbc: 0x24e71b10
    ctx->pc = 0x1a1cbcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 6928));
    // 0x1a1cc0: 0x9443c
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 16));
label_1a1cc4:
    // 0x1a1cc4: 0x8c860008
    ctx->pc = 0x1a1cc4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1cc8: 0x8443f
    ctx->pc = 0x1a1cc8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1a1ccc: 0x81880
    ctx->pc = 0x1a1cccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a1cd0: 0xe31821
    ctx->pc = 0x1a1cd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a1cd4: 0x8c630000
    ctx->pc = 0x1a1cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1cd8: 0xc31824
    ctx->pc = 0x1a1cd8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a1cdc: 0x1060000a
    ctx->pc = 0x1A1CDCu;
    {
        const bool branch_taken_0x1a1cdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1CE0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1a1cdc) {
            ctx->pc = 0x1A1D08u;
            goto label_1a1d08;
        }
    }
    ctx->pc = 0x1A1CE4u;
    // 0x1a1ce4: 0x81840
    ctx->pc = 0x1a1ce4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1a1ce8: 0x831821
    ctx->pc = 0x1a1ce8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1cec: 0x24660038
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 56));
    // 0x1a1cf0: 0x90630038
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a1cf4: 0x10650006
    ctx->pc = 0x1A1CF4u;
    {
        const bool branch_taken_0x1a1cf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1a1cf4) {
            ctx->pc = 0x1A1D10u;
            goto label_1a1d10;
        }
    }
    ctx->pc = 0x1A1CFCu;
    // 0x1a1cfc: 0x24630001
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1d00: 0x10000003
    ctx->pc = 0x1A1D00u;
    {
        const bool branch_taken_0x1a1d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1D04u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a1d00) {
            ctx->pc = 0x1A1D10u;
            goto label_1a1d10;
        }
    }
    ctx->pc = 0x1A1D08u;
label_1a1d08:
    // 0x1a1d08: 0x831821
    ctx->pc = 0x1a1d08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1d0c: 0xa4600038
    ctx->pc = 0x1a1d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 0));
label_1a1d10:
    // 0x1a1d10: 0x25230001
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a1d14: 0x34c3c
    ctx->pc = 0x1a1d14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1d18: 0x94c3f
    ctx->pc = 0x1a1d18u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1a1d1c: 0x29230018
    ctx->pc = 0x1a1d1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), 24));
    // 0x1a1d20: 0x1460ffe8
    ctx->pc = 0x1A1D20u;
    {
        const bool branch_taken_0x1a1d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1D24u;
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 16));
        if (branch_taken_0x1a1d20) {
            ctx->pc = 0x1A1CC4u;
            goto label_1a1cc4;
        }
    }
    ctx->pc = 0x1A1D28u;
    // 0x1a1d28: 0x3e00008
    ctx->pc = 0x1A1D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1CC4u: goto label_1a1cc4;
            case 0x1A1D08u: goto label_1a1d08;
            case 0x1A1D10u: goto label_1a1d10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1D30u;
}
