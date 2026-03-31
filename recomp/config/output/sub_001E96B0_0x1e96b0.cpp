#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E96B0
// Address: 0x1e96b0 - 0x1e986c
void sub_001E96B0_0x1e96b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e96b0u;

    // 0x1e96b0: 0x27bdffb0
    ctx->pc = 0x1e96b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e96b4: 0xffbe0040
    ctx->pc = 0x1e96b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1e96b8: 0xffbf0048
    ctx->pc = 0x1e96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e96bc: 0x3a0f02d
    ctx->pc = 0x1e96bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96c0: 0xafc40000
    ctx->pc = 0x1e96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e96c4: 0xafc50004
    ctx->pc = 0x1e96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e96c8: 0xafc60008
    ctx->pc = 0x1e96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e96cc: 0xafc7000c
    ctx->pc = 0x1e96ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1e96d0: 0xafc80010
    ctx->pc = 0x1e96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x1e96d4: 0xafc90014
    ctx->pc = 0x1e96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x1e96d8: 0xc0413bc
    ctx->pc = 0x1E96D8u;
    SET_GPR_U32(ctx, 31, 0x1E96E0u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96E0u; }
    }
    if (ctx->pc != 0x1E96E0u) { return; }
    ctx->pc = 0x1E96E0u;
    // 0x1e96e0: 0xac400000
    ctx->pc = 0x1e96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e96e4: 0x8fc40000
    ctx->pc = 0x1e96e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e96e8: 0xc07a216
    ctx->pc = 0x1E96E8u;
    SET_GPR_U32(ctx, 31, 0x1E96F0u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96F0u; }
    }
    if (ctx->pc != 0x1E96F0u) { return; }
    ctx->pc = 0x1E96F0u;
    // 0x1e96f0: 0xafc20030
    ctx->pc = 0x1e96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1e96f4: 0x8fc20030
    ctx->pc = 0x1e96f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1e96f8: 0x14400009
    ctx->pc = 0x1E96F8u;
    {
        const bool branch_taken_0x1e96f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e96f8) {
            ctx->pc = 0x1E9720u;
            goto label_1e9720;
        }
    }
    ctx->pc = 0x1E9700u;
    // 0x1e9700: 0xc0413bc
    ctx->pc = 0x1E9700u;
    SET_GPR_U32(ctx, 31, 0x1E9708u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9708u; }
    }
    if (ctx->pc != 0x1E9708u) { return; }
    ctx->pc = 0x1E9708u;
    // 0x1e9708: 0x40182d
    ctx->pc = 0x1e9708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e970c: 0x2402006c
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e9710: 0xac620000
    ctx->pc = 0x1e9710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9714: 0x2402ffff
    ctx->pc = 0x1e9714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9718: 0x1000004e
    ctx->pc = 0x1E9718u;
    {
        const bool branch_taken_0x1e9718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9718) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9720u;
label_1e9720:
    // 0x1e9720: 0x8fc20030
    ctx->pc = 0x1e9720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1e9724: 0x94430004
    ctx->pc = 0x1e9724u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9728: 0x3402ffff
    ctx->pc = 0x1e9728u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e972c: 0x14620009
    ctx->pc = 0x1E972Cu;
    {
        const bool branch_taken_0x1e972c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e972c) {
            ctx->pc = 0x1E9754u;
            goto label_1e9754;
        }
    }
    ctx->pc = 0x1E9734u;
    // 0x1e9734: 0xc0413bc
    ctx->pc = 0x1E9734u;
    SET_GPR_U32(ctx, 31, 0x1E973Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E973Cu; }
    }
    if (ctx->pc != 0x1E973Cu) { return; }
    ctx->pc = 0x1E973Cu;
    // 0x1e973c: 0x40182d
    ctx->pc = 0x1e973cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9740: 0x2402000e
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e9744: 0xac620000
    ctx->pc = 0x1e9744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9748: 0x2402ffff
    ctx->pc = 0x1e9748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e974c: 0x10000041
    ctx->pc = 0x1E974Cu;
    {
        const bool branch_taken_0x1e974c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e974c) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9754u;
label_1e9754:
    // 0x1e9754: 0x8fc20030
    ctx->pc = 0x1e9754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1e9758: 0x94430002
    ctx->pc = 0x1e9758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e975c: 0x24020002
    ctx->pc = 0x1e975cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9760: 0x10620009
    ctx->pc = 0x1E9760u;
    {
        const bool branch_taken_0x1e9760 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9760) {
            ctx->pc = 0x1E9788u;
            goto label_1e9788;
        }
    }
    ctx->pc = 0x1E9768u;
    // 0x1e9768: 0xc0413bc
    ctx->pc = 0x1E9768u;
    SET_GPR_U32(ctx, 31, 0x1E9770u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9770u; }
    }
    if (ctx->pc != 0x1E9770u) { return; }
    ctx->pc = 0x1E9770u;
    // 0x1e9770: 0x40182d
    ctx->pc = 0x1e9770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9774: 0x2402006b
    ctx->pc = 0x1e9774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e9778: 0xac620000
    ctx->pc = 0x1e9778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e977c: 0x2402ffff
    ctx->pc = 0x1e977cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9780: 0x10000034
    ctx->pc = 0x1E9780u;
    {
        const bool branch_taken_0x1e9780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9780) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E9788u;
