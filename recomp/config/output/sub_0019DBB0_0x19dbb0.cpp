#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019DBB0
// Address: 0x19dbb0 - 0x19dcd0
void sub_0019DBB0_0x19dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19dbb0u;

    // 0x19dbb0: 0x8c830020
    ctx->pc = 0x19dbb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x19dbb4: 0x24020014
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x19dbb8: 0x10620018
    ctx->pc = 0x19DBB8u;
    {
        const bool branch_taken_0x19dbb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19DBBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x19dbb8) {
            ctx->pc = 0x19DC1Cu;
            goto label_19dc1c;
        }
    }
    ctx->pc = 0x19DBC0u;
    // 0x19dbc0: 0x10620013
    ctx->pc = 0x19DBC0u;
    {
        const bool branch_taken_0x19dbc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19dbc0) {
            ctx->pc = 0x19DC10u;
            goto label_19dc10;
        }
    }
    ctx->pc = 0x19DBC8u;
    // 0x19dbc8: 0x2402000a
    ctx->pc = 0x19dbc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19dbcc: 0x1062000d
    ctx->pc = 0x19DBCCu;
    {
        const bool branch_taken_0x19dbcc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19DBD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19dbcc) {
            ctx->pc = 0x19DC04u;
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DBD4u;
    // 0x19dbd4: 0x1062000b
    ctx->pc = 0x19DBD4u;
    {
        const bool branch_taken_0x19dbd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19dbd4) {
            ctx->pc = 0x19DC04u;
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DBDCu;
    // 0x19dbdc: 0x24020001
    ctx->pc = 0x19dbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dbe0: 0x10620005
    ctx->pc = 0x19DBE0u;
    {
        const bool branch_taken_0x19dbe0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19dbe0) {
            ctx->pc = 0x19DBF8u;
            goto label_19dbf8;
        }
    }
    ctx->pc = 0x19DBE8u;
    // 0x19dbe8: 0x10600003
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DBF8u;
            goto label_19dbf8;
        }
    }
    ctx->pc = 0x19DBF0u;
    // 0x19dbf0: 0x1000000d
    ctx->pc = 0x19DBF0u;
    {
        const bool branch_taken_0x19dbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DBF4u;
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
        if (branch_taken_0x19dbf0) {
            ctx->pc = 0x19DC28u;
            goto label_19dc28;
        }
    }
    ctx->pc = 0x19DBF8u;
label_19dbf8:
    // 0x19dbf8: 0x24060040
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x19dbfc: 0x10000009
    ctx->pc = 0x19DBFCu;
    {
        const bool branch_taken_0x19dbfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC00u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x19dbfc) {
            ctx->pc = 0x19DC24u;
            goto label_19dc24;
        }
    }
    ctx->pc = 0x19DC04u;
label_19dc04:
    // 0x19dc04: 0x24060040
    ctx->pc = 0x19dc04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x19dc08: 0x10000006
    ctx->pc = 0x19DC08u;
    {
        const bool branch_taken_0x19dc08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dc08) {
            ctx->pc = 0x19DC24u;
            goto label_19dc24;
        }
    }
    ctx->pc = 0x19DC10u;
label_19dc10:
    // 0x19dc10: 0x24060080
    ctx->pc = 0x19dc10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x19dc14: 0x10000003
    ctx->pc = 0x19DC14u;
    {
        const bool branch_taken_0x19dc14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x19dc14) {
            ctx->pc = 0x19DC24u;
            goto label_19dc24;
        }
    }
    ctx->pc = 0x19DC1Cu;
