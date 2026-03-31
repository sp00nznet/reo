#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E986C
// Address: 0x1e986c - 0x1e99d8
void sub_001E986C_0x1e986c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e986cu;

    // 0x1e986c: 0x27bdf7d0
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x1e9870: 0xffbe0820
    ctx->pc = 0x1e9870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2080), GPR_U64(ctx, 30));
    // 0x1e9874: 0xffbf0828
    ctx->pc = 0x1e9874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2088), GPR_U64(ctx, 31));
    // 0x1e9878: 0x3a0f02d
    ctx->pc = 0x1e9878u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e987c: 0xafc00000
    ctx->pc = 0x1e987cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1e9880:
    // 0x1e9880: 0x27c20810
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 2064));
    // 0x1e9884: 0x27c30812
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 2066));
    // 0x1e9888: 0x27c60814
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 30), 2068));
    // 0x1e988c: 0x27c70818
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 2072));
    // 0x1e9890: 0x27c80010
    ctx->pc = 0x1e9890u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1e9894: 0x40202d
    ctx->pc = 0x1e9894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9898: 0x60282d
    ctx->pc = 0x1e9898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e989c: 0xc076158
    ctx->pc = 0x1E989Cu;
    SET_GPR_U32(ctx, 31, 0x1E98A4u);
    ctx->pc = 0x1D8560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8560_0x1d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98A4u; }
    }
    if (ctx->pc != 0x1E98A4u) { return; }
    ctx->pc = 0x1E98A4u;
    // 0x1e98a4: 0xafc20000
    ctx->pc = 0x1e98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e98a8: 0x8fc20000
    ctx->pc = 0x1e98a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e98ac: 0x14400044
    ctx->pc = 0x1E98ACu;
    {
        const bool branch_taken_0x1e98ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e98ac) {
            ctx->pc = 0x1E99C0u;
            goto label_1e99c0;
        }
    }
    ctx->pc = 0x1E98B4u;
    // 0x1e98b4: 0x87c20810
    ctx->pc = 0x1e98b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2064)));
    // 0x1e98b8: 0x40202d
    ctx->pc = 0x1e98b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98bc: 0xc07a230
    ctx->pc = 0x1E98BCu;
    SET_GPR_U32(ctx, 31, 0x1E98C4u);
    ctx->pc = 0x1E88C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88C0_0x1e88c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98C4u; }
    }
    if (ctx->pc != 0x1E98C4u) { return; }
    ctx->pc = 0x1E98C4u;
    // 0x1e98c4: 0xafc20004
    ctx->pc = 0x1e98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e98c8: 0x8fc20004
    ctx->pc = 0x1e98c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e98cc: 0x14400003
    ctx->pc = 0x1E98CCu;
    {
        const bool branch_taken_0x1e98cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e98cc) {
            ctx->pc = 0x1E98DCu;
            goto label_1e98dc;
        }
    }
    ctx->pc = 0x1E98D4u;
    // 0x1e98d4: 0x1000ffea
    ctx->pc = 0x1E98D4u;
    {
        const bool branch_taken_0x1e98d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e98d4) {
            ctx->pc = 0x1E9880u;
            goto label_1e9880;
        }
    }
    ctx->pc = 0x1E98DCu;
label_1e98dc:
    // 0x1e98dc: 0x27c20008
    ctx->pc = 0x1e98dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1e98e0: 0x97c30812
    ctx->pc = 0x1e98e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2066)));
    // 0x1e98e4: 0x8f84802c
    ctx->pc = 0x1e98e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e98e8: 0x40282d
    ctx->pc = 0x1e98e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98ec: 0x60302d
    ctx->pc = 0x1e98ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98f0: 0x24070001
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e98f4: 0x402d
    ctx->pc = 0x1e98f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98f8: 0xc07c80a
    ctx->pc = 0x1E98F8u;
    SET_GPR_U32(ctx, 31, 0x1E9900u);
    ctx->pc = 0x1F2028u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2028_0x1f2028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9900u; }
    }
    if (ctx->pc != 0x1E9900u) { return; }
    ctx->pc = 0x1E9900u;
    // 0x1e9900: 0xafc20000
    ctx->pc = 0x1e9900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e9904: 0x8fc20000
    ctx->pc = 0x1e9904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9908: 0x10400008
    ctx->pc = 0x1E9908u;
    {
        const bool branch_taken_0x1e9908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9908) {
            ctx->pc = 0x1E992Cu;
            goto label_1e992c;
        }
    }
    ctx->pc = 0x1E9910u;
    // 0x1e9910: 0x3c040026
    ctx->pc = 0x1e9910u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1e9914: 0x24848080
    ctx->pc = 0x1e9914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934656));
    // 0x1e9918: 0x8fc50000
    ctx->pc = 0x1e9918u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e991c: 0xc045a12
    ctx->pc = 0x1E991Cu;
    SET_GPR_U32(ctx, 31, 0x1E9924u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9924u; }
    }
    if (ctx->pc != 0x1E9924u) { return; }
    ctx->pc = 0x1E9924u;
    // 0x1e9924: 0x10000026
    ctx->pc = 0x1E9924u;
    {
        const bool branch_taken_0x1e9924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9924) {
            ctx->pc = 0x1E99C0u;
            goto label_1e99c0;
        }
    }
    ctx->pc = 0x1E992Cu;
