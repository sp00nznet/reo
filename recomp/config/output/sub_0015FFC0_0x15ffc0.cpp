#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FFC0
// Address: 0x15ffc0 - 0x160710
void sub_0015FFC0_0x15ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ffc0u;

label_15ffc0:
    // 0x15ffc0: 0x10800002
    ctx->pc = 0x15FFC0u;
    {
        const bool branch_taken_0x15ffc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FFC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ffc0) {
            ctx->pc = 0x15FFCCu;
            goto label_15ffcc;
        }
    }
    ctx->pc = 0x15FFC8u;
    // 0x15ffc8: 0x8c820004
    ctx->pc = 0x15ffc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15ffcc:
    // 0x15ffcc: 0x3e00008
    ctx->pc = 0x15FFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FFD4u;
    // 0x15ffd4: 0x0
    ctx->pc = 0x15ffd4u;
    // NOP
    // 0x15ffd8: 0x3e00008
    ctx->pc = 0x15FFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FFDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FFE0u;
    // 0x15ffe0: 0x3e00008
    ctx->pc = 0x15FFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FFE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FFE8u;
    // 0x15ffe8: 0x3e00008
    ctx->pc = 0x15FFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FFECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FFF0u;
    // 0x15fff0: 0x27bdffe0
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fff4: 0xffb00000
    ctx->pc = 0x15fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fff8: 0xa0802d
    ctx->pc = 0x15fff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fffc: 0xffb10008
    ctx->pc = 0x15fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160000: 0xffbf0010
    ctx->pc = 0x160000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160004: 0xc057ff0
    ctx->pc = 0x160004u;
    SET_GPR_U32(ctx, 31, 0x16000Cu);
    ctx->pc = 0x160008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x16000Cu;
label_16000c:
    // 0x16000c: 0x101940
    ctx->pc = 0x16000cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x160010: 0x3c040024
    ctx->pc = 0x160010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160014: 0x701823
    ctx->pc = 0x160014u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x160018: 0x2484f4e8
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964456));
    // 0x16001c: 0x24050036
    ctx->pc = 0x16001cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 54));
    // 0x160020: 0x14400007
    ctx->pc = 0x160020u;
    {
        const bool branch_taken_0x160020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160024u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x160020) {
            ctx->pc = 0x160040u;
            goto label_160040;
        }
    }
    ctx->pc = 0x160028u;
    // 0x160028: 0xdfb00000
    ctx->pc = 0x160028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16002c: 0xdfb10008
    ctx->pc = 0x16002cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160030: 0xdfbf0010
    ctx->pc = 0x160030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160034: 0x8058dd4
    ctx->pc = 0x160034u;
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x16003Cu;
    // 0x16003c: 0x0
    ctx->pc = 0x16003cu;
    // NOP
label_160040:
    // 0x160040: 0x703021
    ctx->pc = 0x160040u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x160044: 0xdfb00000
    ctx->pc = 0x160044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160048: 0x220202d
    ctx->pc = 0x160048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16004c: 0xdfb10008
    ctx->pc = 0x16004cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160050: 0xdfbf0010
    ctx->pc = 0x160050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160054: 0x630c0
    ctx->pc = 0x160054u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x160058: 0x8057fae
    ctx->pc = 0x160058u;
    ctx->pc = 0x16005Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15FEB8u;
    sub_0015FEB8_0x15feb8(rdram, ctx, runtime); return;
    ctx->pc = 0x160060u;
    // 0x160060: 0x27bdfff0
    ctx->pc = 0x160060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160064: 0xffb00000
    ctx->pc = 0x160064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160068: 0xffbf0008
    ctx->pc = 0x160068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16006c: 0xc057ff0
    ctx->pc = 0x16006Cu;
    SET_GPR_U32(ctx, 31, 0x160074u);
    ctx->pc = 0x160070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x160074u;
label_160074:
    // 0x160074: 0x2404fff4
    ctx->pc = 0x160074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x160078: 0x14400009
    ctx->pc = 0x160078u;
    {
        const bool branch_taken_0x160078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16007Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160078) {
            ctx->pc = 0x1600A0u;
            goto label_1600a0;
        }
    }
    ctx->pc = 0x160080u;
    // 0x160080: 0xc057abc
    ctx->pc = 0x160080u;
    SET_GPR_U32(ctx, 31, 0x160088u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160088u; }
    }
    if (ctx->pc != 0x160088u) { return; }
    ctx->pc = 0x160088u;
    // 0x160088: 0x3c040024
    ctx->pc = 0x160088u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16008c: 0xc058dd4
    ctx->pc = 0x16008Cu;
    SET_GPR_U32(ctx, 31, 0x160094u);
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964504));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160094u; }
    }
    if (ctx->pc != 0x160094u) { return; }
    ctx->pc = 0x160094u;
    // 0x160094: 0x10000010
    ctx->pc = 0x160094u;
    {
        const bool branch_taken_0x160094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160098u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160094) {
            ctx->pc = 0x1600D8u;
            goto label_1600d8;
        }
    }
    ctx->pc = 0x16009Cu;
    // 0x16009c: 0x0
    ctx->pc = 0x16009cu;
    // NOP
