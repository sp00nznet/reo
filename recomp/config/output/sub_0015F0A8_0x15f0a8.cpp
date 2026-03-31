#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F0A8
// Address: 0x15f0a8 - 0x15f270
void sub_0015F0A8_0x15f0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f0a8u;

label_15f0a8:
    // 0x15f0a8: 0xac800080
    ctx->pc = 0x15f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_15f0ac:
    // 0x15f0ac: 0x3e00008
label_15f0b0:
    if (ctx->pc == 0x15F0B0u) {
        ctx->pc = 0x15F0B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x15F0B4u;
        goto label_15f0b4;
    }
    ctx->pc = 0x15F0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F0B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F0A8u: goto label_15f0a8;
            case 0x15F0ACu: goto label_15f0ac;
            case 0x15F0B0u: goto label_15f0b0;
            case 0x15F0B4u: goto label_15f0b4;
            case 0x15F0B8u: goto label_15f0b8;
            case 0x15F0BCu: goto label_15f0bc;
            case 0x15F0C0u: goto label_15f0c0;
            case 0x15F0C4u: goto label_15f0c4;
            case 0x15F0C8u: goto label_15f0c8;
            case 0x15F0CCu: goto label_15f0cc;
            case 0x15F0D0u: goto label_15f0d0;
            case 0x15F0D4u: goto label_15f0d4;
            case 0x15F0D8u: goto label_15f0d8;
            case 0x15F0DCu: goto label_15f0dc;
            case 0x15F0E0u: goto label_15f0e0;
            case 0x15F0E4u: goto label_15f0e4;
            case 0x15F0E8u: goto label_15f0e8;
            case 0x15F0ECu: goto label_15f0ec;
            case 0x15F0F0u: goto label_15f0f0;
            case 0x15F0F4u: goto label_15f0f4;
            case 0x15F0F8u: goto label_15f0f8;
            case 0x15F0FCu: goto label_15f0fc;
            case 0x15F100u: goto label_15f100;
            case 0x15F104u: goto label_15f104;
            case 0x15F108u: goto label_15f108;
            case 0x15F10Cu: goto label_15f10c;
            case 0x15F110u: goto label_15f110;
            case 0x15F114u: goto label_15f114;
            case 0x15F118u: goto label_15f118;
            case 0x15F11Cu: goto label_15f11c;
            case 0x15F120u: goto label_15f120;
            case 0x15F124u: goto label_15f124;
            case 0x15F128u: goto label_15f128;
            case 0x15F12Cu: goto label_15f12c;
            case 0x15F130u: goto label_15f130;
            case 0x15F134u: goto label_15f134;
            case 0x15F138u: goto label_15f138;
            case 0x15F13Cu: goto label_15f13c;
            case 0x15F140u: goto label_15f140;
            case 0x15F144u: goto label_15f144;
            case 0x15F148u: goto label_15f148;
            case 0x15F14Cu: goto label_15f14c;
            case 0x15F150u: goto label_15f150;
            case 0x15F154u: goto label_15f154;
            case 0x15F158u: goto label_15f158;
            case 0x15F15Cu: goto label_15f15c;
            case 0x15F160u: goto label_15f160;
            case 0x15F164u: goto label_15f164;
            case 0x15F168u: goto label_15f168;
            case 0x15F16Cu: goto label_15f16c;
            case 0x15F170u: goto label_15f170;
            case 0x15F174u: goto label_15f174;
            case 0x15F178u: goto label_15f178;
            case 0x15F17Cu: goto label_15f17c;
            case 0x15F180u: goto label_15f180;
            case 0x15F184u: goto label_15f184;
            case 0x15F188u: goto label_15f188;
            case 0x15F18Cu: goto label_15f18c;
            case 0x15F190u: goto label_15f190;
            case 0x15F194u: goto label_15f194;
            case 0x15F198u: goto label_15f198;
            case 0x15F19Cu: goto label_15f19c;
            case 0x15F1A0u: goto label_15f1a0;
            case 0x15F1A4u: goto label_15f1a4;
            case 0x15F1A8u: goto label_15f1a8;
            case 0x15F1ACu: goto label_15f1ac;
            case 0x15F1B0u: goto label_15f1b0;
            case 0x15F1B4u: goto label_15f1b4;
            case 0x15F1B8u: goto label_15f1b8;
            case 0x15F1BCu: goto label_15f1bc;
            case 0x15F1C0u: goto label_15f1c0;
            case 0x15F1C4u: goto label_15f1c4;
            case 0x15F1C8u: goto label_15f1c8;
            case 0x15F1CCu: goto label_15f1cc;
            case 0x15F1D0u: goto label_15f1d0;
            case 0x15F1D4u: goto label_15f1d4;
            case 0x15F1D8u: goto label_15f1d8;
            case 0x15F1DCu: goto label_15f1dc;
            case 0x15F1E0u: goto label_15f1e0;
            case 0x15F1E4u: goto label_15f1e4;
            case 0x15F1E8u: goto label_15f1e8;
            case 0x15F1ECu: goto label_15f1ec;
            case 0x15F1F0u: goto label_15f1f0;
            case 0x15F1F4u: goto label_15f1f4;
            case 0x15F1F8u: goto label_15f1f8;
            case 0x15F1FCu: goto label_15f1fc;
            case 0x15F200u: goto label_15f200;
            case 0x15F204u: goto label_15f204;
            case 0x15F208u: goto label_15f208;
            case 0x15F20Cu: goto label_15f20c;
            case 0x15F210u: goto label_15f210;
            case 0x15F214u: goto label_15f214;
            case 0x15F218u: goto label_15f218;
            case 0x15F21Cu: goto label_15f21c;
            case 0x15F220u: goto label_15f220;
            case 0x15F224u: goto label_15f224;
            case 0x15F228u: goto label_15f228;
            case 0x15F22Cu: goto label_15f22c;
            case 0x15F230u: goto label_15f230;
            case 0x15F234u: goto label_15f234;
            case 0x15F238u: goto label_15f238;
            case 0x15F23Cu: goto label_15f23c;
            case 0x15F240u: goto label_15f240;
            case 0x15F244u: goto label_15f244;
            case 0x15F248u: goto label_15f248;
            case 0x15F24Cu: goto label_15f24c;
            case 0x15F250u: goto label_15f250;
            case 0x15F254u: goto label_15f254;
            case 0x15F258u: goto label_15f258;
            case 0x15F25Cu: goto label_15f25c;
            case 0x15F260u: goto label_15f260;
            case 0x15F264u: goto label_15f264;
            case 0x15F268u: goto label_15f268;
            case 0x15F26Cu: goto label_15f26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F0B4u;
