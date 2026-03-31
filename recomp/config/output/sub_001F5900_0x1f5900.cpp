#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F5900
// Address: 0x1f5900 - 0x1f5b50
void sub_001F5900_0x1f5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f5900u;

    // 0x1f5900: 0x27bdffe0
    ctx->pc = 0x1f5900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5904: 0x3c010036
    ctx->pc = 0x1f5904u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5908: 0xffbf0010
    ctx->pc = 0x1f5908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f590c: 0x7fb00000
    ctx->pc = 0x1f590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5910: 0x8c22eaf0
    ctx->pc = 0x1f5910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5914: 0x10400025
    ctx->pc = 0x1F5914u;
    {
        const bool branch_taken_0x1f5914 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5918u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5914) {
            ctx->pc = 0x1F59ACu;
            goto label_1f59ac;
        }
    }
    ctx->pc = 0x1F591Cu;
    // 0x1f591c: 0x2405000c
    ctx->pc = 0x1f591cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f5920: 0x24060001
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5924: 0xc07d284
    ctx->pc = 0x1F5924u;
    SET_GPR_U32(ctx, 31, 0x1F592Cu);
    ctx->pc = 0x1F5928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F592Cu; }
    }
    if (ctx->pc != 0x1F592Cu) { return; }
    ctx->pc = 0x1F592Cu;
    // 0x1f592c: 0x3c040026
    ctx->pc = 0x1f592cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1f5930: 0xc042c56
    ctx->pc = 0x1F5930u;
    SET_GPR_U32(ctx, 31, 0x1F5938u);
    ctx->pc = 0x1F5934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941496));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5938u; }
    }
    if (ctx->pc != 0x1F5938u) { return; }
    ctx->pc = 0x1F5938u;
    // 0x1f5938: 0x3c050026
    ctx->pc = 0x1f5938u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f593c: 0x40302d
    ctx->pc = 0x1f593cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5940: 0x200202d
    ctx->pc = 0x1f5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5944: 0xc07d330
    ctx->pc = 0x1F5944u;
    SET_GPR_U32(ctx, 31, 0x1F594Cu);
    ctx->pc = 0x1F5948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941496));
    ctx->pc = 0x1F4CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4CC0_0x1f4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F594Cu; }
    }
    if (ctx->pc != 0x1F594Cu) { return; }
    ctx->pc = 0x1F594Cu;
    // 0x1f594c: 0x9603002c
    ctx->pc = 0x1f594cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f5950: 0x8e02001c
    ctx->pc = 0x1f5950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f5954: 0x32200
    ctx->pc = 0x1f5954u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f5958: 0x31a03
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f595c: 0x3084ff00
    ctx->pc = 0x1f595cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f5960: 0x306300ff
    ctx->pc = 0x1f5960u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f5964: 0x831825
    ctx->pc = 0x1f5964u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5968: 0xa4430000
    ctx->pc = 0x1f5968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f596c: 0x8e02002c
    ctx->pc = 0x1f596cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f5970: 0x8e040010
    ctx->pc = 0x1f5970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f5974: 0x8e05001c
    ctx->pc = 0x1f5974u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f5978: 0x24420008
    ctx->pc = 0x1f5978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f597c: 0x2343c
    ctx->pc = 0x1f597cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5980: 0xc075aa4
    ctx->pc = 0x1F5980u;
    SET_GPR_U32(ctx, 31, 0x1F5988u);
    ctx->pc = 0x1F5984u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5988u; }
    }
    if (ctx->pc != 0x1F5988u) { return; }
    ctx->pc = 0x1F5988u;
    // 0x1f5988: 0xc07d16c
    ctx->pc = 0x1F5988u;
    SET_GPR_U32(ctx, 31, 0x1F5990u);
    ctx->pc = 0x1F598Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5990u; }
    }
    if (ctx->pc != 0x1F5990u) { return; }
    ctx->pc = 0x1F5990u;
    // 0x1f5990: 0x2841ffff
    ctx->pc = 0x1f5990u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f5994: 0x10200003
    ctx->pc = 0x1F5994u;
    {
        const bool branch_taken_0x1f5994 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f5994) {
            ctx->pc = 0x1F59A4u;
            goto label_1f59a4;
        }
    }
    ctx->pc = 0x1F599Cu;
    // 0x1f599c: 0x10000005
    ctx->pc = 0x1F599Cu;
    {
        const bool branch_taken_0x1f599c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F59A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f599c) {
            ctx->pc = 0x1F59B4u;
            goto label_1f59b4;
        }
    }
    ctx->pc = 0x1F59A4u;
