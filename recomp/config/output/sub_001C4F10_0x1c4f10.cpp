#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C4F10
// Address: 0x1c4f10 - 0x1c51b0
void sub_001C4F10_0x1c4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c4f10u;

    // 0x1c4f10: 0x27bdfeb0
    ctx->pc = 0x1c4f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c4f14: 0xffbf0090
    ctx->pc = 0x1c4f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c4f18: 0x7fbe0080
    ctx->pc = 0x1c4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c4f1c: 0x7fb70070
    ctx->pc = 0x1c4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c4f20: 0x7fb60060
    ctx->pc = 0x1c4f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c4f24: 0x3c170032
    ctx->pc = 0x1c4f24u;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
    // 0x1c4f28: 0x7fb50050
    ctx->pc = 0x1c4f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c4f2c: 0x7fb40040
    ctx->pc = 0x1c4f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c4f30: 0x7fb30030
    ctx->pc = 0x1c4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c4f34: 0x7fb20020
    ctx->pc = 0x1c4f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4f38: 0x80982d
    ctx->pc = 0x1c4f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f3c: 0x7fb10010
    ctx->pc = 0x1c4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4f40: 0x7fb00000
    ctx->pc = 0x1c4f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4f44: 0x8c84002c
    ctx->pc = 0x1c4f44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1c4f48: 0x1080008d
    ctx->pc = 0x1C4F48u;
    {
        const bool branch_taken_0x1c4f48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4F4Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 17344));
        if (branch_taken_0x1c4f48) {
            ctx->pc = 0x1C5180u;
            goto label_1c5180;
        }
    }
    ctx->pc = 0x1C4F50u;
    // 0x1c4f50: 0xc0707a8
    ctx->pc = 0x1C4F50u;
    SET_GPR_U32(ctx, 31, 0x1C4F58u);
    ctx->pc = 0x1C1EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EA0_0x1c1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F58u; }
    }
    if (ctx->pc != 0x1C4F58u) { return; }
    ctx->pc = 0x1C4F58u;
    // 0x1c4f58: 0x40802d
    ctx->pc = 0x1c4f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f5c: 0xc06d574
    ctx->pc = 0x1C4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F64u);
    ctx->pc = 0x1C4F60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1B55D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55D0_0x1b55d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F64u; }
    }
    if (ctx->pc != 0x1C4F64u) { return; }
    ctx->pc = 0x1C4F64u;
    // 0x1c4f64: 0x3c028080
    ctx->pc = 0x1c4f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x1c4f68: 0xc06d594
    ctx->pc = 0x1C4F68u;
    SET_GPR_U32(ctx, 31, 0x1C4F70u);
    ctx->pc = 0x1C4F6Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 32896));
    ctx->pc = 0x1B5650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5650_0x1b5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F70u; }
    }
    if (ctx->pc != 0x1C4F70u) { return; }
    ctx->pc = 0x1C4F70u;
    // 0x1c4f70: 0x8e7200d8
    ctx->pc = 0x1c4f70u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x1c4f74: 0xb02d
    ctx->pc = 0x1c4f74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f78: 0x8e7100d4
    ctx->pc = 0x1c4f78u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x1c4f7c: 0x10000069
    ctx->pc = 0x1C4F7Cu;
    {
        const bool branch_taken_0x1c4f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4F80u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 322));
        if (branch_taken_0x1c4f7c) {
            ctx->pc = 0x1C5124u;
            goto label_1c5124;
        }
    }
    ctx->pc = 0x1C4F84u;
label_1c4f84:
    // 0x1c4f84: 0x27b500a0
    ctx->pc = 0x1c4f84u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4f88: 0xa3a000f0
    ctx->pc = 0x1c4f88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4f8c: 0xc042bf0
    ctx->pc = 0x1C4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F94u);
    ctx->pc = 0x1C4F90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F94u; }
    }
    if (ctx->pc != 0x1C4F94u) { return; }
    ctx->pc = 0x1C4F94u;
