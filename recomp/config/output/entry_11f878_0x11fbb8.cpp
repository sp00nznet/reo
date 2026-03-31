#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11f878
// Address: 0x11f878 - 0x11fbb8
void entry_11f878_0x11fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f878u;

    // 0x11f878: 0x27bdfff0
    ctx->pc = 0x11f878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f87c: 0x80602d
    ctx->pc = 0x11f87cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f880: 0xffb00000
    ctx->pc = 0x11f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f884: 0xa0182d
    ctx->pc = 0x11f884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f888: 0x3383c
    ctx->pc = 0x11f888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11f88c: 0x7383f
    ctx->pc = 0x11f88cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x11f890: 0x3583f
    ctx->pc = 0x11f890u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11f894: 0x3c027fff
    ctx->pc = 0x11f894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11f898: 0x3442ffff
    ctx->pc = 0x11f898u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11f89c: 0x1624824
    ctx->pc = 0x11f89cu;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11f8a0: 0x180182d
    ctx->pc = 0x11f8a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8a4: 0x3303c
    ctx->pc = 0x11f8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11f8a8: 0x6303f
    ctx->pc = 0x11f8a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x11f8ac: 0x3503f
    ctx->pc = 0x11f8acu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11f8b0: 0x1424024
    ctx->pc = 0x11f8b0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x11f8b4: 0x3c037ff0
    ctx->pc = 0x11f8b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
    // 0x11f8b8: 0x71023
    ctx->pc = 0x11f8b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11f8bc: 0xe21025
    ctx->pc = 0x11f8bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11f8c0: 0x217c2
    ctx->pc = 0x11f8c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x11f8c4: 0x1221025
    ctx->pc = 0x11f8c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11f8c8: 0x62102b
    ctx->pc = 0x11f8c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f8cc: 0x14400008
    ctx->pc = 0x11F8CCu;
    {
        const bool branch_taken_0x11f8cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F8D0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x11f8cc) {
            ctx->pc = 0x11F8F0u;
            goto label_11f8f0;
        }
    }
    ctx->pc = 0x11F8D4u;
    // 0x11f8d4: 0x61023
    ctx->pc = 0x11f8d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11f8d8: 0xc21025
    ctx->pc = 0x11f8d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11f8dc: 0x217c2
    ctx->pc = 0x11f8dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x11f8e0: 0x1021025
    ctx->pc = 0x11f8e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11f8e4: 0x62102b
    ctx->pc = 0x11f8e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f8e8: 0x50400007
    ctx->pc = 0x11F8E8u;
    {
        const bool branch_taken_0x11f8e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f8e8) {
            ctx->pc = 0x11F8ECu;
            SET_GPR_U32(ctx, 2, ((uint32_t)49168 << 16));
            ctx->pc = 0x11F908u;
            goto label_11f908;
        }
    }
    ctx->pc = 0x11F8F0u;
label_11f8f0:
    // 0x11f8f0: 0xa0202d
    ctx->pc = 0x11f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8f4: 0x180282d
    ctx->pc = 0x11f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8f8: 0xc04473c
    ctx->pc = 0x11F8F8u;
    SET_GPR_U32(ctx, 31, 0x11F900u);
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F900u; }
    }
    if (ctx->pc != 0x11F900u) { return; }
    ctx->pc = 0x11F900u;
    // 0x11f900: 0x100000a9
    ctx->pc = 0x11F900u;
    {
        const bool branch_taken_0x11f900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F904u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11f900) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F908u;
