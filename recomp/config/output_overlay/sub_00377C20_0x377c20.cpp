#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377C20
// Address: 0x377c20 - 0x377e30
void sub_00377C20_0x377c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377c20u;

    // 0x377c20: 0x27bdffd0
    ctx->pc = 0x377c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377c24: 0x3c010032
    ctx->pc = 0x377c24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377c28: 0xffbf0020
    ctx->pc = 0x377c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x377c2c: 0x24030001
    ctx->pc = 0x377c2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x377c30: 0x7fb10010
    ctx->pc = 0x377c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377c34: 0x7fb00000
    ctx->pc = 0x377c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377c38: 0x90244405
    ctx->pc = 0x377c38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x377c3c: 0x14830077
    ctx->pc = 0x377C3Cu;
    {
        const bool branch_taken_0x377c3c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x377C40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x377c3c) {
            ctx->pc = 0x377E1Cu;
            goto label_377e1c;
        }
    }
    ctx->pc = 0x377C44u;
    // 0x377c44: 0xc06bde0
    ctx->pc = 0x377C44u;
    SET_GPR_U32(ctx, 31, 0x377C4Cu);
    ctx->pc = 0x377C48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C4Cu; }
        if (ctx->pc != 0x377C4Cu) { return; }
    }
    ctx->pc = 0x377C4Cu;
    // 0x377c4c: 0x3c010057
    ctx->pc = 0x377c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c50: 0x240301c0
    ctx->pc = 0x377c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 448));
    // 0x377c54: 0xa420afe8
    ctx->pc = 0x377c54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946792), (uint16_t)GPR_U32(ctx, 0));
    // 0x377c58: 0x3c010057
    ctx->pc = 0x377c58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c5c: 0xa423aff0
    ctx->pc = 0x377c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946800), (uint16_t)GPR_U32(ctx, 3));
    // 0x377c60: 0x3c010057
    ctx->pc = 0x377c60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c64: 0xa420afe0
    ctx->pc = 0x377c64u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946784), (uint16_t)GPR_U32(ctx, 0));
    // 0x377c68: 0x3c01002a
    ctx->pc = 0x377c68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x377c6c: 0x8c26f9bc
    ctx->pc = 0x377c6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x377c70: 0x3c010032
    ctx->pc = 0x377c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377c74: 0x8c25440c
    ctx->pc = 0x377c74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x377c78: 0x3c01002a
    ctx->pc = 0x377c78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x377c7c: 0x8c24fa00
    ctx->pc = 0x377c7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    // 0x377c80: 0x3c010057
    ctx->pc = 0x377c80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c84: 0x42480
    ctx->pc = 0x377c84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 18));
    // 0x377c88: 0x8c23af00
    ctx->pc = 0x377c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946560)));
    // 0x377c8c: 0xa42021
    ctx->pc = 0x377c8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x377c90: 0x3c010057
    ctx->pc = 0x377c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c94: 0xa426aff8
    ctx->pc = 0x377c94u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946808), (uint16_t)GPR_U32(ctx, 6));
    // 0x377c98: 0x3c010057
    ctx->pc = 0x377c98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377c9c: 0xac24ba80
    ctx->pc = 0x377c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949504), GPR_U32(ctx, 4));
    // 0x377ca0: 0x3c010057
    ctx->pc = 0x377ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377ca4: 0xac24ba88
    ctx->pc = 0x377ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949512), GPR_U32(ctx, 4));
    // 0x377ca8: 0x3c010057
    ctx->pc = 0x377ca8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377cac: 0xac24ba90
    ctx->pc = 0x377cacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949520), GPR_U32(ctx, 4));
    // 0x377cb0: 0x3c010057
    ctx->pc = 0x377cb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377cb4: 0x10600028
    ctx->pc = 0x377CB4u;
    {
        const bool branch_taken_0x377cb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x377CB8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294949512)));
        if (branch_taken_0x377cb4) {
            ctx->pc = 0x377D58u;
            goto label_377d58;
        }
    }
    ctx->pc = 0x377CBCu;
    // 0x377cbc: 0xc0de280
    ctx->pc = 0x377CBCu;
    SET_GPR_U32(ctx, 31, 0x377CC4u);
    ctx->pc = 0x378A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00378A00_0x378a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377CC4u; }
    }
    if (ctx->pc != 0x377CC4u) { return; }
    ctx->pc = 0x377CC4u;
    // 0x377cc4: 0x10000018
    ctx->pc = 0x377CC4u;
    {
        const bool branch_taken_0x377cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377CC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377cc4) {
            ctx->pc = 0x377D28u;
            goto label_377d28;
        }
    }
    ctx->pc = 0x377CCCu;