label_1e9788:
    // 0x1e9788: 0x8fc20030
    ctx->pc = 0x1e9788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1e978c: 0x24420008
    ctx->pc = 0x1e978cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9790: 0x27c30038
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 56));
    // 0x1e9794: 0x40202d
    ctx->pc = 0x1e9794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9798: 0x60282d
    ctx->pc = 0x1e9798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e979c: 0xc07c499
    ctx->pc = 0x1E979Cu;
    SET_GPR_U32(ctx, 31, 0x1E97A4u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97A4u; }
    }
    if (ctx->pc != 0x1E97A4u) { return; }
    ctx->pc = 0x1E97A4u;
    // 0x1e97a4: 0xafc20034
    ctx->pc = 0x1e97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x1e97a8: 0x8fc30034
    ctx->pc = 0x1e97a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1e97ac: 0x2402e4aa
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1e97b0: 0x14620004
    ctx->pc = 0x1E97B0u;
    {
        const bool branch_taken_0x1e97b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e97b0) {
            ctx->pc = 0x1E97C4u;
            goto label_1e97c4;
        }
    }
    ctx->pc = 0x1E97B8u;
    // 0x1e97b8: 0x102d
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97bc: 0x10000025
    ctx->pc = 0x1E97BCu;
    {
        const bool branch_taken_0x1e97bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e97bc) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E97C4u;
label_1e97c4:
    // 0x1e97c4: 0x8fc20034
    ctx->pc = 0x1e97c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1e97c8: 0x10400009
    ctx->pc = 0x1E97C8u;
    {
        const bool branch_taken_0x1e97c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e97c8) {
            ctx->pc = 0x1E97F0u;
            goto label_1e97f0;
        }
    }
    ctx->pc = 0x1E97D0u;
    // 0x1e97d0: 0xc0413bc
    ctx->pc = 0x1E97D0u;
    SET_GPR_U32(ctx, 31, 0x1E97D8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97D8u; }
    }
    if (ctx->pc != 0x1E97D8u) { return; }
    ctx->pc = 0x1E97D8u;
    // 0x1e97d8: 0x40182d
    ctx->pc = 0x1e97d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97dc: 0x8fc20034
    ctx->pc = 0x1e97dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1e97e0: 0xac620000
    ctx->pc = 0x1e97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e97e4: 0x2402ffff
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e97e8: 0x1000001a
    ctx->pc = 0x1E97E8u;
    {
        const bool branch_taken_0x1e97e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e97e8) {
            ctx->pc = 0x1E9854u;
            goto label_1e9854;
        }
    }
    ctx->pc = 0x1E97F0u;
label_1e97f0:
    // 0x1e97f0: 0x8fc40038
    ctx->pc = 0x1e97f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1e97f4: 0x8fc50004
    ctx->pc = 0x1e97f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e97f8: 0x8fc60008
    ctx->pc = 0x1e97f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e97fc: 0xc07cd84
    ctx->pc = 0x1E97FCu;
    SET_GPR_U32(ctx, 31, 0x1E9804u);
    ctx->pc = 0x1F3610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3610_0x1f3610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9804u; }
    }
    if (ctx->pc != 0x1E9804u) { return; }
    ctx->pc = 0x1E9804u;
    // 0x1e9804: 0xafc20034
    ctx->pc = 0x1e9804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x1e9808: 0x8fc40038
    ctx->pc = 0x1e9808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1e980c: 0xc07cc89
    ctx->pc = 0x1E980Cu;
    SET_GPR_U32(ctx, 31, 0x1E9814u);
    ctx->pc = 0x1F3224u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3224_0x1f3224(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9814u; }
    }
    if (ctx->pc != 0x1E9814u) { return; }
    ctx->pc = 0x1E9814u;
    // 0x1e9814: 0xafc20024
    ctx->pc = 0x1e9814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1e9818: 0x8fc40038
    ctx->pc = 0x1e9818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1e981c: 0xc07cccb
    ctx->pc = 0x1E981Cu;
    SET_GPR_U32(ctx, 31, 0x1E9824u);
    ctx->pc = 0x1F332Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F332C_0x1f332c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9824u; }
    }
    if (ctx->pc != 0x1E9824u) { return; }
    ctx->pc = 0x1E9824u;
    // 0x1e9824: 0xa7c20022
    ctx->pc = 0x1e9824u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9828: 0x27c20020
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1e982c: 0x8fc40010
    ctx->pc = 0x1e982cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9830: 0x40282d
    ctx->pc = 0x1e9830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9834: 0x24060010
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e9838: 0xc041eac
    ctx->pc = 0x1E9838u;
    SET_GPR_U32(ctx, 31, 0x1E9840u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9840u; }
    }
    if (ctx->pc != 0x1E9840u) { return; }
    ctx->pc = 0x1E9840u;
    // 0x1e9840: 0x8f84802c
    ctx->pc = 0x1e9840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e9844: 0x8fc50038
    ctx->pc = 0x1e9844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1e9848: 0xc07ca04
    ctx->pc = 0x1E9848u;
    SET_GPR_U32(ctx, 31, 0x1E9850u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9850u; }
    }
    if (ctx->pc != 0x1E9850u) { return; }
    ctx->pc = 0x1E9850u;
    // 0x1e9850: 0x8fc20034
    ctx->pc = 0x1e9850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_1e9854:
    // 0x1e9854: 0x3c0e82d
    ctx->pc = 0x1e9854u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9858: 0xdfbe0040
    ctx->pc = 0x1e9858u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e985c: 0xdfbf0048
    ctx->pc = 0x1e985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e9860: 0x27bd0050
    ctx->pc = 0x1e9860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e9864: 0x3e00008
    ctx->pc = 0x1E9864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9720u: goto label_1e9720;
            case 0x1E9754u: goto label_1e9754;
            case 0x1E9788u: goto label_1e9788;
            case 0x1E97C4u: goto label_1e97c4;
            case 0x1E97F0u: goto label_1e97f0;
            case 0x1E9854u: goto label_1e9854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E986Cu;
}
