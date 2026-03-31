#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C67E0
// Address: 0x1c67e0 - 0x1c6a40
void sub_001C67E0_0x1c67e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c67e0u;

    // 0x1c67e0: 0x27bdffc0
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c67e4: 0xffbf0030
    ctx->pc = 0x1c67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c67e8: 0x7fb20020
    ctx->pc = 0x1c67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c67ec: 0x7fb10010
    ctx->pc = 0x1c67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c67f0: 0xa0902d
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67f4: 0x7fb00000
    ctx->pc = 0x1c67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c67f8: 0x80882d
    ctx->pc = 0x1c67f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67fc: 0xc0802d
    ctx->pc = 0x1c67fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6800: 0x3c040033
    ctx->pc = 0x1c6800u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6804: 0x24845050
    ctx->pc = 0x1c6804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20560));
    // 0x1c6808: 0x282d
    ctx->pc = 0x1c6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c680c: 0xc041f1a
    ctx->pc = 0x1C680Cu;
    SET_GPR_U32(ctx, 31, 0x1C6814u);
    ctx->pc = 0x1C6810u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 364));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6814u; }
    }
    if (ctx->pc != 0x1C6814u) { return; }
    ctx->pc = 0x1C6814u;
    // 0x1c6814: 0x3c010033
    ctx->pc = 0x1c6814u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6818: 0x3c030033
    ctx->pc = 0x1c6818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x1c681c: 0xa0325054
    ctx->pc = 0x1c681cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20564), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c6820: 0x24040001
    ctx->pc = 0x1c6820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6824: 0x3c010033
    ctx->pc = 0x1c6824u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6828: 0x282d
    ctx->pc = 0x1c6828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c682c: 0xac315050
    ctx->pc = 0x1c682cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20560), GPR_U32(ctx, 17));
    // 0x1c6830: 0x24635050
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20560));
    // 0x1c6834: 0x3c010033
    ctx->pc = 0x1c6834u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6838: 0xa0305055
    ctx->pc = 0x1c6838u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20565), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c683c: 0x3c010033
    ctx->pc = 0x1c683cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6840: 0xa030505f
    ctx->pc = 0x1c6840u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20575), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c6844: 0x3c010033
    ctx->pc = 0x1c6844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6848: 0xa02451a1
    ctx->pc = 0x1c6848u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20897), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c684c: 0x3c010033
    ctx->pc = 0x1c684cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6850: 0xa02451a0
    ctx->pc = 0x1c6850u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20896), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6854: 0x3c010033
    ctx->pc = 0x1c6854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6858: 0xac2051d8
    ctx->pc = 0x1c6858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20952), GPR_U32(ctx, 0));
    // 0x1c685c: 0x3c010033
    ctx->pc = 0x1c685cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6860: 0xac2051d0
    ctx->pc = 0x1c6860u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20944), GPR_U32(ctx, 0));
    // 0x1c6864: 0x3c010033
    ctx->pc = 0x1c6864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6868: 0xac2051c0
    ctx->pc = 0x1c6868u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 0));
    // 0x1c686c: 0x3c010033
    ctx->pc = 0x1c686cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6870: 0xac2051c4
    ctx->pc = 0x1c6870u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20932), GPR_U32(ctx, 0));
    // 0x1c6874: 0x3c010033
    ctx->pc = 0x1c6874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6878: 0xac2051c8
    ctx->pc = 0x1c6878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20936), GPR_U32(ctx, 0));
    // 0x1c687c: 0x3c010033
    ctx->pc = 0x1c687cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6880: 0xac2051cc
    ctx->pc = 0x1c6880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20940), GPR_U32(ctx, 0));
    // 0x1c6884: 0x3c010023
    ctx->pc = 0x1c6884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c6888: 0xc4215f60
    ctx->pc = 0x1c6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 24416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c688c: 0x3c010033
    ctx->pc = 0x1c688cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6890: 0xc420af20
    ctx->pc = 0x1c6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6894: 0x3c010033
    ctx->pc = 0x1c6894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6898: 0xe42151e8
    ctx->pc = 0x1c6898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20968), bits); }
    // 0x1c689c: 0x3c010033
    ctx->pc = 0x1c689cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c68a0: 0x10000006
    ctx->pc = 0x1C68A0u;
    {
        const bool branch_taken_0x1c68a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C68A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20960), bits); }
        if (branch_taken_0x1c68a0) {
            ctx->pc = 0x1C68BCu;
            goto label_1c68bc;
        }
    }
    ctx->pc = 0x1C68A8u;
