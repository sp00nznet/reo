#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181060
// Address: 0x181060 - 0x1810f0
void sub_00181060_0x181060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181060u;

    // 0x181060: 0x3c030023
    ctx->pc = 0x181060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x181064: 0x27bdffe0
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181068: 0x8c66fa10
    ctx->pc = 0x181068u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x18106c: 0x3c028101
    ctx->pc = 0x18106cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181070: 0xffb00000
    ctx->pc = 0x181070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181074: 0x80802d
    ctx->pc = 0x181074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181078: 0xffb10008
    ctx->pc = 0x181078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18107c: 0xa0882d
    ctx->pc = 0x18107cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181080: 0xffbf0010
    ctx->pc = 0x181080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181084: 0x10c00014
    ctx->pc = 0x181084u;
    {
        const bool branch_taken_0x181084 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x181088u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x181084) {
            ctx->pc = 0x1810D8u;
            goto label_1810d8;
        }
    }
    ctx->pc = 0x18108Cu;
    // 0x18108c: 0xc061e90
    ctx->pc = 0x18108Cu;
    SET_GPR_U32(ctx, 31, 0x181094u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181094u; }
    }
    if (ctx->pc != 0x181094u) { return; }
    ctx->pc = 0x181094u;
    // 0x181094: 0x3c030028
    ctx->pc = 0x181094u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x181098: 0x14400005
    ctx->pc = 0x181098u;
    {
        const bool branch_taken_0x181098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18109Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x181098) {
            ctx->pc = 0x1810B0u;
            goto label_1810b0;
        }
    }
    ctx->pc = 0x1810A0u;
    // 0x1810a0: 0x3c028101
    ctx->pc = 0x1810a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1810a4: 0x1000000c
    ctx->pc = 0x1810A4u;
    {
        const bool branch_taken_0x1810a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1810A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x1810a4) {
            ctx->pc = 0x1810D8u;
            goto label_1810d8;
        }
    }
    ctx->pc = 0x1810ACu;
    // 0x1810ac: 0x0
    ctx->pc = 0x1810acu;
    // NOP
label_1810b0:
    // 0x1810b0: 0x8c830004
    ctx->pc = 0x1810b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1810b4: 0x3c028101
    ctx->pc = 0x1810b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1810b8: 0x14600007
    ctx->pc = 0x1810B8u;
    {
        const bool branch_taken_0x1810b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1810BCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1810b8) {
            ctx->pc = 0x1810D8u;
            goto label_1810d8;
        }
    }
    ctx->pc = 0x1810C0u;
    // 0x1810c0: 0x24020002
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1810c4: 0xac91000c
    ctx->pc = 0x1810c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x1810c8: 0xac900000
    ctx->pc = 0x1810c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1810cc: 0xc062228
    ctx->pc = 0x1810CCu;
    SET_GPR_U32(ctx, 31, 0x1810D4u);
    ctx->pc = 0x1810D0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1810D4u; }
    }
    if (ctx->pc != 0x1810D4u) { return; }
    ctx->pc = 0x1810D4u;
    // 0x1810d4: 0x102d
    ctx->pc = 0x1810d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1810d8:
    // 0x1810d8: 0xdfb00000
    ctx->pc = 0x1810d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810dc: 0xdfb10008
    ctx->pc = 0x1810dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1810e0: 0xdfbf0010
    ctx->pc = 0x1810e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1810e4: 0x3e00008
    ctx->pc = 0x1810E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1810B0u: goto label_1810b0;
            case 0x1810D8u: goto label_1810d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1810ECu;
    // 0x1810ec: 0x0
    ctx->pc = 0x1810ecu;
    // NOP
}
