#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106B58
// Address: 0x106b58 - 0x106d18
void sub_00106B58_0x106b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106b58u;

    // 0x106b58: 0x27bdff70
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x106b5c: 0xffb00070
    ctx->pc = 0x106b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x106b60: 0x80802d
    ctx->pc = 0x106b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b64: 0xffb10078
    ctx->pc = 0x106b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x106b68: 0xffb20080
    ctx->pc = 0x106b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x106b6c: 0xffbf0088
    ctx->pc = 0x106b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x106b70: 0x9603000c
    ctx->pc = 0x106b70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x106b74: 0x30620002
    ctx->pc = 0x106b74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x106b78: 0x10400007
    ctx->pc = 0x106B78u;
    {
        const bool branch_taken_0x106b78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106B7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x106b78) {
            ctx->pc = 0x106B98u;
            goto label_106b98;
        }
    }
    ctx->pc = 0x106B80u;
    // 0x106b80: 0x26030043
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 67));
    // 0x106b84: 0xae020014
    ctx->pc = 0x106b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x106b88: 0xae030010
    ctx->pc = 0x106b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x106b8c: 0x10000041
    ctx->pc = 0x106B8Cu;
    {
        const bool branch_taken_0x106b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106B90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x106b8c) {
            ctx->pc = 0x106C94u;
            goto label_106c94;
        }
    }
    ctx->pc = 0x106B94u;
    // 0x106b94: 0x0
    ctx->pc = 0x106b94u;
    // NOP
label_106b98:
    // 0x106b98: 0x8605000e
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x106b9c: 0x4a00008
    ctx->pc = 0x106B9Cu;
    {
        const bool branch_taken_0x106b9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x106BA0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2048));
        if (branch_taken_0x106b9c) {
            ctx->pc = 0x106BC0u;
            goto label_106bc0;
        }
    }
    ctx->pc = 0x106BA4u;
    // 0x106ba4: 0x8e040054
    ctx->pc = 0x106ba4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x106ba8: 0xc04187c
    ctx->pc = 0x106BA8u;
    SET_GPR_U32(ctx, 31, 0x106BB0u);
    ctx->pc = 0x106BACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1061F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001061F0_0x1061f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106BB0u; }
    }
    if (ctx->pc != 0x106BB0u) { return; }
    ctx->pc = 0x106BB0u;
    // 0x106bb0: 0x4410007
    ctx->pc = 0x106BB0u;
    {
        const bool branch_taken_0x106bb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x106BB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x106bb0) {
            ctx->pc = 0x106BD0u;
            goto label_106bd0;
        }
    }
    ctx->pc = 0x106BB8u;
    // 0x106bb8: 0x9603000c
    ctx->pc = 0x106bb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x106bbc: 0x34620800
    ctx->pc = 0x106bbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2048));
label_106bc0:
    // 0x106bc0: 0x902d
    ctx->pc = 0x106bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bc4: 0xa602000c
    ctx->pc = 0x106bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x106bc8: 0x10000012
    ctx->pc = 0x106BC8u;
    {
        const bool branch_taken_0x106bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106BCCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x106bc8) {
            ctx->pc = 0x106C14u;
            goto label_106c14;
        }
    }
    ctx->pc = 0x106BD0u;
label_106bd0:
    // 0x106bd0: 0x34048000
    ctx->pc = 0x106bd0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x106bd4: 0x24110400
    ctx->pc = 0x106bd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x106bd8: 0x3042f000
    ctx->pc = 0x106bd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 61440));
    // 0x106bdc: 0x38432000
    ctx->pc = 0x106bdcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 8192));
    // 0x106be0: 0x14440009
    ctx->pc = 0x106BE0u;
    {
        const bool branch_taken_0x106be0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x106BE4u;
        SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x106be0) {
            ctx->pc = 0x106C08u;
            goto label_106c08;
        }
    }
    ctx->pc = 0x106BE8u;
    // 0x106be8: 0x3c020011
    ctx->pc = 0x106be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
    // 0x106bec: 0x8e030028
    ctx->pc = 0x106becu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x106bf0: 0x2442aa58
    ctx->pc = 0x106bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945368));
    // 0x106bf4: 0x14620005
    ctx->pc = 0x106BF4u;
    {
        const bool branch_taken_0x106bf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x106BF8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x106bf4) {
            ctx->pc = 0x106C0Cu;
            goto label_106c0c;
        }
    }
    ctx->pc = 0x106BFCu;
    // 0x106bfc: 0xae11004c
    ctx->pc = 0x106bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x106c00: 0x10000003
    ctx->pc = 0x106C00u;
    {
        const bool branch_taken_0x106c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106C04u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
        if (branch_taken_0x106c00) {
            ctx->pc = 0x106C10u;
            goto label_106c10;
        }
    }
    ctx->pc = 0x106C08u;
