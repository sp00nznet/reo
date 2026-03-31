#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013B110
// Address: 0x13b110 - 0x13b1d8
void sub_0013B110_0x13b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13b110u;

label_13b110:
    // 0x13b110: 0x27bdfff0
    ctx->pc = 0x13b110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13b114:
    // 0x13b114: 0xffb00000
    ctx->pc = 0x13b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13b118:
    // 0x13b118: 0x80802d
    ctx->pc = 0x13b118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b11c:
    // 0x13b11c: 0xffbf0008
    ctx->pc = 0x13b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13b120:
    // 0x13b120: 0x8e02002c
    ctx->pc = 0x13b120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_13b124:
    // 0x13b124: 0x50400028
label_13b128:
    if (ctx->pc == 0x13B128u) {
        ctx->pc = 0x13B128u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13B12Cu;
        goto label_13b12c;
    }
    ctx->pc = 0x13B124u;
    {
        const bool branch_taken_0x13b124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13b124) {
            ctx->pc = 0x13B128u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13B1C8u;
            goto label_13b1c8;
        }
    }
    ctx->pc = 0x13B12Cu;
label_13b12c:
    // 0x13b12c: 0xc0505c0
label_13b130:
    if (ctx->pc == 0x13B130u) {
        ctx->pc = 0x13B134u;
        goto label_13b134;
    }
    ctx->pc = 0x13B12Cu;
    SET_GPR_U32(ctx, 31, 0x13B134u);
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B134u; }
    }
    if (ctx->pc != 0x13B134u) { return; }
    ctx->pc = 0x13B134u;
label_13b134:
    // 0x13b134: 0xc04dd82
label_13b138:
    if (ctx->pc == 0x13B138u) {
        ctx->pc = 0x13B138u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x13B13Cu;
        goto label_13b13c;
    }
    ctx->pc = 0x13B134u;
    SET_GPR_U32(ctx, 31, 0x13B13Cu);
    ctx->pc = 0x13B138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x137608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137608_0x137608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B13Cu; }
    }
    if (ctx->pc != 0x13B13Cu) { return; }
    ctx->pc = 0x13B13Cu;
label_13b13c:
    // 0x13b13c: 0x40182d
    ctx->pc = 0x13b13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b140:
    // 0x13b140: 0x2c62000a
    ctx->pc = 0x13b140u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_13b144:
    // 0x13b144: 0x5040001c
label_13b148:
    if (ctx->pc == 0x13B148u) {
        ctx->pc = 0x13B148u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13B14Cu;
        goto label_13b14c;
    }
    ctx->pc = 0x13B144u;
    {
        const bool branch_taken_0x13b144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13b144) {
            ctx->pc = 0x13B148u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13B1B8u;
            goto label_13b1b8;
        }
    }
    ctx->pc = 0x13B14Cu;
label_13b14c:
    // 0x13b14c: 0x31080
    ctx->pc = 0x13b14cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_13b150:
    // 0x13b150: 0x3c030024
    ctx->pc = 0x13b150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_13b154:
    // 0x13b154: 0x621821
    ctx->pc = 0x13b154u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13b158:
    // 0x13b158: 0x8c63ce30
    ctx->pc = 0x13b158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954544)));
label_13b15c:
    // 0x13b15c: 0x600008