label_1600a0:
    // 0x1600a0: 0x8e020008
    ctx->pc = 0x1600a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1600a4: 0x5443000d
    ctx->pc = 0x1600A4u;
    {
        const bool branch_taken_0x1600a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1600a4) {
            ctx->pc = 0x1600A8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1600DCu;
            goto label_1600dc;
        }
    }
    ctx->pc = 0x1600ACu;
    // 0x1600ac: 0xc05d4be
    ctx->pc = 0x1600ACu;
    SET_GPR_U32(ctx, 31, 0x1600B4u);
    ctx->pc = 0x1600B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x1752F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001752F8_0x1752f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600B4u; }
    }
    if (ctx->pc != 0x1600B4u) { return; }
    ctx->pc = 0x1600B4u;
    // 0x1600b4: 0x24060006
    ctx->pc = 0x1600b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1600b8: 0x40182d
    ctx->pc = 0x1600b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600bc: 0x24050004
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1600c0: 0x10650004
    ctx->pc = 0x1600C0u;
    {
        const bool branch_taken_0x1600c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x1600C4u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
        if (branch_taken_0x1600c0) {
            ctx->pc = 0x1600D4u;
            goto label_1600d4;
        }
    }
    ctx->pc = 0x1600C8u;
    // 0x1600c8: 0x24020001
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1600cc: 0x14660002
    ctx->pc = 0x1600CCu;
    {
        const bool branch_taken_0x1600cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x1600D0u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
        if (branch_taken_0x1600cc) {
            ctx->pc = 0x1600D8u;
            goto label_1600d8;
        }
    }
    ctx->pc = 0x1600D4u;
label_1600d4:
    // 0x1600d4: 0x24020002
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1600d8:
    // 0x1600d8: 0xdfb00000
    ctx->pc = 0x1600d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1600dc:
    // 0x1600dc: 0xdfbf0008
    ctx->pc = 0x1600dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1600e0: 0x3e00008
    ctx->pc = 0x1600E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1600E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1600E8u;
    // 0x1600e8: 0x27bdfff0
    ctx->pc = 0x1600e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1600ec: 0x80102d
    ctx->pc = 0x1600ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600f0: 0xffbf0000
    ctx->pc = 0x1600f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1600f4: 0x14a00006
    ctx->pc = 0x1600F4u;
    {
        const bool branch_taken_0x1600f4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1600F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 64)));
        if (branch_taken_0x1600f4) {
            ctx->pc = 0x160110u;
            goto label_160110;
        }
    }
    ctx->pc = 0x1600FCu;
    // 0x1600fc: 0xdfbf0000
    ctx->pc = 0x1600fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160100: 0x2405000f
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x160104: 0x302d
    ctx->pc = 0x160104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160108: 0x805d4ce
    ctx->pc = 0x160108u;
    ctx->pc = 0x16010Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160110u;
label_160110:
    // 0x160110: 0x8c43000c
    ctx->pc = 0x160110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160114: 0x24020001
    ctx->pc = 0x160114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160118: 0x14620005
    ctx->pc = 0x160118u;
    {
        const bool branch_taken_0x160118 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16011Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x160118) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x160120u;
    // 0x160120: 0x2405000f
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x160124: 0x24060002
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160128: 0x805d4ce
    ctx->pc = 0x160128u;
    ctx->pc = 0x16012Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160130u;
label_160130:
    // 0x160130: 0x2405000f
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x160134: 0x24060001
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160138: 0x805d4ce
    ctx->pc = 0x160138u;
    ctx->pc = 0x16013Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160140u;
    // 0x160140: 0x27bdffe0
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160144: 0xffb00000
    ctx->pc = 0x160144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160148: 0xa0802d
    ctx->pc = 0x160148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16014c: 0xffb10008
    ctx->pc = 0x16014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160150: 0xffbf0010
    ctx->pc = 0x160150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160154: 0xc057ff0
    ctx->pc = 0x160154u;
    SET_GPR_U32(ctx, 31, 0x16015Cu);
    ctx->pc = 0x160158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x16015Cu;
label_16015c:
    // 0x16015c: 0x14400008
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160160u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x16015c) {
            ctx->pc = 0x160180u;
            goto label_160180;
        }
    }
    ctx->pc = 0x160164u;
    // 0x160164: 0xdfb00000
    ctx->pc = 0x160164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160168: 0xdfb10008
    ctx->pc = 0x160168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16016c: 0x2484f540
    ctx->pc = 0x16016cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964544));
    // 0x160170: 0xdfbf0010
    ctx->pc = 0x160170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160174: 0x8058dd4
    ctx->pc = 0x160174u;
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x16017Cu;
    // 0x16017c: 0x0
    ctx->pc = 0x16017cu;
    // NOP
