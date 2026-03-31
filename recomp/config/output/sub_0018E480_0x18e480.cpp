#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E480
// Address: 0x18e480 - 0x18e500
void sub_0018E480_0x18e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e480u;

    // 0x18e480: 0x27bdffc0
    ctx->pc = 0x18e480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e484: 0xffbf0020
    ctx->pc = 0x18e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e488: 0x27a60038
    ctx->pc = 0x18e488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
    // 0x18e48c: 0x7fb00010
    ctx->pc = 0x18e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e490: 0xe7b40000
    ctx->pc = 0x18e490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e494: 0xa0802d
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e498: 0xafa0003c
    ctx->pc = 0x18e498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x18e49c: 0x46006506
    ctx->pc = 0x18e49cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18e4a0: 0xafa00038
    ctx->pc = 0x18e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18e4a4: 0x86070000
    ctx->pc = 0x18e4a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e4a8: 0xc063a44
    ctx->pc = 0x18E4A8u;
    SET_GPR_U32(ctx, 31, 0x18E4B0u);
    ctx->pc = 0x18E4ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x18E910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E910_0x18e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4B0u; }
    }
    if (ctx->pc != 0x18E4B0u) { return; }
    ctx->pc = 0x18E4B0u;
    // 0x18e4b0: 0xa6020000
    ctx->pc = 0x18e4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e4b4: 0x8fa30038
    ctx->pc = 0x18e4b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e4b8: 0x14600004
    ctx->pc = 0x18E4B8u;
    {
        const bool branch_taken_0x18e4b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e4b8) {
            ctx->pc = 0x18E4CCu;
            goto label_18e4cc;
        }
    }
    ctx->pc = 0x18E4C0u;
    // 0x18e4c0: 0x8fa2003c
    ctx->pc = 0x18e4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e4c4: 0x10000008
    ctx->pc = 0x18E4C4u;
    {
        const bool branch_taken_0x18e4c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E4C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x18e4c4) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4CCu;
label_18e4cc:
    // 0x18e4cc: 0x8fa2003c
    ctx->pc = 0x18e4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e4d0: 0xc46f0000
    ctx->pc = 0x18e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18e4d4: 0xc4700004
    ctx->pc = 0x18e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x18e4d8: 0xc44d0000
    ctx->pc = 0x18e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e4dc: 0xc44e0004
    ctx->pc = 0x18e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18e4e0: 0xc063c78
    ctx->pc = 0x18E4E0u;
    SET_GPR_U32(ctx, 31, 0x18E4E8u);
    ctx->pc = 0x18E4E4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x18F1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F1E0_0x18f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E8u; }
    }
    if (ctx->pc != 0x18E4E8u) { return; }
    ctx->pc = 0x18E4E8u;
label_18e4e8:
    // 0x18e4e8: 0xdfbf0020
    ctx->pc = 0x18e4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e4ec: 0xc7b40000
    ctx->pc = 0x18e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e4f0: 0x7bb00010
    ctx->pc = 0x18e4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4f4: 0x3e00008
    ctx->pc = 0x18E4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E4F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E4CCu: goto label_18e4cc;
            case 0x18E4E8u: goto label_18e4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E4FCu;
    // 0x18e4fc: 0x0
    ctx->pc = 0x18e4fcu;
    // NOP
}
