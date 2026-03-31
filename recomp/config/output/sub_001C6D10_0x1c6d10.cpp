#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C6D10
// Address: 0x1c6d10 - 0x1c6e70
void sub_001C6D10_0x1c6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c6d10u;

    // 0x1c6d10: 0x27bdffd0
    ctx->pc = 0x1c6d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6d14: 0xffbf0020
    ctx->pc = 0x1c6d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6d18: 0x7fb10010
    ctx->pc = 0x1c6d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6d1c: 0x80882d
    ctx->pc = 0x1c6d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d20: 0x7fb00000
    ctx->pc = 0x1c6d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6d24: 0x3c040033
    ctx->pc = 0x1c6d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6d28: 0xa0802d
    ctx->pc = 0x1c6d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d2c: 0xc071f2c
    ctx->pc = 0x1C6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D34u);
    ctx->pc = 0x1C6D30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x1C7CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CB0_0x1c7cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D34u; }
    }
    if (ctx->pc != 0x1C6D34u) { return; }
    ctx->pc = 0x1C6D34u;
    // 0x1c6d34: 0x26030002
    ctx->pc = 0x1c6d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2));
    // 0x1c6d38: 0x62082a
    ctx->pc = 0x1c6d38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c6d3c: 0x14200014
    ctx->pc = 0x1C6D3Cu;
    {
        const bool branch_taken_0x1c6d3c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6d3c) {
            ctx->pc = 0x1C6D90u;
            goto label_1c6d90;
        }
    }
    ctx->pc = 0x1C6D44u;
    // 0x1c6d44: 0x24040005
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6d48: 0x282d
    ctx->pc = 0x1c6d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d4c: 0xc071eb0
    ctx->pc = 0x1C6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D54u);
    ctx->pc = 0x1C6D50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7AC0_0x1c7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D54u; }
    }
    if (ctx->pc != 0x1C6D54u) { return; }
    ctx->pc = 0x1C6D54u;
    // 0x1c6d54: 0x3c010033
    ctx->pc = 0x1c6d54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6d58: 0x24030015
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c6d5c: 0x942451b8
    ctx->pc = 0x1c6d5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20920)));
    // 0x1c6d60: 0x3c010033
    ctx->pc = 0x1c6d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6d64: 0xac2351b0
    ctx->pc = 0x1c6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 3));
    // 0x1c6d68: 0x3c010023
    ctx->pc = 0x1c6d68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c6d6c: 0x8c235f58
    ctx->pc = 0x1c6d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 24408)));
    // 0x1c6d70: 0x83182a
    ctx->pc = 0x1c6d70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c6d74: 0x14600037
    ctx->pc = 0x1C6D74u;
    {
        const bool branch_taken_0x1c6d74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6d74) {
            ctx->pc = 0x1C6E54u;
            goto label_1c6e54;
        }
    }
    ctx->pc = 0x1C6D7Cu;
    // 0x1c6d7c: 0x24030010
    ctx->pc = 0x1c6d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6d80: 0x3c010033
    ctx->pc = 0x1c6d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6d84: 0xac2351b0
    ctx->pc = 0x1c6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 3));
    // 0x1c6d88: 0x10000033
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6D8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6E58u;
            goto label_1c6e58;
        }
    }
    ctx->pc = 0x1C6D90u;
