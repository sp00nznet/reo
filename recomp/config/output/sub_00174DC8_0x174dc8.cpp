#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174DC8
// Address: 0x174dc8 - 0x175210
void sub_00174DC8_0x174dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174dc8u;

    // 0x174dc8: 0x27bdffe0
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174dcc: 0x80182d
    ctx->pc = 0x174dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dd0: 0xffb00000
    ctx->pc = 0x174dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174dd4: 0xc0802d
    ctx->pc = 0x174dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dd8: 0xffb10008
    ctx->pc = 0x174dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174ddc: 0xe0882d
    ctx->pc = 0x174ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174de0: 0xffbf0010
    ctx->pc = 0x174de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174de4: 0xa0402d
    ctx->pc = 0x174de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174de8: 0x8c620dac
    ctx->pc = 0x174de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3500)));
    // 0x174dec: 0x10400006
    ctx->pc = 0x174DECu;
    {
        const bool branch_taken_0x174dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174DF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174dec) {
            ctx->pc = 0x174E08u;
            goto label_174e08;
        }
    }
    ctx->pc = 0x174DF4u;
    // 0x174df4: 0xdfb00000
    ctx->pc = 0x174df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174df8: 0xdfb10008
    ctx->pc = 0x174df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174dfc: 0xdfbf0010
    ctx->pc = 0x174dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e00: 0x805d394
    ctx->pc = 0x174E00u;
    ctx->pc = 0x174E04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x174E50u;
    goto label_174e50;
    ctx->pc = 0x174E08u;
label_174e08:
    // 0x174e08: 0x8c620d94
    ctx->pc = 0x174e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3476)));
    // 0x174e0c: 0x1c400004
    ctx->pc = 0x174E0Cu;
    {
        const bool branch_taken_0x174e0c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x174E10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174e0c) {
            ctx->pc = 0x174E20u;
            goto label_174e20;
        }
    }
    ctx->pc = 0x174E14u;
    // 0x174e14: 0x10000006
    ctx->pc = 0x174E14u;
    {
        const bool branch_taken_0x174e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174E18u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x174e14) {
            ctx->pc = 0x174E30u;
            goto label_174e30;
        }
    }
    ctx->pc = 0x174E1Cu;
    // 0x174e1c: 0x0
    ctx->pc = 0x174e1cu;
    // NOP
label_174e20:
    // 0x174e20: 0x100202d
    ctx->pc = 0x174e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e24: 0xc056ea0
    ctx->pc = 0x174E24u;
    SET_GPR_U32(ctx, 31, 0x174E2Cu);
    ctx->pc = 0x174E28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E2Cu; }
    }
    if (ctx->pc != 0x174E2Cu) { return; }
    ctx->pc = 0x174E2Cu;
    // 0x174e2c: 0xae020000
    ctx->pc = 0x174e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_174e30:
    // 0x174e30: 0x240203e8
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x174e34: 0xdfb00000
    ctx->pc = 0x174e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e38: 0xae220000
    ctx->pc = 0x174e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x174e3c: 0xdfbf0010
    ctx->pc = 0x174e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e40: 0xdfb10008
    ctx->pc = 0x174e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174e44: 0x3e00008
    ctx->pc = 0x174E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174E4Cu;
    // 0x174e4c: 0x0
    ctx->pc = 0x174e4cu;
    // NOP
label_174e50:
    // 0x174e50: 0x240203e8
    ctx->pc = 0x174e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x174e54: 0xacc00000
    ctx->pc = 0x174e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x174e58: 0x3e00008
    ctx->pc = 0x174E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174E60u;
    // 0x174e60: 0x27bdffe0
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174e64: 0xffb00000
    ctx->pc = 0x174e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174e68: 0x80802d
    ctx->pc = 0x174e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e6c: 0xffb20010
    ctx->pc = 0x174e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174e70: 0xffb10008
    ctx->pc = 0x174e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174e74: 0xffbf0018
    ctx->pc = 0x174e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174e78: 0xc05a78c
    ctx->pc = 0x174E78u;
    SET_GPR_U32(ctx, 31, 0x174E80u);
    ctx->pc = 0x174E7Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E80u; }
    }
    if (ctx->pc != 0x174E80u) { return; }
    ctx->pc = 0x174E80u;
    // 0x174e80: 0x3c05ff00
    ctx->pc = 0x174e80u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174e84: 0x10400008
    ctx->pc = 0x174E84u;
    {
        const bool branch_taken_0x174e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174E88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174e84) {
            ctx->pc = 0x174EA8u;
            goto label_174ea8;
        }
    }
    ctx->pc = 0x174E8Cu;
    // 0x174e8c: 0xdfb00000
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e90: 0x34a50158
    ctx->pc = 0x174e90u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 344));
    // 0x174e94: 0xdfb10008
    ctx->pc = 0x174e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174e98: 0xdfb20010
    ctx->pc = 0x174e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e9c: 0xdfbf0018
    ctx->pc = 0x174e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174ea0: 0x805a704
    ctx->pc = 0x174EA0u;
    ctx->pc = 0x174EA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174EA8u;
