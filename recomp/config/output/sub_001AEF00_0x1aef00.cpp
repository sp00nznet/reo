#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AEF00
// Address: 0x1aef00 - 0x1af040
void sub_001AEF00_0x1aef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aef00u;

    // 0x1aef00: 0x27bdffe0
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aef04: 0x3c040032
    ctx->pc = 0x1aef04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1aef08: 0xffbf0010
    ctx->pc = 0x1aef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aef0c: 0x2484fb60
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x1aef10: 0x282d
    ctx->pc = 0x1aef10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef14: 0x24064234
    ctx->pc = 0x1aef14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16948));
    // 0x1aef18: 0xc041f1a
    ctx->pc = 0x1AEF18u;
    SET_GPR_U32(ctx, 31, 0x1AEF20u);
    ctx->pc = 0x1AEF1Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF20u; }
    }
    if (ctx->pc != 0x1AEF20u) { return; }
    ctx->pc = 0x1AEF20u;
    // 0x1aef20: 0x3c010032
    ctx->pc = 0x1aef20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef24: 0x3c070032
    ctx->pc = 0x1aef24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x1aef28: 0x8c283bd8
    ctx->pc = 0x1aef28u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 15320)));
    // 0x1aef2c: 0x3c040023
    ctx->pc = 0x1aef2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1aef30: 0x24090001
    ctx->pc = 0x1aef30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aef34: 0x502d
    ctx->pc = 0x1aef34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef38: 0x24e7fb60
    ctx->pc = 0x1aef38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966112));
    // 0x1aef3c: 0x248442d0
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17104));
    // 0x1aef40: 0x2403ffff
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aef44: 0x3c010032
    ctx->pc = 0x1aef44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef48: 0x35080001
    ctx->pc = 0x1aef48u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 1));
    // 0x1aef4c: 0xa029fb7c
    ctx->pc = 0x1aef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966140), (uint8_t)GPR_U32(ctx, 9));
    // 0x1aef50: 0x3c010032
    ctx->pc = 0x1aef50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef54: 0x8c261ef4
    ctx->pc = 0x1aef54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 7924)));
    // 0x1aef58: 0x3c010032
    ctx->pc = 0x1aef58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef5c: 0x34c60001
    ctx->pc = 0x1aef5cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1));
    // 0x1aef60: 0x9025fb83
    ctx->pc = 0x1aef60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966147)));
    // 0x1aef64: 0x3c010032
    ctx->pc = 0x1aef64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef68: 0x34a50003
    ctx->pc = 0x1aef68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3));
    // 0x1aef6c: 0xac283bd8
    ctx->pc = 0x1aef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15320), GPR_U32(ctx, 8));
    // 0x1aef70: 0x3c010032
    ctx->pc = 0x1aef70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef74: 0xac261ef4
    ctx->pc = 0x1aef74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7924), GPR_U32(ctx, 6));
    // 0x1aef78: 0x3c010032
    ctx->pc = 0x1aef78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aef7c: 0x10000009
    ctx->pc = 0x1AEF7Cu;
    {
        const bool branch_taken_0x1aef7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AEF80u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966147), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1aef7c) {
            ctx->pc = 0x1AEFA4u;
            goto label_1aefa4;
        }
    }
    ctx->pc = 0x1AEF84u;
label_1aef84:
    // 0x1aef84: 0x254a0001
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1aef88: 0x52943
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1aef8c: 0xc94004
    ctx->pc = 0x1aef8cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1aef90: 0x52880
    ctx->pc = 0x1aef90u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aef94: 0xe53021
    ctx->pc = 0x1aef94u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1aef98: 0x8cc54094
    ctx->pc = 0x1aef98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 16532)));
    // 0x1aef9c: 0xa82825
    ctx->pc = 0x1aef9cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1aefa0: 0xacc54094
    ctx->pc = 0x1aefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16532), GPR_U32(ctx, 5));
