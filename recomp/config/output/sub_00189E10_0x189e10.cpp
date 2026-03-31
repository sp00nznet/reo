#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189E10
// Address: 0x189e10 - 0x189ed0
void sub_00189E10_0x189e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189e10u;

    // 0x189e10: 0x27bdffd0
    ctx->pc = 0x189e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189e14: 0xffbf0020
    ctx->pc = 0x189e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189e18: 0x7fb10010
    ctx->pc = 0x189e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189e1c: 0x7fb00000
    ctx->pc = 0x189e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189e20: 0x80882d
    ctx->pc = 0x189e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e24: 0xc066320
    ctx->pc = 0x189E24u;
    SET_GPR_U32(ctx, 31, 0x189E2Cu);
    ctx->pc = 0x189E28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198C80_0x198c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E2Cu; }
    }
    if (ctx->pc != 0x189E2Cu) { return; }
    ctx->pc = 0x189E2Cu;
    // 0x189e2c: 0x8e230048
    ctx->pc = 0x189e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x189e30: 0x2402ffff
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189e34: 0x10620017
    ctx->pc = 0x189E34u;
    {
        const bool branch_taken_0x189e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x189E38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189e34) {
            ctx->pc = 0x189E94u;
            goto label_189e94;
        }
    }
    ctx->pc = 0x189E3Cu;
    // 0x189e3c: 0x200202d
    ctx->pc = 0x189e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e40: 0x220282d
    ctx->pc = 0x189e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e44: 0xc0627d0
    ctx->pc = 0x189E44u;
    SET_GPR_U32(ctx, 31, 0x189E4Cu);
    ctx->pc = 0x189E48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F40_0x189f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E4Cu; }
    }
    if (ctx->pc != 0x189E4Cu) { return; }
    ctx->pc = 0x189E4Cu;
    // 0x189e4c: 0x200202d
    ctx->pc = 0x189e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e50: 0xc062898
    ctx->pc = 0x189E50u;
    SET_GPR_U32(ctx, 31, 0x189E58u);
    ctx->pc = 0x189E54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18A260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A260_0x18a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E58u; }
    }
    if (ctx->pc != 0x189E58u) { return; }
    ctx->pc = 0x189E58u;
    // 0x189e58: 0x220202d
    ctx->pc = 0x189e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e5c: 0xc062fd0
    ctx->pc = 0x189E5Cu;
    SET_GPR_U32(ctx, 31, 0x189E64u);
    ctx->pc = 0x189E60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BF40_0x18bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E64u; }
    }
    if (ctx->pc != 0x189E64u) { return; }
    ctx->pc = 0x189E64u;
    // 0x189e64: 0xc063728
    ctx->pc = 0x189E64u;
    SET_GPR_U32(ctx, 31, 0x189E6Cu);
    ctx->pc = 0x189E68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E6Cu; }
    }
    if (ctx->pc != 0x189E6Cu) { return; }
    ctx->pc = 0x189E6Cu;
    // 0x189e6c: 0x8e260024
    ctx->pc = 0x189e6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x189e70: 0x220202d
    ctx->pc = 0x189e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e74: 0x8e23004c
    ctx->pc = 0x189e74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x189e78: 0x8e250034
    ctx->pc = 0x189e78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x189e7c: 0xc23821
    ctx->pc = 0x189e7cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x189e80: 0x8c660014
    ctx->pc = 0x189e80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x189e84: 0xc062cec
    ctx->pc = 0x189E84u;
    SET_GPR_U32(ctx, 31, 0x189E8Cu);
    ctx->pc = 0x189E88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x18B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B3B0_0x18b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E8Cu; }
    }
    if (ctx->pc != 0x189E8Cu) { return; }
    ctx->pc = 0x189E8Cu;
    // 0x189e8c: 0x10000003
    ctx->pc = 0x189E8Cu;
    {
        const bool branch_taken_0x189e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189E90u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x189e8c) {
            ctx->pc = 0x189E9Cu;
            goto label_189e9c;
        }
    }
    ctx->pc = 0x189E94u;
label_189e94:
    // 0x189e94: 0x10000007
    ctx->pc = 0x189E94u;
    {
        const bool branch_taken_0x189e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189E98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x189e94) {
            ctx->pc = 0x189EB4u;
            goto label_189eb4;
        }
    }
    ctx->pc = 0x189E9Cu;
label_189e9c:
    // 0x189e9c: 0x24020001
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189ea0: 0x8c234198
    ctx->pc = 0x189ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16792)));
    // 0x189ea4: 0x24630001
    ctx->pc = 0x189ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x189ea8: 0x3c010029
    ctx->pc = 0x189ea8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x189eac: 0xac234198
    ctx->pc = 0x189eacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16792), GPR_U32(ctx, 3));
    // 0x189eb0: 0xdfbf0020
    ctx->pc = 0x189eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_189eb4:
    // 0x189eb4: 0x7bb10010
    ctx->pc = 0x189eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189eb8: 0x7bb00000
    ctx->pc = 0x189eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ebc: 0x3e00008
    ctx->pc = 0x189EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189E94u: goto label_189e94;
            case 0x189E9Cu: goto label_189e9c;
            case 0x189EB4u: goto label_189eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189EC4u;
    // 0x189ec4: 0x0
    ctx->pc = 0x189ec4u;
    // NOP
    // 0x189ec8: 0x0
    ctx->pc = 0x189ec8u;
    // NOP
    // 0x189ecc: 0x0
    ctx->pc = 0x189eccu;
    // NOP
}
