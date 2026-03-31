#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138DE8
// Address: 0x138de8 - 0x138e58
void sub_00138DE8_0x138de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138de8u;

    // 0x138de8: 0x27bdffe0
    ctx->pc = 0x138de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138dec: 0x3c020026
    ctx->pc = 0x138decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x138df0: 0xffb00010
    ctx->pc = 0x138df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x138df4: 0x3c100026
    ctx->pc = 0x138df4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x138df8: 0x244223c0
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9152));
    // 0x138dfc: 0xffbf0018
    ctx->pc = 0x138dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x138e00: 0x261024c0
    ctx->pc = 0x138e00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 9408));
    // 0x138e04: 0x3c030022
    ctx->pc = 0x138e04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x138e08: 0xac440000
    ctx->pc = 0x138e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x138e0c: 0x2464c870
    ctx->pc = 0x138e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294953072));
    // 0x138e10: 0xac450004
    ctx->pc = 0x138e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x138e14: 0x24050002
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x138e18: 0xac460008
    ctx->pc = 0x138e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x138e1c: 0x302d
    ctx->pc = 0x138e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e20: 0xac47000c
    ctx->pc = 0x138e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x138e24: 0x40382d
    ctx->pc = 0x138e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e28: 0x200482d
    ctx->pc = 0x138e28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e2c: 0x24080010
    ctx->pc = 0x138e2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e30: 0x240a0004
    ctx->pc = 0x138e30u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x138e34: 0x582d
    ctx->pc = 0x138e34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e38: 0xc045e7a
    ctx->pc = 0x138E38u;
    SET_GPR_U32(ctx, 31, 0x138E40u);
    ctx->pc = 0x138E3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E40u; }
    }
    if (ctx->pc != 0x138E40u) { return; }
    ctx->pc = 0x138E40u;
    // 0x138e40: 0xdfbf0018
    ctx->pc = 0x138e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138e44: 0x8e020000
    ctx->pc = 0x138e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138e48: 0xdfb00010
    ctx->pc = 0x138e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138e4c: 0x3e00008
    ctx->pc = 0x138E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138E54u;
    // 0x138e54: 0x0
    ctx->pc = 0x138e54u;
    // NOP
}