label_15f0b4:
    // 0x15f0b4: 0x0
    ctx->pc = 0x15f0b4u;
    // NOP
label_15f0b8:
    // 0x15f0b8: 0x27bdffe0
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_15f0bc:
    // 0x15f0bc: 0xffb00000
    ctx->pc = 0x15f0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f0c0:
    // 0x15f0c0: 0xa0802d
    ctx->pc = 0x15f0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f0c4:
    // 0x15f0c4: 0xffb10008
    ctx->pc = 0x15f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15f0c8:
    // 0x15f0c8: 0xffbf0010
    ctx->pc = 0x15f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15f0cc:
    // 0x15f0cc: 0xc057ff0
label_15f0d0:
    if (ctx->pc == 0x15F0D0u) {
        ctx->pc = 0x15F0D0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F0D4u;
        goto label_15f0d4;
    }
    ctx->pc = 0x15F0CCu;
    SET_GPR_U32(ctx, 31, 0x15F0D4u);
    ctx->pc = 0x15F0D0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0D4u; }
    }
    if (ctx->pc != 0x15F0D4u) { return; }
    ctx->pc = 0x15F0D4u;
label_15f0d4:
    // 0x15f0d4: 0x3c040024
    ctx->pc = 0x15f0d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15f0d8:
    // 0x15f0d8: 0x14400007