label_106c08:
    // 0x106c08: 0x9602000c
    ctx->pc = 0x106c08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_106c0c:
    // 0x106c0c: 0x34420800
    ctx->pc = 0x106c0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_106c10:
    // 0x106c10: 0xa602000c
    ctx->pc = 0x106c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_106c14:
    // 0x106c14: 0x8e040054
    ctx->pc = 0x106c14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x106c18: 0xc041c76
    ctx->pc = 0x106C18u;
    SET_GPR_U32(ctx, 31, 0x106C20u);
    ctx->pc = 0x106C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001071D8_0x1071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106C20u; }
    }
    if (ctx->pc != 0x106C20u) { return; }
    ctx->pc = 0x106C20u;
    // 0x106c20: 0x40282d
    ctx->pc = 0x106c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c24: 0x14a0000a
    ctx->pc = 0x106C24u;
    {
        const bool branch_taken_0x106c24 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x106C28u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x106c24) {
            ctx->pc = 0x106C50u;
            goto label_106c50;
        }
    }
    ctx->pc = 0x106C2Cu;
    // 0x106c2c: 0x26040043
    ctx->pc = 0x106c2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 67));
    // 0x106c30: 0x24030001
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x106c34: 0xae040010
    ctx->pc = 0x106c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x106c38: 0x34420002
    ctx->pc = 0x106c38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x106c3c: 0xae030014
    ctx->pc = 0x106c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x106c40: 0xa602000c
    ctx->pc = 0x106c40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x106c44: 0x10000013
    ctx->pc = 0x106C44u;
    {
        const bool branch_taken_0x106c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106C48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x106c44) {
            ctx->pc = 0x106C94u;
            goto label_106c94;
        }
    }
    ctx->pc = 0x106C4Cu;
    // 0x106c4c: 0x0
    ctx->pc = 0x106c4cu;
    // NOP
