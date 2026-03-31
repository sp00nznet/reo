#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001160B0
// Address: 0x1160b0 - 0x116218
void sub_001160B0_0x1160b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1160b0u;

label_1160b0:
    // 0x1160b0: 0x27bdffc0
    ctx->pc = 0x1160b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1160b4:
    // 0x1160b4: 0xffb20020
    ctx->pc = 0x1160b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1160b8:
    // 0x1160b8: 0xffb00000
    ctx->pc = 0x1160b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1160bc:
    // 0x1160bc: 0x902d
    ctx->pc = 0x1160bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1160c0:
    // 0x1160c0: 0xffb10010
    ctx->pc = 0x1160c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1160c4:
    // 0x1160c4: 0x80802d
    ctx->pc = 0x1160c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1160c8:
    // 0x1160c8: 0xffbf0030
    ctx->pc = 0x1160c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1160cc:
    // 0x1160cc: 0x882d
    ctx->pc = 0x1160ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1160d0:
    // 0x1160d0: 0xc0448a6
label_1160d4:
    if (ctx->pc == 0x1160D4u) {
        ctx->pc = 0x1160D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1160D8u;
        goto label_1160d8;
    }
    ctx->pc = 0x1160D0u;
    SET_GPR_U32(ctx, 31, 0x1160D8u);
    ctx->pc = 0x1160D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160D8u; }
    }
    if (ctx->pc != 0x1160D8u) { return; }
    ctx->pc = 0x1160D8u;
label_1160d8:
    // 0x1160d8: 0x4410008
label_1160dc:
    if (ctx->pc == 0x1160DCu) {
        ctx->pc = 0x1160DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1160E0u;
        goto label_1160e0;
    }
    ctx->pc = 0x1160D8u;
    {
        const bool branch_taken_0x1160d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1160DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1160d8) {
            ctx->pc = 0x1160FCu;
            goto label_1160fc;
        }
    }
    ctx->pc = 0x1160E0u;
label_1160e0:
    // 0x1160e0: 0xc044752
label_1160e4:
    if (ctx->pc == 0x1160E4u) {
        ctx->pc = 0x1160E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1160E8u;
        goto label_1160e8;
    }
    ctx->pc = 0x1160E0u;
    SET_GPR_U32(ctx, 31, 0x1160E8u);
    ctx->pc = 0x1160E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1160E8u; }
    }
    if (ctx->pc != 0x1160E8u) { return; }
    ctx->pc = 0x1160E8u;
label_1160e8:
    // 0x1160e8: 0x3c030021
    ctx->pc = 0x1160e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_1160ec:
    // 0x1160ec: 0x40802d
    ctx->pc = 0x1160ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1160f0:
    // 0x1160f0: 0x8c629d44
    ctx->pc = 0x1160f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942020)));
label_1160f4:
    // 0x1160f4: 0x40f809