label_1c4f94:
    // 0x1c4f94: 0x3c050025
    ctx->pc = 0x1c4f94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c4f98: 0x2a0202d
    ctx->pc = 0x1c4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f9c: 0xc042e02
    ctx->pc = 0x1C4F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4FA4u);
    ctx->pc = 0x1C4FA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11544));
    ctx->pc = 0x10B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B808_0x10b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FA4u; }
    }
    if (ctx->pc != 0x1C4FA4u) { return; }
    ctx->pc = 0x1C4FA4u;
    // 0x1c4fa4: 0x1040001f
    ctx->pc = 0x1C4FA4u;
    {
        const bool branch_taken_0x1c4fa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4FA8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fa4) {
            ctx->pc = 0x1C5024u;
            goto label_1c5024;
        }
    }
    ctx->pc = 0x1C4FACu;
    // 0x1c4fac: 0x2a0282d
    ctx->pc = 0x1c4facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fb0: 0x27a400f0
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c4fb4: 0xc042aee
    ctx->pc = 0x1C4FB4u;
    SET_GPR_U32(ctx, 31, 0x1C4FBCu);
    ctx->pc = 0x1C4FB8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FBCu; }
    }
    if (ctx->pc != 0x1C4FBCu) { return; }
    ctx->pc = 0x1C4FBCu;
    // 0x1c4fbc: 0x3c050025
    ctx->pc = 0x1c4fbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c4fc0: 0x27a400f0
    ctx->pc = 0x1c4fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c4fc4: 0xc042aee
    ctx->pc = 0x1C4FC4u;
    SET_GPR_U32(ctx, 31, 0x1C4FCCu);
    ctx->pc = 0x1C4FC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11552));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FCCu; }
    }
    if (ctx->pc != 0x1C4FCCu) { return; }
    ctx->pc = 0x1C4FCCu;
    // 0x1c4fcc: 0x92e2003d
    ctx->pc = 0x1c4fccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 61)));
    // 0x1c4fd0: 0x14400007
    ctx->pc = 0x1C4FD0u;
    {
        const bool branch_taken_0x1c4fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C4FD4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1c4fd0) {
            ctx->pc = 0x1C4FF0u;
            goto label_1c4ff0;
        }
    }
    ctx->pc = 0x1C4FD8u;
    // 0x1c4fd8: 0x3c050025
    ctx->pc = 0x1c4fd8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c4fdc: 0x27a40140
    ctx->pc = 0x1c4fdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c4fe0: 0xc042bf0
    ctx->pc = 0x1C4FE0u;
    SET_GPR_U32(ctx, 31, 0x1C4FE8u);
    ctx->pc = 0x1C4FE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11560));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FE8u; }
    }
    if (ctx->pc != 0x1C4FE8u) { return; }
    ctx->pc = 0x1C4FE8u;
    // 0x1c4fe8: 0x10000005
    ctx->pc = 0x1C4FE8u;
    {
        const bool branch_taken_0x1c4fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4FECu;
        WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c4fe8) {
            ctx->pc = 0x1C5000u;
            goto label_1c5000;
        }
    }
    ctx->pc = 0x1C4FF0u;
label_1c4ff0:
    // 0x1c4ff0: 0x24020031
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
    // 0x1c4ff4: 0xa3a20140
    ctx->pc = 0x1c4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4ff8: 0x27a20141
    ctx->pc = 0x1c4ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 321));
    // 0x1c4ffc: 0xa0400000
    ctx->pc = 0x1c4ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c5000:
    // 0x1c5000: 0x27a400f0
    ctx->pc = 0x1c5000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5004: 0xc042aee
    ctx->pc = 0x1C5004u;
    SET_GPR_U32(ctx, 31, 0x1C500Cu);
    ctx->pc = 0x1C5008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C500Cu; }
    }
    if (ctx->pc != 0x1C500Cu) { return; }
    ctx->pc = 0x1C500Cu;
    // 0x1c500c: 0x3c050025
    ctx->pc = 0x1c500cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c5010: 0x27a400f0
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5014: 0xc042aee
    ctx->pc = 0x1C5014u;
    SET_GPR_U32(ctx, 31, 0x1C501Cu);
    ctx->pc = 0x1C5018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11568));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C501Cu; }
    }
    if (ctx->pc != 0x1C501Cu) { return; }
    ctx->pc = 0x1C501Cu;
    // 0x1c501c: 0x1000ffdd
    ctx->pc = 0x1C501Cu;
    {
        const bool branch_taken_0x1c501c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c501c) {
            ctx->pc = 0x1C4F94u;
            goto label_1c4f94;
        }
    }
    ctx->pc = 0x1C5024u;
