#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177BE0
// Address: 0x177be0 - 0x177c48
void sub_00177BE0_0x177be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177be0u;

label_177be0:
    // 0x177be0: 0x51100
    ctx->pc = 0x177be0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_177be4:
    // 0x177be4: 0x27bdfff0
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_177be8:
    // 0x177be8: 0x451021
    ctx->pc = 0x177be8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_177bec:
    // 0x177bec: 0xe0282d
    ctx->pc = 0x177becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177bf0:
    // 0x177bf0: 0x21080
    ctx->pc = 0x177bf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_177bf4:
    // 0x177bf4: 0xffbf0000
    ctx->pc = 0x177bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_177bf8:
    // 0x177bf8: 0x821821
    ctx->pc = 0x177bf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_177bfc:
    // 0x177bfc: 0x102d
    ctx->pc = 0x177bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c00:
    // 0x177c00: 0x8c691aac
    ctx->pc = 0x177c00u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 6828)));
label_177c04:
    // 0x177c04: 0x63080
    ctx->pc = 0x177c04u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_177c08:
    // 0x177c08: 0x382d
    ctx->pc = 0x177c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c0c:
    // 0x177c0c: 0xc91821
    ctx->pc = 0x177c0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_177c10:
    // 0x177c10: 0x11200004
label_177c14:
    if (ctx->pc == 0x177C14u) {
        ctx->pc = 0x177C14u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177C18u;
        goto label_177c18;
    }
    ctx->pc = 0x177C10u;
    {
        const bool branch_taken_0x177c10 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x177C14u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177c10) {
            ctx->pc = 0x177C24u;
            goto label_177c24;
        }
    }
    ctx->pc = 0x177C18u;
label_177c18:
    // 0x177c18: 0x8c620000
    ctx->pc = 0x177c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_177c1c:
    // 0x177c1c: 0x40f809
label_177c20:
    if (ctx->pc == 0x177C20u) {
        ctx->pc = 0x177C24u;
        goto label_177c24;
    }
    ctx->pc = 0x177C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177C24u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177BE0u: goto label_177be0;
            case 0x177BE4u: goto label_177be4;
            case 0x177BE8u: goto label_177be8;
            case 0x177BECu: goto label_177bec;
            case 0x177BF0u: goto label_177bf0;
            case 0x177BF4u: goto label_177bf4;
            case 0x177BF8u: goto label_177bf8;
            case 0x177BFCu: goto label_177bfc;
            case 0x177C00u: goto label_177c00;
            case 0x177C04u: goto label_177c04;
            case 0x177C08u: goto label_177c08;
            case 0x177C0Cu: goto label_177c0c;
            case 0x177C10u: goto label_177c10;
            case 0x177C14u: goto label_177c14;
            case 0x177C18u: goto label_177c18;
            case 0x177C1Cu: goto label_177c1c;
            case 0x177C20u: goto label_177c20;
            case 0x177C24u: goto label_177c24;
            case 0x177C28u: goto label_177c28;
            case 0x177C2Cu: goto label_177c2c;
            case 0x177C30u: goto label_177c30;
            case 0x177C34u: goto label_177c34;
            case 0x177C38u: goto label_177c38;
            case 0x177C3Cu: goto label_177c3c;
            case 0x177C40u: goto label_177c40;
            case 0x177C44u: goto label_177c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177C24u; }
            if (ctx->pc != 0x177C24u) { return; }
        }
    }
    ctx->pc = 0x177C24u;
label_177c24:
    // 0x177c24: 0xdfbf0000
    ctx->pc = 0x177c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177c28:
    // 0x177c28: 0x3e00008
label_177c2c:
    if (ctx->pc == 0x177C2Cu) {
        ctx->pc = 0x177C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x177C30u;
        goto label_177c30;
    }
    ctx->pc = 0x177C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177BE0u: goto label_177be0;
            case 0x177BE4u: goto label_177be4;
            case 0x177BE8u: goto label_177be8;
            case 0x177BECu: goto label_177bec;
            case 0x177BF0u: goto label_177bf0;
            case 0x177BF4u: goto label_177bf4;
            case 0x177BF8u: goto label_177bf8;
            case 0x177BFCu: goto label_177bfc;
            case 0x177C00u: goto label_177c00;
            case 0x177C04u: goto label_177c04;
            case 0x177C08u: goto label_177c08;
            case 0x177C0Cu: goto label_177c0c;
            case 0x177C10u: goto label_177c10;
            case 0x177C14u: goto label_177c14;
            case 0x177C18u: goto label_177c18;
            case 0x177C1Cu: goto label_177c1c;
            case 0x177C20u: goto label_177c20;
            case 0x177C24u: goto label_177c24;
            case 0x177C28u: goto label_177c28;
            case 0x177C2Cu: goto label_177c2c;
            case 0x177C30u: goto label_177c30;
            case 0x177C34u: goto label_177c34;
            case 0x177C38u: goto label_177c38;
            case 0x177C3Cu: goto label_177c3c;
            case 0x177C40u: goto label_177c40;
            case 0x177C44u: goto label_177c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177C30u;
label_177c30:
    // 0x177c30: 0x51100
    ctx->pc = 0x177c30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_177c34:
    // 0x177c34: 0x451021
    ctx->pc = 0x177c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_177c38:
    // 0x177c38: 0x21080
    ctx->pc = 0x177c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_177c3c:
    // 0x177c3c: 0x822021
    ctx->pc = 0x177c3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_177c40:
    // 0x177c40: 0x3e00008
label_177c44:
    if (ctx->pc == 0x177C44u) {
        ctx->pc = 0x177C44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 6816), GPR_U32(ctx, 6));
        ctx->pc = 0x177C48u;
        goto label_fallthrough_0x177c40;
    }
    ctx->pc = 0x177C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 6816), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177BE0u: goto label_177be0;
            case 0x177BE4u: goto label_177be4;
            case 0x177BE8u: goto label_177be8;
            case 0x177BECu: goto label_177bec;
            case 0x177BF0u: goto label_177bf0;
            case 0x177BF4u: goto label_177bf4;
            case 0x177BF8u: goto label_177bf8;
            case 0x177BFCu: goto label_177bfc;
            case 0x177C00u: goto label_177c00;
            case 0x177C04u: goto label_177c04;
            case 0x177C08u: goto label_177c08;
            case 0x177C0Cu: goto label_177c0c;
            case 0x177C10u: goto label_177c10;
            case 0x177C14u: goto label_177c14;
            case 0x177C18u: goto label_177c18;
            case 0x177C1Cu: goto label_177c1c;
            case 0x177C20u: goto label_177c20;
            case 0x177C24u: goto label_177c24;
            case 0x177C28u: goto label_177c28;
            case 0x177C2Cu: goto label_177c2c;
            case 0x177C30u: goto label_177c30;
            case 0x177C34u: goto label_177c34;
            case 0x177C38u: goto label_177c38;
            case 0x177C3Cu: goto label_177c3c;
            case 0x177C40u: goto label_177c40;
            case 0x177C44u: goto label_177c44;
            default: break;
        }
        return;
    }
label_fallthrough_0x177c40:
    ctx->pc = 0x177C48u;
}
