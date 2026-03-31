#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001729B0
// Address: 0x1729b0 - 0x172ac8
void sub_001729B0_0x1729b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1729b0u;

    // 0x1729b0: 0x27bdffe0
    ctx->pc = 0x1729b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1729b4: 0xffb00000
    ctx->pc = 0x1729b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1729b8: 0xffb10008
    ctx->pc = 0x1729b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1729bc: 0x80882d
    ctx->pc = 0x1729bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729c0: 0xffbf0010
    ctx->pc = 0x1729c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1729c4: 0x263009a0
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2464));
    // 0x1729c8: 0x8e020018
    ctx->pc = 0x1729c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1729cc: 0x54400009
    ctx->pc = 0x1729CCu;
    {
        const bool branch_taken_0x1729cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1729cc) {
            ctx->pc = 0x1729D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729D4u;
    // 0x1729d4: 0x8e03003c
    ctx->pc = 0x1729d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1729d8: 0x24020002
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1729dc: 0x54620005
    ctx->pc = 0x1729DCu;
    {
        const bool branch_taken_0x1729dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1729dc) {
            ctx->pc = 0x1729E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729E4u;
    // 0x1729e4: 0x2405000f
    ctx->pc = 0x1729e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1729e8: 0xc05d518
    ctx->pc = 0x1729E8u;
    SET_GPR_U32(ctx, 31, 0x1729F0u);
    ctx->pc = 0x1729ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729F0u; }
    }
    if (ctx->pc != 0x1729F0u) { return; }
    ctx->pc = 0x1729F0u;
    // 0x1729f0: 0x8e020014
    ctx->pc = 0x1729f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1729f4:
    // 0x1729f4: 0x5440000c
    ctx->pc = 0x1729F4u;
    {
        const bool branch_taken_0x1729f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1729f4) {
            ctx->pc = 0x1729F8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x172A28u;
            goto label_172a28;
        }
    }
    ctx->pc = 0x1729FCu;
    // 0x1729fc: 0x8e03003c
    ctx->pc = 0x1729fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x172a00: 0x24020001
    ctx->pc = 0x172a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172a04: 0x14620008
    ctx->pc = 0x172A04u;
    {
        const bool branch_taken_0x172a04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x172A08u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172a04) {
            ctx->pc = 0x172A28u;
            goto label_172a28;
        }
    }
    ctx->pc = 0x172A0Cu;
    // 0x172a0c: 0x220202d
    ctx->pc = 0x172a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a10: 0xdfb10008
    ctx->pc = 0x172a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172a14: 0x2405000f
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x172a18: 0xdfbf0010
    ctx->pc = 0x172a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172a1c: 0x24060002
    ctx->pc = 0x172a1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172a20: 0x805d518
    ctx->pc = 0x172A20u;
    ctx->pc = 0x172A24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175460u;
    sub_00175460_0x175460(rdram, ctx, runtime); return;
    ctx->pc = 0x172A28u;
label_172a28:
    // 0x172a28: 0xdfb10008
    ctx->pc = 0x172a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172a2c: 0xdfbf0010
    ctx->pc = 0x172a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172a30: 0x3e00008
    ctx->pc = 0x172A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1729F4u: goto label_1729f4;
            case 0x172A28u: goto label_172a28;
            case 0x172A98u: goto label_172a98;
            case 0x172AACu: goto label_172aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172A38u;
    // 0x172a38: 0x27bdfff0
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172a3c: 0x24080001
    ctx->pc = 0x172a3cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172a40: 0xffb00000
    ctx->pc = 0x172a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172a44: 0x80802d
    ctx->pc = 0x172a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a48: 0xffbf0008
    ctx->pc = 0x172a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172a4c: 0x260509a0
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2464));
    // 0x172a50: 0x24060002
    ctx->pc = 0x172a50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172a54: 0x24070002
    ctx->pc = 0x172a54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172a58: 0x8ca20018
    ctx->pc = 0x172a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x172a5c: 0x8ca30014
    ctx->pc = 0x172a5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x172a60: 0x481026
    ctx->pc = 0x172a60u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x172a64: 0x2c450001
    ctx->pc = 0x172a64u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x172a68: 0x681826
    ctx->pc = 0x172a68u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x172a6c: 0x34a20002
    ctx->pc = 0x172a6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), 2));
    // 0x172a70: 0x43280a
    ctx->pc = 0x172a70u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x172a74: 0x10a6000d
    ctx->pc = 0x172A74u;
    {
        const bool branch_taken_0x172a74 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x172A78u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x172a74) {
            ctx->pc = 0x172AACu;
            goto label_172aac;
        }
    }
    ctx->pc = 0x172A7Cu;
    // 0x172a7c: 0x50400006
    ctx->pc = 0x172A7Cu;
    {
        const bool branch_taken_0x172a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172a7c) {
            ctx->pc = 0x172A80u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x172A98u;
            goto label_172a98;
        }
    }
    ctx->pc = 0x172A84u;
    // 0x172a84: 0x10a80009
    ctx->pc = 0x172A84u;
    {
        const bool branch_taken_0x172a84 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 8));
        ctx->pc = 0x172A88u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172a84) {
            ctx->pc = 0x172AACu;
            goto label_172aac;
        }
    }
    ctx->pc = 0x172A8Cu;
    // 0x172a8c: 0x10000007
    ctx->pc = 0x172A8Cu;
    {
        const bool branch_taken_0x172a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172A90u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x172a8c) {
            ctx->pc = 0x172AACu;
            goto label_172aac;
        }
    }
    ctx->pc = 0x172A94u;
    // 0x172a94: 0x0
    ctx->pc = 0x172a94u;
    // NOP
label_172a98:
    // 0x172a98: 0x14a20004
    ctx->pc = 0x172A98u;
    {
        const bool branch_taken_0x172a98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x172A9Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x172a98) {
            ctx->pc = 0x172AACu;
            goto label_172aac;
        }
    }
    ctx->pc = 0x172AA0u;
    // 0x172aa0: 0xc05d58a
    ctx->pc = 0x172AA0u;
    SET_GPR_U32(ctx, 31, 0x172AA8u);
    ctx->pc = 0x172AA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AA8u; }
    }
    if (ctx->pc != 0x172AA8u) { return; }
    ctx->pc = 0x172AA8u;
    // 0x172aa8: 0x40382d
    ctx->pc = 0x172aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172aac:
    // 0x172aac: 0x200202d
    ctx->pc = 0x172aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ab0: 0xdfb00000
    ctx->pc = 0x172ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ab4: 0xdfbf0008
    ctx->pc = 0x172ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172ab8: 0xe0302d
    ctx->pc = 0x172ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172abc: 0x24050019
    ctx->pc = 0x172abcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x172ac0: 0x805d518
    ctx->pc = 0x172AC0u;
    ctx->pc = 0x172AC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175460u;
    sub_00175460_0x175460(rdram, ctx, runtime); return;
    ctx->pc = 0x172AC8u;
}