label_1aefa4:
    // 0x1aefa4: 0xa2840
    ctx->pc = 0x1aefa4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 1));
    // 0x1aefa8: 0x852821
    ctx->pc = 0x1aefa8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aefac: 0x84a50000
    ctx->pc = 0x1aefacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aefb0: 0x14a3fff4
    ctx->pc = 0x1AEFB0u;
    {
        const bool branch_taken_0x1aefb0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AEFB4u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 31));
        if (branch_taken_0x1aefb0) {
            ctx->pc = 0x1AEF84u;
            goto label_1aef84;
        }
    }
    ctx->pc = 0x1AEFB8u;
    // 0x1aefb8: 0x10000011
    ctx->pc = 0x1AEFB8u;
    {
        const bool branch_taken_0x1aefb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AEFBCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aefb8) {
            ctx->pc = 0x1AF000u;
            goto label_1af000;
        }
    }
    ctx->pc = 0x1AEFC0u;
label_1aefc0:
    // 0x1aefc0: 0x101880
    ctx->pc = 0x1aefc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1aefc4: 0x51040
    ctx->pc = 0x1aefc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1aefc8: 0x3c040032
    ctx->pc = 0x1aefc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1aefcc: 0x452821
    ctx->pc = 0x1aefccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1aefd0: 0x2484fb60
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x1aefd4: 0x3c020023
    ctx->pc = 0x1aefd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1aefd8: 0x244242b0
    ctx->pc = 0x1aefd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17072));
    // 0x1aefdc: 0x431021
    ctx->pc = 0x1aefdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aefe0: 0x8c460000
    ctx->pc = 0x1aefe0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aefe4: 0x518c0
    ctx->pc = 0x1aefe4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1aefe8: 0x831821
    ctx->pc = 0x1aefe8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aefec: 0x3c050025
    ctx->pc = 0x1aefecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1aeff0: 0x2464009c
    ctx->pc = 0x1aeff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 156));
    // 0x1aeff4: 0xc042a0c
    ctx->pc = 0x1AEFF4u;
    SET_GPR_U32(ctx, 31, 0x1AEFFCu);
    ctx->pc = 0x1AEFF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966984));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFFCu; }
    }
    if (ctx->pc != 0x1AEFFCu) { return; }
    ctx->pc = 0x1AEFFCu;
    // 0x1aeffc: 0x26100001
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1af000:
    // 0x1af000: 0x3c040023
    ctx->pc = 0x1af000u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1af004: 0x240300ff
    ctx->pc = 0x1af004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1af008: 0x24844268
    ctx->pc = 0x1af008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17000));
    // 0x1af00c: 0x902021
    ctx->pc = 0x1af00cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1af010: 0x90840000
    ctx->pc = 0x1af010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af014: 0x1483ffea
    ctx->pc = 0x1AF014u;
    {
        const bool branch_taken_0x1af014 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AF018u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x1af014) {
            ctx->pc = 0x1AEFC0u;
            goto label_1aefc0;
        }
    }
    ctx->pc = 0x1AF01Cu;
    // 0x1af01c: 0x3c010032
    ctx->pc = 0x1af01cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af020: 0xa030fb80
    ctx->pc = 0x1af020u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966144), (uint8_t)GPR_U32(ctx, 16));
    // 0x1af024: 0xdfbf0010
    ctx->pc = 0x1af024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af028: 0x7bb00000
    ctx->pc = 0x1af028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af02c: 0x3e00008
    ctx->pc = 0x1AF02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEF84u: goto label_1aef84;
            case 0x1AEFA4u: goto label_1aefa4;
            case 0x1AEFC0u: goto label_1aefc0;
            case 0x1AF000u: goto label_1af000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF034u;
    // 0x1af034: 0x0
    ctx->pc = 0x1af034u;
    // NOP
    // 0x1af038: 0x0
    ctx->pc = 0x1af038u;
    // NOP
    // 0x1af03c: 0x0
    ctx->pc = 0x1af03cu;
    // NOP
}
