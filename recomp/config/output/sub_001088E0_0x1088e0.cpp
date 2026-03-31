#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001088E0
// Address: 0x1088e0 - 0x1089b0
void sub_001088E0_0x1088e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1088e0u;

    // 0x1088e0: 0x3c027ff0
    ctx->pc = 0x1088e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32752 << 16));
    // 0x1088e4: 0x4203f
    ctx->pc = 0x1088e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1088e8: 0x822024
    ctx->pc = 0x1088e8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1088ec: 0x3c03fcc0
    ctx->pc = 0x1088ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64704 << 16));
    // 0x1088f0: 0x832021
    ctx->pc = 0x1088f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1088f4: 0x41023
    ctx->pc = 0x1088f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1088f8: 0x18800009
    ctx->pc = 0x1088F8u;
    {
        const bool branch_taken_0x1088f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1088FCu;
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        if (branch_taken_0x1088f8) {
            ctx->pc = 0x108920u;
            goto label_108920;
        }
    }
    ctx->pc = 0x108900u;
    // 0x108900: 0x3c02ffff
    ctx->pc = 0x108900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x108904: 0x2103e
    ctx->pc = 0x108904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x108908: 0x2403ffff
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10890c: 0x3183c
    ctx->pc = 0x10890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108910: 0xa22824
    ctx->pc = 0x108910u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x108914: 0xa62825
    ctx->pc = 0x108914u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x108918: 0x10000022
    ctx->pc = 0x108918u;
    {
        const bool branch_taken_0x108918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10891Cu;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x108918) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x108920u;
label_108920:
    // 0x108920: 0x22503
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x108924: 0x28820014
    ctx->pc = 0x108924u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 20));
    // 0x108928: 0x5040000d
    ctx->pc = 0x108928u;
    {
        const bool branch_taken_0x108928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x108928) {
            ctx->pc = 0x10892Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->pc = 0x108960u;
            goto label_108960;
        }
    }
    ctx->pc = 0x108930u;
    // 0x108930: 0x3c020008
    ctx->pc = 0x108930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x108934: 0x3c03ffff
    ctx->pc = 0x108934u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x108938: 0x3183e
    ctx->pc = 0x108938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x10893c: 0x821007
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x108940: 0xa32824
    ctx->pc = 0x108940u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108944: 0x2103c
    ctx->pc = 0x108944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108948: 0x2403ffff
    ctx->pc = 0x108948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10894c: 0x3183c
    ctx->pc = 0x10894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108950: 0xa22825
    ctx->pc = 0x108950u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x108954: 0x10000013
    ctx->pc = 0x108954u;
    {
        const bool branch_taken_0x108954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108958u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x108954) {
            ctx->pc = 0x1089A4u;
            goto label_1089a4;
        }
    }
    ctx->pc = 0x10895Cu;
    // 0x10895c: 0x0
    ctx->pc = 0x10895cu;
    // NOP
label_108960:
    // 0x108960: 0x3c03ffff
    ctx->pc = 0x108960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x108964: 0x3183e
    ctx->pc = 0x108964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x108968: 0x2882001f
    ctx->pc = 0x108968u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
    // 0x10896c: 0x43027
    ctx->pc = 0x10896cu;
    SET_GPR_U32(ctx, 6, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x108970: 0x10400005
    ctx->pc = 0x108970u;
    {
        const bool branch_taken_0x108970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108974u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x108970) {
            ctx->pc = 0x108988u;
            goto label_108988;
        }
    }
    ctx->pc = 0x108978u;
    // 0x108978: 0x24020001
    ctx->pc = 0x108978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10897c: 0x10000003
    ctx->pc = 0x10897Cu;
    {
        const bool branch_taken_0x10897c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108980u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        if (branch_taken_0x10897c) {
            ctx->pc = 0x10898Cu;
            goto label_10898c;
        }
    }
    ctx->pc = 0x108984u;
    // 0x108984: 0x0
    ctx->pc = 0x108984u;
    // NOP
label_108988:
    // 0x108988: 0x24020001
    ctx->pc = 0x108988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_10898c:
    // 0x10898c: 0x2103c
    ctx->pc = 0x10898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108990: 0x2403ffff
    ctx->pc = 0x108990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108994: 0x3183c
    ctx->pc = 0x108994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108998: 0x2103e
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10899c: 0xa32824
    ctx->pc = 0x10899cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1089a0: 0xa22825
    ctx->pc = 0x1089a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1089a4:
    // 0x1089a4: 0xa0102d
    ctx->pc = 0x1089a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089a8: 0x3e00008
    ctx->pc = 0x1089A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108920u: goto label_108920;
            case 0x108960u: goto label_108960;
            case 0x108988u: goto label_108988;
            case 0x10898Cu: goto label_10898c;
            case 0x1089A4u: goto label_1089a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1089B0u;
}
