#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00183290
// Address: 0x183290 - 0x183670
void sub_00183290_0x183290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x183290u;

    // 0x183290: 0x27bdfd90
    ctx->pc = 0x183290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x183294: 0xffb20230
    ctx->pc = 0x183294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x183298: 0x80902d
    ctx->pc = 0x183298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18329c: 0x121040
    ctx->pc = 0x18329cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x1832a0: 0xffb10228
    ctx->pc = 0x1832a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x1832a4: 0x521021
    ctx->pc = 0x1832a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1832a8: 0xffb50248
    ctx->pc = 0x1832a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 21));
    // 0x1832ac: 0x21140
    ctx->pc = 0x1832acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1832b0: 0xffb00220
    ctx->pc = 0x1832b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x1832b4: 0x521021
    ctx->pc = 0x1832b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1832b8: 0xffb30238
    ctx->pc = 0x1832b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x1832bc: 0x21080
    ctx->pc = 0x1832bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1832c0: 0xffb40240
    ctx->pc = 0x1832c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x1832c4: 0xffb60250
    ctx->pc = 0x1832c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x1832c8: 0xffb70258
    ctx->pc = 0x1832c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 23));
    // 0x1832cc: 0x3c110023
    ctx->pc = 0x1832ccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1832d0: 0x2631fa18
    ctx->pc = 0x1832d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294965784));
    // 0x1832d4: 0x2228821
    ctx->pc = 0x1832d4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1832d8: 0xffbf0260
    ctx->pc = 0x1832d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
    // 0x1832dc: 0xc062210
    ctx->pc = 0x1832DCu;
    SET_GPR_U32(ctx, 31, 0x1832E4u);
    ctx->pc = 0x1832E0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832E4u; }
    }
    if (ctx->pc != 0x1832E4u) { return; }
    ctx->pc = 0x1832E4u;
    // 0x1832e4: 0x14400004
    ctx->pc = 0x1832E4u;
    {
        const bool branch_taken_0x1832e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1832e4) {
            ctx->pc = 0x1832F8u;
            goto label_1832f8;
        }
    }
    ctx->pc = 0x1832ECu;
    // 0x1832ec: 0x3c028101
    ctx->pc = 0x1832ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1832f0: 0x100000d3
    ctx->pc = 0x1832F0u;
    {
        const bool branch_taken_0x1832f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1832F4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x1832f0) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x1832F8u;
label_1832f8:
    // 0x1832f8: 0x12a00004
    ctx->pc = 0x1832F8u;
    {
        const bool branch_taken_0x1832f8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x1832f8) {
            ctx->pc = 0x18330Cu;
            goto label_18330c;
        }
    }
    ctx->pc = 0x183300u;
    // 0x183300: 0xaea00004
    ctx->pc = 0x183300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x183304: 0xaea00000
    ctx->pc = 0x183304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x183308: 0xaea00008
    ctx->pc = 0x183308u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_18330c:
    // 0x18330c: 0xc061f4e
    ctx->pc = 0x18330Cu;
    SET_GPR_U32(ctx, 31, 0x183314u);
    ctx->pc = 0x183310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187D38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187D38_0x187d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183314u; }
    }
    if (ctx->pc != 0x183314u) { return; }
    ctx->pc = 0x183314u;
    // 0x183314: 0xafa20210
    ctx->pc = 0x183314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x183318: 0x40182d
    ctx->pc = 0x183318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18331c: 0x3c028101
    ctx->pc = 0x18331cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183320: 0x106000c7
    ctx->pc = 0x183320u;
    {
        const bool branch_taken_0x183320 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x183324u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x183320) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183328u;
    // 0x183328: 0x24140002
    ctx->pc = 0x183328u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18332c: 0x14740007
    ctx->pc = 0x18332Cu;
    {
        const bool branch_taken_0x18332c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        ctx->pc = 0x183330u;
        SET_GPR_U32(ctx, 23, ((uint32_t)40 << 16));
        if (branch_taken_0x18332c) {
            ctx->pc = 0x18334Cu;
            goto label_18334c;
        }
    }
    ctx->pc = 0x183334u;
    // 0x183334: 0x24020898
    ctx->pc = 0x183334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x183338: 0x24030001
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18333c: 0x2421018
    ctx->pc = 0x18333cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x183340: 0x3c010028
    ctx->pc = 0x183340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)40 << 16));
    // 0x183344: 0x220821
    ctx->pc = 0x183344u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x183348: 0xac2363d0
    ctx->pc = 0x183348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25552), GPR_U32(ctx, 3));