label_1c68a8:
    // 0x1c68a8: 0x451023
    ctx->pc = 0x1c68a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c68ac: 0x21080
    ctx->pc = 0x1c68acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c68b0: 0x24a50001
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c68b4: 0x621021
    ctx->pc = 0x1c68b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c68b8: 0xa044004c
    ctx->pc = 0x1c68b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 4));
label_1c68bc:
    // 0x1c68bc: 0x3c010033
    ctx->pc = 0x1c68bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c68c0: 0x90225055
    ctx->pc = 0x1c68c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20565)));
    // 0x1c68c4: 0xa2102a
    ctx->pc = 0x1c68c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1c68c8: 0x1440fff7
    ctx->pc = 0x1C68C8u;
    {
        const bool branch_taken_0x1c68c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C68CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1c68c8) {
            ctx->pc = 0x1C68A8u;
            goto label_1c68a8;
        }
    }
    ctx->pc = 0x1C68D0u;
    // 0x1c68d0: 0x3c040033
    ctx->pc = 0x1c68d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c68d4: 0x3c050033
    ctx->pc = 0x1c68d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c68d8: 0x24845030
    ctx->pc = 0x1c68d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20528));
    // 0x1c68dc: 0x24a54830
    ctx->pc = 0x1c68dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18480));
    // 0x1c68e0: 0xc071f34
    ctx->pc = 0x1C68E0u;
    SET_GPR_U32(ctx, 31, 0x1C68E8u);
    ctx->pc = 0x1C68E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68E8u; }
    }
    if (ctx->pc != 0x1C68E8u) { return; }
    ctx->pc = 0x1C68E8u;
    // 0x1c68e8: 0x3c040033
    ctx->pc = 0x1c68e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c68ec: 0x3c050033
    ctx->pc = 0x1c68ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c68f0: 0x24844810
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18448));
    // 0x1c68f4: 0x24a54010
    ctx->pc = 0x1c68f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16400));
    // 0x1c68f8: 0xc071f34
    ctx->pc = 0x1C68F8u;
    SET_GPR_U32(ctx, 31, 0x1C6900u);
    ctx->pc = 0x1C68FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6900u; }
    }
    if (ctx->pc != 0x1C6900u) { return; }
    ctx->pc = 0x1C6900u;
    // 0x1c6900: 0x3c040033
    ctx->pc = 0x1c6900u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6904: 0x3c050033
    ctx->pc = 0x1c6904u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c6908: 0x24843ff0
    ctx->pc = 0x1c6908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16368));
    // 0x1c690c: 0x24a53bf0
    ctx->pc = 0x1c690cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15344));
    // 0x1c6910: 0xc071f34
    ctx->pc = 0x1C6910u;
    SET_GPR_U32(ctx, 31, 0x1C6918u);
    ctx->pc = 0x1C6914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6918u; }
    }
    if (ctx->pc != 0x1C6918u) { return; }
    ctx->pc = 0x1C6918u;
    // 0x1c6918: 0x3c040033
    ctx->pc = 0x1c6918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c691c: 0x3c050033
    ctx->pc = 0x1c691cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c6920: 0x24843bd0
    ctx->pc = 0x1c6920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15312));
    // 0x1c6924: 0x24a537d0
    ctx->pc = 0x1c6924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14288));
    // 0x1c6928: 0xc071f34
    ctx->pc = 0x1C6928u;
    SET_GPR_U32(ctx, 31, 0x1C6930u);
    ctx->pc = 0x1C692Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6930u; }
    }
    if (ctx->pc != 0x1C6930u) { return; }
    ctx->pc = 0x1C6930u;
    // 0x1c6930: 0x3c040033
    ctx->pc = 0x1c6930u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6934: 0x3c050033
    ctx->pc = 0x1c6934u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c6938: 0x248437b0
    ctx->pc = 0x1c6938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    // 0x1c693c: 0x24a52fb0
    ctx->pc = 0x1c693cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12208));
    // 0x1c6940: 0xc071f34
    ctx->pc = 0x1C6940u;
    SET_GPR_U32(ctx, 31, 0x1C6948u);
    ctx->pc = 0x1C6944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6948u; }
    }
    if (ctx->pc != 0x1C6948u) { return; }
    ctx->pc = 0x1C6948u;
    // 0x1c6948: 0x3c040033
    ctx->pc = 0x1c6948u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c694c: 0x3c050033
    ctx->pc = 0x1c694cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c6950: 0x24842f90
    ctx->pc = 0x1c6950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12176));
    // 0x1c6954: 0x24a5ef90
    ctx->pc = 0x1c6954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963088));
    // 0x1c6958: 0xc071f34
    ctx->pc = 0x1C6958u;
    SET_GPR_U32(ctx, 31, 0x1C6960u);
    ctx->pc = 0x1C695Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6960u; }
    }
    if (ctx->pc != 0x1C6960u) { return; }
    ctx->pc = 0x1C6960u;
    // 0x1c6960: 0x1000000d
    ctx->pc = 0x1C6960u;
    {
        const bool branch_taken_0x1c6960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6964u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6960) {
            ctx->pc = 0x1C6998u;
            goto label_1c6998;
        }
    }
    ctx->pc = 0x1C6968u;
