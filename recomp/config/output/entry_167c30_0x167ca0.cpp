#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_167c30
// Address: 0x167c30 - 0x167ca0
void entry_167c30_0x167ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167c30u;

    // 0x167c30: 0x510c0
    ctx->pc = 0x167c30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x167c34: 0x27bdfff0
    ctx->pc = 0x167c34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167c38: 0x451023
    ctx->pc = 0x167c38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167c3c: 0xffb00000
    ctx->pc = 0x167c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167c40: 0x21080
    ctx->pc = 0x167c40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167c44: 0x80802d
    ctx->pc = 0x167c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c48: 0x451021
    ctx->pc = 0x167c48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167c4c: 0x282d
    ctx->pc = 0x167c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c50: 0xffbf0008
    ctx->pc = 0x167c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167c54: 0x26081140
    ctx->pc = 0x167c54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4416));
    // 0x167c58: 0x21080
    ctx->pc = 0x167c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167c5c: 0xc0382d
    ctx->pc = 0x167c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c60: 0x1024021
    ctx->pc = 0x167c60u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x167c64: 0x8d030004
    ctx->pc = 0x167c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x167c68: 0x14600005
    ctx->pc = 0x167C68u;
    {
        const bool branch_taken_0x167c68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x167C6Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x167c68) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167C70u;
    // 0x167c70: 0x8d05004c
    ctx->pc = 0x167c70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x167c74: 0xc05def8
    ctx->pc = 0x167C74u;
    SET_GPR_U32(ctx, 31, 0x167C7Cu);
    ctx->pc = 0x167C78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167C7Cu; }
    }
    if (ctx->pc != 0x167C7Cu) { return; }
    ctx->pc = 0x167C7Cu;
    // 0x167c7c: 0x40282d
    ctx->pc = 0x167c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167c80:
    // 0x167c80: 0x24030001
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167c84: 0xdfbf0008
    ctx->pc = 0x167c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167c88: 0xae030044
    ctx->pc = 0x167c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x167c8c: 0xa0102d
    ctx->pc = 0x167c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c90: 0xdfb00000
    ctx->pc = 0x167c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167c94: 0x3e00008
    ctx->pc = 0x167C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167C98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167C80u: goto label_167c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167C9Cu;
    // 0x167c9c: 0x0
    ctx->pc = 0x167c9cu;
    // NOP
}