label_160180:
    // 0x160180: 0x16000009
    ctx->pc = 0x160180u;
    {
        const bool branch_taken_0x160180 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x160184u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        if (branch_taken_0x160180) {
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x160188u;
    // 0x160188: 0xdfb00000
    ctx->pc = 0x160188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16018c: 0x2405000f
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x160190: 0xdfb10008
    ctx->pc = 0x160190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160194: 0x302d
    ctx->pc = 0x160194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160198: 0xdfbf0010
    ctx->pc = 0x160198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16019c: 0x805d4ce
    ctx->pc = 0x16019Cu;
    ctx->pc = 0x1601A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x1601A4u;
    // 0x1601a4: 0x0
    ctx->pc = 0x1601a4u;
    // NOP
label_1601a8:
    // 0x1601a8: 0x24030001
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1601ac: 0x16030008
    ctx->pc = 0x1601ACu;
    {
        const bool branch_taken_0x1601ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1601B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1601ac) {
            ctx->pc = 0x1601D0u;
            goto label_1601d0;
        }
    }
    ctx->pc = 0x1601B4u;
    // 0x1601b4: 0xdfb00000
    ctx->pc = 0x1601b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1601b8: 0x2405000f
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1601bc: 0xdfb10008
    ctx->pc = 0x1601bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1601c0: 0x24060001
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1601c4: 0xdfbf0010
    ctx->pc = 0x1601c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1601c8: 0x805d4ce
    ctx->pc = 0x1601C8u;
    ctx->pc = 0x1601CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x1601D0u;
label_1601d0:
    // 0x1601d0: 0x16020011
    ctx->pc = 0x1601D0u;
    {
        const bool branch_taken_0x1601d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1601D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1601d0) {
            ctx->pc = 0x160218u;
            goto label_160218;
        }
    }
    ctx->pc = 0x1601D8u;
    // 0x1601d8: 0x8e22000c
    ctx->pc = 0x1601d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1601dc: 0x14430008
    ctx->pc = 0x1601DCu;
    {
        const bool branch_taken_0x1601dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1601E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1601dc) {
            ctx->pc = 0x160200u;
            goto label_160200;
        }
    }
    ctx->pc = 0x1601E4u;
    // 0x1601e4: 0xdfb00000
    ctx->pc = 0x1601e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1601e8: 0xdfb10008
    ctx->pc = 0x1601e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1601ec: 0x24060002
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1601f0: 0xdfbf0010
    ctx->pc = 0x1601f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1601f4: 0x805d4ce
    ctx->pc = 0x1601F4u;
    ctx->pc = 0x1601F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x1601FCu;
    // 0x1601fc: 0x0
    ctx->pc = 0x1601fcu;
    // NOP
label_160200:
    // 0x160200: 0xdfb10008
    ctx->pc = 0x160200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160204: 0x24060001
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160208: 0xdfbf0010
    ctx->pc = 0x160208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16020c: 0x805d4ce
    ctx->pc = 0x16020Cu;
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160214u;
    // 0x160214: 0x0
    ctx->pc = 0x160214u;
    // NOP
label_160218:
    // 0x160218: 0xdfb10008
    ctx->pc = 0x160218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16021c: 0xdfbf0010
    ctx->pc = 0x16021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160220: 0x3e00008
    ctx->pc = 0x160220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160224u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160228u;
    // 0x160228: 0x27bdffe0
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16022c: 0xffb00010
    ctx->pc = 0x16022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x160230: 0xffbf0018
    ctx->pc = 0x160230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x160234: 0xc057ff0
    ctx->pc = 0x160234u;
    SET_GPR_U32(ctx, 31, 0x16023Cu);
    ctx->pc = 0x160238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x16023Cu;
label_16023c:
    // 0x16023c: 0x3a0302d
    ctx->pc = 0x16023cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160240: 0x14400007
    ctx->pc = 0x160240u;
    {
        const bool branch_taken_0x160240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160244u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x160240) {
            ctx->pc = 0x160260u;
            goto label_160260;
        }
    }
    ctx->pc = 0x160248u;
    // 0x160248: 0x3c040024
    ctx->pc = 0x160248u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16024c: 0xc058dd4
    ctx->pc = 0x16024Cu;
    SET_GPR_U32(ctx, 31, 0x160254u);
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964592));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160254u; }
    }
    if (ctx->pc != 0x160254u) { return; }
    ctx->pc = 0x160254u;
    // 0x160254: 0x10000017
    ctx->pc = 0x160254u;
    {
        const bool branch_taken_0x160254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160258u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x160254) {
            ctx->pc = 0x1602B4u;
            goto label_1602b4;
        }
    }
    ctx->pc = 0x16025Cu;
    // 0x16025c: 0x0
    ctx->pc = 0x16025cu;
    // NOP
label_160260:
    // 0x160260: 0xc05d562
    ctx->pc = 0x160260u;
    SET_GPR_U32(ctx, 31, 0x160268u);
    ctx->pc = 0x160264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x175588u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175588_0x175588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160268u; }
    }
    if (ctx->pc != 0x160268u) { return; }
    ctx->pc = 0x160268u;
    // 0x160268: 0x24030001
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16026c: 0x8fa40000
    ctx->pc = 0x16026cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160270: 0x24050001
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160274: 0x1083000e
    ctx->pc = 0x160274u;
    {
        const bool branch_taken_0x160274 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x160278u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x160274) {
            ctx->pc = 0x1602B0u;
            goto label_1602b0;
        }
    }
    ctx->pc = 0x16027Cu;
    // 0x16027c: 0x50400006
    ctx->pc = 0x16027Cu;
    {
        const bool branch_taken_0x16027c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16027c) {
            ctx->pc = 0x160280u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x160298u;
            goto label_160298;
        }
    }
    ctx->pc = 0x160284u;
    // 0x160284: 0x1080000a
    ctx->pc = 0x160284u;
    {
        const bool branch_taken_0x160284 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x160288u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160284) {
            ctx->pc = 0x1602B0u;
            goto label_1602b0;
        }
    }
    ctx->pc = 0x16028Cu;
    // 0x16028c: 0x10000005
    ctx->pc = 0x16028Cu;
    {
        const bool branch_taken_0x16028c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160290u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x16028c) {
            ctx->pc = 0x1602A4u;
            goto label_1602a4;
        }
    }
    ctx->pc = 0x160294u;
    // 0x160294: 0x0
    ctx->pc = 0x160294u;
    // NOP
