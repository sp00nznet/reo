#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108CD0
// Address: 0x108cd0 - 0x108e10
void sub_00108CD0_0x108cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108cd0u;

    // 0x108cd0: 0x27bdffd0
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108cd4: 0xffb10018
    ctx->pc = 0x108cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x108cd8: 0xa0882d
    ctx->pc = 0x108cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cdc: 0x3a0282d
    ctx->pc = 0x108cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ce0: 0xffb00010
    ctx->pc = 0x108ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x108ce4: 0xffb20020
    ctx->pc = 0x108ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108ce8: 0xffbf0028
    ctx->pc = 0x108ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x108cec: 0xc04226c
    ctx->pc = 0x108CECu;
    SET_GPR_U32(ctx, 31, 0x108CF4u);
    ctx->pc = 0x108CF0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1089B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001089B0_0x1089b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CF4u; }
    }
    if (ctx->pc != 0x108CF4u) { return; }
    ctx->pc = 0x108CF4u;
    // 0x108cf4: 0x27a50004
    ctx->pc = 0x108cf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x108cf8: 0x220202d
    ctx->pc = 0x108cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cfc: 0xc04226c
    ctx->pc = 0x108CFCu;
    SET_GPR_U32(ctx, 31, 0x108D04u);
    ctx->pc = 0x108D00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1089B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001089B0_0x1089b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D04u; }
    }
    if (ctx->pc != 0x108D04u) { return; }
    ctx->pc = 0x108D04u;
    // 0x108d04: 0x8e030010
    ctx->pc = 0x108d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x108d08: 0x40402d
    ctx->pc = 0x108d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d0c: 0x8e260010
    ctx->pc = 0x108d0cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x108d10: 0x12283f
    ctx->pc = 0x108d10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x108d14: 0x8fa40004
    ctx->pc = 0x108d14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108d18: 0x8383f
    ctx->pc = 0x108d18u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x108d1c: 0x8fa20000
    ctx->pc = 0x108d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d20: 0x661823
    ctx->pc = 0x108d20u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x108d24: 0x31940
    ctx->pc = 0x108d24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x108d28: 0x441023
    ctx->pc = 0x108d28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108d2c: 0x431021
    ctx->pc = 0x108d2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108d30: 0x22500
    ctx->pc = 0x108d30u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 20));
    // 0x108d34: 0x80182d
    ctx->pc = 0x108d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d38: 0xa42821
    ctx->pc = 0x108d38u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x108d3c: 0xe31823
    ctx->pc = 0x108d3cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x108d40: 0x18400007
    ctx->pc = 0x108D40u;
    {
        const bool branch_taken_0x108d40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x108D44u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        if (branch_taken_0x108d40) {
            ctx->pc = 0x108D60u;
            goto label_108d60;
        }
    }
    ctx->pc = 0x108D48u;
    // 0x108d48: 0x3c02ffff
    ctx->pc = 0x108d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x108d4c: 0x2103e
    ctx->pc = 0x108d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x108d50: 0x2429024
    ctx->pc = 0x108d50u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x108d54: 0x10000007
    ctx->pc = 0x108D54u;
    {
        const bool branch_taken_0x108d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D58u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        if (branch_taken_0x108d54) {
            ctx->pc = 0x108D74u;
            goto label_108d74;
        }
    }
    ctx->pc = 0x108D5Cu;
    // 0x108d5c: 0x0
    ctx->pc = 0x108d5cu;
    // NOP
