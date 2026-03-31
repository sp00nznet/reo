#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134BC0
// Address: 0x134bc0 - 0x134c58
void sub_00134BC0_0x134bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134bc0u;

label_134bc0:
    // 0x134bc0: 0x27bdfff0
    ctx->pc = 0x134bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_134bc4:
    // 0x134bc4: 0xffb00000
    ctx->pc = 0x134bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_134bc8:
    // 0x134bc8: 0x80802d
    ctx->pc = 0x134bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134bcc:
    // 0x134bcc: 0xffbf0008
    ctx->pc = 0x134bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_134bd0:
    // 0x134bd0: 0x8e020008
    ctx->pc = 0x134bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134bd4:
    // 0x134bd4: 0x5040001d
label_134bd8:
    if (ctx->pc == 0x134BD8u) {
        ctx->pc = 0x134BD8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134BDCu;
        goto label_134bdc;
    }
    ctx->pc = 0x134BD4u;
    {
        const bool branch_taken_0x134bd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134bd4) {
            ctx->pc = 0x134BD8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134C4Cu;
            goto label_134c4c;
        }
    }
    ctx->pc = 0x134BDCu;
label_134bdc:
    // 0x134bdc: 0xc04c7be
label_134be0:
    if (ctx->pc == 0x134BE0u) {
        ctx->pc = 0x134BE4u;
        goto label_134be4;
    }
    ctx->pc = 0x134BDCu;
    SET_GPR_U32(ctx, 31, 0x134BE4u);
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BE4u; }
    }
    if (ctx->pc != 0x134BE4u) { return; }
    ctx->pc = 0x134BE4u;
label_134be4:
    // 0x134be4: 0x50400019
label_134be8:
    if (ctx->pc == 0x134BE8u) {
        ctx->pc = 0x134BE8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134BECu;
        goto label_134bec;
    }
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134BE8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134C4Cu;
            goto label_134c4c;
        }
    }
    ctx->pc = 0x134BECu;
label_134bec:
    // 0x134bec: 0x82030002
    ctx->pc = 0x134becu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_134bf0:
    // 0x134bf0: 0x2c620005
    ctx->pc = 0x134bf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_134bf4:
    // 0x134bf4: 0x50400015
label_134bf8:
    if (ctx->pc == 0x134BF8u) {
        ctx->pc = 0x134BF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134BFCu;
        goto label_134bfc;
    }
    ctx->pc = 0x134BF4u;
    {
        const bool branch_taken_0x134bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134bf4) {
            ctx->pc = 0x134BF8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134C4Cu;
            goto label_134c4c;
        }
    }
    ctx->pc = 0x134BFCu;
label_134bfc:
    // 0x134bfc: 0x31080
    ctx->pc = 0x134bfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_134c00:
    // 0x134c00: 0x3c030024
    ctx->pc = 0x134c00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_134c04:
    // 0x134c04: 0x621821
    ctx->pc = 0x134c04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_134c08:
    // 0x134c08: 0x8c63b730
    ctx->pc = 0x134c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294948656)));
label_134c0c:
    // 0x134c0c: 0x600008
label_134c10:
    if (ctx->pc == 0x134C10u) {
        ctx->pc = 0x134C14u;
        goto label_134c14;
    }
    ctx->pc = 0x134C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134BC0u: goto label_134bc0;
            case 0x134BC4u: goto label_134bc4;
            case 0x134BC8u: goto label_134bc8;
            case 0x134BCCu: goto label_134bcc;
            case 0x134BD0u: goto label_134bd0;
            case 0x134BD4u: goto label_134bd4;
            case 0x134BD8u: goto label_134bd8;
            case 0x134BDCu: goto label_134bdc;
            case 0x134BE0u: goto label_134be0;
            case 0x134BE4u: goto label_134be4;
            case 0x134BE8u: goto label_134be8;
            case 0x134BECu: goto label_134bec;
            case 0x134BF0u: goto label_134bf0;
            case 0x134BF4u: goto label_134bf4;
            case 0x134BF8u: goto label_134bf8;
            case 0x134BFCu: goto label_134bfc;
            case 0x134C00u: goto label_134c00;
            case 0x134C04u: goto label_134c04;
            case 0x134C08u: goto label_134c08;
            case 0x134C0Cu: goto label_134c0c;
            case 0x134C10u: goto label_134c10;
            case 0x134C14u: goto label_134c14;
            case 0x134C18u: goto label_134c18;
            case 0x134C1Cu: goto label_134c1c;
            case 0x134C20u: goto label_134c20;
            case 0x134C24u: goto label_134c24;
            case 0x134C28u: goto label_134c28;
            case 0x134C2Cu: goto label_134c2c;
            case 0x134C30u: goto label_134c30;
            case 0x134C34u: goto label_134c34;
            case 0x134C38u: goto label_134c38;
            case 0x134C3Cu: goto label_134c3c;
            case 0x134C40u: goto label_134c40;
            case 0x134C44u: goto label_134c44;
            case 0x134C48u: goto label_134c48;
            case 0x134C4Cu: goto label_134c4c;
            case 0x134C50u: goto label_134c50;
            case 0x134C54u: goto label_134c54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134C14u;
label_134c14:
    // 0x134c14: 0x0
    ctx->pc = 0x134c14u;
    // NOP