label_1f59a4:
    // 0x1f59a4: 0x24020009
    ctx->pc = 0x1f59a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f59a8: 0xa2020001
    ctx->pc = 0x1f59a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f59ac:
    // 0x1f59ac: 0x102d
    ctx->pc = 0x1f59acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59b0: 0xdfbf0010
    ctx->pc = 0x1f59b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f59b4:
    // 0x1f59b4: 0x7bb00000
    ctx->pc = 0x1f59b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f59b8: 0x3e00008
    ctx->pc = 0x1F59B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F59BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F59A4u: goto label_1f59a4;
            case 0x1F59ACu: goto label_1f59ac;
            case 0x1F59B4u: goto label_1f59b4;
            case 0x1F5A28u: goto label_1f5a28;
            case 0x1F5A48u: goto label_1f5a48;
            case 0x1F5A8Cu: goto label_1f5a8c;
            case 0x1F5ABCu: goto label_1f5abc;
            case 0x1F5AC4u: goto label_1f5ac4;
            case 0x1F5B00u: goto label_1f5b00;
            case 0x1F5B30u: goto label_1f5b30;
            case 0x1F5B34u: goto label_1f5b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F59C0u;
    // 0x1f59c0: 0x27bdffc0
    ctx->pc = 0x1f59c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f59c4: 0x3c010036
    ctx->pc = 0x1f59c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f59c8: 0xffbf0030
    ctx->pc = 0x1f59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f59cc: 0x7fb20020
    ctx->pc = 0x1f59ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f59d0: 0x7fb10010
    ctx->pc = 0x1f59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f59d4: 0x7fb00000
    ctx->pc = 0x1f59d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f59d8: 0x8c22eaf0
    ctx->pc = 0x1f59d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f59dc: 0x8c830024
    ctx->pc = 0x1f59dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f59e0: 0x10400053
    ctx->pc = 0x1F59E0u;
    {
        const bool branch_taken_0x1f59e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F59E4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f59e0) {
            ctx->pc = 0x1F5B30u;
            goto label_1f5b30;
        }
    }
    ctx->pc = 0x1F59E8u;
    // 0x1f59e8: 0x80630006
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1f59ec: 0x2402ffff
    ctx->pc = 0x1f59ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f59f0: 0x1462000d
    ctx->pc = 0x1F59F0u;
    {
        const bool branch_taken_0x1f59f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F59F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1f59f0) {
            ctx->pc = 0x1F5A28u;
            goto label_1f5a28;
        }
    }
    ctx->pc = 0x1F59F8u;
    // 0x1f59f8: 0x24030007
    ctx->pc = 0x1f59f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f59fc: 0xae42008c
    ctx->pc = 0x1f59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x1f5a00: 0xa2430000
    ctx->pc = 0x1f5a00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5a04: 0x102d
    ctx->pc = 0x1f5a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a08: 0xa2400001
    ctx->pc = 0x1f5a08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a0c: 0xa2400002
    ctx->pc = 0x1f5a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a10: 0xa2400003
    ctx->pc = 0x1f5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a14: 0xa6400004
    ctx->pc = 0x1f5a14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a18: 0xa6400006
    ctx->pc = 0x1f5a18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a1c: 0xa6400008
    ctx->pc = 0x1f5a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a20: 0x10000044
    ctx->pc = 0x1F5A20u;
    {
        const bool branch_taken_0x1f5a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5A24u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f5a20) {
            ctx->pc = 0x1F5B34u;
            goto label_1f5b34;
        }
    }
    ctx->pc = 0x1F5A28u;
