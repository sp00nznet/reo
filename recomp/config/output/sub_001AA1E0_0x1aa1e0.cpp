#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA1E0
// Address: 0x1aa1e0 - 0x1aa3d0
void sub_001AA1E0_0x1aa1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa1e0u;

    // 0x1aa1e0: 0x27bdfee0
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1aa1e4: 0x3c01002b
    ctx->pc = 0x1aa1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa1e8: 0xffbf0010
    ctx->pc = 0x1aa1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa1ec: 0x7fb00000
    ctx->pc = 0x1aa1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa1f0: 0x80802d
    ctx->pc = 0x1aa1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa1f4: 0x8c2416a0
    ctx->pc = 0x1aa1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa1f8: 0x10800070
    ctx->pc = 0x1AA1F8u;
    {
        const bool branch_taken_0x1aa1f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa1f8) {
            ctx->pc = 0x1AA3BCu;
            goto label_1aa3bc;
        }
    }
    ctx->pc = 0x1AA200u;
    // 0x1aa200: 0x8c830008
    ctx->pc = 0x1aa200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aa204: 0x10600004
    ctx->pc = 0x1AA204u;
    {
        const bool branch_taken_0x1aa204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1aa204) {
            ctx->pc = 0x1AA218u;
            goto label_1aa218;
        }
    }
    ctx->pc = 0x1AA20Cu;
    // 0x1aa20c: 0x8c83001c
    ctx->pc = 0x1aa20cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1aa210: 0x1070006a
    ctx->pc = 0x1AA210u;
    {
        const bool branch_taken_0x1aa210 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        if (branch_taken_0x1aa210) {
            ctx->pc = 0x1AA3BCu;
            goto label_1aa3bc;
        }
    }
    ctx->pc = 0x1AA218u;
label_1aa218:
    // 0x1aa218: 0x3c010032
    ctx->pc = 0x1aa218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa21c: 0x8c22444c
    ctx->pc = 0x1aa21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17484)));
    // 0x1aa220: 0x14400008
    ctx->pc = 0x1AA220u;
    {
        const bool branch_taken_0x1aa220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aa220) {
            ctx->pc = 0x1AA244u;
            goto label_1aa244;
        }
    }
    ctx->pc = 0x1AA228u;
label_1aa228:
    // 0x1aa228: 0x0
    ctx->pc = 0x1aa228u;
    // NOP
    // 0x1aa22c: 0x0
    ctx->pc = 0x1aa22cu;
    // NOP
    // 0x1aa230: 0x0
    ctx->pc = 0x1aa230u;
    // NOP
    // 0x1aa234: 0x0
    ctx->pc = 0x1aa234u;
    // NOP
    // 0x1aa238: 0x0
    ctx->pc = 0x1aa238u;
    // NOP
    // 0x1aa23c: 0x1000fffa
    ctx->pc = 0x1AA23Cu;
    {
        const bool branch_taken_0x1aa23c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa23c) {
            ctx->pc = 0x1AA228u;
            goto label_1aa228;
        }
    }
    ctx->pc = 0x1AA244u;
label_1aa244:
    // 0x1aa244: 0xaca20000
    ctx->pc = 0x1aa244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1aa248: 0x3c010032
    ctx->pc = 0x1aa248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aa24c: 0x8c24444c
    ctx->pc = 0x1aa24cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17484)));
    // 0x1aa250: 0x3402ffff
    ctx->pc = 0x1aa250u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1aa254: 0x3c01002b
    ctx->pc = 0x1aa254u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa258: 0x24846000
    ctx->pc = 0x1aa258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24576));
    // 0x1aa25c: 0x8c2316a0
    ctx->pc = 0x1aa25cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa260: 0x16020007
    ctx->pc = 0x1AA260u;
    {
        const bool branch_taken_0x1aa260 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AA264u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x1aa260) {
            ctx->pc = 0x1AA280u;
            goto label_1aa280;
        }
    }
    ctx->pc = 0x1AA268u;
    // 0x1aa268: 0x3c050025
    ctx->pc = 0x1aa268u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa26c: 0x27a40020
    ctx->pc = 0x1aa26cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa270: 0xc042bf0
    ctx->pc = 0x1AA270u;
    SET_GPR_U32(ctx, 31, 0x1AA278u);
    ctx->pc = 0x1AA274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954928));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA278u; }
    }
    if (ctx->pc != 0x1AA278u) { return; }
    ctx->pc = 0x1AA278u;
    // 0x1aa278: 0x10000009
    ctx->pc = 0x1AA278u;
    {
        const bool branch_taken_0x1aa278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa278) {
            ctx->pc = 0x1AA2A0u;
            goto label_1aa2a0;
        }
    }
    ctx->pc = 0x1AA280u;
