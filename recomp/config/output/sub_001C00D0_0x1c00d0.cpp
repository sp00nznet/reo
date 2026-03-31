#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C00D0
// Address: 0x1c00d0 - 0x1c02a0
void sub_001C00D0_0x1c00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c00d0u;

    // 0x1c00d0: 0x27bdffe0
    ctx->pc = 0x1c00d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c00d4: 0x24020003
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c00d8: 0xffbf0010
    ctx->pc = 0x1c00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c00dc: 0x7fb00000
    ctx->pc = 0x1c00dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c00e0: 0x8c830004
    ctx->pc = 0x1c00e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c00e4: 0x1062005b
    ctx->pc = 0x1C00E4u;
    {
        const bool branch_taken_0x1c00e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C00E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c00e4) {
            ctx->pc = 0x1C0254u;
            goto label_1c0254;
        }
    }
    ctx->pc = 0x1C00ECu;
    // 0x1c00ec: 0x24020002
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c00f0: 0x1062002e
    ctx->pc = 0x1C00F0u;
    {
        const bool branch_taken_0x1c00f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C00F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c00f0) {
            ctx->pc = 0x1C01ACu;
            goto label_1c01ac;
        }
    }
    ctx->pc = 0x1C00F8u;
    // 0x1c00f8: 0x10620015
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0150u;
            goto label_1c0150;
        }
    }
    ctx->pc = 0x1C0100u;
    // 0x1c0100: 0x10600003
    ctx->pc = 0x1C0100u;
    {
        const bool branch_taken_0x1c0100 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0100) {
            ctx->pc = 0x1C0110u;
            goto label_1c0110;
        }
    }
    ctx->pc = 0x1C0108u;
    // 0x1c0108: 0x10000060
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C010Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C028Cu;
            goto label_1c028c;
        }
    }
    ctx->pc = 0x1C0110u;
label_1c0110:
    // 0x1c0110: 0xc06fe04
    ctx->pc = 0x1C0110u;
    SET_GPR_U32(ctx, 31, 0x1C0118u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0118u; }
    }
    if (ctx->pc != 0x1C0118u) { return; }
    ctx->pc = 0x1C0118u;
    // 0x1c0118: 0x440005b
    ctx->pc = 0x1C0118u;
    {
        const bool branch_taken_0x1c0118 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c0118) {
            ctx->pc = 0x1C0288u;
            goto label_1c0288;
        }
    }
    ctx->pc = 0x1C0120u;
    // 0x1c0120: 0x8e02008c
    ctx->pc = 0x1c0120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1c0124: 0x10400035
    ctx->pc = 0x1C0124u;
    {
        const bool branch_taken_0x1c0124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0124) {
            ctx->pc = 0x1C01FCu;
            goto label_1c01fc;
        }
    }
    ctx->pc = 0x1C012Cu;
label_1c012c:
    // 0x1c012c: 0x3c040032
    ctx->pc = 0x1c012cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c0130: 0x3c050025
    ctx->pc = 0x1c0130u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c0134: 0x24846b00
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27392));
    // 0x1c0138: 0x24a50638
    ctx->pc = 0x1c0138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1592));
    // 0x1c013c: 0xc042a0c
    ctx->pc = 0x1C013Cu;
    SET_GPR_U32(ctx, 31, 0x1C0144u);
    ctx->pc = 0x1C0140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 68));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0144u; }
    }
    if (ctx->pc != 0x1C0144u) { return; }
    ctx->pc = 0x1C0144u;
    // 0x1c0144: 0x8e020004
    ctx->pc = 0x1c0144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c0148: 0x24420001
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c014c: 0xae020004
    ctx->pc = 0x1c014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1c0150:
    // 0x1c0150: 0x8e030014
    ctx->pc = 0x1c0150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c0154: 0x3c020032
    ctx->pc = 0x1c0154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c0158: 0x3c050032
    ctx->pc = 0x1c0158u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c015c: 0x3c080032
    ctx->pc = 0x1c015cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
    // 0x1c0160: 0x24426c40
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1c0164: 0x24a56b00
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27392));
    // 0x1c0168: 0x302d
    ctx->pc = 0x1c0168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c016c: 0x24070001
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0170: 0x25086ab0
    ctx->pc = 0x1c0170u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27312));
    // 0x1c0174: 0x31880
    ctx->pc = 0x1c0174u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0178: 0x431021
    ctx->pc = 0x1c0178u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c017c: 0x8c440000
    ctx->pc = 0x1c017cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0180: 0xc060558
    ctx->pc = 0x1C0180u;
    SET_GPR_U32(ctx, 31, 0x1C0188u);
    ctx->pc = 0x1C0184u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x181560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00181560_0x181560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0188u; }
    }
    if (ctx->pc != 0x1C0188u) { return; }
    ctx->pc = 0x1C0188u;
    // 0x1c0188: 0x4410004
    ctx->pc = 0x1C0188u;
    {
        const bool branch_taken_0x1c0188 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c0188) {
            ctx->pc = 0x1C019Cu;
            goto label_1c019c;
        }
    }
    ctx->pc = 0x1C0190u;
