#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186230
// Address: 0x186230 - 0x186798
void sub_00186230_0x186230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186230u;

    // 0x186230: 0x27bdfa60
    ctx->pc = 0x186230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965856));
    // 0x186234: 0xffb00550
    ctx->pc = 0x186234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1360), GPR_U64(ctx, 16));
    // 0x186238: 0xa0802d
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18623c: 0xffb10558
    ctx->pc = 0x18623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1368), GPR_U64(ctx, 17));
    // 0x186240: 0x100882d
    ctx->pc = 0x186240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186244: 0xffb40570
    ctx->pc = 0x186244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1392), GPR_U64(ctx, 20));
    // 0x186248: 0x80a02d
    ctx->pc = 0x186248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18624c: 0xffb60580
    ctx->pc = 0x18624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1408), GPR_U64(ctx, 22));
    // 0x186250: 0xc0b02d
    ctx->pc = 0x186250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186254: 0xffbe0590
    ctx->pc = 0x186254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1424), GPR_U64(ctx, 30));
    // 0x186258: 0xe0f02d
    ctx->pc = 0x186258u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18625c: 0xffb20560
    ctx->pc = 0x18625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 18));
    // 0x186260: 0xffb30568
    ctx->pc = 0x186260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1384), GPR_U64(ctx, 19));
    // 0x186264: 0xffb50578
    ctx->pc = 0x186264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1400), GPR_U64(ctx, 21));
    // 0x186268: 0xffb70588
    ctx->pc = 0x186268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1416), GPR_U64(ctx, 23));
    // 0x18626c: 0xffbf0598
    ctx->pc = 0x18626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1432), GPR_U64(ctx, 31));
    // 0x186270: 0xafa90544
    ctx->pc = 0x186270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 9));
    // 0x186274: 0xc062210
    ctx->pc = 0x186274u;
    SET_GPR_U32(ctx, 31, 0x18627Cu);
    ctx->pc = 0x186278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18627Cu; }
    }
    if (ctx->pc != 0x18627Cu) { return; }
    ctx->pc = 0x18627Cu;
    // 0x18627c: 0x14400004
    ctx->pc = 0x18627Cu;
    {
        const bool branch_taken_0x18627c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186280u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x18627c) {
            ctx->pc = 0x186290u;
            goto label_186290;
        }
    }
    ctx->pc = 0x186284u;
    // 0x186284: 0x3c028101
    ctx->pc = 0x186284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186288: 0x10000137
    ctx->pc = 0x186288u;
    {
        const bool branch_taken_0x186288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18628Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x186288) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186290u;
label_186290:
    // 0x186290: 0x3c028101
    ctx->pc = 0x186290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186294: 0x2831818
    ctx->pc = 0x186294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x186298: 0x3c040028
    ctx->pc = 0x186298u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x18629c: 0x832021
    ctx->pc = 0x18629cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1862a0: 0x8c8463d4
    ctx->pc = 0x1862a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x1862a4: 0x10800130
    ctx->pc = 0x1862A4u;
    {
        const bool branch_taken_0x1862a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1862A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x1862a4) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1862ACu;
    // 0x1862ac: 0x200282d
    ctx->pc = 0x1862acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b0: 0x280202d
    ctx->pc = 0x1862b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b4: 0xc0609a2
    ctx->pc = 0x1862B4u;
    SET_GPR_U32(ctx, 31, 0x1862BCu);
    ctx->pc = 0x1862B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862BCu; }
    }
    if (ctx->pc != 0x1862BCu) { return; }
    ctx->pc = 0x1862BCu;
    // 0x1862bc: 0x10400007
    ctx->pc = 0x1862BCu;
    {
        const bool branch_taken_0x1862bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1862C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1862bc) {
            ctx->pc = 0x1862DCu;
            goto label_1862dc;
        }
    }
    ctx->pc = 0x1862C4u;
    // 0x1862c4: 0x3c020024
    ctx->pc = 0x1862c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1862c8: 0x245217c8
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6088));
    // 0x1862cc: 0xc042b9e
    ctx->pc = 0x1862CCu;
    SET_GPR_U32(ctx, 31, 0x1862D4u);
    ctx->pc = 0x1862D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862D4u; }
    }
    if (ctx->pc != 0x1862D4u) { return; }
    ctx->pc = 0x1862D4u;
    // 0x1862d4: 0x14400004
    ctx->pc = 0x1862D4u;
    {
        const bool branch_taken_0x1862d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1862D8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x1862d4) {
            ctx->pc = 0x1862E8u;
            goto label_1862e8;
        }
    }
    ctx->pc = 0x1862DCu;
