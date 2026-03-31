#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00100CE0
// Address: 0x100ce0 - 0x100d78
void sub_00100CE0_0x100ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x100ce0u;

    // 0x100ce0: 0x27bdffd0
    ctx->pc = 0x100ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100ce4: 0x24040002
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x100ce8: 0xffbf0020
    ctx->pc = 0x100ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100cec: 0xc0402dc
    ctx->pc = 0x100CECu;
    SET_GPR_U32(ctx, 31, 0x100CF4u);
    ctx->pc = 0x100CF0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x100B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100B70_0x100b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CF4u; }
    }
    if (ctx->pc != 0x100CF4u) { return; }
    ctx->pc = 0x100CF4u;
    // 0x100cf4: 0x14400003
    ctx->pc = 0x100CF4u;
    {
        const bool branch_taken_0x100cf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x100CF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x100cf4) {
            ctx->pc = 0x100D04u;
            goto label_100d04;
        }
    }
    ctx->pc = 0x100CFCu;
    // 0x100cfc: 0x1000001a
    ctx->pc = 0x100CFCu;
    {
        const bool branch_taken_0x100cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x100D00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x100cfc) {
            ctx->pc = 0x100D68u;
            goto label_100d68;
        }
    }
    ctx->pc = 0x100D04u;
label_100d04:
    // 0x100d04: 0x3c040021
    ctx->pc = 0x100d04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x100d08: 0x24507980
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 31104));
    // 0x100d0c: 0x24848ad0
    ctx->pc = 0x100d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937296));
    // 0x100d10: 0xafa00000
    ctx->pc = 0x100d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x100d14: 0x2405000e
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x100d18: 0x302d
    ctx->pc = 0x100d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d1c: 0x382d
    ctx->pc = 0x100d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d20: 0x402d
    ctx->pc = 0x100d20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d24: 0x200482d
    ctx->pc = 0x100d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d28: 0x240a0004
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x100d2c: 0xc045e7a
    ctx->pc = 0x100D2Cu;
    SET_GPR_U32(ctx, 31, 0x100D34u);
    ctx->pc = 0x100D30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D34u; }
    }
    if (ctx->pc != 0x100D34u) { return; }
    ctx->pc = 0x100D34u;
    // 0x100d34: 0x4410006
    ctx->pc = 0x100D34u;
    {
        const bool branch_taken_0x100d34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100D38u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x100d34) {
            ctx->pc = 0x100D50u;
            goto label_100d50;
        }
    }
    ctx->pc = 0x100D3Cu;
    // 0x100d3c: 0x3c020020
    ctx->pc = 0x100d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x100d40: 0xc045190
    ctx->pc = 0x100D40u;
    SET_GPR_U32(ctx, 31, 0x100D48u);
    ctx->pc = 0x100D44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31016)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D48u; }
    }
    if (ctx->pc != 0x100D48u) { return; }
    ctx->pc = 0x100D48u;
    // 0x100d48: 0x10000007
    ctx->pc = 0x100D48u;
    {
        const bool branch_taken_0x100d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x100D4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x100d48) {
            ctx->pc = 0x100D68u;
            goto label_100d68;
        }
    }
    ctx->pc = 0x100D50u;
label_100d50:
    // 0x100d50: 0x3c022000
    ctx->pc = 0x100d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x100d54: 0x2021025
    ctx->pc = 0x100d54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x100d58: 0x8c647928
    ctx->pc = 0x100d58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 31016)));
    // 0x100d5c: 0xc045190
    ctx->pc = 0x100D5Cu;
    SET_GPR_U32(ctx, 31, 0x100D64u);
    ctx->pc = 0x100D60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D64u; }
    }
    if (ctx->pc != 0x100D64u) { return; }
    ctx->pc = 0x100D64u;
    // 0x100d64: 0x200102d
    ctx->pc = 0x100d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100d68:
    // 0x100d68: 0xdfbf0020
    ctx->pc = 0x100d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100d6c: 0xdfb00010
    ctx->pc = 0x100d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100d70: 0x3e00008
    ctx->pc = 0x100D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100D04u: goto label_100d04;
            case 0x100D50u: goto label_100d50;
            case 0x100D68u: goto label_100d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100D78u;
}