label_1c6968:
    // 0x1c6968: 0x3c040033
    ctx->pc = 0x1c6968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c696c: 0x501021
    ctx->pc = 0x1c696cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6970: 0x2484ef30
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962992));
    // 0x1c6974: 0x228c0
    ctx->pc = 0x1c6974u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c6978: 0x101b00
    ctx->pc = 0x1c6978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 12));
    // 0x1c697c: 0x3c020033
    ctx->pc = 0x1c697cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x1c6980: 0x852021
    ctx->pc = 0x1c6980u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c6984: 0x2442af30
    ctx->pc = 0x1c6984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946608));
    // 0x1c6988: 0x24061000
    ctx->pc = 0x1c6988u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c698c: 0xc071f34
    ctx->pc = 0x1C698Cu;
    SET_GPR_U32(ctx, 31, 0x1C6994u);
    ctx->pc = 0x1C6990u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6994u; }
    }
    if (ctx->pc != 0x1C6994u) { return; }
    ctx->pc = 0x1C6994u;
    // 0x1c6994: 0x26100001
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1c6998:
    // 0x1c6998: 0x3c010033
    ctx->pc = 0x1c6998u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c699c: 0x90225055
    ctx->pc = 0x1c699cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20565)));
    // 0x1c69a0: 0x202102a
    ctx->pc = 0x1c69a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1c69a4: 0x1440fff0
    ctx->pc = 0x1C69A4u;
    {
        const bool branch_taken_0x1c69a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C69A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1c69a4) {
            ctx->pc = 0x1C6968u;
            goto label_1c6968;
        }
    }
    ctx->pc = 0x1C69ACu;
    // 0x1c69ac: 0xc073044
    ctx->pc = 0x1C69ACu;
    SET_GPR_U32(ctx, 31, 0x1C69B4u);
    ctx->pc = 0x1C69B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC110_0x1cc110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69B4u; }
    }
    if (ctx->pc != 0x1C69B4u) { return; }
    ctx->pc = 0x1C69B4u;
    // 0x1c69b4: 0xc072214
    ctx->pc = 0x1C69B4u;
    SET_GPR_U32(ctx, 31, 0x1C69BCu);
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69BCu; }
    }
    if (ctx->pc != 0x1C69BCu) { return; }
    ctx->pc = 0x1C69BCu;
    // 0x1c69bc: 0x3c010033
    ctx->pc = 0x1c69bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c69c0: 0x3c040033
    ctx->pc = 0x1c69c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c69c4: 0xe4205068
    ctx->pc = 0x1c69c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20584), bits); }
    // 0x1c69c8: 0x282d
    ctx->pc = 0x1c69c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69cc: 0x3c010033
    ctx->pc = 0x1c69ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c69d0: 0x24845050
    ctx->pc = 0x1c69d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20560));
    // 0x1c69d4: 0x10000008
    ctx->pc = 0x1C69D4u;
    {
        const bool branch_taken_0x1c69d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C69D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20588), bits); }
        if (branch_taken_0x1c69d4) {
            ctx->pc = 0x1C69F8u;
            goto label_1c69f8;
        }
    }
    ctx->pc = 0x1C69DCu;