label_174ea8:
    // 0x174ea8: 0x8e112ab0
    ctx->pc = 0x174ea8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x174eac: 0x52200025
    ctx->pc = 0x174EACu;
    {
        const bool branch_taken_0x174eac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x174eac) {
            ctx->pc = 0x174EB0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x174F44u;
            goto label_174f44;
        }
    }
    ctx->pc = 0x174EB4u;
    // 0x174eb4: 0xc05cee0
    ctx->pc = 0x174EB4u;
    SET_GPR_U32(ctx, 31, 0x174EBCu);
    ctx->pc = 0x174EB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B80_0x173b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EBCu; }
    }
    if (ctx->pc != 0x174EBCu) { return; }
    ctx->pc = 0x174EBCu;
    // 0x174ebc: 0x200202d
    ctx->pc = 0x174ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ec0: 0x2405002f
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x174ec4: 0x1440001e
    ctx->pc = 0x174EC4u;
    {
        const bool branch_taken_0x174ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174EC8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ec4) {
            ctx->pc = 0x174F40u;
            goto label_174f40;
        }
    }
    ctx->pc = 0x174ECCu;
    // 0x174ecc: 0xc05d518
    ctx->pc = 0x174ECCu;
    SET_GPR_U32(ctx, 31, 0x174ED4u);
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174ED4u; }
    }
    if (ctx->pc != 0x174ED4u) { return; }
    ctx->pc = 0x174ED4u;
    // 0x174ed4: 0x200202d
    ctx->pc = 0x174ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ed8: 0x8e220da4
    ctx->pc = 0x174ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 3492)));
    // 0x174edc: 0x24050005
    ctx->pc = 0x174edcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x174ee0: 0x14400003
    ctx->pc = 0x174EE0u;
    {
        const bool branch_taken_0x174ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174EE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ee0) {
            ctx->pc = 0x174EF0u;
            goto label_174ef0;
        }
    }
    ctx->pc = 0x174EE8u;
    // 0x174ee8: 0xc05d518
    ctx->pc = 0x174EE8u;
    SET_GPR_U32(ctx, 31, 0x174EF0u);
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EF0u; }
    }
    if (ctx->pc != 0x174EF0u) { return; }
    ctx->pc = 0x174EF0u;
label_174ef0:
    // 0x174ef0: 0x8e220da8
    ctx->pc = 0x174ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 3496)));
    // 0x174ef4: 0x14400004
    ctx->pc = 0x174EF4u;
    {
        const bool branch_taken_0x174ef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174EF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ef4) {
            ctx->pc = 0x174F08u;
            goto label_174f08;
        }
    }
    ctx->pc = 0x174EFCu;
    // 0x174efc: 0x24050006
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x174f00: 0xc05d518
    ctx->pc = 0x174F00u;
    SET_GPR_U32(ctx, 31, 0x174F08u);
    ctx->pc = 0x174F04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F08u; }
    }
    if (ctx->pc != 0x174F08u) { return; }
    ctx->pc = 0x174F08u;
label_174f08:
    // 0x174f08: 0x6a420007
    ctx->pc = 0x174f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x174f0c: 0x6e420000
    ctx->pc = 0x174f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x174f10: 0x8e430008
    ctx->pc = 0x174f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x174f14: 0xb2022abb
    ctx->pc = 0x174f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10939); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174f18: 0xb6022ab4
    ctx->pc = 0x174f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10932); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x174f1c: 0xae032abc
    ctx->pc = 0x174f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10940), GPR_U32(ctx, 3));
    // 0x174f20: 0x200202d
    ctx->pc = 0x174f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f24: 0xdfb10008
    ctx->pc = 0x174f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174f28: 0x2405000d
    ctx->pc = 0x174f28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    // 0x174f2c: 0xdfb00000
    ctx->pc = 0x174f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f30: 0xdfb20010
    ctx->pc = 0x174f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f34: 0xdfbf0018
    ctx->pc = 0x174f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174f38: 0x805ded2
    ctx->pc = 0x174F38u;
    ctx->pc = 0x174F3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177B48u;
    entry_177b48_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x174F40u;
