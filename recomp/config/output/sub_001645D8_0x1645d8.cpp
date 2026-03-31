#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001645D8
// Address: 0x1645d8 - 0x164648
void sub_001645D8_0x1645d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1645d8u;

    // 0x1645d8: 0x27bdfff0
    ctx->pc = 0x1645d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1645dc: 0xffbf0000
    ctx->pc = 0x1645dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1645e0: 0xdfbf0000
    ctx->pc = 0x1645e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645e4: 0x804c108
    ctx->pc = 0x1645E4u;
    ctx->pc = 0x1645E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130420u;
    sub_00130420_0x130420(rdram, ctx, runtime); return;
    ctx->pc = 0x1645ECu;
    // 0x1645ec: 0x0
    ctx->pc = 0x1645ecu;
    // NOP
    // 0x1645f0: 0x27bdffe0
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1645f4: 0xffb00000
    ctx->pc = 0x1645f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1645f8: 0xa0802d
    ctx->pc = 0x1645f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645fc: 0xffb10008
    ctx->pc = 0x1645fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164600: 0xffbf0010
    ctx->pc = 0x164600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164604: 0xc04c148
    ctx->pc = 0x164604u;
    SET_GPR_U32(ctx, 31, 0x16460Cu);
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130520_0x130520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16460Cu; }
    }
    if (ctx->pc != 0x16460Cu) { return; }
    ctx->pc = 0x16460Cu;
    // 0x16460c: 0x3c08000f
    ctx->pc = 0x16460cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)15 << 16));
    // 0x164610: 0x220202d
    ctx->pc = 0x164610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164614: 0x200282d
    ctx->pc = 0x164614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164618: 0x302d
    ctx->pc = 0x164618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16461c: 0x382d
    ctx->pc = 0x16461cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164620: 0xc04c11e
    ctx->pc = 0x164620u;
    SET_GPR_U32(ctx, 31, 0x164628u);
    ctx->pc = 0x164624u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    ctx->pc = 0x130478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130478_0x130478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164628u; }
    }
    if (ctx->pc != 0x164628u) { return; }
    ctx->pc = 0x164628u;
    // 0x164628: 0x220202d
    ctx->pc = 0x164628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16462c: 0x3c05000f
    ctx->pc = 0x16462cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
    // 0x164630: 0xdfb00000
    ctx->pc = 0x164630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164634: 0xdfb10008
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164638: 0x34a5ffff
    ctx->pc = 0x164638u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x16463c: 0xdfbf0010
    ctx->pc = 0x16463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164640: 0x804c1ea
    ctx->pc = 0x164640u;
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1307A8u;
    sub_001307A8_0x1307a8(rdram, ctx, runtime); return;
    ctx->pc = 0x164648u;
}
