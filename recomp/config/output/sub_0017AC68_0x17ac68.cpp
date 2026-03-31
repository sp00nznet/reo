#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017AC68
// Address: 0x17ac68 - 0x17ad58
void sub_0017AC68_0x17ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ac68u;

    // 0x17ac68: 0x27bdff90
    ctx->pc = 0x17ac68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17ac6c: 0xffb00040
    ctx->pc = 0x17ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17ac70: 0xa0802d
    ctx->pc = 0x17ac70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac74: 0xffb10048
    ctx->pc = 0x17ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17ac78: 0x80882d
    ctx->pc = 0x17ac78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac7c: 0xffb20050
    ctx->pc = 0x17ac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17ac80: 0x26120004
    ctx->pc = 0x17ac80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17ac84: 0xffb30058
    ctx->pc = 0x17ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17ac88: 0xe0982d
    ctx->pc = 0x17ac88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac8c: 0xffbf0060
    ctx->pc = 0x17ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17ac90: 0x26020014
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17ac94: 0xafa60020
    ctx->pc = 0x17ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x17ac98: 0x26030024
    ctx->pc = 0x17ac98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 36));
    // 0x17ac9c: 0x8c690004
    ctx->pc = 0x17ac9cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17aca0: 0x8c480004
    ctx->pc = 0x17aca0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17aca4: 0x8c450000
    ctx->pc = 0x17aca4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17aca8: 0x8c660000
    ctx->pc = 0x17aca8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17acac: 0x8e470000
    ctx->pc = 0x17acacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17acb0: 0x8e030044
    ctx->pc = 0x17acb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17acb4: 0x8e420004
    ctx->pc = 0x17acb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17acb8: 0xafa70000
    ctx->pc = 0x17acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x17acbc: 0xafa50004
    ctx->pc = 0x17acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17acc0: 0xafa60008
    ctx->pc = 0x17acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x17acc4: 0xafa90014
    ctx->pc = 0x17acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x17acc8: 0xafa30024
    ctx->pc = 0x17acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x17accc: 0xafa2000c
    ctx->pc = 0x17acccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x17acd0: 0xc05eb6a
    ctx->pc = 0x17ACD0u;
    SET_GPR_U32(ctx, 31, 0x17ACD8u);
    ctx->pc = 0x17ACD4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACD8u; }
    }
    if (ctx->pc != 0x17ACD8u) { return; }
    ctx->pc = 0x17ACD8u;
    // 0x17acd8: 0x24030001
    ctx->pc = 0x17acd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17acdc: 0x3a0302d
    ctx->pc = 0x17acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ace0: 0x220202d
    ctx->pc = 0x17ace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ace4: 0x200282d
    ctx->pc = 0x17ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ace8: 0x27a70020
    ctx->pc = 0x17ace8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x17acec: 0x14430006
    ctx->pc = 0x17ACECu;
    {
        const bool branch_taken_0x17acec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17ACF0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17acec) {
            ctx->pc = 0x17AD08u;
            goto label_17ad08;
        }
    }
    ctx->pc = 0x17ACF4u;
    // 0x17acf4: 0x8e020048
    ctx->pc = 0x17acf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17acf8: 0x21fc2
    ctx->pc = 0x17acf8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17acfc: 0x431021
    ctx->pc = 0x17acfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ad00: 0x10000002
    ctx->pc = 0x17AD00u;
    {
        const bool branch_taken_0x17ad00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AD04u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x17ad00) {
            ctx->pc = 0x17AD0Cu;
            goto label_17ad0c;
        }
    }
    ctx->pc = 0x17AD08u;
label_17ad08:
    // 0x17ad08: 0x8e020048
    ctx->pc = 0x17ad08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17ad0c:
    // 0x17ad0c: 0xafa20028
    ctx->pc = 0x17ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x17ad10: 0x8e220008
    ctx->pc = 0x17ad10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17ad14: 0x54400004
    ctx->pc = 0x17AD14u;
    {
        const bool branch_taken_0x17ad14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17ad14) {
            ctx->pc = 0x17AD18u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
            ctx->pc = 0x17AD28u;
            goto label_17ad28;
        }
    }
    ctx->pc = 0x17AD1Cu;
    // 0x17ad1c: 0x8e420004
    ctx->pc = 0x17ad1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17ad20: 0x21080
    ctx->pc = 0x17ad20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ad24: 0xafa2002c
    ctx->pc = 0x17ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_17ad28:
    // 0x17ad28: 0x16690002
    ctx->pc = 0x17AD28u;
    {
        const bool branch_taken_0x17ad28 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 9));
        ctx->pc = 0x17AD2Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ad28) {
            ctx->pc = 0x17AD34u;
            goto label_17ad34;
        }
    }
    ctx->pc = 0x17AD30u;
    // 0x17ad30: 0x8e28003c
    ctx->pc = 0x17ad30u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_17ad34:
    // 0x17ad34: 0xc05eb56
    ctx->pc = 0x17AD34u;
    SET_GPR_U32(ctx, 31, 0x17AD3Cu);
    ctx->pc = 0x17AD58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AD58_0x17ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD3Cu; }
    }
    if (ctx->pc != 0x17AD3Cu) { return; }
    ctx->pc = 0x17AD3Cu;
    // 0x17ad3c: 0xdfb00040
    ctx->pc = 0x17ad3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ad40: 0xdfb10048
    ctx->pc = 0x17ad40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ad44: 0xdfb20050
    ctx->pc = 0x17ad44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ad48: 0xdfb30058
    ctx->pc = 0x17ad48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17ad4c: 0xdfbf0060
    ctx->pc = 0x17ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ad50: 0x3e00008
    ctx->pc = 0x17AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AD08u: goto label_17ad08;
            case 0x17AD0Cu: goto label_17ad0c;
            case 0x17AD28u: goto label_17ad28;
            case 0x17AD34u: goto label_17ad34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AD58u;
}
