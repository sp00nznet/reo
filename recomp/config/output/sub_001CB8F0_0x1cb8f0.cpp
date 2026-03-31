#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CB8F0
// Address: 0x1cb8f0 - 0x1cbb60
void sub_001CB8F0_0x1cb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cb8f0u;

    // 0x1cb8f0: 0x27bdfff0
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8f4: 0x3c010023
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb8f8: 0xffbf0000
    ctx->pc = 0x1cb8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8fc: 0x2403ffff
    ctx->pc = 0x1cb8fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb900: 0x8c245ff8
    ctx->pc = 0x1cb900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24568)));
    // 0x1cb904: 0x10830003
    ctx->pc = 0x1CB904u;
    {
        const bool branch_taken_0x1cb904 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cb904) {
            ctx->pc = 0x1CB914u;
            goto label_1cb914;
        }
    }
    ctx->pc = 0x1CB90Cu;
    // 0x1cb90c: 0xc072f7c
    ctx->pc = 0x1CB90Cu;
    SET_GPR_U32(ctx, 31, 0x1CB914u);
    ctx->pc = 0x1CBDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDF0_0x1cbdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB914u; }
    }
    if (ctx->pc != 0x1CB914u) { return; }
    ctx->pc = 0x1CB914u;
label_1cb914:
    // 0x1cb914: 0xdfbf0000
    ctx->pc = 0x1cb914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb918: 0x3e00008
    ctx->pc = 0x1CB918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB91Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9FCu: goto label_1cb9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB920u;
    // 0x1cb920: 0x27bdfff0
    ctx->pc = 0x1cb920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb924: 0x24020001
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb928: 0xffbf0000
    ctx->pc = 0x1cb928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb92c: 0x3c010034
    ctx->pc = 0x1cb92cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cb930: 0xc072f7c
    ctx->pc = 0x1CB930u;
    SET_GPR_U32(ctx, 31, 0x1CB938u);
    ctx->pc = 0x1CB934u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957576), GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDF0_0x1cbdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB938u; }
    }
    if (ctx->pc != 0x1CB938u) { return; }
    ctx->pc = 0x1CB938u;
    // 0x1cb938: 0x3c010023
    ctx->pc = 0x1cb938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb93c: 0xc045198
    ctx->pc = 0x1CB93Cu;
    SET_GPR_U32(ctx, 31, 0x1CB944u);
    ctx->pc = 0x1CB940u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB944u; }
    }
    if (ctx->pc != 0x1CB944u) { return; }
    ctx->pc = 0x1CB944u;
    // 0x1cb944: 0x3c010023
    ctx->pc = 0x1cb944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb948: 0xc04518c
    ctx->pc = 0x1CB948u;
    SET_GPR_U32(ctx, 31, 0x1CB950u);
    ctx->pc = 0x1CB94Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB950u; }
    }
    if (ctx->pc != 0x1CB950u) { return; }
    ctx->pc = 0x1CB950u;
    // 0x1cb950: 0x2403ffff
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb954: 0x3c010023
    ctx->pc = 0x1cb954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb958: 0xac236000
    ctx->pc = 0x1cb958u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24576), GPR_U32(ctx, 3));
    // 0x1cb95c: 0x3c010023
    ctx->pc = 0x1cb95cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb960: 0xac235ff8
    ctx->pc = 0x1cb960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24568), GPR_U32(ctx, 3));
    // 0x1cb964: 0xdfbf0000
    ctx->pc = 0x1cb964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb968: 0x3e00008
    ctx->pc = 0x1CB968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB96Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9FCu: goto label_1cb9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB970u;
    // 0x1cb970: 0x27bdfff0
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb974: 0x3c010023
    ctx->pc = 0x1cb974u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb978: 0xffbf0000
    ctx->pc = 0x1cb978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb97c: 0x2403ffff
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb980: 0x8c246008
    ctx->pc = 0x1cb980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24584)));
    // 0x1cb984: 0x10830003
    ctx->pc = 0x1CB984u;
    {
        const bool branch_taken_0x1cb984 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cb984) {
            ctx->pc = 0x1CB994u;
            goto label_1cb994;
        }
    }
    ctx->pc = 0x1CB98Cu;
    // 0x1cb98c: 0xc045194
    ctx->pc = 0x1CB98Cu;
    SET_GPR_U32(ctx, 31, 0x1CB994u);
    ctx->pc = 0x114650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114650_0x114650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB994u; }
    }
    if (ctx->pc != 0x1CB994u) { return; }
    ctx->pc = 0x1CB994u;
