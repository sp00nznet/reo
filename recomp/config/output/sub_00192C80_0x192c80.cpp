#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192C80
// Address: 0x192c80 - 0x192d10
void sub_00192C80_0x192c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192c80u;

    // 0x192c80: 0x30c3ffff
    ctx->pc = 0x192c80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65535));
    // 0x192c84: 0x80302d
    ctx->pc = 0x192c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192c88:
    // 0x192c88: 0x948200c6
    ctx->pc = 0x192c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x192c8c: 0x1443000b
    ctx->pc = 0x192C8Cu;
    {
        const bool branch_taken_0x192c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x192c8c) {
            ctx->pc = 0x192CBCu;
            goto label_192cbc;
        }
    }
    ctx->pc = 0x192C94u;
    // 0x192c94: 0x3c010023
    ctx->pc = 0x192c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x192c98: 0x8c22fe40
    ctx->pc = 0x192c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966848)));
    // 0x192c9c: 0xac8200d4
    ctx->pc = 0x192c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x192ca0: 0x8ca20000
    ctx->pc = 0x192ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192ca4: 0xac8200d8
    ctx->pc = 0x192ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
    // 0x192ca8: 0x8c8200d0
    ctx->pc = 0x192ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x192cac: 0x10400003
    ctx->pc = 0x192CACu;
    {
        const bool branch_taken_0x192cac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192CB0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x192cac) {
            ctx->pc = 0x192CBCu;
            goto label_192cbc;
        }
    }
    ctx->pc = 0x192CB4u;
    // 0x192cb4: 0x1000fff4
    ctx->pc = 0x192CB4u;
    {
        const bool branch_taken_0x192cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192CB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192cb4) {
            ctx->pc = 0x192C88u;
            goto label_192c88;
        }
    }
    ctx->pc = 0x192CBCu;
label_192cbc:
    // 0x192cbc: 0x8c8200cc
    ctx->pc = 0x192cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x192cc0: 0x1040000e
    ctx->pc = 0x192CC0u;
    {
        const bool branch_taken_0x192cc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192cc0) {
            ctx->pc = 0x192CFCu;
            goto label_192cfc;
        }
    }
    ctx->pc = 0x192CC8u;
    // 0x192cc8: 0x1086000c
    ctx->pc = 0x192CC8u;
    {
        const bool branch_taken_0x192cc8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        if (branch_taken_0x192cc8) {
            ctx->pc = 0x192CFCu;
            goto label_192cfc;
        }
    }
    ctx->pc = 0x192CD0u;
    // 0x192cd0: 0x1000ffed
    ctx->pc = 0x192CD0u;
    {
        const bool branch_taken_0x192cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192CD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192cd0) {
            ctx->pc = 0x192C88u;
            goto label_192c88;
        }
    }
    ctx->pc = 0x192CD8u;
label_192cd8:
    // 0x192cd8: 0x40202d
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cdc: 0x944200c6
    ctx->pc = 0x192cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 198)));
    // 0x192ce0: 0x1043ffe9
    ctx->pc = 0x192CE0u;
    {
        const bool branch_taken_0x192ce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x192ce0) {
            ctx->pc = 0x192C88u;
            goto label_192c88;
        }
    }
    ctx->pc = 0x192CE8u;
label_192ce8:
    // 0x192ce8: 0x8c8200cc
    ctx->pc = 0x192ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x192cec: 0x0
    ctx->pc = 0x192cecu;
    // NOP
    // 0x192cf0: 0x1440fff9
    ctx->pc = 0x192CF0u;
    {
        const bool branch_taken_0x192cf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x192cf0) {
            ctx->pc = 0x192CD8u;
            goto label_192cd8;
        }
    }
    ctx->pc = 0x192CF8u;
    // 0x192cf8: 0x8c8400c8
    ctx->pc = 0x192cf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_192cfc:
    // 0x192cfc: 0x1486fffa
    ctx->pc = 0x192CFCu;
    {
        const bool branch_taken_0x192cfc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        if (branch_taken_0x192cfc) {
            ctx->pc = 0x192CE8u;
            goto label_192ce8;
        }
    }
    ctx->pc = 0x192D04u;
    // 0x192d04: 0x24020001
    ctx->pc = 0x192d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d08: 0x3e00008
    ctx->pc = 0x192D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192C88u: goto label_192c88;
            case 0x192CBCu: goto label_192cbc;
            case 0x192CD8u: goto label_192cd8;
            case 0x192CE8u: goto label_192ce8;
            case 0x192CFCu: goto label_192cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192D10u;
}
