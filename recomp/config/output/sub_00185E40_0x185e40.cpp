#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00185E40
// Address: 0x185e40 - 0x1860b0
void sub_00185E40_0x185e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x185e40u;

    // 0x185e40: 0x27bdfcb0
    ctx->pc = 0x185e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x185e44: 0xffb00310
    ctx->pc = 0x185e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
    // 0x185e48: 0xa0802d
    ctx->pc = 0x185e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e4c: 0xffb20320
    ctx->pc = 0x185e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 18));
    // 0x185e50: 0xffb10318
    ctx->pc = 0x185e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 792), GPR_U64(ctx, 17));
    // 0x185e54: 0xffb30328
    ctx->pc = 0x185e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 808), GPR_U64(ctx, 19));
    // 0x185e58: 0xffb40330
    ctx->pc = 0x185e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 20));
    // 0x185e5c: 0xffb50338
    ctx->pc = 0x185e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 21));
    // 0x185e60: 0xffbf0340
    ctx->pc = 0x185e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
    // 0x185e64: 0xc062210
    ctx->pc = 0x185E64u;
    SET_GPR_U32(ctx, 31, 0x185E6Cu);
    ctx->pc = 0x185E68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E6Cu; }
    }
    if (ctx->pc != 0x185E6Cu) { return; }
    ctx->pc = 0x185E6Cu;
    // 0x185e6c: 0x14400004
    ctx->pc = 0x185E6Cu;
    {
        const bool branch_taken_0x185e6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185E70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x185e6c) {
            ctx->pc = 0x185E80u;
            goto label_185e80;
        }
    }
    ctx->pc = 0x185E74u;
    // 0x185e74: 0x3c028101
    ctx->pc = 0x185e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185e78: 0x10000083
    ctx->pc = 0x185E78u;
    {
        const bool branch_taken_0x185e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185E7Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x185e78) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185E80u;
label_185e80:
    // 0x185e80: 0x3c028101
    ctx->pc = 0x185e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185e84: 0x2431818
    ctx->pc = 0x185e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x185e88: 0x3c040028
    ctx->pc = 0x185e88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x185e8c: 0x832021
    ctx->pc = 0x185e8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185e90: 0x8c8463d4
    ctx->pc = 0x185e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x185e94: 0x1080007c
    ctx->pc = 0x185E94u;
    {
        const bool branch_taken_0x185e94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x185E98u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x185e94) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185E9Cu;
    // 0x185e9c: 0x27b10200
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 512));
    // 0x185ea0: 0x200282d
    ctx->pc = 0x185ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ea4: 0x240202d
    ctx->pc = 0x185ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ea8: 0xc0609a2
    ctx->pc = 0x185EA8u;
    SET_GPR_U32(ctx, 31, 0x185EB0u);
    ctx->pc = 0x185EACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EB0u; }
    }
    if (ctx->pc != 0x185EB0u) { return; }
    ctx->pc = 0x185EB0u;
    // 0x185eb0: 0x10400005
    ctx->pc = 0x185EB0u;
    {
        const bool branch_taken_0x185eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x185eb0) {
            ctx->pc = 0x185EC8u;
            goto label_185ec8;
        }
    }
    ctx->pc = 0x185EB8u;
    // 0x185eb8: 0xc06089c
    ctx->pc = 0x185EB8u;
    SET_GPR_U32(ctx, 31, 0x185EC0u);
    ctx->pc = 0x185EBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EC0u; }
    }
    if (ctx->pc != 0x185EC0u) { return; }
    ctx->pc = 0x185EC0u;
    // 0x185ec0: 0x14400005
    ctx->pc = 0x185EC0u;
    {
        const bool branch_taken_0x185ec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185ec0) {
            ctx->pc = 0x185ED8u;
            goto label_185ed8;
        }
    }
    ctx->pc = 0x185EC8u;
label_185ec8:
    // 0x185ec8: 0x3c028101
    ctx->pc = 0x185ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185ecc: 0x1000006e
    ctx->pc = 0x185ECCu;
    {
        const bool branch_taken_0x185ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185ED0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x185ecc) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185ED4u;
    // 0x185ed4: 0x0
    ctx->pc = 0x185ed4u;
    // NOP