label_1c5024:
    // 0x1c5024: 0x3c050025
    ctx->pc = 0x1c5024u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c5028: 0x2a0202d
    ctx->pc = 0x1c5028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c502c: 0xc042e02
    ctx->pc = 0x1C502Cu;
    SET_GPR_U32(ctx, 31, 0x1C5034u);
    ctx->pc = 0x1C5030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11576));
    ctx->pc = 0x10B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B808_0x10b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5034u; }
    }
    if (ctx->pc != 0x1C5034u) { return; }
    ctx->pc = 0x1C5034u;
    // 0x1c5034: 0x10400020
    ctx->pc = 0x1C5034u;
    {
        const bool branch_taken_0x1c5034 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5038u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5034) {
            ctx->pc = 0x1C50B8u;
            goto label_1c50b8;
        }
    }
    ctx->pc = 0x1C503Cu;
    // 0x1c503c: 0x2a0282d
    ctx->pc = 0x1c503cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5040: 0x27a400f0
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5044: 0xc042aee
    ctx->pc = 0x1C5044u;
    SET_GPR_U32(ctx, 31, 0x1C504Cu);
    ctx->pc = 0x1C5048u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C504Cu; }
    }
    if (ctx->pc != 0x1C504Cu) { return; }
    ctx->pc = 0x1C504Cu;
    // 0x1c504c: 0x3c050025
    ctx->pc = 0x1c504cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c5050: 0x27a400f0
    ctx->pc = 0x1c5050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5054: 0xc042aee
    ctx->pc = 0x1C5054u;
    SET_GPR_U32(ctx, 31, 0x1C505Cu);
    ctx->pc = 0x1C5058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11552));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C505Cu; }
    }
    if (ctx->pc != 0x1C505Cu) { return; }
    ctx->pc = 0x1C505Cu;
    // 0x1c505c: 0x92e2003d
    ctx->pc = 0x1c505cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 61)));
    // 0x1c5060: 0x14400007
    ctx->pc = 0x1C5060u;
    {
        const bool branch_taken_0x1c5060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5064u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1c5060) {
            ctx->pc = 0x1C5080u;
            goto label_1c5080;
        }
    }
    ctx->pc = 0x1C5068u;
    // 0x1c5068: 0x8e650028
    ctx->pc = 0x1c5068u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1c506c: 0xc0708f8
    ctx->pc = 0x1C506Cu;
    SET_GPR_U32(ctx, 31, 0x1C5074u);
    ctx->pc = 0x1C5070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x1C23E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C23E0_0x1c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5074u; }
    }
    if (ctx->pc != 0x1C5074u) { return; }
    ctx->pc = 0x1C5074u;
    // 0x1c5074: 0x27a20146
    ctx->pc = 0x1c5074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 326));
    // 0x1c5078: 0x10000006
    ctx->pc = 0x1C5078u;
    {
        const bool branch_taken_0x1c5078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C507Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c5078) {
            ctx->pc = 0x1C5094u;
            goto label_1c5094;
        }
    }
    ctx->pc = 0x1C5080u;
label_1c5080:
    // 0x1c5080: 0x8e660028
    ctx->pc = 0x1c5080u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1c5084: 0x3c050025
    ctx->pc = 0x1c5084u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c5088: 0x27a40140
    ctx->pc = 0x1c5088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c508c: 0xc042a0c
    ctx->pc = 0x1C508Cu;
    SET_GPR_U32(ctx, 31, 0x1C5094u);
    ctx->pc = 0x1C5090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11584));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5094u; }
    }
    if (ctx->pc != 0x1C5094u) { return; }
    ctx->pc = 0x1C5094u;
label_1c5094:
    // 0x1c5094: 0x27a400f0
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5098: 0xc042aee
    ctx->pc = 0x1C5098u;
    SET_GPR_U32(ctx, 31, 0x1C50A0u);
    ctx->pc = 0x1C509Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50A0u; }
    }
    if (ctx->pc != 0x1C50A0u) { return; }
    ctx->pc = 0x1C50A0u;
    // 0x1c50a0: 0x3c050025
    ctx->pc = 0x1c50a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c50a4: 0x27a400f0
    ctx->pc = 0x1c50a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c50a8: 0xc042aee
    ctx->pc = 0x1C50A8u;
    SET_GPR_U32(ctx, 31, 0x1C50B0u);
    ctx->pc = 0x1C50ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11568));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50B0u; }
    }
    if (ctx->pc != 0x1C50B0u) { return; }
    ctx->pc = 0x1C50B0u;
    // 0x1c50b0: 0x1000ffb8
    ctx->pc = 0x1C50B0u;
    {
        const bool branch_taken_0x1c50b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c50b0) {
            ctx->pc = 0x1C4F94u;
            goto label_1c4f94;
        }
    }
    ctx->pc = 0x1C50B8u;