label_11f908:
    // 0x11f908: 0x1621021
    ctx->pc = 0x11f908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11f90c: 0x471025
    ctx->pc = 0x11f90cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11f910: 0x54400005
    ctx->pc = 0x11F910u;
    {
        const bool branch_taken_0x11f910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f910) {
            ctx->pc = 0x11F914u;
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 30));
            ctx->pc = 0x11F928u;
            goto label_11f928;
        }
    }
    ctx->pc = 0x11F918u;
    // 0x11f918: 0xdfb00000
    ctx->pc = 0x11f918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f91c: 0xdfbf0008
    ctx->pc = 0x11f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f920: 0x804868a
    ctx->pc = 0x11F920u;
    ctx->pc = 0x11F924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x121A28u;
    sub_00121A28_0x121a28(rdram, ctx, runtime); return;
    ctx->pc = 0x11F928u;
label_11f928:
    // 0x11f928: 0xa1fc2
    ctx->pc = 0x11f928u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 31));
    // 0x11f92c: 0x30420002
    ctx->pc = 0x11f92cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x11f930: 0x1062025
    ctx->pc = 0x11f930u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x11f934: 0x14800012
    ctx->pc = 0x11F934u;
    {
        const bool branch_taken_0x11f934 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F938u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x11f934) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F93Cu;
    // 0x11f93c: 0x24030002
    ctx->pc = 0x11f93cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f940: 0x3c010024
    ctx->pc = 0x11f940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f944: 0xdc228c90
    ctx->pc = 0x11f944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937744)));
    // 0x11f948: 0x52030097
    ctx->pc = 0x11F948u;
    {
        const bool branch_taken_0x11f948 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x11f948) {
            ctx->pc = 0x11F94Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F950u;
    // 0x11f950: 0x2a020003
    ctx->pc = 0x11f950u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x11f954: 0x50400006
    ctx->pc = 0x11F954u;
    {
        const bool branch_taken_0x11f954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f954) {
            ctx->pc = 0x11F958u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x11F970u;
            goto label_11f970;
        }
    }
    ctx->pc = 0x11F95Cu;
    // 0x11f95c: 0x6020009
    ctx->pc = 0x11F95Cu;
    {
        const bool branch_taken_0x11f95c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x11f95c) {
            ctx->pc = 0x11F960u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
            ctx->pc = 0x11F984u;
            goto label_11f984;
        }
    }
    ctx->pc = 0x11F964u;
    // 0x11f964: 0x180102d
    ctx->pc = 0x11f964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f968: 0x1000008f
    ctx->pc = 0x11F968u;
    {
        const bool branch_taken_0x11f968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F96Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11f968) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F970u;
