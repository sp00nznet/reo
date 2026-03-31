#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180FE0
// Address: 0x180fe0 - 0x181060
void sub_00180FE0_0x180fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180fe0u;

    // 0x180fe0: 0x3c030023
    ctx->pc = 0x180fe0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x180fe4: 0x27bdfff0
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180fe8: 0x8c65fa10
    ctx->pc = 0x180fe8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x180fec: 0x3c028101
    ctx->pc = 0x180fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180ff0: 0xffb00000
    ctx->pc = 0x180ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180ff4: 0x80802d
    ctx->pc = 0x180ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ff8: 0xffbf0008
    ctx->pc = 0x180ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180ffc: 0x10a00013
    ctx->pc = 0x180FFCu;
    {
        const bool branch_taken_0x180ffc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x181000u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x180ffc) {
            ctx->pc = 0x18104Cu;
            goto label_18104c;
        }
    }
    ctx->pc = 0x181004u;
    // 0x181004: 0xc061e90
    ctx->pc = 0x181004u;
    SET_GPR_U32(ctx, 31, 0x18100Cu);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18100Cu; }
    }
    if (ctx->pc != 0x18100Cu) { return; }
    ctx->pc = 0x18100Cu;
    // 0x18100c: 0x3c030028
    ctx->pc = 0x18100cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x181010: 0x14400005
    ctx->pc = 0x181010u;
    {
        const bool branch_taken_0x181010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181014u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x181010) {
            ctx->pc = 0x181028u;
            goto label_181028;
        }
    }
    ctx->pc = 0x181018u;
    // 0x181018: 0x3c028101
    ctx->pc = 0x181018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18101c: 0x1000000b
    ctx->pc = 0x18101Cu;
    {
        const bool branch_taken_0x18101c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181020u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x18101c) {
            ctx->pc = 0x18104Cu;
            goto label_18104c;
        }
    }
    ctx->pc = 0x181024u;
    // 0x181024: 0x0
    ctx->pc = 0x181024u;
    // NOP
label_181028:
    // 0x181028: 0x8c830004
    ctx->pc = 0x181028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18102c: 0x3c028101
    ctx->pc = 0x18102cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181030: 0x14600006
    ctx->pc = 0x181030u;
    {
        const bool branch_taken_0x181030 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181034u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181030) {
            ctx->pc = 0x18104Cu;
            goto label_18104c;
        }
    }
    ctx->pc = 0x181038u;
    // 0x181038: 0x24020004
    ctx->pc = 0x181038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18103c: 0xac900000
    ctx->pc = 0x18103cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x181040: 0xc062228
    ctx->pc = 0x181040u;
    SET_GPR_U32(ctx, 31, 0x181048u);
    ctx->pc = 0x181044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181048u; }
    }
    if (ctx->pc != 0x181048u) { return; }
    ctx->pc = 0x181048u;
    // 0x181048: 0x102d
    ctx->pc = 0x181048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18104c:
    // 0x18104c: 0xdfb00000
    ctx->pc = 0x18104cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181050: 0xdfbf0008
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181054: 0x3e00008
    ctx->pc = 0x181054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181028u: goto label_181028;
            case 0x18104Cu: goto label_18104c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18105Cu;
    // 0x18105c: 0x0
    ctx->pc = 0x18105cu;
    // NOP
}