label_174f40:
    // 0x174f40: 0xdfb00000
    ctx->pc = 0x174f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174f44:
    // 0x174f44: 0xdfb10008
    ctx->pc = 0x174f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174f48: 0xdfb20010
    ctx->pc = 0x174f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f4c: 0xdfbf0018
    ctx->pc = 0x174f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174f50: 0x3e00008
    ctx->pc = 0x174F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174F58u;
    // 0x174f58: 0x27bdffe0
    ctx->pc = 0x174f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174f5c: 0xffb00000
    ctx->pc = 0x174f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174f60: 0x80802d
    ctx->pc = 0x174f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f64: 0xffb10008
    ctx->pc = 0x174f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174f68: 0xffbf0010
    ctx->pc = 0x174f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174f6c: 0xc05a78c
    ctx->pc = 0x174F6Cu;
    SET_GPR_U32(ctx, 31, 0x174F74u);
    ctx->pc = 0x174F70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F74u; }
    }
    if (ctx->pc != 0x174F74u) { return; }
    ctx->pc = 0x174F74u;
    // 0x174f74: 0x3c05ff00
    ctx->pc = 0x174f74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174f78: 0x10400007
    ctx->pc = 0x174F78u;
    {
        const bool branch_taken_0x174f78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174F7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174f78) {
            ctx->pc = 0x174F98u;
            goto label_174f98;
        }
    }
    ctx->pc = 0x174F80u;
    // 0x174f80: 0xdfb00000
    ctx->pc = 0x174f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f84: 0x34a50159
    ctx->pc = 0x174f84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 345));
    // 0x174f88: 0xdfb10008
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174f8c: 0xdfbf0010
    ctx->pc = 0x174f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f90: 0x805a704
    ctx->pc = 0x174F90u;
    ctx->pc = 0x174F94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174F98u;
label_174f98:
    // 0x174f98: 0x8e032ab0
    ctx->pc = 0x174f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x174f9c: 0x50600006
    ctx->pc = 0x174F9Cu;
    {
        const bool branch_taken_0x174f9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x174f9c) {
            ctx->pc = 0x174FA0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x174FB8u;
            goto label_174fb8;
        }
    }
    ctx->pc = 0x174FA4u;
    // 0x174fa4: 0xac710db0
    ctx->pc = 0x174fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3504), GPR_U32(ctx, 17));
    // 0x174fa8: 0xc05d496
    ctx->pc = 0x174FA8u;
    SET_GPR_U32(ctx, 31, 0x174FB0u);
    ctx->pc = 0x174FACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175258_0x175258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FB0u; }
    }
    if (ctx->pc != 0x174FB0u) { return; }
    ctx->pc = 0x174FB0u;
    // 0x174fb0: 0x102d
    ctx->pc = 0x174fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fb4: 0xdfb00000
    ctx->pc = 0x174fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174fb8:
    // 0x174fb8: 0xdfb10008
    ctx->pc = 0x174fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174fbc: 0xdfbf0010
    ctx->pc = 0x174fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174fc0: 0x3e00008
    ctx->pc = 0x174FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174FC8u;
    // 0x174fc8: 0x27bdffe0
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174fcc: 0xffb00000
    ctx->pc = 0x174fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174fd0: 0x80802d
    ctx->pc = 0x174fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fd4: 0xffb10008
    ctx->pc = 0x174fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174fd8: 0xc0882d
    ctx->pc = 0x174fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fdc: 0xffb20010
    ctx->pc = 0x174fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174fe0: 0xffbf0018
    ctx->pc = 0x174fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174fe4: 0xc05a78c
    ctx->pc = 0x174FE4u;
    SET_GPR_U32(ctx, 31, 0x174FECu);
    ctx->pc = 0x174FE8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FECu; }
    }
    if (ctx->pc != 0x174FECu) { return; }
    ctx->pc = 0x174FECu;
    // 0x174fec: 0x3c05ff00
    ctx->pc = 0x174fecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174ff0: 0x202d
    ctx->pc = 0x174ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ff4: 0x10400008
    ctx->pc = 0x174FF4u;
    {
        const bool branch_taken_0x174ff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174FF8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 346));
        if (branch_taken_0x174ff4) {
            ctx->pc = 0x175018u;
            goto label_175018;
        }
    }
    ctx->pc = 0x174FFCu;
    // 0x174ffc: 0xdfb00000
    ctx->pc = 0x174ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175000: 0xdfb10008
    ctx->pc = 0x175000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175004: 0xdfb20010
    ctx->pc = 0x175004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175008: 0xdfbf0018
    ctx->pc = 0x175008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17500c: 0x805a704
    ctx->pc = 0x17500Cu;
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175014u;
    // 0x175014: 0x0
    ctx->pc = 0x175014u;
    // NOP
