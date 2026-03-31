#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A26C0
// Address: 0x1a26c0 - 0x1a2790
void sub_001A26C0_0x1a26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a26c0u;

    // 0x1a26c0: 0x27bdffd0
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a26c4: 0x24020023
    ctx->pc = 0x1a26c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a26c8: 0xffbf0020
    ctx->pc = 0x1a26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a26cc: 0x302d
    ctx->pc = 0x1a26ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26d0: 0x7fb10010
    ctx->pc = 0x1a26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a26d4: 0x7fb00000
    ctx->pc = 0x1a26d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a26d8: 0xa0882d
    ctx->pc = 0x1a26d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26dc: 0xa0a20000
    ctx->pc = 0x1a26dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a26e0: 0x2490000c
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a26e4: 0xa0a00001
    ctx->pc = 0x1a26e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a26e8: 0x8c820004
    ctx->pc = 0x1a26e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a26ec: 0xa4a20002
    ctx->pc = 0x1a26ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a26f0: 0x3c04002b
    ctx->pc = 0x1a26f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a26f4: 0x94a30002
    ctx->pc = 0x1a26f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a26f8: 0x2484ffc0
    ctx->pc = 0x1a26f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1a26fc: 0x31080
    ctx->pc = 0x1a26fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2700: 0x431021
    ctx->pc = 0x1a2700u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2704: 0xc06267c
    ctx->pc = 0x1A2704u;
    SET_GPR_U32(ctx, 31, 0x1A270Cu);
    ctx->pc = 0x1A2708u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1899F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001899F0_0x1899f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A270Cu; }
    }
    if (ctx->pc != 0x1A270Cu) { return; }
    ctx->pc = 0x1A270Cu;
    // 0x1a270c: 0x40282d
    ctx->pc = 0x1a270cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2710: 0x202d
    ctx->pc = 0x1a2710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2714: 0x1000000e
    ctx->pc = 0x1A2714u;
    {
        const bool branch_taken_0x1a2714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2718u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1a2714) {
            ctx->pc = 0x1A2750u;
            goto label_1a2750;
        }
    }
    ctx->pc = 0x1A271Cu;
label_1a271c:
    // 0x1a271c: 0x8e030000
    ctx->pc = 0x1a271cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2720: 0x24840001
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2724: 0xaca30000
    ctx->pc = 0x1a2724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a2728: 0xc6000004
    ctx->pc = 0x1a2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a272c: 0xe4a00004
    ctx->pc = 0x1a272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a2730: 0xc6000008
    ctx->pc = 0x1a2730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2734: 0xe4a00008
    ctx->pc = 0x1a2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1a2738: 0xc600000c
    ctx->pc = 0x1a2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a273c: 0xe4a0000c
    ctx->pc = 0x1a273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1a2740: 0xc6000010
    ctx->pc = 0x1a2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2744: 0xe4a00010
    ctx->pc = 0x1a2744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1a2748: 0x26100014
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a274c: 0x24a50014
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
label_1a2750:
    // 0x1a2750: 0x96230002
    ctx->pc = 0x1a2750u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2754: 0x83182a
    ctx->pc = 0x1a2754u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a2758: 0x1460fff0
    ctx->pc = 0x1A2758u;
    {
        const bool branch_taken_0x1a2758 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A275Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a2758) {
            ctx->pc = 0x1A271Cu;
            goto label_1a271c;
        }
    }
    ctx->pc = 0x1A2760u;
    // 0x1a2760: 0x8e240004
    ctx->pc = 0x1a2760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2764: 0x8c23ffb0
    ctx->pc = 0x1a2764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967216)));
    // 0x1a2768: 0x831823
    ctx->pc = 0x1a2768u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a276c: 0xae230004
    ctx->pc = 0x1a276cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a2770: 0xdfbf0020
    ctx->pc = 0x1a2770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2774: 0x7bb10010
    ctx->pc = 0x1a2774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2778: 0x7bb00000
    ctx->pc = 0x1a2778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a277c: 0x3e00008
    ctx->pc = 0x1A277Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A271Cu: goto label_1a271c;
            case 0x1A2750u: goto label_1a2750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2784u;
    // 0x1a2784: 0x0
    ctx->pc = 0x1a2784u;
    // NOP
    // 0x1a2788: 0x0
    ctx->pc = 0x1a2788u;
    // NOP
    // 0x1a278c: 0x0
    ctx->pc = 0x1a278cu;
    // NOP
}