label_1160f8:
    if (ctx->pc == 0x1160F8u) {
        ctx->pc = 0x1160F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x1160FCu;
        goto label_1160fc;
    }
    ctx->pc = 0x1160F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1160FCu);
        ctx->pc = 0x1160F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1160B0u: goto label_1160b0;
            case 0x1160B4u: goto label_1160b4;
            case 0x1160B8u: goto label_1160b8;
            case 0x1160BCu: goto label_1160bc;
            case 0x1160C0u: goto label_1160c0;
            case 0x1160C4u: goto label_1160c4;
            case 0x1160C8u: goto label_1160c8;
            case 0x1160CCu: goto label_1160cc;
            case 0x1160D0u: goto label_1160d0;
            case 0x1160D4u: goto label_1160d4;
            case 0x1160D8u: goto label_1160d8;
            case 0x1160DCu: goto label_1160dc;
            case 0x1160E0u: goto label_1160e0;
            case 0x1160E4u: goto label_1160e4;
            case 0x1160E8u: goto label_1160e8;
            case 0x1160ECu: goto label_1160ec;
            case 0x1160F0u: goto label_1160f0;
            case 0x1160F4u: goto label_1160f4;
            case 0x1160F8u: goto label_1160f8;
            case 0x1160FCu: goto label_1160fc;
            case 0x116100u: goto label_116100;
            case 0x116104u: goto label_116104;
            case 0x116108u: goto label_116108;
            case 0x11610Cu: goto label_11610c;
            case 0x116110u: goto label_116110;
            case 0x116114u: goto label_116114;
            case 0x116118u: goto label_116118;
            case 0x11611Cu: goto label_11611c;
            case 0x116120u: goto label_116120;
            case 0x116124u: goto label_116124;
            case 0x116128u: goto label_116128;
            case 0x11612Cu: goto label_11612c;
            case 0x116130u: goto label_116130;
            case 0x116134u: goto label_116134;
            case 0x116138u: goto label_116138;
            case 0x11613Cu: goto label_11613c;
            case 0x116140u: goto label_116140;
            case 0x116144u: goto label_116144;
            case 0x116148u: goto label_116148;
            case 0x11614Cu: goto label_11614c;
            case 0x116150u: goto label_116150;
            case 0x116154u: goto label_116154;
            case 0x116158u: goto label_116158;
            case 0x11615Cu: goto label_11615c;
            case 0x116160u: goto label_116160;
            case 0x116164u: goto label_116164;
            case 0x116168u: goto label_116168;
            case 0x11616Cu: goto label_11616c;
            case 0x116170u: goto label_116170;
            case 0x116174u: goto label_116174;
            case 0x116178u: goto label_116178;
            case 0x11617Cu: goto label_11617c;
            case 0x116180u: goto label_116180;
            case 0x116184u: goto label_116184;
            case 0x116188u: goto label_116188;
            case 0x11618Cu: goto label_11618c;
            case 0x116190u: goto label_116190;
            case 0x116194u: goto label_116194;
            case 0x116198u: goto label_116198;
            case 0x11619Cu: goto label_11619c;
            case 0x1161A0u: goto label_1161a0;
            case 0x1161A4u: goto label_1161a4;
            case 0x1161A8u: goto label_1161a8;
            case 0x1161ACu: goto label_1161ac;
            case 0x1161B0u: goto label_1161b0;
            case 0x1161B4u: goto label_1161b4;
            case 0x1161B8u: goto label_1161b8;
            case 0x1161BCu: goto label_1161bc;
            case 0x1161C0u: goto label_1161c0;
            case 0x1161C4u: goto label_1161c4;
            case 0x1161C8u: goto label_1161c8;
            case 0x1161CCu: goto label_1161cc;
            case 0x1161D0u: goto label_1161d0;
            case 0x1161D4u: goto label_1161d4;
            case 0x1161D8u: goto label_1161d8;
            case 0x1161DCu: goto label_1161dc;
            case 0x1161E0u: goto label_1161e0;
            case 0x1161E4u: goto label_1161e4;
            case 0x1161E8u: goto label_1161e8;
            case 0x1161ECu: goto label_1161ec;
            case 0x1161F0u: goto label_1161f0;
            case 0x1161F4u: goto label_1161f4;
            case 0x1161F8u: goto label_1161f8;
            case 0x1161FCu: goto label_1161fc;
            case 0x116200u: goto label_116200;
            case 0x116204u: goto label_116204;
            case 0x116208u: goto label_116208;
            case 0x11620Cu: goto label_11620c;
            case 0x116210u: goto label_116210;
            case 0x116214u: goto label_116214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1160FCu; }
            if (ctx->pc != 0x1160FCu) { return; }
        }
    }
    ctx->pc = 0x1160FCu;
label_1160fc:
    // 0x1160fc: 0x3c010024
    ctx->pc = 0x1160fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
label_116100:
    // 0x116100: 0xdc2589d8
    ctx->pc = 0x116100u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937048)));
label_116104:
    // 0x116104: 0xc0448a6
