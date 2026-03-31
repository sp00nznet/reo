#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125C30
// Address: 0x125c30 - 0x126410
void sub_00125C30_0x125c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125c30u;

label_125c30:
    // 0x125c30: 0x27bdffa0
    ctx->pc = 0x125c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_125c34:
    // 0x125c34: 0xffb00010
    ctx->pc = 0x125c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_125c38:
    // 0x125c38: 0x802d
    ctx->pc = 0x125c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c3c:
    // 0x125c3c: 0xffb10018
    ctx->pc = 0x125c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_125c40:
    // 0x125c40: 0x3c110021
    ctx->pc = 0x125c40u;
    SET_GPR_U32(ctx, 17, ((uint32_t)33 << 16));
label_125c44:
    // 0x125c44: 0xffb20020
    ctx->pc = 0x125c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_125c48:
    // 0x125c48: 0xa0902d
    ctx->pc = 0x125c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125c4c:
    // 0x125c4c: 0xffb30028
    ctx->pc = 0x125c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_125c50:
    // 0x125c50: 0x80982d
    ctx->pc = 0x125c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125c54:
    // 0x125c54: 0xffb40030
    ctx->pc = 0x125c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_125c58:
    // 0x125c58: 0x100a02d
    ctx->pc = 0x125c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_125c5c:
    // 0x125c5c: 0xffb60040
    ctx->pc = 0x125c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_125c60:
    // 0x125c60: 0x140b02d
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_125c64:
    // 0x125c64: 0xffb70048
    ctx->pc = 0x125c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_125c68:
    // 0x125c68: 0x120b82d
    ctx->pc = 0x125c68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_125c6c:
    // 0x125c6c: 0xffbe0050
    ctx->pc = 0x125c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_125c70:
    // 0x125c70: 0xc0f02d
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125c74:
    // 0x125c74: 0xffb50038
    ctx->pc = 0x125c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_125c78:
    // 0x125c78: 0xffbf0058
    ctx->pc = 0x125c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_125c7c:
    // 0x125c7c: 0xafa70000
    ctx->pc = 0x125c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_125c80:
    // 0x125c80: 0xafab0004
    ctx->pc = 0x125c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
label_125c84:
    // 0x125c84: 0x0
    ctx->pc = 0x125c84u;
    // NOP
label_125c88:
    // 0x125c88: 0x212102a
    ctx->pc = 0x125c88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_125c8c:
    // 0x125c8c: 0x10400006
label_125c90:
    if (ctx->pc == 0x125C90u) {
        ctx->pc = 0x125C90u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294952856)));
        ctx->pc = 0x125C94u;
        goto label_125c94;
    }
    ctx->pc = 0x125C8Cu;
    {
        const bool branch_taken_0x125c8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125C90u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294952856)));
        if (branch_taken_0x125c8c) {
            ctx->pc = 0x125CA8u;
            goto label_125ca8;
        }
    }
    ctx->pc = 0x125C94u;
label_125c94:
    // 0x125c94: 0x2702021
    ctx->pc = 0x125c94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_125c98:
    // 0x125c98: 0xc041e86
label_125c9c:
    if (ctx->pc == 0x125C9Cu) {
        ctx->pc = 0x125C9Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x125CA0u;
        goto label_125ca0;
    }
    ctx->pc = 0x125C98u;
    SET_GPR_U32(ctx, 31, 0x125CA0u);
    ctx->pc = 0x125C9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125CA0u; }
    }
    if (ctx->pc != 0x125CA0u) { return; }
    ctx->pc = 0x125CA0u;
label_125ca0:
    // 0x125ca0: 0x5440fff9
label_125ca4:
    if (ctx->pc == 0x125CA4u) {
        ctx->pc = 0x125CA4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x125CA8u;
        goto label_125ca8;
    }
    ctx->pc = 0x125CA0u;
    {
        const bool branch_taken_0x125ca0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125ca0) {
            ctx->pc = 0x125CA4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x125C88u;
            goto label_125c88;
        }
    }
    ctx->pc = 0x125CA8u;
label_125ca8:
    // 0x125ca8: 0x12120061
label_125cac:
    if (ctx->pc == 0x125CACu) {
        ctx->pc = 0x125CACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125CB0u;
        goto label_125cb0;
    }
    ctx->pc = 0x125CA8u;
    {
        const bool branch_taken_0x125ca8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x125CACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x125ca8) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125CB0u;
label_125cb0:
    // 0x125cb0: 0x32030003
    ctx->pc = 0x125cb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 3));
label_125cb4:
    // 0x125cb4: 0x5460005f
label_125cb8:
    if (ctx->pc == 0x125CB8u) {
        ctx->pc = 0x125CB8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x125CBCu;
        goto label_125cbc;
    }
    ctx->pc = 0x125CB4u;
    {
        const bool branch_taken_0x125cb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x125cb4) {
            ctx->pc = 0x125CB8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x125E34u;
            goto label_125e34;
        }
    }
    ctx->pc = 0x125CBCu;
label_125cbc:
    // 0x125cbc: 0x2702021
    ctx->pc = 0x125cbcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_125cc0:
    // 0x125cc0: 0x24910008
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 8));
label_125cc4:
    // 0x125cc4: 0x86230000
    ctx->pc = 0x125cc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_125cc8:
    // 0x125cc8: 0x28630002
    ctx->pc = 0x125cc8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_125ccc:
    // 0x125ccc: 0x50600059
label_125cd0:
    if (ctx->pc == 0x125CD0u) {
        ctx->pc = 0x125CD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x125CD4u;
        goto label_125cd4;
    }
    ctx->pc = 0x125CCCu;
    {
        const bool branch_taken_0x125ccc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x125ccc) {
            ctx->pc = 0x125CD0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x125E34u;
            goto label_125e34;
        }
    }
    ctx->pc = 0x125CD4u;
label_125cd4:
    // 0x125cd4: 0x802d
    ctx->pc = 0x125cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cd8:
    // 0x125cd8: 0x3c150021
    ctx->pc = 0x125cd8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33 << 16));
label_125cdc:
    // 0x125cdc: 0x0
    ctx->pc = 0x125cdcu;
    // NOP
label_125ce0:
    // 0x125ce0: 0x212102a
    ctx->pc = 0x125ce0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_125ce4:
    // 0x125ce4: 0x10400006
label_125ce8:
    if (ctx->pc == 0x125CE8u) {
        ctx->pc = 0x125CE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4294952860)));
        ctx->pc = 0x125CECu;
        goto label_125cec;
    }
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x125CE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4294952860)));
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125D00u;
            goto label_125d00;
        }
    }
    ctx->pc = 0x125CECu;
label_125cec:
    // 0x125cec: 0x2702021
    ctx->pc = 0x125cecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_125cf0:
    // 0x125cf0: 0xc041e86
label_125cf4:
    if (ctx->pc == 0x125CF4u) {
        ctx->pc = 0x125CF4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x125CF8u;
        goto label_125cf8;
    }
    ctx->pc = 0x125CF0u;
    SET_GPR_U32(ctx, 31, 0x125CF8u);
    ctx->pc = 0x125CF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125CF8u; }
    }
    if (ctx->pc != 0x125CF8u) { return; }
    ctx->pc = 0x125CF8u;
label_125cf8:
    // 0x125cf8: 0x5440fff9
label_125cfc:
    if (ctx->pc == 0x125CFCu) {
        ctx->pc = 0x125CFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x125D00u;
        goto label_125d00;
    }
    ctx->pc = 0x125CF8u;
    {
        const bool branch_taken_0x125cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125cf8) {
            ctx->pc = 0x125CFCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x125CE0u;
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125D00u;
label_125d00:
    // 0x125d00: 0x1212004b
label_125d04:
    if (ctx->pc == 0x125D04u) {
        ctx->pc = 0x125D04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125D08u;
        goto label_125d08;
    }
    ctx->pc = 0x125D00u;
    {
        const bool branch_taken_0x125d00 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x125D04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x125d00) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125D08u;
label_125d08:
    // 0x125d08: 0x26020008
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 8));
label_125d0c:
    // 0x125d0c: 0x2701821
    ctx->pc = 0x125d0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_125d10:
    // 0x125d10: 0xa7c20000
    ctx->pc = 0x125d10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_125d14:
    // 0x125d14: 0x2404ffff
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_125d18:
    // 0x125d18: 0x8c660004
    ctx->pc = 0x125d18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125d1c:
    // 0x125d1c: 0x24070001
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_125d20:
    // 0x125d20: 0x8fa20000
    ctx->pc = 0x125d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125d24:
    // 0x125d24: 0x24080010
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
label_125d28:
    // 0x125d28: 0xa0440000
    ctx->pc = 0x125d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_125d2c:
    // 0x125d2c: 0x8e220004
    ctx->pc = 0x125d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125d30:
    // 0x125d30: 0x8fa40004
    ctx->pc = 0x125d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125d34:
    // 0x125d34: 0x92230002
    ctx->pc = 0x125d34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_125d38:
    // 0x125d38: 0xac820000
    ctx->pc = 0x125d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_125d3c:
    // 0x125d3c: 0xa2c30000
    ctx->pc = 0x125d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_125d40:
    // 0x125d40: 0x9222000e
    ctx->pc = 0x125d40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
