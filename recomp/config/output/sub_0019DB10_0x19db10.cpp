#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019DB10
// Address: 0x19db10 - 0x19dbb0
void sub_0019DB10_0x19db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19db10u;

    // 0x19db10: 0x102d
    ctx->pc = 0x19db10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db14: 0x682d
    ctx->pc = 0x19db14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db18: 0x24080001
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19db1c: 0x24090002
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19db20: 0x240a000a
    ctx->pc = 0x19db20u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19db24: 0x240b0013
    ctx->pc = 0x19db24u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 19));
    // 0x19db28: 0x1000001c
    ctx->pc = 0x19DB28u;
    {
        const bool branch_taken_0x19db28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB2Cu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x19db28) {
            ctx->pc = 0x19DB9Cu;
            goto label_19db9c;
        }
    }
    ctx->pc = 0x19DB30u;
label_19db30:
    // 0x19db30: 0x108c0015
    ctx->pc = 0x19DB30u;
    {
        const bool branch_taken_0x19db30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 12));
        ctx->pc = 0x19DB34u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19db30) {
            ctx->pc = 0x19DB88u;
            goto label_19db88;
        }
    }
    ctx->pc = 0x19DB38u;
    // 0x19db38: 0x108b0011
    ctx->pc = 0x19DB38u;
    {
        const bool branch_taken_0x19db38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 11));
        ctx->pc = 0x19DB3Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19db38) {
            ctx->pc = 0x19DB80u;
            goto label_19db80;
        }
    }
    ctx->pc = 0x19DB40u;
    // 0x19db40: 0x108a000c
    ctx->pc = 0x19DB40u;
    {
        const bool branch_taken_0x19db40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 10));
        ctx->pc = 0x19DB44u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19db40) {
            ctx->pc = 0x19DB74u;
            goto label_19db74;
        }
    }
    ctx->pc = 0x19DB48u;
    // 0x19db48: 0x1089000a
    ctx->pc = 0x19DB48u;
    {
        const bool branch_taken_0x19db48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 9));
        if (branch_taken_0x19db48) {
            ctx->pc = 0x19DB74u;
            goto label_19db74;
        }
    }
    ctx->pc = 0x19DB50u;
    // 0x19db50: 0x10880005
    ctx->pc = 0x19DB50u;
    {
        const bool branch_taken_0x19db50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 8));
        ctx->pc = 0x19DB54u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19db50) {
            ctx->pc = 0x19DB68u;
            goto label_19db68;
        }
    }
    ctx->pc = 0x19DB58u;
    // 0x19db58: 0x10800003
    ctx->pc = 0x19DB58u;
    {
        const bool branch_taken_0x19db58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19db58) {
            ctx->pc = 0x19DB68u;
            goto label_19db68;
        }
    }
    ctx->pc = 0x19DB60u;
    // 0x19db60: 0x1000000c
    ctx->pc = 0x19DB60u;
    {
        const bool branch_taken_0x19db60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB64u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
        if (branch_taken_0x19db60) {
            ctx->pc = 0x19DB94u;
            goto label_19db94;
        }
    }
    ctx->pc = 0x19DB68u;
label_19db68:
    // 0x19db68: 0x31880
    ctx->pc = 0x19db68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x19db6c: 0x10000008
    ctx->pc = 0x19DB6Cu;
    {
        const bool branch_taken_0x19db6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB70u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19db6c) {
            ctx->pc = 0x19DB90u;
            goto label_19db90;
        }
    }
    ctx->pc = 0x19DB74u;
label_19db74:
    // 0x19db74: 0x31840
    ctx->pc = 0x19db74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x19db78: 0x10000005
    ctx->pc = 0x19DB78u;
    {
        const bool branch_taken_0x19db78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19db78) {
            ctx->pc = 0x19DB90u;
            goto label_19db90;
        }
    }
    ctx->pc = 0x19DB80u;
label_19db80:
    // 0x19db80: 0x10000003
    ctx->pc = 0x19DB80u;
    {
        const bool branch_taken_0x19db80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DB84u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19db80) {
            ctx->pc = 0x19DB90u;
            goto label_19db90;
        }
    }
    ctx->pc = 0x19DB88u;
label_19db88:
    // 0x19db88: 0x31843
    ctx->pc = 0x19db88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19db8c: 0x431021
    ctx->pc = 0x19db8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19db90:
    // 0x19db90: 0x52843
    ctx->pc = 0x19db90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_19db94:
    // 0x19db94: 0x63043
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x19db98: 0x25ad0001
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_19db9c:
    // 0x19db9c: 0x1a7182a
    ctx->pc = 0x19db9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 7)));
    // 0x19dba0: 0x1460ffe3
    ctx->pc = 0x19DBA0u;
    {
        const bool branch_taken_0x19dba0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19dba0) {
            ctx->pc = 0x19DB30u;
            goto label_19db30;
        }
    }
    ctx->pc = 0x19DBA8u;
    // 0x19dba8: 0x3e00008
    ctx->pc = 0x19DBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DB30u: goto label_19db30;
            case 0x19DB68u: goto label_19db68;
            case 0x19DB74u: goto label_19db74;
            case 0x19DB80u: goto label_19db80;
            case 0x19DB88u: goto label_19db88;
            case 0x19DB90u: goto label_19db90;
            case 0x19DB94u: goto label_19db94;
            case 0x19DB9Cu: goto label_19db9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DBB0u;
}