label_116108:
    if (ctx->pc == 0x116108u) {
        ctx->pc = 0x116108u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11610Cu;
        goto label_11610c;
    }
    ctx->pc = 0x116104u;
    SET_GPR_U32(ctx, 31, 0x11610Cu);
    ctx->pc = 0x116108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11610Cu; }
    }
    if (ctx->pc != 0x11610Cu) { return; }
    ctx->pc = 0x11610Cu;
label_11610c:
    // 0x11610c: 0x4410011
label_116110:
    if (ctx->pc == 0x116110u) {
        ctx->pc = 0x116110u;
        SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
        ctx->pc = 0x116114u;
        goto label_116114;
    }
    ctx->pc = 0x11610Cu;
    {
        const bool branch_taken_0x11610c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116110u;
        SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
        if (branch_taken_0x11610c) {
            ctx->pc = 0x116154u;
            goto label_116154;
        }
    }
    ctx->pc = 0x116114u;
label_116114:
    // 0x116114: 0x10000007
label_116118:
    if (ctx->pc == 0x116118u) {
        ctx->pc = 0x11611Cu;
        goto label_11611c;
    }
    ctx->pc = 0x116114u;
    {
        const bool branch_taken_0x116114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x116114) {
            ctx->pc = 0x116134u;
            goto label_116134;
        }
    }
    ctx->pc = 0x11611Cu;
label_11611c:
    // 0x11611c: 0x0
    ctx->pc = 0x11611cu;
    // NOP
label_116120:
    // 0x116120: 0x34058048
    ctx->pc = 0x116120u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_116124:
    // 0x116124: 0x52bfc
    ctx->pc = 0x116124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_116128:
    // 0x116128: 0xc04476c
label_11612c:
    if (ctx->pc == 0x11612Cu) {
        ctx->pc = 0x11612Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x116130u;
        goto label_116130;
    }
    ctx->pc = 0x116128u;
    SET_GPR_U32(ctx, 31, 0x116130u);
    ctx->pc = 0x11612Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116130u; }
    }
    if (ctx->pc != 0x116130u) { return; }
    ctx->pc = 0x116130u;
label_116130:
    // 0x116130: 0x40802d
    ctx->pc = 0x116130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116134:
    // 0x116134: 0x3c010024
    ctx->pc = 0x116134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
label_116138:
    // 0x116138: 0xdc2589e0
    ctx->pc = 0x116138u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937056)));
label_11613c:
    // 0x11613c: 0xc0448a6
label_116140:
    if (ctx->pc == 0x116140u) {
        ctx->pc = 0x116140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116144u;
        goto label_116144;
    }
    ctx->pc = 0x11613Cu;
    SET_GPR_U32(ctx, 31, 0x116144u);
    ctx->pc = 0x116140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116144u; }
    }
    if (ctx->pc != 0x116144u) { return; }
    ctx->pc = 0x116144u;
label_116144:
    // 0x116144: 0x440fff6
label_116148:
    if (ctx->pc == 0x116148u) {
        ctx->pc = 0x116148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11614Cu;
        goto label_11614c;
    }
    ctx->pc = 0x116144u;
    {
        const bool branch_taken_0x116144 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x116148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x116144) {
            ctx->pc = 0x116120u;
            goto label_116120;
        }
    }
    ctx->pc = 0x11614Cu;
label_11614c:
    // 0x11614c: 0x10000015
label_116150:
    if (ctx->pc == 0x116150u) {
        ctx->pc = 0x116154u;
        goto label_116154;
    }
    ctx->pc = 0x11614Cu;
    {
        const bool branch_taken_0x11614c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11614c) {
            ctx->pc = 0x1161A4u;
            goto label_1161a4;
        }
    }
    ctx->pc = 0x116154u;
label_116154:
    // 0x116154: 0x3405ffc0
    ctx->pc = 0x116154u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_116158:
    // 0x116158: 0x52bbc
    ctx->pc = 0x116158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_11615c:
    // 0x11615c: 0xc0448a6
label_116160:
    if (ctx->pc == 0x116160u) {
        ctx->pc = 0x116160u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x116164u;
        goto label_116164;
    }
    ctx->pc = 0x11615Cu;
    SET_GPR_U32(ctx, 31, 0x116164u);
    ctx->pc = 0x116160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116164u; }
    }
    if (ctx->pc != 0x116164u) { return; }
    ctx->pc = 0x116164u;