label_125d44:
    // 0x125d44: 0xa2820000
    ctx->pc = 0x125d44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_125d48:
    // 0x125d48: 0x9223000c
    ctx->pc = 0x125d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_125d4c:
    // 0x125d4c: 0x31600
    ctx->pc = 0x125d4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_125d50:
    // 0x125d50: 0xa2e30000
    ctx->pc = 0x125d50u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_125d54:
    // 0x125d54: 0x21603
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_125d58:
    // 0x125d58: 0xc2001a
    ctx->pc = 0x125d58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_125d5c:
    // 0x125d5c: 0x50400001
label_125d60:
    if (ctx->pc == 0x125D60u) {
        ctx->pc = 0x125D60u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x125D64u;
        goto label_125d64;
    }
    ctx->pc = 0x125D5Cu;
    {
        const bool branch_taken_0x125d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x125d5c) {
            ctx->pc = 0x125D60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x125D64u;
            goto label_125d64;
        }
    }
    ctx->pc = 0x125D64u;
label_125d64:
    // 0x125d64: 0x8fa20060
    ctx->pc = 0x125d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_125d68:
    // 0x125d68: 0x1812
    ctx->pc = 0x125d68u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_125d6c:
    // 0x125d6c: 0xac430000
    ctx->pc = 0x125d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_125d70:
    // 0x125d70: 0x8fa40068
    ctx->pc = 0x125d70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_125d74:
    // 0x125d74: 0xac870000
    ctx->pc = 0x125d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_125d78:
    // 0x125d78: 0x82850000
    ctx->pc = 0x125d78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_125d7c:
    // 0x125d7c: 0x14a80004
label_125d80:
    if (ctx->pc == 0x125D80u) {
        ctx->pc = 0x125D80u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x125D84u;
        goto label_125d84;
    }
    ctx->pc = 0x125D7Cu;
    {
        const bool branch_taken_0x125d7c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        ctx->pc = 0x125D80u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x125d7c) {
            ctx->pc = 0x125D90u;
            goto label_125d90;
        }
    }
    ctx->pc = 0x125D84u;
label_125d84:
    // 0x125d84: 0x8fa20070
    ctx->pc = 0x125d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_125d88:
    // 0x125d88: 0x1000001b
label_125d8c:
    if (ctx->pc == 0x125D8Cu) {
        ctx->pc = 0x125D8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x125D90u;
        goto label_125d90;
    }
    ctx->pc = 0x125D88u;
    {
        const bool branch_taken_0x125d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125D8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x125d88) {
            ctx->pc = 0x125DF8u;
            goto label_125df8;
        }
    }
    ctx->pc = 0x125D90u;
label_125d90:
    // 0x125d90: 0x24020008
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_125d94:
    // 0x125d94: 0x14a20004
label_125d98:
    if (ctx->pc == 0x125D98u) {
        ctx->pc = 0x125D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x125D9Cu;
        goto label_125d9c;
    }
    ctx->pc = 0x125D94u;
    {
        const bool branch_taken_0x125d94 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x125D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x125d94) {
            ctx->pc = 0x125DA8u;
            goto label_125da8;
        }
    }
    ctx->pc = 0x125D9Cu;
label_125d9c:
    // 0x125d9c: 0x8fa40070
    ctx->pc = 0x125d9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_125da0:
    // 0x125da0: 0x10000015
label_125da4:
    if (ctx->pc == 0x125DA4u) {
        ctx->pc = 0x125DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = 0x125DA8u;
        goto label_125da8;
    }
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x125da0) {
            ctx->pc = 0x125DF8u;
            goto label_125df8;
        }
    }
    ctx->pc = 0x125DA8u;
label_125da8:
    // 0x125da8: 0x14a20014
label_125dac:
    if (ctx->pc == 0x125DACu) {
        ctx->pc = 0x125DACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x125DB0u;
        goto label_125db0;
    }
    ctx->pc = 0x125DA8u;
    {
        const bool branch_taken_0x125da8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x125DACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x125da8) {
            ctx->pc = 0x125DFCu;
            goto label_125dfc;
        }
    }
    ctx->pc = 0x125DB0u;
label_125db0:
    // 0x125db0: 0x82c20000
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_125db4:
    // 0x125db4: 0x61fc2
    ctx->pc = 0x125db4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_125db8:
    // 0x125db8: 0xc31821
    ctx->pc = 0x125db8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_125dbc:
    // 0x125dbc: 0x21040
    ctx->pc = 0x125dbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125dc0:
    // 0x125dc0: 0x31843
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_125dc4:
    // 0x125dc4: 0xa2e20000
    ctx->pc = 0x125dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_125dc8:
    // 0x125dc8: 0x8fa20068
    ctx->pc = 0x125dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_125dcc:
    // 0x125dcc: 0xac450000
    ctx->pc = 0x125dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_125dd0:
    // 0x125dd0: 0x82c20000
    ctx->pc = 0x125dd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_125dd4:
    // 0x125dd4: 0x62001a
    ctx->pc = 0x125dd4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_125dd8:
    // 0x125dd8: 0x50400001
label_125ddc:
    if (ctx->pc == 0x125DDCu) {
        ctx->pc = 0x125DDCu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x125DE0u;
        goto label_125de0;
    }
    ctx->pc = 0x125DD8u;
    {
        const bool branch_taken_0x125dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x125dd8) {
            ctx->pc = 0x125DDCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x125DE0u;
            goto label_125de0;
        }
    }
    ctx->pc = 0x125DE0u;
label_125de0:
    // 0x125de0: 0x8fa20060
    ctx->pc = 0x125de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_125de4:
    // 0x125de4: 0x1812
    ctx->pc = 0x125de4u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_125de8:
    // 0x125de8: 0xac430000
    ctx->pc = 0x125de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_125dec:
    // 0x125dec: 0xa2880000
    ctx->pc = 0x125decu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 8));
label_125df0:
    // 0x125df0: 0x8fa20070
    ctx->pc = 0x125df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_125df4:
    // 0x125df4: 0xa4440000
    ctx->pc = 0x125df4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_125df8:
    // 0x125df8: 0x92830000
    ctx->pc = 0x125df8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_125dfc:
    // 0x125dfc: 0x1060000c
label_125e00:
    if (ctx->pc == 0x125E00u) {
        ctx->pc = 0x125E00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125E04u;
        goto label_125e04;
    }
    ctx->pc = 0x125DFCu;
    {
        const bool branch_taken_0x125dfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x125dfc) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125E04u;
label_125e04:
    // 0x125e04: 0x82e30000
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_125e08:
    // 0x125e08: 0x1060000a
label_125e0c:
    if (ctx->pc == 0x125E0Cu) {
        ctx->pc = 0x125E0Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x125E10u;
        goto label_125e10;
    }
    ctx->pc = 0x125E08u;
    {
        const bool branch_taken_0x125e08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E0Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x125e08) {
            ctx->pc = 0x125E34u;
            goto label_125e34;
        }
    }
    ctx->pc = 0x125E10u;
label_125e10:
    // 0x125e10: 0x92c30000
    ctx->pc = 0x125e10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_125e14:
    // 0x125e14: 0x2463ffff
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_125e18:
    // 0x125e18: 0x2c630002
    ctx->pc = 0x125e18u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
label_125e1c:
    // 0x125e1c: 0x10600006
