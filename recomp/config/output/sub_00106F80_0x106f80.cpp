#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106F80
// Address: 0x106f80 - 0x1071d8
void sub_00106F80_0x106f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106f80u;

    // 0x106f80: 0x27bdffa0
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x106f84: 0x3c020021
    ctx->pc = 0x106f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x106f88: 0xffb70048
    ctx->pc = 0x106f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x106f8c: 0x24579800
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294940672));
    // 0x106f90: 0xffb00010
    ctx->pc = 0x106f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x106f94: 0x3c060021
    ctx->pc = 0x106f94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x106f98: 0xffb20020
    ctx->pc = 0x106f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106f9c: 0x3c020021
    ctx->pc = 0x106f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x106fa0: 0xffb30028
    ctx->pc = 0x106fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x106fa4: 0x5283c
    ctx->pc = 0x106fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x106fa8: 0xffb40030
    ctx->pc = 0x106fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x106fac: 0x5283e
    ctx->pc = 0x106facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x106fb0: 0xffb50038
    ctx->pc = 0x106fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x106fb4: 0x2415ffff
    ctx->pc = 0x106fb4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x106fb8: 0xffb60040
    ctx->pc = 0x106fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x106fbc: 0x24569c18
    ctx->pc = 0x106fbcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294941720));
    // 0x106fc0: 0x8ef40008
    ctx->pc = 0x106fc0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x106fc4: 0x2402fffc
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x106fc8: 0xffb10018
    ctx->pc = 0x106fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x106fcc: 0xffbe0050
    ctx->pc = 0x106fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x106fd0: 0xffbf0058
    ctx->pc = 0x106fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x106fd4: 0xdcc39c10
    ctx->pc = 0x106fd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294941712)));
    // 0x106fd8: 0x8e860004
    ctx->pc = 0x106fd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x106fdc: 0xa3282d
    ctx->pc = 0x106fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x106fe0: 0x8ec30000
    ctx->pc = 0x106fe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x106fe4: 0xc29824
    ctx->pc = 0x106fe4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x106fe8: 0x64a50010
    ctx->pc = 0x106fe8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)16);
    // 0x106fec: 0x5903c
    ctx->pc = 0x106fecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x106ff0: 0x12903f
    ctx->pc = 0x106ff0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x106ff4: 0xafa40000
    ctx->pc = 0x106ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x106ff8: 0x10750008
    ctx->pc = 0x106FF8u;
    {
        const bool branch_taken_0x106ff8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        ctx->pc = 0x106FFCu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x106ff8) {
            ctx->pc = 0x10701Cu;
            goto label_10701c;
        }
    }
    ctx->pc = 0x107000u;
    // 0x107000: 0x12103c
    ctx->pc = 0x107000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x107004: 0x2403f000
    ctx->pc = 0x107004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x107008: 0x2103e
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10700c: 0x64420fff
    ctx->pc = 0x10700cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)4095);
    // 0x107010: 0x431024
    ctx->pc = 0x107010u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107014: 0x2903c
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107018: 0x12903f
    ctx->pc = 0x107018u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_10701c:
    // 0x10701c: 0xc042896
    ctx->pc = 0x10701Cu;
    SET_GPR_U32(ctx, 31, 0x107024u);
    ctx->pc = 0x107020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A258_0x10a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107024u; }
    }
    if (ctx->pc != 0x107024u) { return; }
    ctx->pc = 0x107024u;
    // 0x107024: 0x40882d
    ctx->pc = 0x107024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107028: 0x1235005f
    ctx->pc = 0x107028u;
    {
        const bool branch_taken_0x107028 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 21));
        ctx->pc = 0x10702Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x107028) {
            ctx->pc = 0x1071A8u;
            goto label_1071a8;
        }
    }
    ctx->pc = 0x107030u;
    // 0x107030: 0x10400004
    ctx->pc = 0x107030u;
    {
        const bool branch_taken_0x107030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107034u;
        SET_GPR_U32(ctx, 30, ((uint32_t)33 << 16));
        if (branch_taken_0x107030) {
            ctx->pc = 0x107044u;
            goto label_107044;
        }
    }
    ctx->pc = 0x107038u;
    // 0x107038: 0x5697005c
    ctx->pc = 0x107038u;
    {
        const bool branch_taken_0x107038 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 23));
        if (branch_taken_0x107038) {
            ctx->pc = 0x10703Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x1071ACu;
            goto label_1071ac;
        }
    }
    ctx->pc = 0x107040u;
    // 0x107040: 0x3c1e0021
    ctx->pc = 0x107040u;
    SET_GPR_U32(ctx, 30, ((uint32_t)33 << 16));
