#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001380C8
// Address: 0x1380c8 - 0x138208
void sub_001380C8_0x1380c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1380c8u;

label_1380c8:
    // 0x1380c8: 0x3c020022
    ctx->pc = 0x1380c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1380cc: 0x27bdfff0
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1380d0: 0x8044bb89
    ctx->pc = 0x1380d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949769)));
    // 0x1380d4: 0x24030001
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1380d8: 0x14830005
    ctx->pc = 0x1380D8u;
    {
        const bool branch_taken_0x1380d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1380DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1380d8) {
            ctx->pc = 0x1380F0u;
            goto label_1380f0;
        }
    }
    ctx->pc = 0x1380E0u;
    // 0x1380e0: 0xc04dffa
    ctx->pc = 0x1380E0u;
    SET_GPR_U32(ctx, 31, 0x1380E8u);
    ctx->pc = 0x137FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137FE8_0x137fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380E8u; }
    }
    if (ctx->pc != 0x1380E8u) { return; }
    ctx->pc = 0x1380E8u;
    // 0x1380e8: 0x10000007
    ctx->pc = 0x1380E8u;
    {
        const bool branch_taken_0x1380e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1380ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1380e8) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x1380F0u;
label_1380f0:
    // 0x1380f0: 0x24030002
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1380f4: 0x14830004
    ctx->pc = 0x1380F4u;
    {
        const bool branch_taken_0x1380f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1380F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1380f4) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x1380FCu;
    // 0x1380fc: 0xdfbf0000
    ctx->pc = 0x1380fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138100: 0x804e00a
    ctx->pc = 0x138100u;
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138028u;
    entry_138028_0x1380c8(rdram, ctx, runtime); return;
    ctx->pc = 0x138108u;
label_138108:
    // 0x138108: 0xdfbf0000
    ctx->pc = 0x138108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13810c: 0x3e00008
    ctx->pc = 0x13810Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138110u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1380C8u: goto label_1380c8;
            case 0x1380F0u: goto label_1380f0;
            case 0x138108u: goto label_138108;
            case 0x138198u: goto label_138198;
            case 0x1381B8u: goto label_1381b8;
            case 0x1381C0u: goto label_1381c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138114u;
    // 0x138114: 0x0
    ctx->pc = 0x138114u;
    // NOP
    // 0x138118: 0x3c040024
    ctx->pc = 0x138118u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13811c: 0x27bdfff0
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138120: 0xffb00000
    ctx->pc = 0x138120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138124: 0xffbf0008
    ctx->pc = 0x138124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138128: 0xc045a12
    ctx->pc = 0x138128u;
    SET_GPR_U32(ctx, 31, 0x138130u);
    ctx->pc = 0x13812Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952440));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138130u; }
    }
    if (ctx->pc != 0x138130u) { return; }
    ctx->pc = 0x138130u;
    // 0x138130: 0x3c020022
    ctx->pc = 0x138130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138134: 0x3c040024
    ctx->pc = 0x138134u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138138: 0x8c45bbc4
    ctx->pc = 0x138138u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294949828)));
    // 0x13813c: 0xc045a12
    ctx->pc = 0x13813Cu;
    SET_GPR_U32(ctx, 31, 0x138144u);
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952456));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138144u; }
    }
    if (ctx->pc != 0x138144u) { return; }
    ctx->pc = 0x138144u;
    // 0x138144: 0x3c040024
    ctx->pc = 0x138144u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138148: 0x3c020022
    ctx->pc = 0x138148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13814c: 0x2484c628
    ctx->pc = 0x13814cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952488));
    // 0x138150: 0x2442bbdc
    ctx->pc = 0x138150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949852));
    // 0x138154: 0xc045a12
    ctx->pc = 0x138154u;
    SET_GPR_U32(ctx, 31, 0x13815Cu);
    ctx->pc = 0x138158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13815Cu; }
    }
    if (ctx->pc != 0x13815Cu) { return; }
    ctx->pc = 0x13815Cu;
    // 0x13815c: 0x3c040024
    ctx->pc = 0x13815cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138160: 0x3c020022
    ctx->pc = 0x138160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138164: 0x2484c648
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x138168: 0x2450bb88
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294949768));
    // 0x13816c: 0xc045a12
    ctx->pc = 0x13816Cu;
    SET_GPR_U32(ctx, 31, 0x138174u);
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138174u; }
    }
    if (ctx->pc != 0x138174u) { return; }
    ctx->pc = 0x138174u;
    // 0x138174: 0x3c040024
    ctx->pc = 0x138174u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138178: 0x82030001
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13817c: 0x24020001
    ctx->pc = 0x13817cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x138180: 0x2484c668
    ctx->pc = 0x138180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952552));
    // 0x138184: 0x14620004
    ctx->pc = 0x138184u;
    {
        const bool branch_taken_0x138184 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x138188u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        if (branch_taken_0x138184) {
            ctx->pc = 0x138198u;
            goto label_138198;
        }
    }
    ctx->pc = 0x13818Cu;
    // 0x13818c: 0xc045a12
    ctx->pc = 0x13818Cu;
    SET_GPR_U32(ctx, 31, 0x138194u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138194u; }
    }
    if (ctx->pc != 0x138194u) { return; }
    ctx->pc = 0x138194u;
    // 0x138194: 0x92050001
    ctx->pc = 0x138194u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_138198:
    // 0x138198: 0x51600
    ctx->pc = 0x138198u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
    // 0x13819c: 0x24030002
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1381a0: 0x21603
    ctx->pc = 0x1381a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1381a4: 0x14430004
    ctx->pc = 0x1381A4u;
    {
        const bool branch_taken_0x1381a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1381a4) {
            ctx->pc = 0x1381B8u;
            goto label_1381b8;
        }
    }
    ctx->pc = 0x1381ACu;
    // 0x1381ac: 0x3c040024
    ctx->pc = 0x1381acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1381b0: 0xc045a12
    ctx->pc = 0x1381B0u;
    SET_GPR_U32(ctx, 31, 0x1381B8u);
    ctx->pc = 0x1381B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952584));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1381B8u; }
    }
    if (ctx->pc != 0x1381B8u) { return; }
    ctx->pc = 0x1381B8u;