label_116164:
    // 0x116164: 0x440000f
label_116168:
    if (ctx->pc == 0x116168u) {
        ctx->pc = 0x116168u;
        SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
        ctx->pc = 0x11616Cu;
        goto label_11616c;
    }
    ctx->pc = 0x116164u;
    {
        const bool branch_taken_0x116164 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x116168u;
        SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
        if (branch_taken_0x116164) {
            ctx->pc = 0x1161A4u;
            goto label_1161a4;
        }
    }
    ctx->pc = 0x11616Cu;
label_11616c:
    // 0x11616c: 0x10000007
label_116170:
    if (ctx->pc == 0x116170u) {
        ctx->pc = 0x116174u;
        goto label_116174;
    }
    ctx->pc = 0x11616Cu;
    {
        const bool branch_taken_0x11616c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11616c) {
            ctx->pc = 0x11618Cu;
            goto label_11618c;
        }
    }
    ctx->pc = 0x116174u;
label_116174:
    // 0x116174: 0x0
    ctx->pc = 0x116174u;
    // NOP
label_116178:
    // 0x116178: 0x34058048
    ctx->pc = 0x116178u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_11617c:
    // 0x11617c: 0x52bfc
    ctx->pc = 0x11617cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_116180:
    // 0x116180: 0xc04480e
label_116184:
    if (ctx->pc == 0x116184u) {
        ctx->pc = 0x116184u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x116188u;
        goto label_116188;
    }
    ctx->pc = 0x116180u;
    SET_GPR_U32(ctx, 31, 0x116188u);
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116188u; }
    }
    if (ctx->pc != 0x116188u) { return; }
    ctx->pc = 0x116188u;
label_116188:
    // 0x116188: 0x40802d
    ctx->pc = 0x116188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11618c:
    // 0x11618c: 0x3405ffc0
    ctx->pc = 0x11618cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_116190:
    // 0x116190: 0x52bbc
    ctx->pc = 0x116190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_116194:
    // 0x116194: 0xc0448a6
label_116198:
    if (ctx->pc == 0x116198u) {
        ctx->pc = 0x116198u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11619Cu;
        goto label_11619c;
    }
    ctx->pc = 0x116194u;
    SET_GPR_U32(ctx, 31, 0x11619Cu);
    ctx->pc = 0x116198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11619Cu; }
    }
    if (ctx->pc != 0x11619Cu) { return; }
    ctx->pc = 0x11619Cu;
label_11619c:
    // 0x11619c: 0x441fff6
label_1161a0:
    if (ctx->pc == 0x1161A0u) {
        ctx->pc = 0x1161A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161A4u;
        goto label_1161a4;
    }
    ctx->pc = 0x11619Cu;
    {
        const bool branch_taken_0x11619c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1161A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11619c) {
            ctx->pc = 0x116178u;
            goto label_116178;
        }
    }
    ctx->pc = 0x1161A4u;
label_1161a4:
    // 0x1161a4: 0x3c010024
    ctx->pc = 0x1161a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
label_1161a8:
    // 0x1161a8: 0xdc2589e8
    ctx->pc = 0x1161a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937064)));
label_1161ac:
    // 0x1161ac: 0xc04476c
label_1161b0:
    if (ctx->pc == 0x1161B0u) {
        ctx->pc = 0x1161B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161B4u;
        goto label_1161b4;
    }
    ctx->pc = 0x1161ACu;
    SET_GPR_U32(ctx, 31, 0x1161B4u);
    ctx->pc = 0x1161B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161B4u; }
    }
    if (ctx->pc != 0x1161B4u) { return; }
    ctx->pc = 0x1161B4u;
label_1161b4:
    // 0x1161b4: 0xc04452e
