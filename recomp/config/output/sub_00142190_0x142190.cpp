#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00142190
// Address: 0x142190 - 0x142240
void sub_00142190_0x142190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x142190u;

label_142190:
    // 0x142190: 0x3c020026
    ctx->pc = 0x142190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_142194:
    // 0x142194: 0x27bdfff0
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_142198:
    // 0x142198: 0x8c4249f8
    ctx->pc = 0x142198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 18936)));
label_14219c:
    // 0x14219c: 0xffb00000
    ctx->pc = 0x14219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1421a0:
    // 0x1421a0: 0x80802d
    ctx->pc = 0x1421a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1421a4:
    // 0x1421a4: 0x10400006
label_1421a8:
    if (ctx->pc == 0x1421A8u) {
        ctx->pc = 0x1421A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1421ACu;
        goto label_1421ac;
    }
    ctx->pc = 0x1421A4u;
    {
        const bool branch_taken_0x1421a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1421A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x1421a4) {
            ctx->pc = 0x1421C0u;
            goto label_1421c0;
        }
    }
    ctx->pc = 0x1421ACu;
label_1421ac:
    // 0x1421ac: 0x40f809
label_1421b0:
    if (ctx->pc == 0x1421B0u) {
        ctx->pc = 0x1421B4u;
        goto label_1421b4;
    }
    ctx->pc = 0x1421ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1421B4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142190u: goto label_142190;
            case 0x142194u: goto label_142194;
            case 0x142198u: goto label_142198;
            case 0x14219Cu: goto label_14219c;
            case 0x1421A0u: goto label_1421a0;
            case 0x1421A4u: goto label_1421a4;
            case 0x1421A8u: goto label_1421a8;
            case 0x1421ACu: goto label_1421ac;
            case 0x1421B0u: goto label_1421b0;
            case 0x1421B4u: goto label_1421b4;
            case 0x1421B8u: goto label_1421b8;
            case 0x1421BCu: goto label_1421bc;
            case 0x1421C0u: goto label_1421c0;
            case 0x1421C4u: goto label_1421c4;
            case 0x1421C8u: goto label_1421c8;
            case 0x1421CCu: goto label_1421cc;
            case 0x1421D0u: goto label_1421d0;
            case 0x1421D4u: goto label_1421d4;
            case 0x1421D8u: goto label_1421d8;
            case 0x1421DCu: goto label_1421dc;
            case 0x1421E0u: goto label_1421e0;
            case 0x1421E4u: goto label_1421e4;
            case 0x1421E8u: goto label_1421e8;
            case 0x1421ECu: goto label_1421ec;
            case 0x1421F0u: goto label_1421f0;
            case 0x1421F4u: goto label_1421f4;
            case 0x1421F8u: goto label_1421f8;
            case 0x1421FCu: goto label_1421fc;
            case 0x142200u: goto label_142200;
            case 0x142204u: goto label_142204;
            case 0x142208u: goto label_142208;
            case 0x14220Cu: goto label_14220c;
            case 0x142210u: goto label_142210;
            case 0x142214u: goto label_142214;
            case 0x142218u: goto label_142218;
            case 0x14221Cu: goto label_14221c;
            case 0x142220u: goto label_142220;
            case 0x142224u: goto label_142224;
            case 0x142228u: goto label_142228;
            case 0x14222Cu: goto label_14222c;
            case 0x142230u: goto label_142230;
            case 0x142234u: goto label_142234;
            case 0x142238u: goto label_142238;
            case 0x14223Cu: goto label_14223c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1421B4u; }
            if (ctx->pc != 0x1421B4u) { return; }
        }
    }
    ctx->pc = 0x1421B4u;
label_1421b4:
    // 0x1421b4: 0x1000000a
label_1421b8:
    if (ctx->pc == 0x1421B8u) {
        ctx->pc = 0x1421B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1421BCu;
        goto label_1421bc;
    }
    ctx->pc = 0x1421B4u;
    {
        const bool branch_taken_0x1421b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1421B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1421b4) {
            ctx->pc = 0x1421E0u;
            goto label_1421e0;
        }
    }
    ctx->pc = 0x1421BCu;
label_1421bc:
    // 0x1421bc: 0x0
    ctx->pc = 0x1421bcu;
    // NOP
