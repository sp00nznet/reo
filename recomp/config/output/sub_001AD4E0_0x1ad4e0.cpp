#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD4E0
// Address: 0x1ad4e0 - 0x1ad5c0
void sub_001AD4E0_0x1ad4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad4e0u;

    // 0x1ad4e0: 0x27bdffd0
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad4e4: 0x3c01002b
    ctx->pc = 0x1ad4e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad4e8: 0xffbf0020
    ctx->pc = 0x1ad4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad4ec: 0x7fb10010
    ctx->pc = 0x1ad4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad4f0: 0x7fb00000
    ctx->pc = 0x1ad4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad4f4: 0x8c25382c
    ctx->pc = 0x1ad4f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 14380)));
    // 0x1ad4f8: 0x80802d
    ctx->pc = 0x1ad4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4fc: 0x8c820008
    ctx->pc = 0x1ad4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ad500: 0x8c86000c
    ctx->pc = 0x1ad500u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ad504: 0x3c01002b
    ctx->pc = 0x1ad504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad508: 0x8c233824
    ctx->pc = 0x1ad508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 14372)));
    // 0x1ad50c: 0xa38821
    ctx->pc = 0x1ad50cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ad510: 0x822821
    ctx->pc = 0x1ad510u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ad514: 0xc041eac
    ctx->pc = 0x1AD514u;
    SET_GPR_U32(ctx, 31, 0x1AD51Cu);
    ctx->pc = 0x1AD518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD51Cu; }
    }
    if (ctx->pc != 0x1AD51Cu) { return; }
    ctx->pc = 0x1AD51Cu;
    // 0x1ad51c: 0x3c01002b
    ctx->pc = 0x1ad51cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad520: 0x3c02002b
    ctx->pc = 0x1ad520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1ad524: 0x8c233810
    ctx->pc = 0x1ad524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 14352)));
    // 0x1ad528: 0x24423814
    ctx->pc = 0x1ad528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14356));
    // 0x1ad52c: 0x31880
    ctx->pc = 0x1ad52cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad530: 0x3c01002b
    ctx->pc = 0x1ad530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad534: 0x431021
    ctx->pc = 0x1ad534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad538: 0xac510000
    ctx->pc = 0x1ad538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1ad53c: 0x8c243830
    ctx->pc = 0x1ad53cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ad540: 0x8e020010
    ctx->pc = 0x1ad540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ad544: 0x8e060014
    ctx->pc = 0x1ad544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ad548: 0x3c01002b
    ctx->pc = 0x1ad548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad54c: 0x8c233828
    ctx->pc = 0x1ad54cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 14376)));
    // 0x1ad550: 0x2022821
    ctx->pc = 0x1ad550u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad554: 0xc041eac
    ctx->pc = 0x1AD554u;
    SET_GPR_U32(ctx, 31, 0x1AD55Cu);
    ctx->pc = 0x1AD558u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD55Cu; }
    }
    if (ctx->pc != 0x1AD55Cu) { return; }
    ctx->pc = 0x1AD55Cu;
    // 0x1ad55c: 0x3c01002b
    ctx->pc = 0x1ad55cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad560: 0x8e04000c
    ctx->pc = 0x1ad560u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ad564: 0x8c263824
    ctx->pc = 0x1ad564u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 14372)));
    // 0x1ad568: 0x3c01002b
    ctx->pc = 0x1ad568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad56c: 0xc42021
    ctx->pc = 0x1ad56cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ad570: 0x8c253828
    ctx->pc = 0x1ad570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 14376)));
    // 0x1ad574: 0x3c01002b
    ctx->pc = 0x1ad574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad578: 0x8c233810
    ctx->pc = 0x1ad578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 14352)));
    // 0x1ad57c: 0x3c01002b
    ctx->pc = 0x1ad57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad580: 0x24630001
    ctx->pc = 0x1ad580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad584: 0xac243824
    ctx->pc = 0x1ad584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14372), GPR_U32(ctx, 4));
    // 0x1ad588: 0x8e040014
    ctx->pc = 0x1ad588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ad58c: 0x3c01002b
    ctx->pc = 0x1ad58cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad590: 0xac233810
    ctx->pc = 0x1ad590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14352), GPR_U32(ctx, 3));
    // 0x1ad594: 0xa42021
    ctx->pc = 0x1ad594u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ad598: 0x3c01002b
    ctx->pc = 0x1ad598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad59c: 0xac243828
    ctx->pc = 0x1ad59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14376), GPR_U32(ctx, 4));
    // 0x1ad5a0: 0xdfbf0020
    ctx->pc = 0x1ad5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5a4: 0x7bb10010
    ctx->pc = 0x1ad5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad5a8: 0x7bb00000
    ctx->pc = 0x1ad5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad5ac: 0x3e00008
    ctx->pc = 0x1AD5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD5B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD5B4u;
    // 0x1ad5b4: 0x0
    ctx->pc = 0x1ad5b4u;
    // NOP
    // 0x1ad5b8: 0x0
    ctx->pc = 0x1ad5b8u;
    // NOP
    // 0x1ad5bc: 0x0
    ctx->pc = 0x1ad5bcu;
    // NOP
}
