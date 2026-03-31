#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B52B0
// Address: 0x1b52b0 - 0x1b55a0
void sub_001B52B0_0x1b52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b52b0u;

label_1b52b0:
    // 0x1b52b0: 0x27bdffa0
    ctx->pc = 0x1b52b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b52b4: 0xffbf0050
    ctx->pc = 0x1b52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b52b8: 0x7fb40040
    ctx->pc = 0x1b52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b52bc: 0x7fb30030
    ctx->pc = 0x1b52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b52c0: 0x80a02d
    ctx->pc = 0x1b52c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52c4: 0x7fb20020
    ctx->pc = 0x1b52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b52c8: 0xa0982d
    ctx->pc = 0x1b52c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52cc: 0x7fb10010
    ctx->pc = 0x1b52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b52d0: 0xc0902d
    ctx->pc = 0x1b52d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52d4: 0x7fb00000
    ctx->pc = 0x1b52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b52d8: 0xe0882d
    ctx->pc = 0x1b52d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52dc: 0x3c10002c
    ctx->pc = 0x1b52dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b52e0: 0x282d
    ctx->pc = 0x1b52e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52e4: 0x2610aa40
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945344));
    // 0x1b52e8: 0x240600a8
    ctx->pc = 0x1b52e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b52ec: 0xc041f1a
    ctx->pc = 0x1B52ECu;
    SET_GPR_U32(ctx, 31, 0x1B52F4u);
    ctx->pc = 0x1B52F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52F4u; }
    }
    if (ctx->pc != 0x1B52F4u) { return; }
    ctx->pc = 0x1B52F4u;
    // 0x1b52f4: 0x3c040031
    ctx->pc = 0x1b52f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1b52f8: 0x282d
    ctx->pc = 0x1b52f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52fc: 0x2484c040
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950976));
    // 0x1b5300: 0xc041f1a
    ctx->pc = 0x1B5300u;
    SET_GPR_U32(ctx, 31, 0x1B5308u);
    ctx->pc = 0x1B5304u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 37248));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5308u; }
    }
    if (ctx->pc != 0x1B5308u) { return; }
    ctx->pc = 0x1B5308u;
    // 0x1b5308: 0x3c040030
    ctx->pc = 0x1b5308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)48 << 16));
    // 0x1b530c: 0x282d
    ctx->pc = 0x1b530cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5310: 0x24842ec0
    ctx->pc = 0x1b5310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11968));
    // 0x1b5314: 0xc041f1a
    ctx->pc = 0x1B5314u;
    SET_GPR_U32(ctx, 31, 0x1B531Cu);
    ctx->pc = 0x1B5318u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 37248));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B531Cu; }
    }
    if (ctx->pc != 0x1B531Cu) { return; }
    ctx->pc = 0x1B531Cu;
    // 0x1b531c: 0x3c01002c
    ctx->pc = 0x1b531cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5320: 0x3c050023
    ctx->pc = 0x1b5320u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1b5324: 0xac34aa44
    ctx->pc = 0x1b5324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945348), GPR_U32(ctx, 20));
    // 0x1b5328: 0x34029180
    ctx->pc = 0x1b5328u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 37248));
    // 0x1b532c: 0x3c01002c
    ctx->pc = 0x1b532cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5330: 0x24a54590
    ctx->pc = 0x1b5330u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17808));
    // 0x1b5334: 0xac22aadc
    ctx->pc = 0x1b5334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945500), GPR_U32(ctx, 2));
    // 0x1b5338: 0x2403ffc0
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b533c: 0x3c01002c
    ctx->pc = 0x1b533cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5340: 0x3c020002
    ctx->pc = 0x1b5340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1b5344: 0x8c27aa44
    ctx->pc = 0x1b5344u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294945348)));
    // 0x1b5348: 0x3442703f
    ctx->pc = 0x1b5348u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 28735));
    // 0x1b534c: 0x2622021
    ctx->pc = 0x1b534cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b5350: 0x73040
    ctx->pc = 0x1b5350u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1b5354: 0x3c01002c
    ctx->pc = 0x1b5354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5358: 0xc73021
    ctx->pc = 0x1b5358u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b535c: 0x63080
    ctx->pc = 0x1b535cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b5360: 0xc73021
    ctx->pc = 0x1b5360u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b5364: 0x63080
    ctx->pc = 0x1b5364u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b5368: 0xa63021
    ctx->pc = 0x1b5368u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b536c: 0x8cc50000
    ctx->pc = 0x1b536cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b5370: 0xac25aa48
    ctx->pc = 0x1b5370u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945352), GPR_U32(ctx, 5));
    // 0x1b5374: 0x8cc50004
    ctx->pc = 0x1b5374u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b5378: 0x3c01002c
    ctx->pc = 0x1b5378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b537c: 0xac25aa4c
    ctx->pc = 0x1b537cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945356), GPR_U32(ctx, 5));
    // 0x1b5380: 0x8cc50008
    ctx->pc = 0x1b5380u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b5384: 0x3c01002c
    ctx->pc = 0x1b5384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5388: 0xac25aa50
    ctx->pc = 0x1b5388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945360), GPR_U32(ctx, 5));
    // 0x1b538c: 0x8cc5000c
    ctx->pc = 0x1b538cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b5390: 0x3c01002c
    ctx->pc = 0x1b5390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5394: 0xac25aa54
    ctx->pc = 0x1b5394u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945364), GPR_U32(ctx, 5));
    // 0x1b5398: 0x8cc50010
    ctx->pc = 0x1b5398u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1b539c: 0x3c01002c
    ctx->pc = 0x1b539cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53a0: 0xac25aa58
    ctx->pc = 0x1b53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945368), GPR_U32(ctx, 5));
    // 0x1b53a4: 0x8cc5001c
    ctx->pc = 0x1b53a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1b53a8: 0x3c01002c
    ctx->pc = 0x1b53a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53ac: 0xac25aa5c
    ctx->pc = 0x1b53acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945372), GPR_U32(ctx, 5));
    // 0x1b53b0: 0x8cc50020
    ctx->pc = 0x1b53b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1b53b4: 0x3c01002c
    ctx->pc = 0x1b53b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53b8: 0xac25aa60
    ctx->pc = 0x1b53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945376), GPR_U32(ctx, 5));
    // 0x1b53bc: 0x8cc50018
    ctx->pc = 0x1b53bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1b53c0: 0x3c01002c
    ctx->pc = 0x1b53c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53c4: 0xac25aa64
    ctx->pc = 0x1b53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945380), GPR_U32(ctx, 5));
    // 0x1b53c8: 0x3c01002c
    ctx->pc = 0x1b53c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53cc: 0xac32aaa0
    ctx->pc = 0x1b53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945440), GPR_U32(ctx, 18));
    // 0x1b53d0: 0x8cc50028
    ctx->pc = 0x1b53d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1b53d4: 0x3c01002c
    ctx->pc = 0x1b53d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53d8: 0xac25aacc
    ctx->pc = 0x1b53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945484), GPR_U32(ctx, 5));
    // 0x1b53dc: 0x8cc5002c
    ctx->pc = 0x1b53dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1b53e0: 0x3c01002c
    ctx->pc = 0x1b53e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53e4: 0xac25aad0
    ctx->pc = 0x1b53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945488), GPR_U32(ctx, 5));
    // 0x1b53e8: 0x8cc50030
    ctx->pc = 0x1b53e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1b53ec: 0x3c01002c
    ctx->pc = 0x1b53ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53f0: 0xac25aad4
    ctx->pc = 0x1b53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945492), GPR_U32(ctx, 5));
    // 0x1b53f4: 0x3c01002c
    ctx->pc = 0x1b53f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b53f8: 0xac33aa68
    ctx->pc = 0x1b53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945384), GPR_U32(ctx, 19));
    // 0x1b53fc: 0x839824
    ctx->pc = 0x1b53fcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b5400: 0x3c01002c
    ctx->pc = 0x1b5400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5404: 0xac33aa74
    ctx->pc = 0x1b5404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945396), GPR_U32(ctx, 19));
    // 0x1b5408: 0x8cc50014
    ctx->pc = 0x1b5408u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1b540c: 0x3c01002c
    ctx->pc = 0x1b540cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5410: 0x8c26aa74
    ctx->pc = 0x1b5410u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294945396)));
    // 0x1b5414: 0x1000000d
    ctx->pc = 0x1B5414u;
    {
        const bool branch_taken_0x1b5414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5418u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5414) {
            ctx->pc = 0x1B544Cu;
            goto label_1b544c;
        }
    }
    ctx->pc = 0x1B541Cu;