label_175018:
    // 0x175018: 0x8e032ab0
    ctx->pc = 0x175018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x17501c: 0x10600005
    ctx->pc = 0x17501Cu;
    {
        const bool branch_taken_0x17501c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x175020u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17501c) {
            ctx->pc = 0x175034u;
            goto label_175034;
        }
    }
    ctx->pc = 0x175024u;
    // 0x175024: 0xac710db8
    ctx->pc = 0x175024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 17));
    // 0x175028: 0xc05d496
    ctx->pc = 0x175028u;
    SET_GPR_U32(ctx, 31, 0x175030u);
    ctx->pc = 0x17502Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3508), GPR_U32(ctx, 18));
    ctx->pc = 0x175258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175258_0x175258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175030u; }
    }
    if (ctx->pc != 0x175030u) { return; }
    ctx->pc = 0x175030u;
    // 0x175030: 0x102d
    ctx->pc = 0x175030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175034:
    // 0x175034: 0xdfb00000
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175038: 0xdfb10008
    ctx->pc = 0x175038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17503c: 0xdfb20010
    ctx->pc = 0x17503cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175040: 0xdfbf0018
    ctx->pc = 0x175040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175044: 0x3e00008
    ctx->pc = 0x175044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17504Cu;
    // 0x17504c: 0x0
    ctx->pc = 0x17504cu;
    // NOP
    // 0x175050: 0x27bdffe0
    ctx->pc = 0x175050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175054: 0xffb00000
    ctx->pc = 0x175054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175058: 0x80802d
    ctx->pc = 0x175058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17505c: 0xffb10008
    ctx->pc = 0x17505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175060: 0xffbf0010
    ctx->pc = 0x175060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175064: 0xc05a78c
    ctx->pc = 0x175064u;
    SET_GPR_U32(ctx, 31, 0x17506Cu);
    ctx->pc = 0x175068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17506Cu; }
    }
    if (ctx->pc != 0x17506Cu) { return; }
    ctx->pc = 0x17506Cu;
    // 0x17506c: 0x3c05ff00
    ctx->pc = 0x17506cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175070: 0x10400007
    ctx->pc = 0x175070u;
    {
        const bool branch_taken_0x175070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175074u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175070) {
            ctx->pc = 0x175090u;
            goto label_175090;
        }
    }
    ctx->pc = 0x175078u;
    // 0x175078: 0xdfb00000
    ctx->pc = 0x175078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17507c: 0x34a5015b
    ctx->pc = 0x17507cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 347));
    // 0x175080: 0xdfb10008
    ctx->pc = 0x175080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175084: 0xdfbf0010
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175088: 0x805a704
    ctx->pc = 0x175088u;
    ctx->pc = 0x17508Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175090u;