label_1cb994:
    // 0x1cb994: 0xdfbf0000
    ctx->pc = 0x1cb994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb998: 0x3e00008
    ctx->pc = 0x1CB998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB99Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9FCu: goto label_1cb9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB9A0u;
    // 0x1cb9a0: 0x27bdfff0
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb9a4: 0x1000000f
    ctx->pc = 0x1CB9A4u;
    {
        const bool branch_taken_0x1cb9a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB9A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1cb9a4) {
            ctx->pc = 0x1CB9E4u;
            goto label_1cb9e4;
        }
    }
    ctx->pc = 0x1CB9ACu;
label_1cb9ac:
    // 0x1cb9ac: 0x2402ffff
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb9b0: 0x8c236008
    ctx->pc = 0x1cb9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 24584)));
    // 0x1cb9b4: 0x10620011
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CB9FCu;
            goto label_1cb9fc;
        }
    }
    ctx->pc = 0x1CB9BCu;
    // 0x1cb9bc: 0xc073000
    ctx->pc = 0x1CB9BCu;
    SET_GPR_U32(ctx, 31, 0x1CB9C4u);
    ctx->pc = 0x1CC000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC000_0x1cc000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9C4u; }
    }
    if (ctx->pc != 0x1CB9C4u) { return; }
    ctx->pc = 0x1CB9C4u;
    // 0x1cb9c4: 0x3c05001d
    ctx->pc = 0x1cb9c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)29 << 16));
    // 0x1cb9c8: 0x24040100
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cb9cc: 0x24a5b970
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949232));
    // 0x1cb9d0: 0xc0450e8
    ctx->pc = 0x1CB9D0u;
    SET_GPR_U32(ctx, 31, 0x1CB9D8u);
    ctx->pc = 0x1CB9D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1143A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143A0_0x1143a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9D8u; }
    }
    if (ctx->pc != 0x1CB9D8u) { return; }
    ctx->pc = 0x1CB9D8u;
    // 0x1cb9d8: 0x3c010023
    ctx->pc = 0x1cb9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb9dc: 0xc045198
    ctx->pc = 0x1CB9DCu;
    SET_GPR_U32(ctx, 31, 0x1CB9E4u);
    ctx->pc = 0x1CB9E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24584)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9E4u; }
    }
    if (ctx->pc != 0x1CB9E4u) { return; }
    ctx->pc = 0x1CB9E4u;
label_1cb9e4:
    // 0x1cb9e4: 0x3c010034
    ctx->pc = 0x1cb9e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cb9e8: 0x8c22da08
    ctx->pc = 0x1cb9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294957576)));
    // 0x1cb9ec: 0x2102b
    ctx->pc = 0x1cb9ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1cb9f0: 0x38420001
    ctx->pc = 0x1cb9f0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1cb9f4: 0x1440ffed
    ctx->pc = 0x1CB9F4u;
    {
        const bool branch_taken_0x1cb9f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB9F8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1cb9f4) {
            ctx->pc = 0x1CB9ACu;
            goto label_1cb9ac;
        }
    }
    ctx->pc = 0x1CB9FCu;