label_1aa280:
    // 0x1aa280: 0x3c050025
    ctx->pc = 0x1aa280u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa284: 0x3c060025
    ctx->pc = 0x1aa284u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aa288: 0x27a40020
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa28c: 0x24a5cfc0
    ctx->pc = 0x1aa28cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x1aa290: 0x24c6cfd8
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294954968));
    // 0x1aa294: 0x200382d
    ctx->pc = 0x1aa294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa298: 0xc042a0c
    ctx->pc = 0x1AA298u;
    SET_GPR_U32(ctx, 31, 0x1AA2A0u);
    ctx->pc = 0x1AA29Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2A0u; }
    }
    if (ctx->pc != 0x1AA2A0u) { return; }
    ctx->pc = 0x1AA2A0u;
label_1aa2a0:
    // 0x1aa2a0: 0x3c01002b
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa2a4: 0x27a40020
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa2a8: 0x8c2516a0
    ctx->pc = 0x1aa2a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa2ac: 0xc06a758
    ctx->pc = 0x1AA2ACu;
    SET_GPR_U32(ctx, 31, 0x1AA2B4u);
    ctx->pc = 0x1AA2B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24576));
    ctx->pc = 0x1A9D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9D60_0x1a9d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2B4u; }
    }
    if (ctx->pc != 0x1AA2B4u) { return; }
    ctx->pc = 0x1AA2B4u;
    // 0x1aa2b4: 0x3c01002b
    ctx->pc = 0x1aa2b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa2b8: 0x3402ffff
    ctx->pc = 0x1aa2b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1aa2bc: 0x8c2316a0
    ctx->pc = 0x1aa2bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa2c0: 0x16020008
    ctx->pc = 0x1AA2C0u;
    {
        const bool branch_taken_0x1aa2c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AA2C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
        if (branch_taken_0x1aa2c0) {
            ctx->pc = 0x1AA2E4u;
            goto label_1aa2e4;
        }
    }
    ctx->pc = 0x1AA2C8u;
    // 0x1aa2c8: 0x3c050025
    ctx->pc = 0x1aa2c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa2cc: 0x200302d
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2d0: 0x27a40020
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa2d4: 0xc042a0c
    ctx->pc = 0x1AA2D4u;
    SET_GPR_U32(ctx, 31, 0x1AA2DCu);
    ctx->pc = 0x1AA2D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954984));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2DCu; }
    }
    if (ctx->pc != 0x1AA2DCu) { return; }
    ctx->pc = 0x1AA2DCu;
    // 0x1aa2dc: 0x10000007
    ctx->pc = 0x1AA2DCu;
    {
        const bool branch_taken_0x1aa2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA2E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x1aa2dc) {
            ctx->pc = 0x1AA2FCu;
            goto label_1aa2fc;
        }
    }
    ctx->pc = 0x1AA2E4u;
label_1aa2e4:
    // 0x1aa2e4: 0x3c050025
    ctx->pc = 0x1aa2e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aa2e8: 0x200302d
    ctx->pc = 0x1aa2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2ec: 0x27a40020
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa2f0: 0xc042a0c
    ctx->pc = 0x1AA2F0u;
    SET_GPR_U32(ctx, 31, 0x1AA2F8u);
    ctx->pc = 0x1AA2F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955000));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2F8u; }
    }
    if (ctx->pc != 0x1AA2F8u) { return; }
    ctx->pc = 0x1AA2F8u;
    // 0x1aa2f8: 0x27a40020
    ctx->pc = 0x1aa2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1aa2fc:
    // 0x1aa2fc: 0xc06a678
    ctx->pc = 0x1AA2FCu;
    SET_GPR_U32(ctx, 31, 0x1AA304u);
    ctx->pc = 0x1A99E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A99E0_0x1a99e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA304u; }
    }
    if (ctx->pc != 0x1AA304u) { return; }
    ctx->pc = 0x1AA304u;
    // 0x1aa304: 0x40802d
    ctx->pc = 0x1aa304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa308: 0x600002c
    ctx->pc = 0x1AA308u;
    {
        const bool branch_taken_0x1aa308 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1aa308) {
            ctx->pc = 0x1AA3BCu;
            goto label_1aa3bc;
        }
    }
    ctx->pc = 0x1AA310u;
