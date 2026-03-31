#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108B48
// Address: 0x108b48 - 0x108cd0
void sub_00108B48_0x108b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108b48u;

    // 0x108b48: 0x27bdffb0
    ctx->pc = 0x108b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108b4c: 0xffb00010
    ctx->pc = 0x108b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x108b50: 0xa0802d
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b54: 0x24050001
    ctx->pc = 0x108b54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108b58: 0xffb10018
    ctx->pc = 0x108b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x108b5c: 0xffb20020
    ctx->pc = 0x108b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108b60: 0xffb30028
    ctx->pc = 0x108b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x108b64: 0xffb40030
    ctx->pc = 0x108b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x108b68: 0xc0a02d
    ctx->pc = 0x108b68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b6c: 0xffb50038
    ctx->pc = 0x108b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x108b70: 0xffbf0040
    ctx->pc = 0x108b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108b74: 0xc041f7e
    ctx->pc = 0x108B74u;
    SET_GPR_U32(ctx, 31, 0x108B7Cu);
    ctx->pc = 0x108B78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B7Cu; }
    }
    if (ctx->pc != 0x108B7Cu) { return; }
    ctx->pc = 0x108B7Cu;
    // 0x108b7c: 0x40982d
    ctx->pc = 0x108b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b80: 0x3c027fff
    ctx->pc = 0x108b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x108b84: 0x10203f
    ctx->pc = 0x108b84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x108b88: 0x3442ffff
    ctx->pc = 0x108b88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x108b8c: 0x3c03ffff
    ctx->pc = 0x108b8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x108b90: 0x3183e
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x108b94: 0x821024
    ctx->pc = 0x108b94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108b98: 0x2038024
    ctx->pc = 0x108b98u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x108b9c: 0x3c03000f
    ctx->pc = 0x108b9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x108ba0: 0x2103c
    ctx->pc = 0x108ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108ba4: 0x3463ffff
    ctx->pc = 0x108ba4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x108ba8: 0x2028025
    ctx->pc = 0x108ba8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108bac: 0x832024
    ctx->pc = 0x108bacu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x108bb0: 0x10953e
    ctx->pc = 0x108bb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x108bb4: 0xafa40004
    ctx->pc = 0x108bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x108bb8: 0x12400004
    ctx->pc = 0x108BB8u;
    {
        const bool branch_taken_0x108bb8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x108BBCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 20));
        if (branch_taken_0x108bb8) {
            ctx->pc = 0x108BCCu;
            goto label_108bcc;
        }
    }
    ctx->pc = 0x108BC0u;
    // 0x108bc0: 0x3c020010
    ctx->pc = 0x108bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x108bc4: 0x821025
    ctx->pc = 0x108bc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108bc8: 0xafa20004
    ctx->pc = 0x108bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_108bcc:
    // 0x108bcc: 0x10283c
    ctx->pc = 0x108bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x108bd0: 0x5283f
    ctx->pc = 0x108bd0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x108bd4: 0x10a0001a
    ctx->pc = 0x108BD4u;
    {
        const bool branch_taken_0x108bd4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x108BD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108bd4) {
            ctx->pc = 0x108C40u;
            goto label_108c40;
        }
    }
    ctx->pc = 0x108BDCu;
    // 0x108bdc: 0xc042062
    ctx->pc = 0x108BDCu;
    SET_GPR_U32(ctx, 31, 0x108BE4u);
    ctx->pc = 0x108BE0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x108188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108188_0x108188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BE4u; }
    }
    if (ctx->pc != 0x108BE4u) { return; }
    ctx->pc = 0x108BE4u;
    // 0x108be4: 0x40282d
    ctx->pc = 0x108be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108be8: 0x10a0000b
    ctx->pc = 0x108BE8u;
    {
        const bool branch_taken_0x108be8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x108BECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x108be8) {
            ctx->pc = 0x108C18u;
            goto label_108c18;
        }
    }
    ctx->pc = 0x108BF0u;
    // 0x108bf0: 0x52023
    ctx->pc = 0x108bf0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x108bf4: 0x8fa30000
    ctx->pc = 0x108bf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108bf8: 0x821004
    ctx->pc = 0x108bf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x108bfc: 0x621825
    ctx->pc = 0x108bfcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108c00: 0xae230000
    ctx->pc = 0x108c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x108c04: 0x8fa20004
    ctx->pc = 0x108c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108c08: 0xa21006
    ctx->pc = 0x108c08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x108c0c: 0x10000004
    ctx->pc = 0x108C0Cu;
    {
        const bool branch_taken_0x108c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C10u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x108c0c) {
            ctx->pc = 0x108C20u;
            goto label_108c20;
        }
    }
    ctx->pc = 0x108C14u;
    // 0x108c14: 0x0
    ctx->pc = 0x108c14u;
    // NOP
