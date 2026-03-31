#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001860B0
// Address: 0x1860b0 - 0x186230
void sub_001860B0_0x1860b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1860b0u;

    // 0x1860b0: 0x27bdfd40
    ctx->pc = 0x1860b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1860b4: 0xffb00280
    ctx->pc = 0x1860b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
    // 0x1860b8: 0x80802d
    ctx->pc = 0x1860b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860bc: 0xffb30298
    ctx->pc = 0x1860bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 19));
    // 0x1860c0: 0xc0982d
    ctx->pc = 0x1860c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860c4: 0xffb402a0
    ctx->pc = 0x1860c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 20));
    // 0x1860c8: 0xffb10288
    ctx->pc = 0x1860c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 17));
    // 0x1860cc: 0xffb20290
    ctx->pc = 0x1860ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 18));
    // 0x1860d0: 0xffb502a8
    ctx->pc = 0x1860d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 21));
    // 0x1860d4: 0xffbf02b0
    ctx->pc = 0x1860d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x1860d8: 0xc062210
    ctx->pc = 0x1860D8u;
    SET_GPR_U32(ctx, 31, 0x1860E0u);
    ctx->pc = 0x1860DCu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1860E0u; }
    }
    if (ctx->pc != 0x1860E0u) { return; }
    ctx->pc = 0x1860E0u;
    // 0x1860e0: 0x54400005
    ctx->pc = 0x1860E0u;
    {
        const bool branch_taken_0x1860e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1860e0) {
            ctx->pc = 0x1860E4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
            ctx->pc = 0x1860F8u;
            goto label_1860f8;
        }
    }
    ctx->pc = 0x1860E8u;
    // 0x1860e8: 0x3c028101
    ctx->pc = 0x1860e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1860ec: 0x10000047
    ctx->pc = 0x1860ECu;
    {
        const bool branch_taken_0x1860ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1860F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x1860ec) {
            ctx->pc = 0x18620Cu;
            goto label_18620c;
        }
    }
    ctx->pc = 0x1860F4u;
    // 0x1860f4: 0x0
    ctx->pc = 0x1860f4u;
    // NOP
label_1860f8:
    // 0x1860f8: 0x3c030028
    ctx->pc = 0x1860f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1860fc: 0x2029018
    ctx->pc = 0x1860fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
    // 0x186100: 0x3c028101
    ctx->pc = 0x186100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186104: 0x24755b48
    ctx->pc = 0x186104u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 23368));
    // 0x186108: 0x2551821
    ctx->pc = 0x186108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x18610c: 0x8c64088c
    ctx->pc = 0x18610cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 2188)));
    // 0x186110: 0x1080003e
    ctx->pc = 0x186110u;
    {
        const bool branch_taken_0x186110 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x186114u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x186110) {
            ctx->pc = 0x18620Cu;
            goto label_18620c;
        }
    }
    ctx->pc = 0x186118u;
    // 0x186118: 0x27b10200
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 512));
    // 0x18611c: 0x280282d
    ctx->pc = 0x18611cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186120: 0x200202d
    ctx->pc = 0x186120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186124: 0xc0609a2
    ctx->pc = 0x186124u;
    SET_GPR_U32(ctx, 31, 0x18612Cu);
    ctx->pc = 0x186128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18612Cu; }
    }
    if (ctx->pc != 0x18612Cu) { return; }
    ctx->pc = 0x18612Cu;
    // 0x18612c: 0x10400005
    ctx->pc = 0x18612Cu;
    {
        const bool branch_taken_0x18612c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18612c) {
            ctx->pc = 0x186144u;
            goto label_186144;
        }
    }
    ctx->pc = 0x186134u;
    // 0x186134: 0xc06089c
    ctx->pc = 0x186134u;
    SET_GPR_U32(ctx, 31, 0x18613Cu);
    ctx->pc = 0x186138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18613Cu; }
    }
    if (ctx->pc != 0x18613Cu) { return; }
    ctx->pc = 0x18613Cu;
    // 0x18613c: 0x14400004
    ctx->pc = 0x18613Cu;
    {
        const bool branch_taken_0x18613c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18613c) {
            ctx->pc = 0x186150u;
            goto label_186150;
        }
    }
    ctx->pc = 0x186144u;
label_186144:
    // 0x186144: 0x3c028101
    ctx->pc = 0x186144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186148: 0x10000030
    ctx->pc = 0x186148u;
    {
        const bool branch_taken_0x186148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18614Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x186148) {
            ctx->pc = 0x18620Cu;
            goto label_18620c;
        }
    }
    ctx->pc = 0x186150u;
label_186150:
    // 0x186150: 0xc060880
    ctx->pc = 0x186150u;
    SET_GPR_U32(ctx, 31, 0x186158u);
    ctx->pc = 0x186154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186158u; }
    }
    if (ctx->pc != 0x186158u) { return; }
    ctx->pc = 0x186158u;
    // 0x186158: 0x54400005
    ctx->pc = 0x186158u;
    {
        const bool branch_taken_0x186158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186158) {
            ctx->pc = 0x18615Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
            ctx->pc = 0x186170u;
            goto label_186170;
        }
    }
    ctx->pc = 0x186160u;
    // 0x186160: 0x3c028101
    ctx->pc = 0x186160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186164: 0x10000029
    ctx->pc = 0x186164u;
    {
        const bool branch_taken_0x186164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186168u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x186164) {
            ctx->pc = 0x18620Cu;
            goto label_18620c;
        }
    }
    ctx->pc = 0x18616Cu;
    // 0x18616c: 0x0
    ctx->pc = 0x18616cu;
    // NOP