label_1862dc:
    // 0x1862dc: 0x3c028101
    ctx->pc = 0x1862dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1862e0: 0x10000121
    ctx->pc = 0x1862E0u;
    {
        const bool branch_taken_0x1862e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1862E4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x1862e0) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1862E8u;
label_1862e8:
    // 0x1862e8: 0x3a0282d
    ctx->pc = 0x1862e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862ec: 0xc042bf0
    ctx->pc = 0x1862ECu;
    SET_GPR_U32(ctx, 31, 0x1862F4u);
    ctx->pc = 0x1862F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862F4u; }
    }
    if (ctx->pc != 0x1862F4u) { return; }
    ctx->pc = 0x1862F4u;
    // 0x1862f4: 0x200202d
    ctx->pc = 0x1862f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f8: 0xc042dee
    ctx->pc = 0x1862F8u;
    SET_GPR_U32(ctx, 31, 0x186300u);
    ctx->pc = 0x1862FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186300u; }
    }
    if (ctx->pc != 0x186300u) { return; }
    ctx->pc = 0x186300u;
    // 0x186300: 0x200202d
    ctx->pc = 0x186300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186304: 0xc042c56
    ctx->pc = 0x186304u;
    SET_GPR_U32(ctx, 31, 0x18630Cu);
    ctx->pc = 0x186308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18630Cu; }
    }
    if (ctx->pc != 0x18630Cu) { return; }
    ctx->pc = 0x18630Cu;
    // 0x18630c: 0x2021021
    ctx->pc = 0x18630cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186310: 0x24450001
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    // 0x186314: 0x27a20100
    ctx->pc = 0x186314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 256));
    // 0x186318: 0xc042bf0
    ctx->pc = 0x186318u;
    SET_GPR_U32(ctx, 31, 0x186320u);
    ctx->pc = 0x18631Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186320u; }
    }
    if (ctx->pc != 0x186320u) { return; }
    ctx->pc = 0x186320u;
    // 0x186320: 0xc042c56
    ctx->pc = 0x186320u;
    SET_GPR_U32(ctx, 31, 0x186328u);
    ctx->pc = 0x186324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186328u; }
    }
    if (ctx->pc != 0x186328u) { return; }
    ctx->pc = 0x186328u;
    // 0x186328: 0x1440000f
    ctx->pc = 0x186328u;
    {
        const bool branch_taken_0x186328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18632Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186328) {
            ctx->pc = 0x186368u;
            goto label_186368;
        }
    }
    ctx->pc = 0x186330u;
    // 0x186330: 0x240282d
    ctx->pc = 0x186330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186334: 0x280202d
    ctx->pc = 0x186334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186338: 0x27a60340
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 832));
    // 0x18633c: 0x382d
    ctx->pc = 0x18633cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186340: 0x402d
    ctx->pc = 0x186340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186344: 0xc0610d8
    ctx->pc = 0x186344u;
    SET_GPR_U32(ctx, 31, 0x18634Cu);
    ctx->pc = 0x186348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18634Cu; }
    }
    if (ctx->pc != 0x18634Cu) { return; }
    ctx->pc = 0x18634Cu;
    // 0x18634c: 0x3c038101
    ctx->pc = 0x18634cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x186350: 0x34630011
    ctx->pc = 0x186350u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x186354: 0x1043000e
    ctx->pc = 0x186354u;
    {
        const bool branch_taken_0x186354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x186358u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        if (branch_taken_0x186354) {
            ctx->pc = 0x186390u;
            goto label_186390;
        }
    }
    ctx->pc = 0x18635Cu;
    // 0x18635c: 0x10000103
    ctx->pc = 0x18635Cu;
    {
        const bool branch_taken_0x18635c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186360u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
        if (branch_taken_0x18635c) {
            ctx->pc = 0x18676Cu;
            goto label_18676c;
        }
    }
    ctx->pc = 0x186364u;
    // 0x186364: 0x0
    ctx->pc = 0x186364u;
    // NOP