label_377ccc:
    // 0x377ccc: 0x31900
    ctx->pc = 0x377cccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x377cd0: 0x2442b000
    ctx->pc = 0x377cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x377cd4: 0x431821
    ctx->pc = 0x377cd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377cd8: 0x8c640000
    ctx->pc = 0x377cd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377cdc: 0x10800010
    ctx->pc = 0x377CDCu;
    {
        const bool branch_taken_0x377cdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x377CE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x377cdc) {
            ctx->pc = 0x377D20u;
            goto label_377d20;
        }
    }
    ctx->pc = 0x377CE4u;
    // 0x377ce4: 0xac600000
    ctx->pc = 0x377ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x377ce8: 0x3c010057
    ctx->pc = 0x377ce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377cec: 0xc4600004
    ctx->pc = 0x377cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377cf0: 0x3c023f80
    ctx->pc = 0x377cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x377cf4: 0xe420afd0
    ctx->pc = 0x377cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946768), bits); }
    // 0x377cf8: 0xc4600008
    ctx->pc = 0x377cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377cfc: 0x3c010057
    ctx->pc = 0x377cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d00: 0xe420afd4
    ctx->pc = 0x377d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946772), bits); }
    // 0x377d04: 0xc460000c
    ctx->pc = 0x377d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377d08: 0x3c010057
    ctx->pc = 0x377d08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d0c: 0xe420afd8
    ctx->pc = 0x377d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946776), bits); }
    // 0x377d10: 0x3c010057
    ctx->pc = 0x377d10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d14: 0xc0ddf8c
    ctx->pc = 0x377D14u;
    SET_GPR_U32(ctx, 31, 0x377D1Cu);
    ctx->pc = 0x377D18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946780), GPR_U32(ctx, 2));
    ctx->pc = 0x377E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377E30_0x377e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D1Cu; }
    }
    if (ctx->pc != 0x377D1Cu) { return; }
    ctx->pc = 0x377D1Cu;
    // 0x377d1c: 0x26220001
    ctx->pc = 0x377d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
label_377d20:
    // 0x377d20: 0x28c3c
    ctx->pc = 0x377d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x377d24: 0x118c3f
    ctx->pc = 0x377d24u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_377d28:
    // 0x377d28: 0x3c010057
    ctx->pc = 0x377d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d2c: 0x111c3c
    ctx->pc = 0x377d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x377d30: 0x8c22af00
    ctx->pc = 0x377d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946560)));
    // 0x377d34: 0x31c3f
    ctx->pc = 0x377d34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x377d38: 0x62102b
    ctx->pc = 0x377d38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x377d3c: 0x1440ffe3
    ctx->pc = 0x377D3Cu;
    {
        const bool branch_taken_0x377d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x377D40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
        if (branch_taken_0x377d3c) {
            ctx->pc = 0x377CCCu;
            goto label_377ccc;
        }
    }
    ctx->pc = 0x377D44u;
    // 0x377d44: 0x3c010057
    ctx->pc = 0x377d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d48: 0xac20af00
    ctx->pc = 0x377d48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946560), GPR_U32(ctx, 0));
    // 0x377d4c: 0x3c010032
    ctx->pc = 0x377d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377d50: 0xc0de320
    ctx->pc = 0x377D50u;
    SET_GPR_U32(ctx, 31, 0x377D58u);
    ctx->pc = 0x377D54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 16588)));
    ctx->pc = 0x378C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00378C80_0x378c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D58u; }
    }
    if (ctx->pc != 0x377D58u) { return; }
    ctx->pc = 0x377D58u;
