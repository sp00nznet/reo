#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8660
// Address: 0x1c8660 - 0x1c87f0
void sub_001C8660_0x1c8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8660u;

    // 0x1c8660: 0x27bdff90
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c8664: 0x24020003
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8668: 0xffbf0050
    ctx->pc = 0x1c8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c866c: 0x7fb40040
    ctx->pc = 0x1c866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c8670: 0x7fb30030
    ctx->pc = 0x1c8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c8674: 0x80a02d
    ctx->pc = 0x1c8674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8678: 0x7fb20020
    ctx->pc = 0x1c8678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c867c: 0xa0982d
    ctx->pc = 0x1c867cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8680: 0x7fb10010
    ctx->pc = 0x1c8680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8684: 0xc0902d
    ctx->pc = 0x1c8684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8688: 0x7fb00000
    ctx->pc = 0x1c8688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c868c: 0x8c830000
    ctx->pc = 0x1c868cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8690: 0x10620007
    ctx->pc = 0x1C8690u;
    {
        const bool branch_taken_0x1c8690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C8694u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8690) {
            ctx->pc = 0x1C86B0u;
            goto label_1c86b0;
        }
    }
    ctx->pc = 0x1C8698u;
    // 0x1c8698: 0x24020005
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c869c: 0x14620002
    ctx->pc = 0x1C869Cu;
    {
        const bool branch_taken_0x1c869c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C86A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c869c) {
            ctx->pc = 0x1C86A8u;
            goto label_1c86a8;
        }
    }
    ctx->pc = 0x1C86A4u;
    // 0x1c86a4: 0x24020020
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1c86a8:
    // 0x1c86a8: 0x1000004a
    ctx->pc = 0x1C86A8u;
    {
        const bool branch_taken_0x1c86a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C86ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1c86a8) {
            ctx->pc = 0x1C87D4u;
            goto label_1c87d4;
        }
    }
    ctx->pc = 0x1C86B0u;
label_1c86b0:
    // 0x1c86b0: 0x27a4006c
    ctx->pc = 0x1c86b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c86b4: 0xc071c94
    ctx->pc = 0x1C86B4u;
    SET_GPR_U32(ctx, 31, 0x1C86BCu);
    ctx->pc = 0x1C86B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 104));
    ctx->pc = 0x1C7250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7250_0x1c7250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86BCu; }
    }
    if (ctx->pc != 0x1C86BCu) { return; }
    ctx->pc = 0x1C86BCu;
    // 0x1c86bc: 0x10400043
    ctx->pc = 0x1C86BCu;
    {
        const bool branch_taken_0x1c86bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C86C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c86bc) {
            ctx->pc = 0x1C87CCu;
            goto label_1c87cc;
        }
    }
    ctx->pc = 0x1C86C4u;
    // 0x1c86c4: 0x8fa30068
    ctx->pc = 0x1c86c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c86c8: 0x2402000f
    ctx->pc = 0x1c86c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c86cc: 0x1462002f
    ctx->pc = 0x1C86CCu;
    {
        const bool branch_taken_0x1c86cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c86cc) {
            ctx->pc = 0x1C878Cu;
            goto label_1c878c;
        }
    }
    ctx->pc = 0x1C86D4u;
    // 0x1c86d4: 0x8fa4006c
    ctx->pc = 0x1c86d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c86d8: 0x24020001
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c86dc: 0x90830000
    ctx->pc = 0x1c86dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c86e0: 0x10620003
    ctx->pc = 0x1C86E0u;
    {
        const bool branch_taken_0x1c86e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c86e0) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86E8u;
    // 0x1c86e8: 0x10000036
    ctx->pc = 0x1C86E8u;
    {
        const bool branch_taken_0x1c86e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c86e8) {
            ctx->pc = 0x1C87C4u;
            goto label_1c87c4;
        }
    }
    ctx->pc = 0x1C86F0u;
label_1c86f0:
    // 0x1c86f0: 0x90820001
    ctx->pc = 0x1c86f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c86f4: 0xa2620000
    ctx->pc = 0x1c86f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c86f8: 0x8e840048
    ctx->pc = 0x1c86f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c86fc: 0x10000007
    ctx->pc = 0x1C86FCu;
    {
        const bool branch_taken_0x1c86fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8700u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c86fc) {
            ctx->pc = 0x1C871Cu;
            goto label_1c871c;
        }
    }
    ctx->pc = 0x1C8704u;
label_1c8704:
    // 0x1c8704: 0x92620000
    ctx->pc = 0x1c8704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c8708: 0x2831821
    ctx->pc = 0x1c8708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c870c: 0x8c63004c
    ctx->pc = 0x1c870cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1c8710: 0x10620005
    ctx->pc = 0x1C8710u;
    {
        const bool branch_taken_0x1c8710 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c8710) {
            ctx->pc = 0x1C8728u;
            goto label_1c8728;
        }
    }
    ctx->pc = 0x1C8718u;
    // 0x1c8718: 0x24a50001
    ctx->pc = 0x1c8718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1c871c:
    // 0x1c871c: 0xa4102a
    ctx->pc = 0x1c871cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x1c8720: 0x1440fff8
    ctx->pc = 0x1C8720u;
    {
        const bool branch_taken_0x1c8720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8724u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1c8720) {
            ctx->pc = 0x1C8704u;
            goto label_1c8704;
        }
    }
    ctx->pc = 0x1C8728u;
label_1c8728:
    // 0x1c8728: 0x10000009
    ctx->pc = 0x1C8728u;
    {
        const bool branch_taken_0x1c8728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C872Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1c8728) {
            ctx->pc = 0x1C8750u;
            goto label_1c8750;
        }
    }
    ctx->pc = 0x1C8730u;