label_186368:
    // 0x186368: 0x802d
    ctx->pc = 0x186368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18636c: 0x280202d
    ctx->pc = 0x18636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186370: 0x27a60340
    ctx->pc = 0x186370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 832));
    // 0x186374: 0x382d
    ctx->pc = 0x186374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186378: 0xc0610d8
    ctx->pc = 0x186378u;
    SET_GPR_U32(ctx, 31, 0x186380u);
    ctx->pc = 0x18637Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186380u; }
    }
    if (ctx->pc != 0x186380u) { return; }
    ctx->pc = 0x186380u;
    // 0x186380: 0x3c038101
    ctx->pc = 0x186380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x186384: 0x34630011
    ctx->pc = 0x186384u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x186388: 0x144300f7
    ctx->pc = 0x186388u;
    {
        const bool branch_taken_0x186388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18638Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        if (branch_taken_0x186388) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186390u;
label_186390:
    // 0x186390: 0x97a30340
    ctx->pc = 0x186390u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x186394: 0x3c028101
    ctx->pc = 0x186394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186398: 0x30630020
    ctx->pc = 0x186398u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x18639c: 0x106000f2
    ctx->pc = 0x18639Cu;
    {
        const bool branch_taken_0x18639c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1863A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x18639c) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1863A4u;
    // 0x1863a4: 0x27a30140
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1863a8: 0x8fa60350
    ctx->pc = 0x1863a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1863ac: 0x60282d
    ctx->pc = 0x1863acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863b0: 0x280202d
    ctx->pc = 0x1863b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863b4: 0xc060c02
    ctx->pc = 0x1863B4u;
    SET_GPR_U32(ctx, 31, 0x1863BCu);
    ctx->pc = 0x1863B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863BCu; }
    }
    if (ctx->pc != 0x1863BCu) { return; }
    ctx->pc = 0x1863BCu;
    // 0x1863bc: 0x40182d
    ctx->pc = 0x1863bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863c0: 0x14600015
    ctx->pc = 0x1863C0u;
    {
        const bool branch_taken_0x1863c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1863C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        if (branch_taken_0x1863c0) {
            ctx->pc = 0x186418u;
            goto label_186418;
        }
    }
    ctx->pc = 0x1863C8u;
    // 0x1863c8: 0x97a30140
    ctx->pc = 0x1863c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1863cc: 0x3c028101
    ctx->pc = 0x1863ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1863d0: 0x30638000
    ctx->pc = 0x1863d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x1863d4: 0x106000e4
    ctx->pc = 0x1863D4u;
    {
        const bool branch_taken_0x1863d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1863D8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1863d4) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1863DCu;
    // 0x1863dc: 0x27b50180
    ctx->pc = 0x1863dcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 384));
    // 0x1863e0: 0x3c060024
    ctx->pc = 0x1863e0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x1863e4: 0x2a0202d
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863e8: 0xc042b9e
    ctx->pc = 0x1863E8u;
    SET_GPR_U32(ctx, 31, 0x1863F0u);
    ctx->pc = 0x1863ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863F0u; }
    }
    if (ctx->pc != 0x1863F0u) { return; }
    ctx->pc = 0x1863F0u;
    // 0x1863f0: 0x144000ca
    ctx->pc = 0x1863F0u;
    {
        const bool branch_taken_0x1863f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1863F4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 320));
        if (branch_taken_0x1863f0) {
            ctx->pc = 0x18671Cu;
            goto label_18671c;
        }
    }
    ctx->pc = 0x1863F8u;
    // 0x1863f8: 0x8fa60350
    ctx->pc = 0x1863f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1863fc: 0xe0282d
    ctx->pc = 0x1863fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186400: 0x24070001
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x186404: 0xc060c02
    ctx->pc = 0x186404u;
    SET_GPR_U32(ctx, 31, 0x18640Cu);
    ctx->pc = 0x186408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18640Cu; }
    }
    if (ctx->pc != 0x18640Cu) { return; }
    ctx->pc = 0x18640Cu;
    // 0x18640c: 0x40182d
    ctx->pc = 0x18640cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186410: 0x1060000b
    ctx->pc = 0x186410u;
    {
        const bool branch_taken_0x186410 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x186414u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        if (branch_taken_0x186410) {
            ctx->pc = 0x186440u;
            goto label_186440;
        }
    }
    ctx->pc = 0x186418u;