label_1aa310:
    // 0x1aa310: 0x2404000a
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aa314: 0xc04a490
    ctx->pc = 0x1AA314u;
    SET_GPR_U32(ctx, 31, 0x1AA31Cu);
    ctx->pc = 0x1AA318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129240_0x129240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA31Cu; }
    }
    if (ctx->pc != 0x1AA31Cu) { return; }
    ctx->pc = 0x1AA31Cu;
    // 0x1aa31c: 0x3c01002b
    ctx->pc = 0x1aa31cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa320: 0xac2216a8
    ctx->pc = 0x1aa320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 2));
    // 0x1aa324: 0x1040fffa
    ctx->pc = 0x1AA324u;
    {
        const bool branch_taken_0x1aa324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa324) {
            ctx->pc = 0x1AA310u;
            goto label_1aa310;
        }
    }
    ctx->pc = 0x1AA32Cu;
    // 0x1aa32c: 0x3c01002b
    ctx->pc = 0x1aa32cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa330: 0xc04a702
    ctx->pc = 0x1AA330u;
    SET_GPR_U32(ctx, 31, 0x1AA338u);
    ctx->pc = 0x1AA334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA338u; }
    }
    if (ctx->pc != 0x1AA338u) { return; }
    ctx->pc = 0x1AA338u;
    // 0x1aa338: 0x40282d
    ctx->pc = 0x1aa338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa33c: 0x3c01002b
    ctx->pc = 0x1aa33cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa340: 0x8c2216a0
    ctx->pc = 0x1aa340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa344: 0x3c01002b
    ctx->pc = 0x1aa344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa348: 0x8c2416a8
    ctx->pc = 0x1aa348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    // 0x1aa34c: 0xc04a5e8
    ctx->pc = 0x1AA34Cu;
    SET_GPR_U32(ctx, 31, 0x1AA354u);
    ctx->pc = 0x1AA350u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA354u; }
    }
    if (ctx->pc != 0x1AA354u) { return; }
    ctx->pc = 0x1AA354u;
label_1aa354:
    // 0x1aa354: 0x3c01002b
    ctx->pc = 0x1aa354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa358: 0xc04a752
    ctx->pc = 0x1AA358u;
    SET_GPR_U32(ctx, 31, 0x1AA360u);
    ctx->pc = 0x1AA35Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA360u; }
    }
    if (ctx->pc != 0x1AA360u) { return; }
    ctx->pc = 0x1AA360u;
    // 0x1aa360: 0x24030003
    ctx->pc = 0x1aa360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa364: 0x0
    ctx->pc = 0x1aa364u;
    // NOP
    // 0x1aa368: 0x1443fffa
    ctx->pc = 0x1AA368u;
    {
        const bool branch_taken_0x1aa368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1aa368) {
            ctx->pc = 0x1AA354u;
            goto label_1aa354;
        }
    }
    ctx->pc = 0x1AA370u;
    // 0x1aa370: 0x3c01002b
    ctx->pc = 0x1aa370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa374: 0xc04a4d4
    ctx->pc = 0x1AA374u;
    SET_GPR_U32(ctx, 31, 0x1AA37Cu);
    ctx->pc = 0x1AA378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA37Cu; }
    }
    if (ctx->pc != 0x1AA37Cu) { return; }
    ctx->pc = 0x1AA37Cu;
    // 0x1aa37c: 0x3c01002b
    ctx->pc = 0x1aa37cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa380: 0xac2016a8
    ctx->pc = 0x1aa380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 0));
    // 0x1aa384: 0x3c01002b
    ctx->pc = 0x1aa384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa388: 0x8c2416a0
    ctx->pc = 0x1aa388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa38c: 0x8c85000c
    ctx->pc = 0x1aa38cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aa390: 0x3c01002b
    ctx->pc = 0x1aa390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa394: 0x8ca30000
    ctx->pc = 0x1aa394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa398: 0xac830018
    ctx->pc = 0x1aa398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1aa39c: 0x8c2316a0
    ctx->pc = 0x1aa39cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa3a0: 0x8ca40004
    ctx->pc = 0x1aa3a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1aa3a4: 0x3c01002b
    ctx->pc = 0x1aa3a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa3a8: 0xac640014
    ctx->pc = 0x1aa3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1aa3ac: 0x8c2416a0
    ctx->pc = 0x1aa3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5792)));
    // 0x1aa3b0: 0x8c83000c
    ctx->pc = 0x1aa3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aa3b4: 0x24630008
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1aa3b8: 0xac83000c
    ctx->pc = 0x1aa3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1aa3bc:
    // 0x1aa3bc: 0xdfbf0010
    ctx->pc = 0x1aa3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3c0: 0x7bb00000
    ctx->pc = 0x1aa3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa3c4: 0x3e00008
    ctx->pc = 0x1AA3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA3C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA218u: goto label_1aa218;
            case 0x1AA228u: goto label_1aa228;
            case 0x1AA244u: goto label_1aa244;
            case 0x1AA280u: goto label_1aa280;
            case 0x1AA2A0u: goto label_1aa2a0;
            case 0x1AA2E4u: goto label_1aa2e4;
            case 0x1AA2FCu: goto label_1aa2fc;
            case 0x1AA310u: goto label_1aa310;
            case 0x1AA354u: goto label_1aa354;
            case 0x1AA3BCu: goto label_1aa3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA3CCu;
    // 0x1aa3cc: 0x0
    ctx->pc = 0x1aa3ccu;
    // NOP
}
