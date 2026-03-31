#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010CDF8
// Address: 0x10cdf8 - 0x10cee0
void sub_0010CDF8_0x10cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10cdf8u;

    // 0x10cdf8: 0x27bdffd0
    ctx->pc = 0x10cdf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cdfc: 0xffb20010
    ctx->pc = 0x10cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ce00: 0x80902d
    ctx->pc = 0x10ce00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce04: 0xffb00000
    ctx->pc = 0x10ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ce08: 0x26420040
    ctx->pc = 0x10ce08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 64));
    // 0x10ce0c: 0xffb10008
    ctx->pc = 0x10ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ce10: 0xffb30018
    ctx->pc = 0x10ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ce14: 0xffb40020
    ctx->pc = 0x10ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10ce18: 0xffbf0028
    ctx->pc = 0x10ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ce1c: 0x8e450030
    ctx->pc = 0x10ce1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x10ce20: 0x54a20017
    ctx->pc = 0x10CE20u;
    {
        const bool branch_taken_0x10ce20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x10ce20) {
            ctx->pc = 0x10CE24u;
            SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->pc = 0x10CE80u;
            goto label_10ce80;
        }
    }
    ctx->pc = 0x10CE28u;
    // 0x10ce28: 0x8e440054
    ctx->pc = 0x10ce28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x10ce2c: 0xc041c76
    ctx->pc = 0x10CE2Cu;
    SET_GPR_U32(ctx, 31, 0x10CE34u);
    ctx->pc = 0x10CE30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001071D8_0x1071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE34u; }
    }
    if (ctx->pc != 0x10CE34u) { return; }
    ctx->pc = 0x10CE34u;
    // 0x10ce34: 0x40882d
    ctx->pc = 0x10ce34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce38: 0x12200021
    ctx->pc = 0x10CE38u;
    {
        const bool branch_taken_0x10ce38 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CE3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10ce38) {
            ctx->pc = 0x10CEC0u;
            goto label_10cec0;
        }
    }
    ctx->pc = 0x10CE40u;
    // 0x10ce40: 0x24020400
    ctx->pc = 0x10ce40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10ce44: 0xae510030
    ctx->pc = 0x10ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x10ce48: 0xae420034
    ctx->pc = 0x10ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x10ce4c: 0x24130002
    ctx->pc = 0x10ce4cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ce50: 0x263103fd
    ctx->pc = 0x10ce50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1021));
    // 0x10ce54: 0x26440042
    ctx->pc = 0x10ce54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 66));
label_10ce58:
    // 0x10ce58: 0x90830000
    ctx->pc = 0x10ce58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ce5c: 0x2484ffff
    ctx->pc = 0x10ce5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10ce60: 0x2331021
    ctx->pc = 0x10ce60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x10ce64: 0x2673ffff
    ctx->pc = 0x10ce64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x10ce68: 0x0
    ctx->pc = 0x10ce68u;
    // NOP
    // 0x10ce6c: 0x661fffa
    ctx->pc = 0x10CE6Cu;
    {
        const bool branch_taken_0x10ce6c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x10CE70u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x10ce6c) {
            ctx->pc = 0x10CE58u;
            goto label_10ce58;
        }
    }
    ctx->pc = 0x10CE74u;
    // 0x10ce74: 0xae510000
    ctx->pc = 0x10ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x10ce78: 0x10000011
    ctx->pc = 0x10CE78u;
    {
        const bool branch_taken_0x10ce78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CE7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ce78) {
            ctx->pc = 0x10CEC0u;
            goto label_10cec0;
        }
    }
    ctx->pc = 0x10CE80u;
label_10ce80:
    // 0x10ce80: 0x8e440054
    ctx->pc = 0x10ce80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x10ce84: 0x13a040
    ctx->pc = 0x10ce84u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 19), 1));
    // 0x10ce88: 0xc04269e
    ctx->pc = 0x10CE88u;
    SET_GPR_U32(ctx, 31, 0x10CE90u);
    ctx->pc = 0x10CE8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00109A78_0x109a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE90u; }
    }
    if (ctx->pc != 0x10CE90u) { return; }
    ctx->pc = 0x10CE90u;
    // 0x10ce90: 0x40882d
    ctx->pc = 0x10ce90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce94: 0x1220000a
    ctx->pc = 0x10CE94u;
    {
        const bool branch_taken_0x10ce94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CE98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10ce94) {
            ctx->pc = 0x10CEC0u;
            goto label_10cec0;
        }
    }
    ctx->pc = 0x10CE9Cu;
    // 0x10ce9c: 0x2338021
    ctx->pc = 0x10ce9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x10cea0: 0x260302d
    ctx->pc = 0x10cea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cea4: 0x200202d
    ctx->pc = 0x10cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cea8: 0xc041eac
    ctx->pc = 0x10CEA8u;
    SET_GPR_U32(ctx, 31, 0x10CEB0u);
    ctx->pc = 0x10CEACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEB0u; }
    }
    if (ctx->pc != 0x10CEB0u) { return; }
    ctx->pc = 0x10CEB0u;
    // 0x10ceb0: 0xae500000
    ctx->pc = 0x10ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x10ceb4: 0xae540034
    ctx->pc = 0x10ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 20));
    // 0x10ceb8: 0x102d
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cebc: 0xae510030
    ctx->pc = 0x10cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
label_10cec0:
    // 0x10cec0: 0xdfb00000
    ctx->pc = 0x10cec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cec4: 0xdfb10008
    ctx->pc = 0x10cec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cec8: 0xdfb20010
    ctx->pc = 0x10cec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cecc: 0xdfb30018
    ctx->pc = 0x10ceccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ced0: 0xdfb40020
    ctx->pc = 0x10ced0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ced4: 0xdfbf0028
    ctx->pc = 0x10ced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ced8: 0x3e00008
    ctx->pc = 0x10CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CEDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10CE58u: goto label_10ce58;
            case 0x10CE80u: goto label_10ce80;
            case 0x10CEC0u: goto label_10cec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10CEE0u;
}
