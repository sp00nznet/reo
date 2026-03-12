#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037B900
// Address: 0x37b900 - 0x37bca0
void sub_0037B900_0x37b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37b900u;

    // 0x37b900: 0x3c010057
    ctx->pc = 0x37b900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b904: 0x3e00008
    ctx->pc = 0x37B904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B908u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949560), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B90Cu;
    // 0x37b90c: 0x0
    ctx->pc = 0x37b90cu;
    // NOP
    // 0x37b910: 0x3c060039
    ctx->pc = 0x37b910u;
    SET_GPR_U32(ctx, 6, ((uint32_t)57 << 16));
    // 0x37b914: 0x240300ff
    ctx->pc = 0x37b914u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x37b918: 0x10000006
    ctx->pc = 0x37B918u;
    {
        const bool branch_taken_0x37b918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B91Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294940872));
        if (branch_taken_0x37b918) {
            ctx->pc = 0x37B934u;
            goto label_37b934;
        }
    }
    ctx->pc = 0x37B920u;
label_37b920:
    // 0x37b920: 0x90c50001
    ctx->pc = 0x37b920u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x37b924: 0x14a40003
    ctx->pc = 0x37B924u;
    {
        const bool branch_taken_0x37b924 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x37B928u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x37b924) {
            ctx->pc = 0x37B934u;
            goto label_37b934;
        }
    }
    ctx->pc = 0x37B92Cu;
    // 0x37b92c: 0x10000005
    ctx->pc = 0x37B92Cu;
    {
        const bool branch_taken_0x37b92c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x37b92c) {
            ctx->pc = 0x37B944u;
            goto label_37b944;
        }
    }
    ctx->pc = 0x37B934u;
label_37b934:
    // 0x37b934: 0x90c20000
    ctx->pc = 0x37b934u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b938: 0x1443fff9
    ctx->pc = 0x37B938u;
    {
        const bool branch_taken_0x37b938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x37b938) {
            ctx->pc = 0x37B920u;
            goto label_37b920;
        }
    }
    ctx->pc = 0x37B940u;
    // 0x37b940: 0x2402ffff
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_37b944:
    // 0x37b944: 0x3e00008
    ctx->pc = 0x37B944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B94Cu;
    // 0x37b94c: 0x0
    ctx->pc = 0x37b94cu;
    // NOP
    // 0x37b950: 0x3c060039
    ctx->pc = 0x37b950u;
    SET_GPR_U32(ctx, 6, ((uint32_t)57 << 16));
    // 0x37b954: 0x240200ff
    ctx->pc = 0x37b954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x37b958: 0x10000007
    ctx->pc = 0x37B958u;
    {
        const bool branch_taken_0x37b958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B95Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294940872));
        if (branch_taken_0x37b958) {
            ctx->pc = 0x37B978u;
            goto label_37b978;
        }
    }
    ctx->pc = 0x37B960u;
label_37b960:
    // 0x37b960: 0x90c50001
    ctx->pc = 0x37b960u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x37b964: 0x306300ff
    ctx->pc = 0x37b964u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x37b968: 0x14640003
    ctx->pc = 0x37B968u;
    {
        const bool branch_taken_0x37b968 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x37B96Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x37b968) {
            ctx->pc = 0x37B978u;
            goto label_37b978;
        }
    }
    ctx->pc = 0x37B970u;
    // 0x37b970: 0x10000005
    ctx->pc = 0x37B970u;
    {
        const bool branch_taken_0x37b970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B974u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x37b970) {
            ctx->pc = 0x37B988u;
            goto label_37b988;
        }
    }
    ctx->pc = 0x37B978u;