label_18334c:
    // 0x18334c: 0x24030898
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x183350: 0x26f35b48
    ctx->pc = 0x183350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x183354: 0x2438018
    ctx->pc = 0x183354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x183358: 0x2131021
    ctx->pc = 0x183358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x18335c: 0x8c430888
    ctx->pc = 0x18335cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2184)));
    // 0x183360: 0x10600093
    ctx->pc = 0x183360u;
    {
        const bool branch_taken_0x183360 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x183360) {
            ctx->pc = 0x1835B0u;
            goto label_1835b0;
        }
    }
    ctx->pc = 0x183368u;
    // 0x183368: 0x240202d
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18336c: 0xc061af8
    ctx->pc = 0x18336Cu;
    SET_GPR_U32(ctx, 31, 0x183374u);
    ctx->pc = 0x183370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186BE0_0x186be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183374u; }
    }
    if (ctx->pc != 0x183374u) { return; }
    ctx->pc = 0x183374u;
    // 0x183374: 0x1040001d
    ctx->pc = 0x183374u;
    {
        const bool branch_taken_0x183374 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183378u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        if (branch_taken_0x183374) {
            ctx->pc = 0x1833ECu;
            goto label_1833ec;
        }
    }
    ctx->pc = 0x18337Cu;
    // 0x18337c: 0x8fa30000
    ctx->pc = 0x18337cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183380: 0x3c028101
    ctx->pc = 0x183380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183384: 0x106000ae
    ctx->pc = 0x183384u;
    {
        const bool branch_taken_0x183384 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x183388u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x183384) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x18338Cu;
    // 0x18338c: 0x26640004
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4));
    // 0x183390: 0x26030890
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2192));
    // 0x183394: 0x26020800
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2048));
    // 0x183398: 0x26660808
    ctx->pc = 0x183398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 2056));
    // 0x18339c: 0x444821
    ctx->pc = 0x18339cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1833a0: 0x531021
    ctx->pc = 0x1833a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1833a4: 0x734021
    ctx->pc = 0x1833a4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1833a8: 0x641821
    ctx->pc = 0x1833a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1833ac: 0x2405ffff
    ctx->pc = 0x1833acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1833b0: 0x2063021
    ctx->pc = 0x1833b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1833b4: 0x3c070024
    ctx->pc = 0x1833b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x1833b8: 0xac600000
    ctx->pc = 0x1833b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1833bc: 0xac450000
    ctx->pc = 0x1833bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1833c0: 0xad250000
    ctx->pc = 0x1833c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x1833c4: 0xad000000
    ctx->pc = 0x1833c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1833c8: 0x24e817c8
    ctx->pc = 0x1833c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 6088));
    // 0x1833cc: 0x81020000
    ctx->pc = 0x1833ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1833d0: 0x81030001
    ctx->pc = 0x1833d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1833d4: 0xa0c20000
    ctx->pc = 0x1833d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1833d8: 0xa0c30001
    ctx->pc = 0x1833d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1833dc: 0xc061b04
    ctx->pc = 0x1833DCu;
    SET_GPR_U32(ctx, 31, 0x1833E4u);
    ctx->pc = 0x1833E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186C10_0x186c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833E4u; }
    }
    if (ctx->pc != 0x1833E4u) { return; }
    ctx->pc = 0x1833E4u;
    // 0x1833e4: 0x14400004
    ctx->pc = 0x1833E4u;
    {
        const bool branch_taken_0x1833e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1833E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        if (branch_taken_0x1833e4) {
            ctx->pc = 0x1833F8u;
            goto label_1833f8;
        }
    }
    ctx->pc = 0x1833ECu;
