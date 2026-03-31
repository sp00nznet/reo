#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F970
// Address: 0x18f970 - 0x18fce0
void sub_0018F970_0x18f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f970u;

    // 0x18f970: 0x27bdff70
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18f974: 0xffbf0080
    ctx->pc = 0x18f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18f978: 0x7fb50070
    ctx->pc = 0x18f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x18f97c: 0x7fb40060
    ctx->pc = 0x18f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18f980: 0x80a82d
    ctx->pc = 0x18f980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f984: 0x7fb30050
    ctx->pc = 0x18f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18f988: 0xa0a02d
    ctx->pc = 0x18f988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f98c: 0x7fb20040
    ctx->pc = 0x18f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18f990: 0xc0982d
    ctx->pc = 0x18f990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f994: 0x7fb10030
    ctx->pc = 0x18f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f998: 0xe0902d
    ctx->pc = 0x18f998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f99c: 0x7fb00020
    ctx->pc = 0x18f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18f9a0: 0x100882d
    ctx->pc = 0x18f9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9a4: 0xe7b80010
    ctx->pc = 0x18f9a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18f9a8: 0x78043
    ctx->pc = 0x18f9a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 7), 1));
    // 0x18f9ac: 0xe7b7000c
    ctx->pc = 0x18f9acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18f9b0: 0xe7b60008
    ctx->pc = 0x18f9b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18f9b4: 0xe7b50004
    ctx->pc = 0x18f9b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f9b8: 0xe7b40000
    ctx->pc = 0x18f9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18f9bc: 0x460065c6
    ctx->pc = 0x18f9bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x18f9c0: 0x6410003
    ctx->pc = 0x18F9C0u;
    {
        const bool branch_taken_0x18f9c0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x18F9C4u;
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x18f9c0) {
            ctx->pc = 0x18F9D0u;
            goto label_18f9d0;
        }
    }
    ctx->pc = 0x18F9C8u;
    // 0x18f9c8: 0x26420001
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x18f9cc: 0x28043
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_18f9d0:
    // 0x18f9d0: 0x44900000
    ctx->pc = 0x18f9d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x18f9d4: 0x111043
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x18f9d8: 0x6210003
    ctx->pc = 0x18F9D8u;
    {
        const bool branch_taken_0x18f9d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18F9DCu;
        ctx->f[24] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x18f9d8) {
            ctx->pc = 0x18F9E8u;
            goto label_18f9e8;
        }
    }
    ctx->pc = 0x18F9E0u;
    // 0x18f9e0: 0x26220001
    ctx->pc = 0x18f9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f9e4: 0x21043
    ctx->pc = 0x18f9e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18f9e8:
    // 0x18f9e8: 0x44820000
    ctx->pc = 0x18f9e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18f9ec: 0x3c040029
    ctx->pc = 0x18f9ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f9f0: 0x24844dc0
    ctx->pc = 0x18f9f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19904));
    // 0x18f9f4: 0xc063f7c
    ctx->pc = 0x18F9F4u;
    SET_GPR_U32(ctx, 31, 0x18F9FCu);
    ctx->pc = 0x18F9F8u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F9FCu; }
    }
    if (ctx->pc != 0x18F9FCu) { return; }
    ctx->pc = 0x18F9FCu;
    // 0x18f9fc: 0x3c010029
    ctx->pc = 0x18f9fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa00: 0x3c023f80
    ctx->pc = 0x18fa00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x18fa04: 0xe4384dc0
    ctx->pc = 0x18fa04u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19904), bits); }
    // 0x18fa08: 0x4600a007
    ctx->pc = 0x18fa08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x18fa0c: 0x3c010029
    ctx->pc = 0x18fa0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa10: 0xe4204dd4
    ctx->pc = 0x18fa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19924), bits); }
    // 0x18fa14: 0x3c010029
    ctx->pc = 0x18fa14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa18: 0xe4374df8
    ctx->pc = 0x18fa18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19960), bits); }
    // 0x18fa1c: 0x3c010029
    ctx->pc = 0x18fa1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa20: 0x44940800
    ctx->pc = 0x18fa20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 20);
    // 0x18fa24: 0xac224dfc
    ctx->pc = 0x18fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19964), GPR_U32(ctx, 2));
    // 0x18fa28: 0x3c01002a
    ctx->pc = 0x18fa28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fa2c: 0x44930000
    ctx->pc = 0x18fa2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x18fa30: 0x8c22f9b4
    ctx->pc = 0x18fa30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x18fa34: 0x46800860
    ctx->pc = 0x18fa34u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x18fa38: 0x3c010029
    ctx->pc = 0x18fa38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa3c: 0x46800020
    ctx->pc = 0x18fa3cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18fa40: 0x4617b541
    ctx->pc = 0x18fa40u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x18fa44: 0xe4354de8
    ctx->pc = 0x18fa44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19944), bits); }
    // 0x18fa48: 0x46180840
    ctx->pc = 0x18fa48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x18fa4c: 0x3c010029
    ctx->pc = 0x18fa4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa50: 0xe4214df0
    ctx->pc = 0x18fa50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19952), bits); }
    // 0x18fa54: 0x46140000
    ctx->pc = 0x18fa54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x18fa58: 0x3c010029
    ctx->pc = 0x18fa58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fa5c: 0x1440000b
    ctx->pc = 0x18FA5Cu;
    {
        const bool branch_taken_0x18fa5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FA60u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19956), bits); }
        if (branch_taken_0x18fa5c) {
            ctx->pc = 0x18FA8Cu;
            goto label_18fa8c;
        }
    }
    ctx->pc = 0x18FA64u;
    // 0x18fa64: 0x6610003
    ctx->pc = 0x18FA64u;
    {
        const bool branch_taken_0x18fa64 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x18FA68u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
        if (branch_taken_0x18fa64) {
            ctx->pc = 0x18FA74u;
            goto label_18fa74;
        }
    }
    ctx->pc = 0x18FA6Cu;
    // 0x18fa6c: 0x26620001
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x18fa70: 0x21043
    ctx->pc = 0x18fa70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18fa74:
    // 0x18fa74: 0x40982d
    ctx->pc = 0x18fa74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa78: 0x6210003
    ctx->pc = 0x18FA78u;
    {
        const bool branch_taken_0x18fa78 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18FA7Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        if (branch_taken_0x18fa78) {
            ctx->pc = 0x18FA88u;
            goto label_18fa88;
        }
    }
    ctx->pc = 0x18FA80u;
    // 0x18fa80: 0x26220001
    ctx->pc = 0x18fa80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x18fa84: 0x21043
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18fa88:
    // 0x18fa88: 0x40882d
    ctx->pc = 0x18fa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fa8c:
    // 0x18fa8c: 0x44900000
    ctx->pc = 0x18fa8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x18fa90: 0x111043
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x18fa94: 0x6210003
    ctx->pc = 0x18FA94u;
    {
        const bool branch_taken_0x18fa94 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18FA98u;
        ctx->f[24] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x18fa94) {
            ctx->pc = 0x18FAA4u;
            goto label_18faa4;
        }
    }
    ctx->pc = 0x18FA9Cu;
    // 0x18fa9c: 0x26220001
    ctx->pc = 0x18fa9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x18faa0: 0x21043
    ctx->pc = 0x18faa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18faa4:
    // 0x18faa4: 0x44820000
    ctx->pc = 0x18faa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18faa8: 0x2a0202d
    ctx->pc = 0x18faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18faac: 0xc063f7c
    ctx->pc = 0x18FAACu;
    SET_GPR_U32(ctx, 31, 0x18FAB4u);
    ctx->pc = 0x18FAB0u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FAB4u; }
    }
    if (ctx->pc != 0x18FAB4u) { return; }
    ctx->pc = 0x18FAB4u;
    // 0x18fab4: 0x44911000
    ctx->pc = 0x18fab4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 17);
    // 0x18fab8: 0x3c043f00
    ctx->pc = 0x18fab8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16128 << 16));
    // 0x18fabc: 0x44940800
    ctx->pc = 0x18fabcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 20);
    // 0x18fac0: 0x3c024500
    ctx->pc = 0x18fac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17664 << 16));
    // 0x18fac4: 0x44930000
    ctx->pc = 0x18fac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x18fac8: 0x3c053f80
    ctx->pc = 0x18fac8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x18facc: 0x46801160
    ctx->pc = 0x18faccu;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x18fad0: 0x3c01002a
    ctx->pc = 0x18fad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fad4: 0x24030800
    ctx->pc = 0x18fad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x18fad8: 0x46800860
    ctx->pc = 0x18fad8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x18fadc: 0x44921800
    ctx->pc = 0x18fadcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 18);
    // 0x18fae0: 0x46800020
    ctx->pc = 0x18fae0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18fae4: 0xe6b80000
    ctx->pc = 0x18fae4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x18fae8: 0x4600a087
    ctx->pc = 0x18fae8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x18faec: 0xe6a20014
    ctx->pc = 0x18faecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x18faf0: 0x461809c0
    ctx->pc = 0x18faf0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x18faf4: 0xe6b50028
    ctx->pc = 0x18faf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x18faf8: 0x46140080
    ctx->pc = 0x18faf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x18fafc: 0xe6a70030
    ctx->pc = 0x18fafcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x18fb00: 0xe6a20034
    ctx->pc = 0x18fb00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x18fb04: 0xaea5003c
    ctx->pc = 0x18fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 5));
    // 0x18fb08: 0x468019a0
    ctx->pc = 0x18fb08u;
    ctx->f[6] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x18fb0c: 0xc427f9f4
    ctx->pc = 0x18fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x18fb10: 0x44844000
    ctx->pc = 0x18fb10u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 4);
    // 0x18fb14: 0xc6a30028
    ctx->pc = 0x18fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb18: 0x44822000
    ctx->pc = 0x18fb18u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x18fb1c: 0x44801000
    ctx->pc = 0x18fb1cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x18fb20: 0x460039c7
    ctx->pc = 0x18fb20u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x18fb24: 0x3c01002a
    ctx->pc = 0x18fb24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fb28: 0x460741c2
    ctx->pc = 0x18fb28u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x18fb2c: 0x460718c2
    ctx->pc = 0x18fb2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x18fb30: 0xe6a30028
    ctx->pc = 0x18fb30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x18fb34: 0x8c22fed8
    ctx->pc = 0x18fb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967000)));
    // 0x18fb38: 0xc6a30030
    ctx->pc = 0x18fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb3c: 0x21043
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18fb40: 0x3c01002a
    ctx->pc = 0x18fb40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fb44: 0x621023
    ctx->pc = 0x18fb44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fb48: 0x44823800
    ctx->pc = 0x18fb48u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 2);
    // 0x18fb4c: 0x0
    ctx->pc = 0x18fb4cu;
    // NOP
    // 0x18fb50: 0x468039e0
    ctx->pc = 0x18fb50u;
    ctx->f[7] = FPU_CVT_S_W(*(int32_t*)&ctx->f[7]);
    // 0x18fb54: 0x460718c0
    ctx->pc = 0x18fb54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x18fb58: 0xe6a30030
    ctx->pc = 0x18fb58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x18fb5c: 0x8c22fed0
    ctx->pc = 0x18fb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966992)));
    // 0x18fb60: 0xc6a30034
    ctx->pc = 0x18fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb64: 0x21043
    ctx->pc = 0x18fb64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18fb68: 0x3c01002a
    ctx->pc = 0x18fb68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fb6c: 0x621023
    ctx->pc = 0x18fb6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fb70: 0x44823800
    ctx->pc = 0x18fb70u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 2);
    // 0x18fb74: 0x0
    ctx->pc = 0x18fb74u;
    // NOP
    // 0x18fb78: 0x468039e0
    ctx->pc = 0x18fb78u;
    ctx->f[7] = FPU_CVT_S_W(*(int32_t*)&ctx->f[7]);
    // 0x18fb7c: 0x460718c0
    ctx->pc = 0x18fb7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x18fb80: 0xe6a30034
    ctx->pc = 0x18fb80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x18fb84: 0xc423f9f4
    ctx->pc = 0x18fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb88: 0x460340c2
    ctx->pc = 0x18fb88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x18fb8c: 0x3c010029
    ctx->pc = 0x18fb8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fb90: 0xe6a30038
    ctx->pc = 0x18fb90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x18fb94: 0xc6a30030
    ctx->pc = 0x18fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb98: 0xe42341c0
    ctx->pc = 0x18fb98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16832), bits); }
    // 0x18fb9c: 0x3c010029
    ctx->pc = 0x18fb9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fba0: 0xc42341c0
    ctx->pc = 0x18fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fba4: 0xc6a70034
    ctx->pc = 0x18fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x18fba8: 0x3c010029
    ctx->pc = 0x18fba8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbac: 0xe42741b8
    ctx->pc = 0x18fbacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16824), bits); }
    // 0x18fbb0: 0x3c010029
    ctx->pc = 0x18fbb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbb4: 0xe42141e0
    ctx->pc = 0x18fbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16864), bits); }
    // 0x18fbb8: 0x3c010029
    ctx->pc = 0x18fbb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbbc: 0x460320c1
    ctx->pc = 0x18fbbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x18fbc0: 0xe42041d8
    ctx->pc = 0x18fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16856), bits); }
    // 0x18fbc4: 0x3c010029
    ctx->pc = 0x18fbc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbc8: 0xe42641d0
    ctx->pc = 0x18fbc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16848), bits); }
    // 0x18fbcc: 0x3c010029
    ctx->pc = 0x18fbccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbd0: 0xe42541c8
    ctx->pc = 0x18fbd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16840), bits); }
    // 0x18fbd4: 0x3c010029
    ctx->pc = 0x18fbd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbd8: 0x46021834
    ctx->pc = 0x18fbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fbdc: 0x45000007
    ctx->pc = 0x18FBDCu;
    {
        const bool branch_taken_0x18fbdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FBE0u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16816), bits); }
        if (branch_taken_0x18fbdc) {
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FBE4u;
    // 0x18fbe4: 0x3c02bf80
    ctx->pc = 0x18fbe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x18fbe8: 0x3c010029
    ctx->pc = 0x18fbe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fbec: 0x44820000
    ctx->pc = 0x18fbecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18fbf0: 0x0
    ctx->pc = 0x18fbf0u;
    // NOP
    // 0x18fbf4: 0x46001802
    ctx->pc = 0x18fbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x18fbf8: 0xe42041b0
    ctx->pc = 0x18fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16816), bits); }