label_185ed8:
    // 0x185ed8: 0xc060880
    ctx->pc = 0x185ED8u;
    SET_GPR_U32(ctx, 31, 0x185EE0u);
    ctx->pc = 0x185EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EE0u; }
    }
    if (ctx->pc != 0x185EE0u) { return; }
    ctx->pc = 0x185EE0u;
    // 0x185ee0: 0x54400005
    ctx->pc = 0x185EE0u;
    {
        const bool branch_taken_0x185ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185ee0) {
            ctx->pc = 0x185EE4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x185EF8u;
            goto label_185ef8;
        }
    }
    ctx->pc = 0x185EE8u;
    // 0x185ee8: 0x3c028101
    ctx->pc = 0x185ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185eec: 0x10000066
    ctx->pc = 0x185EECu;
    {
        const bool branch_taken_0x185eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185EF0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x185eec) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185EF4u;
    // 0x185ef4: 0x0
    ctx->pc = 0x185ef4u;
    // NOP
label_185ef8:
    // 0x185ef8: 0x220282d
    ctx->pc = 0x185ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185efc: 0x3a0302d
    ctx->pc = 0x185efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f00: 0x27a70300
    ctx->pc = 0x185f00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 768));
    // 0x185f04: 0xc0610d8
    ctx->pc = 0x185F04u;
    SET_GPR_U32(ctx, 31, 0x185F0Cu);
    ctx->pc = 0x185F08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 772));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F0Cu; }
    }
    if (ctx->pc != 0x185F0Cu) { return; }
    ctx->pc = 0x185F0Cu;
    // 0x185f0c: 0x3c038101
    ctx->pc = 0x185f0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x185f10: 0x34630011
    ctx->pc = 0x185f10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x185f14: 0x1443005c
    ctx->pc = 0x185F14u;
    {
        const bool branch_taken_0x185f14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x185F18u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        if (branch_taken_0x185f14) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0x97a40000
    ctx->pc = 0x185f1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185f20: 0x3c028101
    ctx->pc = 0x185f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185f24: 0x30830002
    ctx->pc = 0x185f24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x185f28: 0x10600057
    ctx->pc = 0x185F28u;
    {
        const bool branch_taken_0x185f28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F2Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
        if (branch_taken_0x185f28) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185F30u;
    // 0x185f30: 0x30820020
    ctx->pc = 0x185f30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 32));
    // 0x185f34: 0x10400017
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F38u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 640));
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F3Cu;
    // 0x185f3c: 0x220282d
    ctx->pc = 0x185f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f40: 0xc042bf0
    ctx->pc = 0x185F40u;
    SET_GPR_U32(ctx, 31, 0x185F48u);
    ctx->pc = 0x185F44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F48u; }
    }
    if (ctx->pc != 0x185F48u) { return; }
    ctx->pc = 0x185F48u;
    // 0x185f48: 0x3c050024
    ctx->pc = 0x185f48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x185f4c: 0x24a51820
    ctx->pc = 0x185f4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6176));
    // 0x185f50: 0xc042aee
    ctx->pc = 0x185F50u;
    SET_GPR_U32(ctx, 31, 0x185F58u);
    ctx->pc = 0x185F54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F58u; }
    }
    if (ctx->pc != 0x185F58u) { return; }
    ctx->pc = 0x185F58u;
    // 0x185f58: 0x240202d
    ctx->pc = 0x185f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f5c: 0x200282d
    ctx->pc = 0x185f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f60: 0x302d
    ctx->pc = 0x185f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f64: 0x2407ffff
    ctx->pc = 0x185f64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185f68: 0x402d
    ctx->pc = 0x185f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f6c: 0xc06188c
    ctx->pc = 0x185F6Cu;
    SET_GPR_U32(ctx, 31, 0x185F74u);
    ctx->pc = 0x185F70u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 776));
    ctx->pc = 0x186230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186230_0x186230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185F74u; }
    }
    if (ctx->pc != 0x185F74u) { return; }
    ctx->pc = 0x185F74u;
    // 0x185f74: 0x14400044
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185F78u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        if (branch_taken_0x185f74) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185F7Cu;
    // 0x185f7c: 0x8fa30308
    ctx->pc = 0x185f7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x185f80: 0x3c028101
    ctx->pc = 0x185f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185f84: 0x28630003
    ctx->pc = 0x185f84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 3));
    // 0x185f88: 0x1060003f
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F8Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 90));
        if (branch_taken_0x185f88) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185F90u;
    // 0x185f90: 0x97a40000
    ctx->pc = 0x185f90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_185f94:
    // 0x185f94: 0x8fa60300
    ctx->pc = 0x185f94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x185f98: 0x38828000
    ctx->pc = 0x185f98u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 32768));
    // 0x185f9c: 0x8fa70304
    ctx->pc = 0x185f9cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x185fa0: 0x3a0282d
    ctx->pc = 0x185fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fa4: 0x240202d
    ctx->pc = 0x185fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fa8: 0xc0612a8
    ctx->pc = 0x185FA8u;
    SET_GPR_U32(ctx, 31, 0x185FB0u);
    ctx->pc = 0x185FACu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x184AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FB0u; }
    }
    if (ctx->pc != 0x185FB0u) { return; }
    ctx->pc = 0x185FB0u;
    // 0x185fb0: 0x14400035
    ctx->pc = 0x185FB0u;
    {
        const bool branch_taken_0x185fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185FB4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        if (branch_taken_0x185fb0) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185FB8u;
    // 0x185fb8: 0x8fb00010
    ctx->pc = 0x185fb8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185fbc: 0x2402ffff
    ctx->pc = 0x185fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185fc0: 0x16020009
    ctx->pc = 0x185FC0u;
    {
        const bool branch_taken_0x185fc0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x185FC4u;
        SET_GPR_U32(ctx, 19, ((uint32_t)32767 << 16));
        if (branch_taken_0x185fc0) {
            ctx->pc = 0x185FE8u;
            goto label_185fe8;
        }
    }
    ctx->pc = 0x185FC8u;
    // 0x185fc8: 0xc061bbc
    ctx->pc = 0x185FC8u;
    SET_GPR_U32(ctx, 31, 0x185FD0u);
    ctx->pc = 0x185FCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FD0u; }
    }
    if (ctx->pc != 0x185FD0u) { return; }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0x3c038101
    ctx->pc = 0x185fd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x185fd4: 0x3463006f
    ctx->pc = 0x185fd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 111));
    // 0x185fd8: 0x2180b
    ctx->pc = 0x185fd8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x185fdc: 0x1000002a
    ctx->pc = 0x185FDCu;
    {
        const bool branch_taken_0x185fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185FE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185fdc) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x185FE4u;
    // 0x185fe4: 0x0
    ctx->pc = 0x185fe4u;
    // NOP