label_15f0dc:
    if (ctx->pc == 0x15F0DCu) {
        ctx->pc = 0x15F0DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->pc = 0x15F0E0u;
        goto label_15f0e0;
    }
    ctx->pc = 0x15F0D8u;
    {
        const bool branch_taken_0x15f0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F0DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963392));
        if (branch_taken_0x15f0d8) {
            ctx->pc = 0x15F0F8u;
            goto label_15f0f8;
        }
    }
    ctx->pc = 0x15F0E0u;
label_15f0e0:
    // 0x15f0e0: 0xdfb00000
    ctx->pc = 0x15f0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f0e4:
    // 0x15f0e4: 0xdfb10008
    ctx->pc = 0x15f0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f0e8:
    // 0x15f0e8: 0xdfbf0010
    ctx->pc = 0x15f0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f0ec:
    // 0x15f0ec: 0x8058dd4
label_15f0f0:
    if (ctx->pc == 0x15F0F0u) {
        ctx->pc = 0x15F0F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F0F4u;
        goto label_15f0f4;
    }
    ctx->pc = 0x15F0ECu;
    ctx->pc = 0x15F0F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F0F4u;
label_15f0f4:
    // 0x15f0f4: 0x0
    ctx->pc = 0x15f0f4u;
    // NOP
label_15f0f8:
    // 0x15f0f8: 0x16000009
label_15f0fc:
    if (ctx->pc == 0x15F0FCu) {
        ctx->pc = 0x15F0FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F100u;
        goto label_15f100;
    }
    ctx->pc = 0x15F0F8u;
    {
        const bool branch_taken_0x15f0f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F0FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f0f8) {
            ctx->pc = 0x15F120u;
            goto label_15f120;
        }
    }
    ctx->pc = 0x15F100u;
label_15f100:
    // 0x15f100: 0x3c040024
    ctx->pc = 0x15f100u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15f104:
    // 0x15f104: 0xdfb00000
    ctx->pc = 0x15f104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f108:
    // 0x15f108: 0xdfb10008
    ctx->pc = 0x15f108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f10c:
    // 0x15f10c: 0x2484f0f0
    ctx->pc = 0x15f10cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963440));
label_15f110:
    // 0x15f110: 0xdfbf0010
    ctx->pc = 0x15f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f114:
    // 0x15f114: 0x8058dd4
label_15f118:
    if (ctx->pc == 0x15F118u) {
        ctx->pc = 0x15F118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F11Cu;
        goto label_15f11c;
    }
    ctx->pc = 0x15F114u;
    ctx->pc = 0x15F118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F11Cu;
label_15f11c:
    // 0x15f11c: 0x0
    ctx->pc = 0x15f11cu;
    // NOP
label_15f120:
    // 0x15f120: 0xdfb10008
    ctx->pc = 0x15f120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f124:
    // 0x15f124: 0x200282d
    ctx->pc = 0x15f124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f128:
    // 0x15f128: 0xdfb00000
    ctx->pc = 0x15f128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f12c:
    // 0x15f12c: 0xdfbf0010
    ctx->pc = 0x15f12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f130:
    // 0x15f130: 0x302d
    ctx->pc = 0x15f130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f134:
    // 0x15f134: 0x2407ffff
    ctx->pc = 0x15f134u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f138:
    // 0x15f138: 0x8057c50
label_15f13c:
    if (ctx->pc == 0x15F13Cu) {
        ctx->pc = 0x15F13Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F140u;
        goto label_15f140;
    }
    ctx->pc = 0x15F138u;
    ctx->pc = 0x15F13Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15F140u;
    goto label_15f140;
    ctx->pc = 0x15F140u;
label_15f140:
    // 0x15f140: 0x27bdffd0
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_15f144:
    // 0x15f144: 0xffb00000
    ctx->pc = 0x15f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f148:
    // 0x15f148: 0x80802d
    ctx->pc = 0x15f148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f14c:
    // 0x15f14c: 0xffb10008
    ctx->pc = 0x15f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15f150:
    // 0x15f150: 0xa0882d
    ctx->pc = 0x15f150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f154:
    // 0x15f154: 0xffb20010
    ctx->pc = 0x15f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15f158:
    // 0x15f158: 0xe0902d
    ctx->pc = 0x15f158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f15c:
    // 0x15f15c: 0xffb30018
    ctx->pc = 0x15f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15f160:
    // 0x15f160: 0xc0982d
    ctx->pc = 0x15f160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f164:
    // 0x15f164: 0xffbf0020
    ctx->pc = 0x15f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15f168:
    // 0x15f168: 0x8e02012c
    ctx->pc = 0x15f168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_15f16c:
    // 0x15f16c: 0xc057cbc