label_1f5a28:
    // 0x1f5a28: 0xc07d1f8
    ctx->pc = 0x1F5A28u;
    SET_GPR_U32(ctx, 31, 0x1F5A30u);
    ctx->pc = 0x1F47E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47E0_0x1f47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A30u; }
    }
    if (ctx->pc != 0x1F5A30u) { return; }
    ctx->pc = 0x1F5A30u;
    // 0x1f5a30: 0x304200ff
    ctx->pc = 0x1f5a30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1f5a34: 0x14400004
    ctx->pc = 0x1F5A34u;
    {
        const bool branch_taken_0x1f5a34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5A38u;
        SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
        if (branch_taken_0x1f5a34) {
            ctx->pc = 0x1F5A48u;
            goto label_1f5a48;
        }
    }
    ctx->pc = 0x1F5A3Cu;
    // 0x1f5a3c: 0x24020012
    ctx->pc = 0x1f5a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f5a40: 0x1000003b
    ctx->pc = 0x1F5A40u;
    {
        const bool branch_taken_0x1f5a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5A44u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f5a40) {
            ctx->pc = 0x1F5B30u;
            goto label_1f5b30;
        }
    }
    ctx->pc = 0x1F5A48u;
label_1f5a48:
    // 0x1f5a48: 0x240202d
    ctx->pc = 0x1f5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a4c: 0x24a5ebf0
    ctx->pc = 0x1f5a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x1f5a50: 0xc07d244
    ctx->pc = 0x1F5A50u;
    SET_GPR_U32(ctx, 31, 0x1F5A58u);
    ctx->pc = 0x1F5A54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A58u; }
    }
    if (ctx->pc != 0x1F5A58u) { return; }
    ctx->pc = 0x1F5A58u;
    // 0x1f5a58: 0x441000c
    ctx->pc = 0x1F5A58u;
    {
        const bool branch_taken_0x1f5a58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5A5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a58) {
            ctx->pc = 0x1F5A8Cu;
            goto label_1f5a8c;
        }
    }
    ctx->pc = 0x1F5A60u;
    // 0x1f5a60: 0x2403ffff
    ctx->pc = 0x1f5a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5a64: 0x24020007
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5a68: 0xae43008c
    ctx->pc = 0x1f5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    // 0x1f5a6c: 0xa2420000
    ctx->pc = 0x1f5a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5a70: 0xa2400001
    ctx->pc = 0x1f5a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a74: 0xa2400002
    ctx->pc = 0x1f5a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a78: 0xa2400003
    ctx->pc = 0x1f5a78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a7c: 0xa6400004
    ctx->pc = 0x1f5a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a80: 0xa6400006
    ctx->pc = 0x1f5a80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a84: 0xa6400008
    ctx->pc = 0x1f5a84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5a88: 0xa640000a
    ctx->pc = 0x1f5a88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f5a8c:
    // 0x1f5a8c: 0xc07d20c
    ctx->pc = 0x1F5A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A94u);
    ctx->pc = 0x1F4830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4830_0x1f4830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A94u; }
    }
    if (ctx->pc != 0x1F5A94u) { return; }
    ctx->pc = 0x1F5A94u;
    // 0x1f5a94: 0x3c010036
    ctx->pc = 0x1f5a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5a98: 0xa422ebe0
    ctx->pc = 0x1f5a98u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f5a9c: 0x3c010036
    ctx->pc = 0x1f5a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5aa0: 0x9422ebe0
    ctx->pc = 0x1f5aa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962144)));
    // 0x1f5aa4: 0x28410004
    ctx->pc = 0x1f5aa4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1f5aa8: 0x14200004
    ctx->pc = 0x1F5AA8u;
    {
        const bool branch_taken_0x1f5aa8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5AACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5aa8) {
            ctx->pc = 0x1F5ABCu;
            goto label_1f5abc;
        }
    }
    ctx->pc = 0x1F5AB0u;
    // 0x1f5ab0: 0x24020003
    ctx->pc = 0x1f5ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5ab4: 0x3c010036
    ctx->pc = 0x1f5ab4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5ab8: 0xa422ebe0
    ctx->pc = 0x1f5ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962144), (uint16_t)GPR_U32(ctx, 2));