label_125e20:
    if (ctx->pc == 0x125E20u) {
        ctx->pc = 0x125E20u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x125E24u;
        goto label_125e24;
    }
    ctx->pc = 0x125E1Cu;
    {
        const bool branch_taken_0x125e1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x125E20u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x125e1c) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E24u;
label_125e24:
    // 0x125e24: 0x8fa40004
    ctx->pc = 0x125e24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125e28:
    // 0x125e28: 0x8c830000
    ctx->pc = 0x125e28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125e2c:
    // 0x125e2c: 0x3100b
    ctx->pc = 0x125e2cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_125e30:
    // 0x125e30: 0xdfb00010
    ctx->pc = 0x125e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125e34:
    // 0x125e34: 0xdfb10018
    ctx->pc = 0x125e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125e38:
    // 0x125e38: 0xdfb20020
    ctx->pc = 0x125e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125e3c:
    // 0x125e3c: 0xdfb30028
    ctx->pc = 0x125e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125e40:
    // 0x125e40: 0xdfb40030
    ctx->pc = 0x125e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125e44:
    // 0x125e44: 0xdfb50038
    ctx->pc = 0x125e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125e48:
    // 0x125e48: 0xdfb60040
    ctx->pc = 0x125e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125e4c:
    // 0x125e4c: 0xdfb70048
    ctx->pc = 0x125e4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125e50:
    // 0x125e50: 0xdfbe0050
    ctx->pc = 0x125e50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125e54:
    // 0x125e54: 0xdfbf0058
    ctx->pc = 0x125e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125e58:
    // 0x125e58: 0x3e00008
label_125e5c:
    if (ctx->pc == 0x125E5Cu) {
        ctx->pc = 0x125E5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125E60u;
        goto label_125e60;
    }
    ctx->pc = 0x125E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125E5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125E60u;
label_125e60:
    // 0x125e60: 0x27bdffa0
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_125e64:
    // 0x125e64: 0xffb00030
    ctx->pc = 0x125e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_125e68:
    // 0x125e68: 0x80802d
    ctx->pc = 0x125e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125e6c:
    // 0x125e6c: 0xffb40050
    ctx->pc = 0x125e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_125e70:
    // 0x125e70: 0x24140001
    ctx->pc = 0x125e70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_125e74:
    // 0x125e74: 0xffb10038
    ctx->pc = 0x125e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_125e78:
    // 0x125e78: 0x2611000e
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14));
label_125e7c:
    // 0x125e7c: 0xffb20040
    ctx->pc = 0x125e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_125e80:
    // 0x125e80: 0x26120010
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 16));
label_125e84:
    // 0x125e84: 0xffb30048
    ctx->pc = 0x125e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_125e88:
    // 0x125e88: 0x2613000f
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 15));
label_125e8c:
    // 0x125e8c: 0xffbf0058
    ctx->pc = 0x125e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_125e90:
    // 0x125e90: 0xa0202d
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125e94:
    // 0x125e94: 0xa6140002
    ctx->pc = 0x125e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
label_125e98:
    // 0x125e98: 0x26020018
    ctx->pc = 0x125e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
label_125e9c:
    // 0x125e9c: 0xc0282d
    ctx->pc = 0x125e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125ea0:
    // 0x125ea0: 0x27a60020
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_125ea4:
    // 0x125ea4: 0x2603009a
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 154));
label_125ea8:
    // 0x125ea8: 0x2607000c
    ctx->pc = 0x125ea8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
label_125eac:
    // 0x125eac: 0x2608000d
    ctx->pc = 0x125eacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
label_125eb0:
    // 0x125eb0: 0x260482d
    ctx->pc = 0x125eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125eb4:
    // 0x125eb4: 0x220502d
    ctx->pc = 0x125eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125eb8:
    // 0x125eb8: 0x260b0014
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
label_125ebc:
    // 0x125ebc: 0xafa20000
    ctx->pc = 0x125ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_125ec0:
    // 0x125ec0: 0xafa30010
    ctx->pc = 0x125ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_125ec4:
    // 0x125ec4: 0xc04970c
label_125ec8:
    if (ctx->pc == 0x125EC8u) {
        ctx->pc = 0x125EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x125ECCu;
        goto label_125ecc;
    }
    ctx->pc = 0x125EC4u;
    SET_GPR_U32(ctx, 31, 0x125ECCu);
    ctx->pc = 0x125EC8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x125C30u;
    goto label_125c30;
    ctx->pc = 0x125ECCu;
label_125ecc:
    // 0x125ecc: 0x4430004
label_125ed0:
    if (ctx->pc == 0x125ED0u) {
        ctx->pc = 0x125ED0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x125ED4u;
        goto label_125ed4;
    }
    ctx->pc = 0x125ECCu;
    {
        const bool branch_taken_0x125ecc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x125ecc) {
            ctx->pc = 0x125ED0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->pc = 0x125EE0u;
            goto label_125ee0;
        }
    }
    ctx->pc = 0x125ED4u;
label_125ed4:
    // 0x125ed4: 0x10000019
label_125ed8:
    if (ctx->pc == 0x125ED8u) {
        ctx->pc = 0x125ED8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125EDCu;
        goto label_125edc;
    }
    ctx->pc = 0x125ED4u;
    {
        const bool branch_taken_0x125ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125ED8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125ed4) {
            ctx->pc = 0x125F3Cu;
            goto label_125f3c;
        }
    }
    ctx->pc = 0x125EDCu;
label_125edc:
    // 0x125edc: 0x0
    ctx->pc = 0x125edcu;
    // NOP
label_125ee0:
    // 0x125ee0: 0xae000030
    ctx->pc = 0x125ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_125ee4:
    // 0x125ee4: 0xae00002c
    ctx->pc = 0x125ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_125ee8:
    // 0x125ee8: 0xae000028
    ctx->pc = 0x125ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_125eec:
    // 0x125eec: 0xae000020
    ctx->pc = 0x125eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_125ef0:
    // 0x125ef0: 0xa600001c
    ctx->pc = 0x125ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_125ef4:
    // 0x125ef4: 0xa6000026
    ctx->pc = 0x125ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_125ef8:
    // 0x125ef8: 0xa6000024
    ctx->pc = 0x125ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_125efc:
    // 0x125efc: 0x8e05003c
    ctx->pc = 0x125efcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_125f00:
    // 0x125f00: 0x82230000
    ctx->pc = 0x125f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_125f04:
    // 0x125f04: 0x8e060040
    ctx->pc = 0x125f04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_125f08:
    // 0x125f08: 0xae030050
    ctx->pc = 0x125f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_125f0c:
    // 0x125f0c: 0x8e070044
    ctx->pc = 0x125f0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_125f10:
    // 0x125f10: 0x82640000
    ctx->pc = 0x125f10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_125f14:
    // 0x125f14: 0x87a20020
    ctx->pc = 0x125f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_125f18:
    // 0x125f18: 0xae040054
    ctx->pc = 0x125f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_125f1c:
    // 0x125f1c: 0xa6140098
    ctx->pc = 0x125f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
label_125f20:
    // 0x125f20: 0x8e430000
    ctx->pc = 0x125f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_125f24:
    // 0x125f24: 0xae05005c
    ctx->pc = 0x125f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_125f28:
    // 0x125f28: 0xae060060
    ctx->pc = 0x125f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_125f2c:
    // 0x125f2c: 0xae030058
    ctx->pc = 0x125f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_125f30:
    // 0x125f30: 0xae070064
    ctx->pc = 0x125f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_125f34:
    // 0x125f34: 0xae00008c
    ctx->pc = 0x125f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_125f38:
    // 0x125f38: 0xae000088
    ctx->pc = 0x125f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_125f3c:
    // 0x125f3c: 0xdfb00030
    ctx->pc = 0x125f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125f40:
    // 0x125f40: 0xdfb10038
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125f44:
    // 0x125f44: 0xdfb20040
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125f48:
    // 0x125f48: 0xdfb30048
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125f4c:
    // 0x125f4c: 0xdfb40050
    ctx->pc = 0x125f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125f50:
    // 0x125f50: 0xdfbf0058
    ctx->pc = 0x125f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125f54:
    // 0x125f54: 0x3e00008
label_125f58:
    if (ctx->pc == 0x125F58u) {
        ctx->pc = 0x125F58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x125F5Cu;
        goto label_125f5c;
    }
    ctx->pc = 0x125F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125F5Cu;
label_125f5c:
    // 0x125f5c: 0x0
    ctx->pc = 0x125f5cu;
    // NOP