label_186418:
    // 0x186418: 0x3c028101
    ctx->pc = 0x186418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18641c: 0x34420002
    ctx->pc = 0x18641cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x186420: 0x546200d1
    ctx->pc = 0x186420u;
    {
        const bool branch_taken_0x186420 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x186420) {
            ctx->pc = 0x186424u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1344)));
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186428u;
    // 0x186428: 0x3c028101
    ctx->pc = 0x186428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18642c: 0x34429002
    ctx->pc = 0x18642cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
    // 0x186430: 0xafa20540
    ctx->pc = 0x186430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
    // 0x186434: 0x100000cc
    ctx->pc = 0x186434u;
    {
        const bool branch_taken_0x186434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186438u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        if (branch_taken_0x186434) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x18643Cu;
    // 0x18643c: 0x0
    ctx->pc = 0x18643cu;
    // NOP
label_186440:
    // 0x186440: 0x97a30140
    ctx->pc = 0x186440u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x186444: 0x3c028101
    ctx->pc = 0x186444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186448: 0x30638000
    ctx->pc = 0x186448u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x18644c: 0x106000c6
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x186450u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x18644c) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186454u;
    // 0x186454: 0x3c080024
    ctx->pc = 0x186454u;
    SET_GPR_U32(ctx, 8, ((uint32_t)36 << 16));
    // 0x186458: 0x2a0202d
    ctx->pc = 0x186458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18645c: 0xc042b9e
    ctx->pc = 0x18645Cu;
    SET_GPR_U32(ctx, 31, 0x186464u);
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 6072));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186464u; }
    }
    if (ctx->pc != 0x186464u) { return; }
    ctx->pc = 0x186464u;
    // 0x186464: 0x144000ad
    ctx->pc = 0x186464u;
    {
        const bool branch_taken_0x186464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186468u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 836)));
        if (branch_taken_0x186464) {
            ctx->pc = 0x18671Cu;
            goto label_18671c;
        }
    }
    ctx->pc = 0x18646Cu;
    // 0x18646c: 0x28830002
    ctx->pc = 0x18646cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
    // 0x186470: 0x146000aa
    ctx->pc = 0x186470u;
    {
        const bool branch_taken_0x186470 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x186470) {
            ctx->pc = 0x18671Cu;
            goto label_18671c;
        }
    }
    ctx->pc = 0x186478u;
    // 0x186478: 0x2c4182a
    ctx->pc = 0x186478u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 4)));
    // 0x18647c: 0x14600006
    ctx->pc = 0x18647Cu;
    {
        const bool branch_taken_0x18647c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x186480u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18647c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186484u;
    // 0x186484: 0x8fa90544
    ctx->pc = 0x186484u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x186488: 0x552000b7
    ctx->pc = 0x186488u;
    {
        const bool branch_taken_0x186488 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        if (branch_taken_0x186488) {
            ctx->pc = 0x18648Cu;
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186490u;
    // 0x186490: 0x100000b6
    ctx->pc = 0x186490u;
    {
        const bool branch_taken_0x186490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186494u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
        if (branch_taken_0x186490) {
            ctx->pc = 0x18676Cu;
            goto label_18676c;
        }
    }
    ctx->pc = 0x186498u;
label_186498:
    // 0x186498: 0x120000ac
    ctx->pc = 0x186498u;
    {
        const bool branch_taken_0x186498 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18649Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 848)));
        if (branch_taken_0x186498) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x1864A0u;
    // 0x1864a0: 0x2483fffe
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1864a4: 0x14600006
    ctx->pc = 0x1864A4u;
    {
        const bool branch_taken_0x1864a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1864A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 3));
        if (branch_taken_0x1864a4) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x1864ACu;
    // 0x1864ac: 0x8fa30544
    ctx->pc = 0x1864acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x1864b0: 0x546000ad
    ctx->pc = 0x1864B0u;
    {
        const bool branch_taken_0x1864b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1864b0) {
            ctx->pc = 0x1864B4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1864B8u;
    // 0x1864b8: 0x100000ac
    ctx->pc = 0x1864B8u;
    {
        const bool branch_taken_0x1864b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1864BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
        if (branch_taken_0x1864b8) {
            ctx->pc = 0x18676Cu;
            goto label_18676c;
        }
    }
    ctx->pc = 0x1864C0u;
label_1864c0:
    // 0x1864c0: 0x240282d
    ctx->pc = 0x1864c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864c4: 0x280202d
    ctx->pc = 0x1864c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864c8: 0xc060b12
    ctx->pc = 0x1864C8u;
    SET_GPR_U32(ctx, 31, 0x1864D0u);
    ctx->pc = 0x1864CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1344));
    ctx->pc = 0x182C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C48_0x182c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864D0u; }
    }
    if (ctx->pc != 0x1864D0u) { return; }
    ctx->pc = 0x1864D0u;
    // 0x1864d0: 0x3c038101
    ctx->pc = 0x1864d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1864d4: 0x8fa40540
    ctx->pc = 0x1864d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x1864d8: 0x40902d
    ctx->pc = 0x1864d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864dc: 0x34630059
    ctx->pc = 0x1864dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 89));
    // 0x1864e0: 0x3c028101
    ctx->pc = 0x1864e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1864e4: 0x108300a0
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1864E8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x1864ECu;
    // 0x1864ec: 0x10800097
    ctx->pc = 0x1864ECu;
    {
        const bool branch_taken_0x1864ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1864F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1864ec) {
            ctx->pc = 0x18674Cu;
            goto label_18674c;
        }
    }
    ctx->pc = 0x1864F4u;
    // 0x1864f4: 0x1000009d
    ctx->pc = 0x1864F4u;
    {
        const bool branch_taken_0x1864f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1864F8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
        if (branch_taken_0x1864f4) {
            ctx->pc = 0x18676Cu;
            goto label_18676c;
        }
    }
    ctx->pc = 0x1864FCu;
    // 0x1864fc: 0x0
    ctx->pc = 0x1864fcu;
    // NOP