label_160298:
    // 0x160298: 0x10820005
    ctx->pc = 0x160298u;
    {
        const bool branch_taken_0x160298 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x16029Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160298) {
            ctx->pc = 0x1602B0u;
            goto label_1602b0;
        }
    }
    ctx->pc = 0x1602A0u;
    // 0x1602a0: 0x3c040024
    ctx->pc = 0x1602a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1602a4:
    // 0x1602a4: 0xc058dd4
    ctx->pc = 0x1602A4u;
    SET_GPR_U32(ctx, 31, 0x1602ACu);
    ctx->pc = 0x1602A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964640));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602ACu; }
    }
    if (ctx->pc != 0x1602ACu) { return; }
    ctx->pc = 0x1602ACu;
    // 0x1602ac: 0x2405ffff
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1602b0:
    // 0x1602b0: 0xa0102d
    ctx->pc = 0x1602b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1602b4:
    // 0x1602b4: 0xdfb00010
    ctx->pc = 0x1602b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1602b8: 0xdfbf0018
    ctx->pc = 0x1602b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1602bc: 0x3e00008
    ctx->pc = 0x1602BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1602C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1602C4u;
    // 0x1602c4: 0x0
    ctx->pc = 0x1602c4u;
    // NOP
    // 0x1602c8: 0x27bdffe0
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1602cc: 0xffb00010
    ctx->pc = 0x1602ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1602d0: 0xffbf0018
    ctx->pc = 0x1602d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1602d4: 0xc057ff0
    ctx->pc = 0x1602D4u;
    SET_GPR_U32(ctx, 31, 0x1602DCu);
    ctx->pc = 0x1602D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x1602DCu;
label_1602dc:
    // 0x1602dc: 0x3c040024
    ctx->pc = 0x1602dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1602e0: 0x3a0282d
    ctx->pc = 0x1602e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602e4: 0x14400006
    ctx->pc = 0x1602E4u;
    {
        const bool branch_taken_0x1602e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1602E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964688));
        if (branch_taken_0x1602e4) {
            ctx->pc = 0x160300u;
            goto label_160300;
        }
    }
    ctx->pc = 0x1602ECu;
    // 0x1602ec: 0xc058dd4
    ctx->pc = 0x1602ECu;
    SET_GPR_U32(ctx, 31, 0x1602F4u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602F4u; }
    }
    if (ctx->pc != 0x1602F4u) { return; }
    ctx->pc = 0x1602F4u;
    // 0x1602f4: 0x1000000a
    ctx->pc = 0x1602F4u;
    {
        const bool branch_taken_0x1602f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1602F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1602f4) {
            ctx->pc = 0x160320u;
            goto label_160320;
        }
    }
    ctx->pc = 0x1602FCu;
    // 0x1602fc: 0x0
    ctx->pc = 0x1602fcu;
    // NOP
label_160300:
    // 0x160300: 0xc05afe0
    ctx->pc = 0x160300u;
    SET_GPR_U32(ctx, 31, 0x160308u);
    ctx->pc = 0x160304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x16BF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BF80_0x16bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160308u; }
    }
    if (ctx->pc != 0x160308u) { return; }
    ctx->pc = 0x160308u;
    // 0x160308: 0x3c040024
    ctx->pc = 0x160308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16030c: 0x10400003
    ctx->pc = 0x16030Cu;
    {
        const bool branch_taken_0x16030c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160310u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964744));
        if (branch_taken_0x16030c) {
            ctx->pc = 0x16031Cu;
            goto label_16031c;
        }
    }
    ctx->pc = 0x160314u;
    // 0x160314: 0xc058dd4
    ctx->pc = 0x160314u;
    SET_GPR_U32(ctx, 31, 0x16031Cu);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16031Cu; }
    }
    if (ctx->pc != 0x16031Cu) { return; }
    ctx->pc = 0x16031Cu;
label_16031c:
    // 0x16031c: 0x8fa20000
    ctx->pc = 0x16031cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160320:
    // 0x160320: 0xdfb00010
    ctx->pc = 0x160320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160324: 0xdfbf0018
    ctx->pc = 0x160324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160328: 0x3e00008
    ctx->pc = 0x160328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16032Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160330u;
    // 0x160330: 0x27bdffb0
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x160334: 0xffb00040
    ctx->pc = 0x160334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x160338: 0xffbf0048
    ctx->pc = 0x160338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16033c: 0xc057ff0
    ctx->pc = 0x16033Cu;
    SET_GPR_U32(ctx, 31, 0x160344u);
    ctx->pc = 0x160340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x160344u;
label_160344:
    // 0x160344: 0x3a0282d
    ctx->pc = 0x160344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160348: 0x14400007
    ctx->pc = 0x160348u;
    {
        const bool branch_taken_0x160348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16034Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160348) {
            ctx->pc = 0x160368u;
            goto label_160368;
        }
    }
    ctx->pc = 0x160350u;
    // 0x160350: 0x3c040024
    ctx->pc = 0x160350u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160354: 0xc058dd4
    ctx->pc = 0x160354u;
    SET_GPR_U32(ctx, 31, 0x16035Cu);
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964776));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16035Cu; }
    }
    if (ctx->pc != 0x16035Cu) { return; }
    ctx->pc = 0x16035Cu;
    // 0x16035c: 0x10000005
    ctx->pc = 0x16035Cu;
    {
        const bool branch_taken_0x16035c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160360u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16035c) {
            ctx->pc = 0x160374u;
            goto label_160374;
        }
    }
    ctx->pc = 0x160364u;
    // 0x160364: 0x0
    ctx->pc = 0x160364u;
    // NOP