label_107044:
    // 0x107044: 0x27c49c30
    ctx->pc = 0x107044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 4294941744));
    // 0x107048: 0x8c820000
    ctx->pc = 0x107048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10704c: 0x521821
    ctx->pc = 0x10704cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x107050: 0x16300007
    ctx->pc = 0x107050u;
    {
        const bool branch_taken_0x107050 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x107054u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x107050) {
            ctx->pc = 0x107070u;
            goto label_107070;
        }
    }
    ctx->pc = 0x107058u;
    // 0x107058: 0x2532021
    ctx->pc = 0x107058u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x10705c: 0x8ee30008
    ctx->pc = 0x10705cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x107060: 0x34820001
    ctx->pc = 0x107060u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 1));
    // 0x107064: 0x10000043
    ctx->pc = 0x107064u;
    {
        const bool branch_taken_0x107064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107068u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x107064) {
            ctx->pc = 0x107174u;
            goto label_107174;
        }
    }
    ctx->pc = 0x10706Cu;
    // 0x10706c: 0x0
    ctx->pc = 0x10706cu;
    // NOP
label_107070:
    // 0x107070: 0x8ec20000
    ctx->pc = 0x107070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x107074: 0x14550004
    ctx->pc = 0x107074u;
    {
        const bool branch_taken_0x107074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        ctx->pc = 0x107078u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x107074) {
            ctx->pc = 0x107088u;
            goto label_107088;
        }
    }
    ctx->pc = 0x10707Cu;
    // 0x10707c: 0x10000004
    ctx->pc = 0x10707Cu;
    {
        const bool branch_taken_0x10707c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107080u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x10707c) {
            ctx->pc = 0x107090u;
            goto label_107090;
        }
    }
    ctx->pc = 0x107084u;
    // 0x107084: 0x0
    ctx->pc = 0x107084u;
    // NOP
label_107088:
    // 0x107088: 0x621021
    ctx->pc = 0x107088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10708c: 0xac820000
    ctx->pc = 0x10708cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_107090:
    // 0x107090: 0x26220008
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 8));
    // 0x107094: 0x3045000f
    ctx->pc = 0x107094u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 15));
    // 0x107098: 0x10a00005
    ctx->pc = 0x107098u;
    {
        const bool branch_taken_0x107098 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10709Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x107098) {
            ctx->pc = 0x1070B0u;
            goto label_1070b0;
        }
    }
    ctx->pc = 0x1070A0u;
    // 0x1070a0: 0x458023
    ctx->pc = 0x1070a0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1070a4: 0x10000003
    ctx->pc = 0x1070A4u;
    {
        const bool branch_taken_0x1070a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1070A8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x1070a4) {
            ctx->pc = 0x1070B4u;
            goto label_1070b4;
        }
    }
    ctx->pc = 0x1070ACu;
    // 0x1070ac: 0x0
    ctx->pc = 0x1070acu;
    // NOP
label_1070b0:
    // 0x1070b0: 0x802d
    ctx->pc = 0x1070b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1070b4:
    // 0x1070b4: 0x2321021
    ctx->pc = 0x1070b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1070b8: 0x24031000
    ctx->pc = 0x1070b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1070bc: 0x30420fff
    ctx->pc = 0x1070bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x1070c0: 0x8fa40000
    ctx->pc = 0x1070c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1070c4: 0x62182f
    ctx->pc = 0x1070c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1070c8: 0x3183c
    ctx->pc = 0x1070c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1070cc: 0x3183f
    ctx->pc = 0x1070ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1070d0: 0x2038021
    ctx->pc = 0x1070d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1070d4: 0xc042896
    ctx->pc = 0x1070D4u;
    SET_GPR_U32(ctx, 31, 0x1070DCu);
    ctx->pc = 0x1070D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A258_0x10a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1070DCu; }
    }
    if (ctx->pc != 0x1070DCu) { return; }
    ctx->pc = 0x1070DCu;
    // 0x1070dc: 0x40202d
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070e0: 0x2402ffff
    ctx->pc = 0x1070e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1070e4: 0x10820030
    ctx->pc = 0x1070E4u;
    {
        const bool branch_taken_0x1070e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1070E8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        if (branch_taken_0x1070e4) {
            ctx->pc = 0x1071A8u;
            goto label_1071a8;
        }
    }
    ctx->pc = 0x1070ECu;
    // 0x1070ec: 0x27c59c30
    ctx->pc = 0x1070ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 4294941744));
    // 0x1070f0: 0x8ca20000
    ctx->pc = 0x1070f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1070f4: 0x902021
    ctx->pc = 0x1070f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1070f8: 0x3c060021
    ctx->pc = 0x1070f8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x1070fc: 0x34840001
    ctx->pc = 0x1070fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x107100: 0x24c39800
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294940672));
    // 0x107104: 0x501021
    ctx->pc = 0x107104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x107108: 0xaca20000
    ctx->pc = 0x107108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10710c: 0xac710008
    ctx->pc = 0x10710cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x107110: 0x12830018
    ctx->pc = 0x107110u;
    {
        const bool branch_taken_0x107110 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 3));
        ctx->pc = 0x107114u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        if (branch_taken_0x107110) {
            ctx->pc = 0x107174u;
            goto label_107174;
        }
    }
    ctx->pc = 0x107118u;
    // 0x107118: 0x2e620010
    ctx->pc = 0x107118u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16));
    // 0x10711c: 0x50400006
    ctx->pc = 0x10711Cu;
    {
        const bool branch_taken_0x10711c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10711c) {
            ctx->pc = 0x107120u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x107138u;
            goto label_107138;
        }
    }
    ctx->pc = 0x107124u;
    // 0x107124: 0x220182d
    ctx->pc = 0x107124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107128: 0x24020001
    ctx->pc = 0x107128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10712c: 0x1000001e
    ctx->pc = 0x10712Cu;
    {
        const bool branch_taken_0x10712c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107130u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x10712c) {
            ctx->pc = 0x1071A8u;
            goto label_1071a8;
        }
    }
    ctx->pc = 0x107134u;
    // 0x107134: 0x0
    ctx->pc = 0x107134u;
    // NOP