label_1c50b8:
    // 0x1c50b8: 0x3c050025
    ctx->pc = 0x1c50b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c50bc: 0x2a0202d
    ctx->pc = 0x1c50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c0: 0xc042e02
    ctx->pc = 0x1C50C0u;
    SET_GPR_U32(ctx, 31, 0x1C50C8u);
    ctx->pc = 0x1C50C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11592));
    ctx->pc = 0x10B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B808_0x10b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50C8u; }
    }
    if (ctx->pc != 0x1C50C8u) { return; }
    ctx->pc = 0x1C50C8u;
    // 0x1c50c8: 0x10400004
    ctx->pc = 0x1C50C8u;
    {
        const bool branch_taken_0x1c50c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C50CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c50c8) {
            ctx->pc = 0x1C50DCu;
            goto label_1c50dc;
        }
    }
    ctx->pc = 0x1C50D0u;
    // 0x1c50d0: 0xa0400000
    ctx->pc = 0x1c50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c50d4: 0x1000ffaf
    ctx->pc = 0x1C50D4u;
    {
        const bool branch_taken_0x1c50d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C50D8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c50d4) {
            ctx->pc = 0x1C4F94u;
            goto label_1c4f94;
        }
    }
    ctx->pc = 0x1C50DCu;
label_1c50dc:
    // 0x1c50dc: 0xc042aee
    ctx->pc = 0x1C50DCu;
    SET_GPR_U32(ctx, 31, 0x1C50E4u);
    ctx->pc = 0x1C50E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50E4u; }
    }
    if (ctx->pc != 0x1C50E4u) { return; }
    ctx->pc = 0x1C50E4u;
    // 0x1c50e4: 0x8e630020
    ctx->pc = 0x1c50e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1c50e8: 0x24020004
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c50ec: 0x14620008
    ctx->pc = 0x1C50ECu;
    {
        const bool branch_taken_0x1c50ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C50F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c50ec) {
            ctx->pc = 0x1C5110u;
            goto label_1c5110;
        }
    }
    ctx->pc = 0x1C50F4u;
    // 0x1c50f4: 0x220202d
    ctx->pc = 0x1c50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50f8: 0x240282d
    ctx->pc = 0x1c50f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50fc: 0x27a600f0
    ctx->pc = 0x1c50fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5100: 0xc070848
    ctx->pc = 0x1C5100u;
    SET_GPR_U32(ctx, 31, 0x1C5108u);
    ctx->pc = 0x1C5104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2120_0x1c2120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5108u; }
    }
    if (ctx->pc != 0x1C5108u) { return; }
    ctx->pc = 0x1C5108u;
    // 0x1c5108: 0x10000006
    ctx->pc = 0x1C5108u;
    {
        const bool branch_taken_0x1c5108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C510Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 22));
        if (branch_taken_0x1c5108) {
            ctx->pc = 0x1C5124u;
            goto label_1c5124;
        }
    }
    ctx->pc = 0x1C5110u;
label_1c5110:
    // 0x1c5110: 0x240282d
    ctx->pc = 0x1c5110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5114: 0x27a600f0
    ctx->pc = 0x1c5114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5118: 0xc070800
    ctx->pc = 0x1C5118u;
    SET_GPR_U32(ctx, 31, 0x1C5120u);
    ctx->pc = 0x1C511Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2000_0x1c2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5120u; }
    }
    if (ctx->pc != 0x1C5120u) { return; }
    ctx->pc = 0x1C5120u;
    // 0x1c5120: 0x26520016
    ctx->pc = 0x1c5120u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 22));
