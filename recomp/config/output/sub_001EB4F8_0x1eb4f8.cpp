#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EB4F8
// Address: 0x1eb4f8 - 0x1eb684
void sub_001EB4F8_0x1eb4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1eb4f8u;

    // 0x1eb4f8: 0x27bdffc0
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb4fc: 0xffbe0030
    ctx->pc = 0x1eb4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1eb500: 0xffbf0038
    ctx->pc = 0x1eb500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1eb504: 0x3a0f02d
    ctx->pc = 0x1eb504u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb508: 0xafc40000
    ctx->pc = 0x1eb508u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1eb50c: 0xafc50004
    ctx->pc = 0x1eb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1eb510: 0xafc60008
    ctx->pc = 0x1eb510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1eb514: 0xafc7000c
    ctx->pc = 0x1eb514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1eb518: 0xafc80010
    ctx->pc = 0x1eb518u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x1eb51c: 0x24041048
    ctx->pc = 0x1eb51cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4168));
    // 0x1eb520: 0xc041bb8
    ctx->pc = 0x1EB520u;
    SET_GPR_U32(ctx, 31, 0x1EB528u);
    ctx->pc = 0x106EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106EE0_0x106ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB528u; }
    }
    if (ctx->pc != 0x1EB528u) { return; }
    ctx->pc = 0x1EB528u;
    // 0x1eb528: 0xafc20014
    ctx->pc = 0x1eb528u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1eb52c: 0x8fc40014
    ctx->pc = 0x1eb52cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb530: 0x8fc5000c
    ctx->pc = 0x1eb530u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb534: 0x8fc60010
    ctx->pc = 0x1eb534u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb538: 0xc07ac19
    ctx->pc = 0x1EB538u;
    SET_GPR_U32(ctx, 31, 0x1EB540u);
    ctx->pc = 0x1EB064u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB064_0x1eb064(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB540u; }
    }
    if (ctx->pc != 0x1EB540u) { return; }
    ctx->pc = 0x1EB540u;
    // 0x1eb540: 0x8fc20008
    ctx->pc = 0x1eb540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eb544: 0x24420007
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7));
    // 0x1eb548: 0xafc2002c
    ctx->pc = 0x1eb548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1eb54c: 0x8fc2002c
    ctx->pc = 0x1eb54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb550: 0x4410004
    ctx->pc = 0x1EB550u;
    {
        const bool branch_taken_0x1eb550 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eb550) {
            ctx->pc = 0x1EB564u;
            goto label_1eb564;
        }
    }
    ctx->pc = 0x1EB558u;
    // 0x1eb558: 0x8fc3002c
    ctx->pc = 0x1eb558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb55c: 0x24630007
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1eb560: 0xafc3002c
    ctx->pc = 0x1eb560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 3));
label_1eb564:
    // 0x1eb564: 0x8fc3002c
    ctx->pc = 0x1eb564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb568: 0x310c3
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1eb56c: 0xafc2001c
    ctx->pc = 0x1eb56cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1eb570: 0x8fc20000
    ctx->pc = 0x1eb570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb574: 0xafc20028
    ctx->pc = 0x1eb574u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1eb578: 0xafc00018
    ctx->pc = 0x1eb578u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_1eb57c:
    // 0x1eb57c: 0x8fc20018
    ctx->pc = 0x1eb57cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eb580: 0x8fc3001c
    ctx->pc = 0x1eb580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb584: 0x43102a
    ctx->pc = 0x1eb584u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1eb588: 0x14400003
    ctx->pc = 0x1EB588u;
    {
        const bool branch_taken_0x1eb588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb588) {
            ctx->pc = 0x1EB598u;
            goto label_1eb598;
        }
    }
    ctx->pc = 0x1EB590u;
    // 0x1eb590: 0x10000031
    ctx->pc = 0x1EB590u;
    {
        const bool branch_taken_0x1eb590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb590) {
            ctx->pc = 0x1EB658u;
            goto label_1eb658;
        }
    }
    ctx->pc = 0x1EB598u;