label_1c69dc:
    // 0x1c69dc: 0x51900
    ctx->pc = 0x1c69dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1c69e0: 0xc420506c
    ctx->pc = 0x1c69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c69e4: 0x651823
    ctx->pc = 0x1c69e4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c69e8: 0x31880
    ctx->pc = 0x1c69e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c69ec: 0x24a50001
    ctx->pc = 0x1c69ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c69f0: 0x831821
    ctx->pc = 0x1c69f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c69f4: 0xe4600054
    ctx->pc = 0x1c69f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_1c69f8:
    // 0x1c69f8: 0x3c010033
    ctx->pc = 0x1c69f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c69fc: 0x90235055
    ctx->pc = 0x1c69fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20565)));
    // 0x1c6a00: 0xa3182a
    ctx->pc = 0x1c6a00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1c6a04: 0x1460fff5
    ctx->pc = 0x1C6A04u;
    {
        const bool branch_taken_0x1c6a04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C6A08u;
        SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
        if (branch_taken_0x1c6a04) {
            ctx->pc = 0x1C69DCu;
            goto label_1c69dc;
        }
    }
    ctx->pc = 0x1C6A0Cu;
    // 0x1c6a0c: 0x3c010025
    ctx->pc = 0x1c6a0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)37 << 16));
    // 0x1c6a10: 0xc4202d78
    ctx->pc = 0x1c6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a14: 0x3c010033
    ctx->pc = 0x1c6a14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6a18: 0xe4205198
    ctx->pc = 0x1c6a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20888), bits); }
    // 0x1c6a1c: 0xdfbf0030
    ctx->pc = 0x1c6a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6a20: 0x7bb20020
    ctx->pc = 0x1c6a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6a24: 0x7bb10010
    ctx->pc = 0x1c6a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6a28: 0x7bb00000
    ctx->pc = 0x1c6a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a2c: 0x3e00008
    ctx->pc = 0x1C6A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C68A8u: goto label_1c68a8;
            case 0x1C68BCu: goto label_1c68bc;
            case 0x1C6968u: goto label_1c6968;
            case 0x1C6998u: goto label_1c6998;
            case 0x1C69DCu: goto label_1c69dc;
            case 0x1C69F8u: goto label_1c69f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6A34u;
    // 0x1c6a34: 0x0
    ctx->pc = 0x1c6a34u;
    // NOP
    // 0x1c6a38: 0x0
    ctx->pc = 0x1c6a38u;
    // NOP
    // 0x1c6a3c: 0x0
    ctx->pc = 0x1c6a3cu;
    // NOP
}