label_37b978:
    // 0x37b978: 0x90c30000
    ctx->pc = 0x37b978u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b97c: 0x1462fff8
    ctx->pc = 0x37B97Cu;
    {
        const bool branch_taken_0x37b97c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x37b97c) {
            ctx->pc = 0x37B960u;
            goto label_37b960;
        }
    }
    ctx->pc = 0x37B984u;
    // 0x37b984: 0x2402ffff
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_37b988:
    // 0x37b988: 0x3e00008
    ctx->pc = 0x37B988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B990u;
    // 0x37b990: 0x27bdffe0
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b994: 0x3c04003c
    ctx->pc = 0x37b994u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x37b998: 0xffbf0000
    ctx->pc = 0x37b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b99c: 0x248484b0
    ctx->pc = 0x37b99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935728));
    // 0x37b9a0: 0x282d
    ctx->pc = 0x37b9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9a4: 0xc041f1a
    ctx->pc = 0x37B9A4u;
    SET_GPR_U32(ctx, 31, 0x37B9ACu);
    ctx->pc = 0x37B9A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 232));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B9ACu; }
        if (ctx->pc != 0x37B9ACu) { return; }
    }
    ctx->pc = 0x37B9ACu;
    // 0x37b9ac: 0xc0df05c
    ctx->pc = 0x37B9ACu;
    SET_GPR_U32(ctx, 31, 0x37B9B4u);
    ctx->pc = 0x37C170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C170_0x37c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B9B4u; }
    }
    if (ctx->pc != 0x37B9B4u) { return; }
    ctx->pc = 0x37B9B4u;
    // 0x37b9b4: 0x3c040057
    ctx->pc = 0x37b9b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37b9b8: 0x282d
    ctx->pc = 0x37b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9bc: 0x2484bbd0
    ctx->pc = 0x37b9bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949840));
    // 0x37b9c0: 0xc041f1a
    ctx->pc = 0x37B9C0u;
    SET_GPR_U32(ctx, 31, 0x37B9C8u);
    ctx->pc = 0x37B9C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B9C8u; }
        if (ctx->pc != 0x37B9C8u) { return; }
    }
    ctx->pc = 0x37B9C8u;
    // 0x37b9c8: 0x3c040057
    ctx->pc = 0x37b9c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x37b9cc: 0x282d
    ctx->pc = 0x37b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9d0: 0x2484bb90
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949776));
    // 0x37b9d4: 0xc041f1a
    ctx->pc = 0x37B9D4u;
    SET_GPR_U32(ctx, 31, 0x37B9DCu);
    ctx->pc = 0x37B9D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B9DCu; }
        if (ctx->pc != 0x37B9DCu) { return; }
    }
    ctx->pc = 0x37B9DCu;
    // 0x37b9dc: 0x3c010032
    ctx->pc = 0x37b9dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37b9e0: 0x3c050039
    ctx->pc = 0x37b9e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x37b9e4: 0x942743da
    ctx->pc = 0x37b9e4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x37b9e8: 0x24a5a4a0
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943904));
    // 0x37b9ec: 0x3c040039
    ctx->pc = 0x37b9ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x37b9f0: 0xafa0001c
    ctx->pc = 0x37b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x37b9f4: 0xafa00018
    ctx->pc = 0x37b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x37b9f8: 0x2484a4d0
    ctx->pc = 0x37b9f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943952));
    // 0x37b9fc: 0x24060001
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ba00: 0xa72821
    ctx->pc = 0x37ba00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x37ba04: 0x80a50000
    ctx->pc = 0x37ba04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37ba08: 0x538c0
    ctx->pc = 0x37ba08u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37ba0c: 0x872021
    ctx->pc = 0x37ba0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x37ba10: 0x8c8a0000
    ctx->pc = 0x37ba10u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37ba14: 0x10000013
    ctx->pc = 0x37BA14u;
    {
        const bool branch_taken_0x37ba14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BA18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x37ba14) {
            ctx->pc = 0x37BA64u;
            goto label_37ba64;
        }
    }
    ctx->pc = 0x37BA1Cu;
label_37ba1c:
    // 0x37ba1c: 0x95440006
    ctx->pc = 0x37ba1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x37ba20: 0x42943
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 5));
    // 0x37ba24: 0x3084001f
    ctx->pc = 0x37ba24u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 31));
    // 0x37ba28: 0x52880
    ctx->pc = 0x37ba28u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37ba2c: 0x864804
    ctx->pc = 0x37ba2cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x37ba30: 0xbd2021
    ctx->pc = 0x37ba30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x37ba34: 0x24880018
    ctx->pc = 0x37ba34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 24));
    // 0x37ba38: 0x8d050000
    ctx->pc = 0x37ba38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37ba3c: 0x1252024
    ctx->pc = 0x37ba3cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x37ba40: 0x14800007
    ctx->pc = 0x37BA40u;
    {
        const bool branch_taken_0x37ba40 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BA44u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        if (branch_taken_0x37ba40) {
            ctx->pc = 0x37BA60u;
            goto label_37ba60;
        }
    }
    ctx->pc = 0x37BA48u;
    // 0x37ba48: 0x3c01003c
    ctx->pc = 0x37ba48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37ba4c: 0xad040000
    ctx->pc = 0x37ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x37ba50: 0x90248504
    ctx->pc = 0x37ba50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935812)));
    // 0x37ba54: 0x24840001
    ctx->pc = 0x37ba54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x37ba58: 0x3c01003c
    ctx->pc = 0x37ba58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37ba5c: 0xa0248504
    ctx->pc = 0x37ba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935812), (uint8_t)GPR_U32(ctx, 4));
