#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F4FB0
// Address: 0x1f4fb0 - 0x1f51f0
void sub_001F4FB0_0x1f4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f4fb0u;

    // 0x1f4fb0: 0x27bdffe0
    ctx->pc = 0x1f4fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4fb4: 0x24050005
    ctx->pc = 0x1f4fb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f4fb8: 0xffbf0010
    ctx->pc = 0x1f4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4fbc: 0x24060001
    ctx->pc = 0x1f4fbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4fc0: 0x7fb00000
    ctx->pc = 0x1f4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4fc4: 0x382d
    ctx->pc = 0x1f4fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fc8: 0xc07d284
    ctx->pc = 0x1F4FC8u;
    SET_GPR_U32(ctx, 31, 0x1F4FD0u);
    ctx->pc = 0x1F4FCCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4FD0u; }
    }
    if (ctx->pc != 0x1F4FD0u) { return; }
    ctx->pc = 0x1F4FD0u;
    // 0x1f4fd0: 0x9603002c
    ctx->pc = 0x1f4fd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4fd4: 0x8e02001c
    ctx->pc = 0x1f4fd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4fd8: 0x32200
    ctx->pc = 0x1f4fd8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f4fdc: 0x31a03
    ctx->pc = 0x1f4fdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f4fe0: 0x3084ff00
    ctx->pc = 0x1f4fe0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f4fe4: 0x306300ff
    ctx->pc = 0x1f4fe4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f4fe8: 0x831825
    ctx->pc = 0x1f4fe8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f4fec: 0xa4430000
    ctx->pc = 0x1f4fecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4ff0: 0x8e02002c
    ctx->pc = 0x1f4ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f4ff4: 0x8e040010
    ctx->pc = 0x1f4ff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f4ff8: 0x8e05001c
    ctx->pc = 0x1f4ff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f4ffc: 0x24420008
    ctx->pc = 0x1f4ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f5000: 0x2343c
    ctx->pc = 0x1f5000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5004: 0xc075aa4
    ctx->pc = 0x1F5004u;
    SET_GPR_U32(ctx, 31, 0x1F500Cu);
    ctx->pc = 0x1F5008u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F500Cu; }
    }
    if (ctx->pc != 0x1F500Cu) { return; }
    ctx->pc = 0x1F500Cu;
    // 0x1f500c: 0xc07d16c
    ctx->pc = 0x1F500Cu;
    SET_GPR_U32(ctx, 31, 0x1F5014u);
    ctx->pc = 0x1F5010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5014u; }
    }
    if (ctx->pc != 0x1F5014u) { return; }
    ctx->pc = 0x1F5014u;
    // 0x1f5014: 0x2841ffff
    ctx->pc = 0x1f5014u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f5018: 0x1100a
    ctx->pc = 0x1f5018u;
    if (GPR_U32(ctx, 1) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1f501c: 0xdfbf0010
    ctx->pc = 0x1f501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5020: 0x7bb00000
    ctx->pc = 0x1f5020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5024: 0x3e00008
    ctx->pc = 0x1F5024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F50CCu: goto label_1f50cc;
            case 0x1F5138u: goto label_1f5138;
            case 0x1F5178u: goto label_1f5178;
            case 0x1F51DCu: goto label_1f51dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F502Cu;
    // 0x1f502c: 0x0
    ctx->pc = 0x1f502cu;
    // NOP
    // 0x1f5030: 0x3e00008
    ctx->pc = 0x1F5030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F50CCu: goto label_1f50cc;
            case 0x1F5138u: goto label_1f5138;
            case 0x1F5178u: goto label_1f5178;
            case 0x1F51DCu: goto label_1f51dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5038u;
    // 0x1f5038: 0x0
    ctx->pc = 0x1f5038u;
    // NOP
    // 0x1f503c: 0x0
    ctx->pc = 0x1f503cu;
    // NOP
    // 0x1f5040: 0x3e00008
    ctx->pc = 0x1F5040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F50CCu: goto label_1f50cc;
            case 0x1F5138u: goto label_1f5138;
            case 0x1F5178u: goto label_1f5178;
            case 0x1F51DCu: goto label_1f51dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5048u;
    // 0x1f5048: 0x0
    ctx->pc = 0x1f5048u;
    // NOP
    // 0x1f504c: 0x0
    ctx->pc = 0x1f504cu;
    // NOP
    // 0x1f5050: 0x27bdffe0
    ctx->pc = 0x1f5050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5054: 0x3c020035
    ctx->pc = 0x1f5054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1f5058: 0xffbf0010
    ctx->pc = 0x1f5058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f505c: 0x244257d0
    ctx->pc = 0x1f505cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22480));
    // 0x1f5060: 0x7fb00000
    ctx->pc = 0x1f5060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5064: 0x3c010036
    ctx->pc = 0x1f5064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5068: 0xac22ec70
    ctx->pc = 0x1f5068u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962288), GPR_U32(ctx, 2));
    // 0x1f506c: 0x80802d
    ctx->pc = 0x1f506cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5070: 0x3c010036
    ctx->pc = 0x1f5070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5074: 0x282d
    ctx->pc = 0x1f5074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5078: 0x8c24ec70
    ctx->pc = 0x1f5078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294962288)));
    // 0x1f507c: 0xc041f1a
    ctx->pc = 0x1F507Cu;
    SET_GPR_U32(ctx, 31, 0x1F5084u);
    ctx->pc = 0x1F5080u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 768));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5084u; }
    }
    if (ctx->pc != 0x1F5084u) { return; }
    ctx->pc = 0x1F5084u;
    // 0x1f5084: 0x3c010036
    ctx->pc = 0x1f5084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5088: 0x200202d
    ctx->pc = 0x1f5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f508c: 0x8c25ec70
    ctx->pc = 0x1f508cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294962288)));
    // 0x1f5090: 0xc07d244
    ctx->pc = 0x1F5090u;
    SET_GPR_U32(ctx, 31, 0x1F5098u);
    ctx->pc = 0x1F5094u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 767));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5098u; }
    }
    if (ctx->pc != 0x1F5098u) { return; }
    ctx->pc = 0x1F5098u;
    // 0x1f5098: 0x441000c
    ctx->pc = 0x1F5098u;
    {
        const bool branch_taken_0x1f5098 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F509Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
        if (branch_taken_0x1f5098) {
            ctx->pc = 0x1F50CCu;
            goto label_1f50cc;
        }
    }
    ctx->pc = 0x1F50A0u;
    // 0x1f50a0: 0x2403ffff
    ctx->pc = 0x1f50a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f50a4: 0x24020007
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f50a8: 0xae03008c
    ctx->pc = 0x1f50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x1f50ac: 0xa2020000
    ctx->pc = 0x1f50acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f50b0: 0xa2000001
    ctx->pc = 0x1f50b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50b4: 0xa2000002
    ctx->pc = 0x1f50b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50b8: 0xa2000003
    ctx->pc = 0x1f50b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50bc: 0xa6000004
    ctx->pc = 0x1f50bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f50c0: 0xa6000006
    ctx->pc = 0x1f50c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f50c4: 0xa6000008
    ctx->pc = 0x1f50c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f50c8: 0xa600000a
    ctx->pc = 0x1f50c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f50cc:
    // 0x1f50cc: 0x2402ffc6
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x1f50d0: 0xa0205acf
    ctx->pc = 0x1f50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 23247), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50d4: 0xdfbf0010
    ctx->pc = 0x1f50d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f50d8: 0x7bb00000
    ctx->pc = 0x1f50d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f50dc: 0x3e00008
    ctx->pc = 0x1F50DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F50CCu: goto label_1f50cc;
            case 0x1F5138u: goto label_1f5138;
            case 0x1F5178u: goto label_1f5178;
            case 0x1F51DCu: goto label_1f51dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F50E4u;
    // 0x1f50e4: 0x0
    ctx->pc = 0x1f50e4u;
    // NOP
    // 0x1f50e8: 0x0
    ctx->pc = 0x1f50e8u;
    // NOP
    // 0x1f50ec: 0x0
    ctx->pc = 0x1f50ecu;
    // NOP
    // 0x1f50f0: 0x27bdffe0
    ctx->pc = 0x1f50f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f50f4: 0x3c010036
    ctx->pc = 0x1f50f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f50f8: 0xffbf0010
    ctx->pc = 0x1f50f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f50fc: 0x7fb00000
    ctx->pc = 0x1f50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5100: 0x8c22eaf0
    ctx->pc = 0x1f5100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5104: 0x10400035
    ctx->pc = 0x1F5104u;
    {
        const bool branch_taken_0x1f5104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5108u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5104) {
            ctx->pc = 0x1F51DCu;
            goto label_1f51dc;
        }
    }
    ctx->pc = 0x1F510Cu;
    // 0x1f510c: 0xc07d1f8
    ctx->pc = 0x1F510Cu;
    SET_GPR_U32(ctx, 31, 0x1F5114u);
    ctx->pc = 0x1F47E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47E0_0x1f47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5114u; }
    }
    if (ctx->pc != 0x1F5114u) { return; }
    ctx->pc = 0x1F5114u;
    // 0x1f5114: 0x3c010036
    ctx->pc = 0x1f5114u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5118: 0xa022ec20
    ctx->pc = 0x1f5118u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962208), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f511c: 0x3c010036
    ctx->pc = 0x1f511cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5120: 0x9022ec20
    ctx->pc = 0x1f5120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962208)));
    // 0x1f5124: 0x14400004
    ctx->pc = 0x1F5124u;
    {
        const bool branch_taken_0x1f5124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5128u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5124) {
            ctx->pc = 0x1F5138u;
            goto label_1f5138;
        }
    }
    ctx->pc = 0x1F512Cu;
    // 0x1f512c: 0x2402000c
    ctx->pc = 0x1f512cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f5130: 0x1000002a
    ctx->pc = 0x1F5130u;
    {
        const bool branch_taken_0x1f5130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5134u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f5130) {
            ctx->pc = 0x1F51DCu;
            goto label_1f51dc;
        }
    }
    ctx->pc = 0x1F5138u;