label_125f60:
    // 0x125f60: 0x27bdffe0
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_125f64:
    // 0x125f64: 0x24020001
    ctx->pc = 0x125f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_125f68:
    // 0x125f68: 0xffb00000
    ctx->pc = 0x125f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125f6c:
    // 0x125f6c: 0x80802d
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125f70:
    // 0x125f70: 0xffb10008
    ctx->pc = 0x125f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125f74:
    // 0x125f74: 0x26110048
    ctx->pc = 0x125f74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_125f78:
    // 0x125f78: 0xffb20010
    ctx->pc = 0x125f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125f7c:
    // 0x125f7c: 0xffbf0018
    ctx->pc = 0x125f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_125f80:
    // 0x125f80: 0x8e030004
    ctx->pc = 0x125f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125f84:
    // 0x125f84: 0x14620043
label_125f88:
    if (ctx->pc == 0x125F88u) {
        ctx->pc = 0x125F88u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x125F8Cu;
        goto label_125f8c;
    }
    ctx->pc = 0x125F84u;
    {
        const bool branch_taken_0x125f84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x125F88u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x125f84) {
            ctx->pc = 0x126094u;
            goto label_126094;
        }
    }
    ctx->pc = 0x125F8Cu;
label_125f8c:
    // 0x125f8c: 0xc04d3e6
label_125f90:
    if (ctx->pc == 0x125F90u) {
        ctx->pc = 0x125F90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125F94u;
        goto label_125f94;
    }
    ctx->pc = 0x125F8Cu;
    SET_GPR_U32(ctx, 31, 0x125F94u);
    ctx->pc = 0x125F90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F94u; }
    }
    if (ctx->pc != 0x125F94u) { return; }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0x5440003f
label_125f98:
    if (ctx->pc == 0x125F98u) {
        ctx->pc = 0x125F98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x125F9Cu;
        goto label_125f9c;
    }
    ctx->pc = 0x125F94u;
    {
        const bool branch_taken_0x125f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125f94) {
            ctx->pc = 0x125F98u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x126094u;
            goto label_126094;
        }
    }
    ctx->pc = 0x125F9Cu;
label_125f9c:
    // 0x125f9c: 0x8e04007c
    ctx->pc = 0x125f9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_125fa0:
    // 0x125fa0: 0x26050068
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_125fa4:
    // 0x125fa4: 0x8e020078
    ctx->pc = 0x125fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_125fa8:
    // 0x125fa8: 0x2606006c
    ctx->pc = 0x125fa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_125fac:
    // 0x125fac: 0x40f809
label_125fb0:
    if (ctx->pc == 0x125FB0u) {
        ctx->pc = 0x125FB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x125FB4u;
        goto label_125fb4;
    }
    ctx->pc = 0x125FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125FB4u);
        ctx->pc = 0x125FB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125FB4u; }
            if (ctx->pc != 0x125FB4u) { return; }
        }
    }
    ctx->pc = 0x125FB4u;
label_125fb4:
    // 0x125fb4: 0x8e240018
    ctx->pc = 0x125fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_125fb8:
    // 0x125fb8: 0x8e270020
    ctx->pc = 0x125fb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125fbc:
    // 0x125fbc: 0x24060002
    ctx->pc = 0x125fbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_125fc0:
    // 0x125fc0: 0x8e230024
    ctx->pc = 0x125fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_125fc4:
    // 0x125fc4: 0x874823
    ctx->pc = 0x125fc4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_125fc8:
    // 0x125fc8: 0x8204000e
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125fcc:
    // 0x125fcc: 0x69102a
    ctx->pc = 0x125fccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_125fd0:
    // 0x125fd0: 0x8e250004
    ctx->pc = 0x125fd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125fd4:
    // 0x125fd4: 0x62480b
    ctx->pc = 0x125fd4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_125fd8:
    // 0x125fd8: 0x71840
    ctx->pc = 0x125fd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_125fdc:
    // 0x125fdc: 0x8e2b0014
    ctx->pc = 0x125fdcu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_125fe0:
    // 0x125fe0: 0xa9102a
    ctx->pc = 0x125fe0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_125fe4:
    // 0x125fe4: 0xa2480b
    ctx->pc = 0x125fe4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_125fe8:
    // 0x125fe8: 0x1635021
    ctx->pc = 0x125fe8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_125fec:
    // 0x125fec: 0x14860016
label_125ff0:
    if (ctx->pc == 0x125FF0u) {
        ctx->pc = 0x125FF0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125FF4u;
        goto label_125ff4;
    }
    ctx->pc = 0x125FECu;
    {
        const bool branch_taken_0x125fec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x125FF0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125fec) {
            ctx->pc = 0x126048u;
            goto label_126048;
        }
    }
    ctx->pc = 0x125FF4u;
label_125ff4:
    // 0x125ff4: 0x8e22001c
    ctx->pc = 0x125ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125ff8:
    // 0x125ff8: 0x402d
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ffc:
    // 0x125ffc: 0x471021
    ctx->pc = 0x125ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126000:
    // 0x126000: 0x21040
    ctx->pc = 0x126000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126004:
    // 0x126004: 0x1920001b
label_126008:
    if (ctx->pc == 0x126008u) {
        ctx->pc = 0x126008u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x12600Cu;
        goto label_12600c;
    }
    ctx->pc = 0x126004u;
    {
        const bool branch_taken_0x126004 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126008u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x126004) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x12600Cu;
label_12600c:
    // 0x12600c: 0x240382d
    ctx->pc = 0x12600cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126010:
    // 0x126010: 0x81840
    ctx->pc = 0x126010u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
label_126014:
    // 0x126014: 0x25080001
    ctx->pc = 0x126014u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126018:
    // 0x126018: 0x94e50000
    ctx->pc = 0x126018u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_12601c:
    // 0x12601c: 0x6a2021
    ctx->pc = 0x12601cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_126020:
    // 0x126020: 0x109302a
    ctx->pc = 0x126020u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126024:
    // 0x126024: 0x6b1821
    ctx->pc = 0x126024u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_126028:
    // 0x126028: 0xa4850000
    ctx->pc = 0x126028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_12602c:
    // 0x12602c: 0x94e20002
    ctx->pc = 0x12602cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_126030:
    // 0x126030: 0x24e70004
    ctx->pc = 0x126030u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_126034:
    // 0x126034: 0x14c0fff6
label_126038:
    if (ctx->pc == 0x126038u) {
        ctx->pc = 0x126038u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12603Cu;
        goto label_12603c;
    }
    ctx->pc = 0x126034u;
    {
        const bool branch_taken_0x126034 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x126038u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x126034) {
            ctx->pc = 0x126010u;
            goto label_126010;
        }
    }
    ctx->pc = 0x12603Cu;
label_12603c:
    // 0x12603c: 0x1000000d
label_126040:
    if (ctx->pc == 0x126040u) {
        ctx->pc = 0x126040u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x126044u;
        goto label_126044;
    }
    ctx->pc = 0x12603Cu;
    {
        const bool branch_taken_0x12603c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126040u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12603c) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x126044u;
label_126044:
    // 0x126044: 0x0
    ctx->pc = 0x126044u;
    // NOP
label_126048:
    // 0x126048: 0x1920000a
label_12604c:
    if (ctx->pc == 0x12604Cu) {
        ctx->pc = 0x12604Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126050u;
        goto label_126050;
    }
    ctx->pc = 0x126048u;
    {
        const bool branch_taken_0x126048 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x12604Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126048) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x126050u;
label_126050:
    // 0x126050: 0x81040
    ctx->pc = 0x126050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_126054:
    // 0x126054: 0x25080001
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126058:
    // 0x126058: 0x521821
    ctx->pc = 0x126058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12605c:
    // 0x12605c: 0x4a1021
    ctx->pc = 0x12605cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_126060:
    // 0x126060: 0x94640000
    ctx->pc = 0x126060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_126064:
    // 0x126064: 0x109282a
    ctx->pc = 0x126064u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126068:
    // 0x126068: 0x14a0fff9
label_12606c:
    if (ctx->pc == 0x12606Cu) {
        ctx->pc = 0x12606Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x126070u;
        goto label_126070;
    }
    ctx->pc = 0x126068u;
    {
        const bool branch_taken_0x126068 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12606Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x126068) {
            ctx->pc = 0x126050u;
            goto label_126050;
        }
    }
    ctx->pc = 0x126070u;