label_13b160:
    if (ctx->pc == 0x13B160u) {
        ctx->pc = 0x13B164u;
        goto label_13b164;
    }
    ctx->pc = 0x13B15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B110u: goto label_13b110;
            case 0x13B114u: goto label_13b114;
            case 0x13B118u: goto label_13b118;
            case 0x13B11Cu: goto label_13b11c;
            case 0x13B120u: goto label_13b120;
            case 0x13B124u: goto label_13b124;
            case 0x13B128u: goto label_13b128;
            case 0x13B12Cu: goto label_13b12c;
            case 0x13B130u: goto label_13b130;
            case 0x13B134u: goto label_13b134;
            case 0x13B138u: goto label_13b138;
            case 0x13B13Cu: goto label_13b13c;
            case 0x13B140u: goto label_13b140;
            case 0x13B144u: goto label_13b144;
            case 0x13B148u: goto label_13b148;
            case 0x13B14Cu: goto label_13b14c;
            case 0x13B150u: goto label_13b150;
            case 0x13B154u: goto label_13b154;
            case 0x13B158u: goto label_13b158;
            case 0x13B15Cu: goto label_13b15c;
            case 0x13B160u: goto label_13b160;
            case 0x13B164u: goto label_13b164;
            case 0x13B168u: goto label_13b168;
            case 0x13B16Cu: goto label_13b16c;
            case 0x13B170u: goto label_13b170;
            case 0x13B174u: goto label_13b174;
            case 0x13B178u: goto label_13b178;
            case 0x13B17Cu: goto label_13b17c;
            case 0x13B180u: goto label_13b180;
            case 0x13B184u: goto label_13b184;
            case 0x13B188u: goto label_13b188;
            case 0x13B18Cu: goto label_13b18c;
            case 0x13B190u: goto label_13b190;
            case 0x13B194u: goto label_13b194;
            case 0x13B198u: goto label_13b198;
            case 0x13B19Cu: goto label_13b19c;
            case 0x13B1A0u: goto label_13b1a0;
            case 0x13B1A4u: goto label_13b1a4;
            case 0x13B1A8u: goto label_13b1a8;
            case 0x13B1ACu: goto label_13b1ac;
            case 0x13B1B0u: goto label_13b1b0;
            case 0x13B1B4u: goto label_13b1b4;
            case 0x13B1B8u: goto label_13b1b8;
            case 0x13B1BCu: goto label_13b1bc;
            case 0x13B1C0u: goto label_13b1c0;
            case 0x13B1C4u: goto label_13b1c4;
            case 0x13B1C8u: goto label_13b1c8;
            case 0x13B1CCu: goto label_13b1cc;
            case 0x13B1D0u: goto label_13b1d0;
            case 0x13B1D4u: goto label_13b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B164u;
label_13b164:
    // 0x13b164: 0x0
    ctx->pc = 0x13b164u;
    // NOP
label_13b168:
    // 0x13b168: 0x24020003
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_13b16c:
    // 0x13b16c: 0x8e04002c
    ctx->pc = 0x13b16cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_13b170:
    // 0x13b170: 0x1000000d
label_13b174:
    if (ctx->pc == 0x13B174u) {
        ctx->pc = 0x13B174u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x13B178u;
        goto label_13b178;
    }
    ctx->pc = 0x13B170u;
    {
        const bool branch_taken_0x13b170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B174u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x13b170) {
            ctx->pc = 0x13B1A8u;
            goto label_13b1a8;
        }
    }
    ctx->pc = 0x13B178u;
label_13b178:
    // 0x13b178: 0x8e040024
    ctx->pc = 0x13b178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_13b17c:
    // 0x13b17c: 0x24030001
    ctx->pc = 0x13b17cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_13b180:
    // 0x13b180: 0x8e02001c
    ctx->pc = 0x13b180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13b184:
    // 0x13b184: 0xae040028
    ctx->pc = 0x13b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_13b188:
    // 0x13b188: 0x441021
    ctx->pc = 0x13b188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13b18c:
    // 0x13b18c: 0x8e04002c
    ctx->pc = 0x13b18cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_13b190:
    // 0x13b190: 0xa2030002
    ctx->pc = 0x13b190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_13b194:
    // 0x13b194: 0x10000004
label_13b198:
    if (ctx->pc == 0x13B198u) {
        ctx->pc = 0x13B198u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x13B19Cu;
        goto label_13b19c;
    }
    ctx->pc = 0x13B194u;
    {
        const bool branch_taken_0x13b194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B198u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x13b194) {
            ctx->pc = 0x13B1A8u;
            goto label_13b1a8;
        }
    }
    ctx->pc = 0x13B19Cu;
label_13b19c:
    // 0x13b19c: 0x0
    ctx->pc = 0x13b19cu;
    // NOP
label_13b1a0:
    // 0x13b1a0: 0xa2000002
    ctx->pc = 0x13b1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_13b1a4:
    // 0x13b1a4: 0x8e04002c
    ctx->pc = 0x13b1a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_13b1a8:
    // 0x13b1a8: 0xc04dcf2
