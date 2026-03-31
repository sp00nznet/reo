#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141B10
// Address: 0x141b10 - 0x141be0
void sub_00141B10_0x141b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141b10u;

    // 0x141b10: 0x27bdffd0
    ctx->pc = 0x141b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141b14: 0xffb10008
    ctx->pc = 0x141b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141b18: 0x80882d
    ctx->pc = 0x141b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b1c: 0xffb00000
    ctx->pc = 0x141b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141b20: 0x802d
    ctx->pc = 0x141b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b24: 0xffb20010
    ctx->pc = 0x141b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141b28: 0xc0902d
    ctx->pc = 0x141b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b2c: 0xffb30018
    ctx->pc = 0x141b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x141b30: 0xffbf0020
    ctx->pc = 0x141b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141b34: 0xc0505b4
    ctx->pc = 0x141B34u;
    SET_GPR_U32(ctx, 31, 0x141B3Cu);
    ctx->pc = 0x141B38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B3Cu; }
    }
    if (ctx->pc != 0x141B3Cu) { return; }
    ctx->pc = 0x141B3Cu;
    // 0x141b3c: 0x112840
    ctx->pc = 0x141b3cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 1));
    // 0x141b40: 0xb11021
    ctx->pc = 0x141b40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x141b44: 0x21100
    ctx->pc = 0x141b44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x141b48: 0x3c010026
    ctx->pc = 0x141b48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x141b4c: 0x24214820
    ctx->pc = 0x141b4cu;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 18464));
    // 0x141b50: 0x221021
    ctx->pc = 0x141b50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x141b54: 0x1000000b
    ctx->pc = 0x141B54u;
    {
        const bool branch_taken_0x141b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141B58u;
        SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
        if (branch_taken_0x141b54) {
            ctx->pc = 0x141B84u;
            goto label_141b84;
        }
    }
    ctx->pc = 0x141B5Cu;
    // 0x141b5c: 0x0
    ctx->pc = 0x141b5cu;
    // NOP
label_141b60:
    // 0x141b60: 0x2a020006
    ctx->pc = 0x141b60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x141b64: 0x1040000d
    ctx->pc = 0x141B64u;
    {
        const bool branch_taken_0x141b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x141B68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x141b64) {
            ctx->pc = 0x141B9Cu;
            goto label_141b9c;
        }
    }
    ctx->pc = 0x141B6Cu;
    // 0x141b6c: 0xb11021
    ctx->pc = 0x141b6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x141b70: 0x24c44820
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 18464));
    // 0x141b74: 0x21040
    ctx->pc = 0x141b74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x141b78: 0x501021
    ctx->pc = 0x141b78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x141b7c: 0x210c0
    ctx->pc = 0x141b7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x141b80: 0x441021
    ctx->pc = 0x141b80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141b84:
    // 0x141b84: 0x8c430000
    ctx->pc = 0x141b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141b88: 0x5460fff5
    ctx->pc = 0x141B88u;
    {
        const bool branch_taken_0x141b88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x141b88) {
            ctx->pc = 0x141B8Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x141B60u;
            goto label_141b60;
        }
    }
    ctx->pc = 0x141B90u;
    // 0x141b90: 0xac520004
    ctx->pc = 0x141b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x141b94: 0xac530000
    ctx->pc = 0x141b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x141b98: 0x24020006
    ctx->pc = 0x141b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_141b9c:
    // 0x141b9c: 0x16020003
    ctx->pc = 0x141B9Cu;
    {
        const bool branch_taken_0x141b9c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x141BA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x141b9c) {
            ctx->pc = 0x141BACu;
            goto label_141bac;
        }
    }
    ctx->pc = 0x141BA4u;
    // 0x141ba4: 0xc05062a
    ctx->pc = 0x141BA4u;
    SET_GPR_U32(ctx, 31, 0x141BACu);
    ctx->pc = 0x141BA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958072));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141BACu; }
    }
    if (ctx->pc != 0x141BACu) { return; }
    ctx->pc = 0x141BACu;
label_141bac:
    // 0x141bac: 0xc0505ba
    ctx->pc = 0x141BACu;
    SET_GPR_U32(ctx, 31, 0x141BB4u);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141BB4u; }
    }
    if (ctx->pc != 0x141BB4u) { return; }
    ctx->pc = 0x141BB4u;
    // 0x141bb4: 0x2402ffff
    ctx->pc = 0x141bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141bb8: 0x3a030006
    ctx->pc = 0x141bb8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 16), 6));
    // 0x141bbc: 0xdfb10008
    ctx->pc = 0x141bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141bc0: 0x203100b
    ctx->pc = 0x141bc0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x141bc4: 0xdfb00000
    ctx->pc = 0x141bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141bc8: 0xdfb20010
    ctx->pc = 0x141bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141bcc: 0xdfb30018
    ctx->pc = 0x141bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141bd0: 0xdfbf0020
    ctx->pc = 0x141bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141bd4: 0x3e00008
    ctx->pc = 0x141BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141B60u: goto label_141b60;
            case 0x141B84u: goto label_141b84;
            case 0x141B9Cu: goto label_141b9c;
            case 0x141BACu: goto label_141bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141BDCu;
    // 0x141bdc: 0x0
    ctx->pc = 0x141bdcu;
    // NOP
}