label_160368:
    // 0x160368: 0xc057fa2
    ctx->pc = 0x160368u;
    SET_GPR_U32(ctx, 31, 0x160370u);
    ctx->pc = 0x15FE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE88_0x15fe88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160370u; }
    }
    if (ctx->pc != 0x160370u) { return; }
    ctx->pc = 0x160370u;
    // 0x160370: 0x8fa20000
    ctx->pc = 0x160370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160374:
    // 0x160374: 0xdfb00040
    ctx->pc = 0x160374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160378: 0xdfbf0048
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16037c: 0x3e00008
    ctx->pc = 0x16037Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160384u;
    // 0x160384: 0x0
    ctx->pc = 0x160384u;
    // NOP
    // 0x160388: 0x27bdffd0
    ctx->pc = 0x160388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16038c: 0xffbf0020
    ctx->pc = 0x16038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x160390: 0x3a0282d
    ctx->pc = 0x160390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160394: 0xc05cf8e
    ctx->pc = 0x160394u;
    SET_GPR_U32(ctx, 31, 0x16039Cu);
    ctx->pc = 0x160398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x173E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E38_0x173e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16039Cu; }
    }
    if (ctx->pc != 0x16039Cu) { return; }
    ctx->pc = 0x16039Cu;
    // 0x16039c: 0x8fa30004
    ctx->pc = 0x16039cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1603a0: 0x8fa2000c
    ctx->pc = 0x1603a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1603a4: 0xdfbf0020
    ctx->pc = 0x1603a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1603a8: 0x621021
    ctx->pc = 0x1603a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1603ac: 0x3e00008
    ctx->pc = 0x1603ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1603B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1603B4u;
    // 0x1603b4: 0x0
    ctx->pc = 0x1603b4u;
    // NOP
    // 0x1603b8: 0x27bdffe0
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1603bc: 0xffb00000
    ctx->pc = 0x1603bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1603c0: 0xa0802d
    ctx->pc = 0x1603c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603c4: 0xffb10008
    ctx->pc = 0x1603c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1603c8: 0xc0882d
    ctx->pc = 0x1603c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603cc: 0xffb20010
    ctx->pc = 0x1603ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1603d0: 0xffbf0018
    ctx->pc = 0x1603d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1603d4: 0xc057ff0
    ctx->pc = 0x1603D4u;
    SET_GPR_U32(ctx, 31, 0x1603DCu);
    ctx->pc = 0x1603D8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x1603DCu;
label_1603dc:
    // 0x1603dc: 0x3c040024
    ctx->pc = 0x1603dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1603e0: 0x200282d
    ctx->pc = 0x1603e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603e4: 0x2484f660
    ctx->pc = 0x1603e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964832));
    // 0x1603e8: 0x14400005
    ctx->pc = 0x1603E8u;
    {
        const bool branch_taken_0x1603e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1603ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1603e8) {
            ctx->pc = 0x160400u;
            goto label_160400;
        }
    }
    ctx->pc = 0x1603F0u;
    // 0x1603f0: 0xc058dd4
    ctx->pc = 0x1603F0u;
    SET_GPR_U32(ctx, 31, 0x1603F8u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F8u; }
    }
    if (ctx->pc != 0x1603F8u) { return; }
    ctx->pc = 0x1603F8u;
    // 0x1603f8: 0x10000011
    ctx->pc = 0x1603F8u;
    {
        const bool branch_taken_0x1603f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1603FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1603f8) {
            ctx->pc = 0x160440u;
            goto label_160440;
        }
    }
    ctx->pc = 0x160400u;