label_37ba60:
    // 0x37ba60: 0x254a000a
    ctx->pc = 0x37ba60u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 10));
label_37ba64:
    // 0x37ba64: 0x91440000
    ctx->pc = 0x37ba64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x37ba68: 0x1483ffec
    ctx->pc = 0x37BA68u;
    {
        const bool branch_taken_0x37ba68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x37ba68) {
            ctx->pc = 0x37BA1Cu;
            goto label_37ba1c;
        }
    }
    ctx->pc = 0x37BA70u;
    // 0x37ba70: 0x3c030039
    ctx->pc = 0x37ba70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x37ba74: 0x24060001
    ctx->pc = 0x37ba74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ba78: 0x2463a4d4
    ctx->pc = 0x37ba78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943956));
    // 0x37ba7c: 0x672021
    ctx->pc = 0x37ba7cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37ba80: 0x8c870000
    ctx->pc = 0x37ba80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37ba84: 0x10000013
    ctx->pc = 0x37BA84u;
    {
        const bool branch_taken_0x37ba84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BA88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x37ba84) {
            ctx->pc = 0x37BAD4u;
            goto label_37bad4;
        }
    }
    ctx->pc = 0x37BA8Cu;
label_37ba8c:
    // 0x37ba8c: 0x94e40006
    ctx->pc = 0x37ba8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x37ba90: 0x42943
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 5));
    // 0x37ba94: 0x3084001f
    ctx->pc = 0x37ba94u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 31));
    // 0x37ba98: 0x52880
    ctx->pc = 0x37ba98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37ba9c: 0x864804
    ctx->pc = 0x37ba9cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x37baa0: 0xbd2021
    ctx->pc = 0x37baa0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x37baa4: 0x24880018
    ctx->pc = 0x37baa4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 24));
    // 0x37baa8: 0x8d050000
    ctx->pc = 0x37baa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37baac: 0x1252024
    ctx->pc = 0x37baacu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x37bab0: 0x14800007
    ctx->pc = 0x37BAB0u;
    {
        const bool branch_taken_0x37bab0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BAB4u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        if (branch_taken_0x37bab0) {
            ctx->pc = 0x37BAD0u;
            goto label_37bad0;
        }
    }
    ctx->pc = 0x37BAB8u;
    // 0x37bab8: 0x3c01003c
    ctx->pc = 0x37bab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37babc: 0xad040000
    ctx->pc = 0x37babcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x37bac0: 0x90248504
    ctx->pc = 0x37bac0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935812)));
    // 0x37bac4: 0x24840001
    ctx->pc = 0x37bac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x37bac8: 0x3c01003c
    ctx->pc = 0x37bac8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37bacc: 0xa0248504
    ctx->pc = 0x37baccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935812), (uint8_t)GPR_U32(ctx, 4));
label_37bad0:
    // 0x37bad0: 0x24e7000a
    ctx->pc = 0x37bad0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 10));