label_186500:
    // 0x186500: 0x3c028101
    ctx->pc = 0x186500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186504: 0x10000098
    ctx->pc = 0x186504u;
    {
        const bool branch_taken_0x186504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186508u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x186504) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x18650Cu;
    // 0x18650c: 0x0
    ctx->pc = 0x18650cu;
    // NOP
label_186510:
    // 0x186510: 0x280202d
    ctx->pc = 0x186510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186514: 0x24c56c80
    ctx->pc = 0x186514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 27776));
    // 0x186518: 0x240302d
    ctx->pc = 0x186518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18651c: 0xc061d1e
    ctx->pc = 0x18651Cu;
    SET_GPR_U32(ctx, 31, 0x186524u);
    ctx->pc = 0x186520u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186524u; }
    }
    if (ctx->pc != 0x186524u) { return; }
    ctx->pc = 0x186524u;
    // 0x186524: 0x1040fff6
    ctx->pc = 0x186524u;
    {
        const bool branch_taken_0x186524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186528u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186524) {
            ctx->pc = 0x186500u;
            goto label_186500;
        }
    }
    ctx->pc = 0x18652Cu;
    // 0x18652c: 0x3c020028
    ctx->pc = 0x18652cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x186530: 0x24506c80
    ctx->pc = 0x186530u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 27776));
    // 0x186534: 0x0
    ctx->pc = 0x186534u;
    // NOP
label_186538:
    // 0x186538: 0x27a70140
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 320));
    // 0x18653c: 0x32020007
    ctx->pc = 0x18653cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
    // 0x186540: 0xe0202d
    ctx->pc = 0x186540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186544: 0x1040001a
    ctx->pc = 0x186544u;
    {
        const bool branch_taken_0x186544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186548u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186544) {
            ctx->pc = 0x1865B0u;
            goto label_1865b0;
        }
    }
    ctx->pc = 0x18654Cu;
    // 0x18654c: 0x26020200
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_186550:
    // 0x186550: 0x68680007
    ctx->pc = 0x186550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186554: 0x6c680000
    ctx->pc = 0x186554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186558: 0x6869000f
    ctx->pc = 0x186558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18655c: 0x6c690008
    ctx->pc = 0x18655cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186560: 0x68650017
    ctx->pc = 0x186560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186564: 0x6c650010
    ctx->pc = 0x186564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186568: 0x6866001f
    ctx->pc = 0x186568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18656c: 0x6c660018
    ctx->pc = 0x18656cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186570: 0xb0880007
    ctx->pc = 0x186570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186574: 0xb4880000
    ctx->pc = 0x186574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186578: 0xb089000f
    ctx->pc = 0x186578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18657c: 0xb4890008
    ctx->pc = 0x18657cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186580: 0xb0850017
    ctx->pc = 0x186580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186584: 0xb4850010
    ctx->pc = 0x186584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186588: 0xb086001f
    ctx->pc = 0x186588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18658c: 0xb4860018
    ctx->pc = 0x18658cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186590: 0x24630020
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x186594: 0x0
    ctx->pc = 0x186594u;
    // NOP
    // 0x186598: 0x0
    ctx->pc = 0x186598u;
    // NOP
    // 0x18659c: 0x1462ffec
    ctx->pc = 0x18659Cu;
    {
        const bool branch_taken_0x18659c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1865A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x18659c) {
            ctx->pc = 0x186550u;
            goto label_186550;
        }
    }
    ctx->pc = 0x1865A4u;
    // 0x1865a4: 0x10000011
    ctx->pc = 0x1865A4u;
    {
        const bool branch_taken_0x1865a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1865A8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        if (branch_taken_0x1865a4) {
            ctx->pc = 0x1865ECu;
            goto label_1865ec;
        }
    }
    ctx->pc = 0x1865ACu;
    // 0x1865ac: 0x0
    ctx->pc = 0x1865acu;
    // NOP
label_1865b0:
    // 0x1865b0: 0x26020200
    ctx->pc = 0x1865b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 512));
