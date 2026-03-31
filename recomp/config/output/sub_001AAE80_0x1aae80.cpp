#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AAE80
// Address: 0x1aae80 - 0x1aafb0
void sub_001AAE80_0x1aae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aae80u;

    // 0x1aae80: 0x27bdfe50
    ctx->pc = 0x1aae80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1aae84: 0x2403ffff
    ctx->pc = 0x1aae84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aae88: 0xffbf0070
    ctx->pc = 0x1aae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1aae8c: 0x7fb60060
    ctx->pc = 0x1aae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1aae90: 0x7fb50050
    ctx->pc = 0x1aae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aae94: 0x100b02d
    ctx->pc = 0x1aae94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae98: 0x7fb40040
    ctx->pc = 0x1aae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aae9c: 0xa0a82d
    ctx->pc = 0x1aae9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaea0: 0x7fb30030
    ctx->pc = 0x1aaea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aaea4: 0xc0a02d
    ctx->pc = 0x1aaea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaea8: 0x7fb20020
    ctx->pc = 0x1aaea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aaeac: 0xe0982d
    ctx->pc = 0x1aaeacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaeb0: 0x7fb10010
    ctx->pc = 0x1aaeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aaeb4: 0x120902d
    ctx->pc = 0x1aaeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaeb8: 0x7fb00000
    ctx->pc = 0x1aaeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aaebc: 0x12630030
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AAEC0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAEC4u;
    // 0x1aaec4: 0x3c010032
    ctx->pc = 0x1aaec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aaec8: 0x80382d
    ctx->pc = 0x1aaec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaecc: 0x8c30440c
    ctx->pc = 0x1aaeccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1aaed0: 0x3c050025
    ctx->pc = 0x1aaed0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aaed4: 0x3c060025
    ctx->pc = 0x1aaed4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1aaed8: 0x27a40080
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aaedc: 0x24a5d0b8
    ctx->pc = 0x1aaedcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955192));
    // 0x1aaee0: 0xc042a0c
    ctx->pc = 0x1AAEE0u;
    SET_GPR_U32(ctx, 31, 0x1AAEE8u);
    ctx->pc = 0x1AAEE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294955072));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEE8u; }
    }
    if (ctx->pc != 0x1AAEE8u) { return; }
    ctx->pc = 0x1AAEE8u;
    // 0x1aaee8: 0x27a40080
    ctx->pc = 0x1aaee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1aaeec: 0xc06a920
    ctx->pc = 0x1AAEECu;
    SET_GPR_U32(ctx, 31, 0x1AAEF4u);
    ctx->pc = 0x1AAEF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AA480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA480_0x1aa480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEF4u; }
    }
    if (ctx->pc != 0x1AAEF4u) { return; }
    ctx->pc = 0x1AAEF4u;
    // 0x1aaef4: 0x18400022
    ctx->pc = 0x1AAEF4u;
    {
        const bool branch_taken_0x1aaef4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AAEF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 384));
        if (branch_taken_0x1aaef4) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAEFCu;
    // 0x1aaefc: 0x200282d
    ctx->pc = 0x1aaefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf00: 0xc041eac
    ctx->pc = 0x1AAF00u;
    SET_GPR_U32(ctx, 31, 0x1AAF08u);
    ctx->pc = 0x1AAF04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF08u; }
    }
    if (ctx->pc != 0x1AAF08u) { return; }
    ctx->pc = 0x1AAF08u;
    // 0x1aaf08: 0xc073470
    ctx->pc = 0x1AAF08u;
    SET_GPR_U32(ctx, 31, 0x1AAF10u);
    ctx->pc = 0x1AAF0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF10u; }
    }
    if (ctx->pc != 0x1AAF10u) { return; }
    ctx->pc = 0x1AAF10u;
    // 0x1aaf10: 0x3243007f
    ctx->pc = 0x1aaf10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 127));
    // 0x1aaf14: 0x28610002
    ctx->pc = 0x1aaf14u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 2));
    // 0x1aaf18: 0x10200005
    ctx->pc = 0x1AAF18u;
    {
        const bool branch_taken_0x1aaf18 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aaf18) {
            ctx->pc = 0x1AAF30u;
            goto label_1aaf30;
        }
    }
    ctx->pc = 0x1AAF20u;
    // 0x1aaf20: 0x1620000d
    ctx->pc = 0x1AAF20u;
    {
        const bool branch_taken_0x1aaf20 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aaf20) {
            ctx->pc = 0x1AAF58u;
            goto label_1aaf58;
        }
    }
    ctx->pc = 0x1AAF28u;
    // 0x1aaf28: 0x10000016
    ctx->pc = 0x1AAF28u;
    {
        const bool branch_taken_0x1aaf28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1aaf28) {
            ctx->pc = 0x1AAF84u;
            goto label_1aaf84;
        }
    }
    ctx->pc = 0x1AAF30u;