label_15f170:
    if (ctx->pc == 0x15F170u) {
        ctx->pc = 0x15F170u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->pc = 0x15F174u;
        goto label_15f174;
    }
    ctx->pc = 0x15F16Cu;
    SET_GPR_U32(ctx, 31, 0x15F174u);
    ctx->pc = 0x15F170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->pc = 0x15F2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F2F0_0x15f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F174u; }
    }
    if (ctx->pc != 0x15F174u) { return; }
    ctx->pc = 0x15F174u;
label_15f174:
    // 0x15f174: 0xc057bee
label_15f178:
    if (ctx->pc == 0x15F178u) {
        ctx->pc = 0x15F178u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F17Cu;
        goto label_15f17c;
    }
    ctx->pc = 0x15F174u;
    SET_GPR_U32(ctx, 31, 0x15F17Cu);
    ctx->pc = 0x15F178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EFB8_0x15efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F17Cu; }
    }
    if (ctx->pc != 0x15F17Cu) { return; }
    ctx->pc = 0x15F17Cu;
label_15f17c:
    // 0x15f17c: 0x200202d
    ctx->pc = 0x15f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f180:
    // 0x15f180: 0xc057db6
label_15f184:
    if (ctx->pc == 0x15F184u) {
        ctx->pc = 0x15F184u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F188u;
        goto label_15f188;
    }
    ctx->pc = 0x15F180u;
    SET_GPR_U32(ctx, 31, 0x15F188u);
    ctx->pc = 0x15F184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F6D8_0x15f6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F188u; }
    }
    if (ctx->pc != 0x15F188u) { return; }
    ctx->pc = 0x15F188u;
label_15f188:
    // 0x15f188: 0x200202d
    ctx->pc = 0x15f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f18c:
    // 0x15f18c: 0x260282d
    ctx->pc = 0x15f18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f190:
    // 0x15f190: 0xc057eaa
label_15f194:
    if (ctx->pc == 0x15F194u) {
        ctx->pc = 0x15F194u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F198u;
        goto label_15f198;
    }
    ctx->pc = 0x15F190u;
    SET_GPR_U32(ctx, 31, 0x15F198u);
    ctx->pc = 0x15F194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FAA8_0x15faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F198u; }
    }
    if (ctx->pc != 0x15F198u) { return; }
    ctx->pc = 0x15F198u;
label_15f198:
    // 0x15f198: 0x200202d
    ctx->pc = 0x15f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f19c:
    // 0x15f19c: 0x260282d
    ctx->pc = 0x15f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f1a0:
    // 0x15f1a0: 0xdfb30018
    ctx->pc = 0x15f1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f1a4:
    // 0x15f1a4: 0x240302d
    ctx->pc = 0x15f1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f1a8:
    // 0x15f1a8: 0xdfb20010
    ctx->pc = 0x15f1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f1ac:
    // 0x15f1ac: 0xdfb00000
    ctx->pc = 0x15f1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f1b0:
    // 0x15f1b0: 0xdfb10008
    ctx->pc = 0x15f1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f1b4:
    // 0x15f1b4: 0xdfbf0020
    ctx->pc = 0x15f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f1b8:
    // 0x15f1b8: 0x8057eac
label_15f1bc:
    if (ctx->pc == 0x15F1BCu) {
        ctx->pc = 0x15F1BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15F1C0u;
        goto label_15f1c0;
    }
    ctx->pc = 0x15F1B8u;
    ctx->pc = 0x15F1BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x15FAB0u;
    entry_15fab0_0x15fab8(rdram, ctx, runtime); return;
    ctx->pc = 0x15F1C0u;