label_1421c0:
    // 0x1421c0: 0xc0505b4
label_1421c4:
    if (ctx->pc == 0x1421C4u) {
        ctx->pc = 0x1421C8u;
        goto label_1421c8;
    }
    ctx->pc = 0x1421C0u;
    SET_GPR_U32(ctx, 31, 0x1421C8u);
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1421C8u; }
    }
    if (ctx->pc != 0x1421C8u) { return; }
    ctx->pc = 0x1421C8u;
label_1421c8:
    // 0x1421c8: 0x24030001
    ctx->pc = 0x1421c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1421cc:
    // 0x1421cc: 0x8e020000
    ctx->pc = 0x1421ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1421d0:
    // 0x1421d0: 0xae030000
    ctx->pc = 0x1421d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1421d4:
    // 0x1421d4: 0x38420001
    ctx->pc = 0x1421d4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_1421d8:
    // 0x1421d8: 0xc0505ba
label_1421dc:
    if (ctx->pc == 0x1421DCu) {
        ctx->pc = 0x1421DCu;
        SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x1421E0u;
        goto label_1421e0;
    }
    ctx->pc = 0x1421D8u;
    SET_GPR_U32(ctx, 31, 0x1421E0u);
    ctx->pc = 0x1421DCu;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1421E0u; }
    }
    if (ctx->pc != 0x1421E0u) { return; }
    ctx->pc = 0x1421E0u;
label_1421e0:
    // 0x1421e0: 0x200102d
    ctx->pc = 0x1421e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1421e4:
    // 0x1421e4: 0xdfb00000
    ctx->pc = 0x1421e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1421e8:
    // 0x1421e8: 0xdfbf0008
    ctx->pc = 0x1421e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1421ec:
    // 0x1421ec: 0x3e00008
label_1421f0:
    if (ctx->pc == 0x1421F0u) {
        ctx->pc = 0x1421F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1421F4u;
        goto label_1421f4;
    }
    ctx->pc = 0x1421ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1421F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142190u: goto label_142190;
            case 0x142194u: goto label_142194;
            case 0x142198u: goto label_142198;
            case 0x14219Cu: goto label_14219c;
            case 0x1421A0u: goto label_1421a0;
            case 0x1421A4u: goto label_1421a4;
            case 0x1421A8u: goto label_1421a8;
            case 0x1421ACu: goto label_1421ac;
            case 0x1421B0u: goto label_1421b0;
            case 0x1421B4u: goto label_1421b4;
            case 0x1421B8u: goto label_1421b8;
            case 0x1421BCu: goto label_1421bc;
            case 0x1421C0u: goto label_1421c0;
            case 0x1421C4u: goto label_1421c4;
            case 0x1421C8u: goto label_1421c8;
            case 0x1421CCu: goto label_1421cc;
            case 0x1421D0u: goto label_1421d0;
            case 0x1421D4u: goto label_1421d4;
            case 0x1421D8u: goto label_1421d8;
            case 0x1421DCu: goto label_1421dc;
            case 0x1421E0u: goto label_1421e0;
            case 0x1421E4u: goto label_1421e4;
            case 0x1421E8u: goto label_1421e8;
            case 0x1421ECu: goto label_1421ec;
            case 0x1421F0u: goto label_1421f0;
            case 0x1421F4u: goto label_1421f4;
            case 0x1421F8u: goto label_1421f8;
            case 0x1421FCu: goto label_1421fc;
            case 0x142200u: goto label_142200;
            case 0x142204u: goto label_142204;
            case 0x142208u: goto label_142208;
            case 0x14220Cu: goto label_14220c;
            case 0x142210u: goto label_142210;
            case 0x142214u: goto label_142214;
            case 0x142218u: goto label_142218;
            case 0x14221Cu: goto label_14221c;
            case 0x142220u: goto label_142220;
            case 0x142224u: goto label_142224;
            case 0x142228u: goto label_142228;
            case 0x14222Cu: goto label_14222c;
            case 0x142230u: goto label_142230;
            case 0x142234u: goto label_142234;
            case 0x142238u: goto label_142238;
            case 0x14223Cu: goto label_14223c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1421F4u;
label_1421f4:
    // 0x1421f4: 0x0
    ctx->pc = 0x1421f4u;
    // NOP