label_1c6d90:
    // 0x1c6d90: 0x3c010033
    ctx->pc = 0x1c6d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6d94: 0x3c040033
    ctx->pc = 0x1c6d94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6d98: 0x90235054
    ctx->pc = 0x1c6d98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20564)));
    // 0x1c6d9c: 0x32020fff
    ctx->pc = 0x1c6d9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4095));
    // 0x1c6da0: 0x248437b0
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    // 0x1c6da4: 0x31b00
    ctx->pc = 0x1c6da4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 12));
    // 0x1c6da8: 0x621025
    ctx->pc = 0x1c6da8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6dac: 0xc071f54
    ctx->pc = 0x1C6DACu;
    SET_GPR_U32(ctx, 31, 0x1C6DB4u);
    ctx->pc = 0x1C6DB0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1C7D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D50_0x1c7d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DB4u; }
    }
    if (ctx->pc != 0x1C6DB4u) { return; }
    ctx->pc = 0x1C6DB4u;
    // 0x1c6db4: 0x3c040033
    ctx->pc = 0x1c6db4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6db8: 0x220282d
    ctx->pc = 0x1c6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dbc: 0x200302d
    ctx->pc = 0x1c6dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dc0: 0xc071f4c
    ctx->pc = 0x1C6DC0u;
    SET_GPR_U32(ctx, 31, 0x1C6DC8u);
    ctx->pc = 0x1C6DC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x1C7D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D30_0x1c7d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DC8u; }
    }
    if (ctx->pc != 0x1C6DC8u) { return; }
    ctx->pc = 0x1C6DC8u;
    // 0x1c6dc8: 0x3c010033
    ctx->pc = 0x1c6dc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6dcc: 0x3c040033
    ctx->pc = 0x1c6dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6dd0: 0x8c3051d0
    ctx->pc = 0x1c6dd0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 20944)));
    // 0x1c6dd4: 0xc071f24
    ctx->pc = 0x1C6DD4u;
    SET_GPR_U32(ctx, 31, 0x1C6DDCu);
    ctx->pc = 0x1C6DD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7C90_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DDCu; }
    }
    if (ctx->pc != 0x1C6DDCu) { return; }
    ctx->pc = 0x1C6DDCu;
    // 0x1c6ddc: 0x202082a
    ctx->pc = 0x1c6ddcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1c6de0: 0x10200017
    ctx->pc = 0x1C6DE0u;
    {
        const bool branch_taken_0x1c6de0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6de0) {
            ctx->pc = 0x1C6E40u;
            goto label_1c6e40;
        }
    }
    ctx->pc = 0x1C6DE8u;
    // 0x1c6de8: 0x3c010033
    ctx->pc = 0x1c6de8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6dec: 0xac2251d0
    ctx->pc = 0x1c6decu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20944), GPR_U32(ctx, 2));
    // 0x1c6df0: 0x3c010032
    ctx->pc = 0x1c6df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c6df4: 0x902643dc
    ctx->pc = 0x1c6df4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x1c6df8: 0x3c010032
    ctx->pc = 0x1c6df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c6dfc: 0x902543dd
    ctx->pc = 0x1c6dfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17373)));
    // 0x1c6e00: 0x3c010032
    ctx->pc = 0x1c6e00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c6e04: 0x52a00
    ctx->pc = 0x1c6e04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x1c6e08: 0x902443da
    ctx->pc = 0x1c6e08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1c6e0c: 0xc52825
    ctx->pc = 0x1c6e0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c6e10: 0x3c010032
    ctx->pc = 0x1c6e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c6e14: 0x902343db
    ctx->pc = 0x1c6e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17371)));
    // 0x1c6e18: 0x31a00
    ctx->pc = 0x1c6e18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1c6e1c: 0x3c010033
    ctx->pc = 0x1c6e1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6e20: 0x832025
    ctx->pc = 0x1c6e20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c6e24: 0x41940
    ctx->pc = 0x1c6e24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c6e28: 0x641823
    ctx->pc = 0x1c6e28u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c6e2c: 0x31880
    ctx->pc = 0x1c6e2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c6e30: 0x641821
    ctx->pc = 0x1c6e30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c6e34: 0x318c0
    ctx->pc = 0x1c6e34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c6e38: 0xa31821
    ctx->pc = 0x1c6e38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c6e3c: 0xac2351c0
    ctx->pc = 0x1c6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20928), GPR_U32(ctx, 3));
label_1c6e40:
    // 0x1c6e40: 0x3c010033
    ctx->pc = 0x1c6e40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6e44: 0x8c235084
    ctx->pc = 0x1c6e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20612)));
    // 0x1c6e48: 0x24630001
    ctx->pc = 0x1c6e48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c6e4c: 0x3c010033
    ctx->pc = 0x1c6e4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6e50: 0xac235084
    ctx->pc = 0x1c6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20612), GPR_U32(ctx, 3));
label_1c6e54:
    // 0x1c6e54: 0xdfbf0020
    ctx->pc = 0x1c6e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6e58:
    // 0x1c6e58: 0x7bb10010
    ctx->pc = 0x1c6e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e5c: 0x7bb00000
    ctx->pc = 0x1c6e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e60: 0x3e00008
    ctx->pc = 0x1C6E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6E64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6D90u: goto label_1c6d90;
            case 0x1C6E40u: goto label_1c6e40;
            case 0x1C6E54u: goto label_1c6e54;
            case 0x1C6E58u: goto label_1c6e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6E68u;
    // 0x1c6e68: 0x0
    ctx->pc = 0x1c6e68u;
    // NOP
    // 0x1c6e6c: 0x0
    ctx->pc = 0x1c6e6cu;
    // NOP
}
