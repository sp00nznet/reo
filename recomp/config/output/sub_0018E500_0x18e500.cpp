#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E500
// Address: 0x18e500 - 0x18e590
void sub_0018E500_0x18e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e500u;

    // 0x18e500: 0x27bdffc0
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e504: 0xffbf0020
    ctx->pc = 0x18e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e508: 0x27a60038
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
    // 0x18e50c: 0x7fb00010
    ctx->pc = 0x18e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e510: 0xe7b40000
    ctx->pc = 0x18e510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e514: 0xa0802d
    ctx->pc = 0x18e514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e518: 0xafa0003c
    ctx->pc = 0x18e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x18e51c: 0x46006506
    ctx->pc = 0x18e51cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18e520: 0xafa00038
    ctx->pc = 0x18e520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18e524: 0x86070000
    ctx->pc = 0x18e524u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e528: 0xc063a98
    ctx->pc = 0x18E528u;
    SET_GPR_U32(ctx, 31, 0x18E530u);
    ctx->pc = 0x18E52Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x18EA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EA60_0x18ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E530u; }
    }
    if (ctx->pc != 0x18E530u) { return; }
    ctx->pc = 0x18E530u;
    // 0x18e530: 0xa6020000
    ctx->pc = 0x18e530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e534: 0x8fa30038
    ctx->pc = 0x18e534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e538: 0x14600004
    ctx->pc = 0x18E538u;
    {
        const bool branch_taken_0x18e538 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e538) {
            ctx->pc = 0x18E54Cu;
            goto label_18e54c;
        }
    }
    ctx->pc = 0x18E540u;
    // 0x18e540: 0x8fa2003c
    ctx->pc = 0x18e540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e544: 0x1000000a
    ctx->pc = 0x18E544u;
    {
        const bool branch_taken_0x18e544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E548u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x18e544) {
            ctx->pc = 0x18E570u;
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E54Cu;
label_18e54c:
    // 0x18e54c: 0x8fa2003c
    ctx->pc = 0x18e54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e550: 0xc4700000
    ctx->pc = 0x18e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x18e554: 0xc4710004
    ctx->pc = 0x18e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x18e558: 0xc4720008
    ctx->pc = 0x18e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x18e55c: 0xc44d0000
    ctx->pc = 0x18e55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18e560: 0xc44e0004
    ctx->pc = 0x18e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18e564: 0xc44f000c
    ctx->pc = 0x18e564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18e568: 0xc063c98
    ctx->pc = 0x18E568u;
    SET_GPR_U32(ctx, 31, 0x18E570u);
    ctx->pc = 0x18E56Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x18F260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F260_0x18f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E570u; }
    }
    if (ctx->pc != 0x18E570u) { return; }
    ctx->pc = 0x18E570u;
label_18e570:
    // 0x18e570: 0xdfbf0020
    ctx->pc = 0x18e570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e574: 0xc7b40000
    ctx->pc = 0x18e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e578: 0x7bb00010
    ctx->pc = 0x18e578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e57c: 0x3e00008
    ctx->pc = 0x18E57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E54Cu: goto label_18e54c;
            case 0x18E570u: goto label_18e570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E584u;
    // 0x18e584: 0x0
    ctx->pc = 0x18e584u;
    // NOP
    // 0x18e588: 0x0
    ctx->pc = 0x18e588u;
    // NOP
    // 0x18e58c: 0x0
    ctx->pc = 0x18e58cu;
    // NOP
}