label_1833ec:
    // 0x1833ec: 0x3c028101
    ctx->pc = 0x1833ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1833f0: 0x10000093
    ctx->pc = 0x1833F0u;
    {
        const bool branch_taken_0x1833f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1833F4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x1833f0) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x1833F8u;
label_1833f8:
    // 0x1833f8: 0x56a00001
    ctx->pc = 0x1833F8u;
    {
        const bool branch_taken_0x1833f8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1833f8) {
            ctx->pc = 0x1833FCu;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
            ctx->pc = 0x183400u;
            goto label_183400;
        }
    }
    ctx->pc = 0x183400u;
label_183400:
    // 0x183400: 0x3c050024
    ctx->pc = 0x183400u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x183404: 0x220202d
    ctx->pc = 0x183404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183408: 0x24a517d0
    ctx->pc = 0x183408u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6096));
    // 0x18340c: 0xc042d10
    ctx->pc = 0x18340Cu;
    SET_GPR_U32(ctx, 31, 0x183414u);
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183414u; }
    }
    if (ctx->pc != 0x183414u) { return; }
    ctx->pc = 0x183414u;
    // 0x183414: 0x50400006
    ctx->pc = 0x183414u;
    {
        const bool branch_taken_0x183414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183414) {
            ctx->pc = 0x183418u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x183430u;
            goto label_183430;
        }
    }
    ctx->pc = 0x18341Cu;
    // 0x18341c: 0x56a0005a
    ctx->pc = 0x18341Cu;
    {
        const bool branch_taken_0x18341c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x18341c) {
            ctx->pc = 0x183420u;
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x183588u;
            goto label_183588;
        }
    }
    ctx->pc = 0x183424u;
    // 0x183424: 0x10000058
    ctx->pc = 0x183424u;
    {
        const bool branch_taken_0x183424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x183424) {
            ctx->pc = 0x183588u;
            goto label_183588;
        }
    }
    ctx->pc = 0x18342Cu;
    // 0x18342c: 0x0
    ctx->pc = 0x18342cu;
    // NOP
label_183430:
    // 0x183430: 0x3c028101
    ctx->pc = 0x183430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183434: 0x8225001e
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x183438: 0x41880
    ctx->pc = 0x183438u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x18343c: 0x641821
    ctx->pc = 0x18343cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x183440: 0x31840
    ctx->pc = 0x183440u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x183444: 0x651821
    ctx->pc = 0x183444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183448: 0x2464fdf0
    ctx->pc = 0x183448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294966768));
    // 0x18344c: 0x2884000b
    ctx->pc = 0x18344cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), 11));
    // 0x183450: 0x1480007b
    ctx->pc = 0x183450u;
    {
        const bool branch_taken_0x183450 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x183454u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 134));
        if (branch_taken_0x183450) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183458u;
    // 0x183458: 0x220282d
    ctx->pc = 0x183458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18345c: 0xc060c8e
    ctx->pc = 0x18345Cu;
    SET_GPR_U32(ctx, 31, 0x183464u);
    ctx->pc = 0x183460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183238u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183238_0x183238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183464u; }
    }
    if (ctx->pc != 0x183464u) { return; }
    ctx->pc = 0x183464u;
    // 0x183464: 0xc061f94
    ctx->pc = 0x183464u;
    SET_GPR_U32(ctx, 31, 0x18346Cu);
    ctx->pc = 0x183468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E50_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18346Cu; }
    }
    if (ctx->pc != 0x18346Cu) { return; }
    ctx->pc = 0x18346Cu;
    // 0x18346c: 0x8e300034
    ctx->pc = 0x18346cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x183470: 0x8e240030
    ctx->pc = 0x183470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x183474: 0x240303e8
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x183478: 0xafa20210
    ctx->pc = 0x183478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x18347c: 0x50600001
    ctx->pc = 0x18347Cu;
    {
        const bool branch_taken_0x18347c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18347c) {
            ctx->pc = 0x183480u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x183484u;
            goto label_183484;
        }
    }
    ctx->pc = 0x183484u;
