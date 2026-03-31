#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187798
// Address: 0x187798 - 0x187838
void sub_00187798_0x187798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187798u;

    // 0x187798: 0x27bdffe0
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18779c: 0x3c020029
    ctx->pc = 0x18779cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1877a0: 0xffb10008
    ctx->pc = 0x1877a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1877a4: 0x2451d980
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x1877a8: 0xffb00000
    ctx->pc = 0x1877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1877ac: 0xffbf0010
    ctx->pc = 0x1877acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1877b0: 0xc062230
    ctx->pc = 0x1877B0u;
    SET_GPR_U32(ctx, 31, 0x1877B8u);
    ctx->pc = 0x1877B4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1888C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888C0_0x1888c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877B8u; }
    }
    if (ctx->pc != 0x1877B8u) { return; }
    ctx->pc = 0x1877B8u;
    // 0x1877b8: 0x220202d
    ctx->pc = 0x1877b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877bc: 0xc0453c6
    ctx->pc = 0x1877BCu;
    SET_GPR_U32(ctx, 31, 0x1877C4u);
    ctx->pc = 0x1877C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 127));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877C4u; }
    }
    if (ctx->pc != 0x1877C4u) { return; }
    ctx->pc = 0x1877C4u;
    // 0x1877c4: 0x200202d
    ctx->pc = 0x1877c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877c8: 0x8e230000
    ctx->pc = 0x1877c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1877cc: 0x1c600009
    ctx->pc = 0x1877CCu;
    {
        const bool branch_taken_0x1877cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1877D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1877cc) {
            ctx->pc = 0x1877F4u;
            goto label_1877f4;
        }
    }
    ctx->pc = 0x1877D4u;
    // 0x1877d4: 0xc0623b6
    ctx->pc = 0x1877D4u;
    SET_GPR_U32(ctx, 31, 0x1877DCu);
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877DCu; }
    }
    if (ctx->pc != 0x1877DCu) { return; }
    ctx->pc = 0x1877DCu;
    // 0x1877dc: 0x24030003
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1877e0: 0x14430003
    ctx->pc = 0x1877E0u;
    {
        const bool branch_taken_0x1877e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1877E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x1877e0) {
            ctx->pc = 0x1877F0u;
            goto label_1877f0;
        }
    }
    ctx->pc = 0x1877E8u;
    // 0x1877e8: 0x10000002
    ctx->pc = 0x1877E8u;
    {
        const bool branch_taken_0x1877e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1877ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1877e8) {
            ctx->pc = 0x1877F4u;
            goto label_1877f4;
        }
    }
    ctx->pc = 0x1877F0u;
label_1877f0:
    // 0x1877f0: 0x220102d
    ctx->pc = 0x1877f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1877f4:
    // 0x1877f4: 0xdfb00000
    ctx->pc = 0x1877f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1877f8: 0xdfb10008
    ctx->pc = 0x1877f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1877fc: 0xdfbf0010
    ctx->pc = 0x1877fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187800: 0x3e00008
    ctx->pc = 0x187800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1877F0u: goto label_1877f0;
            case 0x1877F4u: goto label_1877f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187808u;
    // 0x187808: 0x3c020029
    ctx->pc = 0x187808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x18780c: 0x27bdfff0
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187810: 0x8c44b8c4
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949060)));
    // 0x187814: 0xffbf0000
    ctx->pc = 0x187814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187818: 0xc045194
    ctx->pc = 0x187818u;
    SET_GPR_U32(ctx, 31, 0x187820u);
    ctx->pc = 0x114650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114650_0x114650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187820u; }
    }
    if (ctx->pc != 0x187820u) { return; }
    ctx->pc = 0x187820u;
    // 0x187820: 0xf
    ctx->pc = 0x187820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x187824: 0x42000038
    ctx->pc = 0x187824u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x187828: 0xdfbf0000
    ctx->pc = 0x187828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18782c: 0x3e00008
    ctx->pc = 0x18782Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1877F0u: goto label_1877f0;
            case 0x1877F4u: goto label_1877f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187834u;
    // 0x187834: 0x0
    ctx->pc = 0x187834u;
    // NOP
}