label_126070:
    // 0x126070: 0x9203000e
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126074:
    // 0x126074: 0x31600
    ctx->pc = 0x126074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_126078:
    // 0x126078: 0x24030002
    ctx->pc = 0x126078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_12607c:
    // 0x12607c: 0x21603
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_126080:
    // 0x126080: 0xae030004
    ctx->pc = 0x126080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_126084:
    // 0x126084: 0x1221018
    ctx->pc = 0x126084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_126088:
    // 0x126088: 0xae090090
    ctx->pc = 0x126088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_12608c:
    // 0x12608c: 0x21040
    ctx->pc = 0x12608cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126090:
    // 0x126090: 0xae020094
    ctx->pc = 0x126090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_126094:
    // 0x126094: 0x24020002
    ctx->pc = 0x126094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_126098:
    // 0x126098: 0x54620009
label_12609c:
    if (ctx->pc == 0x12609Cu) {
        ctx->pc = 0x12609Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1260A0u;
        goto label_1260a0;
    }
    ctx->pc = 0x126098u;
    {
        const bool branch_taken_0x126098 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x126098) {
            ctx->pc = 0x12609Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1260C0u;
            goto label_1260c0;
        }
    }
    ctx->pc = 0x1260A0u;
label_1260a0:
    // 0x1260a0: 0x8e030080
    ctx->pc = 0x1260a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1260a4:
    // 0x1260a4: 0x8e040084
    ctx->pc = 0x1260a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1260a8:
    // 0x1260a8: 0x8e050094
    ctx->pc = 0x1260a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1260ac:
    // 0x1260ac: 0x60f809
label_1260b0:
    if (ctx->pc == 0x1260B0u) {
        ctx->pc = 0x1260B0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1260B4u;
        goto label_1260b4;
    }
    ctx->pc = 0x1260ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1260B4u);
        ctx->pc = 0x1260B0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1260B4u; }
            if (ctx->pc != 0x1260B4u) { return; }
        }
    }
    ctx->pc = 0x1260B4u;
label_1260b4:
    // 0x1260b4: 0x24020003
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1260b8:
    // 0x1260b8: 0xae020004
    ctx->pc = 0x1260b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1260bc:
    // 0x1260bc: 0xdfb00000
    ctx->pc = 0x1260bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1260c0:
    // 0x1260c0: 0xdfb10008
    ctx->pc = 0x1260c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1260c4:
    // 0x1260c4: 0xdfb20010
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1260c8:
    // 0x1260c8: 0xdfbf0018
    ctx->pc = 0x1260c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1260cc:
    // 0x1260cc: 0x3e00008
label_1260d0:
    if (ctx->pc == 0x1260D0u) {
        ctx->pc = 0x1260D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1260D4u;
        goto label_1260d4;
    }
    ctx->pc = 0x1260CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1260D4u;
label_1260d4:
    // 0x1260d4: 0x0
    ctx->pc = 0x1260d4u;
    // NOP
label_1260d8:
    // 0x1260d8: 0x27bdffe0
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1260dc:
    // 0x1260dc: 0x24020001
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1260e0:
    // 0x1260e0: 0xffb00000
    ctx->pc = 0x1260e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1260e4:
    // 0x1260e4: 0x80802d
    ctx->pc = 0x1260e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1260e8:
    // 0x1260e8: 0xffb10008
    ctx->pc = 0x1260e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1260ec:
    // 0x1260ec: 0x26110048
    ctx->pc = 0x1260ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_1260f0:
    // 0x1260f0: 0xffb20010
    ctx->pc = 0x1260f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1260f4:
    // 0x1260f4: 0xffbf0018
    ctx->pc = 0x1260f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1260f8:
    // 0x1260f8: 0x8e030004
    ctx->pc = 0x1260f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1260fc:
    // 0x1260fc: 0x1462004b
label_126100:
    if (ctx->pc == 0x126100u) {
        ctx->pc = 0x126100u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x126104u;
        goto label_126104;
    }
    ctx->pc = 0x1260FCu;
    {
        const bool branch_taken_0x1260fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x126100u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1260fc) {
            ctx->pc = 0x12622Cu;
            goto label_12622c;
        }
    }
    ctx->pc = 0x126104u;
label_126104:
    // 0x126104: 0xc04d3e6
label_126108:
    if (ctx->pc == 0x126108u) {
        ctx->pc = 0x126108u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x12610Cu;
        goto label_12610c;
    }
    ctx->pc = 0x126104u;
    SET_GPR_U32(ctx, 31, 0x12610Cu);
    ctx->pc = 0x126108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12610Cu; }
    }
    if (ctx->pc != 0x12610Cu) { return; }
    ctx->pc = 0x12610Cu;
label_12610c:
    // 0x12610c: 0x54400047
label_126110:
    if (ctx->pc == 0x126110u) {
        ctx->pc = 0x126110u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x126114u;
        goto label_126114;
    }
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12610c) {
            ctx->pc = 0x126110u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x12622Cu;
            goto label_12622c;
        }
    }
    ctx->pc = 0x126114u;
label_126114:
    // 0x126114: 0x8e04007c
    ctx->pc = 0x126114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_126118:
    // 0x126118: 0x26050068
    ctx->pc = 0x126118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_12611c:
    // 0x12611c: 0x8e020078
    ctx->pc = 0x12611cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_126120:
    // 0x126120: 0x2606006c
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_126124:
    // 0x126124: 0x40f809
label_126128:
    if (ctx->pc == 0x126128u) {
        ctx->pc = 0x126128u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x12612Cu;
        goto label_12612c;
    }
    ctx->pc = 0x126124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12612Cu);
        ctx->pc = 0x126128u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12612Cu; }
            if (ctx->pc != 0x12612Cu) { return; }
        }
    }
    ctx->pc = 0x12612Cu;
label_12612c:
    // 0x12612c: 0x8e240018
    ctx->pc = 0x12612cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_126130:
    // 0x126130: 0x8e270020
    ctx->pc = 0x126130u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_126134:
    // 0x126134: 0x24060002
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_126138:
    // 0x126138: 0x8e230024
    ctx->pc = 0x126138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12613c:
    // 0x12613c: 0x874823
    ctx->pc = 0x12613cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_126140:
    // 0x126140: 0x8204000e
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126144:
    // 0x126144: 0x69102a
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_126148:
    // 0x126148: 0x8e250004
    ctx->pc = 0x126148u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12614c:
    // 0x12614c: 0x62480b
    ctx->pc = 0x12614cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_126150:
    // 0x126150: 0x71840
    ctx->pc = 0x126150u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_126154:
    // 0x126154: 0x8e2a0014
    ctx->pc = 0x126154u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_126158:
    // 0x126158: 0xa9102a
    ctx->pc = 0x126158u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_12615c:
    // 0x12615c: 0xa2480b
    ctx->pc = 0x12615cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_126160:
    // 0x126160: 0x1435821
    ctx->pc = 0x126160u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_126164:
    // 0x126164: 0x1486001c
label_126168:
    if (ctx->pc == 0x126168u) {
        ctx->pc = 0x126168u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12616Cu;
        goto label_12616c;
    }
    ctx->pc = 0x126164u;
    {
        const bool branch_taken_0x126164 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x126168u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x126164) {
            ctx->pc = 0x1261D8u;
            goto label_1261d8;
        }
    }
    ctx->pc = 0x12616Cu;
label_12616c:
    // 0x12616c: 0x8e22001c
    ctx->pc = 0x12616cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_126170:
    // 0x126170: 0x402d
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126174:
    // 0x126174: 0x471021
    ctx->pc = 0x126174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126178:
    // 0x126178: 0x21040
    ctx->pc = 0x126178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12617c:
    // 0x12617c: 0x19200024
label_126180:
    if (ctx->pc == 0x126180u) {
        ctx->pc = 0x126180u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x126184u;
        goto label_126184;
    }
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126180u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x12617c) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x126184u;
label_126184:
    // 0x126184: 0x240382d
    ctx->pc = 0x126184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126188:
    // 0x126188: 0x340aff80
    ctx->pc = 0x126188u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 65408));
label_12618c:
    // 0x12618c: 0x0
    ctx->pc = 0x12618cu;
    // NOP
