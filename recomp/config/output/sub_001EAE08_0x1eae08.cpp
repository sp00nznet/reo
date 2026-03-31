#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EAE08
// Address: 0x1eae08 - 0x1eaf34
void sub_001EAE08_0x1eae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1eae08u;

    // 0x1eae08: 0x27bdffd0
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eae0c: 0xffbe0020
    ctx->pc = 0x1eae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1eae10: 0xffbf0028
    ctx->pc = 0x1eae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1eae14: 0x3a0f02d
    ctx->pc = 0x1eae14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae18: 0xafc40000
    ctx->pc = 0x1eae18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1eae1c: 0xafc50004
    ctx->pc = 0x1eae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1eae20: 0xafc60008
    ctx->pc = 0x1eae20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1eae24: 0x8fc20004
    ctx->pc = 0x1eae24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eae28: 0x8c420000
    ctx->pc = 0x1eae28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eae2c: 0xafc2000c
    ctx->pc = 0x1eae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eae30: 0x8fc20008
    ctx->pc = 0x1eae30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eae34: 0x8c420000
    ctx->pc = 0x1eae34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eae38: 0xafc20010
    ctx->pc = 0x1eae38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eae3c: 0xa7c00018
    ctx->pc = 0x1eae3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 24), (uint16_t)GPR_U32(ctx, 0));
label_1eae40:
    // 0x1eae40: 0x87c20018
    ctx->pc = 0x1eae40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eae44: 0x28420010
    ctx->pc = 0x1eae44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x1eae48: 0x14400003
    ctx->pc = 0x1EAE48u;
    {
        const bool branch_taken_0x1eae48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eae48) {
            ctx->pc = 0x1EAE58u;
            goto label_1eae58;
        }
    }
    ctx->pc = 0x1EAE50u;
    // 0x1eae50: 0x1000001c
    ctx->pc = 0x1EAE50u;
    {
        const bool branch_taken_0x1eae50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eae50) {
            ctx->pc = 0x1EAEC4u;
            goto label_1eaec4;
        }
    }
    ctx->pc = 0x1EAE58u;
label_1eae58:
    // 0x1eae58: 0x8fc30000
    ctx->pc = 0x1eae58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eae5c: 0x87c20018
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eae60: 0x21080
    ctx->pc = 0x1eae60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eae64: 0x621021
    ctx->pc = 0x1eae64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eae68: 0x8fc3000c
    ctx->pc = 0x1eae68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eae6c: 0x8c420000
    ctx->pc = 0x1eae6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eae70: 0x621026
    ctx->pc = 0x1eae70u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eae74: 0xafc2000c
    ctx->pc = 0x1eae74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eae78: 0x8fc40000
    ctx->pc = 0x1eae78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eae7c: 0x8fc5000c
    ctx->pc = 0x1eae7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eae80: 0xc07ab3e
    ctx->pc = 0x1EAE80u;
    SET_GPR_U32(ctx, 31, 0x1EAE88u);
    ctx->pc = 0x1EACF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EACF8_0x1eacf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE88u; }
    }
    if (ctx->pc != 0x1EAE88u) { return; }
    ctx->pc = 0x1EAE88u;
    // 0x1eae88: 0x40182d
    ctx->pc = 0x1eae88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae8c: 0x8fc20010
    ctx->pc = 0x1eae8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eae90: 0x431026
    ctx->pc = 0x1eae90u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eae94: 0xafc20010
    ctx->pc = 0x1eae94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eae98: 0x8fc2000c
    ctx->pc = 0x1eae98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eae9c: 0xafc20014
    ctx->pc = 0x1eae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1eaea0: 0x8fc20010
    ctx->pc = 0x1eaea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eaea4: 0xafc2000c
    ctx->pc = 0x1eaea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eaea8: 0x8fc20014
    ctx->pc = 0x1eaea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eaeac: 0xafc20010
    ctx->pc = 0x1eaeacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eaeb0: 0x97c20018
    ctx->pc = 0x1eaeb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eaeb4: 0x24420001
    ctx->pc = 0x1eaeb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eaeb8: 0xa7c20018
    ctx->pc = 0x1eaeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x1eaebc: 0x1000ffe0
    ctx->pc = 0x1EAEBCu;
    {
        const bool branch_taken_0x1eaebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eaebc) {
            ctx->pc = 0x1EAE40u;
            goto label_1eae40;
        }
    }
    ctx->pc = 0x1EAEC4u;
label_1eaec4:
    // 0x1eaec4: 0x8fc2000c
    ctx->pc = 0x1eaec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eaec8: 0xafc20014
    ctx->pc = 0x1eaec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1eaecc: 0x8fc20010
    ctx->pc = 0x1eaeccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eaed0: 0xafc2000c
    ctx->pc = 0x1eaed0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eaed4: 0x8fc20014
    ctx->pc = 0x1eaed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eaed8: 0xafc20010
    ctx->pc = 0x1eaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eaedc: 0x8fc20000
    ctx->pc = 0x1eaedcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eaee0: 0x8fc30010
    ctx->pc = 0x1eaee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eaee4: 0x8c420040
    ctx->pc = 0x1eaee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1eaee8: 0x621026
    ctx->pc = 0x1eaee8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eaeec: 0xafc20010
    ctx->pc = 0x1eaeecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eaef0: 0x8fc20000
    ctx->pc = 0x1eaef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eaef4: 0x8fc3000c
    ctx->pc = 0x1eaef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eaef8: 0x8c420044
    ctx->pc = 0x1eaef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1eaefc: 0x621026
    ctx->pc = 0x1eaefcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eaf00: 0xafc2000c
    ctx->pc = 0x1eaf00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eaf04: 0x8fc30004
    ctx->pc = 0x1eaf04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eaf08: 0x8fc2000c
    ctx->pc = 0x1eaf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eaf0c: 0xac620000
    ctx->pc = 0x1eaf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eaf10: 0x8fc30008
    ctx->pc = 0x1eaf10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eaf14: 0x8fc20010
    ctx->pc = 0x1eaf14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eaf18: 0xac620000
    ctx->pc = 0x1eaf18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eaf1c: 0x3c0e82d
    ctx->pc = 0x1eaf1cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf20: 0xdfbe0020
    ctx->pc = 0x1eaf20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaf24: 0xdfbf0028
    ctx->pc = 0x1eaf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eaf28: 0x27bd0030
    ctx->pc = 0x1eaf28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaf2c: 0x3e00008
    ctx->pc = 0x1EAF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EAE40u: goto label_1eae40;
            case 0x1EAE58u: goto label_1eae58;
            case 0x1EAEC4u: goto label_1eaec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAF34u;
}
