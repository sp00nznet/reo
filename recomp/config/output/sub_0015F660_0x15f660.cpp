#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F660
// Address: 0x15f660 - 0x15f6d8
void sub_0015F660_0x15f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f660u;

    // 0x15f660: 0x27bdffe0
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f664: 0xffb10008
    ctx->pc = 0x15f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f668: 0xa0882d
    ctx->pc = 0x15f668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f66c: 0xffb00000
    ctx->pc = 0x15f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f670: 0x80802d
    ctx->pc = 0x15f670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f674: 0xffbf0010
    ctx->pc = 0x15f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15f678: 0xc042c56
    ctx->pc = 0x15F678u;
    SET_GPR_U32(ctx, 31, 0x15F680u);
    ctx->pc = 0x15F67Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F680u; }
    }
    if (ctx->pc != 0x15F680u) { return; }
    ctx->pc = 0x15F680u;
    // 0x15f680: 0x3c040024
    ctx->pc = 0x15f680u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15f684: 0x8e030114
    ctx->pc = 0x15f684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x15f688: 0x2484f260
    ctx->pc = 0x15f688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963808));
    // 0x15f68c: 0x62182a
    ctx->pc = 0x15f68cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x15f690: 0x1060000b
    ctx->pc = 0x15F690u;
    {
        const bool branch_taken_0x15f690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F694u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f690) {
            ctx->pc = 0x15F6C0u;
            goto label_15f6c0;
        }
    }
    ctx->pc = 0x15F698u;
    // 0x15f698: 0xc058dd4
    ctx->pc = 0x15F698u;
    SET_GPR_U32(ctx, 31, 0x15F6A0u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6A0u; }
    }
    if (ctx->pc != 0x15F6A0u) { return; }
    ctx->pc = 0x15F6A0u;
    // 0x15f6a0: 0x8e060114
    ctx->pc = 0x15f6a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x15f6a4: 0x220282d
    ctx->pc = 0x15f6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6a8: 0xdfb10008
    ctx->pc = 0x15f6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f6ac: 0x8e040110
    ctx->pc = 0x15f6acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x15f6b0: 0xdfbf0010
    ctx->pc = 0x15f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f6b4: 0xdfb00000
    ctx->pc = 0x15f6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f6b8: 0x8042d7e
    ctx->pc = 0x15F6B8u;
    ctx->pc = 0x15F6BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10B5F8u;
    sub_0010B5F8_0x10b5f8(rdram, ctx, runtime); return;
    ctx->pc = 0x15F6C0u;
label_15f6c0:
    // 0x15f6c0: 0x8e040110
    ctx->pc = 0x15f6c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x15f6c4: 0xdfb10008
    ctx->pc = 0x15f6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f6c8: 0xdfb00000
    ctx->pc = 0x15f6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f6cc: 0xdfbf0010
    ctx->pc = 0x15f6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f6d0: 0x8042bf0
    ctx->pc = 0x15F6D0u;
    ctx->pc = 0x15F6D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10AFC0u;
    sub_0010AFC0_0x10afc0(rdram, ctx, runtime); return;
    ctx->pc = 0x15F6D8u;
}