label_186170:
    // 0x186170: 0x220202d
    ctx->pc = 0x186170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186174: 0x245417c8
    ctx->pc = 0x186174u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6088));
    // 0x186178: 0xc042b9e
    ctx->pc = 0x186178u;
    SET_GPR_U32(ctx, 31, 0x186180u);
    ctx->pc = 0x18617Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186180u; }
    }
    if (ctx->pc != 0x186180u) { return; }
    ctx->pc = 0x186180u;
    // 0x186180: 0x54400007
    ctx->pc = 0x186180u;
    {
        const bool branch_taken_0x186180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186180) {
            ctx->pc = 0x186184u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1861A0u;
            goto label_1861a0;
        }
    }
    ctx->pc = 0x186188u;
    // 0x186188: 0x26a40808
    ctx->pc = 0x186188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 2056));
    // 0x18618c: 0x220282d
    ctx->pc = 0x18618cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186190: 0xc042bf0
    ctx->pc = 0x186190u;
    SET_GPR_U32(ctx, 31, 0x186198u);
    ctx->pc = 0x186194u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186198u; }
    }
    if (ctx->pc != 0x186198u) { return; }
    ctx->pc = 0x186198u;
    // 0x186198: 0x10000017
    ctx->pc = 0x186198u;
    {
        const bool branch_taken_0x186198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x186198) {
            ctx->pc = 0x1861F8u;
            goto label_1861f8;
        }
    }
    ctx->pc = 0x1861A0u;
label_1861a0:
    // 0x1861a0: 0x220282d
    ctx->pc = 0x1861a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a4: 0x3a0302d
    ctx->pc = 0x1861a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a8: 0x382d
    ctx->pc = 0x1861a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861ac: 0xc0610d8
    ctx->pc = 0x1861ACu;
    SET_GPR_U32(ctx, 31, 0x1861B4u);
    ctx->pc = 0x1861B0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861B4u; }
    }
    if (ctx->pc != 0x1861B4u) { return; }
    ctx->pc = 0x1861B4u;
    // 0x1861b4: 0x3c038101
    ctx->pc = 0x1861b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1861b8: 0x34630011
    ctx->pc = 0x1861b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x1861bc: 0x14430014
    ctx->pc = 0x1861BCu;
    {
        const bool branch_taken_0x1861bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1861C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
        if (branch_taken_0x1861bc) {
            ctx->pc = 0x186210u;
            goto label_186210;
        }
    }
    ctx->pc = 0x1861C4u;
    // 0x1861c4: 0x97a30000
    ctx->pc = 0x1861c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1861c8: 0x3c028101
    ctx->pc = 0x1861c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1861cc: 0x30630020
    ctx->pc = 0x1861ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x1861d0: 0x1060000f
    ctx->pc = 0x1861D0u;
    {
        const bool branch_taken_0x1861d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1861D4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x1861d0) {
            ctx->pc = 0x186210u;
            goto label_186210;
        }
    }
    ctx->pc = 0x1861D8u;
    // 0x1861d8: 0x26b00808
    ctx->pc = 0x1861d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 2056));
    // 0x1861dc: 0x220282d
    ctx->pc = 0x1861dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861e0: 0x2508021
    ctx->pc = 0x1861e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1861e4: 0xc042bf0
    ctx->pc = 0x1861E4u;
    SET_GPR_U32(ctx, 31, 0x1861ECu);
    ctx->pc = 0x1861E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861ECu; }
    }
    if (ctx->pc != 0x1861ECu) { return; }
    ctx->pc = 0x1861ECu;
    // 0x1861ec: 0x200202d
    ctx->pc = 0x1861ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861f0: 0xc042aee
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861F8u; }
    }
    if (ctx->pc != 0x1861F8u) { return; }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0x12600003
    ctx->pc = 0x1861F8u;
    {
        const bool branch_taken_0x1861f8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1861FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1861f8) {
            ctx->pc = 0x186208u;
            goto label_186208;
        }
    }
    ctx->pc = 0x186200u;
    // 0x186200: 0xc042bf0
    ctx->pc = 0x186200u;
    SET_GPR_U32(ctx, 31, 0x186208u);
    ctx->pc = 0x186204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186208u; }
    }
    if (ctx->pc != 0x186208u) { return; }
    ctx->pc = 0x186208u;
label_186208:
    // 0x186208: 0x102d
    ctx->pc = 0x186208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18620c:
    // 0x18620c: 0xdfb00280
    ctx->pc = 0x18620cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_186210:
    // 0x186210: 0xdfb10288
    ctx->pc = 0x186210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x186214: 0xdfb20290
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x186218: 0xdfb30298
    ctx->pc = 0x186218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x18621c: 0xdfb402a0
    ctx->pc = 0x18621cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x186220: 0xdfb502a8
    ctx->pc = 0x186220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x186224: 0xdfbf02b0
    ctx->pc = 0x186224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x186228: 0x3e00008
    ctx->pc = 0x186228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18622Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1860F8u: goto label_1860f8;
            case 0x186144u: goto label_186144;
            case 0x186150u: goto label_186150;
            case 0x186170u: goto label_186170;
            case 0x1861A0u: goto label_1861a0;
            case 0x1861F8u: goto label_1861f8;
            case 0x186208u: goto label_186208;
            case 0x18620Cu: goto label_18620c;
            case 0x186210u: goto label_186210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186230u;
}