label_1f5138:
    // 0x1f5138: 0x26050042
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 66));
    // 0x1f513c: 0xc07d244
    ctx->pc = 0x1F513Cu;
    SET_GPR_U32(ctx, 31, 0x1F5144u);
    ctx->pc = 0x1F5140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5144u; }
    }
    if (ctx->pc != 0x1F5144u) { return; }
    ctx->pc = 0x1F5144u;
    // 0x1f5144: 0x441000c
    ctx->pc = 0x1F5144u;
    {
        const bool branch_taken_0x1f5144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5148u;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x1f5144) {
            ctx->pc = 0x1F5178u;
            goto label_1f5178;
        }
    }
    ctx->pc = 0x1F514Cu;
    // 0x1f514c: 0x2403ffff
    ctx->pc = 0x1f514cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5150: 0x24020007
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5154: 0xae03008c
    ctx->pc = 0x1f5154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x1f5158: 0xa2020000
    ctx->pc = 0x1f5158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f515c: 0xa2000001
    ctx->pc = 0x1f515cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5160: 0xa2000002
    ctx->pc = 0x1f5160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5164: 0xa2000003
    ctx->pc = 0x1f5164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5168: 0xa6000004
    ctx->pc = 0x1f5168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f516c: 0xa6000006
    ctx->pc = 0x1f516cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5170: 0xa6000008
    ctx->pc = 0x1f5170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5174: 0xa600000a
    ctx->pc = 0x1f5174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f5178:
    // 0x1f5178: 0x26050042
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 66));
    // 0x1f517c: 0x2484ec21
    ctx->pc = 0x1f517cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962209));
    // 0x1f5180: 0xc041eac
    ctx->pc = 0x1F5180u;
    SET_GPR_U32(ctx, 31, 0x1F5188u);
    ctx->pc = 0x1F5184u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5188u; }
    }
    if (ctx->pc != 0x1F5188u) { return; }
    ctx->pc = 0x1F5188u;
    // 0x1f5188: 0x3c040036
    ctx->pc = 0x1f5188u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f518c: 0x3c010036
    ctx->pc = 0x1f518cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5190: 0x2484ec31
    ctx->pc = 0x1f5190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962225));
    // 0x1f5194: 0x2605004c
    ctx->pc = 0x1f5194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 76));
    // 0x1f5198: 0x24060004
    ctx->pc = 0x1f5198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f519c: 0xc041eac
    ctx->pc = 0x1F519Cu;
    SET_GPR_U32(ctx, 31, 0x1F51A4u);
    ctx->pc = 0x1F51A0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962219), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51A4u; }
    }
    if (ctx->pc != 0x1F51A4u) { return; }
    ctx->pc = 0x1F51A4u;
    // 0x1f51a4: 0x3c010036
    ctx->pc = 0x1f51a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f51a8: 0x200202d
    ctx->pc = 0x1f51a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51ac: 0xc07d224
    ctx->pc = 0x1F51ACu;
    SET_GPR_U32(ctx, 31, 0x1F51B4u);
    ctx->pc = 0x1F51B0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962229), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51B4u; }
    }
    if (ctx->pc != 0x1F51B4u) { return; }
    ctx->pc = 0x1F51B4u;
    // 0x1f51b4: 0xae020064
    ctx->pc = 0x1f51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1f51b8: 0x3c010036
    ctx->pc = 0x1f51b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f51bc: 0x8e020064
    ctx->pc = 0x1f51bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1f51c0: 0x200202d
    ctx->pc = 0x1f51c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51c4: 0xc07d224
    ctx->pc = 0x1F51C4u;
    SET_GPR_U32(ctx, 31, 0x1F51CCu);
    ctx->pc = 0x1F51C8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962236), GPR_U32(ctx, 2));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F51CCu; }
    }
    if (ctx->pc != 0x1F51CCu) { return; }
    ctx->pc = 0x1F51CCu;
    // 0x1f51cc: 0xae020068
    ctx->pc = 0x1f51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1f51d0: 0x24020002
    ctx->pc = 0x1f51d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f51d4: 0xae00003c
    ctx->pc = 0x1f51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1f51d8: 0xa2020001
    ctx->pc = 0x1f51d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f51dc:
    // 0x1f51dc: 0xdfbf0010
    ctx->pc = 0x1f51dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f51e0: 0x102d
    ctx->pc = 0x1f51e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e4: 0x7bb00000
    ctx->pc = 0x1f51e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f51e8: 0x3e00008
    ctx->pc = 0x1F51E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F51ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F50CCu: goto label_1f50cc;
            case 0x1F5138u: goto label_1f5138;
            case 0x1F5178u: goto label_1f5178;
            case 0x1F51DCu: goto label_1f51dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F51F0u;
}