label_1b541c:
    // 0x1b541c: 0x90a40000
    ctx->pc = 0x1b541cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5420: 0x24e70001
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b5424: 0x28e30010
    ctx->pc = 0x1b5424u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 16));
    // 0x1b5428: 0xa0c40003
    ctx->pc = 0x1b5428u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b542c: 0x90a40001
    ctx->pc = 0x1b542cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b5430: 0xa0c40002
    ctx->pc = 0x1b5430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5434: 0x24a50002
    ctx->pc = 0x1b5434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b5438: 0xa0c40001
    ctx->pc = 0x1b5438u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b543c: 0xa0c40000
    ctx->pc = 0x1b543cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5440: 0x1460fff6
    ctx->pc = 0x1B5440u;
    {
        const bool branch_taken_0x1b5440 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5444u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1b5440) {
            ctx->pc = 0x1B541Cu;
            goto label_1b541c;
        }
    }
    ctx->pc = 0x1B5448u;
    // 0x1b5448: 0x24420001
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1b544c:
    // 0x1b544c: 0x8e040024
    ctx->pc = 0x1b544cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b5450: 0x44182b
    ctx->pc = 0x1b5450u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b5454: 0x1460fff1
    ctx->pc = 0x1B5454u;
    {
        const bool branch_taken_0x1b5454 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5458u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b5454) {
            ctx->pc = 0x1B541Cu;
            goto label_1b541c;
        }
    }
    ctx->pc = 0x1B545Cu;
    // 0x1b545c: 0x41180
    ctx->pc = 0x1b545cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x1b5460: 0xae110054
    ctx->pc = 0x1b5460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1b5464: 0x2629821
    ctx->pc = 0x1b5464u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b5468: 0x26220002
    ctx->pc = 0x1b5468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1b546c: 0xae020058
    ctx->pc = 0x1b546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1b5470: 0x882d
    ctx->pc = 0x1b5470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5474:
    // 0x1b5474: 0x3c020023
    ctx->pc = 0x1b5474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b5478: 0x111880
    ctx->pc = 0x1b5478u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b547c: 0x244244b8
    ctx->pc = 0x1b547cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1b5480: 0x2039021
    ctx->pc = 0x1b5480u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b5484: 0x431021
    ctx->pc = 0x1b5484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5488: 0x8c440000
    ctx->pc = 0x1b5488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b548c: 0xae440038
    ctx->pc = 0x1b548cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
    // 0x1b5490: 0xc06dbc4
    ctx->pc = 0x1B5490u;
    SET_GPR_U32(ctx, 31, 0x1B5498u);
    ctx->pc = 0x1B5494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1B6F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F10_0x1b6f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5498u; }
    }
    if (ctx->pc != 0x1B5498u) { return; }
    ctx->pc = 0x1B5498u;
    // 0x1b5498: 0x200202d
    ctx->pc = 0x1b5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b549c: 0xc06dc54
    ctx->pc = 0x1B549Cu;
    SET_GPR_U32(ctx, 31, 0x1B54A4u);
    ctx->pc = 0x1B54A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B7150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7150_0x1b7150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54A4u; }
    }
    if (ctx->pc != 0x1B54A4u) { return; }
    ctx->pc = 0x1B54A4u;
    // 0x1b54a4: 0xae420040
    ctx->pc = 0x1b54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1b54a8: 0x26310001
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b54ac: 0x2a220002
    ctx->pc = 0x1b54acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x1b54b0: 0x1440fff0
    ctx->pc = 0x1B54B0u;
    {
        const bool branch_taken_0x1b54b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b54b0) {
            ctx->pc = 0x1B5474u;
            goto label_1b5474;
        }
    }
    ctx->pc = 0x1B54B8u;
    // 0x1b54b8: 0xae000048
    ctx->pc = 0x1b54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1b54bc: 0x3c038080
    ctx->pc = 0x1b54bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32896 << 16));
    // 0x1b54c0: 0x8e060040
    ctx->pc = 0x1b54c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b54c4: 0x24050001
    ctx->pc = 0x1b54c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b54c8: 0x3c010032
    ctx->pc = 0x1b54c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b54cc: 0x2404000a
    ctx->pc = 0x1b54ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b54d0: 0x34638080
    ctx->pc = 0x1b54d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32896));
    // 0x1b54d4: 0x2402ffff
    ctx->pc = 0x1b54d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b54d8: 0xae06004c
    ctx->pc = 0x1b54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
    // 0x1b54dc: 0x8e060028
    ctx->pc = 0x1b54dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b54e0: 0x2663023
    ctx->pc = 0x1b54e0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1b54e4: 0xae06005c
    ctx->pc = 0x1b54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
    // 0x1b54e8: 0xa02543ea
    ctx->pc = 0x1b54e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17386), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b54ec: 0x8e05000c
    ctx->pc = 0x1b54ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b54f0: 0x3c01002c
    ctx->pc = 0x1b54f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b54f4: 0xae05006c
    ctx->pc = 0x1b54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
    // 0x1b54f8: 0xae000070
    ctx->pc = 0x1b54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1b54fc: 0xae000074
    ctx->pc = 0x1b54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1b5500: 0xae040078
    ctx->pc = 0x1b5500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x1b5504: 0xae00007c
    ctx->pc = 0x1b5504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1b5508: 0xae030080
    ctx->pc = 0x1b5508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1b550c: 0xac22ab78
    ctx->pc = 0x1b550cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945656), GPR_U32(ctx, 2));
    // 0x1b5510: 0x8e020028
    ctx->pc = 0x1b5510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b5514: 0xdfbf0050
    ctx->pc = 0x1b5514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5518: 0x7bb40040
    ctx->pc = 0x1b5518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b551c: 0x7bb30030
    ctx->pc = 0x1b551cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5520: 0x7bb20020
    ctx->pc = 0x1b5520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5524: 0x7bb10010
    ctx->pc = 0x1b5524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5528: 0x7bb00000
    ctx->pc = 0x1b5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b552c: 0x3e00008
    ctx->pc = 0x1B552Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B52B0u: goto label_1b52b0;
            case 0x1B541Cu: goto label_1b541c;
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5474u: goto label_1b5474;
            case 0x1B5570u: goto label_1b5570;
            case 0x1B558Cu: goto label_1b558c;
            case 0x1B5594u: goto label_1b5594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5534u;
    // 0x1b5534: 0x0
    ctx->pc = 0x1b5534u;
    // NOP
    // 0x1b5538: 0x0
    ctx->pc = 0x1b5538u;
    // NOP
    // 0x1b553c: 0x0
    ctx->pc = 0x1b553cu;
    // NOP
    // 0x1b5540: 0x27bdfff0
    ctx->pc = 0x1b5540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5544: 0x3c010032
    ctx->pc = 0x1b5544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5548: 0xffbf0000
    ctx->pc = 0x1b5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b554c: 0x24020002
    ctx->pc = 0x1b554cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5550: 0x902343c3
    ctx->pc = 0x1b5550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17347)));
    // 0x1b5554: 0x14620006
    ctx->pc = 0x1B5554u;
    {
        const bool branch_taken_0x1b5554 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B5558u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1b5554) {
            ctx->pc = 0x1B5570u;
            goto label_1b5570;
        }
    }
    ctx->pc = 0x1B555Cu;
    // 0x1b555c: 0x24030001
    ctx->pc = 0x1b555cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5560: 0x3c010032
    ctx->pc = 0x1b5560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5564: 0xa0102d
    ctx->pc = 0x1b5564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5568: 0x1000000a
    ctx->pc = 0x1B5568u;
    {
        const bool branch_taken_0x1b5568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B556Cu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17386), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b5568) {
            ctx->pc = 0x1B5594u;
            goto label_1b5594;
        }
    }
    ctx->pc = 0x1B5570u;