label_11f970:
    // 0x11f970: 0x3c010024
    ctx->pc = 0x11f970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f974: 0xdc228c98
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937752)));
    // 0x11f978: 0x5203008b
    ctx->pc = 0x11F978u;
    {
        const bool branch_taken_0x11f978 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x11f978) {
            ctx->pc = 0x11F97Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F980u;
label_11f980:
    // 0x11f980: 0x1271025
    ctx->pc = 0x11f980u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_11f984:
    // 0x11f984: 0x1040003a
    ctx->pc = 0x11F984u;
    {
        const bool branch_taken_0x11f984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F988u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
        if (branch_taken_0x11f984) {
            ctx->pc = 0x11FA70u;
            goto label_11fa70;
        }
    }
    ctx->pc = 0x11F98Cu;
    // 0x11f98c: 0x15220036
    ctx->pc = 0x11F98Cu;
    {
        const bool branch_taken_0x11f98c = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        if (branch_taken_0x11f98c) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11F994u;
    // 0x11f994: 0x1509001c
    ctx->pc = 0x11F994u;
    {
        const bool branch_taken_0x11f994 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 9));
        ctx->pc = 0x11F998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11f994) {
            ctx->pc = 0x11FA08u;
            goto label_11fa08;
        }
    }
    ctx->pc = 0x11F99Cu;
    // 0x11f99c: 0x24030001
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f9a0: 0x3c010024
    ctx->pc = 0x11f9a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f9a4: 0xdc228ca0
    ctx->pc = 0x11f9a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937760)));
    // 0x11f9a8: 0x5203007f
    ctx->pc = 0x11F9A8u;
    {
        const bool branch_taken_0x11f9a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x11f9a8) {
            ctx->pc = 0x11F9ACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F9B0u;
    // 0x11f9b0: 0x2a020002
    ctx->pc = 0x11f9b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x11f9b4: 0x50400008
    ctx->pc = 0x11F9B4u;
    {
        const bool branch_taken_0x11f9b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f9b4) {
            ctx->pc = 0x11F9B8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x11F9D8u;
            goto label_11f9d8;
        }
    }
    ctx->pc = 0x11F9BCu;
    // 0x11f9bc: 0x3c010024
    ctx->pc = 0x11f9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f9c0: 0xdc228ca8
    ctx->pc = 0x11f9c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937768)));
    // 0x11f9c4: 0x52000078
    ctx->pc = 0x11F9C4u;
    {
        const bool branch_taken_0x11f9c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f9c4) {
            ctx->pc = 0x11F9C8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F9CCu;
    // 0x11f9cc: 0x10000026
    ctx->pc = 0x11F9CCu;
    {
        const bool branch_taken_0x11f9cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F9D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
        if (branch_taken_0x11f9cc) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11F9D4u;
    // 0x11f9d4: 0x0
    ctx->pc = 0x11f9d4u;
    // NOP
label_11f9d8:
    // 0x11f9d8: 0x3c010024
    ctx->pc = 0x11f9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f9dc: 0xdc228cb0
    ctx->pc = 0x11f9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937776)));
    // 0x11f9e0: 0x52030071
    ctx->pc = 0x11F9E0u;
    {
        const bool branch_taken_0x11f9e0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x11f9e0) {
            ctx->pc = 0x11F9E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11F9E8u;
    // 0x11f9e8: 0x24020003
    ctx->pc = 0x11f9e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f9ec: 0x5602001e
    ctx->pc = 0x11F9ECu;
    {
        const bool branch_taken_0x11f9ec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x11f9ec) {
            ctx->pc = 0x11F9F0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11F9F4u;
    // 0x11f9f4: 0x3c010024
    ctx->pc = 0x11f9f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11f9f8: 0xdc228cb8
    ctx->pc = 0x11f9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937784)));
    // 0x11f9fc: 0x1000006a
    ctx->pc = 0x11F9FCu;
    {
        const bool branch_taken_0x11f9fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA00u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11f9fc) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FA04u;
    // 0x11fa04: 0x0
    ctx->pc = 0x11fa04u;
    // NOP
label_11fa08:
    // 0x11fa08: 0x12020013
    ctx->pc = 0x11FA08u;
    {
        const bool branch_taken_0x11fa08 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x11FA0Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
        if (branch_taken_0x11fa08) {
            ctx->pc = 0x11FA58u;
            goto label_11fa58;
        }
    }
    ctx->pc = 0x11FA10u;
    // 0x11fa10: 0x2a020002
    ctx->pc = 0x11fa10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x11fa14: 0x10400006
    ctx->pc = 0x11FA14u;
    {
        const bool branch_taken_0x11fa14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11fa14) {
            ctx->pc = 0x11FA30u;
            goto label_11fa30;
        }
    }
    ctx->pc = 0x11FA1Cu;
    // 0x11fa1c: 0x102d
    ctx->pc = 0x11fa1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa20: 0x52000061
    ctx->pc = 0x11FA20u;
    {
        const bool branch_taken_0x11fa20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fa20) {
            ctx->pc = 0x11FA24u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FA28u;
    // 0x11fa28: 0x1000000f
    ctx->pc = 0x11FA28u;
    {
        const bool branch_taken_0x11fa28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
        if (branch_taken_0x11fa28) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11FA30u;
label_11fa30:
    // 0x11fa30: 0x3c010024
    ctx->pc = 0x11fa30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fa34: 0xdc228cc0
    ctx->pc = 0x11fa34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937792)));
    // 0x11fa38: 0x1203005a
    ctx->pc = 0x11FA38u;
    {
        const bool branch_taken_0x11fa38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x11FA3Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x11fa38) {
            ctx->pc = 0x11FBA4u;
            goto label_11fba4;
        }
    }
    ctx->pc = 0x11FA40u;
    // 0x11fa40: 0x3c010024
    ctx->pc = 0x11fa40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fa44: 0xdc228cc8
    ctx->pc = 0x11fa44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937800)));
    // 0x11fa48: 0x52030057
    ctx->pc = 0x11FA48u;
    {
        const bool branch_taken_0x11fa48 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x11fa48) {
            ctx->pc = 0x11FA4Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FA50u;
    // 0x11fa50: 0x10000005
    ctx->pc = 0x11FA50u;
    {
        const bool branch_taken_0x11fa50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
        if (branch_taken_0x11fa50) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11FA58u;
label_11fa58:
    // 0x11fa58: 0xdc628c88
    ctx->pc = 0x11fa58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294937736)));
    // 0x11fa5c: 0x10000052
    ctx->pc = 0x11FA5Cu;
    {
        const bool branch_taken_0x11fa5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA60u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fa5c) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FA64u;
    // 0x11fa64: 0x0
    ctx->pc = 0x11fa64u;
    // NOP
