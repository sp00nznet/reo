#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A4B8
// Address: 0x16a4b8 - 0x16a598
void sub_0016A4B8_0x16a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a4b8u;

    // 0x16a4b8: 0x27bdffc0
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a4bc: 0xffb30018
    ctx->pc = 0x16a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a4c0: 0xe0982d
    ctx->pc = 0x16a4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4c4: 0xffb00000
    ctx->pc = 0x16a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a4c8: 0xc0802d
    ctx->pc = 0x16a4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4cc: 0xffb10008
    ctx->pc = 0x16a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a4d0: 0xffb50028
    ctx->pc = 0x16a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16a4d4: 0x80a82d
    ctx->pc = 0x16a4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4d8: 0xffb20010
    ctx->pc = 0x16a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a4dc: 0xffb40020
    ctx->pc = 0x16a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a4e0: 0xffbf0030
    ctx->pc = 0x16a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a4e4: 0xae600000
    ctx->pc = 0x16a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x16a4e8: 0x8eb20028
    ctx->pc = 0x16a4e8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x16a4ec: 0x26420003
    ctx->pc = 0x16a4ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 3));
    // 0x16a4f0: 0x202102a
    ctx->pc = 0x16a4f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x16a4f4: 0x14400006
    ctx->pc = 0x16A4F4u;
    {
        const bool branch_taken_0x16a4f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A4F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a4f4) {
            ctx->pc = 0x16A510u;
            goto label_16a510;
        }
    }
    ctx->pc = 0x16A4FCu;
    // 0x16a4fc: 0x220202d
    ctx->pc = 0x16a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a500: 0xc05a966
    ctx->pc = 0x16A500u;
    SET_GPR_U32(ctx, 31, 0x16A508u);
    ctx->pc = 0x16A504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A598_0x16a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A508u; }
    }
    if (ctx->pc != 0x16A508u) { return; }
    ctx->pc = 0x16A508u;
    // 0x16a508: 0x54400019
    ctx->pc = 0x16A508u;
    {
        const bool branch_taken_0x16a508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a508) {
            ctx->pc = 0x16A50Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x16A570u;
            goto label_16a570;
        }
    }
    ctx->pc = 0x16A510u;
label_16a510:
    // 0x16a510: 0x2a020004
    ctx->pc = 0x16a510u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x16a514: 0x1440000c
    ctx->pc = 0x16A514u;
    {
        const bool branch_taken_0x16a514 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A518u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a514) {
            ctx->pc = 0x16A548u;
            goto label_16a548;
        }
    }
    ctx->pc = 0x16A51Cu;
    // 0x16a51c: 0x3c14000d
    ctx->pc = 0x16a51cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)13 << 16));
label_16a520:
    // 0x16a520: 0x220202d
    ctx->pc = 0x16a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a524: 0xc055f4a
    ctx->pc = 0x16A524u;
    SET_GPR_U32(ctx, 31, 0x16A52Cu);
    ctx->pc = 0x16A528u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x157D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157D28_0x157d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A52Cu; }
    }
    if (ctx->pc != 0x16A52Cu) { return; }
    ctx->pc = 0x16A52Cu;
    // 0x16a52c: 0x541024
    ctx->pc = 0x16a52cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16a530: 0x5440000f
    ctx->pc = 0x16A530u;
    {
        const bool branch_taken_0x16a530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a530) {
            ctx->pc = 0x16A534u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x16A570u;
            goto label_16a570;
        }
    }
    ctx->pc = 0x16A538u;
    // 0x16a538: 0x2610ffff
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16a53c: 0x2a020004
    ctx->pc = 0x16a53cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x16a540: 0x1040fff7
    ctx->pc = 0x16A540u;
    {
        const bool branch_taken_0x16a540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A544u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x16a540) {
            ctx->pc = 0x16A520u;
            goto label_16a520;
        }
    }
    ctx->pc = 0x16A548u;
label_16a548:
    // 0x16a548: 0x2602ffff
    ctx->pc = 0x16a548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16a54c: 0x2c420003
    ctx->pc = 0x16a54cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x16a550: 0x50400007
    ctx->pc = 0x16A550u;
    {
        const bool branch_taken_0x16a550 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a550) {
            ctx->pc = 0x16A554u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x16A570u;
            goto label_16a570;
        }
    }
    ctx->pc = 0x16A558u;
    // 0x16a558: 0x2a0202d
    ctx->pc = 0x16a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a55c: 0xc05a976
    ctx->pc = 0x16A55Cu;
    SET_GPR_U32(ctx, 31, 0x16A564u);
    ctx->pc = 0x16A560u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x16A5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A5D8_0x16a5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A564u; }
    }
    if (ctx->pc != 0x16A564u) { return; }
    ctx->pc = 0x16A564u;
    // 0x16a564: 0x2501821
    ctx->pc = 0x16a564u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x16a568: 0x62900b
    ctx->pc = 0x16a568u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x16a56c: 0xae720000
    ctx->pc = 0x16a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_16a570:
    // 0x16a570: 0xdfb00000
    ctx->pc = 0x16a570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a574: 0xdfb10008
    ctx->pc = 0x16a574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a578: 0xdfb20010
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a57c: 0xdfb30018
    ctx->pc = 0x16a57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a580: 0xdfb40020
    ctx->pc = 0x16a580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a584: 0xdfb50028
    ctx->pc = 0x16a584u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a588: 0xdfbf0030
    ctx->pc = 0x16a588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a58c: 0x3e00008
    ctx->pc = 0x16A58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A510u: goto label_16a510;
            case 0x16A520u: goto label_16a520;
            case 0x16A548u: goto label_16a548;
            case 0x16A570u: goto label_16a570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A594u;
    // 0x16a594: 0x0
    ctx->pc = 0x16a594u;
    // NOP
}