label_108c18:
    // 0x108c18: 0x8fa20000
    ctx->pc = 0x108c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108c1c: 0xae220000
    ctx->pc = 0x108c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_108c20:
    // 0x108c20: 0x8fa40004
    ctx->pc = 0x108c20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108c24: 0x24030001
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c28: 0x24020002
    ctx->pc = 0x108c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x108c2c: 0x64100a
    ctx->pc = 0x108c2cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x108c30: 0xae240004
    ctx->pc = 0x108c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x108c34: 0x40802d
    ctx->pc = 0x108c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c38: 0x10000009
    ctx->pc = 0x108C38u;
    {
        const bool branch_taken_0x108c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x108c38) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C40u;
label_108c40:
    // 0x108c40: 0x27a40004
    ctx->pc = 0x108c40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 4));
    // 0x108c44: 0xc042062
    ctx->pc = 0x108C44u;
    SET_GPR_U32(ctx, 31, 0x108C4Cu);
    ctx->pc = 0x108C48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x108188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108188_0x108188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C4Cu; }
    }
    if (ctx->pc != 0x108C4Cu) { return; }
    ctx->pc = 0x108C4Cu;
    // 0x108c4c: 0x24040001
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c50: 0x8fa30004
    ctx->pc = 0x108c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108c54: 0x24450020
    ctx->pc = 0x108c54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 32));
    // 0x108c58: 0xae230000
    ctx->pc = 0x108c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x108c5c: 0xae640010
    ctx->pc = 0x108c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_108c60:
    // 0x108c60: 0x12400007
    ctx->pc = 0x108C60u;
    {
        const bool branch_taken_0x108c60 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C64u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        if (branch_taken_0x108c60) {
            ctx->pc = 0x108C80u;
            goto label_108c80;
        }
    }
    ctx->pc = 0x108C68u;
    // 0x108c68: 0x24030035
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x108c6c: 0x651823
    ctx->pc = 0x108c6cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x108c70: 0x2442fbcd
    ctx->pc = 0x108c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x108c74: 0x1000000a
    ctx->pc = 0x108C74u;
    {
        const bool branch_taken_0x108c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C78u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x108c74) {
            ctx->pc = 0x108CA0u;
            goto label_108ca0;
        }
    }
    ctx->pc = 0x108C7Cu;
    // 0x108c7c: 0x0
    ctx->pc = 0x108c7cu;
    // NOP
label_108c80:
    // 0x108c80: 0x24a3fbce
    ctx->pc = 0x108c80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x108c84: 0x101080
    ctx->pc = 0x108c84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x108c88: 0xae830000
    ctx->pc = 0x108c88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x108c8c: 0x2221021
    ctx->pc = 0x108c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x108c90: 0xc042042
    ctx->pc = 0x108C90u;
    SET_GPR_U32(ctx, 31, 0x108C98u);
    ctx->pc = 0x108C94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->pc = 0x108108u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108108_0x108108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C98u; }
    }
    if (ctx->pc != 0x108C98u) { return; }
    ctx->pc = 0x108C98u;
    // 0x108c98: 0x101940
    ctx->pc = 0x108c98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x108c9c: 0x621823
    ctx->pc = 0x108c9cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_108ca0:
    // 0x108ca0: 0xaea30000
    ctx->pc = 0x108ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x108ca4: 0x260102d
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ca8: 0xdfb00010
    ctx->pc = 0x108ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108cac: 0xdfb10018
    ctx->pc = 0x108cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108cb0: 0xdfb20020
    ctx->pc = 0x108cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108cb4: 0xdfb30028
    ctx->pc = 0x108cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108cb8: 0xdfb40030
    ctx->pc = 0x108cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108cbc: 0xdfb50038
    ctx->pc = 0x108cbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x108cc0: 0xdfbf0040
    ctx->pc = 0x108cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108cc4: 0x3e00008
    ctx->pc = 0x108CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108BCCu: goto label_108bcc;
            case 0x108C18u: goto label_108c18;
            case 0x108C20u: goto label_108c20;
            case 0x108C40u: goto label_108c40;
            case 0x108C60u: goto label_108c60;
            case 0x108C80u: goto label_108c80;
            case 0x108CA0u: goto label_108ca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108CCCu;
    // 0x108ccc: 0x0
    ctx->pc = 0x108cccu;
    // NOP
}