label_160400:
    // 0x160400: 0xc05d866
    ctx->pc = 0x160400u;
    SET_GPR_U32(ctx, 31, 0x160408u);
    ctx->pc = 0x160404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x176198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176198_0x176198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160408u; }
    }
    if (ctx->pc != 0x160408u) { return; }
    ctx->pc = 0x160408u;
    // 0x160408: 0x10400009
    ctx->pc = 0x160408u;
    {
        const bool branch_taken_0x160408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16040Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966987));
        if (branch_taken_0x160408) {
            ctx->pc = 0x160430u;
            goto label_160430;
        }
    }
    ctx->pc = 0x160410u;
    // 0x160410: 0xc057abc
    ctx->pc = 0x160410u;
    SET_GPR_U32(ctx, 31, 0x160418u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160418u; }
    }
    if (ctx->pc != 0x160418u) { return; }
    ctx->pc = 0x160418u;
    // 0x160418: 0x3c040024
    ctx->pc = 0x160418u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x16041c: 0xc058dd4
    ctx->pc = 0x16041Cu;
    SET_GPR_U32(ctx, 31, 0x160424u);
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964880));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160424u; }
    }
    if (ctx->pc != 0x160424u) { return; }
    ctx->pc = 0x160424u;
    // 0x160424: 0xae000000
    ctx->pc = 0x160424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160428: 0x24020001
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16042c: 0xae220000
    ctx->pc = 0x16042cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_160430:
    // 0x160430: 0x8e020000
    ctx->pc = 0x160430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160434: 0x4430005
    ctx->pc = 0x160434u;
    {
        const bool branch_taken_0x160434 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x160434) {
            ctx->pc = 0x160438u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16044Cu;
            goto label_16044c;
        }
    }
    ctx->pc = 0x16043Cu;
    // 0x16043c: 0x24020001
    ctx->pc = 0x16043cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_160440:
    // 0x160440: 0xae000000
    ctx->pc = 0x160440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160444: 0xae220000
    ctx->pc = 0x160444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x160448: 0xdfb00000
    ctx->pc = 0x160448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16044c:
    // 0x16044c: 0xdfb10008
    ctx->pc = 0x16044cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160450: 0xdfb20010
    ctx->pc = 0x160450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160454: 0xdfbf0018
    ctx->pc = 0x160454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160458: 0x3e00008
    ctx->pc = 0x160458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16045Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160460u;
    // 0x160460: 0x27bdfff0
    ctx->pc = 0x160460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160464: 0xa0302d
    ctx->pc = 0x160464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160468: 0xffbf0000
    ctx->pc = 0x160468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16046c: 0x24050003
    ctx->pc = 0x16046cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160470: 0x8c840040
    ctx->pc = 0x160470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x160474: 0xdfbf0000
    ctx->pc = 0x160474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160478: 0x805afb2
    ctx->pc = 0x160478u;
    ctx->pc = 0x16047Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16BEC8u;
    entry_16bec8_0x16bf80(rdram, ctx, runtime); return;
    ctx->pc = 0x160480u;
    // 0x160480: 0x27bdfff0
    ctx->pc = 0x160480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160484: 0xa0302d
    ctx->pc = 0x160484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160488: 0xffbf0000
    ctx->pc = 0x160488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16048c: 0x24050005
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x160490: 0x8c840040
    ctx->pc = 0x160490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x160494: 0xdfbf0000
    ctx->pc = 0x160494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160498: 0x805afb2
    ctx->pc = 0x160498u;
    ctx->pc = 0x16049Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16BEC8u;
    entry_16bec8_0x16bf80(rdram, ctx, runtime); return;
    ctx->pc = 0x1604A0u;
    // 0x1604a0: 0x27bdffe0
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1604a4: 0xffb00000
    ctx->pc = 0x1604a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1604a8: 0xa0802d
    ctx->pc = 0x1604a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604ac: 0xffb10008
    ctx->pc = 0x1604acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1604b0: 0xffbf0010
    ctx->pc = 0x1604b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1604b4: 0xc057ff0
    ctx->pc = 0x1604B4u;
    SET_GPR_U32(ctx, 31, 0x1604BCu);
    ctx->pc = 0x1604B8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x1604BCu;
label_1604bc:
    // 0x1604bc: 0x3c040024
    ctx->pc = 0x1604bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1604c0: 0x200282d
    ctx->pc = 0x1604c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604c4: 0x14400006
    ctx->pc = 0x1604C4u;
    {
        const bool branch_taken_0x1604c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1604C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964920));
        if (branch_taken_0x1604c4) {
            ctx->pc = 0x1604E0u;
            goto label_1604e0;
        }
    }
    ctx->pc = 0x1604CCu;
    // 0x1604cc: 0xdfb00000
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1604d0: 0xdfb10008
    ctx->pc = 0x1604d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1604d4: 0xdfbf0010
    ctx->pc = 0x1604d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1604d8: 0x8058dd4
    ctx->pc = 0x1604D8u;
    ctx->pc = 0x1604DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0x220202d
    ctx->pc = 0x1604e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604e4: 0xdfb10008
    ctx->pc = 0x1604e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1604e8: 0xdfb00000
    ctx->pc = 0x1604e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1604ec: 0xdfbf0010
    ctx->pc = 0x1604ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1604f0: 0x8057de4
    ctx->pc = 0x1604F0u;
    ctx->pc = 0x1604F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15F790u;
    entry_15f790_0x15f7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1604F8u;
    // 0x1604f8: 0x27bdfff0
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1604fc: 0xffb00000
    ctx->pc = 0x1604fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160500: 0xffbf0008
    ctx->pc = 0x160500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160504: 0xc057ff0
    ctx->pc = 0x160504u;
    SET_GPR_U32(ctx, 31, 0x16050Cu);
    ctx->pc = 0x160508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x16050Cu;
label_16050c:
    // 0x16050c: 0x1440000a
    ctx->pc = 0x16050Cu;
    {
        const bool branch_taken_0x16050c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160510u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16050c) {
            ctx->pc = 0x160538u;
            goto label_160538;
        }
    }
    ctx->pc = 0x160514u;
    // 0x160514: 0x3c040024
    ctx->pc = 0x160514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160518: 0xc058dd4
    ctx->pc = 0x160518u;
    SET_GPR_U32(ctx, 31, 0x160520u);
    ctx->pc = 0x16051Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964968));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160520u; }
    }
    if (ctx->pc != 0x160520u) { return; }
    ctx->pc = 0x160520u;
    // 0x160520: 0x102d
    ctx->pc = 0x160520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160524: 0xdfb00000
    ctx->pc = 0x160524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160528: 0xdfbf0008
    ctx->pc = 0x160528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16052c: 0x3e00008
    ctx->pc = 0x16052Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160534u;
    // 0x160534: 0x0
    ctx->pc = 0x160534u;
    // NOP
label_160538:
    // 0x160538: 0xdfb00000
    ctx->pc = 0x160538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16053c: 0xdfbf0008
    ctx->pc = 0x16053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160540: 0x8057dea
    ctx->pc = 0x160540u;
    ctx->pc = 0x160544u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15F7A8u;
    entry_15f7a8_0x15f7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x160548u;
    // 0x160548: 0x27bdffe0
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16054c: 0xffb00000
    ctx->pc = 0x16054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160550: 0xa0802d
    ctx->pc = 0x160550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160554: 0xffb10008
    ctx->pc = 0x160554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160558: 0x80882d
    ctx->pc = 0x160558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16055c: 0xffb20010
    ctx->pc = 0x16055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x160560: 0xffbf0018
    ctx->pc = 0x160560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x160564: 0xc057ff0
    ctx->pc = 0x160564u;
    SET_GPR_U32(ctx, 31, 0x16056Cu);
    ctx->pc = 0x160568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x16056Cu;