label_15f1c0:
    // 0x15f1c0: 0x27bdffe0
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_15f1c4:
    // 0x15f1c4: 0xffb00000
    ctx->pc = 0x15f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f1c8:
    // 0x15f1c8: 0x80802d
    ctx->pc = 0x15f1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f1cc:
    // 0x15f1cc: 0xffb10008
    ctx->pc = 0x15f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15f1d0:
    // 0x15f1d0: 0xa0882d
    ctx->pc = 0x15f1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f1d4:
    // 0x15f1d4: 0xffb20010
    ctx->pc = 0x15f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15f1d8:
    // 0x15f1d8: 0xffbf0018
    ctx->pc = 0x15f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_15f1dc:
    // 0x15f1dc: 0xc057ff0
label_15f1e0:
    if (ctx->pc == 0x15F1E0u) {
        ctx->pc = 0x15F1E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1E4u;
        goto label_15f1e4;
    }
    ctx->pc = 0x15F1DCu;
    SET_GPR_U32(ctx, 31, 0x15F1E4u);
    ctx->pc = 0x15F1E0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1E4u; }
    }
    if (ctx->pc != 0x15F1E4u) { return; }
    ctx->pc = 0x15F1E4u;
label_15f1e4:
    // 0x15f1e4: 0x1440000a
label_15f1e8:
    if (ctx->pc == 0x15F1E8u) {
        ctx->pc = 0x15F1E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F1ECu;
        goto label_15f1ec;
    }
    ctx->pc = 0x15F1E4u;
    {
        const bool branch_taken_0x15f1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F1E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f1e4) {
            ctx->pc = 0x15F210u;
            goto label_15f210;
        }
    }
    ctx->pc = 0x15F1ECu;
label_15f1ec:
    // 0x15f1ec: 0x3c040024
    ctx->pc = 0x15f1ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15f1f0:
    // 0x15f1f0: 0xdfb00000
    ctx->pc = 0x15f1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f1f4:
    // 0x15f1f4: 0xdfb10008
    ctx->pc = 0x15f1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f1f8:
    // 0x15f1f8: 0x2484f120
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963488));
label_15f1fc:
    // 0x15f1fc: 0xdfb20010
    ctx->pc = 0x15f1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f200:
    // 0x15f200: 0xdfbf0018
    ctx->pc = 0x15f200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f204:
    // 0x15f204: 0x8058dd4
label_15f208:
    if (ctx->pc == 0x15F208u) {
        ctx->pc = 0x15F208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F20Cu;
        goto label_15f20c;
    }
    ctx->pc = 0x15F204u;
    ctx->pc = 0x15F208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F20Cu;
label_15f20c:
    // 0x15f20c: 0x0
    ctx->pc = 0x15f20cu;
    // NOP
label_15f210:
    // 0x15f210: 0xc057cbc
label_15f214:
    if (ctx->pc == 0x15F214u) {
        ctx->pc = 0x15F218u;
        goto label_15f218;
    }
    ctx->pc = 0x15F210u;
    SET_GPR_U32(ctx, 31, 0x15F218u);
    ctx->pc = 0x15F2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F2F0_0x15f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F218u; }
    }
    if (ctx->pc != 0x15F218u) { return; }
    ctx->pc = 0x15F218u;
label_15f218:
    // 0x15f218: 0x8e04014c
    ctx->pc = 0x15f218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_15f21c:
    // 0x15f21c: 0x8c830000
    ctx->pc = 0x15f21cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f220:
    // 0x15f220: 0x8c62000c
    ctx->pc = 0x15f220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_15f224:
    // 0x15f224: 0x40f809
