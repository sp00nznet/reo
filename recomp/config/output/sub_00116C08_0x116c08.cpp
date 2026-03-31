#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116C08
// Address: 0x116c08 - 0x116c80
void sub_00116C08_0x116c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116c08u;

    // 0x116c08: 0x80102d
    ctx->pc = 0x116c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c0c: 0x441000f
    ctx->pc = 0x116C0Cu;
    {
        const bool branch_taken_0x116c0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116C10u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116c0c) {
            ctx->pc = 0x116C4Cu;
            goto label_116c4c;
        }
    }
    ctx->pc = 0x116C14u;
    // 0x116c14: 0x3c037fff
    ctx->pc = 0x116c14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x116c18: 0x2405000c
    ctx->pc = 0x116c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x116c1c: 0x3463ffff
    ctx->pc = 0x116c1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x116c20: 0x3c040026
    ctx->pc = 0x116c20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x116c24: 0x431824
    ctx->pc = 0x116c24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116c28: 0x2484af98
    ctx->pc = 0x116c28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946712));
    // 0x116c2c: 0x651818
    ctx->pc = 0x116c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x116c30: 0x8c82000c
    ctx->pc = 0x116c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116c34: 0x621021
    ctx->pc = 0x116c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c38: 0xac460004
    ctx->pc = 0x116c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x116c3c: 0xac470000
    ctx->pc = 0x116c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x116c40: 0x380282d
    ctx->pc = 0x116c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c44: 0x1000000b
    ctx->pc = 0x116C44u;
    {
        const bool branch_taken_0x116c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x116C48u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x116c44) {
            ctx->pc = 0x116C74u;
            goto label_116c74;
        }
    }
    ctx->pc = 0x116C4Cu;
label_116c4c:
    // 0x116c4c: 0x2403000c
    ctx->pc = 0x116c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x116c50: 0x3c040026
    ctx->pc = 0x116c50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x116c54: 0x431818
    ctx->pc = 0x116c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x116c58: 0x2484af98
    ctx->pc = 0x116c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946712));
    // 0x116c5c: 0x8c820014
    ctx->pc = 0x116c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x116c60: 0x621021
    ctx->pc = 0x116c60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c64: 0xac460004
    ctx->pc = 0x116c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x116c68: 0xac470000
    ctx->pc = 0x116c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x116c6c: 0x380282d
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c70: 0x8c820014
    ctx->pc = 0x116c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_116c74:
    // 0x116c74: 0x621821
    ctx->pc = 0x116c74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c78: 0x3e00008
    ctx->pc = 0x116C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116C4Cu: goto label_116c4c;
            case 0x116C74u: goto label_116c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116C80u;
}