label_1c0190:
    // 0x1c0190: 0xae000004
    ctx->pc = 0x1c0190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c0194: 0x1000003d
    ctx->pc = 0x1C0194u;
    {
        const bool branch_taken_0x1c0194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0198u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c0194) {
            ctx->pc = 0x1C028Cu;
            goto label_1c028c;
        }
    }
    ctx->pc = 0x1C019Cu;
label_1c019c:
    // 0x1c019c: 0x8e020004
    ctx->pc = 0x1c019cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c01a0: 0x24420001
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c01a4: 0x10000038
    ctx->pc = 0x1C01A4u;
    {
        const bool branch_taken_0x1c01a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C01A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1c01a4) {
            ctx->pc = 0x1C0288u;
            goto label_1c0288;
        }
    }
    ctx->pc = 0x1C01ACu;
label_1c01ac:
    // 0x1c01ac: 0xc06fe04
    ctx->pc = 0x1C01ACu;
    SET_GPR_U32(ctx, 31, 0x1C01B4u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01B4u; }
    }
    if (ctx->pc != 0x1C01B4u) { return; }
    ctx->pc = 0x1C01B4u;
    // 0x1c01b4: 0x4400034
    ctx->pc = 0x1C01B4u;
    {
        const bool branch_taken_0x1c01b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c01b4) {
            ctx->pc = 0x1C0288u;
            goto label_1c0288;
        }
    }
    ctx->pc = 0x1C01BCu;
    // 0x1c01bc: 0x8e02001c
    ctx->pc = 0x1c01bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c01c0: 0x440fff3
    ctx->pc = 0x1C01C0u;
    {
        const bool branch_taken_0x1c01c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c01c0) {
            ctx->pc = 0x1C0190u;
            goto label_1c0190;
        }
    }
    ctx->pc = 0x1C01C8u;
    // 0x1c01c8: 0x8e02000c
    ctx->pc = 0x1c01c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c01cc: 0x1840000b
    ctx->pc = 0x1C01CCu;
    {
        const bool branch_taken_0x1c01cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c01cc) {
            ctx->pc = 0x1C01FCu;
            goto label_1c01fc;
        }
    }
    ctx->pc = 0x1C01D4u;
    // 0x1c01d4: 0x3c040032
    ctx->pc = 0x1c01d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c01d8: 0x3c050025
    ctx->pc = 0x1c01d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c01dc: 0x3c070032
    ctx->pc = 0x1c01dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x1c01e0: 0x24846b00
    ctx->pc = 0x1c01e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27392));
    // 0x1c01e4: 0x24a50640
    ctx->pc = 0x1c01e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
    // 0x1c01e8: 0x26060044
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 68));
    // 0x1c01ec: 0xc042a0c
    ctx->pc = 0x1C01ECu;
    SET_GPR_U32(ctx, 31, 0x1C01F4u);
    ctx->pc = 0x1C01F0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 27336));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01F4u; }
    }
    if (ctx->pc != 0x1C01F4u) { return; }
    ctx->pc = 0x1C01F4u;
    // 0x1c01f4: 0x10000009
    ctx->pc = 0x1C01F4u;
    {
        const bool branch_taken_0x1c01f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C01F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        if (branch_taken_0x1c01f4) {
            ctx->pc = 0x1C021Cu;
            goto label_1c021c;
        }
    }
    ctx->pc = 0x1C01FCu;