label_11fa68:
    // 0x11fa68: 0x15020009
    ctx->pc = 0x11FA68u;
    {
        const bool branch_taken_0x11fa68 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x11FA6Cu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        if (branch_taken_0x11fa68) {
            ctx->pc = 0x11FA90u;
            goto label_11fa90;
        }
    }
    ctx->pc = 0x11FA70u;
label_11fa70:
    // 0x11fa70: 0x3c010024
    ctx->pc = 0x11fa70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fa74: 0xdc228cd0
    ctx->pc = 0x11fa74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937808)));
    // 0x11fa78: 0x540004a
    ctx->pc = 0x11FA78u;
    {
        const bool branch_taken_0x11fa78 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x11FA7Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fa78) {
            ctx->pc = 0x11FBA4u;
            goto label_11fba4;
        }
    }
    ctx->pc = 0x11FA80u;
    // 0x11fa80: 0x3c010024
    ctx->pc = 0x11fa80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fa84: 0xdc228cd8
    ctx->pc = 0x11fa84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937816)));
    // 0x11fa88: 0x10000048
    ctx->pc = 0x11FA88u;
    {
        const bool branch_taken_0x11fa88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x11fa88) {
            ctx->pc = 0x11FBACu;
            goto label_11fbac;
        }
    }
    ctx->pc = 0x11FA90u;
label_11fa90:
    // 0x11fa90: 0x3c010024
    ctx->pc = 0x11fa90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fa94: 0xdc248ce0
    ctx->pc = 0x11fa94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294937824)));
    // 0x11fa98: 0x31d03
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x11fa9c: 0x2862003d
    ctx->pc = 0x11fa9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 61));
    // 0x11faa0: 0x10400011
    ctx->pc = 0x11FAA0u;
    {
        const bool branch_taken_0x11faa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FAA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11faa0) {
            ctx->pc = 0x11FAE8u;
            goto label_11fae8;
        }
    }
    ctx->pc = 0x11FAA8u;
    // 0x11faa8: 0x5610004
    ctx->pc = 0x11FAA8u;
    {
        const bool branch_taken_0x11faa8 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x11FAACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967236));
        if (branch_taken_0x11faa8) {
            ctx->pc = 0x11FABCu;
            goto label_11fabc;
        }
    }
    ctx->pc = 0x11FAB0u;
    // 0x11fab0: 0x202d
    ctx->pc = 0x11fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fab4: 0x1440000c
    ctx->pc = 0x11FAB4u;
    {
        const bool branch_taken_0x11fab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FAB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11fab4) {
            ctx->pc = 0x11FAE8u;
            goto label_11fae8;
        }
    }
    ctx->pc = 0x11FABCu;