label_1aaf30:
    // 0x1aaf30: 0x8fa30194
    ctx->pc = 0x1aaf30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1aaf34: 0x10600012
    ctx->pc = 0x1AAF34u;
    {
        const bool branch_taken_0x1aaf34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF38u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x1aaf34) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAF3Cu;
    // 0x1aaf3c: 0x2c0282d
    ctx->pc = 0x1aaf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf40: 0x280402d
    ctx->pc = 0x1aaf40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf44: 0x2a0202d
    ctx->pc = 0x1aaf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf48: 0xc073d58
    ctx->pc = 0x1AAF48u;
    SET_GPR_U32(ctx, 31, 0x1AAF50u);
    ctx->pc = 0x1AAF4Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF50u; }
    }
    if (ctx->pc != 0x1AAF50u) { return; }
    ctx->pc = 0x1AAF50u;
    // 0x1aaf50: 0xc06372c
    ctx->pc = 0x1AAF50u;
    SET_GPR_U32(ctx, 31, 0x1AAF58u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF58u; }
    }
    if (ctx->pc != 0x1AAF58u) { return; }
    ctx->pc = 0x1AAF58u;
label_1aaf58:
    // 0x1aaf58: 0x12200009
    ctx->pc = 0x1AAF58u;
    {
        const bool branch_taken_0x1aaf58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF5Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x1aaf58) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAF60u;
    // 0x1aaf60: 0x14600007
    ctx->pc = 0x1AAF60u;
    {
        const bool branch_taken_0x1aaf60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aaf60) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAF68u;
    // 0x1aaf68: 0x8fa301a4
    ctx->pc = 0x1aaf68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1aaf6c: 0x10600004
    ctx->pc = 0x1AAF6Cu;
    {
        const bool branch_taken_0x1aaf6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF70u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x1aaf6c) {
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAF74u;
    // 0x1aaf74: 0x260202d
    ctx->pc = 0x1aaf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf78: 0xc0737f8
    ctx->pc = 0x1AAF78u;
    SET_GPR_U32(ctx, 31, 0x1AAF80u);
    ctx->pc = 0x1AAF7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CDFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDFE0_0x1cdfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF80u; }
    }
    if (ctx->pc != 0x1AAF80u) { return; }
    ctx->pc = 0x1AAF80u;
label_1aaf80:
    // 0x1aaf80: 0xdfbf0070
    ctx->pc = 0x1aaf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aaf84:
    // 0x1aaf84: 0x7bb60060
    ctx->pc = 0x1aaf84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aaf88: 0x7bb50050
    ctx->pc = 0x1aaf88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aaf8c: 0x7bb40040
    ctx->pc = 0x1aaf8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aaf90: 0x7bb30030
    ctx->pc = 0x1aaf90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaf94: 0x7bb20020
    ctx->pc = 0x1aaf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaf98: 0x7bb10010
    ctx->pc = 0x1aaf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf9c: 0x7bb00000
    ctx->pc = 0x1aaf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aafa0: 0x3e00008
    ctx->pc = 0x1AAFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAFA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AAF30u: goto label_1aaf30;
            case 0x1AAF58u: goto label_1aaf58;
            case 0x1AAF80u: goto label_1aaf80;
            case 0x1AAF84u: goto label_1aaf84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AAFA8u;
    // 0x1aafa8: 0x0
    ctx->pc = 0x1aafa8u;
    // NOP
    // 0x1aafac: 0x0
    ctx->pc = 0x1aafacu;
    // NOP
}