label_106c50:
    // 0x106c50: 0x3c030010
    ctx->pc = 0x106c50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x106c54: 0x8e040054
    ctx->pc = 0x106c54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x106c58: 0x246354d0
    ctx->pc = 0x106c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 21712));
    // 0x106c5c: 0x34420080
    ctx->pc = 0x106c5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
    // 0x106c60: 0xae050010
    ctx->pc = 0x106c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x106c64: 0xac83003c
    ctx->pc = 0x106c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x106c68: 0xa602000c
    ctx->pc = 0x106c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x106c6c: 0xae110014
    ctx->pc = 0x106c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x106c70: 0x12400008
    ctx->pc = 0x106C70u;
    {
        const bool branch_taken_0x106c70 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x106C74u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x106c70) {
            ctx->pc = 0x106C94u;
            goto label_106c94;
        }
    }
    ctx->pc = 0x106C78u;
    // 0x106c78: 0xc045374
    ctx->pc = 0x106C78u;
    SET_GPR_U32(ctx, 31, 0x106C80u);
    ctx->pc = 0x106C7Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->pc = 0x114DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114DD0_0x114dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106C80u; }
    }
    if (ctx->pc != 0x106C80u) { return; }
    ctx->pc = 0x106C80u;
    // 0x106c80: 0x50400005
    ctx->pc = 0x106C80u;
    {
        const bool branch_taken_0x106c80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x106c80) {
            ctx->pc = 0x106C84u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x106C98u;
            goto label_106c98;
        }
    }
    ctx->pc = 0x106C88u;
    // 0x106c88: 0x9602000c
    ctx->pc = 0x106c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x106c8c: 0x34420001
    ctx->pc = 0x106c8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x106c90: 0xa602000c
    ctx->pc = 0x106c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_106c94:
    // 0x106c94: 0xdfb00070
    ctx->pc = 0x106c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_106c98:
    // 0x106c98: 0xdfb10078
    ctx->pc = 0x106c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x106c9c: 0xdfb20080
    ctx->pc = 0x106c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106ca0: 0xdfbf0088
    ctx->pc = 0x106ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x106ca4: 0x3e00008
    ctx->pc = 0x106CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106B98u: goto label_106b98;
            case 0x106BC0u: goto label_106bc0;
            case 0x106BD0u: goto label_106bd0;
            case 0x106C08u: goto label_106c08;
            case 0x106C0Cu: goto label_106c0c;
            case 0x106C10u: goto label_106c10;
            case 0x106C14u: goto label_106c14;
            case 0x106C50u: goto label_106c50;
            case 0x106C94u: goto label_106c94;
            case 0x106C98u: goto label_106c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106CACu;
    // 0x106cac: 0x0
    ctx->pc = 0x106cacu;
    // NOP
    // 0x106cb0: 0x27bdffe0
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106cb4: 0xffb00000
    ctx->pc = 0x106cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106cb8: 0x3c100021
    ctx->pc = 0x106cb8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x106cbc: 0xffb10008
    ctx->pc = 0x106cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106cc0: 0xa0882d
    ctx->pc = 0x106cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cc4: 0xffb20010
    ctx->pc = 0x106cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106cc8: 0x80902d
    ctx->pc = 0x106cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ccc: 0xffbf0018
    ctx->pc = 0x106cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x106cd0: 0x261097f0
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294940656));
    // 0x106cd4: 0xc041f4a
    ctx->pc = 0x106CD4u;
    SET_GPR_U32(ctx, 31, 0x106CDCu);
    ctx->pc = 0x106CD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x107D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107D28_0x107d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106CDCu; }
    }
    if (ctx->pc != 0x106CDCu) { return; }
    ctx->pc = 0x106CDCu;
    // 0x106cdc: 0x8e040000
    ctx->pc = 0x106cdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106ce0: 0x240282d
    ctx->pc = 0x106ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ce4: 0xc041b46
    ctx->pc = 0x106CE4u;
    SET_GPR_U32(ctx, 31, 0x106CECu);
    ctx->pc = 0x106CE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106D18_0x106d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106CECu; }
    }
    if (ctx->pc != 0x106CECu) { return; }
    ctx->pc = 0x106CECu;
    // 0x106cec: 0x8e040000
    ctx->pc = 0x106cecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106cf0: 0xc041f6a
    ctx->pc = 0x106CF0u;
    SET_GPR_U32(ctx, 31, 0x106CF8u);
    ctx->pc = 0x106CF4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DA8_0x107da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106CF8u; }
    }
    if (ctx->pc != 0x106CF8u) { return; }
    ctx->pc = 0x106CF8u;
    // 0x106cf8: 0x220102d
    ctx->pc = 0x106cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cfc: 0xdfb00000
    ctx->pc = 0x106cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d00: 0xdfb10008
    ctx->pc = 0x106d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106d04: 0xdfb20010
    ctx->pc = 0x106d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106d08: 0xdfbf0018
    ctx->pc = 0x106d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106d0c: 0x3e00008
    ctx->pc = 0x106D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106B98u: goto label_106b98;
            case 0x106BC0u: goto label_106bc0;
            case 0x106BD0u: goto label_106bd0;
            case 0x106C08u: goto label_106c08;
            case 0x106C0Cu: goto label_106c0c;
            case 0x106C10u: goto label_106c10;
            case 0x106C14u: goto label_106c14;
            case 0x106C50u: goto label_106c50;
            case 0x106C94u: goto label_106c94;
            case 0x106C98u: goto label_106c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106D14u;
    // 0x106d14: 0x0
    ctx->pc = 0x106d14u;
    // NOP
}