label_11fabc:
    // 0x11fabc: 0x180202d
    ctx->pc = 0x11fabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fac0: 0xc04480e
    ctx->pc = 0x11FAC0u;
    SET_GPR_U32(ctx, 31, 0x11FAC8u);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FAC8u; }
    }
    if (ctx->pc != 0x11FAC8u) { return; }
    ctx->pc = 0x11FAC8u;
    // 0x11fac8: 0x40202d
    ctx->pc = 0x11fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11facc: 0xc0487bc
    ctx->pc = 0x11FACCu;
    SET_GPR_U32(ctx, 31, 0x11FAD4u);
    ctx->pc = 0x121EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121EF0_0x121ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FAD4u; }
    }
    if (ctx->pc != 0x11FAD4u) { return; }
    ctx->pc = 0x11FAD4u;
    // 0x11fad4: 0x40202d
    ctx->pc = 0x11fad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fad8: 0xc04868a
    ctx->pc = 0x11FAD8u;
    SET_GPR_U32(ctx, 31, 0x11FAE0u);
    ctx->pc = 0x121A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121A28_0x121a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FAE0u; }
    }
    if (ctx->pc != 0x11FAE0u) { return; }
    ctx->pc = 0x11FAE0u;
    // 0x11fae0: 0x40202d
    ctx->pc = 0x11fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fae4: 0x24020001
    ctx->pc = 0x11fae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11fae8:
    // 0x11fae8: 0x1202000d
    ctx->pc = 0x11FAE8u;
    {
        const bool branch_taken_0x11fae8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x11FAECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
        if (branch_taken_0x11fae8) {
            ctx->pc = 0x11FB20u;
            goto label_11fb20;
        }
    }
    ctx->pc = 0x11FAF0u;
    // 0x11faf0: 0x2a020002
    ctx->pc = 0x11faf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x11faf4: 0x10400006
    ctx->pc = 0x11FAF4u;
    {
        const bool branch_taken_0x11faf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FAF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x11faf4) {
            ctx->pc = 0x11FB10u;
            goto label_11fb10;
        }
    }
    ctx->pc = 0x11FAFCu;
    // 0x11fafc: 0x80102d
    ctx->pc = 0x11fafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb00: 0x12000029
    ctx->pc = 0x11FB00u;
    {
        const bool branch_taken_0x11fb00 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB04u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fb00) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FB08u;
    // 0x11fb08: 0x1000001d
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB80u;
            goto label_11fb80;
        }
    }
    ctx->pc = 0x11FB10u;
label_11fb10:
    // 0x11fb10: 0x1202000f
    ctx->pc = 0x11FB10u;
    {
        const bool branch_taken_0x11fb10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x11fb10) {
            ctx->pc = 0x11FB50u;
            goto label_11fb50;
        }
    }
    ctx->pc = 0x11FB18u;
    // 0x11fb18: 0x10000019
    ctx->pc = 0x11FB18u;
    {
        const bool branch_taken_0x11fb18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fb18) {
            ctx->pc = 0x11FB80u;
            goto label_11fb80;
        }
    }
    ctx->pc = 0x11FB20u;
label_11fb20:
    // 0x11fb20: 0x80102d
    ctx->pc = 0x11fb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb24: 0x2103f
    ctx->pc = 0x11fb24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11fb28: 0x3c05ffff
    ctx->pc = 0x11fb28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x11fb2c: 0x5283e
    ctx->pc = 0x11fb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11fb30: 0x431026
    ctx->pc = 0x11fb30u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11fb34: 0x852024
    ctx->pc = 0x11fb34u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11fb38: 0x2103c
    ctx->pc = 0x11fb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11fb3c: 0x822025
    ctx->pc = 0x11fb3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fb40: 0x80102d
    ctx->pc = 0x11fb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb44: 0x10000018
    ctx->pc = 0x11FB44u;
    {
        const bool branch_taken_0x11fb44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB48u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fb44) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FB4Cu;
    // 0x11fb4c: 0x0
    ctx->pc = 0x11fb4cu;
    // NOP