label_183484:
    // 0x183484: 0x83001a
    ctx->pc = 0x183484u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x183488: 0x8e250038
    ctx->pc = 0x183488u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x18348c: 0x982d
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183490: 0xa02d
    ctx->pc = 0x183490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183494: 0x2012
    ctx->pc = 0x183494u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x183498: 0x41140
    ctx->pc = 0x183498u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
    // 0x18349c: 0x441023
    ctx->pc = 0x18349cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1834a0: 0x21080
    ctx->pc = 0x1834a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1834a4: 0x441021
    ctx->pc = 0x1834a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1834a8: 0x210c0
    ctx->pc = 0x1834a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1834ac: 0x18a00011
    ctx->pc = 0x1834ACu;
    {
        const bool branch_taken_0x1834ac = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1834B0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1834ac) {
            ctx->pc = 0x1834F4u;
            goto label_1834f4;
        }
    }
    ctx->pc = 0x1834B4u;
    // 0x1834b4: 0x0
    ctx->pc = 0x1834b4u;
    // NOP
label_1834b8:
    // 0x1834b8: 0x16760004
    ctx->pc = 0x1834B8u;
    {
        const bool branch_taken_0x1834b8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 22));
        ctx->pc = 0x1834BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1834b8) {
            ctx->pc = 0x1834CCu;
            goto label_1834cc;
        }
    }
    ctx->pc = 0x1834C0u;
    // 0x1834c0: 0x8e220034
    ctx->pc = 0x1834c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1834c4: 0x2021023
    ctx->pc = 0x1834c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1834c8: 0xae220170
    ctx->pc = 0x1834c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
label_1834cc:
    // 0x1834cc: 0x26100001
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1834d0: 0x240202d
    ctx->pc = 0x1834d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834d4: 0xc061d2a
    ctx->pc = 0x1834D4u;
    SET_GPR_U32(ctx, 31, 0x1834DCu);
    ctx->pc = 0x1834D8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x1874A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001874A8_0x1874a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834DCu; }
    }
    if (ctx->pc != 0x1834DCu) { return; }
    ctx->pc = 0x1834DCu;
    // 0x1834dc: 0x26640001
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1834e0: 0x8e230038
    ctx->pc = 0x1834e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1834e4: 0x82980a
    ctx->pc = 0x1834e4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
    // 0x1834e8: 0x283182a
    ctx->pc = 0x1834e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1834ec: 0x1460fff2
    ctx->pc = 0x1834ECu;
    {
        const bool branch_taken_0x1834ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1834F0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        if (branch_taken_0x1834ec) {
            ctx->pc = 0x1834B8u;
            goto label_1834b8;
        }
    }
    ctx->pc = 0x1834F4u;
