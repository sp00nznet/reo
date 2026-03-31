#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3900
// Address: 0x1f3900 - 0x1f39e8
void sub_001F3900_0x1f3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3900u;

    // 0x1f3900: 0x27bdffb0
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3904: 0xffb00030
    ctx->pc = 0x1f3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f3908: 0xffbe0038
    ctx->pc = 0x1f3908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 30));
    // 0x1f390c: 0xffbf0040
    ctx->pc = 0x1f390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f3910: 0x3a0f02d
    ctx->pc = 0x1f3910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3914: 0xafc40000
    ctx->pc = 0x1f3914u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f3918: 0xafc50004
    ctx->pc = 0x1f3918u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f391c: 0xafc60008
    ctx->pc = 0x1f391cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1f3920: 0x8fc20008
    ctx->pc = 0x1f3920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3924: 0x14400005
    ctx->pc = 0x1F3924u;
    {
        const bool branch_taken_0x1f3924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3924) {
            ctx->pc = 0x1F393Cu;
            goto label_1f393c;
        }
    }
    ctx->pc = 0x1F392Cu;
    // 0x1f392c: 0x27c20020
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1f3930: 0xafc20014
    ctx->pc = 0x1f3930u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f3934: 0x10000003
    ctx->pc = 0x1F3934u;
    {
        const bool branch_taken_0x1f3934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3934) {
            ctx->pc = 0x1F3944u;
            goto label_1f3944;
        }
    }
    ctx->pc = 0x1F393Cu;
label_1f393c:
    // 0x1f393c: 0x8fc20008
    ctx->pc = 0x1f393cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3940: 0xafc20014
    ctx->pc = 0x1f3940u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1f3944:
    // 0x1f3944: 0x8fc40014
    ctx->pc = 0x1f3944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f3948: 0x8fc50004
    ctx->pc = 0x1f3948u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f394c: 0x24060010
    ctx->pc = 0x1f394cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f3950: 0xc041eac
    ctx->pc = 0x1F3950u;
    SET_GPR_U32(ctx, 31, 0x1F3958u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3958u; }
    }
    if (ctx->pc != 0x1F3958u) { return; }
    ctx->pc = 0x1F3958u;
    // 0x1f3958: 0x8fc20014
    ctx->pc = 0x1f3958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f395c: 0x94420000
    ctx->pc = 0x1f395cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3960: 0x304203ff
    ctx->pc = 0x1f3960u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x1f3964: 0x3042ffff
    ctx->pc = 0x1f3964u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f3968: 0xafc20010
    ctx->pc = 0x1f3968u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1f396c: 0x8fc40000
    ctx->pc = 0x1f396cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3970: 0xc07c6b6
    ctx->pc = 0x1F3970u;
    SET_GPR_U32(ctx, 31, 0x1F3978u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3978u; }
    }
    if (ctx->pc != 0x1F3978u) { return; }
    ctx->pc = 0x1F3978u;
    // 0x1f3978: 0x40802d
    ctx->pc = 0x1f3978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f397c: 0x8fc40000
    ctx->pc = 0x1f397cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3980: 0xc07cd3b
    ctx->pc = 0x1F3980u;
    SET_GPR_U32(ctx, 31, 0x1F3988u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3988u; }
    }
    if (ctx->pc != 0x1F3988u) { return; }
    ctx->pc = 0x1F3988u;
    // 0x1f3988: 0x40182d
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f398c: 0x8fc20004
    ctx->pc = 0x1f398cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f3990: 0x431023
    ctx->pc = 0x1f3990u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3994: 0x2021823
    ctx->pc = 0x1f3994u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f3998: 0x8fc20010
    ctx->pc = 0x1f3998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f399c: 0x621023
    ctx->pc = 0x1f399cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f39a0: 0xafc2000c
    ctx->pc = 0x1f39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f39a4: 0x8fc2000c
    ctx->pc = 0x1f39a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f39a8: 0x28420010
    ctx->pc = 0x1f39a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x1f39ac: 0x10400004
    ctx->pc = 0x1F39ACu;
    {
        const bool branch_taken_0x1f39ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f39ac) {
            ctx->pc = 0x1F39C0u;
            goto label_1f39c0;
        }
    }
    ctx->pc = 0x1F39B4u;
    // 0x1f39b4: 0x102d
    ctx->pc = 0x1f39b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39b8: 0x10000004
    ctx->pc = 0x1F39B8u;
    {
        const bool branch_taken_0x1f39b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f39b8) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F39C0u;
label_1f39c0:
    // 0x1f39c0: 0x8fc20004
    ctx->pc = 0x1f39c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f39c4: 0x8fc30010
    ctx->pc = 0x1f39c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f39c8: 0x431021
    ctx->pc = 0x1f39c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f39cc:
    // 0x1f39cc: 0x3c0e82d
    ctx->pc = 0x1f39ccu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39d0: 0xdfb00030
    ctx->pc = 0x1f39d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f39d4: 0xdfbe0038
    ctx->pc = 0x1f39d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f39d8: 0xdfbf0040
    ctx->pc = 0x1f39d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f39dc: 0x27bd0050
    ctx->pc = 0x1f39dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f39e0: 0x3e00008
    ctx->pc = 0x1F39E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F393Cu: goto label_1f393c;
            case 0x1F3944u: goto label_1f3944;
            case 0x1F39C0u: goto label_1f39c0;
            case 0x1F39CCu: goto label_1f39cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F39E8u;
}
