#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C940
// Address: 0x17c940 - 0x17c9a8
void sub_0017C940_0x17c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c940u;

    // 0x17c940: 0x27bdffe0
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c944: 0xffb00000
    ctx->pc = 0x17c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c948: 0x80802d
    ctx->pc = 0x17c948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c94c: 0xffb10008
    ctx->pc = 0x17c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c950: 0xa0882d
    ctx->pc = 0x17c950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c954: 0xffbf0010
    ctx->pc = 0x17c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c958: 0xc05f8da
    ctx->pc = 0x17C958u;
    SET_GPR_U32(ctx, 31, 0x17C960u);
    ctx->pc = 0x17C95Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x17E368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E368_0x17e368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C960u; }
    }
    if (ctx->pc != 0x17C960u) { return; }
    ctx->pc = 0x17C960u;
    // 0x17c960: 0x3c060024
    ctx->pc = 0x17c960u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17c964: 0x24030001
    ctx->pc = 0x17c964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c968: 0x200202d
    ctx->pc = 0x17c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c96c: 0x220282d
    ctx->pc = 0x17c96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c970: 0x10430007
    ctx->pc = 0x17C970u;
    {
        const bool branch_taken_0x17c970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17C974u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4808));
        if (branch_taken_0x17c970) {
            ctx->pc = 0x17C990u;
            goto label_17c990;
        }
    }
    ctx->pc = 0x17C978u;
    // 0x17c978: 0xdfb00000
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c97c: 0xdfb10008
    ctx->pc = 0x17c97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c980: 0xdfbf0010
    ctx->pc = 0x17c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c984: 0x805f472
    ctx->pc = 0x17C984u;
    ctx->pc = 0x17C988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C98Cu;
    // 0x17c98c: 0x0
    ctx->pc = 0x17c98cu;
    // NOP
label_17c990:
    // 0x17c990: 0xdfb00000
    ctx->pc = 0x17c990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c994: 0x220282d
    ctx->pc = 0x17c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c998: 0xdfb10008
    ctx->pc = 0x17c998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c99c: 0xdfbf0010
    ctx->pc = 0x17c99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9a0: 0x805f1f0
    ctx->pc = 0x17C9A0u;
    ctx->pc = 0x17C9A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C7C0u;
    entry_17c7c0_0x17c7e0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C9A8u;
}