label_18fbfc:
    // 0x18fbfc: 0x3c010029
    ctx->pc = 0x18fbfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc00: 0x3c024500
    ctx->pc = 0x18fc00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17664 << 16));
    // 0x18fc04: 0xc42241b0
    ctx->pc = 0x18fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fc08: 0x44821800
    ctx->pc = 0x18fc08u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x18fc0c: 0x44800000
    ctx->pc = 0x18fc0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x18fc10: 0x3c010029
    ctx->pc = 0x18fc10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc14: 0xc42141b8
    ctx->pc = 0x18fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fc18: 0x46021881
    ctx->pc = 0x18fc18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18fc1c: 0x46011841
    ctx->pc = 0x18fc1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x18fc20: 0x3c010029
    ctx->pc = 0x18fc20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc24: 0xe42241b0
    ctx->pc = 0x18fc24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16816), bits); }
    // 0x18fc28: 0x3c010029
    ctx->pc = 0x18fc28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc2c: 0x46000834
    ctx->pc = 0x18fc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fc30: 0x45000007
    ctx->pc = 0x18FC30u;
    {
        const bool branch_taken_0x18fc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FC34u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16808), bits); }
        if (branch_taken_0x18fc30) {
            ctx->pc = 0x18FC50u;
            goto label_18fc50;
        }
    }
    ctx->pc = 0x18FC38u;
    // 0x18fc38: 0x3c02bf80
    ctx->pc = 0x18fc38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x18fc3c: 0x3c010029
    ctx->pc = 0x18fc3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc40: 0x44820000
    ctx->pc = 0x18fc40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18fc44: 0x0
    ctx->pc = 0x18fc44u;
    // NOP
    // 0x18fc48: 0x46000802
    ctx->pc = 0x18fc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18fc4c: 0xe42041a8
    ctx->pc = 0x18fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16808), bits); }
