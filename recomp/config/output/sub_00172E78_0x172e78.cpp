#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172E78
// Address: 0x172e78 - 0x172f58
void sub_00172E78_0x172e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172e78u;

    // 0x172e78: 0x27bdffd0
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172e7c: 0xffb10018
    ctx->pc = 0x172e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x172e80: 0xffb00010
    ctx->pc = 0x172e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172e84: 0xffbf0020
    ctx->pc = 0x172e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172e88: 0xc05cbd6
    ctx->pc = 0x172E88u;
    SET_GPR_U32(ctx, 31, 0x172E90u);
    ctx->pc = 0x172E8Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172F58_0x172f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E90u; }
    }
    if (ctx->pc != 0x172E90u) { return; }
    ctx->pc = 0x172E90u;
    // 0x172e90: 0x220202d
    ctx->pc = 0x172e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e94: 0x14400014
    ctx->pc = 0x172E94u;
    {
        const bool branch_taken_0x172e94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172E98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x172e94) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172E9Cu;
    // 0x172e9c: 0xc05d58a
    ctx->pc = 0x172E9Cu;
    SET_GPR_U32(ctx, 31, 0x172EA4u);
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EA4u; }
    }
    if (ctx->pc != 0x172EA4u) { return; }
    ctx->pc = 0x172EA4u;
    // 0x172ea4: 0x24030001
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172ea8: 0x14430005
    ctx->pc = 0x172EA8u;
    {
        const bool branch_taken_0x172ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x172EACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172ea8) {
            ctx->pc = 0x172EC0u;
            goto label_172ec0;
        }
    }
    ctx->pc = 0x172EB0u;
    // 0x172eb0: 0xc05cbfe
    ctx->pc = 0x172EB0u;
    SET_GPR_U32(ctx, 31, 0x172EB8u);
    ctx->pc = 0x172FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172FF8_0x172ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EB8u; }
    }
    if (ctx->pc != 0x172EB8u) { return; }
    ctx->pc = 0x172EB8u;
    // 0x172eb8: 0x14400022
    ctx->pc = 0x172EB8u;
    {
        const bool branch_taken_0x172eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172EBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172eb8) {
            ctx->pc = 0x172F44u;
            goto label_172f44;
        }
    }
    ctx->pc = 0x172EC0u;
label_172ec0:
    // 0x172ec0: 0x220202d
    ctx->pc = 0x172ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ec4: 0xc05d58a
    ctx->pc = 0x172EC4u;
    SET_GPR_U32(ctx, 31, 0x172ECCu);
    ctx->pc = 0x172EC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172ECCu; }
    }
    if (ctx->pc != 0x172ECCu) { return; }
    ctx->pc = 0x172ECCu;
    // 0x172ecc: 0x24030001
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172ed0: 0x14430007
    ctx->pc = 0x172ED0u;
    {
        const bool branch_taken_0x172ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x172ED4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172ed0) {
            ctx->pc = 0x172EF0u;
            goto label_172ef0;
        }
    }
    ctx->pc = 0x172ED8u;
    // 0x172ed8: 0xc05cc2c
    ctx->pc = 0x172ED8u;
    SET_GPR_U32(ctx, 31, 0x172EE0u);
    ctx->pc = 0x1730B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001730B0_0x1730b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EE0u; }
    }
    if (ctx->pc != 0x172EE0u) { return; }
    ctx->pc = 0x172EE0u;
    // 0x172ee0: 0x50400004
    ctx->pc = 0x172EE0u;
    {
        const bool branch_taken_0x172ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172ee0) {
            ctx->pc = 0x172EE4u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172EF4u;
            goto label_172ef4;
        }
    }
    ctx->pc = 0x172EE8u;
label_172ee8:
    // 0x172ee8: 0x10000016
    ctx->pc = 0x172EE8u;
    {
        const bool branch_taken_0x172ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172EECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172ee8) {
            ctx->pc = 0x172F44u;
            goto label_172f44;
        }
    }
    ctx->pc = 0x172EF0u;
label_172ef0:
    // 0x172ef0: 0x3a0282d
    ctx->pc = 0x172ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172ef4:
    // 0x172ef4: 0x27a60004
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x172ef8: 0xc05d8d4
    ctx->pc = 0x172EF8u;
    SET_GPR_U32(ctx, 31, 0x172F00u);
    ctx->pc = 0x172EFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176350_0x176350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F00u; }
    }
    if (ctx->pc != 0x172F00u) { return; }
    ctx->pc = 0x172F00u;
    // 0x172f00: 0x26230cc0
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 3264));
    // 0x172f04: 0x8c700244
    ctx->pc = 0x172f04u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x172f08: 0x220202d
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f0c: 0x24050045
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 69));
    // 0x172f10: 0xc05d58a
    ctx->pc = 0x172F10u;
    SET_GPR_U32(ctx, 31, 0x172F18u);
    ctx->pc = 0x172F14u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 576)));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F18u; }
    }
    if (ctx->pc != 0x172F18u) { return; }
    ctx->pc = 0x172F18u;
    // 0x172f18: 0x200282d
    ctx->pc = 0x172f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f1c: 0x3c06000f
    ctx->pc = 0x172f1cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)15 << 16));
    // 0x172f20: 0x40202d
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f24: 0xc056ea0
    ctx->pc = 0x172F24u;
    SET_GPR_U32(ctx, 31, 0x172F2Cu);
    ctx->pc = 0x172F28u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16960));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F2Cu; }
    }
    if (ctx->pc != 0x172F2Cu) { return; }
    ctx->pc = 0x172F2Cu;
    // 0x172f2c: 0x200382d
    ctx->pc = 0x172f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f30: 0x8fa40000
    ctx->pc = 0x172f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172f34: 0x2223023
    ctx->pc = 0x172f34u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x172f38: 0xc05d9de
    ctx->pc = 0x172F38u;
    SET_GPR_U32(ctx, 31, 0x172F40u);
    ctx->pc = 0x172F3Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x176778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176778_0x176778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F40u; }
    }
    if (ctx->pc != 0x172F40u) { return; }
    ctx->pc = 0x172F40u;
    // 0x172f40: 0x2102b
    ctx->pc = 0x172f40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_172f44:
    // 0x172f44: 0xdfb00010
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172f48: 0xdfb10018
    ctx->pc = 0x172f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172f4c: 0xdfbf0020
    ctx->pc = 0x172f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172f50: 0x3e00008
    ctx->pc = 0x172F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172EC0u: goto label_172ec0;
            case 0x172EE8u: goto label_172ee8;
            case 0x172EF0u: goto label_172ef0;
            case 0x172EF4u: goto label_172ef4;
            case 0x172F44u: goto label_172f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172F58u;
}