label_13b1ac:
    if (ctx->pc == 0x13B1ACu) {
        ctx->pc = 0x13B1B0u;
        goto label_13b1b0;
    }
    ctx->pc = 0x13B1A8u;
    SET_GPR_U32(ctx, 31, 0x13B1B0u);
    ctx->pc = 0x1373C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001373C8_0x1373c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B1B0u; }
    }
    if (ctx->pc != 0x13B1B0u) { return; }
    ctx->pc = 0x13B1B0u;
label_13b1b0:
    // 0x13b1b0: 0xae00002c
    ctx->pc = 0x13b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_13b1b4:
    // 0x13b1b4: 0xdfb00000
    ctx->pc = 0x13b1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b1b8:
    // 0x13b1b8: 0xdfbf0008
    ctx->pc = 0x13b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13b1bc:
    // 0x13b1bc: 0x80505de
label_13b1c0:
    if (ctx->pc == 0x13B1C0u) {
        ctx->pc = 0x13B1C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13B1C4u;
        goto label_13b1c4;
    }
    ctx->pc = 0x13B1BCu;
    ctx->pc = 0x13B1C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141778u;
    sub_00141778_0x141778(rdram, ctx, runtime); return;
    ctx->pc = 0x13B1C4u;
label_13b1c4:
    // 0x13b1c4: 0x0
    ctx->pc = 0x13b1c4u;
    // NOP
label_13b1c8:
    // 0x13b1c8: 0xdfbf0008
    ctx->pc = 0x13b1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13b1cc:
    // 0x13b1cc: 0x3e00008
label_13b1d0:
    if (ctx->pc == 0x13B1D0u) {
        ctx->pc = 0x13B1D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13B1D4u;
        goto label_13b1d4;
    }
    ctx->pc = 0x13B1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B1D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B110u: goto label_13b110;
            case 0x13B114u: goto label_13b114;
            case 0x13B118u: goto label_13b118;
            case 0x13B11Cu: goto label_13b11c;
            case 0x13B120u: goto label_13b120;
            case 0x13B124u: goto label_13b124;
            case 0x13B128u: goto label_13b128;
            case 0x13B12Cu: goto label_13b12c;
            case 0x13B130u: goto label_13b130;
            case 0x13B134u: goto label_13b134;
            case 0x13B138u: goto label_13b138;
            case 0x13B13Cu: goto label_13b13c;
            case 0x13B140u: goto label_13b140;
            case 0x13B144u: goto label_13b144;
            case 0x13B148u: goto label_13b148;
            case 0x13B14Cu: goto label_13b14c;
            case 0x13B150u: goto label_13b150;
            case 0x13B154u: goto label_13b154;
            case 0x13B158u: goto label_13b158;
            case 0x13B15Cu: goto label_13b15c;
            case 0x13B160u: goto label_13b160;
            case 0x13B164u: goto label_13b164;
            case 0x13B168u: goto label_13b168;
            case 0x13B16Cu: goto label_13b16c;
            case 0x13B170u: goto label_13b170;
            case 0x13B174u: goto label_13b174;
            case 0x13B178u: goto label_13b178;
            case 0x13B17Cu: goto label_13b17c;
            case 0x13B180u: goto label_13b180;
            case 0x13B184u: goto label_13b184;
            case 0x13B188u: goto label_13b188;
            case 0x13B18Cu: goto label_13b18c;
            case 0x13B190u: goto label_13b190;
            case 0x13B194u: goto label_13b194;
            case 0x13B198u: goto label_13b198;
            case 0x13B19Cu: goto label_13b19c;
            case 0x13B1A0u: goto label_13b1a0;
            case 0x13B1A4u: goto label_13b1a4;
            case 0x13B1A8u: goto label_13b1a8;
            case 0x13B1ACu: goto label_13b1ac;
            case 0x13B1B0u: goto label_13b1b0;
            case 0x13B1B4u: goto label_13b1b4;
            case 0x13B1B8u: goto label_13b1b8;
            case 0x13B1BCu: goto label_13b1bc;
            case 0x13B1C0u: goto label_13b1c0;
            case 0x13B1C4u: goto label_13b1c4;
            case 0x13B1C8u: goto label_13b1c8;
            case 0x13B1CCu: goto label_13b1cc;
            case 0x13B1D0u: goto label_13b1d0;
            case 0x13B1D4u: goto label_13b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B1D4u;
label_13b1d4:
    // 0x13b1d4: 0x0
    ctx->pc = 0x13b1d4u;
    // NOP
}