label_175090:
    // 0x175090: 0x8e032ab0
    ctx->pc = 0x175090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x175094: 0x50600006
    ctx->pc = 0x175094u;
    {
        const bool branch_taken_0x175094 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x175094) {
            ctx->pc = 0x175098u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1750B0u;
            goto label_1750b0;
        }
    }
    ctx->pc = 0x17509Cu;
    // 0x17509c: 0xac710dbc
    ctx->pc = 0x17509cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 17));
    // 0x1750a0: 0xc05d496
    ctx->pc = 0x1750A0u;
    SET_GPR_U32(ctx, 31, 0x1750A8u);
    ctx->pc = 0x1750A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175258_0x175258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750A8u; }
    }
    if (ctx->pc != 0x1750A8u) { return; }
    ctx->pc = 0x1750A8u;
    // 0x1750a8: 0x102d
    ctx->pc = 0x1750a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750ac: 0xdfb00000
    ctx->pc = 0x1750acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1750b0:
    // 0x1750b0: 0xdfb10008
    ctx->pc = 0x1750b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1750b4: 0xdfbf0010
    ctx->pc = 0x1750b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1750b8: 0x3e00008
    ctx->pc = 0x1750B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1750BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1750C0u;
    // 0x1750c0: 0x27bdffe0
    ctx->pc = 0x1750c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1750c4: 0xffb00000
    ctx->pc = 0x1750c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1750c8: 0x80802d
    ctx->pc = 0x1750c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750cc: 0xffb10008
    ctx->pc = 0x1750ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1750d0: 0xffbf0010
    ctx->pc = 0x1750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1750d4: 0xc05a78c
    ctx->pc = 0x1750D4u;
    SET_GPR_U32(ctx, 31, 0x1750DCu);
    ctx->pc = 0x1750D8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750DCu; }
    }
    if (ctx->pc != 0x1750DCu) { return; }
    ctx->pc = 0x1750DCu;
    // 0x1750dc: 0x3c05ff00
    ctx->pc = 0x1750dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1750e0: 0x10400007
    ctx->pc = 0x1750E0u;
    {
        const bool branch_taken_0x1750e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1750E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1750e0) {
            ctx->pc = 0x175100u;
            goto label_175100;
        }
    }
    ctx->pc = 0x1750E8u;
    // 0x1750e8: 0xdfb00000
    ctx->pc = 0x1750e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750ec: 0x34a5015c
    ctx->pc = 0x1750ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 348));
    // 0x1750f0: 0xdfb10008
    ctx->pc = 0x1750f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1750f4: 0xdfbf0010
    ctx->pc = 0x1750f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1750f8: 0x805a704
    ctx->pc = 0x1750F8u;
    ctx->pc = 0x1750FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175100u;
label_175100:
    // 0x175100: 0x8e042ab0
    ctx->pc = 0x175100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x175104: 0x54800001
    ctx->pc = 0x175104u;
    {
        const bool branch_taken_0x175104 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x175104) {
            ctx->pc = 0x175108u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 3520), GPR_U32(ctx, 17));
            ctx->pc = 0x17510Cu;
            goto label_17510c;
        }
    }
    ctx->pc = 0x17510Cu;
label_17510c:
    // 0x17510c: 0xdfb00000
    ctx->pc = 0x17510cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175110: 0xdfb10008
    ctx->pc = 0x175110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175114: 0xdfbf0010
    ctx->pc = 0x175114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175118: 0x3e00008
    ctx->pc = 0x175118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17511Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175120u;
    // 0x175120: 0x27bdffd0
    ctx->pc = 0x175120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175124: 0xffb10008
    ctx->pc = 0x175124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175128: 0xffb20010
    ctx->pc = 0x175128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17512c: 0x80902d
    ctx->pc = 0x17512cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175130: 0xffb40020
    ctx->pc = 0x175130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175134: 0x26540d2c
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 3372));
    // 0x175138: 0xffb00000
    ctx->pc = 0x175138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17513c: 0x26512ab4
    ctx->pc = 0x17513cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 10932));
    // 0x175140: 0xffb30018
    ctx->pc = 0x175140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175144: 0xffbf0028
    ctx->pc = 0x175144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175148: 0xc059f74
    ctx->pc = 0x175148u;
    SET_GPR_U32(ctx, 31, 0x175150u);
    ctx->pc = 0x17514Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    ctx->pc = 0x167DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DD0_0x167dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175150u; }
    }
    if (ctx->pc != 0x175150u) { return; }
    ctx->pc = 0x175150u;
    // 0x175150: 0x54400028
    ctx->pc = 0x175150u;
    {
        const bool branch_taken_0x175150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x175150) {
            ctx->pc = 0x175154u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1751F4u;
            goto label_1751f4;
        }
    }
    ctx->pc = 0x175158u;
    // 0x175158: 0x8e020d98
    ctx->pc = 0x175158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x17515c: 0x1c400010
    ctx->pc = 0x17515Cu;
    {
        const bool branch_taken_0x17515c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x175160u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17515c) {
            ctx->pc = 0x1751A0u;
            goto label_1751a0;
        }
    }
    ctx->pc = 0x175164u;
    // 0x175164: 0x8e230004
    ctx->pc = 0x175164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175168: 0x2402fffd
    ctx->pc = 0x175168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17516c: 0x10620002
    ctx->pc = 0x17516Cu;
    {
        const bool branch_taken_0x17516c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x175170u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17516c) {
            ctx->pc = 0x175178u;
            goto label_175178;
        }
    }
    ctx->pc = 0x175174u;
    // 0x175174: 0x8e110dc0
    ctx->pc = 0x175174u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 3520)));
