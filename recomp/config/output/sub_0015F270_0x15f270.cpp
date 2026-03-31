#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F270
// Address: 0x15f270 - 0x15f2f0
void sub_0015F270_0x15f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f270u;

    // 0x15f270: 0x27bdffe0
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f274: 0xffb00000
    ctx->pc = 0x15f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f278: 0x80802d
    ctx->pc = 0x15f278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f27c: 0xffb10008
    ctx->pc = 0x15f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f280: 0xffbf0010
    ctx->pc = 0x15f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15f284: 0xc057ff0
    ctx->pc = 0x15F284u;
    SET_GPR_U32(ctx, 31, 0x15F28Cu);
    ctx->pc = 0x15F288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F28Cu; }
    }
    if (ctx->pc != 0x15F28Cu) { return; }
    ctx->pc = 0x15F28Cu;
    // 0x15f28c: 0x14400008
    ctx->pc = 0x15F28Cu;
    {
        const bool branch_taken_0x15f28c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F290u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f28c) {
            ctx->pc = 0x15F2B0u;
            goto label_15f2b0;
        }
    }
    ctx->pc = 0x15F294u;
    // 0x15f294: 0x3c040024
    ctx->pc = 0x15f294u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15f298: 0xdfb00000
    ctx->pc = 0x15f298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f29c: 0xdfb10008
    ctx->pc = 0x15f29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f2a0: 0x2484f150
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x15f2a4: 0xdfbf0010
    ctx->pc = 0x15f2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f2a8: 0x8058dd4
    ctx->pc = 0x15F2A8u;
    ctx->pc = 0x15F2ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15F2B0u;
label_15f2b0:
    // 0x15f2b0: 0xc057cbc
    ctx->pc = 0x15F2B0u;
    SET_GPR_U32(ctx, 31, 0x15F2B8u);
    ctx->pc = 0x15F2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F2F0_0x15f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2B8u; }
    }
    if (ctx->pc != 0x15F2B8u) { return; }
    ctx->pc = 0x15F2B8u;
    // 0x15f2b8: 0x24020002
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f2bc: 0xae110128
    ctx->pc = 0x15f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
    // 0x15f2c0: 0x200202d
    ctx->pc = 0x15f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2c4: 0xae02013c
    ctx->pc = 0x15f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x15f2c8: 0xae000140
    ctx->pc = 0x15f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x15f2cc: 0xae000144
    ctx->pc = 0x15f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x15f2d0: 0xc057bee
    ctx->pc = 0x15F2D0u;
    SET_GPR_U32(ctx, 31, 0x15F2D8u);
    ctx->pc = 0x15F2D4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    ctx->pc = 0x15EFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EFB8_0x15efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2D8u; }
    }
    if (ctx->pc != 0x15F2D8u) { return; }
    ctx->pc = 0x15F2D8u;
    // 0x15f2d8: 0x200202d
    ctx->pc = 0x15f2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2dc: 0xdfb10008
    ctx->pc = 0x15f2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f2e0: 0xdfb00000
    ctx->pc = 0x15f2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f2e4: 0xdfbf0010
    ctx->pc = 0x15f2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f2e8: 0x8056fea
    ctx->pc = 0x15F2E8u;
    ctx->pc = 0x15F2ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15BFA8u;
    sub_0015BFA8_0x15bfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x15F2F0u;
}