label_1865b4:
    // 0x1865b4: 0xdc670000
    ctx->pc = 0x1865b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1865b8: 0xdc680008
    ctx->pc = 0x1865b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1865bc: 0xdc690010
    ctx->pc = 0x1865bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1865c0: 0xdc650018
    ctx->pc = 0x1865c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1865c4: 0xfc870000
    ctx->pc = 0x1865c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1865c8: 0xfc880008
    ctx->pc = 0x1865c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1865cc: 0xfc890010
    ctx->pc = 0x1865ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1865d0: 0xfc850018
    ctx->pc = 0x1865d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1865d4: 0x24630020
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1865d8: 0x0
    ctx->pc = 0x1865d8u;
    // NOP
    // 0x1865dc: 0x0
    ctx->pc = 0x1865dcu;
    // NOP
    // 0x1865e0: 0x1462fff4
    ctx->pc = 0x1865E0u;
    {
        const bool branch_taken_0x1865e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1865E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1865e0) {
            ctx->pc = 0x1865B4u;
            goto label_1865b4;
        }
    }
    ctx->pc = 0x1865E8u;
    // 0x1865e8: 0x97a30140
    ctx->pc = 0x1865e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_1865ec:
    // 0x1865ec: 0x30628000
    ctx->pc = 0x1865ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x1865f0: 0x10400035
    ctx->pc = 0x1865F0u;
    {
        const bool branch_taken_0x1865f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1865F4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 415), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1865f0) {
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x1865F8u;
    // 0x1865f8: 0x30622000
    ctx->pc = 0x1865f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x1865fc: 0x14400033
    ctx->pc = 0x1865FCu;
    {
        const bool branch_taken_0x1865fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186600u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 836)));
        if (branch_taken_0x1865fc) {
            ctx->pc = 0x1866CCu;
            goto label_1866cc;
        }
    }
    ctx->pc = 0x186604u;
    // 0x186604: 0x27a60100
    ctx->pc = 0x186604u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 256));
    // 0x186608: 0x2a0202d
    ctx->pc = 0x186608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18660c: 0xc0608e6
    ctx->pc = 0x18660Cu;
    SET_GPR_U32(ctx, 31, 0x186614u);
    ctx->pc = 0x186610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182398u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182398_0x182398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186614u; }
    }
    if (ctx->pc != 0x186614u) { return; }
    ctx->pc = 0x186614u;
    // 0x186614: 0x24070001
    ctx->pc = 0x186614u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x186618: 0x5447002c
    ctx->pc = 0x186618u;
    {
        const bool branch_taken_0x186618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x186618) {
            ctx->pc = 0x18661Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 836)));
            ctx->pc = 0x1866CCu;
            goto label_1866cc;
        }
    }
    ctx->pc = 0x186620u;
    // 0x186620: 0x56c00029
    ctx->pc = 0x186620u;
    {
        const bool branch_taken_0x186620 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x186620) {
            ctx->pc = 0x186624u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x186628u;
    // 0x186628: 0x1220001e
    ctx->pc = 0x186628u;
    {
        const bool branch_taken_0x186628 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x186628) {
            ctx->pc = 0x1866A4u;
            goto label_1866a4;
        }
    }
    ctx->pc = 0x186630u;
    // 0x186630: 0x5bc00025
    ctx->pc = 0x186630u;
    {
        const bool branch_taken_0x186630 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x186630) {
            ctx->pc = 0x186634u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x186638u;
    // 0x186638: 0x97a20140
    ctx->pc = 0x186638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18663c: 0x2a0282d
    ctx->pc = 0x18663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186640: 0x6ba8014f
    ctx->pc = 0x186640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186644: 0x6fa80148
    ctx->pc = 0x186644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186648: 0xb2280007
    ctx->pc = 0x186648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18664c: 0xb6280000
    ctx->pc = 0x18664cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186650: 0x26240018
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 24));
    // 0x186654: 0x8fa30144
    ctx->pc = 0x186654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x186658: 0x6ba8015f
    ctx->pc = 0x186658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18665c: 0x6fa80158
    ctx->pc = 0x18665cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186660: 0xb228000f
    ctx->pc = 0x186660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186664: 0xb6280008
    ctx->pc = 0x186664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186668: 0xae230010
    ctx->pc = 0x186668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x18666c: 0xc042bf0
    ctx->pc = 0x18666Cu;
    SET_GPR_U32(ctx, 31, 0x186674u);
    ctx->pc = 0x186670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186674u; }
    }
    if (ctx->pc != 0x186674u) { return; }
    ctx->pc = 0x186674u;
    // 0x186674: 0x2a0202d
    ctx->pc = 0x186674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186678: 0x3c080024
    ctx->pc = 0x186678u;
    SET_GPR_U32(ctx, 8, ((uint32_t)36 << 16));
    // 0x18667c: 0xc042b9e
    ctx->pc = 0x18667Cu;
    SET_GPR_U32(ctx, 31, 0x186684u);
    ctx->pc = 0x186680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186684u; }
    }
    if (ctx->pc != 0x186684u) { return; }
    ctx->pc = 0x186684u;
    // 0x186684: 0x14400003
    ctx->pc = 0x186684u;
    {
        const bool branch_taken_0x186684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186688u;
        SET_GPR_U32(ctx, 9, ((uint32_t)36 << 16));
        if (branch_taken_0x186684) {
            ctx->pc = 0x186694u;
            goto label_186694;
        }
    }
    ctx->pc = 0x18668Cu;
    // 0x18668c: 0x97a20340
    ctx->pc = 0x18668cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x186690: 0xa6220014
    ctx->pc = 0x186690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_186694:
    // 0x186694: 0x2a0202d
    ctx->pc = 0x186694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186698: 0x252517b8
    ctx->pc = 0x186698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 6072));
    // 0x18669c: 0xc042b9e
    ctx->pc = 0x18669Cu;
    SET_GPR_U32(ctx, 31, 0x1866A4u);
    ctx->pc = 0x1866A0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 56));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A4u; }
    }
    if (ctx->pc != 0x1866A4u) { return; }
    ctx->pc = 0x1866A4u;