label_175178:
    // 0x175178: 0x622000a
    ctx->pc = 0x175178u;
    {
        const bool branch_taken_0x175178 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x175178) {
            ctx->pc = 0x17517Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
            ctx->pc = 0x1751A4u;
            goto label_1751a4;
        }
    }
    ctx->pc = 0x175180u;
    // 0x175180: 0xc05d484
    ctx->pc = 0x175180u;
    SET_GPR_U32(ctx, 31, 0x175188u);
    ctx->pc = 0x175184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175210_0x175210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175188u; }
    }
    if (ctx->pc != 0x175188u) { return; }
    ctx->pc = 0x175188u;
    // 0x175188: 0x40182d
    ctx->pc = 0x175188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17518c: 0x2402ffff
    ctx->pc = 0x17518cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175190: 0x10620003
    ctx->pc = 0x175190u;
    {
        const bool branch_taken_0x175190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x175194u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x175190) {
            ctx->pc = 0x1751A0u;
            goto label_1751a0;
        }
    }
    ctx->pc = 0x175198u;
    // 0x175198: 0x24130001
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17519c: 0xae020d98
    ctx->pc = 0x17519cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 2));
label_1751a0:
    // 0x1751a0: 0x8e020d9c
    ctx->pc = 0x1751a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_1751a4:
    // 0x1751a4: 0x1c400008
    ctx->pc = 0x1751A4u;
    {
        const bool branch_taken_0x1751a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1751a4) {
            ctx->pc = 0x1751C8u;
            goto label_1751c8;
        }
    }
    ctx->pc = 0x1751ACu;
    // 0x1751ac: 0x8e820020
    ctx->pc = 0x1751acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1751b0: 0x18400005
    ctx->pc = 0x1751B0u;
    {
        const bool branch_taken_0x1751b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1751b0) {
            ctx->pc = 0x1751C8u;
            goto label_1751c8;
        }
    }
    ctx->pc = 0x1751B8u;
    // 0x1751b8: 0xae020d9c
    ctx->pc = 0x1751b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
    // 0x1751bc: 0x24130001
    ctx->pc = 0x1751bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1751c0: 0x8e820024
    ctx->pc = 0x1751c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1751c4: 0xae020da0
    ctx->pc = 0x1751c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 2));
label_1751c8:
    // 0x1751c8: 0x12600009
    ctx->pc = 0x1751C8u;
    {
        const bool branch_taken_0x1751c8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1751CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1751c8) {
            ctx->pc = 0x1751F0u;
            goto label_1751f0;
        }
    }
    ctx->pc = 0x1751D0u;
    // 0x1751d0: 0xdfb20010
    ctx->pc = 0x1751d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1751d4: 0xdfb00000
    ctx->pc = 0x1751d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751d8: 0xdfb10008
    ctx->pc = 0x1751d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1751dc: 0xdfb30018
    ctx->pc = 0x1751dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751e0: 0xdfb40020
    ctx->pc = 0x1751e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1751e4: 0xdfbf0028
    ctx->pc = 0x1751e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1751e8: 0x805d496
    ctx->pc = 0x1751E8u;
    ctx->pc = 0x1751ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x175258u;
    sub_00175258_0x175258(rdram, ctx, runtime); return;
    ctx->pc = 0x1751F0u;
label_1751f0:
    // 0x1751f0: 0xdfb00000
    ctx->pc = 0x1751f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1751f4:
    // 0x1751f4: 0xdfb10008
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1751f8: 0xdfb20010
    ctx->pc = 0x1751f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1751fc: 0xdfb30018
    ctx->pc = 0x1751fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175200: 0xdfb40020
    ctx->pc = 0x175200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175204: 0xdfbf0028
    ctx->pc = 0x175204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175208: 0x3e00008
    ctx->pc = 0x175208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17520Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E08u: goto label_174e08;
            case 0x174E20u: goto label_174e20;
            case 0x174E30u: goto label_174e30;
            case 0x174E50u: goto label_174e50;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EF0u: goto label_174ef0;
            case 0x174F08u: goto label_174f08;
            case 0x174F40u: goto label_174f40;
            case 0x174F44u: goto label_174f44;
            case 0x174F98u: goto label_174f98;
            case 0x174FB8u: goto label_174fb8;
            case 0x175018u: goto label_175018;
            case 0x175034u: goto label_175034;
            case 0x175090u: goto label_175090;
            case 0x1750B0u: goto label_1750b0;
            case 0x175100u: goto label_175100;
            case 0x17510Cu: goto label_17510c;
            case 0x175178u: goto label_175178;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175210u;
}