label_37bad4:
    // 0x37bad4: 0x90e40000
    ctx->pc = 0x37bad4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37bad8: 0x1483ffec
    ctx->pc = 0x37BAD8u;
    {
        const bool branch_taken_0x37bad8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x37bad8) {
            ctx->pc = 0x37BA8Cu;
            goto label_37ba8c;
        }
    }
    ctx->pc = 0x37BAE0u;
    // 0x37bae0: 0xdfbf0000
    ctx->pc = 0x37bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bae4: 0x3e00008
    ctx->pc = 0x37BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37BAECu;
    // 0x37baec: 0x0
    ctx->pc = 0x37baecu;
    // NOP
    // 0x37baf0: 0x27bdffc0
    ctx->pc = 0x37baf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37baf4: 0x3c040039
    ctx->pc = 0x37baf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x37baf8: 0xffbf0030
    ctx->pc = 0x37baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37bafc: 0x3c030039
    ctx->pc = 0x37bafcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x37bb00: 0x7fb20020
    ctx->pc = 0x37bb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bb04: 0x3c010032
    ctx->pc = 0x37bb04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37bb08: 0x7fb10010
    ctx->pc = 0x37bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bb0c: 0x2484a4a0
    ctx->pc = 0x37bb0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x37bb10: 0x7fb00000
    ctx->pc = 0x37bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bb14: 0x2463a4d0
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943952));
    // 0x37bb18: 0x942543da
    ctx->pc = 0x37bb18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x37bb1c: 0x852021
    ctx->pc = 0x37bb1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37bb20: 0x80840000
    ctx->pc = 0x37bb20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37bb24: 0x420c0
    ctx->pc = 0x37bb24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37bb28: 0x641821
    ctx->pc = 0x37bb28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37bb2c: 0x8c710000
    ctx->pc = 0x37bb2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37bb30: 0x10000019
    ctx->pc = 0x37BB30u;
    {
        const bool branch_taken_0x37bb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BB34u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bb30) {
            ctx->pc = 0x37BB98u;
            goto label_37bb98;
        }
    }
    ctx->pc = 0x37BB38u;
label_37bb38:
    // 0x37bb38: 0x2463bbd0
    ctx->pc = 0x37bb38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949840));
    // 0x37bb3c: 0x709021
    ctx->pc = 0x37bb3cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x37bb40: 0x92430000
    ctx->pc = 0x37bb40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37bb44: 0x14600012
    ctx->pc = 0x37BB44u;
    {
        const bool branch_taken_0x37bb44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BB48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bb44) {
            ctx->pc = 0x37BB90u;
            goto label_37bb90;
        }
    }
    ctx->pc = 0x37BB4Cu;
    // 0x37bb4c: 0xc0def28
    ctx->pc = 0x37BB4Cu;
    SET_GPR_U32(ctx, 31, 0x37BB54u);
    ctx->pc = 0x37BCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037BCA0_0x37bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB54u; }
    }
    if (ctx->pc != 0x37BB54u) { return; }
    ctx->pc = 0x37BB54u;
    // 0x37bb54: 0x24030001
    ctx->pc = 0x37bb54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bb58: 0x1443000d
    ctx->pc = 0x37BB58u;
    {
        const bool branch_taken_0x37bb58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x37bb58) {
            ctx->pc = 0x37BB90u;
            goto label_37bb90;
        }
    }
    ctx->pc = 0x37BB60u;
    // 0x37bb60: 0x92250001
    ctx->pc = 0x37bb60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x37bb64: 0xc0def28
    ctx->pc = 0x37BB64u;
    SET_GPR_U32(ctx, 31, 0x37BB6Cu);
    ctx->pc = 0x37BB68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x37BCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037BCA0_0x37bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB6Cu; }
    }
    if (ctx->pc != 0x37BB6Cu) { return; }
    ctx->pc = 0x37BB6Cu;
    // 0x37bb6c: 0x24030001
    ctx->pc = 0x37bb6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bb70: 0x14430007
    ctx->pc = 0x37BB70u;
    {
        const bool branch_taken_0x37bb70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x37BB74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bb70) {
            ctx->pc = 0x37BB90u;
            goto label_37bb90;
        }
    }
    ctx->pc = 0x37BB78u;
    // 0x37bb78: 0xc0df11c
    ctx->pc = 0x37BB78u;
    SET_GPR_U32(ctx, 31, 0x37BB80u);
    ctx->pc = 0x37C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C470_0x37c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB80u; }
    }
    if (ctx->pc != 0x37BB80u) { return; }
    ctx->pc = 0x37BB80u;
    // 0x37bb80: 0x24020001
    ctx->pc = 0x37bb80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bb84: 0xa2420000
    ctx->pc = 0x37bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x37bb88: 0xc0defec
    ctx->pc = 0x37BB88u;
    SET_GPR_U32(ctx, 31, 0x37BB90u);
    ctx->pc = 0x37BB8Cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    ctx->pc = 0x37BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037BFB0_0x37bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB90u; }
    }
    if (ctx->pc != 0x37BB90u) { return; }
    ctx->pc = 0x37BB90u;
