#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C9A8
// Address: 0x17c9a8 - 0x17ca10
void sub_0017C9A8_0x17c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c9a8u;

    // 0x17c9a8: 0x27bdffe0
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c9ac: 0xffb00000
    ctx->pc = 0x17c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c9b0: 0x80802d
    ctx->pc = 0x17c9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9b4: 0xffb10008
    ctx->pc = 0x17c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c9b8: 0xa0882d
    ctx->pc = 0x17c9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9bc: 0xffbf0010
    ctx->pc = 0x17c9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c9c0: 0xc05f8da
    ctx->pc = 0x17C9C0u;
    SET_GPR_U32(ctx, 31, 0x17C9C8u);
    ctx->pc = 0x17C9C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x17E368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E368_0x17e368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C9C8u; }
    }
    if (ctx->pc != 0x17C9C8u) { return; }
    ctx->pc = 0x17C9C8u;
    // 0x17c9c8: 0x3c060024
    ctx->pc = 0x17c9c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17c9cc: 0x24030001
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c9d0: 0x200202d
    ctx->pc = 0x17c9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9d4: 0x220282d
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9d8: 0x10430007
    ctx->pc = 0x17C9D8u;
    {
        const bool branch_taken_0x17c9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17C9DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4856));
        if (branch_taken_0x17c9d8) {
            ctx->pc = 0x17C9F8u;
            goto label_17c9f8;
        }
    }
    ctx->pc = 0x17C9E0u;
    // 0x17c9e0: 0xdfb00000
    ctx->pc = 0x17c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9e4: 0xdfb10008
    ctx->pc = 0x17c9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c9e8: 0xdfbf0010
    ctx->pc = 0x17c9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9ec: 0x805f472
    ctx->pc = 0x17C9ECu;
    ctx->pc = 0x17C9F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C9F4u;
    // 0x17c9f4: 0x0
    ctx->pc = 0x17c9f4u;
    // NOP
label_17c9f8:
    // 0x17c9f8: 0xdfb00000
    ctx->pc = 0x17c9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9fc: 0x220282d
    ctx->pc = 0x17c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca00: 0xdfb10008
    ctx->pc = 0x17ca00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ca04: 0xdfbf0010
    ctx->pc = 0x17ca04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca08: 0x805f1f8
    ctx->pc = 0x17CA08u;
    ctx->pc = 0x17CA0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17C7E0u;
    entry_17c7e0_0x17c800(rdram, ctx, runtime); return;
    ctx->pc = 0x17CA10u;
}
