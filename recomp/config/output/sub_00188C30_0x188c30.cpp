#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188C30
// Address: 0x188c30 - 0x188d08
void sub_00188C30_0x188c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188c30u;

    // 0x188c30: 0x3c020023
    ctx->pc = 0x188c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x188c34: 0x27bdffd0
    ctx->pc = 0x188c34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188c38: 0x8c43fd38
    ctx->pc = 0x188c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966584)));
    // 0x188c3c: 0xffbf0020
    ctx->pc = 0x188c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188c40: 0xffb00010
    ctx->pc = 0x188c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188c44: 0x1060002c
    ctx->pc = 0x188C44u;
    {
        const bool branch_taken_0x188c44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x188C48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x188c44) {
            ctx->pc = 0x188CF8u;
            goto label_188cf8;
        }
    }
    ctx->pc = 0x188C4Cu;
    // 0x188c4c: 0x8c820000
    ctx->pc = 0x188c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188c50: 0x3c070029
    ctx->pc = 0x188c50u;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x188c54: 0x24f00c00
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 3072));
    // 0x188c58: 0x24880014
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 20));
    // 0x188c5c: 0xace20c00
    ctx->pc = 0x188c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3072), GPR_U32(ctx, 2));
    // 0x188c60: 0x26090014
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 20));
    // 0x188c64: 0xae050028
    ctx->pc = 0x188c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x188c68: 0x8c830004
    ctx->pc = 0x188c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188c6c: 0x282d
    ctx->pc = 0x188c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c70: 0xae06002c
    ctx->pc = 0x188c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x188c74: 0xae030004
    ctx->pc = 0x188c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x188c78: 0x8c820008
    ctx->pc = 0x188c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x188c7c: 0xae020008
    ctx->pc = 0x188c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x188c80: 0x8c83000c
    ctx->pc = 0x188c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x188c84: 0xae03000c
    ctx->pc = 0x188c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x188c88: 0x8c820010
    ctx->pc = 0x188c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188c8c: 0xae020010
    ctx->pc = 0x188c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_188c90:
    // 0x188c90: 0x1051021
    ctx->pc = 0x188c90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x188c94: 0x1252021
    ctx->pc = 0x188c94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x188c98: 0x90430000
    ctx->pc = 0x188c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188c9c: 0x24a50001
    ctx->pc = 0x188c9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x188ca0: 0x28a20010
    ctx->pc = 0x188ca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x188ca4: 0xa0830000
    ctx->pc = 0x188ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188ca8: 0x1440fff9
    ctx->pc = 0x188CA8u;
    {
        const bool branch_taken_0x188ca8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x188ca8) {
            ctx->pc = 0x188C90u;
            goto label_188c90;
        }
    }
    ctx->pc = 0x188CB0u;
    // 0x188cb0: 0x24e70c00
    ctx->pc = 0x188cb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3072));
    // 0x188cb4: 0x3c058000
    ctx->pc = 0x188cb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x188cb8: 0x3c040029
    ctx->pc = 0x188cb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x188cbc: 0xafa00000
    ctx->pc = 0x188cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188cc0: 0x24840b88
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2952));
    // 0x188cc4: 0x34a51301
    ctx->pc = 0x188cc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4865));
    // 0x188cc8: 0x302d
    ctx->pc = 0x188cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ccc: 0x24080280
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188cd0: 0xe0482d
    ctx->pc = 0x188cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cd4: 0x240a0280
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188cd8: 0xc045e7a
    ctx->pc = 0x188CD8u;
    SET_GPR_U32(ctx, 31, 0x188CE0u);
    ctx->pc = 0x188CDCu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CE0u; }
    }
    if (ctx->pc != 0x188CE0u) { return; }
    ctx->pc = 0x188CE0u;
    // 0x188ce0: 0x4430005
    ctx->pc = 0x188CE0u;
    {
        const bool branch_taken_0x188ce0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x188ce0) {
            ctx->pc = 0x188CE4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x188CF8u;
            goto label_188cf8;
        }
    }
    ctx->pc = 0x188CE8u;
    // 0x188ce8: 0x3c040024
    ctx->pc = 0x188ce8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x188cec: 0xc0625f6
    ctx->pc = 0x188CECu;
    SET_GPR_U32(ctx, 31, 0x188CF4u);
    ctx->pc = 0x188CF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6432));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CF4u; }
    }
    if (ctx->pc != 0x188CF4u) { return; }
    ctx->pc = 0x188CF4u;
    // 0x188cf4: 0x102d
    ctx->pc = 0x188cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188cf8:
    // 0x188cf8: 0xdfbf0020
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188cfc: 0xdfb00010
    ctx->pc = 0x188cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188d00: 0x3e00008
    ctx->pc = 0x188D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188C90u: goto label_188c90;
            case 0x188CF8u: goto label_188cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188D08u;
}