label_1e992c:
    // 0x1e992c: 0x27c20010
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1e9930: 0x87c30812
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2066)));
    // 0x1e9934: 0x8fc40008
    ctx->pc = 0x1e9934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e9938: 0x40282d
    ctx->pc = 0x1e9938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e993c: 0x60302d
    ctx->pc = 0x1e993cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9940: 0xc07cd5f
    ctx->pc = 0x1E9940u;
    SET_GPR_U32(ctx, 31, 0x1E9948u);
    ctx->pc = 0x1F357Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F357C_0x1f357c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9948u; }
    }
    if (ctx->pc != 0x1E9948u) { return; }
    ctx->pc = 0x1E9948u;
    // 0x1e9948: 0x8fc40008
    ctx->pc = 0x1e9948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e994c: 0x8fc50814
    ctx->pc = 0x1e994cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 2068)));
    // 0x1e9950: 0xc07cc93
    ctx->pc = 0x1E9950u;
    SET_GPR_U32(ctx, 31, 0x1E9958u);
    ctx->pc = 0x1F324Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F324C_0x1f324c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9958u; }
    }
    if (ctx->pc != 0x1E9958u) { return; }
    ctx->pc = 0x1E9958u;
    // 0x1e9958: 0x97c20818
    ctx->pc = 0x1e9958u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2072)));
    // 0x1e995c: 0x8fc40008
    ctx->pc = 0x1e995cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e9960: 0x40282d
    ctx->pc = 0x1e9960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9964: 0xc07ccd5
    ctx->pc = 0x1E9964u;
    SET_GPR_U32(ctx, 31, 0x1E996Cu);
    ctx->pc = 0x1F3354u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3354_0x1f3354(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E996Cu; }
    }
    if (ctx->pc != 0x1E996Cu) { return; }
    ctx->pc = 0x1E996Cu;
    // 0x1e996c: 0x8fc20004
    ctx->pc = 0x1e996cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9970: 0x24420008
    ctx->pc = 0x1e9970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9974: 0x40202d
    ctx->pc = 0x1e9974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9978: 0x8fc50008
    ctx->pc = 0x1e9978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e997c: 0xc07c47a
    ctx->pc = 0x1E997Cu;
    SET_GPR_U32(ctx, 31, 0x1E9984u);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9984u; }
    }
    if (ctx->pc != 0x1E9984u) { return; }
    ctx->pc = 0x1E9984u;
    // 0x1e9984: 0xafc20000
    ctx->pc = 0x1e9984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1e9988: 0x8fc20000
    ctx->pc = 0x1e9988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e998c: 0x1040ffbc
    ctx->pc = 0x1E998Cu;
    {
        const bool branch_taken_0x1e998c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e998c) {
            ctx->pc = 0x1E9880u;
            goto label_1e9880;
        }
    }
    ctx->pc = 0x1E9994u;
    // 0x1e9994: 0x3c040026
    ctx->pc = 0x1e9994u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1e9998: 0x248480a0
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934688));
    // 0x1e999c: 0x8fc50000
    ctx->pc = 0x1e999cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e99a0: 0xc045a12
    ctx->pc = 0x1E99A0u;
    SET_GPR_U32(ctx, 31, 0x1E99A8u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99A8u; }
    }
    if (ctx->pc != 0x1E99A8u) { return; }
    ctx->pc = 0x1E99A8u;
    // 0x1e99a8: 0x8f84802c
    ctx->pc = 0x1e99a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e99ac: 0x8fc50008
    ctx->pc = 0x1e99acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e99b0: 0xc07ca04
    ctx->pc = 0x1E99B0u;
    SET_GPR_U32(ctx, 31, 0x1E99B8u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99B8u; }
    }
    if (ctx->pc != 0x1E99B8u) { return; }
    ctx->pc = 0x1E99B8u;
    // 0x1e99b8: 0x10000001
    ctx->pc = 0x1E99B8u;
    {
        const bool branch_taken_0x1e99b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e99b8) {
            ctx->pc = 0x1E99C0u;
            goto label_1e99c0;
        }
    }
    ctx->pc = 0x1E99C0u;
label_1e99c0:
    // 0x1e99c0: 0x3c0e82d
    ctx->pc = 0x1e99c0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99c4: 0xdfbe0820
    ctx->pc = 0x1e99c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x1e99c8: 0xdfbf0828
    ctx->pc = 0x1e99c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2088)));
    // 0x1e99cc: 0x27bd0830
    ctx->pc = 0x1e99ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2096));
    // 0x1e99d0: 0x3e00008
    ctx->pc = 0x1E99D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9880u: goto label_1e9880;
            case 0x1E98DCu: goto label_1e98dc;
            case 0x1E992Cu: goto label_1e992c;
            case 0x1E99C0u: goto label_1e99c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E99D8u;
}