label_1f5abc:
    // 0x1f5abc: 0x10000010
    ctx->pc = 0x1F5ABCu;
    {
        const bool branch_taken_0x1f5abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f5abc) {
            ctx->pc = 0x1F5B00u;
            goto label_1f5b00;
        }
    }
    ctx->pc = 0x1F5AC4u;
label_1f5ac4:
    // 0x1f5ac4: 0xc07d224
    ctx->pc = 0x1F5AC4u;
    SET_GPR_U32(ctx, 31, 0x1F5ACCu);
    ctx->pc = 0x1F5AC8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5ACCu; }
    }
    if (ctx->pc != 0x1F5ACCu) { return; }
    ctx->pc = 0x1F5ACCu;
    // 0x1f5acc: 0x3c030036
    ctx->pc = 0x1f5accu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x1f5ad0: 0x112340
    ctx->pc = 0x1f5ad0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 13));
    // 0x1f5ad4: 0x2463ebe0
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x1f5ad8: 0x26310001
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f5adc: 0x702821
    ctx->pc = 0x1f5adcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f5ae0: 0xaca20004
    ctx->pc = 0x1f5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1f5ae4: 0x3c030035
    ctx->pc = 0x1f5ae4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1f5ae8: 0x3c020036
    ctx->pc = 0x1f5ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x1f5aec: 0x24637ad0
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31440));
    // 0x1f5af0: 0x2442ec78
    ctx->pc = 0x1f5af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962296));
    // 0x1f5af4: 0x641821
    ctx->pc = 0x1f5af4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5af8: 0x501021
    ctx->pc = 0x1f5af8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f5afc: 0xac430000
    ctx->pc = 0x1f5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f5b00:
    // 0x1f5b00: 0x3c010036
    ctx->pc = 0x1f5b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b04: 0x9422ebe0
    ctx->pc = 0x1f5b04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962144)));
    // 0x1f5b08: 0x222102a
    ctx->pc = 0x1f5b08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1f5b0c: 0x1440ffed
    ctx->pc = 0x1F5B0Cu;
    {
        const bool branch_taken_0x1f5b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5B10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b0c) {
            ctx->pc = 0x1F5AC4u;
            goto label_1f5ac4;
        }
    }
    ctx->pc = 0x1F5B14u;
    // 0x1f5b14: 0xae40003c
    ctx->pc = 0x1f5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1f5b18: 0x3c010036
    ctx->pc = 0x1f5b18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b1c: 0xac20ec14
    ctx->pc = 0x1f5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962196), GPR_U32(ctx, 0));
    // 0x1f5b20: 0x2402000a
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5b24: 0x3c010036
    ctx->pc = 0x1f5b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b28: 0xa020ec10
    ctx->pc = 0x1f5b28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962192), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5b2c: 0xa2420001
    ctx->pc = 0x1f5b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f5b30:
    // 0x1f5b30: 0x102d
    ctx->pc = 0x1f5b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b34:
    // 0x1f5b34: 0xdfbf0030
    ctx->pc = 0x1f5b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5b38: 0x7bb20020
    ctx->pc = 0x1f5b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b3c: 0x7bb10010
    ctx->pc = 0x1f5b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5b40: 0x7bb00000
    ctx->pc = 0x1f5b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5b44: 0x3e00008
    ctx->pc = 0x1F5B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F59A4u: goto label_1f59a4;
            case 0x1F59ACu: goto label_1f59ac;
            case 0x1F59B4u: goto label_1f59b4;
            case 0x1F5A28u: goto label_1f5a28;
            case 0x1F5A48u: goto label_1f5a48;
            case 0x1F5A8Cu: goto label_1f5a8c;
            case 0x1F5ABCu: goto label_1f5abc;
            case 0x1F5AC4u: goto label_1f5ac4;
            case 0x1F5B00u: goto label_1f5b00;
            case 0x1F5B30u: goto label_1f5b30;
            case 0x1F5B34u: goto label_1f5b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5B4Cu;
    // 0x1f5b4c: 0x0
    ctx->pc = 0x1f5b4cu;
    // NOP
}