label_1cb9fc:
    // 0x1cb9fc: 0x3c010023
    ctx->pc = 0x1cb9fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cba00: 0xc04518c
    ctx->pc = 0x1CBA00u;
    SET_GPR_U32(ctx, 31, 0x1CBA08u);
    ctx->pc = 0x1CBA04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24584)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA08u; }
    }
    if (ctx->pc != 0x1CBA08u) { return; }
    ctx->pc = 0x1CBA08u;
    // 0x1cba08: 0x3c010023
    ctx->pc = 0x1cba08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cba0c: 0x2402ffff
    ctx->pc = 0x1cba0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cba10: 0x8c245fe8
    ctx->pc = 0x1cba10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24552)));
    // 0x1cba14: 0x3c010023
    ctx->pc = 0x1cba14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cba18: 0xc04518c
    ctx->pc = 0x1CBA18u;
    SET_GPR_U32(ctx, 31, 0x1CBA20u);
    ctx->pc = 0x1CBA1Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24584), GPR_U32(ctx, 2));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA20u; }
    }
    if (ctx->pc != 0x1CBA20u) { return; }
    ctx->pc = 0x1CBA20u;
    // 0x1cba20: 0x3c010023
    ctx->pc = 0x1cba20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cba24: 0x2402ffff
    ctx->pc = 0x1cba24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cba28: 0x8c246000
    ctx->pc = 0x1cba28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24576)));
    // 0x1cba2c: 0x3c010023
    ctx->pc = 0x1cba2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cba30: 0xc045190
    ctx->pc = 0x1CBA30u;
    SET_GPR_U32(ctx, 31, 0x1CBA38u);
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA38u; }
    }
    if (ctx->pc != 0x1CBA38u) { return; }
    ctx->pc = 0x1CBA38u;
    // 0x1cba38: 0xc045118
    ctx->pc = 0x1CBA38u;
    SET_GPR_U32(ctx, 31, 0x1CBA40u);
    ctx->pc = 0x114460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114460_0x114460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA40u; }
    }
    if (ctx->pc != 0x1CBA40u) { return; }
    ctx->pc = 0x1CBA40u;
    // 0x1cba40: 0xdfbf0000
    ctx->pc = 0x1cba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba44: 0x3e00008
    ctx->pc = 0x1CBA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBA48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9FCu: goto label_1cb9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBA4Cu;
    // 0x1cba4c: 0x0
    ctx->pc = 0x1cba4cu;
    // NOP
    // 0x1cba50: 0x27bdff70
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cba54: 0x3c010034
    ctx->pc = 0x1cba54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cba58: 0xffbf0030
    ctx->pc = 0x1cba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cba5c: 0x24020001
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba60: 0x7fb20020
    ctx->pc = 0x1cba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cba64: 0x27a40040
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cba68: 0x7fb10010
    ctx->pc = 0x1cba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cba6c: 0x27b20048
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cba70: 0x7fb00000
    ctx->pc = 0x1cba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cba74: 0x27b10044
    ctx->pc = 0x1cba74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 68));
    // 0x1cba78: 0xac20d9f8
    ctx->pc = 0x1cba78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957560), GPR_U32(ctx, 0));
    // 0x1cba7c: 0x27b00054
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 84));
    // 0x1cba80: 0x3c010034
    ctx->pc = 0x1cba80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cba84: 0xac20da00
    ctx->pc = 0x1cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957568), GPR_U32(ctx, 0));
    // 0x1cba88: 0x3c010034
    ctx->pc = 0x1cba88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cba8c: 0xac20da08
    ctx->pc = 0x1cba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957576), GPR_U32(ctx, 0));
    // 0x1cba90: 0xae400000
    ctx->pc = 0x1cba90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cba94: 0xae220000
    ctx->pc = 0x1cba94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cba98: 0xc045188
    ctx->pc = 0x1CBA98u;
    SET_GPR_U32(ctx, 31, 0x1CBAA0u);
    ctx->pc = 0x1CBA9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAA0u; }
    }
    if (ctx->pc != 0x1CBAA0u) { return; }
    ctx->pc = 0x1CBAA0u;
    // 0x1cbaa0: 0x3c010023
    ctx->pc = 0x1cbaa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbaa4: 0x27a40040
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbaa8: 0xac226008
    ctx->pc = 0x1cbaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24584), GPR_U32(ctx, 2));
    // 0x1cbaac: 0x24020001
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbab0: 0xae400000
    ctx->pc = 0x1cbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cbab4: 0xae220000
    ctx->pc = 0x1cbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cbab8: 0xc045188
    ctx->pc = 0x1CBAB8u;
    SET_GPR_U32(ctx, 31, 0x1CBAC0u);
    ctx->pc = 0x1CBABCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAC0u; }
    }
    if (ctx->pc != 0x1CBAC0u) { return; }
    ctx->pc = 0x1CBAC0u;
    // 0x1cbac0: 0x3c010023
    ctx->pc = 0x1cbac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbac4: 0x27a40040
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbac8: 0xac226000
    ctx->pc = 0x1cbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24576), GPR_U32(ctx, 2));
    // 0x1cbacc: 0x24020001
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbad0: 0xae400000
    ctx->pc = 0x1cbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cbad4: 0xae220000
    ctx->pc = 0x1cbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cbad8: 0xc045188
    ctx->pc = 0x1CBAD8u;
    SET_GPR_U32(ctx, 31, 0x1CBAE0u);
    ctx->pc = 0x1CBADCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAE0u; }
    }
    if (ctx->pc != 0x1CBAE0u) { return; }
    ctx->pc = 0x1CBAE0u;
    // 0x1cbae0: 0x3c010023
    ctx->pc = 0x1cbae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbae4: 0x27a40060
    ctx->pc = 0x1cbae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cbae8: 0xac225fe8
    ctx->pc = 0x1cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24552), GPR_U32(ctx, 2));
    // 0x1cbaec: 0x24022000
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1cbaf0: 0xafa2006c
    ctx->pc = 0x1cbaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1cbaf4: 0x3c020026
    ctx->pc = 0x1cbaf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1cbaf8: 0x24421cf0
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x1cbafc: 0xafa20070
    ctx->pc = 0x1cbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1cbb00: 0x3c02001d
    ctx->pc = 0x1cbb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)29 << 16));
    // 0x1cbb04: 0x2442b9a0
    ctx->pc = 0x1cbb04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x1cbb08: 0xafa20064
    ctx->pc = 0x1cbb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1cbb0c: 0x3c020034
    ctx->pc = 0x1cbb0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cbb10: 0x2442da10
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957584));
    // 0x1cbb14: 0xafa20068
    ctx->pc = 0x1cbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1cbb18: 0x24020004
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cbb1c: 0xc045108
    ctx->pc = 0x1CBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB24u);
    ctx->pc = 0x1CBB20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB24u; }
    }
    if (ctx->pc != 0x1CBB24u) { return; }
    ctx->pc = 0x1CBB24u;
    // 0x1cbb24: 0x3c010023
    ctx->pc = 0x1cbb24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbb28: 0xac225ff8
    ctx->pc = 0x1cbb28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24568), GPR_U32(ctx, 2));
    // 0x1cbb2c: 0x3c010023
    ctx->pc = 0x1cbb2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cbb30: 0x8c245ff8
    ctx->pc = 0x1cbb30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24568)));
    // 0x1cbb34: 0xc045110
    ctx->pc = 0x1CBB34u;
    SET_GPR_U32(ctx, 31, 0x1CBB3Cu);
    ctx->pc = 0x1CBB38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB3Cu; }
    }
    if (ctx->pc != 0x1CBB3Cu) { return; }
    ctx->pc = 0x1CBB3Cu;
    // 0x1cbb3c: 0xdfbf0030
    ctx->pc = 0x1cbb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbb40: 0x7bb20020
    ctx->pc = 0x1cbb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbb44: 0x7bb10010
    ctx->pc = 0x1cbb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbb48: 0x7bb00000
    ctx->pc = 0x1cbb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb4c: 0x3e00008
    ctx->pc = 0x1CBB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB914u: goto label_1cb914;
            case 0x1CB994u: goto label_1cb994;
            case 0x1CB9ACu: goto label_1cb9ac;
            case 0x1CB9E4u: goto label_1cb9e4;
            case 0x1CB9FCu: goto label_1cb9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBB54u;
    // 0x1cbb54: 0x0
    ctx->pc = 0x1cbb54u;
    // NOP
    // 0x1cbb58: 0x0
    ctx->pc = 0x1cbb58u;
    // NOP
    // 0x1cbb5c: 0x0
    ctx->pc = 0x1cbb5cu;
    // NOP
}
