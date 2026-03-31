#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F9D0
// Address: 0x15f9d0 - 0x15fa50
void sub_0015F9D0_0x15f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f9d0u;

    // 0x15f9d0: 0x27bdfff0
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f9d4: 0xffb00000
    ctx->pc = 0x15f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f9d8: 0xffbf0008
    ctx->pc = 0x15f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15f9dc: 0xc040c18
    ctx->pc = 0x15F9DCu;
    SET_GPR_U32(ctx, 31, 0x15F9E4u);
    ctx->pc = 0x103060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103060_0x103060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9E4u; }
    }
    if (ctx->pc != 0x15F9E4u) { return; }
    ctx->pc = 0x15F9E4u;
    // 0x15f9e4: 0x40802d
    ctx->pc = 0x15f9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9e8: 0x200202d
    ctx->pc = 0x15f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9ec: 0x0
    ctx->pc = 0x15f9ecu;
    // NOP
label_15f9f0:
    // 0x15f9f0: 0x24050001
    ctx->pc = 0x15f9f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f9f4: 0xc040d8c
    ctx->pc = 0x15F9F4u;
    SET_GPR_U32(ctx, 31, 0x15F9FCu);
    ctx->pc = 0x15F9F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x103630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103630_0x103630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9FCu; }
    }
    if (ctx->pc != 0x15F9FCu) { return; }
    ctx->pc = 0x15F9FCu;
    // 0x15f9fc: 0x1440fffc
    ctx->pc = 0x15F9FCu;
    {
        const bool branch_taken_0x15f9fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FA00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f9fc) {
            ctx->pc = 0x15F9F0u;
            goto label_15f9f0;
        }
    }
    ctx->pc = 0x15FA04u;
    // 0x15fa04: 0xdfb00000
    ctx->pc = 0x15fa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fa08: 0xdfbf0008
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fa0c: 0x3e00008
    ctx->pc = 0x15FA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FA10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F9F0u: goto label_15f9f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FA14u;
    // 0x15fa14: 0x0
    ctx->pc = 0x15fa14u;
    // NOP
    // 0x15fa18: 0x27bdfff0
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fa1c: 0xffb00000
    ctx->pc = 0x15fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fa20: 0xffbf0008
    ctx->pc = 0x15fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15fa24: 0xc040c18
    ctx->pc = 0x15FA24u;
    SET_GPR_U32(ctx, 31, 0x15FA2Cu);
    ctx->pc = 0x15FA28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103060_0x103060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA2Cu; }
    }
    if (ctx->pc != 0x15FA2Cu) { return; }
    ctx->pc = 0x15FA2Cu;
    // 0x15fa2c: 0x40202d
    ctx->pc = 0x15fa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa30: 0x24050001
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fa34: 0xc040d8c
    ctx->pc = 0x15FA34u;
    SET_GPR_U32(ctx, 31, 0x15FA3Cu);
    ctx->pc = 0x15FA38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x103630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103630_0x103630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA3Cu; }
    }
    if (ctx->pc != 0x15FA3Cu) { return; }
    ctx->pc = 0x15FA3Cu;
    // 0x15fa3c: 0xae020000
    ctx->pc = 0x15fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15fa40: 0xdfbf0008
    ctx->pc = 0x15fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fa44: 0xdfb00000
    ctx->pc = 0x15fa44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fa48: 0x3e00008
    ctx->pc = 0x15FA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FA4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F9F0u: goto label_15f9f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FA50u;
}
