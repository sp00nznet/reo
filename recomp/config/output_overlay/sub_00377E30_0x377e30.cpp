#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377E30
// Address: 0x377e30 - 0x378010
void sub_00377E30_0x377e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377e30u;

    // 0x377e30: 0x27bdff80
    ctx->pc = 0x377e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x377e34: 0x3c027000
    ctx->pc = 0x377e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x377e38: 0xffbf0070
    ctx->pc = 0x377e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x377e3c: 0x34493f40
    ctx->pc = 0x377e3cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 2), 16192));
    // 0x377e40: 0x7fb60060
    ctx->pc = 0x377e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x377e44: 0x24020080
    ctx->pc = 0x377e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x377e48: 0x7fb50050
    ctx->pc = 0x377e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x377e4c: 0x2183c
    ctx->pc = 0x377e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x377e50: 0x7fb40040
    ctx->pc = 0x377e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x377e54: 0x3c080029
    ctx->pc = 0x377e54u;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x377e58: 0x7fb30030
    ctx->pc = 0x377e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377e5c: 0x24020068
    ctx->pc = 0x377e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
    // 0x377e60: 0x7fb20020
    ctx->pc = 0x377e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377e64: 0x433025
    ctx->pc = 0x377e64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377e68: 0x7fb10010
    ctx->pc = 0x377e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377e6c: 0x3c020038
    ctx->pc = 0x377e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x377e70: 0x7fb00000
    ctx->pc = 0x377e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377e74: 0x3c010057
    ctx->pc = 0x377e74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377e78: 0x8c8b0034
    ctx->pc = 0x377e78u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x377e7c: 0x34433838
    ctx->pc = 0x377e7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 14392));
    // 0x377e80: 0x8c2aba90
    ctx->pc = 0x377e80u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x377e84: 0x3c024348
    ctx->pc = 0x377e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17224 << 16));
    // 0x377e88: 0x25084d40
    ctx->pc = 0x377e88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 19776));
    // 0x377e8c: 0x24070001
    ctx->pc = 0x377e8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x377e90: 0x24050042
    ctx->pc = 0x377e90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 66));
    // 0x377e94: 0x44820800
    ctx->pc = 0x377e94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x377e98: 0x44800000
    ctx->pc = 0x377e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x377e9c: 0x8d731460
    ctx->pc = 0x377e9cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 11), 5216)));
    // 0x377ea0: 0x8d721464
    ctx->pc = 0x377ea0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 11), 5220)));
    // 0x377ea4: 0x3c010057
    ctx->pc = 0x377ea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ea8: 0xac29bab0
    ctx->pc = 0x377ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949552), GPR_U32(ctx, 9));
    // 0x377eac: 0x3c010057
    ctx->pc = 0x377eacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377eb0: 0xac28baa0
    ctx->pc = 0x377eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949536), GPR_U32(ctx, 8));
    // 0x377eb4: 0x3c010057
    ctx->pc = 0x377eb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377eb8: 0xa027af38
    ctx->pc = 0x377eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946616), (uint8_t)GPR_U32(ctx, 7));
    // 0x377ebc: 0xfd460000
    ctx->pc = 0x377ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x377ec0: 0x3c010057
    ctx->pc = 0x377ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ec4: 0xfd450008
    ctx->pc = 0x377ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x377ec8: 0x8c22ba90
    ctx->pc = 0x377ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x377ecc: 0x24420010
    ctx->pc = 0x377eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x377ed0: 0x3c010057
    ctx->pc = 0x377ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ed4: 0xac22ba90
    ctx->pc = 0x377ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x377ed8: 0x3c010057
    ctx->pc = 0x377ed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377edc: 0x8c22ba90
    ctx->pc = 0x377edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x377ee0: 0xfc430000
    ctx->pc = 0x377ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x377ee4: 0x3c010057
    ctx->pc = 0x377ee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ee8: 0xfc470008
    ctx->pc = 0x377ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x377eec: 0x8c22ba90
    ctx->pc = 0x377eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x377ef0: 0x24420010
    ctx->pc = 0x377ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x377ef4: 0x3c010057
    ctx->pc = 0x377ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ef8: 0xac22ba90
    ctx->pc = 0x377ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 2));
    // 0x377efc: 0x8c820034
    ctx->pc = 0x377efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x377f00: 0x8c420820
    ctx->pc = 0x377f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x377f04: 0xc4420034
    ctx->pc = 0x377f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377f08: 0x46011041
    ctx->pc = 0x377f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x377f0c: 0x46010032
    ctx->pc = 0x377f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377f10: 0x45000003
    ctx->pc = 0x377F10u;
    {
        const bool branch_taken_0x377f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x377F14u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 52));
        if (branch_taken_0x377f10) {
            ctx->pc = 0x377F20u;
            goto label_377f20;
        }
    }
    ctx->pc = 0x377F18u;
    // 0x377f18: 0x3c010039
    ctx->pc = 0x377f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x377f1c: 0xc421caa0
    ctx->pc = 0x377f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377f20:
    // 0x377f20: 0x3c023f80
    ctx->pc = 0x377f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x377f24: 0x3c040057
    ctx->pc = 0x377f24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x377f28: 0x44820000
    ctx->pc = 0x377f28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377f2c: 0x3c050057
    ctx->pc = 0x377f2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x377f30: 0x44806000
    ctx->pc = 0x377f30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x377f34: 0x3c010057
    ctx->pc = 0x377f34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377f38: 0x46010003
    ctx->pc = 0x377f38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x377f3c: 0x2484af90
    ctx->pc = 0x377f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946704));
    // 0x377f40: 0x24a5afd0
    ctx->pc = 0x377f40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946768));
    // 0x377f44: 0x302d
    ctx->pc = 0x377f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f48: 0x46006386
    ctx->pc = 0x377f48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x377f4c: 0xe420af40
    ctx->pc = 0x377f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946624), bits); }
    // 0x377f50: 0xc05fece
    ctx->pc = 0x377F50u;
    SET_GPR_U32(ctx, 31, 0x377F58u);
    ctx->pc = 0x377F54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x17FB38u;
    {
        auto targetFn = runtime->lookupFunction(0x17FB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377F58u; }
        if (ctx->pc != 0x377F58u) { return; }
    }
    ctx->pc = 0x377F58u;
    // 0x377f58: 0xb02d
    ctx->pc = 0x377f58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f5c: 0x161040
    ctx->pc = 0x377f5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