label_107138:
    // 0x107138: 0x2664fff4
    ctx->pc = 0x107138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x10713c: 0x2403fff0
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x107140: 0x24050005
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x107144: 0x839824
    ctx->pc = 0x107144u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x107148: 0x30420001
    ctx->pc = 0x107148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x10714c: 0x2931821
    ctx->pc = 0x10714cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x107150: 0x531025
    ctx->pc = 0x107150u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x107154: 0x2e640010
    ctx->pc = 0x107154u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 19), 16));
    // 0x107158: 0xae820004
    ctx->pc = 0x107158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x10715c: 0xac650008
    ctx->pc = 0x10715cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x107160: 0x14800004
    ctx->pc = 0x107160u;
    {
        const bool branch_taken_0x107160 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x107164u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x107160) {
            ctx->pc = 0x107174u;
            goto label_107174;
        }
    }
    ctx->pc = 0x107168u;
    // 0x107168: 0x8fa40000
    ctx->pc = 0x107168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10716c: 0xc041636
    ctx->pc = 0x10716Cu;
    SET_GPR_U32(ctx, 31, 0x107174u);
    ctx->pc = 0x107170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107174u; }
    }
    if (ctx->pc != 0x107174u) { return; }
    ctx->pc = 0x107174u;
label_107174:
    // 0x107174: 0x3c030021
    ctx->pc = 0x107174u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x107178: 0x8fc59c30
    ctx->pc = 0x107178u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4294941744)));
    // 0x10717c: 0x24639c20
    ctx->pc = 0x10717cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x107180: 0xdc620000
    ctx->pc = 0x107180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107184: 0x45102b
    ctx->pc = 0x107184u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107188: 0x54400001
    ctx->pc = 0x107188u;
    {
        const bool branch_taken_0x107188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x107188) {
            ctx->pc = 0x10718Cu;
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->pc = 0x107190u;
            goto label_107190;
        }
    }
    ctx->pc = 0x107190u;
label_107190:
    // 0x107190: 0x3c030021
    ctx->pc = 0x107190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x107194: 0x24639c28
    ctx->pc = 0x107194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941736));
    // 0x107198: 0xdc620000
    ctx->pc = 0x107198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10719c: 0x45102b
    ctx->pc = 0x10719cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1071a0: 0x54400001
    ctx->pc = 0x1071A0u;
    {
        const bool branch_taken_0x1071a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1071a0) {
            ctx->pc = 0x1071A4u;
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->pc = 0x1071A8u;
            goto label_1071a8;
        }
    }
    ctx->pc = 0x1071A8u;
label_1071a8:
    // 0x1071a8: 0xdfb00010
    ctx->pc = 0x1071a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1071ac:
    // 0x1071ac: 0xdfb10018
    ctx->pc = 0x1071acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1071b0: 0xdfb20020
    ctx->pc = 0x1071b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1071b4: 0xdfb30028
    ctx->pc = 0x1071b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1071b8: 0xdfb40030
    ctx->pc = 0x1071b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1071bc: 0xdfb50038
    ctx->pc = 0x1071bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1071c0: 0xdfb60040
    ctx->pc = 0x1071c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1071c4: 0xdfb70048
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1071c8: 0xdfbe0050
    ctx->pc = 0x1071c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1071cc: 0xdfbf0058
    ctx->pc = 0x1071ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1071d0: 0x3e00008
    ctx->pc = 0x1071D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1071D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10701Cu: goto label_10701c;
            case 0x107044u: goto label_107044;
            case 0x107070u: goto label_107070;
            case 0x107088u: goto label_107088;
            case 0x107090u: goto label_107090;
            case 0x1070B0u: goto label_1070b0;
            case 0x1070B4u: goto label_1070b4;
            case 0x107138u: goto label_107138;
            case 0x107174u: goto label_107174;
            case 0x107190u: goto label_107190;
            case 0x1071A8u: goto label_1071a8;
            case 0x1071ACu: goto label_1071ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1071D8u;
}