label_1866a4:
    // 0x1866a4: 0x1bc00008
    ctx->pc = 0x1866A4u;
    {
        const bool branch_taken_0x1866a4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1866A8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x1866a4) {
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x1866ACu;
    // 0x1866ac: 0x2fe102a
    ctx->pc = 0x1866acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 30)));
    // 0x1866b0: 0x14400006
    ctx->pc = 0x1866B0u;
    {
        const bool branch_taken_0x1866b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1866B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 836)));
        if (branch_taken_0x1866b0) {
            ctx->pc = 0x1866CCu;
            goto label_1866cc;
        }
    }
    ctx->pc = 0x1866B8u;
    // 0x1866b8: 0x24020001
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1866bc: 0x1000000a
    ctx->pc = 0x1866BCu;
    {
        const bool branch_taken_0x1866bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1866C0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 2));
        if (branch_taken_0x1866bc) {
            ctx->pc = 0x1866E8u;
            goto label_1866e8;
        }
    }
    ctx->pc = 0x1866C4u;
    // 0x1866c4: 0x0
    ctx->pc = 0x1866c4u;
    // NOP
label_1866c8:
    // 0x1866c8: 0x8fa20344
    ctx->pc = 0x1866c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_1866cc:
    // 0x1866cc: 0x2442ffff
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1866d0: 0x10400015
    ctx->pc = 0x1866D0u;
    {
        const bool branch_taken_0x1866d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1866D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
        if (branch_taken_0x1866d0) {
            ctx->pc = 0x186728u;
            goto label_186728;
        }
    }
    ctx->pc = 0x1866D8u;
    // 0x1866d8: 0x26730001
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1866dc: 0x2a620002
    ctx->pc = 0x1866dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x1866e0: 0x1440ff95
    ctx->pc = 0x1866E0u;
    {
        const bool branch_taken_0x1866e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1866E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 512));
        if (branch_taken_0x1866e0) {
            ctx->pc = 0x186538u;
            goto label_186538;
        }
    }
    ctx->pc = 0x1866E8u;
label_1866e8:
    // 0x1866e8: 0x8fa30548
    ctx->pc = 0x1866e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x1866ec: 0x24050001
    ctx->pc = 0x1866ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1866f0: 0x10650019
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x1866F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x186758u;
            goto label_186758;
        }
    }
    ctx->pc = 0x1866F8u;
    // 0x1866f8: 0x280202d
    ctx->pc = 0x1866f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866fc: 0xc060b12
    ctx->pc = 0x1866FCu;
    SET_GPR_U32(ctx, 31, 0x186704u);
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1344));
    ctx->pc = 0x182C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C48_0x182c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186704u; }
    }
    if (ctx->pc != 0x186704u) { return; }
    ctx->pc = 0x186704u;
    // 0x186704: 0x40902d
    ctx->pc = 0x186704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186708: 0x3c028101
    ctx->pc = 0x186708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18670c: 0x8fa30540
    ctx->pc = 0x18670cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x186710: 0x34420059
    ctx->pc = 0x186710u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 89));
    // 0x186714: 0x14620008
    ctx->pc = 0x186714u;
    {
        const bool branch_taken_0x186714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x186714) {
            ctx->pc = 0x186738u;
            goto label_186738;
        }
    }
    ctx->pc = 0x18671Cu;