label_1381b8:
    // 0x1381b8: 0xc04e032
    ctx->pc = 0x1381B8u;
    SET_GPR_U32(ctx, 31, 0x1381C0u);
    ctx->pc = 0x1380C8u;
    goto label_1380c8;
    ctx->pc = 0x1381C0u;
label_1381c0:
    // 0x1381c0: 0x3c040024
    ctx->pc = 0x1381c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1381c4: 0x40282d
    ctx->pc = 0x1381c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381c8: 0xc045a12
    ctx->pc = 0x1381C8u;
    SET_GPR_U32(ctx, 31, 0x1381D0u);
    ctx->pc = 0x1381CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952616));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1381D0u; }
    }
    if (ctx->pc != 0x1381D0u) { return; }
    ctx->pc = 0x1381D0u;
    // 0x1381d0: 0x102d
    ctx->pc = 0x1381d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381d4: 0xdfb00000
    ctx->pc = 0x1381d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1381d8: 0xdfbf0008
    ctx->pc = 0x1381d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1381dc: 0x3e00008
    ctx->pc = 0x1381DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1381E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1380C8u: goto label_1380c8;
            case 0x1380F0u: goto label_1380f0;
            case 0x138108u: goto label_138108;
            case 0x138198u: goto label_138198;
            case 0x1381B8u: goto label_1381b8;
            case 0x1381C0u: goto label_1381c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1381E4u;
    // 0x1381e4: 0x0
    ctx->pc = 0x1381e4u;
    // NOP
    // 0x1381e8: 0x3c030022
    ctx->pc = 0x1381e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1381ec: 0x2463bbe4
    ctx->pc = 0x1381ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949860));
    // 0x1381f0: 0x3e00008
    ctx->pc = 0x1381F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1381F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1380C8u: goto label_1380c8;
            case 0x1380F0u: goto label_1380f0;
            case 0x138108u: goto label_138108;
            case 0x138198u: goto label_138198;
            case 0x1381B8u: goto label_1381b8;
            case 0x1381C0u: goto label_1381c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1381F8u;
    // 0x1381f8: 0x3c030022
    ctx->pc = 0x1381f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1381fc: 0x2463bbe0
    ctx->pc = 0x1381fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949856));
    // 0x138200: 0x3e00008
    ctx->pc = 0x138200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138204u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1380C8u: goto label_1380c8;
            case 0x1380F0u: goto label_1380f0;
            case 0x138108u: goto label_138108;
            case 0x138198u: goto label_138198;
            case 0x1381B8u: goto label_1381b8;
            case 0x1381C0u: goto label_1381c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138208u;
}