label_18fc50:
    // 0x18fc50: 0x3c010029
    ctx->pc = 0x18fc50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc54: 0x3c024500
    ctx->pc = 0x18fc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17664 << 16));
    // 0x18fc58: 0xc42141a8
    ctx->pc = 0x18fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fc5c: 0x202d
    ctx->pc = 0x18fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc60: 0x44821000
    ctx->pc = 0x18fc60u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x18fc64: 0x282d
    ctx->pc = 0x18fc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc68: 0x4600bb06
    ctx->pc = 0x18fc68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18fc6c: 0x3c010029
    ctx->pc = 0x18fc6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc70: 0xc42041b0
    ctx->pc = 0x18fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc74: 0x46011041
    ctx->pc = 0x18fc74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18fc78: 0x3c010029
    ctx->pc = 0x18fc78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc7c: 0xe42141a8
    ctx->pc = 0x18fc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16808), bits); }
    // 0x18fc80: 0x46000064
    ctx->pc = 0x18fc80u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x18fc84: 0x3c010029
    ctx->pc = 0x18fc84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fc88: 0xc42041a8
    ctx->pc = 0x18fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc8c: 0x44060800
    ctx->pc = 0x18fc8cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x18fc90: 0x46000024
    ctx->pc = 0x18fc90u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x18fc94: 0x44070000
    ctx->pc = 0x18fc94u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x18fc98: 0xc063f38
    ctx->pc = 0x18FC98u;
    SET_GPR_U32(ctx, 31, 0x18FCA0u);
    ctx->pc = 0x18FC9Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x18FCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FCE0_0x18fce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCA0u; }
    }
    if (ctx->pc != 0x18FCA0u) { return; }
    ctx->pc = 0x18FCA0u;
    // 0x18fca0: 0xdfbf0080
    ctx->pc = 0x18fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18fca4: 0xc7b80010
    ctx->pc = 0x18fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18fca8: 0x7bb50070
    ctx->pc = 0x18fca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fcac: 0xc7b7000c
    ctx->pc = 0x18fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18fcb0: 0x7bb40060
    ctx->pc = 0x18fcb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fcb4: 0xc7b60008
    ctx->pc = 0x18fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18fcb8: 0x7bb30050
    ctx->pc = 0x18fcb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fcbc: 0xc7b50004
    ctx->pc = 0x18fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18fcc0: 0x7bb20040
    ctx->pc = 0x18fcc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fcc4: 0xc7b40000
    ctx->pc = 0x18fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18fcc8: 0x7bb10030
    ctx->pc = 0x18fcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fccc: 0x7bb00020
    ctx->pc = 0x18fcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fcd0: 0x3e00008
    ctx->pc = 0x18FCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FCD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F9D0u: goto label_18f9d0;
            case 0x18F9E8u: goto label_18f9e8;
            case 0x18FA74u: goto label_18fa74;
            case 0x18FA88u: goto label_18fa88;
            case 0x18FA8Cu: goto label_18fa8c;
            case 0x18FAA4u: goto label_18faa4;
            case 0x18FBFCu: goto label_18fbfc;
            case 0x18FC50u: goto label_18fc50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FCD8u;
    // 0x18fcd8: 0x0
    ctx->pc = 0x18fcd8u;
    // NOP
    // 0x18fcdc: 0x0
    ctx->pc = 0x18fcdcu;
    // NOP
}
