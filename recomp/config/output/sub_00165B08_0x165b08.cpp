#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165B08
// Address: 0x165b08 - 0x165c08
void sub_00165B08_0x165b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165b08u;

    // 0x165b08: 0x3c050016
    ctx->pc = 0x165b08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x165b0c: 0x27bdfff0
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165b10: 0x24060002
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x165b14: 0x24a55b48
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 23368));
    // 0x165b18: 0xffb00000
    ctx->pc = 0x165b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165b1c: 0xffbf0008
    ctx->pc = 0x165b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x165b20: 0xc05da6c
    ctx->pc = 0x165B20u;
    SET_GPR_U32(ctx, 31, 0x165B28u);
    ctx->pc = 0x165B24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B28u; }
    }
    if (ctx->pc != 0x165B28u) { return; }
    ctx->pc = 0x165B28u;
    // 0x165b28: 0xdfbf0008
    ctx->pc = 0x165b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165b2c: 0x200202d
    ctx->pc = 0x165b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b30: 0xdfb00000
    ctx->pc = 0x165b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165b34: 0x2405000f
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x165b38: 0x24060002
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x165b3c: 0x805d518
    ctx->pc = 0x165B3Cu;
    ctx->pc = 0x165B40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175460u;
    sub_00175460_0x175460(rdram, ctx, runtime); return;
    ctx->pc = 0x165B44u;
    // 0x165b44: 0x0
    ctx->pc = 0x165b44u;
    // NOP
    // 0x165b48: 0x27bdffb0
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165b4c: 0xffb00010
    ctx->pc = 0x165b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x165b50: 0x80802d
    ctx->pc = 0x165b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b54: 0xffb30028
    ctx->pc = 0x165b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x165b58: 0x26130f60
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 3936));
    // 0x165b5c: 0xffb40030
    ctx->pc = 0x165b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x165b60: 0xa0a02d
    ctx->pc = 0x165b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b64: 0xffb50038
    ctx->pc = 0x165b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x165b68: 0xc0a82d
    ctx->pc = 0x165b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b6c: 0xffb10018
    ctx->pc = 0x165b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x165b70: 0xffb20020
    ctx->pc = 0x165b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x165b74: 0xffbf0040
    ctx->pc = 0x165b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x165b78: 0x8e111b74
    ctx->pc = 0x165b78u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
    // 0x165b7c: 0xc05d99c
    ctx->pc = 0x165B7Cu;
    SET_GPR_U32(ctx, 31, 0x165B84u);
    ctx->pc = 0x165B80u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x176670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176670_0x176670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165B84u; }
    }
    if (ctx->pc != 0x165B84u) { return; }
    ctx->pc = 0x165B84u;
    // 0x165b84: 0x10400016
    ctx->pc = 0x165B84u;
    {
        const bool branch_taken_0x165b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165B88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x165b84) {
            ctx->pc = 0x165BE0u;
            goto label_165be0;
        }
    }
    ctx->pc = 0x165B8Cu;
    // 0x165b8c: 0x8e020048
    ctx->pc = 0x165b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x165b90: 0x5443000f
    ctx->pc = 0x165B90u;
    {
        const bool branch_taken_0x165b90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x165b90) {
            ctx->pc = 0x165B94u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->pc = 0x165BD0u;
            goto label_165bd0;
        }
    }
    ctx->pc = 0x165B98u;
    // 0x165b98: 0x260202d
    ctx->pc = 0x165b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b9c: 0x240282d
    ctx->pc = 0x165b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ba0: 0x3a0302d
    ctx->pc = 0x165ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ba4: 0xc059702
    ctx->pc = 0x165BA4u;
    SET_GPR_U32(ctx, 31, 0x165BACu);
    ctx->pc = 0x165BA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x165C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165C08_0x165c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165BACu; }
    }
    if (ctx->pc != 0x165BACu) { return; }
    ctx->pc = 0x165BACu;
    // 0x165bac: 0x8e240024
    ctx->pc = 0x165bacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165bb0: 0x8fa30000
    ctx->pc = 0x165bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165bb4: 0x83102a
    ctx->pc = 0x165bb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x165bb8: 0x50400006
    ctx->pc = 0x165BB8u;
    {
        const bool branch_taken_0x165bb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x165bb8) {
            ctx->pc = 0x165BBCu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
            ctx->pc = 0x165BD4u;
            goto label_165bd4;
        }
    }
    ctx->pc = 0x165BC0u;
    // 0x165bc0: 0x8fa20004
    ctx->pc = 0x165bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x165bc4: 0x60202d
    ctx->pc = 0x165bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bc8: 0xae230024
    ctx->pc = 0x165bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x165bcc: 0xae220028
    ctx->pc = 0x165bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_165bd0:
    // 0x165bd0: 0xae840000
    ctx->pc = 0x165bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_165bd4:
    // 0x165bd4: 0x102d
    ctx->pc = 0x165bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bd8: 0x8e230028
    ctx->pc = 0x165bd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x165bdc: 0xaea30000
    ctx->pc = 0x165bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_165be0:
    // 0x165be0: 0xdfb00010
    ctx->pc = 0x165be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165be4: 0xdfb10018
    ctx->pc = 0x165be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165be8: 0xdfb20020
    ctx->pc = 0x165be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165bec: 0xdfb30028
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165bf0: 0xdfb40030
    ctx->pc = 0x165bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165bf4: 0xdfb50038
    ctx->pc = 0x165bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165bf8: 0xdfbf0040
    ctx->pc = 0x165bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165bfc: 0x3e00008
    ctx->pc = 0x165BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165BD0u: goto label_165bd0;
            case 0x165BD4u: goto label_165bd4;
            case 0x165BE0u: goto label_165be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165C04u;
    // 0x165c04: 0x0
    ctx->pc = 0x165c04u;
    // NOP
}