label_15f228:
    if (ctx->pc == 0x15F228u) {
        ctx->pc = 0x15F22Cu;
        goto label_15f22c;
    }
    ctx->pc = 0x15F224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F22Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F0A8u: goto label_15f0a8;
            case 0x15F0ACu: goto label_15f0ac;
            case 0x15F0B0u: goto label_15f0b0;
            case 0x15F0B4u: goto label_15f0b4;
            case 0x15F0B8u: goto label_15f0b8;
            case 0x15F0BCu: goto label_15f0bc;
            case 0x15F0C0u: goto label_15f0c0;
            case 0x15F0C4u: goto label_15f0c4;
            case 0x15F0C8u: goto label_15f0c8;
            case 0x15F0CCu: goto label_15f0cc;
            case 0x15F0D0u: goto label_15f0d0;
            case 0x15F0D4u: goto label_15f0d4;
            case 0x15F0D8u: goto label_15f0d8;
            case 0x15F0DCu: goto label_15f0dc;
            case 0x15F0E0u: goto label_15f0e0;
            case 0x15F0E4u: goto label_15f0e4;
            case 0x15F0E8u: goto label_15f0e8;
            case 0x15F0ECu: goto label_15f0ec;
            case 0x15F0F0u: goto label_15f0f0;
            case 0x15F0F4u: goto label_15f0f4;
            case 0x15F0F8u: goto label_15f0f8;
            case 0x15F0FCu: goto label_15f0fc;
            case 0x15F100u: goto label_15f100;
            case 0x15F104u: goto label_15f104;
            case 0x15F108u: goto label_15f108;
            case 0x15F10Cu: goto label_15f10c;
            case 0x15F110u: goto label_15f110;
            case 0x15F114u: goto label_15f114;
            case 0x15F118u: goto label_15f118;
            case 0x15F11Cu: goto label_15f11c;
            case 0x15F120u: goto label_15f120;
            case 0x15F124u: goto label_15f124;
            case 0x15F128u: goto label_15f128;
            case 0x15F12Cu: goto label_15f12c;
            case 0x15F130u: goto label_15f130;
            case 0x15F134u: goto label_15f134;
            case 0x15F138u: goto label_15f138;
            case 0x15F13Cu: goto label_15f13c;
            case 0x15F140u: goto label_15f140;
            case 0x15F144u: goto label_15f144;
            case 0x15F148u: goto label_15f148;
            case 0x15F14Cu: goto label_15f14c;
            case 0x15F150u: goto label_15f150;
            case 0x15F154u: goto label_15f154;
            case 0x15F158u: goto label_15f158;
            case 0x15F15Cu: goto label_15f15c;
            case 0x15F160u: goto label_15f160;
            case 0x15F164u: goto label_15f164;
            case 0x15F168u: goto label_15f168;
            case 0x15F16Cu: goto label_15f16c;
            case 0x15F170u: goto label_15f170;
            case 0x15F174u: goto label_15f174;
            case 0x15F178u: goto label_15f178;
            case 0x15F17Cu: goto label_15f17c;
            case 0x15F180u: goto label_15f180;
            case 0x15F184u: goto label_15f184;
            case 0x15F188u: goto label_15f188;
            case 0x15F18Cu: goto label_15f18c;
            case 0x15F190u: goto label_15f190;
            case 0x15F194u: goto label_15f194;
            case 0x15F198u: goto label_15f198;
            case 0x15F19Cu: goto label_15f19c;
            case 0x15F1A0u: goto label_15f1a0;
            case 0x15F1A4u: goto label_15f1a4;
            case 0x15F1A8u: goto label_15f1a8;
            case 0x15F1ACu: goto label_15f1ac;
            case 0x15F1B0u: goto label_15f1b0;
            case 0x15F1B4u: goto label_15f1b4;
            case 0x15F1B8u: goto label_15f1b8;
            case 0x15F1BCu: goto label_15f1bc;
            case 0x15F1C0u: goto label_15f1c0;
            case 0x15F1C4u: goto label_15f1c4;
            case 0x15F1C8u: goto label_15f1c8;
            case 0x15F1CCu: goto label_15f1cc;
            case 0x15F1D0u: goto label_15f1d0;
            case 0x15F1D4u: goto label_15f1d4;
            case 0x15F1D8u: goto label_15f1d8;
            case 0x15F1DCu: goto label_15f1dc;
            case 0x15F1E0u: goto label_15f1e0;
            case 0x15F1E4u: goto label_15f1e4;
            case 0x15F1E8u: goto label_15f1e8;
            case 0x15F1ECu: goto label_15f1ec;
            case 0x15F1F0u: goto label_15f1f0;
            case 0x15F1F4u: goto label_15f1f4;
            case 0x15F1F8u: goto label_15f1f8;
            case 0x15F1FCu: goto label_15f1fc;
            case 0x15F200u: goto label_15f200;
            case 0x15F204u: goto label_15f204;
            case 0x15F208u: goto label_15f208;
            case 0x15F20Cu: goto label_15f20c;
            case 0x15F210u: goto label_15f210;
            case 0x15F214u: goto label_15f214;
            case 0x15F218u: goto label_15f218;
            case 0x15F21Cu: goto label_15f21c;
            case 0x15F220u: goto label_15f220;
            case 0x15F224u: goto label_15f224;
            case 0x15F228u: goto label_15f228;
            case 0x15F22Cu: goto label_15f22c;
            case 0x15F230u: goto label_15f230;
            case 0x15F234u: goto label_15f234;
            case 0x15F238u: goto label_15f238;
            case 0x15F23Cu: goto label_15f23c;
            case 0x15F240u: goto label_15f240;
            case 0x15F244u: goto label_15f244;
            case 0x15F248u: goto label_15f248;
            case 0x15F24Cu: goto label_15f24c;
            case 0x15F250u: goto label_15f250;
            case 0x15F254u: goto label_15f254;
            case 0x15F258u: goto label_15f258;
            case 0x15F25Cu: goto label_15f25c;
            case 0x15F260u: goto label_15f260;
            case 0x15F264u: goto label_15f264;
            case 0x15F268u: goto label_15f268;
            case 0x15F26Cu: goto label_15f26c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F22Cu; }
            if (ctx->pc != 0x15F22Cu) { return; }
        }
    }
    ctx->pc = 0x15F22Cu;