label_37bb90:
    // 0x37bb90: 0x2631000a
    ctx->pc = 0x37bb90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 10));
    // 0x37bb94: 0x26100001
    ctx->pc = 0x37bb94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_37bb98:
    // 0x37bb98: 0x92250000
    ctx->pc = 0x37bb98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37bb9c: 0x240300ff
    ctx->pc = 0x37bb9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x37bba0: 0x14a3ffe5
    ctx->pc = 0x37BBA0u;
    {
        const bool branch_taken_0x37bba0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x37BBA4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
        if (branch_taken_0x37bba0) {
            ctx->pc = 0x37BB38u;
            goto label_37bb38;
        }
    }
    ctx->pc = 0x37BBA8u;
    // 0x37bba8: 0xdfbf0030
    ctx->pc = 0x37bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bbac: 0x7bb20020
    ctx->pc = 0x37bbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bbb0: 0x7bb10010
    ctx->pc = 0x37bbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bbb4: 0x7bb00000
    ctx->pc = 0x37bbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bbb8: 0x3e00008
    ctx->pc = 0x37BBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BBBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37BBC0u;
    // 0x37bbc0: 0x27bdffb0
    ctx->pc = 0x37bbc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37bbc4: 0xffbf0040
    ctx->pc = 0x37bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37bbc8: 0x7fb30030
    ctx->pc = 0x37bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37bbcc: 0x7fb20020
    ctx->pc = 0x37bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bbd0: 0x7fb10010
    ctx->pc = 0x37bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bbd4: 0x7fb00000
    ctx->pc = 0x37bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bbd8: 0xc06c0b4
    ctx->pc = 0x37BBD8u;
    SET_GPR_U32(ctx, 31, 0x37BBE0u);
    ctx->pc = 0x37BBDCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B02D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B02D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBE0u; }
        if (ctx->pc != 0x37BBE0u) { return; }
    }
    ctx->pc = 0x37BBE0u;
    // 0x37bbe0: 0x3c010032
    ctx->pc = 0x37bbe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37bbe4: 0x3c040039
    ctx->pc = 0x37bbe4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x37bbe8: 0x942543da
    ctx->pc = 0x37bbe8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x37bbec: 0x2484a4a0
    ctx->pc = 0x37bbecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x37bbf0: 0x3c030039
    ctx->pc = 0x37bbf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x37bbf4: 0x3211ffff
    ctx->pc = 0x37bbf4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 16), 65535));
    // 0x37bbf8: 0x2463a4d4
    ctx->pc = 0x37bbf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943956));
    // 0x37bbfc: 0x852021
    ctx->pc = 0x37bbfcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37bc00: 0x80840000
    ctx->pc = 0x37bc00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37bc04: 0x420c0
    ctx->pc = 0x37bc04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37bc08: 0x641821
    ctx->pc = 0x37bc08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37bc0c: 0x8c730000
    ctx->pc = 0x37bc0cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37bc10: 0x10000015
    ctx->pc = 0x37BC10u;
    {
        const bool branch_taken_0x37bc10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BC14u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bc10) {
            ctx->pc = 0x37BC68u;
            goto label_37bc68;
        }
    }
    ctx->pc = 0x37BC18u;
label_37bc18:
    // 0x37bc18: 0x2463bb90
    ctx->pc = 0x37bc18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949776));
    // 0x37bc1c: 0x728021
    ctx->pc = 0x37bc1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37bc20: 0x82030000
    ctx->pc = 0x37bc20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37bc24: 0x1460000e
    ctx->pc = 0x37BC24u;
    {
        const bool branch_taken_0x37bc24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BC28u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bc24) {
            ctx->pc = 0x37BC60u;
            goto label_37bc60;
        }
    }
    ctx->pc = 0x37BC2Cu;
    // 0x37bc2c: 0x10830003
    ctx->pc = 0x37BC2Cu;
    {
        const bool branch_taken_0x37bc2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x37bc2c) {
            ctx->pc = 0x37BC3Cu;
            goto label_37bc3c;
        }
    }
    ctx->pc = 0x37BC34u;
    // 0x37bc34: 0x1000000b
    ctx->pc = 0x37BC34u;
    {
        const bool branch_taken_0x37bc34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BC38u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 10));
        if (branch_taken_0x37bc34) {
            ctx->pc = 0x37BC64u;
            goto label_37bc64;
        }
    }
    ctx->pc = 0x37BC3Cu;