label_1eb598:
    // 0x1eb598: 0x8fc20004
    ctx->pc = 0x1eb598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eb59c: 0x8c420000
    ctx->pc = 0x1eb59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb5a0: 0xafc20020
    ctx->pc = 0x1eb5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb5a4: 0x8fc20004
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eb5a8: 0x24420004
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eb5ac: 0x8c420000
    ctx->pc = 0x1eb5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb5b0: 0xafc20024
    ctx->pc = 0x1eb5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb5b4: 0x8fc40020
    ctx->pc = 0x1eb5b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb5b8: 0xc07a071
    ctx->pc = 0x1EB5B8u;
    SET_GPR_U32(ctx, 31, 0x1EB5C0u);
    ctx->pc = 0x1E81C4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C4_0x1e81c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5C0u; }
    }
    if (ctx->pc != 0x1EB5C0u) { return; }
    ctx->pc = 0x1EB5C0u;
    // 0x1eb5c0: 0xafc20020
    ctx->pc = 0x1eb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb5c4: 0x8fc40024
    ctx->pc = 0x1eb5c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb5c8: 0xc07a071
    ctx->pc = 0x1EB5C8u;
    SET_GPR_U32(ctx, 31, 0x1EB5D0u);
    ctx->pc = 0x1E81C4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C4_0x1e81c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5D0u; }
    }
    if (ctx->pc != 0x1EB5D0u) { return; }
    ctx->pc = 0x1EB5D0u;
    // 0x1eb5d0: 0xafc20024
    ctx->pc = 0x1eb5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb5d4: 0x27c20020
    ctx->pc = 0x1eb5d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1eb5d8: 0x27c30024
    ctx->pc = 0x1eb5d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 36));
    // 0x1eb5dc: 0x8fc40014
    ctx->pc = 0x1eb5dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb5e0: 0x40282d
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5e4: 0x60302d
    ctx->pc = 0x1eb5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5e8: 0xc07ab82
    ctx->pc = 0x1EB5E8u;
    SET_GPR_U32(ctx, 31, 0x1EB5F0u);
    ctx->pc = 0x1EAE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAE08_0x1eae08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5F0u; }
    }
    if (ctx->pc != 0x1EB5F0u) { return; }
    ctx->pc = 0x1EB5F0u;
    // 0x1eb5f0: 0x8fc40020
    ctx->pc = 0x1eb5f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb5f4: 0xc07a04d
    ctx->pc = 0x1EB5F4u;
    SET_GPR_U32(ctx, 31, 0x1EB5FCu);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5FCu; }
    }
    if (ctx->pc != 0x1EB5FCu) { return; }
    ctx->pc = 0x1EB5FCu;
    // 0x1eb5fc: 0xafc20020
    ctx->pc = 0x1eb5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb600: 0x8fc40024
    ctx->pc = 0x1eb600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb604: 0xc07a04d
    ctx->pc = 0x1EB604u;
    SET_GPR_U32(ctx, 31, 0x1EB60Cu);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB60Cu; }
    }
    if (ctx->pc != 0x1EB60Cu) { return; }
    ctx->pc = 0x1EB60Cu;
    // 0x1eb60c: 0xafc20024
    ctx->pc = 0x1eb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb610: 0x8fc30028
    ctx->pc = 0x1eb610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb614: 0x8fc20020
    ctx->pc = 0x1eb614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb618: 0xac620000
    ctx->pc = 0x1eb618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb61c: 0x8fc20028
    ctx->pc = 0x1eb61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb620: 0x24430004
    ctx->pc = 0x1eb620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eb624: 0x8fc20024
    ctx->pc = 0x1eb624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb628: 0xac620000
    ctx->pc = 0x1eb628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb62c: 0x8fc20018
    ctx->pc = 0x1eb62cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eb630: 0x24420001
    ctx->pc = 0x1eb630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb634: 0xafc20018
    ctx->pc = 0x1eb634u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1eb638: 0x8fc20004
    ctx->pc = 0x1eb638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eb63c: 0x24420008
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eb640: 0xafc20004
    ctx->pc = 0x1eb640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1eb644: 0x8fc20028
    ctx->pc = 0x1eb644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb648: 0x24420008
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eb64c: 0xafc20028
    ctx->pc = 0x1eb64cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1eb650: 0x1000ffca
    ctx->pc = 0x1EB650u;
    {
        const bool branch_taken_0x1eb650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb650) {
            ctx->pc = 0x1EB57Cu;
            goto label_1eb57c;
        }
    }
    ctx->pc = 0x1EB658u;
label_1eb658:
    // 0x1eb658: 0x8fc40014
    ctx->pc = 0x1eb658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb65c: 0xc041bce
    ctx->pc = 0x1EB65Cu;
    SET_GPR_U32(ctx, 31, 0x1EB664u);
    ctx->pc = 0x106F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106F38_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB664u; }
    }
    if (ctx->pc != 0x1EB664u) { return; }
    ctx->pc = 0x1EB664u;
    // 0x1eb664: 0x8fc2001c
    ctx->pc = 0x1eb664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb668: 0x210c0
    ctx->pc = 0x1eb668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1eb66c: 0x3c0e82d
    ctx->pc = 0x1eb66cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb670: 0xdfbe0030
    ctx->pc = 0x1eb670u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb674: 0xdfbf0038
    ctx->pc = 0x1eb674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eb678: 0x27bd0040
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb67c: 0x3e00008
    ctx->pc = 0x1EB67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB564u: goto label_1eb564;
            case 0x1EB57Cu: goto label_1eb57c;
            case 0x1EB598u: goto label_1eb598;
            case 0x1EB658u: goto label_1eb658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB684u;
}