label_185fe8:
    // 0x185fe8: 0x200882d
    ctx->pc = 0x185fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fec: 0x3c158000
    ctx->pc = 0x185fecu;
    SET_GPR_U32(ctx, 21, ((uint32_t)32768 << 16));
    // 0x185ff0: 0x2414ffff
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185ff4: 0x3673ffff
    ctx->pc = 0x185ff4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
label_185ff8:
    // 0x185ff8: 0x220802d
    ctx->pc = 0x185ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ffc: 0x240202d
    ctx->pc = 0x185ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186000: 0x200282d
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186004: 0xc060b02
    ctx->pc = 0x186004u;
    SET_GPR_U32(ctx, 31, 0x18600Cu);
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 780));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18600Cu; }
    }
    if (ctx->pc != 0x18600Cu) { return; }
    ctx->pc = 0x18600Cu;
    // 0x18600c: 0x240202d
    ctx->pc = 0x18600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186010: 0x40882d
    ctx->pc = 0x186010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186014: 0x8fa2030c
    ctx->pc = 0x186014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x186018: 0x200282d
    ctx->pc = 0x186018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18601c: 0x2353026
    ctx->pc = 0x18601cu;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x186020: 0x14400019
    ctx->pc = 0x186020u;
    {
        const bool branch_taken_0x186020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186024u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 780));
        if (branch_taken_0x186020) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x186028u;
    // 0x186028: 0xc060b28
    ctx->pc = 0x186028u;
    SET_GPR_U32(ctx, 31, 0x186030u);
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186030u; }
    }
    if (ctx->pc != 0x186030u) { return; }
    ctx->pc = 0x186030u;
    // 0x186030: 0x8fa3030c
    ctx->pc = 0x186030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x186034: 0x14600014
    ctx->pc = 0x186034u;
    {
        const bool branch_taken_0x186034 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x186038u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186034) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x18603Cu;
    // 0x18603c: 0x5634ffee
    ctx->pc = 0x18603Cu;
    {
        const bool branch_taken_0x18603c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 20));
        if (branch_taken_0x18603c) {
            ctx->pc = 0x186040u;
            SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
            ctx->pc = 0x185FF8u;
            goto label_185ff8;
        }
    }
    ctx->pc = 0x186044u;
    // 0x186044: 0xc061bbc
    ctx->pc = 0x186044u;
    SET_GPR_U32(ctx, 31, 0x18604Cu);
    ctx->pc = 0x186048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18604Cu; }
    }
    if (ctx->pc != 0x18604Cu) { return; }
    ctx->pc = 0x18604Cu;
    // 0x18604c: 0x10400005
    ctx->pc = 0x18604Cu;
    {
        const bool branch_taken_0x18604c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18604c) {
            ctx->pc = 0x186064u;
            goto label_186064;
        }
    }
    ctx->pc = 0x186054u;
    // 0x186054: 0xc060a84
    ctx->pc = 0x186054u;
    SET_GPR_U32(ctx, 31, 0x18605Cu);
    ctx->pc = 0x186058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A10_0x182a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18605Cu; }
    }
    if (ctx->pc != 0x18605Cu) { return; }
    ctx->pc = 0x18605Cu;
    // 0x18605c: 0x14400004
    ctx->pc = 0x18605Cu;
    {
        const bool branch_taken_0x18605c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186060u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x18605c) {
            ctx->pc = 0x186070u;
            goto label_186070;
        }
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0x3c028101
    ctx->pc = 0x186064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186068: 0x10000007
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18606Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x186068) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0x3c040028
    ctx->pc = 0x186070u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x186074: 0x2431818
    ctx->pc = 0x186074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x186078: 0x24845b48
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23368));
    // 0x18607c: 0x102d
    ctx->pc = 0x18607cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186080: 0x641821
    ctx->pc = 0x186080u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186084: 0xac600890
    ctx->pc = 0x186084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
label_186088:
    // 0x186088: 0xdfb00310
    ctx->pc = 0x186088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x18608c: 0xdfb10318
    ctx->pc = 0x18608cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x186090: 0xdfb20320
    ctx->pc = 0x186090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x186094: 0xdfb30328
    ctx->pc = 0x186094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x186098: 0xdfb40330
    ctx->pc = 0x186098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x18609c: 0xdfb50338
    ctx->pc = 0x18609cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x1860a0: 0xdfbf0340
    ctx->pc = 0x1860a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1860a4: 0x3e00008
    ctx->pc = 0x1860A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1860A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185E80u: goto label_185e80;
            case 0x185EC8u: goto label_185ec8;
            case 0x185ED8u: goto label_185ed8;
            case 0x185EF8u: goto label_185ef8;
            case 0x185F94u: goto label_185f94;
            case 0x185FE8u: goto label_185fe8;
            case 0x185FF8u: goto label_185ff8;
            case 0x186064u: goto label_186064;
            case 0x186070u: goto label_186070;
            case 0x186088u: goto label_186088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1860ACu;
    // 0x1860ac: 0x0
    ctx->pc = 0x1860acu;
    // NOP
}
