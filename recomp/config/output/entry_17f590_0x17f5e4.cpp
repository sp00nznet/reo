#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17f590
// Address: 0x17f590 - 0x17f5e4
void entry_17f590_0x17f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f590u;

    // 0x17f590: 0x27bdffc0
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f594: 0xffb10010
    ctx->pc = 0x17f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f598: 0xffb00000
    ctx->pc = 0x17f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f59c: 0x80882d
    ctx->pc = 0x17f59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5a0: 0xe7b40030
    ctx->pc = 0x17f5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f5a4: 0xa0802d
    ctx->pc = 0x17f5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5a8: 0xffbf0020
    ctx->pc = 0x17f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f5ac: 0xc047598
    ctx->pc = 0x17F5ACu;
    SET_GPR_U32(ctx, 31, 0x17F5B4u);
    ctx->pc = 0x17F5B0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5B4u; }
    }
    if (ctx->pc != 0x17F5B4u) { return; }
    ctx->pc = 0x17F5B4u;
    // 0x17f5b4: 0x44800000
    ctx->pc = 0x17f5b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x17f5b8: 0x4600a034
    ctx->pc = 0x17f5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f5bc: 0x3c013fc9
    ctx->pc = 0x17f5bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x17f5c0: 0x34210fdb
    ctx->pc = 0x17f5c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x17f5c4: 0x44810000
    ctx->pc = 0x17f5c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17f5c8: 0x45000004
    ctx->pc = 0x17F5C8u;
    {
        const bool branch_taken_0x17f5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f5c8) {
            ctx->pc = 0x17F5DCu;
            goto label_17f5dc;
        }
    }
    ctx->pc = 0x17F5D0u;
    // 0x17f5d0: 0x46140500
    ctx->pc = 0x17f5d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17f5d4: 0x805fd79
    ctx->pc = 0x17F5D4u;
    ctx->pc = 0x17F5D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17F5E4u;
    entry_17f5e4_0x17f688(rdram, ctx, runtime); return;
    ctx->pc = 0x17F5DCu;
label_17f5dc:
    // 0x17f5dc: 0x46140501
    ctx->pc = 0x17f5dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x17f5e0: 0x382d
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