label_16056c:
    // 0x16056c: 0x220202d
    ctx->pc = 0x16056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160570: 0x200282d
    ctx->pc = 0x160570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160574: 0x1440000a
    ctx->pc = 0x160574u;
    {
        const bool branch_taken_0x160574 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160578u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160574) {
            ctx->pc = 0x1605A0u;
            goto label_1605a0;
        }
    }
    ctx->pc = 0x16057Cu;
    // 0x16057c: 0x3c040024
    ctx->pc = 0x16057cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x160580: 0xdfb00000
    ctx->pc = 0x160580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160584: 0xdfb10008
    ctx->pc = 0x160584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160588: 0x2484f718
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965016));
    // 0x16058c: 0xdfb20010
    ctx->pc = 0x16058cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160590: 0xdfbf0018
    ctx->pc = 0x160590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160594: 0x8058dd4
    ctx->pc = 0x160594u;
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x16059Cu;
    // 0x16059c: 0x0
    ctx->pc = 0x16059cu;
    // NOP
label_1605a0:
    // 0x1605a0: 0xdfb00000
    ctx->pc = 0x1605a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1605a4: 0xdfb10008
    ctx->pc = 0x1605a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1605a8: 0xdfb20010
    ctx->pc = 0x1605a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1605ac: 0xdfbf0018
    ctx->pc = 0x1605acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1605b0: 0x8057df0
    ctx->pc = 0x1605B0u;
    ctx->pc = 0x1605B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15F7C0u;
    entry_15f7c0_0x15f7d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1605B8u;
    // 0x1605b8: 0x27bdffe0
    ctx->pc = 0x1605b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1605bc: 0xffb00000
    ctx->pc = 0x1605bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1605c0: 0x80802d
    ctx->pc = 0x1605c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605c4: 0xffb10008
    ctx->pc = 0x1605c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1605c8: 0xffbf0010
    ctx->pc = 0x1605c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1605cc: 0xc057ff0
    ctx->pc = 0x1605CCu;
    SET_GPR_U32(ctx, 31, 0x1605D4u);
    ctx->pc = 0x1605D0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    goto label_15ffc0;
    ctx->pc = 0x1605D4u;
label_1605d4:
    // 0x1605d4: 0x200202d
    ctx->pc = 0x1605d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605d8: 0x1440000b
    ctx->pc = 0x1605D8u;
    {
        const bool branch_taken_0x1605d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1605DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1605d8) {
            ctx->pc = 0x160608u;
            goto label_160608;
        }
    }
    ctx->pc = 0x1605E0u;
    // 0x1605e0: 0x3c040024
    ctx->pc = 0x1605e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1605e4: 0xc058dd4
    ctx->pc = 0x1605E4u;
    SET_GPR_U32(ctx, 31, 0x1605ECu);
    ctx->pc = 0x1605E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965064));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605ECu; }
    }
    if (ctx->pc != 0x1605ECu) { return; }
    ctx->pc = 0x1605ECu;
    // 0x1605ec: 0x102d
    ctx->pc = 0x1605ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605f0: 0xdfb00000
    ctx->pc = 0x1605f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1605f4: 0xdfb10008
    ctx->pc = 0x1605f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1605f8: 0xdfbf0010
    ctx->pc = 0x1605f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1605fc: 0x3e00008
    ctx->pc = 0x1605FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160604u;
    // 0x160604: 0x0
    ctx->pc = 0x160604u;
    // NOP
label_160608:
    // 0x160608: 0xdfb00000
    ctx->pc = 0x160608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16060c: 0xdfb10008
    ctx->pc = 0x16060cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160610: 0xdfbf0010
    ctx->pc = 0x160610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160614: 0x8057df6
    ctx->pc = 0x160614u;
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15F7D8u;
    entry_15f7d8_0x15f7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x16061Cu;
    // 0x16061c: 0x0
    ctx->pc = 0x16061cu;
    // NOP
    // 0x160620: 0x27bdfff0
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160624: 0x24020001
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160628: 0xffbf0000
    ctx->pc = 0x160628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16062c: 0x14a20006
    ctx->pc = 0x16062Cu;
    {
        const bool branch_taken_0x16062c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x160630u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x16062c) {
            ctx->pc = 0x160648u;
            goto label_160648;
        }
    }
    ctx->pc = 0x160634u;
    // 0x160634: 0xdfbf0000
    ctx->pc = 0x160634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160638: 0x24050004
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16063c: 0x24060001
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160640: 0x805afb2
    ctx->pc = 0x160640u;
    ctx->pc = 0x160644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16BEC8u;
    entry_16bec8_0x16bf80(rdram, ctx, runtime); return;
    ctx->pc = 0x160648u;