label_11fb50:
    // 0x11fb50: 0x3c010024
    ctx->pc = 0x11fb50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fb54: 0xdc258ce8
    ctx->pc = 0x11fb54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
    // 0x11fb58: 0xc044752
    ctx->pc = 0x11FB58u;
    SET_GPR_U32(ctx, 31, 0x11FB60u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB60u; }
    }
    if (ctx->pc != 0x11FB60u) { return; }
    ctx->pc = 0x11FB60u;
    // 0x11fb60: 0x3c010024
    ctx->pc = 0x11fb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fb64: 0xdc248cf0
    ctx->pc = 0x11fb64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294937840)));
    // 0x11fb68: 0x40282d
    ctx->pc = 0x11fb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb6c: 0xc044752
    ctx->pc = 0x11FB6Cu;
    SET_GPR_U32(ctx, 31, 0x11FB74u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB74u; }
    }
    if (ctx->pc != 0x11FB74u) { return; }
    ctx->pc = 0x11FB74u;
    // 0x11fb74: 0x1000000c
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB78u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FBA8u;
            goto label_11fba8;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0x0
    ctx->pc = 0x11fb7cu;
    // NOP
label_11fb80:
    // 0x11fb80: 0x3c010024
    ctx->pc = 0x11fb80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fb84: 0xdc258cf8
    ctx->pc = 0x11fb84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937848)));
    // 0x11fb88: 0xc044752
    ctx->pc = 0x11FB88u;
    SET_GPR_U32(ctx, 31, 0x11FB90u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB90u; }
    }
    if (ctx->pc != 0x11FB90u) { return; }
    ctx->pc = 0x11FB90u;
    // 0x11fb90: 0x3c010024
    ctx->pc = 0x11fb90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x11fb94: 0xdc258d00
    ctx->pc = 0x11fb94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937856)));
    // 0x11fb98: 0x40202d
    ctx->pc = 0x11fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb9c: 0xc044752
    ctx->pc = 0x11FB9Cu;
    SET_GPR_U32(ctx, 31, 0x11FBA4u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FBA4u; }
    }
    if (ctx->pc != 0x11FBA4u) { return; }
    ctx->pc = 0x11FBA4u;
label_11fba4:
    // 0x11fba4: 0xdfb00000
    ctx->pc = 0x11fba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fba8:
    // 0x11fba8: 0xdfbf0008
    ctx->pc = 0x11fba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11fbac:
    // 0x11fbac: 0x3e00008
    ctx->pc = 0x11FBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F8F0u: goto label_11f8f0;
            case 0x11F908u: goto label_11f908;
            case 0x11F928u: goto label_11f928;
            case 0x11F970u: goto label_11f970;
            case 0x11F980u: goto label_11f980;
            case 0x11F984u: goto label_11f984;
            case 0x11F9D8u: goto label_11f9d8;
            case 0x11FA08u: goto label_11fa08;
            case 0x11FA30u: goto label_11fa30;
            case 0x11FA58u: goto label_11fa58;
            case 0x11FA68u: goto label_11fa68;
            case 0x11FA70u: goto label_11fa70;
            case 0x11FA90u: goto label_11fa90;
            case 0x11FABCu: goto label_11fabc;
            case 0x11FAE8u: goto label_11fae8;
            case 0x11FB10u: goto label_11fb10;
            case 0x11FB20u: goto label_11fb20;
            case 0x11FB50u: goto label_11fb50;
            case 0x11FB80u: goto label_11fb80;
            case 0x11FBA4u: goto label_11fba4;
            case 0x11FBA8u: goto label_11fba8;
            case 0x11FBACu: goto label_11fbac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FBB4u;
    // 0x11fbb4: 0x0
    ctx->pc = 0x11fbb4u;
    // NOP
}