label_1c01fc:
    // 0x1c01fc: 0x3c040032
    ctx->pc = 0x1c01fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c0200: 0x3c050025
    ctx->pc = 0x1c0200u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c0204: 0x24846b00
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27392));
    // 0x1c0208: 0x24a50648
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1608));
    // 0x1c020c: 0xc042a0c
    ctx->pc = 0x1C020Cu;
    SET_GPR_U32(ctx, 31, 0x1C0214u);
    ctx->pc = 0x1C0210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 68));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0214u; }
    }
    if (ctx->pc != 0x1C0214u) { return; }
    ctx->pc = 0x1C0214u;
    // 0x1c0214: 0x24020001
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0218: 0xae020090
    ctx->pc = 0x1c0218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1c021c:
    // 0x1c021c: 0x8e030014
    ctx->pc = 0x1c021cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c0220: 0x3c020032
    ctx->pc = 0x1c0220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c0224: 0x3c050032
    ctx->pc = 0x1c0224u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c0228: 0x24426c40
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1c022c: 0x31880
    ctx->pc = 0x1c022cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0230: 0x431021
    ctx->pc = 0x1c0230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0234: 0x8c440000
    ctx->pc = 0x1c0234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0238: 0xc06052a
    ctx->pc = 0x1C0238u;
    SET_GPR_U32(ctx, 31, 0x1C0240u);
    ctx->pc = 0x1C023Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27392));
    ctx->pc = 0x1814A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001814A8_0x1814a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0240u; }
    }
    if (ctx->pc != 0x1C0240u) { return; }
    ctx->pc = 0x1C0240u;
    // 0x1c0240: 0x440ffd3
    ctx->pc = 0x1C0240u;
    {
        const bool branch_taken_0x1c0240 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c0240) {
            ctx->pc = 0x1C0190u;
            goto label_1c0190;
        }
    }
    ctx->pc = 0x1C0248u;
    // 0x1c0248: 0x24020003
    ctx->pc = 0x1c0248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c024c: 0x1000000e
    ctx->pc = 0x1C024Cu;
    {
        const bool branch_taken_0x1c024c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0250u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1c024c) {
            ctx->pc = 0x1C0288u;
            goto label_1c0288;
        }
    }
    ctx->pc = 0x1C0254u;
label_1c0254:
    // 0x1c0254: 0xc06fe04
    ctx->pc = 0x1C0254u;
    SET_GPR_U32(ctx, 31, 0x1C025Cu);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C025Cu; }
    }
    if (ctx->pc != 0x1C025Cu) { return; }
    ctx->pc = 0x1C025Cu;
    // 0x1c025c: 0x440000a
    ctx->pc = 0x1C025Cu;
    {
        const bool branch_taken_0x1c025c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c025c) {
            ctx->pc = 0x1C0288u;
            goto label_1c0288;
        }
    }
    ctx->pc = 0x1C0264u;
    // 0x1c0264: 0x8e02001c
    ctx->pc = 0x1c0264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c0268: 0x440ffc9
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C0190u;
            goto label_1c0190;
        }
    }
    ctx->pc = 0x1C0270u;
    // 0x1c0270: 0xae000004
    ctx->pc = 0x1c0270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c0274: 0x8e020090
    ctx->pc = 0x1c0274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c0278: 0x1040ffac
    ctx->pc = 0x1C0278u;
    {
        const bool branch_taken_0x1c0278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0278) {
            ctx->pc = 0x1C012Cu;
            goto label_1c012c;
        }
    }
    ctx->pc = 0x1C0280u;
    // 0x1c0280: 0x10000002
    ctx->pc = 0x1C0280u;
    {
        const bool branch_taken_0x1c0280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c0280) {
            ctx->pc = 0x1C028Cu;
            goto label_1c028c;
        }
    }
    ctx->pc = 0x1C0288u;
label_1c0288:
    // 0x1c0288: 0x2402ffff
    ctx->pc = 0x1c0288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c028c:
    // 0x1c028c: 0xdfbf0010
    ctx->pc = 0x1c028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0290: 0x7bb00000
    ctx->pc = 0x1c0290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0294: 0x3e00008
    ctx->pc = 0x1C0294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0110u: goto label_1c0110;
            case 0x1C012Cu: goto label_1c012c;
            case 0x1C0150u: goto label_1c0150;
            case 0x1C0190u: goto label_1c0190;
            case 0x1C019Cu: goto label_1c019c;
            case 0x1C01ACu: goto label_1c01ac;
            case 0x1C01FCu: goto label_1c01fc;
            case 0x1C021Cu: goto label_1c021c;
            case 0x1C0254u: goto label_1c0254;
            case 0x1C0288u: goto label_1c0288;
            case 0x1C028Cu: goto label_1c028c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C029Cu;
    // 0x1c029c: 0x0
    ctx->pc = 0x1c029cu;
    // NOP
}
