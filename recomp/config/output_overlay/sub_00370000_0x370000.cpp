#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370000
// Address: 0x370000 - 0x370140
void sub_00370000_0x370000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370000u;

    // 0x370000: 0x336f574d
    ctx->pc = 0x370000u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 27), 22349));
    // 0x370004: 0x1
    ctx->pc = 0x370004u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x370008: 0x370000
    ctx->pc = 0x370008u;
    
    // 0x37000c: 0xfd40
    ctx->pc = 0x37000cu;
    SET_GPR_U32(ctx, 31, SLL32(GPR_U32(ctx, 0), 21));
    // 0x370010: 0xd000
    ctx->pc = 0x370010u;
    SET_GPR_U32(ctx, 26, SLL32(GPR_U32(ctx, 0), 0));
    // 0x370014: 0x1dfd00
    ctx->pc = 0x370014u;
    SET_GPR_U32(ctx, 31, SLL32(GPR_U32(ctx, 29), 20));
    // 0x370018: 0x38cd80
    ctx->pc = 0x370018u;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 24), 22));
    // 0x37001c: 0x38cd80
    ctx->pc = 0x37001cu;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 24), 22));
    // 0x370020: 0x6d627573
    ctx->pc = 0x370020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30067); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x370024: 0x2e6e6961
    ctx->pc = 0x370024u;
    SET_GPR_U32(ctx, 14, SLTU32(GPR_U32(ctx, 19), 26977));
    // 0x370028: 0x6e6962
    ctx->pc = 0x370028u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 14), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x37002c: 0x0
    ctx->pc = 0x37002cu;
    // NOP
    // 0x370030: 0x0
    ctx->pc = 0x370030u;
    // NOP
    // 0x370034: 0x0
    ctx->pc = 0x370034u;
    // NOP
    // 0x370038: 0x0
    ctx->pc = 0x370038u;
    // NOP
    // 0x37003c: 0x0
    ctx->pc = 0x37003cu;
    // NOP
    // 0x370040: 0x0
    ctx->pc = 0x370040u;
    // NOP
    // 0x370044: 0x0
    ctx->pc = 0x370044u;
    // NOP
    // 0x370048: 0x0
    ctx->pc = 0x370048u;
    // NOP
    // 0x37004c: 0x0
    ctx->pc = 0x37004cu;
    // NOP
    // 0x370050: 0x0
    ctx->pc = 0x370050u;
    // NOP
    // 0x370054: 0x0
    ctx->pc = 0x370054u;
    // NOP
    // 0x370058: 0x0
    ctx->pc = 0x370058u;
    // NOP
    // 0x37005c: 0x0
    ctx->pc = 0x37005cu;
    // NOP
    // 0x370060: 0x0
    ctx->pc = 0x370060u;
    // NOP
    // 0x370064: 0x0
    ctx->pc = 0x370064u;
    // NOP
    // 0x370068: 0x0
    ctx->pc = 0x370068u;
    // NOP
    // 0x37006c: 0x0
    ctx->pc = 0x37006cu;
    // NOP
    // 0x370070: 0x0
    ctx->pc = 0x370070u;
    // NOP
    // 0x370074: 0x0
    ctx->pc = 0x370074u;
    // NOP
    // 0x370078: 0x0
    ctx->pc = 0x370078u;
    // NOP
    // 0x37007c: 0x0
    ctx->pc = 0x37007cu;
    // NOP
    // 0x370080: 0x308200ff
    ctx->pc = 0x370080u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
    // 0x370084: 0x4400004
    ctx->pc = 0x370084u;
    {
        const bool branch_taken_0x370084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x370088u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x370084) {
            ctx->pc = 0x370098u;
            goto label_370098;
        }
    }
    ctx->pc = 0x37008Cu;
    // 0x37008c: 0x44820000
    ctx->pc = 0x37008cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x370090: 0x10000007
    ctx->pc = 0x370090u;
    {
        const bool branch_taken_0x370090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370094u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x370090) {
            ctx->pc = 0x3700B0u;
            goto label_3700b0;
        }
    }
    ctx->pc = 0x370098u;
