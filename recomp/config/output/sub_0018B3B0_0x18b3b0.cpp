#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018B3B0
// Address: 0x18b3b0 - 0x18b4a0
void sub_0018B3B0_0x18b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18b3b0u;

    // 0x18b3b0: 0x27bdff70
    ctx->pc = 0x18b3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18b3b4: 0x3c020023
    ctx->pc = 0x18b3b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x18b3b8: 0xffbf0080
    ctx->pc = 0x18b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18b3bc: 0x61880
    ctx->pc = 0x18b3bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x18b3c0: 0x7fb70070
    ctx->pc = 0x18b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18b3c4: 0x2442fd40
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x18b3c8: 0x7fb60060
    ctx->pc = 0x18b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18b3cc: 0x431821
    ctx->pc = 0x18b3ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b3d0: 0x7fb50050
    ctx->pc = 0x18b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b3d4: 0xa0b02d
    ctx->pc = 0x18b3d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3d8: 0x7fb40040
    ctx->pc = 0x18b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b3dc: 0xc0a82d
    ctx->pc = 0x18b3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3e0: 0x7fb30030
    ctx->pc = 0x18b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b3e4: 0xe0a02d
    ctx->pc = 0x18b3e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3e8: 0x7fb20020
    ctx->pc = 0x18b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b3ec: 0x100982d
    ctx->pc = 0x18b3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3f0: 0x7fb10010
    ctx->pc = 0x18b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b3f4: 0x902d
    ctx->pc = 0x18b3f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3f8: 0x7fb00000
    ctx->pc = 0x18b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b3fc: 0x8c900020
    ctx->pc = 0x18b3fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18b400: 0x8c82002c
    ctx->pc = 0x18b400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x18b404: 0x8c710000
    ctx->pc = 0x18b404u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b408: 0x1000000b
    ctx->pc = 0x18B408u;
    {
        const bool branch_taken_0x18b408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18B40Cu;
        SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x18b408) {
            ctx->pc = 0x18B438u;
            goto label_18b438;
        }
    }
    ctx->pc = 0x18B410u;
label_18b410:
    // 0x18b410: 0x280282d
    ctx->pc = 0x18b410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b414: 0x90470000
    ctx->pc = 0x18b414u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b418: 0x2a0302d
    ctx->pc = 0x18b418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b41c: 0x71080
    ctx->pc = 0x18b41cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x18b420: 0x2e21021
    ctx->pc = 0x18b420u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x18b424: 0x8c420000
    ctx->pc = 0x18b424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b428: 0xc062d28
    ctx->pc = 0x18B428u;
    SET_GPR_U32(ctx, 31, 0x18B430u);
    ctx->pc = 0x18B42Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x18B4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B4A0_0x18b4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B430u; }
    }
    if (ctx->pc != 0x18B430u) { return; }
    ctx->pc = 0x18B430u;
    // 0x18b430: 0x291a021
    ctx->pc = 0x18b430u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x18b434: 0x26520001
    ctx->pc = 0x18b434u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_18b438:
    // 0x18b438: 0x256102a
    ctx->pc = 0x18b438u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 22)));
    // 0x18b43c: 0x1440fff4
    ctx->pc = 0x18B43Cu;
    {
        const bool branch_taken_0x18b43c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18B440u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        if (branch_taken_0x18b43c) {
            ctx->pc = 0x18B410u;
            goto label_18b410;
        }
    }
    ctx->pc = 0x18B444u;
    // 0x18b444: 0x24050001
    ctx->pc = 0x18b444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b448: 0x280202d
    ctx->pc = 0x18b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b44c: 0xa0302d
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b450: 0xc0631f0
    ctx->pc = 0x18B450u;
    SET_GPR_U32(ctx, 31, 0x18B458u);
    ctx->pc = 0x18B454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7C0_0x18c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B458u; }
    }
    if (ctx->pc != 0x18B458u) { return; }
    ctx->pc = 0x18B458u;
    // 0x18b458: 0xae800008
    ctx->pc = 0x18b458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x18b45c: 0xae80000c
    ctx->pc = 0x18b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x18b460: 0xae800010
    ctx->pc = 0x18b460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x18b464: 0xae800014
    ctx->pc = 0x18b464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x18b468: 0xae800018
    ctx->pc = 0x18b468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x18b46c: 0xae80001c
    ctx->pc = 0x18b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x18b470: 0xdfbf0080
    ctx->pc = 0x18b470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b474: 0x7bb70070
    ctx->pc = 0x18b474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b478: 0x7bb60060
    ctx->pc = 0x18b478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b47c: 0x7bb50050
    ctx->pc = 0x18b47cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b480: 0x7bb40040
    ctx->pc = 0x18b480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b484: 0x7bb30030
    ctx->pc = 0x18b484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b488: 0x7bb20020
    ctx->pc = 0x18b488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b48c: 0x7bb10010
    ctx->pc = 0x18b48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b490: 0x7bb00000
    ctx->pc = 0x18b490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b494: 0x3e00008
    ctx->pc = 0x18B494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B410u: goto label_18b410;
            case 0x18B438u: goto label_18b438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B49Cu;
    // 0x18b49c: 0x0
    ctx->pc = 0x18b49cu;
    // NOP
}