label_126190:
    // 0x126190: 0x90e30000
    ctx->pc = 0x126190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_126194:
    // 0x126194: 0x82040
    ctx->pc = 0x126194u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_126198:
    // 0x126198: 0x8b2821
    ctx->pc = 0x126198u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_12619c:
    // 0x12619c: 0x8c2021
    ctx->pc = 0x12619cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1261a0:
    // 0x1261a0: 0x6a1821
    ctx->pc = 0x1261a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1261a4:
    // 0x1261a4: 0x25080001
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1261a8:
    // 0x1261a8: 0x31a00
    ctx->pc = 0x1261a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_1261ac:
    // 0x1261ac: 0x109302a
    ctx->pc = 0x1261acu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1261b0:
    // 0x1261b0: 0xa4a30000
    ctx->pc = 0x1261b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1261b4:
    // 0x1261b4: 0x90e20001
    ctx->pc = 0x1261b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1261b8:
    // 0x1261b8: 0x24e70002
    ctx->pc = 0x1261b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_1261bc:
    // 0x1261bc: 0x4a1021
    ctx->pc = 0x1261bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1261c0:
    // 0x1261c0: 0x21200
    ctx->pc = 0x1261c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1261c4:
    // 0x1261c4: 0x14c0fff2
label_1261c8:
    if (ctx->pc == 0x1261C8u) {
        ctx->pc = 0x1261C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1261CCu;
        goto label_1261cc;
    }
    ctx->pc = 0x1261C4u;
    {
        const bool branch_taken_0x1261c4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1261C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1261c4) {
            ctx->pc = 0x126190u;
            goto label_126190;
        }
    }
    ctx->pc = 0x1261CCu;
label_1261cc:
    // 0x1261cc: 0x10000010
label_1261d0:
    if (ctx->pc == 0x1261D0u) {
        ctx->pc = 0x1261D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1261D4u;
        goto label_1261d4;
    }
    ctx->pc = 0x1261CCu;
    {
        const bool branch_taken_0x1261cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1261D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1261cc) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x1261D4u;
label_1261d4:
    // 0x1261d4: 0x0
    ctx->pc = 0x1261d4u;
    // NOP
label_1261d8:
    // 0x1261d8: 0x1920000d
label_1261dc:
    if (ctx->pc == 0x1261DCu) {
        ctx->pc = 0x1261DCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1261E0u;
        goto label_1261e0;
    }
    ctx->pc = 0x1261D8u;
    {
        const bool branch_taken_0x1261d8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1261DCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1261d8) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x1261E0u;
label_1261e0:
    // 0x1261e0: 0x160282d
    ctx->pc = 0x1261e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1261e4:
    // 0x1261e4: 0x3406ff80
    ctx->pc = 0x1261e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65408));
label_1261e8:
    // 0x1261e8: 0x2481021
    ctx->pc = 0x1261e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1261ec:
    // 0x1261ec: 0x25080001
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1261f0:
    // 0x1261f0: 0x90430000
    ctx->pc = 0x1261f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1261f4:
    // 0x1261f4: 0x109202a
    ctx->pc = 0x1261f4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1261f8:
    // 0x1261f8: 0x661821
    ctx->pc = 0x1261f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1261fc:
    // 0x1261fc: 0x31a00
    ctx->pc = 0x1261fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_126200:
    // 0x126200: 0xa4a30000
    ctx->pc = 0x126200u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_126204:
    // 0x126204: 0x1480fff8
label_126208:
    if (ctx->pc == 0x126208u) {
        ctx->pc = 0x126208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x12620Cu;
        goto label_12620c;
    }
    ctx->pc = 0x126204u;
    {
        const bool branch_taken_0x126204 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x126208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x126204) {
            ctx->pc = 0x1261E8u;
            goto label_1261e8;
        }
    }
    ctx->pc = 0x12620Cu;
label_12620c:
    // 0x12620c: 0x9203000e
    ctx->pc = 0x12620cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126210:
    // 0x126210: 0x31600
    ctx->pc = 0x126210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_126214:
    // 0x126214: 0x24030002
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_126218:
    // 0x126218: 0x21603
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_12621c:
    // 0x12621c: 0xae030004
    ctx->pc = 0x12621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_126220:
    // 0x126220: 0x1221018
    ctx->pc = 0x126220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_126224:
    // 0x126224: 0xae090090
    ctx->pc = 0x126224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_126228:
    // 0x126228: 0xae020094
    ctx->pc = 0x126228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_12622c:
    // 0x12622c: 0x24020002
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_126230:
    // 0x126230: 0x54620009
label_126234:
    if (ctx->pc == 0x126234u) {
        ctx->pc = 0x126234u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x126238u;
        goto label_126238;
    }
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x126230) {
            ctx->pc = 0x126234u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x126258u;
            goto label_126258;
        }
    }
    ctx->pc = 0x126238u;
label_126238:
    // 0x126238: 0x8e030080
    ctx->pc = 0x126238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_12623c:
    // 0x12623c: 0x8e040084
    ctx->pc = 0x12623cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_126240:
    // 0x126240: 0x8e050094
    ctx->pc = 0x126240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_126244:
    // 0x126244: 0x60f809
label_126248:
    if (ctx->pc == 0x126248u) {
        ctx->pc = 0x126248u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x12624Cu;
        goto label_12624c;
    }
    ctx->pc = 0x126244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12624Cu);
        ctx->pc = 0x126248u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12624Cu; }
            if (ctx->pc != 0x12624Cu) { return; }
        }
    }
    ctx->pc = 0x12624Cu;
label_12624c:
    // 0x12624c: 0x24020003
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_126250:
    // 0x126250: 0xae020004
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_126254:
    // 0x126254: 0xdfb00000
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126258:
    // 0x126258: 0xdfb10008
    ctx->pc = 0x126258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12625c:
    // 0x12625c: 0xdfb20010
    ctx->pc = 0x12625cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126260:
    // 0x126260: 0xdfbf0018
    ctx->pc = 0x126260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126264:
    // 0x126264: 0x3e00008
label_126268:
    if (ctx->pc == 0x126268u) {
        ctx->pc = 0x126268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12626Cu;
        goto label_12626c;
    }
    ctx->pc = 0x126264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12626Cu;
label_12626c:
    // 0x12626c: 0x0
    ctx->pc = 0x12626cu;
    // NOP
label_126270:
    // 0x126270: 0x27bdffe0
    ctx->pc = 0x126270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_126274:
    // 0x126274: 0x24020001
    ctx->pc = 0x126274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_126278:
    // 0x126278: 0xffb00000
    ctx->pc = 0x126278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12627c:
    // 0x12627c: 0x80802d
    ctx->pc = 0x12627cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126280:
    // 0x126280: 0xffb10008
    ctx->pc = 0x126280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_126284:
    // 0x126284: 0x26110048
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_126288:
    // 0x126288: 0xffb20010
    ctx->pc = 0x126288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12628c:
    // 0x12628c: 0xffbf0018
    ctx->pc = 0x12628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_126290:
    // 0x126290: 0x8e030004
    ctx->pc = 0x126290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_126294:
    // 0x126294: 0x1462004d
label_126298:
    if (ctx->pc == 0x126298u) {
        ctx->pc = 0x126298u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12629Cu;
        goto label_12629c;
    }
    ctx->pc = 0x126294u;
    {
        const bool branch_taken_0x126294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x126298u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x126294) {
            ctx->pc = 0x1263CCu;
            goto label_1263cc;
        }
    }
    ctx->pc = 0x12629Cu;
label_12629c:
    // 0x12629c: 0xc04d3e6
label_1262a0:
    if (ctx->pc == 0x1262A0u) {
        ctx->pc = 0x1262A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1262A4u;
        goto label_1262a4;
    }
    ctx->pc = 0x12629Cu;
    SET_GPR_U32(ctx, 31, 0x1262A4u);
    ctx->pc = 0x1262A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262A4u; }
    }
    if (ctx->pc != 0x1262A4u) { return; }
    ctx->pc = 0x1262A4u;
label_1262a4:
    // 0x1262a4: 0x54400049
label_1262a8:
    if (ctx->pc == 0x1262A8u) {
        ctx->pc = 0x1262A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1262ACu;
        goto label_1262ac;
    }
    ctx->pc = 0x1262A4u;
    {
        const bool branch_taken_0x1262a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1262a4) {
            ctx->pc = 0x1262A8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1263CCu;
            goto label_1263cc;
        }
    }
    ctx->pc = 0x1262ACu;