label_1c8730:
    // 0x1c8730: 0x41880
    ctx->pc = 0x1c8730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8734: 0x51080
    ctx->pc = 0x1c8734u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c8738: 0x2831821
    ctx->pc = 0x1c8738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c873c: 0x2821021
    ctx->pc = 0x1c873cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c8740: 0x8c63004c
    ctx->pc = 0x1c8740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1c8744: 0x24840001
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c8748: 0x24a50001
    ctx->pc = 0x1c8748u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c874c: 0xac43004c
    ctx->pc = 0x1c874cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_1c8750:
    // 0x1c8750: 0x8e830048
    ctx->pc = 0x1c8750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8754: 0x83102a
    ctx->pc = 0x1c8754u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c8758: 0x1440fff5
    ctx->pc = 0x1C8758u;
    {
        const bool branch_taken_0x1c8758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C875Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x1c8758) {
            ctx->pc = 0x1C8730u;
            goto label_1c8730;
        }
    }
    ctx->pc = 0x1C8760u;
    // 0x1c8760: 0xae820048
    ctx->pc = 0x1c8760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x1c8764: 0x8e83004c
    ctx->pc = 0x1c8764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1c8768: 0x8e820040
    ctx->pc = 0x1c8768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1c876c: 0x14620003
    ctx->pc = 0x1C876Cu;
    {
        const bool branch_taken_0x1c876c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c876c) {
            ctx->pc = 0x1C877Cu;
            goto label_1c877c;
        }
    }
    ctx->pc = 0x1C8774u;
    // 0x1c8774: 0x10000002
    ctx->pc = 0x1C8774u;
    {
        const bool branch_taken_0x1c8774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c8774) {
            ctx->pc = 0x1C8780u;
            goto label_1c8780;
        }
    }
    ctx->pc = 0x1C877Cu;
label_1c877c:
    // 0x1c877c: 0x102d
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8780:
    // 0x1c8780: 0xa2820044
    ctx->pc = 0x1c8780u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8784: 0x1000000f
    ctx->pc = 0x1C8784u;
    {
        const bool branch_taken_0x1c8784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8788u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c8784) {
            ctx->pc = 0x1C87C4u;
            goto label_1c87c4;
        }
    }
    ctx->pc = 0x1C878Cu;
label_1c878c:
    // 0x1c878c: 0x8e43000c
    ctx->pc = 0x1c878cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c8790: 0x8e420004
    ctx->pc = 0x1c8790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c8794: 0x621023
    ctx->pc = 0x1c8794u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8798: 0x14400003
    ctx->pc = 0x1C8798u;
    {
        const bool branch_taken_0x1c8798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C879Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8798) {
            ctx->pc = 0x1C87A8u;
            goto label_1c87a8;
        }
    }
    ctx->pc = 0x1C87A0u;
    // 0x1c87a0: 0xc072250
    ctx->pc = 0x1C87A0u;
    SET_GPR_U32(ctx, 31, 0x1C87A8u);
    ctx->pc = 0x1C8940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8940_0x1c8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87A8u; }
    }
    if (ctx->pc != 0x1C87A8u) { return; }
    ctx->pc = 0x1C87A8u;
label_1c87a8:
    // 0x1c87a8: 0x8fa20068
    ctx->pc = 0x1c87a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c87ac: 0x240202d
    ctx->pc = 0x1c87acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87b0: 0xa2620000
    ctx->pc = 0x1c87b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c87b4: 0x8fa5006c
    ctx->pc = 0x1c87b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c87b8: 0xc072258
    ctx->pc = 0x1C87B8u;
    SET_GPR_U32(ctx, 31, 0x1C87C0u);
    ctx->pc = 0x1C87BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8960_0x1c8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C0u; }
    }
    if (ctx->pc != 0x1C87C0u) { return; }
    ctx->pc = 0x1C87C0u;
    // 0x1c87c0: 0x24110001
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1c87c4:
    // 0x1c87c4: 0xc071cb8
    ctx->pc = 0x1C87C4u;
    SET_GPR_U32(ctx, 31, 0x1C87CCu);
    ctx->pc = 0x1C72E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C72E0_0x1c72e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87CCu; }
    }
    if (ctx->pc != 0x1C87CCu) { return; }
    ctx->pc = 0x1C87CCu;
label_1c87cc:
    // 0x1c87cc: 0x220102d
    ctx->pc = 0x1c87ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87d0: 0xdfbf0050
    ctx->pc = 0x1c87d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c87d4:
    // 0x1c87d4: 0x7bb40040
    ctx->pc = 0x1c87d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c87d8: 0x7bb30030
    ctx->pc = 0x1c87d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c87dc: 0x7bb20020
    ctx->pc = 0x1c87dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c87e0: 0x7bb10010
    ctx->pc = 0x1c87e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c87e4: 0x7bb00000
    ctx->pc = 0x1c87e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c87e8: 0x3e00008
    ctx->pc = 0x1C87E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C87ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C86A8u: goto label_1c86a8;
            case 0x1C86B0u: goto label_1c86b0;
            case 0x1C86F0u: goto label_1c86f0;
            case 0x1C8704u: goto label_1c8704;
            case 0x1C871Cu: goto label_1c871c;
            case 0x1C8728u: goto label_1c8728;
            case 0x1C8730u: goto label_1c8730;
            case 0x1C8750u: goto label_1c8750;
            case 0x1C877Cu: goto label_1c877c;
            case 0x1C8780u: goto label_1c8780;
            case 0x1C878Cu: goto label_1c878c;
            case 0x1C87A8u: goto label_1c87a8;
            case 0x1C87C4u: goto label_1c87c4;
            case 0x1C87CCu: goto label_1c87cc;
            case 0x1C87D4u: goto label_1c87d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C87F0u;
}