label_377f60:
    // 0x377f60: 0x561021
    ctx->pc = 0x377f60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x377f64: 0x21040
    ctx->pc = 0x377f64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x377f68: 0x2621821
    ctx->pc = 0x377f68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x377f6c: 0x94620002
    ctx->pc = 0x377f6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x377f70: 0x10400016
    ctx->pc = 0x377F70u;
    {
        const bool branch_taken_0x377f70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x377F74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x377f70) {
            ctx->pc = 0x377FCCu;
            goto label_377fcc;
        }
    }
    ctx->pc = 0x377F78u;
    // 0x377f78: 0x94740004
    ctx->pc = 0x377f78u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x377f7c: 0x3c040057
    ctx->pc = 0x377f7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x377f80: 0x8e220000
    ctx->pc = 0x377f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x377f84: 0x94630000
    ctx->pc = 0x377f84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377f88: 0x31880
    ctx->pc = 0x377f88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x377f8c: 0x431021
    ctx->pc = 0x377f8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377f90: 0x8c450820
    ctx->pc = 0x377f90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x377f94: 0xc064540
    ctx->pc = 0x377F94u;
    SET_GPR_U32(ctx, 31, 0x377F9Cu);
    ctx->pc = 0x377F98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949440));
    ctx->pc = 0x191500u;
    {
        auto targetFn = runtime->lookupFunction(0x191500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377F9Cu; }
        if (ctx->pc != 0x377F9Cu) { return; }
    }
    ctx->pc = 0x377F9Cu;
    // 0x377f9c: 0x10000007
    ctx->pc = 0x377F9Cu;
    {
        const bool branch_taken_0x377f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377FA0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377f9c) {
            ctx->pc = 0x377FBCu;
            goto label_377fbc;
        }
    }
    ctx->pc = 0x377FA4u;
label_377fa4:
    // 0x377fa4: 0x541021
    ctx->pc = 0x377fa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x377fa8: 0x21080
    ctx->pc = 0x377fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x377fac: 0xc0de004
    ctx->pc = 0x377FACu;
    SET_GPR_U32(ctx, 31, 0x377FB4u);
    ctx->pc = 0x377FB0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x378010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00378010_0x378010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377FB4u; }
    }
    if (ctx->pc != 0x377FB4u) { return; }
    ctx->pc = 0x377FB4u;
    // 0x377fb4: 0x2694000d
    ctx->pc = 0x377fb4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 13));
    // 0x377fb8: 0x26b50001
    ctx->pc = 0x377fb8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_377fbc:
    // 0x377fbc: 0x96020000
    ctx->pc = 0x377fbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x377fc0: 0x2a2102a
    ctx->pc = 0x377fc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x377fc4: 0x1440fff7
    ctx->pc = 0x377FC4u;
    {
        const bool branch_taken_0x377fc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x377FC8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x377fc4) {
            ctx->pc = 0x377FA4u;
            goto label_377fa4;
        }
    }
    ctx->pc = 0x377FCCu;
label_377fcc:
    // 0x377fcc: 0x26d60001
    ctx->pc = 0x377fccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x377fd0: 0x2ac20013
    ctx->pc = 0x377fd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 19));
    // 0x377fd4: 0x1440ffe2
    ctx->pc = 0x377FD4u;
    {
        const bool branch_taken_0x377fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x377FD8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x377fd4) {
            ctx->pc = 0x377F60u;
            goto label_377f60;
        }
    }
    ctx->pc = 0x377FDCu;
    // 0x377fdc: 0xdfbf0070
    ctx->pc = 0x377fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377fe0: 0x24020001
    ctx->pc = 0x377fe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x377fe4: 0x7bb60060
    ctx->pc = 0x377fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377fe8: 0x7bb50050
    ctx->pc = 0x377fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377fec: 0x7bb40040
    ctx->pc = 0x377fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377ff0: 0x7bb30030
    ctx->pc = 0x377ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377ff4: 0x7bb20020
    ctx->pc = 0x377ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377ff8: 0x7bb10010
    ctx->pc = 0x377ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377ffc: 0x7bb00000
    ctx->pc = 0x377ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378000: 0x3e00008
    ctx->pc = 0x378000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377F20u: goto label_377f20;
            case 0x377F60u: goto label_377f60;
            case 0x377FA4u: goto label_377fa4;
            case 0x377FBCu: goto label_377fbc;
            case 0x377FCCu: goto label_377fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x378008u;
    // 0x378008: 0x0
    ctx->pc = 0x378008u;
    // NOP
    // 0x37800c: 0x0
    ctx->pc = 0x37800cu;
    // NOP
}