label_1262ac:
    // 0x1262ac: 0x8e04007c
    ctx->pc = 0x1262acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1262b0:
    // 0x1262b0: 0x26050068
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1262b4:
    // 0x1262b4: 0x8e020078
    ctx->pc = 0x1262b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1262b8:
    // 0x1262b8: 0x2606006c
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1262bc:
    // 0x1262bc: 0x40f809
label_1262c0:
    if (ctx->pc == 0x1262C0u) {
        ctx->pc = 0x1262C0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1262C4u;
        goto label_1262c4;
    }
    ctx->pc = 0x1262BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1262C4u);
        ctx->pc = 0x1262C0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1262C4u; }
            if (ctx->pc != 0x1262C4u) { return; }
        }
    }
    ctx->pc = 0x1262C4u;
label_1262c4:
    // 0x1262c4: 0x8e240018
    ctx->pc = 0x1262c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1262c8:
    // 0x1262c8: 0x8e270020
    ctx->pc = 0x1262c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1262cc:
    // 0x1262cc: 0x24060002
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1262d0:
    // 0x1262d0: 0x8e230024
    ctx->pc = 0x1262d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1262d4:
    // 0x1262d4: 0x874823
    ctx->pc = 0x1262d4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1262d8:
    // 0x1262d8: 0x8204000e
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1262dc:
    // 0x1262dc: 0x69102a
    ctx->pc = 0x1262dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_1262e0:
    // 0x1262e0: 0x8e250004
    ctx->pc = 0x1262e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1262e4:
    // 0x1262e4: 0x62480b
    ctx->pc = 0x1262e4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_1262e8:
    // 0x1262e8: 0x71840
    ctx->pc = 0x1262e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_1262ec:
    // 0x1262ec: 0x8e2b0014
    ctx->pc = 0x1262ecu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1262f0:
    // 0x1262f0: 0xa9102a
    ctx->pc = 0x1262f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_1262f4:
    // 0x1262f4: 0xa2480b
    ctx->pc = 0x1262f4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_1262f8:
    // 0x1262f8: 0x1635021
    ctx->pc = 0x1262f8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1262fc:
    // 0x1262fc: 0x1486001c
label_126300:
    if (ctx->pc == 0x126300u) {
        ctx->pc = 0x126300u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x126304u;
        goto label_126304;
    }
    ctx->pc = 0x1262FCu;
    {
        const bool branch_taken_0x1262fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x126300u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1262fc) {
            ctx->pc = 0x126370u;
            goto label_126370;
        }
    }
    ctx->pc = 0x126304u;
label_126304:
    // 0x126304: 0x8e22001c
    ctx->pc = 0x126304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_126308:
    // 0x126308: 0x402d
    ctx->pc = 0x126308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12630c:
    // 0x12630c: 0x471021
    ctx->pc = 0x12630cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126310:
    // 0x126310: 0x21040
    ctx->pc = 0x126310u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126314:
    // 0x126314: 0x19200025
label_126318:
    if (ctx->pc == 0x126318u) {
        ctx->pc = 0x126318u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x12631Cu;
        goto label_12631c;
    }
    ctx->pc = 0x126314u;
    {
        const bool branch_taken_0x126314 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126318u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x126314) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x12631Cu;
label_12631c:
    // 0x12631c: 0x240382d
    ctx->pc = 0x12631cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126320:
    // 0x126320: 0x90e20002
    ctx->pc = 0x126320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_126324:
    // 0x126324: 0x82040
    ctx->pc = 0x126324u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_126328:
    // 0x126328: 0x90e30000
    ctx->pc = 0x126328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_12632c:
    // 0x12632c: 0x8a2821
    ctx->pc = 0x12632cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_126330:
    // 0x126330: 0x21200
    ctx->pc = 0x126330u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126334:
    // 0x126334: 0x25080001
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126338:
    // 0x126338: 0x621825
    ctx->pc = 0x126338u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12633c:
    // 0x12633c: 0x8b2021
    ctx->pc = 0x12633cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_126340:
    // 0x126340: 0xa4a30000
    ctx->pc = 0x126340u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_126344:
    // 0x126344: 0x109302a
    ctx->pc = 0x126344u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126348:
    // 0x126348: 0x90e20003
    ctx->pc = 0x126348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_12634c:
    // 0x12634c: 0x90e30001
    ctx->pc = 0x12634cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_126350:
    // 0x126350: 0x24e70004
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_126354:
    // 0x126354: 0x21200
    ctx->pc = 0x126354u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126358:
    // 0x126358: 0x621825
    ctx->pc = 0x126358u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12635c:
    // 0x12635c: 0x14c0fff0
label_126360:
    if (ctx->pc == 0x126360u) {
        ctx->pc = 0x126360u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x126364u;
        goto label_126364;
    }
    ctx->pc = 0x12635Cu;
    {
        const bool branch_taken_0x12635c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x126360u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12635c) {
            ctx->pc = 0x126320u;
            goto label_126320;
        }
    }
    ctx->pc = 0x126364u;
label_126364:
    // 0x126364: 0x10000011
label_126368:
    if (ctx->pc == 0x126368u) {
        ctx->pc = 0x126368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12636Cu;
        goto label_12636c;
    }
    ctx->pc = 0x126364u;
    {
        const bool branch_taken_0x126364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x126364) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x12636Cu;
label_12636c:
    // 0x12636c: 0x0
    ctx->pc = 0x12636cu;
    // NOP
label_126370:
    // 0x126370: 0x1920000e
label_126374:
    if (ctx->pc == 0x126374u) {
        ctx->pc = 0x126374u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126378u;
        goto label_126378;
    }
    ctx->pc = 0x126370u;
    {
        const bool branch_taken_0x126370 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126374u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126370) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x126378u;
label_126378:
    // 0x126378: 0x240282d
    ctx->pc = 0x126378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12637c:
    // 0x12637c: 0x140302d
    ctx->pc = 0x12637cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_126380:
    // 0x126380: 0x90a20001
    ctx->pc = 0x126380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_126384:
    // 0x126384: 0x25080001
    ctx->pc = 0x126384u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126388:
    // 0x126388: 0x90a30000
    ctx->pc = 0x126388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12638c:
    // 0x12638c: 0x24a50002
    ctx->pc = 0x12638cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_126390:
    // 0x126390: 0x21200
    ctx->pc = 0x126390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126394:
    // 0x126394: 0x109202a
    ctx->pc = 0x126394u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126398:
    // 0x126398: 0x621825
    ctx->pc = 0x126398u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12639c:
    // 0x12639c: 0xa4c30000
    ctx->pc = 0x12639cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1263a0:
    // 0x1263a0: 0x1480fff7
label_1263a4:
    if (ctx->pc == 0x1263A4u) {
        ctx->pc = 0x1263A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1263A8u;
        goto label_1263a8;
    }
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1263A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x126380u;
            goto label_126380;
        }
    }
    ctx->pc = 0x1263A8u;
label_1263a8:
    // 0x1263a8: 0x9203000e
    ctx->pc = 0x1263a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1263ac:
    // 0x1263ac: 0x31600
    ctx->pc = 0x1263acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_1263b0:
    // 0x1263b0: 0x24030002
    ctx->pc = 0x1263b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1263b4:
    // 0x1263b4: 0x21603
    ctx->pc = 0x1263b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1263b8:
    // 0x1263b8: 0xae030004
    ctx->pc = 0x1263b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1263bc:
    // 0x1263bc: 0x1221018
    ctx->pc = 0x1263bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1263c0:
    // 0x1263c0: 0xae090090
    ctx->pc = 0x1263c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1263c4:
    // 0x1263c4: 0x21040
    ctx->pc = 0x1263c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1263c8:
    // 0x1263c8: 0xae020094
    ctx->pc = 0x1263c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1263cc:
    // 0x1263cc: 0x24020002
    ctx->pc = 0x1263ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1263d0:
    // 0x1263d0: 0x54620009
label_1263d4:
    if (ctx->pc == 0x1263D4u) {
        ctx->pc = 0x1263D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1263D8u;
        goto label_1263d8;
    }
    ctx->pc = 0x1263D0u;
    {
        const bool branch_taken_0x1263d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1263d0) {
            ctx->pc = 0x1263D4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1263F8u;
            goto label_1263f8;
        }
    }
    ctx->pc = 0x1263D8u;