label_1834f4:
    // 0x1834f4: 0x27b30010
    ctx->pc = 0x1834f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1834f8: 0x8e26003c
    ctx->pc = 0x1834f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1834fc: 0x240202d
    ctx->pc = 0x1834fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183500: 0x260282d
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183504: 0xc060c02
    ctx->pc = 0x183504u;
    SET_GPR_U32(ctx, 31, 0x18350Cu);
    ctx->pc = 0x183508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18350Cu; }
    }
    if (ctx->pc != 0x18350Cu) { return; }
    ctx->pc = 0x18350Cu;
    // 0x18350c: 0x1440004c
    ctx->pc = 0x18350Cu;
    {
        const bool branch_taken_0x18350c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183510u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        if (branch_taken_0x18350c) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183514u;
    // 0x183514: 0x97a30010
    ctx->pc = 0x183514u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183518: 0x3c028101
    ctx->pc = 0x183518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18351c: 0x30638000
    ctx->pc = 0x18351cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x183520: 0x10600047
    ctx->pc = 0x183520u;
    {
        const bool branch_taken_0x183520 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x183524u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47));
        if (branch_taken_0x183520) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183528u;
    // 0x183528: 0x27b00050
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 80));
    // 0x18352c: 0x3c050024
    ctx->pc = 0x18352cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x183530: 0x24a517b0
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6064));
    // 0x183534: 0xc042b9e
    ctx->pc = 0x183534u;
    SET_GPR_U32(ctx, 31, 0x18353Cu);
    ctx->pc = 0x183538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18353Cu; }
    }
    if (ctx->pc != 0x18353Cu) { return; }
    ctx->pc = 0x18353Cu;
    // 0x18353c: 0x14400012
    ctx->pc = 0x18353Cu;
    {
        const bool branch_taken_0x18353c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183540u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18353c) {
            ctx->pc = 0x183588u;
            goto label_183588;
        }
    }
    ctx->pc = 0x183544u;
    // 0x183544: 0x8e26003c
    ctx->pc = 0x183544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x183548: 0x260282d
    ctx->pc = 0x183548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18354c: 0xc060c02
    ctx->pc = 0x18354Cu;
    SET_GPR_U32(ctx, 31, 0x183554u);
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183554u; }
    }
    if (ctx->pc != 0x183554u) { return; }
    ctx->pc = 0x183554u;
    // 0x183554: 0x1440003a
    ctx->pc = 0x183554u;
    {
        const bool branch_taken_0x183554 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x183558u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        if (branch_taken_0x183554) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x18355Cu;
    // 0x18355c: 0x97a30010
    ctx->pc = 0x18355cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183560: 0x3c028101
    ctx->pc = 0x183560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183564: 0x30638000
    ctx->pc = 0x183564u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x183568: 0x10600035
    ctx->pc = 0x183568u;
    {
        const bool branch_taken_0x183568 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18356Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47));
        if (branch_taken_0x183568) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183570u;
    // 0x183570: 0x3c050024
    ctx->pc = 0x183570u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x183574: 0x200202d
    ctx->pc = 0x183574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183578: 0xc042b9e
    ctx->pc = 0x183578u;
    SET_GPR_U32(ctx, 31, 0x183580u);
    ctx->pc = 0x18357Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6072));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183580u; }
    }
    if (ctx->pc != 0x183580u) { return; }
    ctx->pc = 0x183580u;
    // 0x183580: 0x50400005
    ctx->pc = 0x183580u;
    {
        const bool branch_taken_0x183580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x183580) {
            ctx->pc = 0x183584u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
            ctx->pc = 0x183598u;
            goto label_183598;
        }
    }
    ctx->pc = 0x183588u;
label_183588:
    // 0x183588: 0x3c028101
    ctx->pc = 0x183588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18358c: 0x1000002c
    ctx->pc = 0x18358Cu;
    {
        const bool branch_taken_0x18358c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183590u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47));
        if (branch_taken_0x18358c) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183594u;
    // 0x183594: 0x0
    ctx->pc = 0x183594u;
    // NOP
label_183598:
    // 0x183598: 0x26e45b48
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x18359c: 0x2421018
    ctx->pc = 0x18359cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1835a0: 0x24030001
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1835a4: 0x441021
    ctx->pc = 0x1835a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1835a8: 0x10000004
    ctx->pc = 0x1835A8u;
    {
        const bool branch_taken_0x1835a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1835ACu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2188), GPR_U32(ctx, 3));
        if (branch_taken_0x1835a8) {
            ctx->pc = 0x1835BCu;
            goto label_1835bc;
        }
    }
    ctx->pc = 0x1835B0u;