label_1b5570:
    // 0x1b5570: 0x94274414
    ctx->pc = 0x1b5570u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b5574: 0x14e00005
    ctx->pc = 0x1B5574u;
    {
        const bool branch_taken_0x1b5574 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5578u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1b5574) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B557Cu;
    // 0x1b557c: 0x3c010032
    ctx->pc = 0x1b557cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5580: 0x102d
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5584: 0x10000003
    ctx->pc = 0x1B5584u;
    {
        const bool branch_taken_0x1b5584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5588u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17386), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1b5584) {
            ctx->pc = 0x1B5594u;
            goto label_1b5594;
        }
    }
    ctx->pc = 0x1B558Cu;
label_1b558c:
    // 0x1b558c: 0xc06d4ac
    ctx->pc = 0x1B558Cu;
    SET_GPR_U32(ctx, 31, 0x1B5594u);
    ctx->pc = 0x1B52B0u;
    goto label_1b52b0;
    ctx->pc = 0x1B5594u;
label_1b5594:
    // 0x1b5594: 0xdfbf0000
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5598: 0x3e00008
    ctx->pc = 0x1B5598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B559Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B52B0u: goto label_1b52b0;
            case 0x1B541Cu: goto label_1b541c;
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5474u: goto label_1b5474;
            case 0x1B5570u: goto label_1b5570;
            case 0x1B558Cu: goto label_1b558c;
            case 0x1B5594u: goto label_1b5594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B55A0u;
}