label_1263d8:
    // 0x1263d8: 0x8e030080
    ctx->pc = 0x1263d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1263dc:
    // 0x1263dc: 0x8e040084
    ctx->pc = 0x1263dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1263e0:
    // 0x1263e0: 0x8e050094
    ctx->pc = 0x1263e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1263e4:
    // 0x1263e4: 0x60f809
label_1263e8:
    if (ctx->pc == 0x1263E8u) {
        ctx->pc = 0x1263E8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1263ECu;
        goto label_1263ec;
    }
    ctx->pc = 0x1263E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1263ECu);
        ctx->pc = 0x1263E8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1263ECu; }
            if (ctx->pc != 0x1263ECu) { return; }
        }
    }
    ctx->pc = 0x1263ECu;
label_1263ec:
    // 0x1263ec: 0x24020003
    ctx->pc = 0x1263ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1263f0:
    // 0x1263f0: 0xae020004
    ctx->pc = 0x1263f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1263f4:
    // 0x1263f4: 0xdfb00000
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1263f8:
    // 0x1263f8: 0xdfb10008
    ctx->pc = 0x1263f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1263fc:
    // 0x1263fc: 0xdfb20010
    ctx->pc = 0x1263fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126400:
    // 0x126400: 0xdfbf0018
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126404:
    // 0x126404: 0x3e00008
label_126408:
    if (ctx->pc == 0x126408u) {
        ctx->pc = 0x126408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12640Cu;
        goto label_12640c;
    }
    ctx->pc = 0x126404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            case 0x125D44u: goto label_125d44;
            case 0x125D48u: goto label_125d48;
            case 0x125D4Cu: goto label_125d4c;
            case 0x125D50u: goto label_125d50;
            case 0x125D54u: goto label_125d54;
            case 0x125D58u: goto label_125d58;
            case 0x125D5Cu: goto label_125d5c;
            case 0x125D60u: goto label_125d60;
            case 0x125D64u: goto label_125d64;
            case 0x125D68u: goto label_125d68;
            case 0x125D6Cu: goto label_125d6c;
            case 0x125D70u: goto label_125d70;
            case 0x125D74u: goto label_125d74;
            case 0x125D78u: goto label_125d78;
            case 0x125D7Cu: goto label_125d7c;
            case 0x125D80u: goto label_125d80;
            case 0x125D84u: goto label_125d84;
            case 0x125D88u: goto label_125d88;
            case 0x125D8Cu: goto label_125d8c;
            case 0x125D90u: goto label_125d90;
            case 0x125D94u: goto label_125d94;
            case 0x125D98u: goto label_125d98;
            case 0x125D9Cu: goto label_125d9c;
            case 0x125DA0u: goto label_125da0;
            case 0x125DA4u: goto label_125da4;
            case 0x125DA8u: goto label_125da8;
            case 0x125DACu: goto label_125dac;
            case 0x125DB0u: goto label_125db0;
            case 0x125DB4u: goto label_125db4;
            case 0x125DB8u: goto label_125db8;
            case 0x125DBCu: goto label_125dbc;
            case 0x125DC0u: goto label_125dc0;
            case 0x125DC4u: goto label_125dc4;
            case 0x125DC8u: goto label_125dc8;
            case 0x125DCCu: goto label_125dcc;
            case 0x125DD0u: goto label_125dd0;
            case 0x125DD4u: goto label_125dd4;
            case 0x125DD8u: goto label_125dd8;
            case 0x125DDCu: goto label_125ddc;
            case 0x125DE0u: goto label_125de0;
            case 0x125DE4u: goto label_125de4;
            case 0x125DE8u: goto label_125de8;
            case 0x125DECu: goto label_125dec;
            case 0x125DF0u: goto label_125df0;
            case 0x125DF4u: goto label_125df4;
            case 0x125DF8u: goto label_125df8;
            case 0x125DFCu: goto label_125dfc;
            case 0x125E00u: goto label_125e00;
            case 0x125E04u: goto label_125e04;
            case 0x125E08u: goto label_125e08;
            case 0x125E0Cu: goto label_125e0c;
            case 0x125E10u: goto label_125e10;
            case 0x125E14u: goto label_125e14;
            case 0x125E18u: goto label_125e18;
            case 0x125E1Cu: goto label_125e1c;
            case 0x125E20u: goto label_125e20;
            case 0x125E24u: goto label_125e24;
            case 0x125E28u: goto label_125e28;
            case 0x125E2Cu: goto label_125e2c;
            case 0x125E30u: goto label_125e30;
            case 0x125E34u: goto label_125e34;
            case 0x125E38u: goto label_125e38;
            case 0x125E3Cu: goto label_125e3c;
            case 0x125E40u: goto label_125e40;
            case 0x125E44u: goto label_125e44;
            case 0x125E48u: goto label_125e48;
            case 0x125E4Cu: goto label_125e4c;
            case 0x125E50u: goto label_125e50;
            case 0x125E54u: goto label_125e54;
            case 0x125E58u: goto label_125e58;
            case 0x125E5Cu: goto label_125e5c;
            case 0x125E60u: goto label_125e60;
            case 0x125E64u: goto label_125e64;
            case 0x125E68u: goto label_125e68;
            case 0x125E6Cu: goto label_125e6c;
            case 0x125E70u: goto label_125e70;
            case 0x125E74u: goto label_125e74;
            case 0x125E78u: goto label_125e78;
            case 0x125E7Cu: goto label_125e7c;
            case 0x125E80u: goto label_125e80;
            case 0x125E84u: goto label_125e84;
            case 0x125E88u: goto label_125e88;
            case 0x125E8Cu: goto label_125e8c;
            case 0x125E90u: goto label_125e90;
            case 0x125E94u: goto label_125e94;
            case 0x125E98u: goto label_125e98;
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EA0u: goto label_125ea0;
            case 0x125EA4u: goto label_125ea4;
            case 0x125EA8u: goto label_125ea8;
            case 0x125EACu: goto label_125eac;
            case 0x125EB0u: goto label_125eb0;
            case 0x125EB4u: goto label_125eb4;
            case 0x125EB8u: goto label_125eb8;
            case 0x125EBCu: goto label_125ebc;
            case 0x125EC0u: goto label_125ec0;
            case 0x125EC4u: goto label_125ec4;
            case 0x125EC8u: goto label_125ec8;
            case 0x125ECCu: goto label_125ecc;
            case 0x125ED0u: goto label_125ed0;
            case 0x125ED4u: goto label_125ed4;
            case 0x125ED8u: goto label_125ed8;
            case 0x125EDCu: goto label_125edc;
            case 0x125EE0u: goto label_125ee0;
            case 0x125EE4u: goto label_125ee4;
            case 0x125EE8u: goto label_125ee8;
            case 0x125EECu: goto label_125eec;
            case 0x125EF0u: goto label_125ef0;
            case 0x125EF4u: goto label_125ef4;
            case 0x125EF8u: goto label_125ef8;
            case 0x125EFCu: goto label_125efc;
            case 0x125F00u: goto label_125f00;
            case 0x125F04u: goto label_125f04;
            case 0x125F08u: goto label_125f08;
            case 0x125F0Cu: goto label_125f0c;
            case 0x125F10u: goto label_125f10;
            case 0x125F14u: goto label_125f14;
            case 0x125F18u: goto label_125f18;
            case 0x125F1Cu: goto label_125f1c;
            case 0x125F20u: goto label_125f20;
            case 0x125F24u: goto label_125f24;
            case 0x125F28u: goto label_125f28;
            case 0x125F2Cu: goto label_125f2c;
            case 0x125F30u: goto label_125f30;
            case 0x125F34u: goto label_125f34;
            case 0x125F38u: goto label_125f38;
            case 0x125F3Cu: goto label_125f3c;
            case 0x125F40u: goto label_125f40;
            case 0x125F44u: goto label_125f44;
            case 0x125F48u: goto label_125f48;
            case 0x125F4Cu: goto label_125f4c;
            case 0x125F50u: goto label_125f50;
            case 0x125F54u: goto label_125f54;
            case 0x125F58u: goto label_125f58;
            case 0x125F5Cu: goto label_125f5c;
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12640Cu;
label_12640c:
    // 0x12640c: 0x0
    ctx->pc = 0x12640cu;
    // NOP
}