label_108d60:
    // 0x108d60: 0x3c02ffff
    ctx->pc = 0x108d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x108d64: 0x2103e
    ctx->pc = 0x108d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x108d68: 0x3183c
    ctx->pc = 0x108d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108d6c: 0x1024024
    ctx->pc = 0x108d6cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x108d70: 0x1034025
    ctx->pc = 0x108d70u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_108d74:
    // 0x108d74: 0x240202d
    ctx->pc = 0x108d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d78: 0x100282d
    ctx->pc = 0x108d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d7c: 0xc04480e
    ctx->pc = 0x108D7Cu;
    SET_GPR_U32(ctx, 31, 0x108D84u);
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D84u; }
    }
    if (ctx->pc != 0x108D84u) { return; }
    ctx->pc = 0x108D84u;
    // 0x108d84: 0xdfb00010
    ctx->pc = 0x108d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108d88: 0xdfb10018
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108d8c: 0xdfb20020
    ctx->pc = 0x108d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108d90: 0xdfbf0028
    ctx->pc = 0x108d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108d94: 0x3e00008
    ctx->pc = 0x108D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108D60u: goto label_108d60;
            case 0x108D74u: goto label_108d74;
            case 0x108DD8u: goto label_108dd8;
            case 0x108DE0u: goto label_108de0;
            case 0x108DFCu: goto label_108dfc;
            case 0x108E04u: goto label_108e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108D9Cu;
    // 0x108d9c: 0x0
    ctx->pc = 0x108d9cu;
    // NOP
    // 0x108da0: 0x27bdfff0
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108da4: 0xffb00000
    ctx->pc = 0x108da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108da8: 0x80802d
    ctx->pc = 0x108da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dac: 0x2a020018
    ctx->pc = 0x108dacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 24));
    // 0x108db0: 0x3404ffc0
    ctx->pc = 0x108db0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
    // 0x108db4: 0x423bc
    ctx->pc = 0x108db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x108db8: 0x10400007
    ctx->pc = 0x108DB8u;
    {
        const bool branch_taken_0x108db8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108DBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x108db8) {
            ctx->pc = 0x108DD8u;
            goto label_108dd8;
        }
    }
    ctx->pc = 0x108DC0u;
    // 0x108dc0: 0x1018c0
    ctx->pc = 0x108dc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x108dc4: 0x3c020023
    ctx->pc = 0x108dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x108dc8: 0x431021
    ctx->pc = 0x108dc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108dcc: 0xdc427928
    ctx->pc = 0x108dccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 31016)));
    // 0x108dd0: 0x1000000c
    ctx->pc = 0x108DD0u;
    {
        const bool branch_taken_0x108dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108DD4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x108dd0) {
            ctx->pc = 0x108E04u;
            goto label_108e04;
        }
    }
    ctx->pc = 0x108DD8u;
label_108dd8:
    // 0x108dd8: 0x1a000008
    ctx->pc = 0x108DD8u;
    {
        const bool branch_taken_0x108dd8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x108dd8) {
            ctx->pc = 0x108DFCu;
            goto label_108dfc;
        }
    }
    ctx->pc = 0x108DE0u;
label_108de0:
    // 0x108de0: 0x34058048
    ctx->pc = 0x108de0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
    // 0x108de4: 0x52bfc
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x108de8: 0xc04476c
    ctx->pc = 0x108DE8u;
    SET_GPR_U32(ctx, 31, 0x108DF0u);
    ctx->pc = 0x108DECu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DF0u; }
    }
    if (ctx->pc != 0x108DF0u) { return; }
    ctx->pc = 0x108DF0u;
    // 0x108df0: 0x40202d
    ctx->pc = 0x108df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108df4: 0x1e00fffa
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x108df4) {
            ctx->pc = 0x108DE0u;
            goto label_108de0;
        }
    }
    ctx->pc = 0x108DFCu;
label_108dfc:
    // 0x108dfc: 0x80102d
    ctx->pc = 0x108dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e00: 0xdfb00000
    ctx->pc = 0x108e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108e04:
    // 0x108e04: 0xdfbf0008
    ctx->pc = 0x108e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108e08: 0x3e00008
    ctx->pc = 0x108E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108D60u: goto label_108d60;
            case 0x108D74u: goto label_108d74;
            case 0x108DD8u: goto label_108dd8;
            case 0x108DE0u: goto label_108de0;
            case 0x108DFCu: goto label_108dfc;
            case 0x108E04u: goto label_108e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108E10u;
}
