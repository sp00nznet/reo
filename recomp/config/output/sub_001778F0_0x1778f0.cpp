#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001778F0
// Address: 0x1778f0 - 0x177990
void sub_001778F0_0x1778f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1778f0u;

    // 0x1778f0: 0x27bdffe0
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1778f4: 0x24060002
    ctx->pc = 0x1778f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1778f8: 0xffb00000
    ctx->pc = 0x1778f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1778fc: 0xa0802d
    ctx->pc = 0x1778fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177900: 0xffb10008
    ctx->pc = 0x177900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177904: 0x80882d
    ctx->pc = 0x177904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177908: 0xffbf0010
    ctx->pc = 0x177908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17790c: 0xc05dec4
    ctx->pc = 0x17790Cu;
    SET_GPR_U32(ctx, 31, 0x177914u);
    ctx->pc = 0x177910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B10_0x177b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177914u; }
    }
    if (ctx->pc != 0x177914u) { return; }
    ctx->pc = 0x177914u;
    // 0x177914: 0x220202d
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177918: 0x24050002
    ctx->pc = 0x177918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17791c: 0xc05de94
    ctx->pc = 0x17791Cu;
    SET_GPR_U32(ctx, 31, 0x177924u);
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x177A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A50_0x177a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177924u; }
    }
    if (ctx->pc != 0x177924u) { return; }
    ctx->pc = 0x177924u;
    // 0x177924: 0x220202d
    ctx->pc = 0x177924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177928: 0x8e020010
    ctx->pc = 0x177928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17792c: 0x24050003
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x177930: 0x1040000f
    ctx->pc = 0x177930u;
    {
        const bool branch_taken_0x177930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177934u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x177930) {
            ctx->pc = 0x177970u;
            goto label_177970;
        }
    }
    ctx->pc = 0x177938u;
    // 0x177938: 0xc05dec4
    ctx->pc = 0x177938u;
    SET_GPR_U32(ctx, 31, 0x177940u);
    ctx->pc = 0x177B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B10_0x177b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177940u; }
    }
    if (ctx->pc != 0x177940u) { return; }
    ctx->pc = 0x177940u;
    // 0x177940: 0x220202d
    ctx->pc = 0x177940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177944: 0x24050004
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x177948: 0xc05de94
    ctx->pc = 0x177948u;
    SET_GPR_U32(ctx, 31, 0x177950u);
    ctx->pc = 0x17794Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x177A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A50_0x177a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177950u; }
    }
    if (ctx->pc != 0x177950u) { return; }
    ctx->pc = 0x177950u;
    // 0x177950: 0x220202d
    ctx->pc = 0x177950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177954: 0xdfb00000
    ctx->pc = 0x177954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177958: 0x24050005
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x17795c: 0xdfb10008
    ctx->pc = 0x17795cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177960: 0x24060006
    ctx->pc = 0x177960u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x177964: 0xdfbf0010
    ctx->pc = 0x177964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177968: 0x805dec4
    ctx->pc = 0x177968u;
    ctx->pc = 0x17796Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177B10u;
    sub_00177B10_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177970u;
label_177970:
    // 0x177970: 0xdfb10008
    ctx->pc = 0x177970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177974: 0xdfb00000
    ctx->pc = 0x177974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177978: 0x24050003
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17797c: 0xdfbf0010
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177980: 0x24060006
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x177984: 0x805dec4
    ctx->pc = 0x177984u;
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177B10u;
    sub_00177B10_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x17798Cu;
    // 0x17798c: 0x0
    ctx->pc = 0x17798cu;
    // NOP
}
