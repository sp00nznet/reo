#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2550
// Address: 0x1a2550 - 0x1a2600
void sub_001A2550_0x1a2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2550u;

    // 0x1a2550: 0x27bdffd0
    ctx->pc = 0x1a2550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2554: 0x24020021
    ctx->pc = 0x1a2554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1a2558: 0xffbf0020
    ctx->pc = 0x1a2558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a255c: 0x302d
    ctx->pc = 0x1a255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2560: 0x7fb10010
    ctx->pc = 0x1a2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2564: 0x7fb00000
    ctx->pc = 0x1a2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2568: 0xa0882d
    ctx->pc = 0x1a2568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a256c: 0xa0a20000
    ctx->pc = 0x1a256cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2570: 0x2490000c
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a2574: 0xa0a00001
    ctx->pc = 0x1a2574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2578: 0x8c820004
    ctx->pc = 0x1a2578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a257c: 0xa4a20002
    ctx->pc = 0x1a257cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2580: 0x3c04002b
    ctx->pc = 0x1a2580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a2584: 0x94a20002
    ctx->pc = 0x1a2584u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a2588: 0x2484ffc0
    ctx->pc = 0x1a2588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a258c: 0xc06267c
    ctx->pc = 0x1A258Cu;
    SET_GPR_U32(ctx, 31, 0x1A2594u);
    ctx->pc = 0x1A2590u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2594u; }
    }
    if (ctx->pc != 0x1A2594u) { return; }
    ctx->pc = 0x1A2594u;
    // 0x1a2594: 0x40282d
    ctx->pc = 0x1a2594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2598: 0x202d
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a259c: 0x10000008
    ctx->pc = 0x1A259Cu;
    {
        const bool branch_taken_0x1a259c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A25A0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a259c) {
            ctx->pc = 0x1A25C0u;
            goto label_1a25c0;
        }
    }
    ctx->pc = 0x1A25A4u;
label_1a25a4:
    // 0x1a25a4: 0xc6000000
    ctx->pc = 0x1a25a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a25a8: 0x24840001
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a25ac: 0xe4a00000
    ctx->pc = 0x1a25acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a25b0: 0xc6000004
    ctx->pc = 0x1a25b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a25b4: 0xe4a00004
    ctx->pc = 0x1a25b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a25b8: 0x26100008
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a25bc: 0x24a50008
    ctx->pc = 0x1a25bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_1a25c0:
    // 0x1a25c0: 0x96230002
    ctx->pc = 0x1a25c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a25c4: 0x83182a
    ctx->pc = 0x1a25c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a25c8: 0x1460fff6
    ctx->pc = 0x1A25C8u;
    {
        const bool branch_taken_0x1a25c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A25CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a25c8) {
            ctx->pc = 0x1A25A4u;
            goto label_1a25a4;
        }
    }
    ctx->pc = 0x1A25D0u;
    // 0x1a25d0: 0x8e240004
    ctx->pc = 0x1a25d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a25d4: 0x8c23ffb0
    ctx->pc = 0x1a25d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a25d8: 0x831823
    ctx->pc = 0x1a25d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a25dc: 0xae230004
    ctx->pc = 0x1a25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a25e0: 0xdfbf0020
    ctx->pc = 0x1a25e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a25e4: 0x7bb10010
    ctx->pc = 0x1a25e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a25e8: 0x7bb00000
    ctx->pc = 0x1a25e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a25ec: 0x3e00008
    ctx->pc = 0x1A25ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A25A4u: goto label_1a25a4;
            case 0x1A25C0u: goto label_1a25c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A25F4u;
    // 0x1a25f4: 0x0
    ctx->pc = 0x1a25f4u;
    // NOP
    // 0x1a25f8: 0x0
    ctx->pc = 0x1a25f8u;
    // NOP
    // 0x1a25fc: 0x0
    ctx->pc = 0x1a25fcu;
    // NOP
}
