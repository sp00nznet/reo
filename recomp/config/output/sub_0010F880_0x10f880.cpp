#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010F880
// Address: 0x10f880 - 0x10f930
void sub_0010F880_0x10f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f880u;

    // 0x10f880: 0x3c020021
    ctx->pc = 0x10f880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x10f884: 0x27bdff90
    ctx->pc = 0x10f884u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10f888: 0x8c4897f0
    ctx->pc = 0x10f888u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x10f88c: 0x24020208
    ctx->pc = 0x10f88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x10f890: 0x3c037fff
    ctx->pc = 0x10f890u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x10f894: 0x80382d
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f898: 0x3463ffff
    ctx->pc = 0x10f898u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x10f89c: 0x3a0202d
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8a0: 0xffbf0060
    ctx->pc = 0x10f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10f8a4: 0xafa30014
    ctx->pc = 0x10f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x10f8a8: 0xafa30008
    ctx->pc = 0x10f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10f8ac: 0xa7a2000c
    ctx->pc = 0x10f8acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10f8b0: 0xafa70010
    ctx->pc = 0x10f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x10f8b4: 0xafa80054
    ctx->pc = 0x10f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x10f8b8: 0xc04345a
    ctx->pc = 0x10F8B8u;
    SET_GPR_U32(ctx, 31, 0x10F8C0u);
    ctx->pc = 0x10F8BCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F8C0u; }
    }
    if (ctx->pc != 0x10F8C0u) { return; }
    ctx->pc = 0x10F8C0u;
    // 0x10f8c0: 0x8fa30000
    ctx->pc = 0x10f8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f8c4: 0xdfbf0060
    ctx->pc = 0x10f8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f8c8: 0xa0600000
    ctx->pc = 0x10f8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f8cc: 0x3e00008
    ctx->pc = 0x10F8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F8D4u;
    // 0x10f8d4: 0x0
    ctx->pc = 0x10f8d4u;
    // NOP
    // 0x10f8d8: 0x27bdff90
    ctx->pc = 0x10f8d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10f8dc: 0x3c037fff
    ctx->pc = 0x10f8dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x10f8e0: 0xa0402d
    ctx->pc = 0x10f8e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8e4: 0xc0282d
    ctx->pc = 0x10f8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8e8: 0x3463ffff
    ctx->pc = 0x10f8e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x10f8ec: 0xafa40054
    ctx->pc = 0x10f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x10f8f0: 0xe0302d
    ctx->pc = 0x10f8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8f4: 0x24020208
    ctx->pc = 0x10f8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x10f8f8: 0x3a0202d
    ctx->pc = 0x10f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8fc: 0xffbf0060
    ctx->pc = 0x10f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10f900: 0xafa30014
    ctx->pc = 0x10f900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x10f904: 0xafa30008
    ctx->pc = 0x10f904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10f908: 0xa7a2000c
    ctx->pc = 0x10f908u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10f90c: 0xafa80010
    ctx->pc = 0x10f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x10f910: 0xc04345a
    ctx->pc = 0x10F910u;
    SET_GPR_U32(ctx, 31, 0x10F918u);
    ctx->pc = 0x10F914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F918u; }
    }
    if (ctx->pc != 0x10F918u) { return; }
    ctx->pc = 0x10F918u;
    // 0x10f918: 0x8fa30000
    ctx->pc = 0x10f918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f91c: 0xdfbf0060
    ctx->pc = 0x10f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f920: 0xa0600000
    ctx->pc = 0x10f920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f924: 0x3e00008
    ctx->pc = 0x10F924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F928u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F92Cu;
    // 0x10f92c: 0x0
    ctx->pc = 0x10f92cu;
    // NOP
}