label_19dc1c:
    // 0x19dc1c: 0x24060080
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x19dc20: 0xc0282d
    ctx->pc = 0x19dc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19dc24:
    // 0x19dc24: 0x53c3c
    ctx->pc = 0x19dc24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_19dc28:
    // 0x19dc28: 0x6343c
    ctx->pc = 0x19dc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x19dc2c: 0x848a001a
    ctx->pc = 0x19dc2cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x19dc30: 0x73c3f
    ctx->pc = 0x19dc30u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x19dc34: 0x8489001c
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x19dc38: 0x6343f
    ctx->pc = 0x19dc38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x19dc3c: 0x8c850030
    ctx->pc = 0x19dc3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19dc40: 0x102d
    ctx->pc = 0x19dc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc44: 0x1000001d
    ctx->pc = 0x19DC44u;
    {
        const bool branch_taken_0x19dc44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC48u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dc44) {
            ctx->pc = 0x19DCBCu;
            goto label_19dcbc;
        }
    }
    ctx->pc = 0x19DC4Cu;
label_19dc4c:
    // 0x19dc4c: 0x91c3c
    ctx->pc = 0x19dc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
    // 0x19dc50: 0x4243f
    ctx->pc = 0x19dc50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19dc54: 0x31c3f
    ctx->pc = 0x19dc54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19dc58: 0x862021
    ctx->pc = 0x19dc58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19dc5c: 0x671821
    ctx->pc = 0x19dc5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19dc60: 0x2484ffff
    ctx->pc = 0x19dc60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19dc64: 0x2463ffff
    ctx->pc = 0x19dc64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19dc68: 0x86001a
    ctx->pc = 0x19dc68u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19dc6c: 0x25080001
    ctx->pc = 0x19dc6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x19dc70: 0x0
    ctx->pc = 0x19dc70u;
    // NOP
    // 0x19dc74: 0x2012
    ctx->pc = 0x19dc74u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x19dc78: 0x7067001a
    ctx->pc = 0x19dc78u;
    { int32_t divisor = GPR_S32(ctx, 7); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 3) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 7) % divisor); } else { ctx->lo1= (GPR_S32(ctx,3) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,7); } }
    // 0x19dc7c: 0x0
    ctx->pc = 0x19dc7cu;
    // NOP
    // 0x19dc80: 0x0
    ctx->pc = 0x19dc80u;
    // NOP
    // 0x19dc84: 0x70001812
    ctx->pc = 0x19dc84u;
    SET_GPR_U32(ctx, 3, ctx->lo1);
    // 0x19dc88: 0x832018
    ctx->pc = 0x19dc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x19dc8c: 0xa1843
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
    // 0x19dc90: 0x3543c
    ctx->pc = 0x19dc90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19dc94: 0x91843
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 1));
    // 0x19dc98: 0xa543f
    ctx->pc = 0x19dc98u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19dc9c: 0x34c3c
    ctx->pc = 0x19dc9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19dca0: 0x41940
    ctx->pc = 0x19dca0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x19dca4: 0x94c3f
    ctx->pc = 0x19dca4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x19dca8: 0x31c3c
    ctx->pc = 0x19dca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19dcac: 0x31c3f
    ctx->pc = 0x19dcacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19dcb0: 0x431021
    ctx->pc = 0x19dcb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dcb4: 0x2143c
    ctx->pc = 0x19dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19dcb8: 0x2143f
    ctx->pc = 0x19dcb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19dcbc:
    // 0x19dcbc: 0x105182b
    ctx->pc = 0x19dcbcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x19dcc0: 0x1460ffe2
    ctx->pc = 0x19DCC0u;
    {
        const bool branch_taken_0x19dcc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DCC4u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 16));
        if (branch_taken_0x19dcc0) {
            ctx->pc = 0x19DC4Cu;
            goto label_19dc4c;
        }
    }
    ctx->pc = 0x19DCC8u;
    // 0x19dcc8: 0x3e00008
    ctx->pc = 0x19DCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DBF8u: goto label_19dbf8;
            case 0x19DC04u: goto label_19dc04;
            case 0x19DC10u: goto label_19dc10;
            case 0x19DC1Cu: goto label_19dc1c;
            case 0x19DC24u: goto label_19dc24;
            case 0x19DC28u: goto label_19dc28;
            case 0x19DC4Cu: goto label_19dc4c;
            case 0x19DCBCu: goto label_19dcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DCD0u;
}