label_1c5124:
    // 0x1c5124: 0x8e050000
    ctx->pc = 0x1c5124u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5128: 0x14a0ff96
    ctx->pc = 0x1C5128u;
    {
        const bool branch_taken_0x1c5128 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C512Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x1c5128) {
            ctx->pc = 0x1C4F84u;
            goto label_1c4f84;
        }
    }
    ctx->pc = 0x1C5130u;
    // 0x1c5130: 0x12c00013
    ctx->pc = 0x1C5130u;
    {
        const bool branch_taken_0x1c5130 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5134u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x1c5130) {
            ctx->pc = 0x1C5180u;
            goto label_1c5180;
        }
    }
    ctx->pc = 0x1C5138u;
    // 0x1c5138: 0xc0707a8
    ctx->pc = 0x1C5138u;
    SET_GPR_U32(ctx, 31, 0x1C5140u);
    ctx->pc = 0x1C1EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EA0_0x1c1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5140u; }
    }
    if (ctx->pc != 0x1C5140u) { return; }
    ctx->pc = 0x1C5140u;
    // 0x1c5140: 0x8e640020
    ctx->pc = 0x1c5140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1c5144: 0x24030004
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5148: 0x14830008
    ctx->pc = 0x1C5148u;
    {
        const bool branch_taken_0x1c5148 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c5148) {
            ctx->pc = 0x1C516Cu;
            goto label_1c516c;
        }
    }
    ctx->pc = 0x1C5150u;
    // 0x1c5150: 0x8c460000
    ctx->pc = 0x1c5150u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5154: 0x220202d
    ctx->pc = 0x1c5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5158: 0x240282d
    ctx->pc = 0x1c5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515c: 0xc070848
    ctx->pc = 0x1C515Cu;
    SET_GPR_U32(ctx, 31, 0x1C5164u);
    ctx->pc = 0x1C5160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2120u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2120_0x1c2120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5164u; }
    }
    if (ctx->pc != 0x1C5164u) { return; }
    ctx->pc = 0x1C5164u;
    // 0x1c5164: 0x10000007
    ctx->pc = 0x1C5164u;
    {
        const bool branch_taken_0x1c5164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5168u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1c5164) {
            ctx->pc = 0x1C5184u;
            goto label_1c5184;
        }
    }
    ctx->pc = 0x1C516Cu;
label_1c516c:
    // 0x1c516c: 0x8c460000
    ctx->pc = 0x1c516cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5170: 0x220202d
    ctx->pc = 0x1c5170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5174: 0x240282d
    ctx->pc = 0x1c5174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5178: 0xc070800
    ctx->pc = 0x1C5178u;
    SET_GPR_U32(ctx, 31, 0x1C5180u);
    ctx->pc = 0x1C517Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2000_0x1c2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5180u; }
    }
    if (ctx->pc != 0x1C5180u) { return; }
    ctx->pc = 0x1C5180u;
label_1c5180:
    // 0x1c5180: 0xdfbf0090
    ctx->pc = 0x1c5180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1c5184:
    // 0x1c5184: 0x7bbe0080
    ctx->pc = 0x1c5184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5188: 0x7bb70070
    ctx->pc = 0x1c5188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c518c: 0x7bb60060
    ctx->pc = 0x1c518cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5190: 0x7bb50050
    ctx->pc = 0x1c5190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5194: 0x7bb40040
    ctx->pc = 0x1c5194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5198: 0x7bb30030
    ctx->pc = 0x1c5198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c519c: 0x7bb20020
    ctx->pc = 0x1c519cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c51a0: 0x7bb10010
    ctx->pc = 0x1c51a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51a4: 0x7bb00000
    ctx->pc = 0x1c51a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51a8: 0x3e00008
    ctx->pc = 0x1C51A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4F84u: goto label_1c4f84;
            case 0x1C4F94u: goto label_1c4f94;
            case 0x1C4FF0u: goto label_1c4ff0;
            case 0x1C5000u: goto label_1c5000;
            case 0x1C5024u: goto label_1c5024;
            case 0x1C5080u: goto label_1c5080;
            case 0x1C5094u: goto label_1c5094;
            case 0x1C50B8u: goto label_1c50b8;
            case 0x1C50DCu: goto label_1c50dc;
            case 0x1C5110u: goto label_1c5110;
            case 0x1C5124u: goto label_1c5124;
            case 0x1C516Cu: goto label_1c516c;
            case 0x1C5180u: goto label_1c5180;
            case 0x1C5184u: goto label_1c5184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C51B0u;
}