label_1835b0:
    // 0x1835b0: 0xc061f94
    ctx->pc = 0x1835B0u;
    SET_GPR_U32(ctx, 31, 0x1835B8u);
    ctx->pc = 0x1835B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E50_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835B8u; }
    }
    if (ctx->pc != 0x1835B8u) { return; }
    ctx->pc = 0x1835B8u;
    // 0x1835b8: 0xafa20210
    ctx->pc = 0x1835b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_1835bc:
    // 0x1835bc: 0x24030898
    ctx->pc = 0x1835bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x1835c0: 0x26e45b48
    ctx->pc = 0x1835c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x1835c4: 0x2431818
    ctx->pc = 0x1835c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1835c8: 0x3c028101
    ctx->pc = 0x1835c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1835cc: 0x641821
    ctx->pc = 0x1835ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1835d0: 0x2470088c
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 2188));
    // 0x1835d4: 0x8e040000
    ctx->pc = 0x1835d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1835d8: 0x10800019
    ctx->pc = 0x1835D8u;
    {
        const bool branch_taken_0x1835d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1835DCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47));
        if (branch_taken_0x1835d8) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x1835E0u;
    // 0x1835e0: 0x12a0000c
    ctx->pc = 0x1835E0u;
    {
        const bool branch_taken_0x1835e0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x1835E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1835e0) {
            ctx->pc = 0x183614u;
            goto label_183614;
        }
    }
    ctx->pc = 0x1835E8u;
    // 0x1835e8: 0xc060bcc
    ctx->pc = 0x1835E8u;
    SET_GPR_U32(ctx, 31, 0x1835F0u);
    ctx->pc = 0x1835ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 528));
    ctx->pc = 0x182F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182F30_0x182f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835F0u; }
    }
    if (ctx->pc != 0x1835F0u) { return; }
    ctx->pc = 0x1835F0u;
    // 0x1835f0: 0x8fa30210
    ctx->pc = 0x1835f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1835f4: 0x40202d
    ctx->pc = 0x1835f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f8: 0x14600011
    ctx->pc = 0x1835F8u;
    {
        const bool branch_taken_0x1835f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1835FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1835f8) {
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183600u;
    // 0x183600: 0x8e030000
    ctx->pc = 0x183600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183604: 0x24020002
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x183608: 0xaea20000
    ctx->pc = 0x183608u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x18360c: 0xaea30004
    ctx->pc = 0x18360cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x183610: 0xaea40008
    ctx->pc = 0x183610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
label_183614:
    // 0x183614: 0x24020898
    ctx->pc = 0x183614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x183618: 0x26e35b48
    ctx->pc = 0x183618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x18361c: 0x2421018
    ctx->pc = 0x18361cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x183620: 0x431021
    ctx->pc = 0x183620u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183624: 0x24440888
    ctx->pc = 0x183624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2184));
    // 0x183628: 0x8c830000
    ctx->pc = 0x183628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18362c: 0x50600004
    ctx->pc = 0x18362Cu;
    {
        const bool branch_taken_0x18362c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18362c) {
            ctx->pc = 0x183630u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x183640u;
            goto label_183640;
        }
    }
    ctx->pc = 0x183634u;
    // 0x183634: 0x3c028101
    ctx->pc = 0x183634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183638: 0xac800000
    ctx->pc = 0x183638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18363c: 0x34429003
    ctx->pc = 0x18363cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36867));
label_183640:
    // 0x183640: 0xdfb00220
    ctx->pc = 0x183640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x183644: 0xdfb10228
    ctx->pc = 0x183644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x183648: 0xdfb20230
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x18364c: 0xdfb30238
    ctx->pc = 0x18364cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x183650: 0xdfb40240
    ctx->pc = 0x183650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x183654: 0xdfb50248
    ctx->pc = 0x183654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x183658: 0xdfb60250
    ctx->pc = 0x183658u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x18365c: 0xdfb70258
    ctx->pc = 0x18365cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x183660: 0xdfbf0260
    ctx->pc = 0x183660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x183664: 0x3e00008
    ctx->pc = 0x183664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1832F8u: goto label_1832f8;
            case 0x18330Cu: goto label_18330c;
            case 0x18334Cu: goto label_18334c;
            case 0x1833ECu: goto label_1833ec;
            case 0x1833F8u: goto label_1833f8;
            case 0x183400u: goto label_183400;
            case 0x183430u: goto label_183430;
            case 0x183484u: goto label_183484;
            case 0x1834B8u: goto label_1834b8;
            case 0x1834CCu: goto label_1834cc;
            case 0x1834F4u: goto label_1834f4;
            case 0x183588u: goto label_183588;
            case 0x183598u: goto label_183598;
            case 0x1835B0u: goto label_1835b0;
            case 0x1835BCu: goto label_1835bc;
            case 0x183614u: goto label_183614;
            case 0x183640u: goto label_183640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18366Cu;
    // 0x18366c: 0x0
    ctx->pc = 0x18366cu;
    // NOP
}