label_134c18:
    // 0x134c18: 0xc04c16e
label_134c1c:
    if (ctx->pc == 0x134C1Cu) {
        ctx->pc = 0x134C1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x134C20u;
        goto label_134c20;
    }
    ctx->pc = 0x134C18u;
    SET_GPR_U32(ctx, 31, 0x134C20u);
    ctx->pc = 0x134C1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C20u; }
    }
    if (ctx->pc != 0x134C20u) { return; }
    ctx->pc = 0x134C20u;
label_134c20:
    // 0x134c20: 0x24030003
    ctx->pc = 0x134c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_134c24:
    // 0x134c24: 0x54430009
label_134c28:
    if (ctx->pc == 0x134C28u) {
        ctx->pc = 0x134C28u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134C2Cu;
        goto label_134c2c;
    }
    ctx->pc = 0x134C24u;
    {
        const bool branch_taken_0x134c24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134c24) {
            ctx->pc = 0x134C28u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134C4Cu;
            goto label_134c4c;
        }
    }
    ctx->pc = 0x134C2Cu;
label_134c2c:
    // 0x134c2c: 0xc04b314
label_134c30:
    if (ctx->pc == 0x134C30u) {
        ctx->pc = 0x134C30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x134C34u;
        goto label_134c34;
    }
    ctx->pc = 0x134C2Cu;
    SET_GPR_U32(ctx, 31, 0x134C34u);
    ctx->pc = 0x134C30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC50_0x12cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C34u; }
    }
    if (ctx->pc != 0x134C34u) { return; }
    ctx->pc = 0x134C34u;
label_134c34:
    // 0x134c34: 0x10000005
label_134c38:
    if (ctx->pc == 0x134C38u) {
        ctx->pc = 0x134C38u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134C3Cu;
        goto label_134c3c;
    }
    ctx->pc = 0x134C34u;
    {
        const bool branch_taken_0x134c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134C38u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x134c34) {
            ctx->pc = 0x134C4Cu;
            goto label_134c4c;
        }
    }
    ctx->pc = 0x134C3Cu;
label_134c3c:
    // 0x134c3c: 0x0
    ctx->pc = 0x134c3cu;
    // NOP
label_134c40:
    // 0x134c40: 0xc04b314
label_134c44:
    if (ctx->pc == 0x134C44u) {
        ctx->pc = 0x134C44u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x134C48u;
        goto label_134c48;
    }
    ctx->pc = 0x134C40u;
    SET_GPR_U32(ctx, 31, 0x134C48u);
    ctx->pc = 0x134C44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC50_0x12cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C48u; }
    }
    if (ctx->pc != 0x134C48u) { return; }
    ctx->pc = 0x134C48u;
label_134c48:
    // 0x134c48: 0xdfb00000
    ctx->pc = 0x134c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134c4c:
    // 0x134c4c: 0xdfbf0008
    ctx->pc = 0x134c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_134c50:
    // 0x134c50: 0x3e00008
label_134c54:
    if (ctx->pc == 0x134C54u) {
        ctx->pc = 0x134C54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x134C58u;
        goto label_fallthrough_0x134c50;
    }
    ctx->pc = 0x134C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134C54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134BC0u: goto label_134bc0;
            case 0x134BC4u: goto label_134bc4;
            case 0x134BC8u: goto label_134bc8;
            case 0x134BCCu: goto label_134bcc;
            case 0x134BD0u: goto label_134bd0;
            case 0x134BD4u: goto label_134bd4;
            case 0x134BD8u: goto label_134bd8;
            case 0x134BDCu: goto label_134bdc;
            case 0x134BE0u: goto label_134be0;
            case 0x134BE4u: goto label_134be4;
            case 0x134BE8u: goto label_134be8;
            case 0x134BECu: goto label_134bec;
            case 0x134BF0u: goto label_134bf0;
            case 0x134BF4u: goto label_134bf4;
            case 0x134BF8u: goto label_134bf8;
            case 0x134BFCu: goto label_134bfc;
            case 0x134C00u: goto label_134c00;
            case 0x134C04u: goto label_134c04;
            case 0x134C08u: goto label_134c08;
            case 0x134C0Cu: goto label_134c0c;
            case 0x134C10u: goto label_134c10;
            case 0x134C14u: goto label_134c14;
            case 0x134C18u: goto label_134c18;
            case 0x134C1Cu: goto label_134c1c;
            case 0x134C20u: goto label_134c20;
            case 0x134C24u: goto label_134c24;
            case 0x134C28u: goto label_134c28;
            case 0x134C2Cu: goto label_134c2c;
            case 0x134C30u: goto label_134c30;
            case 0x134C34u: goto label_134c34;
            case 0x134C38u: goto label_134c38;
            case 0x134C3Cu: goto label_134c3c;
            case 0x134C40u: goto label_134c40;
            case 0x134C44u: goto label_134c44;
            case 0x134C48u: goto label_134c48;
            case 0x134C4Cu: goto label_134c4c;
            case 0x134C50u: goto label_134c50;
            case 0x134C54u: goto label_134c54;
            default: break;
        }
        return;
    }
label_fallthrough_0x134c50:
    ctx->pc = 0x134C58u;
}