label_37bc3c:
    // 0x37bc3c: 0x96630002
    ctx->pc = 0x37bc3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x37bc40: 0x14710007
    ctx->pc = 0x37BC40u;
    {
        const bool branch_taken_0x37bc40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x37BC44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37bc40) {
            ctx->pc = 0x37BC60u;
            goto label_37bc60;
        }
    }
    ctx->pc = 0x37BC48u;
    // 0x37bc48: 0xc0df11c
    ctx->pc = 0x37BC48u;
    SET_GPR_U32(ctx, 31, 0x37BC50u);
    ctx->pc = 0x37C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C470_0x37c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC50u; }
    }
    if (ctx->pc != 0x37BC50u) { return; }
    ctx->pc = 0x37BC50u;
    // 0x37bc50: 0x24020001
    ctx->pc = 0x37bc50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bc54: 0xa2020000
    ctx->pc = 0x37bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x37bc58: 0xc0defec
    ctx->pc = 0x37BC58u;
    SET_GPR_U32(ctx, 31, 0x37BC60u);
    ctx->pc = 0x37BC5Cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    ctx->pc = 0x37BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037BFB0_0x37bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC60u; }
    }
    if (ctx->pc != 0x37BC60u) { return; }
    ctx->pc = 0x37BC60u;
label_37bc60:
    // 0x37bc60: 0x2673000a
    ctx->pc = 0x37bc60u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 10));
label_37bc64:
    // 0x37bc64: 0x26520001
    ctx->pc = 0x37bc64u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_37bc68:
    // 0x37bc68: 0x92640000
    ctx->pc = 0x37bc68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x37bc6c: 0x240300ff
    ctx->pc = 0x37bc6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x37bc70: 0x1483ffe9
    ctx->pc = 0x37BC70u;
    {
        const bool branch_taken_0x37bc70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x37BC74u;
        SET_GPR_U32(ctx, 3, ((uint32_t)87 << 16));
        if (branch_taken_0x37bc70) {
            ctx->pc = 0x37BC18u;
            goto label_37bc18;
        }
    }
    ctx->pc = 0x37BC78u;
    // 0x37bc78: 0xdfbf0040
    ctx->pc = 0x37bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bc7c: 0x7bb30030
    ctx->pc = 0x37bc7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bc80: 0x7bb20020
    ctx->pc = 0x37bc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bc84: 0x7bb10010
    ctx->pc = 0x37bc84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bc88: 0x7bb00000
    ctx->pc = 0x37bc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bc8c: 0x3e00008
    ctx->pc = 0x37BC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B920u: goto label_37b920;
            case 0x37B934u: goto label_37b934;
            case 0x37B944u: goto label_37b944;
            case 0x37B960u: goto label_37b960;
            case 0x37B978u: goto label_37b978;
            case 0x37B988u: goto label_37b988;
            case 0x37BA1Cu: goto label_37ba1c;
            case 0x37BA60u: goto label_37ba60;
            case 0x37BA64u: goto label_37ba64;
            case 0x37BA8Cu: goto label_37ba8c;
            case 0x37BAD0u: goto label_37bad0;
            case 0x37BAD4u: goto label_37bad4;
            case 0x37BB38u: goto label_37bb38;
            case 0x37BB90u: goto label_37bb90;
            case 0x37BB98u: goto label_37bb98;
            case 0x37BC18u: goto label_37bc18;
            case 0x37BC3Cu: goto label_37bc3c;
            case 0x37BC60u: goto label_37bc60;
            case 0x37BC64u: goto label_37bc64;
            case 0x37BC68u: goto label_37bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37BC94u;
    // 0x37bc94: 0x0
    ctx->pc = 0x37bc94u;
    // NOP
    // 0x37bc98: 0x0
    ctx->pc = 0x37bc98u;
    // NOP
    // 0x37bc9c: 0x0
    ctx->pc = 0x37bc9cu;
    // NOP
}