label_377d58:
    // 0x377d58: 0x3c010057
    ctx->pc = 0x377d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d5c: 0x8c23ba90
    ctx->pc = 0x377d5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949520)));
    // 0x377d60: 0x3c010057
    ctx->pc = 0x377d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377d64: 0x8c26ba88
    ctx->pc = 0x377d64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949512)));
    // 0x377d68: 0xc3082b
    ctx->pc = 0x377d68u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x377d6c: 0x1020002b
    ctx->pc = 0x377D6Cu;
    {
        const bool branch_taken_0x377d6c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x377d6c) {
            ctx->pc = 0x377E1Cu;
            goto label_377e1c;
        }
    }
    ctx->pc = 0x377D74u;
    // 0x377d74: 0x661823
    ctx->pc = 0x377d74u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x377d78: 0x4610003
    ctx->pc = 0x377D78u;
    {
        const bool branch_taken_0x377d78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x377D7Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x377d78) {
            ctx->pc = 0x377D88u;
            goto label_377d88;
        }
    }
    ctx->pc = 0x377D80u;
    // 0x377d80: 0x2462000f
    ctx->pc = 0x377d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 15));
    // 0x377d84: 0x21103
    ctx->pc = 0x377d84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_377d88:
    // 0x377d88: 0x2448ffff
    ctx->pc = 0x377d88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x377d8c: 0x3c037000
    ctx->pc = 0x377d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x377d90: 0x1032821
    ctx->pc = 0x377d90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x377d94: 0x3c028000
    ctx->pc = 0x377d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x377d98: 0xa22825
    ctx->pc = 0x377d98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x377d9c: 0x10213c
    ctx->pc = 0x377d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 4));
    // 0x377da0: 0x5283c
    ctx->pc = 0x377da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x377da4: 0x3c025000
    ctx->pc = 0x377da4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x377da8: 0x5283e
    ctx->pc = 0x377da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x377dac: 0x1023825
    ctx->pc = 0x377dacu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x377db0: 0x3c031300
    ctx->pc = 0x377db0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4864 << 16));
    // 0x377db4: 0xfcc50000
    ctx->pc = 0x377db4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x377db8: 0xacc30008
    ctx->pc = 0x377db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x377dbc: 0x3c010057
    ctx->pc = 0x377dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377dc0: 0x8c26ba88
    ctx->pc = 0x377dc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949512)));
    // 0x377dc4: 0x2502ffff
    ctx->pc = 0x377dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x377dc8: 0x2283c
    ctx->pc = 0x377dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x377dcc: 0x4213e
    ctx->pc = 0x377dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x377dd0: 0x3c021000
    ctx->pc = 0x377dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x377dd4: 0x5283e
    ctx->pc = 0x377dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x377dd8: 0x2183c
    ctx->pc = 0x377dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x377ddc: 0x34028000
    ctx->pc = 0x377ddcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x377de0: 0x431825
    ctx->pc = 0x377de0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377de4: 0xacc7000c
    ctx->pc = 0x377de4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x377de8: 0x3c010057
    ctx->pc = 0x377de8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377dec: 0x8c26ba88
    ctx->pc = 0x377decu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294949512)));
    // 0x377df0: 0xa31825
    ctx->pc = 0x377df0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x377df4: 0x3c05002a
    ctx->pc = 0x377df4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)42 << 16));
    // 0x377df8: 0x2402000e
    ctx->pc = 0x377df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x377dfc: 0x24a5f6f0
    ctx->pc = 0x377dfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964976));
    // 0x377e00: 0xfcc30010
    ctx->pc = 0x377e00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x377e04: 0xc0633bc
    ctx->pc = 0x377E04u;
    SET_GPR_U32(ctx, 31, 0x377E0Cu);
    ctx->pc = 0x377E08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    ctx->pc = 0x18CEF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E0Cu; }
        if (ctx->pc != 0x377E0Cu) { return; }
    }
    ctx->pc = 0x377E0Cu;
    // 0x377e0c: 0x3c01002a
    ctx->pc = 0x377e0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x377e10: 0x8c24fe68
    ctx->pc = 0x377e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x377e14: 0xc065eec
    ctx->pc = 0x377E14u;
    SET_GPR_U32(ctx, 31, 0x377E1Cu);
    ctx->pc = 0x377E18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x197BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E1Cu; }
        if (ctx->pc != 0x377E1Cu) { return; }
    }
    ctx->pc = 0x377E1Cu;
label_377e1c:
    // 0x377e1c: 0xdfbf0020
    ctx->pc = 0x377e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377e20: 0x7bb10010
    ctx->pc = 0x377e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377e24: 0x7bb00000
    ctx->pc = 0x377e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377e28: 0x3e00008
    ctx->pc = 0x377E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377CCCu: goto label_377ccc;
            case 0x377D20u: goto label_377d20;
            case 0x377D28u: goto label_377d28;
            case 0x377D58u: goto label_377d58;
            case 0x377D88u: goto label_377d88;
            case 0x377E1Cu: goto label_377e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377E30u;
}