label_15f22c:
    // 0x15f22c: 0x220202d
    ctx->pc = 0x15f22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f230:
    // 0x15f230: 0xc04fcd8
label_15f234:
    if (ctx->pc == 0x15F234u) {
        ctx->pc = 0x15F234u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F238u;
        goto label_15f238;
    }
    ctx->pc = 0x15F230u;
    SET_GPR_U32(ctx, 31, 0x15F238u);
    ctx->pc = 0x15F234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F238u; }
    }
    if (ctx->pc != 0x15F238u) { return; }
    ctx->pc = 0x15F238u;
label_15f238:
    // 0x15f238: 0xae110150
    ctx->pc = 0x15f238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_15f23c:
    // 0x15f23c: 0xae020128
    ctx->pc = 0x15f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_15f240:
    // 0x15f240: 0x200202d
    ctx->pc = 0x15f240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f244:
    // 0x15f244: 0xae120154
    ctx->pc = 0x15f244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_15f248:
    // 0x15f248: 0xc057bee
label_15f24c:
    if (ctx->pc == 0x15F24Cu) {
        ctx->pc = 0x15F24Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x15F250u;
        goto label_15f250;
    }
    ctx->pc = 0x15F248u;
    SET_GPR_U32(ctx, 31, 0x15F250u);
    ctx->pc = 0x15F24Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    ctx->pc = 0x15EFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EFB8_0x15efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F250u; }
    }
    if (ctx->pc != 0x15F250u) { return; }
    ctx->pc = 0x15F250u;
label_15f250:
    // 0x15f250: 0x200202d
    ctx->pc = 0x15f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f254:
    // 0x15f254: 0xdfb10008
    ctx->pc = 0x15f254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15f258:
    // 0x15f258: 0xdfb00000
    ctx->pc = 0x15f258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f25c:
    // 0x15f25c: 0xdfb20010
    ctx->pc = 0x15f25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f260:
    // 0x15f260: 0xdfbf0018
    ctx->pc = 0x15f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f264:
    // 0x15f264: 0x8056fea
label_15f268:
    if (ctx->pc == 0x15F268u) {
        ctx->pc = 0x15F268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15F26Cu;
        goto label_15f26c;
    }
    ctx->pc = 0x15F264u;
    ctx->pc = 0x15F268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15BFA8u;
    sub_0015BFA8_0x15bfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x15F26Cu;
label_15f26c:
    // 0x15f26c: 0x0
    ctx->pc = 0x15f26cu;
    // NOP
}
