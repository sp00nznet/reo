#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1EE0
// Address: 0x1c1ee0 - 0x1c2000
void sub_001C1EE0_0x1c1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1ee0u;

    // 0x1c1ee0: 0x3c020023
    ctx->pc = 0x1c1ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1ee4: 0x41880
    ctx->pc = 0x1c1ee4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ee8: 0x24425ce0
    ctx->pc = 0x1c1ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23776));
    // 0x1c1eec: 0x431021
    ctx->pc = 0x1c1eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1ef0: 0x3e00008
    ctx->pc = 0x1C1EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1EF8u;
    // 0x1c1ef8: 0x0
    ctx->pc = 0x1c1ef8u;
    // NOP
    // 0x1c1efc: 0x0
    ctx->pc = 0x1c1efcu;
    // NOP
    // 0x1c1f00: 0x3c020023
    ctx->pc = 0x1c1f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1f04: 0x41880
    ctx->pc = 0x1c1f04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1f08: 0x24425470
    ctx->pc = 0x1c1f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21616));
    // 0x1c1f0c: 0x431021
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1f10: 0x3e00008
    ctx->pc = 0x1C1F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1F18u;
    // 0x1c1f18: 0x0
    ctx->pc = 0x1c1f18u;
    // NOP
    // 0x1c1f1c: 0x0
    ctx->pc = 0x1c1f1cu;
    // NOP
    // 0x1c1f20: 0x3c020023
    ctx->pc = 0x1c1f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1f24: 0x41880
    ctx->pc = 0x1c1f24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1f28: 0x24425500
    ctx->pc = 0x1c1f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21760));
    // 0x1c1f2c: 0x431021
    ctx->pc = 0x1c1f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1f30: 0x3e00008
    ctx->pc = 0x1C1F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1F38u;
    // 0x1c1f38: 0x0
    ctx->pc = 0x1c1f38u;
    // NOP
    // 0x1c1f3c: 0x0
    ctx->pc = 0x1c1f3cu;
    // NOP
    // 0x1c1f40: 0x3c020023
    ctx->pc = 0x1c1f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1f44: 0x41880
    ctx->pc = 0x1c1f44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1f48: 0x24425eb8
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24248));
    // 0x1c1f4c: 0x431021
    ctx->pc = 0x1c1f4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1f50: 0x3e00008
    ctx->pc = 0x1C1F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1F58u;
    // 0x1c1f58: 0x0
    ctx->pc = 0x1c1f58u;
    // NOP
    // 0x1c1f5c: 0x0
    ctx->pc = 0x1c1f5cu;
    // NOP
    // 0x1c1f60: 0x27bdfff0
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1f64: 0x3c010032
    ctx->pc = 0x1c1f64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c1f68: 0xffbf0000
    ctx->pc = 0x1c1f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1f6c: 0x8c264480
    ctx->pc = 0x1c1f6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 17536)));
    // 0x1c1f70: 0x14c00003
    ctx->pc = 0x1C1F70u;
    {
        const bool branch_taken_0x1c1f70 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1F74u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x1c1f70) {
            ctx->pc = 0x1C1F80u;
            goto label_1c1f80;
        }
    }
    ctx->pc = 0x1C1F78u;
    // 0x1c1f78: 0x1000000a
    ctx->pc = 0x1C1F78u;
    {
        const bool branch_taken_0x1c1f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1F7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f78) {
            ctx->pc = 0x1C1FA4u;
            goto label_1c1fa4;
        }
    }
    ctx->pc = 0x1C1F80u;
label_1c1f80:
    // 0x1c1f80: 0x51180
    ctx->pc = 0x1c1f80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x1c1f84: 0xc33021
    ctx->pc = 0x1c1f84u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c1f88: 0x3c050032
    ctx->pc = 0x1c1f88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c1f8c: 0xc23021
    ctx->pc = 0x1c1f8cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c1f90: 0x24a56e10
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28176));
    // 0x1c1f94: 0xc07071c
    ctx->pc = 0x1C1F94u;
    SET_GPR_U32(ctx, 31, 0x1C1F9Cu);
    ctx->pc = 0x1C1F98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C1C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1C70_0x1c1c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F9Cu; }
    }
    if (ctx->pc != 0x1C1F9Cu) { return; }
    ctx->pc = 0x1C1F9Cu;
    // 0x1c1f9c: 0x3c020032
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c1fa0: 0x24426e10
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28176));
label_1c1fa4:
    // 0x1c1fa4: 0xdfbf0000
    ctx->pc = 0x1c1fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fa8: 0x3e00008
    ctx->pc = 0x1C1FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1FB0u;
    // 0x1c1fb0: 0x27bdfff0
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1fb4: 0x3c010032
    ctx->pc = 0x1c1fb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c1fb8: 0xffbf0000
    ctx->pc = 0x1c1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1fbc: 0x8c234484
    ctx->pc = 0x1c1fbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17540)));
    // 0x1c1fc0: 0x14600003
    ctx->pc = 0x1C1FC0u;
    {
        const bool branch_taken_0x1c1fc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1FC4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1c1fc0) {
            ctx->pc = 0x1C1FD0u;
            goto label_1c1fd0;
        }
    }
    ctx->pc = 0x1C1FC8u;
    // 0x1c1fc8: 0x10000008
    ctx->pc = 0x1C1FC8u;
    {
        const bool branch_taken_0x1c1fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1FCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c1fc8) {
            ctx->pc = 0x1C1FECu;
            goto label_1c1fec;
        }
    }
    ctx->pc = 0x1C1FD0u;
label_1c1fd0:
    // 0x1c1fd0: 0x3c050032
    ctx->pc = 0x1c1fd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c1fd4: 0x621021
    ctx->pc = 0x1c1fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1fd8: 0x24a56d10
    ctx->pc = 0x1c1fd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27920));
    // 0x1c1fdc: 0xc07071c
    ctx->pc = 0x1C1FDCu;
    SET_GPR_U32(ctx, 31, 0x1C1FE4u);
    ctx->pc = 0x1C1FE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1C1C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1C70_0x1c1c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FE4u; }
    }
    if (ctx->pc != 0x1C1FE4u) { return; }
    ctx->pc = 0x1C1FE4u;
    // 0x1c1fe4: 0x3c020032
    ctx->pc = 0x1c1fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1c1fe8: 0x24426d10
    ctx->pc = 0x1c1fe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27920));
label_1c1fec:
    // 0x1c1fec: 0xdfbf0000
    ctx->pc = 0x1c1fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ff0: 0x3e00008
    ctx->pc = 0x1C1FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1F80u: goto label_1c1f80;
            case 0x1C1FA4u: goto label_1c1fa4;
            case 0x1C1FD0u: goto label_1c1fd0;
            case 0x1C1FECu: goto label_1c1fec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1FF8u;
    // 0x1c1ff8: 0x0
    ctx->pc = 0x1c1ff8u;
    // NOP
    // 0x1c1ffc: 0x0
    ctx->pc = 0x1c1ffcu;
    // NOP
}
