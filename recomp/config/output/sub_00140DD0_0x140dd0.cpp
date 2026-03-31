#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140DD0
// Address: 0x140dd0 - 0x140e88
void sub_00140DD0_0x140dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140dd0u;

    // 0x140dd0: 0x27bdfff0
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140dd4: 0x3c020026
    ctx->pc = 0x140dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140dd8: 0xffb00000
    ctx->pc = 0x140dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140ddc: 0x3c100026
    ctx->pc = 0x140ddcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140de0: 0x24424600
    ctx->pc = 0x140de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140de4: 0xffbf0008
    ctx->pc = 0x140de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140de8: 0x26104700
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140dec: 0xac440000
    ctx->pc = 0x140decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140df0: 0xac450004
    ctx->pc = 0x140df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140df4: 0x40282d
    ctx->pc = 0x140df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140df8: 0x200382d
    ctx->pc = 0x140df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dfc: 0x24040029
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 41));
    // 0x140e00: 0x24060002
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x140e04: 0xc04e518
    ctx->pc = 0x140E04u;
    SET_GPR_U32(ctx, 31, 0x140E0Cu);
    ctx->pc = 0x140E08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E0Cu; }
    }
    if (ctx->pc != 0x140E0Cu) { return; }
    ctx->pc = 0x140E0Cu;
    // 0x140e0c: 0x8e020000
    ctx->pc = 0x140e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e10: 0xdfbf0008
    ctx->pc = 0x140e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140e14: 0xdfb00000
    ctx->pc = 0x140e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140e18: 0x3e00008
    ctx->pc = 0x140E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140E20u;
    // 0x140e20: 0x27bdffe0
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140e24: 0x3c020026
    ctx->pc = 0x140e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140e28: 0xffb00000
    ctx->pc = 0x140e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140e2c: 0x3c100026
    ctx->pc = 0x140e2cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140e30: 0x24424600
    ctx->pc = 0x140e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140e34: 0xffb10008
    ctx->pc = 0x140e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140e38: 0xffbf0010
    ctx->pc = 0x140e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140e3c: 0x26104700
    ctx->pc = 0x140e3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140e40: 0xac440000
    ctx->pc = 0x140e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140e44: 0x2404002a
    ctx->pc = 0x140e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 42));
    // 0x140e48: 0xac450004
    ctx->pc = 0x140e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140e4c: 0x40282d
    ctx->pc = 0x140e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e50: 0xac460008
    ctx->pc = 0x140e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x140e54: 0x24060003
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x140e58: 0xe0882d
    ctx->pc = 0x140e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e5c: 0x200382d
    ctx->pc = 0x140e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e60: 0xc04e518
    ctx->pc = 0x140E60u;
    SET_GPR_U32(ctx, 31, 0x140E68u);
    ctx->pc = 0x140E64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E68u; }
    }
    if (ctx->pc != 0x140E68u) { return; }
    ctx->pc = 0x140E68u;
    // 0x140e68: 0x8e030004
    ctx->pc = 0x140e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140e6c: 0xdfbf0010
    ctx->pc = 0x140e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140e70: 0xae230000
    ctx->pc = 0x140e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x140e74: 0xdfb10008
    ctx->pc = 0x140e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140e78: 0x8e020000
    ctx->pc = 0x140e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e7c: 0xdfb00000
    ctx->pc = 0x140e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140e80: 0x3e00008
    ctx->pc = 0x140E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140E88u;
}