label_1161b8:
    if (ctx->pc == 0x1161B8u) {
        ctx->pc = 0x1161B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161BCu;
        goto label_1161bc;
    }
    ctx->pc = 0x1161B4u;
    SET_GPR_U32(ctx, 31, 0x1161BCu);
    ctx->pc = 0x1161B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1114B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001114B8_0x1114b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161BCu; }
    }
    if (ctx->pc != 0x1161BCu) { return; }
    ctx->pc = 0x1161BCu;
label_1161bc:
    // 0x1161bc: 0xc045806
label_1161c0:
    if (ctx->pc == 0x1161C0u) {
        ctx->pc = 0x1161C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161C4u;
        goto label_1161c4;
    }
    ctx->pc = 0x1161BCu;
    SET_GPR_U32(ctx, 31, 0x1161C4u);
    ctx->pc = 0x1161C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116018u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116018_0x116018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161C4u; }
    }
    if (ctx->pc != 0x1161C4u) { return; }
    ctx->pc = 0x1161C4u;
label_1161c4:
    // 0x1161c4: 0x264489c0
    ctx->pc = 0x1161c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294937024));
label_1161c8:
    // 0x1161c8: 0xc045a04
label_1161cc:
    if (ctx->pc == 0x1161CCu) {
        ctx->pc = 0x1161CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161D0u;
        goto label_1161d0;
    }
    ctx->pc = 0x1161C8u;
    SET_GPR_U32(ctx, 31, 0x1161D0u);
    ctx->pc = 0x1161CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1161D0u; }
    }
    if (ctx->pc != 0x1161D0u) { return; }
    ctx->pc = 0x1161D0u;
label_1161d0:
    // 0x1161d0: 0x6200009
label_1161d4:
    if (ctx->pc == 0x1161D4u) {
        ctx->pc = 0x1161D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1161D8u;
        goto label_1161d8;
    }
    ctx->pc = 0x1161D0u;
    {
        const bool branch_taken_0x1161d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1161D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1161d0) {
            ctx->pc = 0x1161F8u;
            goto label_1161f8;
        }
    }
    ctx->pc = 0x1161D8u;
label_1161d8:
    // 0x1161d8: 0x3c040024
    ctx->pc = 0x1161d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1161dc:
    // 0x1161dc: 0xdfbf0030
    ctx->pc = 0x1161dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1161e0:
    // 0x1161e0: 0x248489c8
    ctx->pc = 0x1161e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937032));
label_1161e4:
    // 0x1161e4: 0xdfb20020
    ctx->pc = 0x1161e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1161e8:
    // 0x1161e8: 0xdfb10010
    ctx->pc = 0x1161e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1161ec:
    // 0x1161ec: 0xdfb00000
    ctx->pc = 0x1161ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1161f0:
    // 0x1161f0: 0x8045a04
label_1161f4:
    if (ctx->pc == 0x1161F4u) {
        ctx->pc = 0x1161F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1161F8u;
        goto label_1161f8;
    }
    ctx->pc = 0x1161F0u;
    ctx->pc = 0x1161F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x116810u;
    sub_00116810_0x116810(rdram, ctx, runtime); return;
    ctx->pc = 0x1161F8u;
label_1161f8:
    // 0x1161f8: 0x3c040024
    ctx->pc = 0x1161f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1161fc:
    // 0x1161fc: 0xdfbf0030
    ctx->pc = 0x1161fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_116200:
    // 0x116200: 0x248489d0
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937040));
label_116204:
    // 0x116204: 0xdfb20020
    ctx->pc = 0x116204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_116208:
    // 0x116208: 0xdfb10010
    ctx->pc = 0x116208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11620c:
    // 0x11620c: 0xdfb00000
    ctx->pc = 0x11620cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116210:
    // 0x116210: 0x8045a04
label_116214:
    if (ctx->pc == 0x116214u) {
        ctx->pc = 0x116214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x116218u;
        goto label_fallthrough_0x116210;
    }
    ctx->pc = 0x116210u;
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x116810u;
    sub_00116810_0x116810(rdram, ctx, runtime); return;
label_fallthrough_0x116210:
    ctx->pc = 0x116218u;
}
