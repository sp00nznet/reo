#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001814A8
// Address: 0x1814a8 - 0x181560
void sub_001814A8_0x1814a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1814a8u;

    // 0x1814a8: 0x3c030023
    ctx->pc = 0x1814a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1814ac: 0x27bdffe0
    ctx->pc = 0x1814acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1814b0: 0x8c66fa10
    ctx->pc = 0x1814b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x1814b4: 0x3c028101
    ctx->pc = 0x1814b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1814b8: 0xffb10008
    ctx->pc = 0x1814b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1814bc: 0xa0882d
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814c0: 0xffb20010
    ctx->pc = 0x1814c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1814c4: 0x80902d
    ctx->pc = 0x1814c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814c8: 0xffb00000
    ctx->pc = 0x1814c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1814cc: 0x34428001
    ctx->pc = 0x1814ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x1814d0: 0x10c0001c
    ctx->pc = 0x1814D0u;
    {
        const bool branch_taken_0x1814d0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1814D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x1814d0) {
            ctx->pc = 0x181544u;
            goto label_181544;
        }
    }
    ctx->pc = 0x1814D8u;
    // 0x1814d8: 0xc061e90
    ctx->pc = 0x1814D8u;
    SET_GPR_U32(ctx, 31, 0x1814E0u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814E0u; }
    }
    if (ctx->pc != 0x1814E0u) { return; }
    ctx->pc = 0x1814E0u;
    // 0x1814e0: 0x3c030028
    ctx->pc = 0x1814e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1814e4: 0x14400004
    ctx->pc = 0x1814E4u;
    {
        const bool branch_taken_0x1814e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1814E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x1814e4) {
            ctx->pc = 0x1814F8u;
            goto label_1814f8;
        }
    }
    ctx->pc = 0x1814ECu;
    // 0x1814ec: 0x3c028101
    ctx->pc = 0x1814ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1814f0: 0x10000014
    ctx->pc = 0x1814F0u;
    {
        const bool branch_taken_0x1814f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1814F4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x1814f0) {
            ctx->pc = 0x181544u;
            goto label_181544;
        }
    }
    ctx->pc = 0x1814F8u;
label_1814f8:
    // 0x1814f8: 0x8e030004
    ctx->pc = 0x1814f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1814fc: 0x3c028101
    ctx->pc = 0x1814fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181500: 0x14600010
    ctx->pc = 0x181500u;
    {
        const bool branch_taken_0x181500 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181504u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181500) {
            ctx->pc = 0x181544u;
            goto label_181544;
        }
    }
    ctx->pc = 0x181508u;
    // 0x181508: 0xc042c56
    ctx->pc = 0x181508u;
    SET_GPR_U32(ctx, 31, 0x181510u);
    ctx->pc = 0x18150Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181510u; }
    }
    if (ctx->pc != 0x181510u) { return; }
    ctx->pc = 0x181510u;
    // 0x181510: 0x2604041c
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x181514: 0x2c430080
    ctx->pc = 0x181514u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181518: 0x3c028101
    ctx->pc = 0x181518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18151c: 0x220282d
    ctx->pc = 0x18151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181520: 0x10600008
    ctx->pc = 0x181520u;
    {
        const bool branch_taken_0x181520 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x181524u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181520) {
            ctx->pc = 0x181544u;
            goto label_181544;
        }
    }
    ctx->pc = 0x181528u;
    // 0x181528: 0x24020008
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x18152c: 0xae120000
    ctx->pc = 0x18152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181530: 0xc042bf0
    ctx->pc = 0x181530u;
    SET_GPR_U32(ctx, 31, 0x181538u);
    ctx->pc = 0x181534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181538u; }
    }
    if (ctx->pc != 0x181538u) { return; }
    ctx->pc = 0x181538u;
    // 0x181538: 0xc062228
    ctx->pc = 0x181538u;
    SET_GPR_U32(ctx, 31, 0x181540u);
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181540u; }
    }
    if (ctx->pc != 0x181540u) { return; }
    ctx->pc = 0x181540u;
    // 0x181540: 0x102d
    ctx->pc = 0x181540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181544:
    // 0x181544: 0xdfb00000
    ctx->pc = 0x181544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181548: 0xdfb10008
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18154c: 0xdfb20010
    ctx->pc = 0x18154cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181550: 0xdfbf0018
    ctx->pc = 0x181550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181554: 0x3e00008
    ctx->pc = 0x181554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1814F8u: goto label_1814f8;
            case 0x181544u: goto label_181544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18155Cu;
    // 0x18155c: 0x0
    ctx->pc = 0x18155cu;
    // NOP
}