label_1421f8:
    // 0x1421f8: 0x3c020026
    ctx->pc = 0x1421f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1421fc:
    // 0x1421fc: 0x244549f8
    ctx->pc = 0x1421fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18936));
label_142200:
    // 0x142200: 0x8ca30000
    ctx->pc = 0x142200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_142204:
    // 0x142204: 0x14600003
label_142208:
    if (ctx->pc == 0x142208u) {
        ctx->pc = 0x142208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14220Cu;
        goto label_14220c;
    }
    ctx->pc = 0x142204u;
    {
        const bool branch_taken_0x142204 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x142208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x142204) {
            ctx->pc = 0x142214u;
            goto label_142214;
        }
    }
    ctx->pc = 0x14220Cu;
label_14220c:
    // 0x14220c: 0xaca40000
    ctx->pc = 0x14220cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_142210:
    // 0x142210: 0x24020001
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_142214:
    // 0x142214: 0x3e00008
label_142218:
    if (ctx->pc == 0x142218u) {
        ctx->pc = 0x14221Cu;
        goto label_14221c;
    }
    ctx->pc = 0x142214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142190u: goto label_142190;
            case 0x142194u: goto label_142194;
            case 0x142198u: goto label_142198;
            case 0x14219Cu: goto label_14219c;
            case 0x1421A0u: goto label_1421a0;
            case 0x1421A4u: goto label_1421a4;
            case 0x1421A8u: goto label_1421a8;
            case 0x1421ACu: goto label_1421ac;
            case 0x1421B0u: goto label_1421b0;
            case 0x1421B4u: goto label_1421b4;
            case 0x1421B8u: goto label_1421b8;
            case 0x1421BCu: goto label_1421bc;
            case 0x1421C0u: goto label_1421c0;
            case 0x1421C4u: goto label_1421c4;
            case 0x1421C8u: goto label_1421c8;
            case 0x1421CCu: goto label_1421cc;
            case 0x1421D0u: goto label_1421d0;
            case 0x1421D4u: goto label_1421d4;
            case 0x1421D8u: goto label_1421d8;
            case 0x1421DCu: goto label_1421dc;
            case 0x1421E0u: goto label_1421e0;
            case 0x1421E4u: goto label_1421e4;
            case 0x1421E8u: goto label_1421e8;
            case 0x1421ECu: goto label_1421ec;
            case 0x1421F0u: goto label_1421f0;
            case 0x1421F4u: goto label_1421f4;
            case 0x1421F8u: goto label_1421f8;
            case 0x1421FCu: goto label_1421fc;
            case 0x142200u: goto label_142200;
            case 0x142204u: goto label_142204;
            case 0x142208u: goto label_142208;
            case 0x14220Cu: goto label_14220c;
            case 0x142210u: goto label_142210;
            case 0x142214u: goto label_142214;
            case 0x142218u: goto label_142218;
            case 0x14221Cu: goto label_14221c;
            case 0x142220u: goto label_142220;
            case 0x142224u: goto label_142224;
            case 0x142228u: goto label_142228;
            case 0x14222Cu: goto label_14222c;
            case 0x142230u: goto label_142230;
            case 0x142234u: goto label_142234;
            case 0x142238u: goto label_142238;
            case 0x14223Cu: goto label_14223c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14221Cu;
label_14221c:
    // 0x14221c: 0x0
    ctx->pc = 0x14221cu;
    // NOP
label_142220:
    // 0x142220: 0x27bdfff0
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_142224:
    // 0x142224: 0x202d
    ctx->pc = 0x142224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142228:
    // 0x142228: 0xffbf0000
    ctx->pc = 0x142228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14222c:
    // 0x14222c: 0xdfbf0000
    ctx->pc = 0x14222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142230:
    // 0x142230: 0x805087e
label_142234:
    if (ctx->pc == 0x142234u) {
        ctx->pc = 0x142234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x142238u;
        goto label_142238;
    }
    ctx->pc = 0x142230u;
    ctx->pc = 0x142234u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1421F8u;
    goto label_1421f8;
    ctx->pc = 0x142238u;
label_142238:
    // 0x142238: 0x0
    ctx->pc = 0x142238u;
    // NOP
label_14223c:
    // 0x14223c: 0x0
    ctx->pc = 0x14223cu;
    // NOP
}