label_160648:
    // 0x160648: 0xdfbf0000
    ctx->pc = 0x160648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16064c: 0x24050004
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x160650: 0x302d
    ctx->pc = 0x160650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160654: 0x805afb2
    ctx->pc = 0x160654u;
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16BEC8u;
    entry_16bec8_0x16bf80(rdram, ctx, runtime); return;
    ctx->pc = 0x16065Cu;
    // 0x16065c: 0x0
    ctx->pc = 0x16065cu;
    // NOP
    // 0x160660: 0x27bdfff0
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160664: 0x24020001
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160668: 0xffbf0000
    ctx->pc = 0x160668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16066c: 0x14a20006
    ctx->pc = 0x16066Cu;
    {
        const bool branch_taken_0x16066c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x160670u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x16066c) {
            ctx->pc = 0x160688u;
            goto label_160688;
        }
    }
    ctx->pc = 0x160674u;
    // 0x160674: 0xdfbf0000
    ctx->pc = 0x160674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160678: 0x24050027
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    // 0x16067c: 0x24060001
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160680: 0x805d4ce
    ctx->pc = 0x160680u;
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160688u;
label_160688:
    // 0x160688: 0xdfbf0000
    ctx->pc = 0x160688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16068c: 0x24050027
    ctx->pc = 0x16068cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    // 0x160690: 0x302d
    ctx->pc = 0x160690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160694: 0x805d4ce
    ctx->pc = 0x160694u;
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x16069Cu;
    // 0x16069c: 0x0
    ctx->pc = 0x16069cu;
    // NOP
    // 0x1606a0: 0x27bdfff0
    ctx->pc = 0x1606a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1606a4: 0xa0302d
    ctx->pc = 0x1606a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606a8: 0xffbf0000
    ctx->pc = 0x1606a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1606ac: 0x24050024
    ctx->pc = 0x1606acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1606b0: 0x10800005
    ctx->pc = 0x1606B0u;
    {
        const bool branch_taken_0x1606b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1606B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x1606b0) {
            ctx->pc = 0x1606C8u;
            goto label_1606c8;
        }
    }
    ctx->pc = 0x1606B8u;
    // 0x1606b8: 0xdfbf0000
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606bc: 0x40202d
    ctx->pc = 0x1606bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606c0: 0x805d4ce
    ctx->pc = 0x1606C0u;
    ctx->pc = 0x1606C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x1606C8u;
label_1606c8:
    // 0x1606c8: 0xdfbf0000
    ctx->pc = 0x1606c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606cc: 0x3e00008
    ctx->pc = 0x1606CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1606D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1606D4u;
    // 0x1606d4: 0x0
    ctx->pc = 0x1606d4u;
    // NOP
    // 0x1606d8: 0x27bdfff0
    ctx->pc = 0x1606d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1606dc: 0xa0302d
    ctx->pc = 0x1606dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606e0: 0xffbf0000
    ctx->pc = 0x1606e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1606e4: 0x24050025
    ctx->pc = 0x1606e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
    // 0x1606e8: 0x10800005
    ctx->pc = 0x1606E8u;
    {
        const bool branch_taken_0x1606e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1606ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x1606e8) {
            ctx->pc = 0x160700u;
            goto label_160700;
        }
    }
    ctx->pc = 0x1606F0u;
    // 0x1606f0: 0xdfbf0000
    ctx->pc = 0x1606f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606f4: 0x40202d
    ctx->pc = 0x1606f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606f8: 0x805d4ce
    ctx->pc = 0x1606F8u;
    ctx->pc = 0x1606FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x160700u;
label_160700:
    // 0x160700: 0xdfbf0000
    ctx->pc = 0x160700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160704: 0x3e00008
    ctx->pc = 0x160704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FFC0u: goto label_15ffc0;
            case 0x15FFCCu: goto label_15ffcc;
            case 0x16000Cu: goto label_16000c;
            case 0x160040u: goto label_160040;
            case 0x160074u: goto label_160074;
            case 0x1600A0u: goto label_1600a0;
            case 0x1600D4u: goto label_1600d4;
            case 0x1600D8u: goto label_1600d8;
            case 0x1600DCu: goto label_1600dc;
            case 0x160110u: goto label_160110;
            case 0x160130u: goto label_160130;
            case 0x16015Cu: goto label_16015c;
            case 0x160180u: goto label_160180;
            case 0x1601A8u: goto label_1601a8;
            case 0x1601D0u: goto label_1601d0;
            case 0x160200u: goto label_160200;
            case 0x160218u: goto label_160218;
            case 0x16023Cu: goto label_16023c;
            case 0x160260u: goto label_160260;
            case 0x160298u: goto label_160298;
            case 0x1602A4u: goto label_1602a4;
            case 0x1602B0u: goto label_1602b0;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602DCu: goto label_1602dc;
            case 0x160300u: goto label_160300;
            case 0x16031Cu: goto label_16031c;
            case 0x160320u: goto label_160320;
            case 0x160344u: goto label_160344;
            case 0x160368u: goto label_160368;
            case 0x160374u: goto label_160374;
            case 0x1603DCu: goto label_1603dc;
            case 0x160400u: goto label_160400;
            case 0x160430u: goto label_160430;
            case 0x160440u: goto label_160440;
            case 0x16044Cu: goto label_16044c;
            case 0x1604BCu: goto label_1604bc;
            case 0x1604E0u: goto label_1604e0;
            case 0x16050Cu: goto label_16050c;
            case 0x160538u: goto label_160538;
            case 0x16056Cu: goto label_16056c;
            case 0x1605A0u: goto label_1605a0;
            case 0x1605D4u: goto label_1605d4;
            case 0x160608u: goto label_160608;
            case 0x160648u: goto label_160648;
            case 0x160688u: goto label_160688;
            case 0x1606C8u: goto label_1606c8;
            case 0x160700u: goto label_160700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16070Cu;
    // 0x16070c: 0x0
    ctx->pc = 0x16070cu;
    // NOP
}
