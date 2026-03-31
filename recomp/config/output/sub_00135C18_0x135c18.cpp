#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135C18
// Address: 0x135c18 - 0x135c80
void sub_00135C18_0x135c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135c18u;

    // 0x135c18: 0x27bdffe0
    ctx->pc = 0x135c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135c1c: 0xffb00000
    ctx->pc = 0x135c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135c20: 0x3c100026
    ctx->pc = 0x135c20u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x135c24: 0x26102268
    ctx->pc = 0x135c24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8808));
    // 0x135c28: 0xffb10008
    ctx->pc = 0x135c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135c2c: 0x80882d
    ctx->pc = 0x135c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c30: 0xffbf0010
    ctx->pc = 0x135c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135c34: 0xc042c56
    ctx->pc = 0x135C34u;
    SET_GPR_U32(ctx, 31, 0x135C3Cu);
    ctx->pc = 0x135C38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C3Cu; }
    }
    if (ctx->pc != 0x135C3Cu) { return; }
    ctx->pc = 0x135C3Cu;
    // 0x135c3c: 0x24460001
    ctx->pc = 0x135c3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
    // 0x135c40: 0x82020000
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135c44: 0x220202d
    ctx->pc = 0x135c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c48: 0x14400007
    ctx->pc = 0x135C48u;
    {
        const bool branch_taken_0x135c48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x135C4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135c48) {
            ctx->pc = 0x135C68u;
            goto label_135c68;
        }
    }
    ctx->pc = 0x135C50u;
    // 0x135c50: 0xa2200000
    ctx->pc = 0x135c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x135c54: 0xdfb00000
    ctx->pc = 0x135c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135c58: 0xdfb10008
    ctx->pc = 0x135c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135c5c: 0xdfbf0010
    ctx->pc = 0x135c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135c60: 0x3e00008
    ctx->pc = 0x135C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135C68u: goto label_135c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135C68u;
label_135c68:
    // 0x135c68: 0xdfb00000
    ctx->pc = 0x135c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135c6c: 0xdfb10008
    ctx->pc = 0x135c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135c70: 0xdfbf0010
    ctx->pc = 0x135c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135c74: 0x8041eac
    ctx->pc = 0x135C74u;
    ctx->pc = 0x135C78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107AB0u;
    sub_00107AB0_0x107ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x135C7Cu;
    // 0x135c7c: 0x0
    ctx->pc = 0x135c7cu;
    // NOP
}
