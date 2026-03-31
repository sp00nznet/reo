#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167E80
// Address: 0x167e80 - 0x167fc0
void sub_00167E80_0x167e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167e80u;

    // 0x167e80: 0x27bdffd0
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167e84: 0xffb20020
    ctx->pc = 0x167e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167e88: 0x80902d
    ctx->pc = 0x167e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e8c: 0xffb00010
    ctx->pc = 0x167e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167e90: 0x26500cc0
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 3264));
    // 0x167e94: 0x3a0202d
    ctx->pc = 0x167e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e98: 0xffb10018
    ctx->pc = 0x167e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167e9c: 0xffbf0028
    ctx->pc = 0x167e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x167ea0: 0xc05a7b2
    ctx->pc = 0x167EA0u;
    SET_GPR_U32(ctx, 31, 0x167EA8u);
    ctx->pc = 0x167EA4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EA8u; }
    }
    if (ctx->pc != 0x167EA8u) { return; }
    ctx->pc = 0x167EA8u;
    // 0x167ea8: 0x8e060120
    ctx->pc = 0x167ea8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x167eac: 0x8e030124
    ctx->pc = 0x167eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x167eb0: 0x3a0202d
    ctx->pc = 0x167eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167eb4: 0xd13021
    ctx->pc = 0x167eb4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x167eb8: 0x24630001
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x167ebc: 0xae060120
    ctx->pc = 0x167ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 6));
    // 0x167ec0: 0x2467001f
    ctx->pc = 0x167ec0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 31));
    // 0x167ec4: 0x28650000
    ctx->pc = 0x167ec4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x167ec8: 0x60102d
    ctx->pc = 0x167ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ecc: 0xe5100b
    ctx->pc = 0x167eccu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x167ed0: 0x21143
    ctx->pc = 0x167ed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x167ed4: 0x21140
    ctx->pc = 0x167ed4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x167ed8: 0x621023
    ctx->pc = 0x167ed8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167edc: 0x21080
    ctx->pc = 0x167edcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167ee0: 0x521021
    ctx->pc = 0x167ee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x167ee4: 0xac460de8
    ctx->pc = 0x167ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3560), GPR_U32(ctx, 6));
    // 0x167ee8: 0xc05a7b8
    ctx->pc = 0x167EE8u;
    SET_GPR_U32(ctx, 31, 0x167EF0u);
    ctx->pc = 0x167EECu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EF0u; }
    }
    if (ctx->pc != 0x167EF0u) { return; }
    ctx->pc = 0x167EF0u;
    // 0x167ef0: 0xdfb00010
    ctx->pc = 0x167ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ef4: 0xdfb10018
    ctx->pc = 0x167ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167ef8: 0xdfb20020
    ctx->pc = 0x167ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167efc: 0xdfbf0028
    ctx->pc = 0x167efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167f00: 0x3e00008
    ctx->pc = 0x167F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167F94u: goto label_167f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167F08u;
    // 0x167f08: 0x27bdffc0
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167f0c: 0xffb10018
    ctx->pc = 0x167f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167f10: 0x80882d
    ctx->pc = 0x167f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f14: 0xffb00010
    ctx->pc = 0x167f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167f18: 0x26300cc0
    ctx->pc = 0x167f18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3264));
    // 0x167f1c: 0x3a0202d
    ctx->pc = 0x167f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f20: 0xffb20020
    ctx->pc = 0x167f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167f24: 0xffb30028
    ctx->pc = 0x167f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167f28: 0xa0982d
    ctx->pc = 0x167f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f2c: 0xffb40030
    ctx->pc = 0x167f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x167f30: 0xa02d
    ctx->pc = 0x167f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f34: 0xffbf0038
    ctx->pc = 0x167f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x167f38: 0xc05a7b2
    ctx->pc = 0x167F38u;
    SET_GPR_U32(ctx, 31, 0x167F40u);
    ctx->pc = 0x167F3Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F40u; }
    }
    if (ctx->pc != 0x167F40u) { return; }
    ctx->pc = 0x167F40u;
    // 0x167f40: 0x8e0701b0
    ctx->pc = 0x167f40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x167f44: 0x8e0301b4
    ctx->pc = 0x167f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x167f48: 0x3a0202d
    ctx->pc = 0x167f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f4c: 0x24e6001f
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 31));
    // 0x167f50: 0x28e50000
    ctx->pc = 0x167f50u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), 0));
    // 0x167f54: 0xe0102d
    ctx->pc = 0x167f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f58: 0xe31823
    ctx->pc = 0x167f58u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x167f5c: 0xc5100b
    ctx->pc = 0x167f5cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x167f60: 0x28630020
    ctx->pc = 0x167f60u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 32));
    // 0x167f64: 0x1060000b
    ctx->pc = 0x167F64u;
    {
        const bool branch_taken_0x167f64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x167F68u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        if (branch_taken_0x167f64) {
            ctx->pc = 0x167F94u;
            goto label_167f94;
        }
    }
    ctx->pc = 0x167F6Cu;
    // 0x167f6c: 0x21140
    ctx->pc = 0x167f6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x167f70: 0xae1201a8
    ctx->pc = 0x167f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 18));
    // 0x167f74: 0xe21023
    ctx->pc = 0x167f74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x167f78: 0x24140001
    ctx->pc = 0x167f78u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167f7c: 0x21080
    ctx->pc = 0x167f7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x167f80: 0x511021
    ctx->pc = 0x167f80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167f84: 0xac530e78
    ctx->pc = 0x167f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3704), GPR_U32(ctx, 19));
    // 0x167f88: 0x8e0301b0
    ctx->pc = 0x167f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x167f8c: 0x24630001
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x167f90: 0xae0301b0
    ctx->pc = 0x167f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
label_167f94:
    // 0x167f94: 0xc05a7b8
    ctx->pc = 0x167F94u;
    SET_GPR_U32(ctx, 31, 0x167F9Cu);
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F9Cu; }
    }
    if (ctx->pc != 0x167F9Cu) { return; }
    ctx->pc = 0x167F9Cu;
    // 0x167f9c: 0x280102d
    ctx->pc = 0x167f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fa0: 0xdfb00010
    ctx->pc = 0x167fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167fa4: 0xdfb10018
    ctx->pc = 0x167fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167fa8: 0xdfb20020
    ctx->pc = 0x167fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167fac: 0xdfb30028
    ctx->pc = 0x167facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167fb0: 0xdfb40030
    ctx->pc = 0x167fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167fb4: 0xdfbf0038
    ctx->pc = 0x167fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167fb8: 0x3e00008
    ctx->pc = 0x167FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167F94u: goto label_167f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167FC0u;
}