label_18671c:
    // 0x18671c: 0x3c028101
    ctx->pc = 0x18671cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186720: 0x10000011
    ctx->pc = 0x186720u;
    {
        const bool branch_taken_0x186720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186724u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x186720) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186728u;
label_186728:
    // 0x186728: 0x24060001
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18672c: 0x1000ffee
    ctx->pc = 0x18672Cu;
    {
        const bool branch_taken_0x18672c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186730u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 6));
        if (branch_taken_0x18672c) {
            ctx->pc = 0x1866E8u;
            goto label_1866e8;
        }
    }
    ctx->pc = 0x186734u;
    // 0x186734: 0x0
    ctx->pc = 0x186734u;
    // NOP
label_186738:
    // 0x186738: 0x1460000b
    ctx->pc = 0x186738u;
    {
        const bool branch_taken_0x186738 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18673Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186738) {
            ctx->pc = 0x186768u;
            goto label_186768;
        }
    }
    ctx->pc = 0x186740u;
    // 0x186740: 0x8fa70548
    ctx->pc = 0x186740u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x186744: 0x14e00005
    ctx->pc = 0x186744u;
    {
        const bool branch_taken_0x186744 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x186748u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1348)));
        if (branch_taken_0x186744) {
            ctx->pc = 0x18675Cu;
            goto label_18675c;
        }
    }
    ctx->pc = 0x18674Cu;
label_18674c:
    // 0x18674c: 0x8fa20344
    ctx->pc = 0x18674cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x186750: 0x1440ff6f
    ctx->pc = 0x186750u;
    {
        const bool branch_taken_0x186750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186754u;
        SET_GPR_U32(ctx, 6, ((uint32_t)40 << 16));
        if (branch_taken_0x186750) {
            ctx->pc = 0x186510u;
            goto label_186510;
        }
    }
    ctx->pc = 0x186758u;
label_186758:
    // 0x186758: 0x8fa80544
    ctx->pc = 0x186758u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1348)));
label_18675c:
    // 0x18675c: 0x55000001
    ctx->pc = 0x18675Cu;
    {
        const bool branch_taken_0x18675c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x18675c) {
            ctx->pc = 0x186760u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 23));
            ctx->pc = 0x186764u;
            goto label_186764;
        }
    }
    ctx->pc = 0x186764u;
label_186764:
    // 0x186764: 0x102d
    ctx->pc = 0x186764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186768:
    // 0x186768: 0xdfb00550
    ctx->pc = 0x186768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1360)));
label_18676c:
    // 0x18676c: 0xdfb10558
    ctx->pc = 0x18676cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1368)));
    // 0x186770: 0xdfb20560
    ctx->pc = 0x186770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x186774: 0xdfb30568
    ctx->pc = 0x186774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1384)));
    // 0x186778: 0xdfb40570
    ctx->pc = 0x186778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x18677c: 0xdfb50578
    ctx->pc = 0x18677cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1400)));
    // 0x186780: 0xdfb60580
    ctx->pc = 0x186780u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x186784: 0xdfb70588
    ctx->pc = 0x186784u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x186788: 0xdfbe0590
    ctx->pc = 0x186788u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x18678c: 0xdfbf0598
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x186790: 0x3e00008
    ctx->pc = 0x186790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1440));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186290u: goto label_186290;
            case 0x1862DCu: goto label_1862dc;
            case 0x1862E8u: goto label_1862e8;
            case 0x186368u: goto label_186368;
            case 0x186390u: goto label_186390;
            case 0x186418u: goto label_186418;
            case 0x186440u: goto label_186440;
            case 0x186498u: goto label_186498;
            case 0x1864C0u: goto label_1864c0;
            case 0x186500u: goto label_186500;
            case 0x186510u: goto label_186510;
            case 0x186538u: goto label_186538;
            case 0x186550u: goto label_186550;
            case 0x1865B0u: goto label_1865b0;
            case 0x1865B4u: goto label_1865b4;
            case 0x1865ECu: goto label_1865ec;
            case 0x186694u: goto label_186694;
            case 0x1866A4u: goto label_1866a4;
            case 0x1866C8u: goto label_1866c8;
            case 0x1866CCu: goto label_1866cc;
            case 0x1866E8u: goto label_1866e8;
            case 0x18671Cu: goto label_18671c;
            case 0x186728u: goto label_186728;
            case 0x186738u: goto label_186738;
            case 0x18674Cu: goto label_18674c;
            case 0x186758u: goto label_186758;
            case 0x18675Cu: goto label_18675c;
            case 0x186764u: goto label_186764;
            case 0x186768u: goto label_186768;
            case 0x18676Cu: goto label_18676c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186798u;
}