label_370098:
    // 0x370098: 0x30420001
    ctx->pc = 0x370098u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37009c: 0x621825
    ctx->pc = 0x37009cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3700a0: 0x44830000
    ctx->pc = 0x3700a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x3700a4: 0x0
    ctx->pc = 0x3700a4u;
    // NOP
    // 0x3700a8: 0x46800060
    ctx->pc = 0x3700a8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3700ac: 0x46010840
    ctx->pc = 0x3700acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3700b0:
    // 0x3700b0: 0x3c010039
    ctx->pc = 0x3700b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3700b4: 0xc420b298
    ctx->pc = 0x3700b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700b8: 0x8064864
    ctx->pc = 0x3700B8u;
    ctx->pc = 0x3700BCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x192190u;
    {
        auto targetFn = runtime->lookupFunction(0x192190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3700C0u;
    // 0x3700c0: 0x3082ffff
    ctx->pc = 0x3700c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x3700c4: 0x4400004
    ctx->pc = 0x3700C4u;
    {
        const bool branch_taken_0x3700c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3700C8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x3700c4) {
            ctx->pc = 0x3700D8u;
            goto label_3700d8;
        }
    }
    ctx->pc = 0x3700CCu;
    // 0x3700cc: 0x44820000
    ctx->pc = 0x3700ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3700d0: 0x10000007
    ctx->pc = 0x3700D0u;
    {
        const bool branch_taken_0x3700d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3700D4u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x3700d0) {
            ctx->pc = 0x3700F0u;
            goto label_3700f0;
        }
    }
    ctx->pc = 0x3700D8u;
label_3700d8:
    // 0x3700d8: 0x30420001
    ctx->pc = 0x3700d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x3700dc: 0x621825
    ctx->pc = 0x3700dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3700e0: 0x44830000
    ctx->pc = 0x3700e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x3700e4: 0x0
    ctx->pc = 0x3700e4u;
    // NOP
    // 0x3700e8: 0x46800060
    ctx->pc = 0x3700e8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3700ec: 0x46010840
    ctx->pc = 0x3700ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3700f0:
    // 0x3700f0: 0x3c010039
    ctx->pc = 0x3700f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3700f4: 0xc420b290
    ctx->pc = 0x3700f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700f8: 0x8064864
    ctx->pc = 0x3700F8u;
    ctx->pc = 0x3700FCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x192190u;
    {
        auto targetFn = runtime->lookupFunction(0x192190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x370100u;
    // 0x370100: 0x3082ffff
    ctx->pc = 0x370100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x370104: 0x4400004
    ctx->pc = 0x370104u;
    {
        const bool branch_taken_0x370104 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x370108u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x370104) {
            ctx->pc = 0x370118u;
            goto label_370118;
        }
    }
    ctx->pc = 0x37010Cu;
    // 0x37010c: 0x44820000
    ctx->pc = 0x37010cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x370110: 0x10000007
    ctx->pc = 0x370110u;
    {
        const bool branch_taken_0x370110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x370114u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x370110) {
            ctx->pc = 0x370130u;
            goto label_370130;
        }
    }
    ctx->pc = 0x370118u;
label_370118:
    // 0x370118: 0x30420001
    ctx->pc = 0x370118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37011c: 0x621825
    ctx->pc = 0x37011cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x370120: 0x44830000
    ctx->pc = 0x370120u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x370124: 0x0
    ctx->pc = 0x370124u;
    // NOP
    // 0x370128: 0x46800060
    ctx->pc = 0x370128u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37012c: 0x46010840
    ctx->pc = 0x37012cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_370130:
    // 0x370130: 0x3c010039
    ctx->pc = 0x370130u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x370134: 0xc420b290
    ctx->pc = 0x370134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370138: 0x8064868
    ctx->pc = 0x370138u;
    ctx->pc = 0x37013Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1921A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1921A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x370140u;
}
