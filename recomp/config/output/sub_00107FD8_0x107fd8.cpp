#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107FD8
// Address: 0x107fd8 - 0x108108
void sub_00107FD8_0x107fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107fd8u;

    // 0x107fd8: 0x27bdffd0
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107fdc: 0x24020009
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x107fe0: 0xffb40020
    ctx->pc = 0x107fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x107fe4: 0xe0a02d
    ctx->pc = 0x107fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fe8: 0x26830008
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 8));
    // 0x107fec: 0x24070001
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x107ff0: 0x62001a
    ctx->pc = 0x107ff0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x107ff4: 0xffb00000
    ctx->pc = 0x107ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107ff8: 0xffb10008
    ctx->pc = 0x107ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107ffc: 0x100882d
    ctx->pc = 0x107ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108000: 0xffb20010
    ctx->pc = 0x108000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108004: 0xc0902d
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108008: 0xffb30018
    ctx->pc = 0x108008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10800c: 0x80982d
    ctx->pc = 0x10800cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108010: 0xffbf0028
    ctx->pc = 0x108010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x108014: 0x50400001
    ctx->pc = 0x108014u;
    {
        const bool branch_taken_0x108014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x108014) {
            ctx->pc = 0x108018u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10801Cu;
            goto label_10801c;
        }
    }
    ctx->pc = 0x10801Cu;
label_10801c:
    // 0x10801c: 0xa0802d
    ctx->pc = 0x10801cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108020: 0x1812
    ctx->pc = 0x108020u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x108024: 0xe3102a
    ctx->pc = 0x108024u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x108028: 0x10400008
    ctx->pc = 0x108028u;
    {
        const bool branch_taken_0x108028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10802Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108028) {
            ctx->pc = 0x10804Cu;
            goto label_10804c;
        }
    }
    ctx->pc = 0x108030u;
label_108030:
    // 0x108030: 0x73840
    ctx->pc = 0x108030u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x108034: 0xe3102a
    ctx->pc = 0x108034u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x108038: 0x0
    ctx->pc = 0x108038u;
    // NOP
    // 0x10803c: 0x0
    ctx->pc = 0x10803cu;
    // NOP
    // 0x108040: 0x0
    ctx->pc = 0x108040u;
    // NOP
    // 0x108044: 0x1440fffa
    ctx->pc = 0x108044u;
    {
        const bool branch_taken_0x108044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108048u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x108044) {
            ctx->pc = 0x108030u;
            goto label_108030;
        }
    }
    ctx->pc = 0x10804Cu;
label_10804c:
    // 0x10804c: 0xc041f7e
    ctx->pc = 0x10804Cu;
    SET_GPR_U32(ctx, 31, 0x108054u);
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108054u; }
    }
    if (ctx->pc != 0x108054u) { return; }
    ctx->pc = 0x108054u;
    // 0x108054: 0x2a43000a
    ctx->pc = 0x108054u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 10));
    // 0x108058: 0x40282d
    ctx->pc = 0x108058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10805c: 0x24020001
    ctx->pc = 0x10805cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108060: 0xacb10014
    ctx->pc = 0x108060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
    // 0x108064: 0x24110009
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 9));
    // 0x108068: 0x1460000f
    ctx->pc = 0x108068u;
    {
        const bool branch_taken_0x108068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10806Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x108068) {
            ctx->pc = 0x1080A8u;
            goto label_1080a8;
        }
    }
    ctx->pc = 0x108070u;
    // 0x108070: 0x26100009
    ctx->pc = 0x108070u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 9));
    // 0x108074: 0x82070000
    ctx->pc = 0x108074u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_108078:
    // 0x108078: 0x26100001
    ctx->pc = 0x108078u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x10807c: 0x260202d
    ctx->pc = 0x10807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108080: 0x2406000a
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x108084: 0x24e7ffd0
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x108088: 0xc041fb4
    ctx->pc = 0x108088u;
    SET_GPR_U32(ctx, 31, 0x108090u);
    ctx->pc = 0x10808Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108090u; }
    }
    if (ctx->pc != 0x108090u) { return; }
    ctx->pc = 0x108090u;
    // 0x108090: 0x40282d
    ctx->pc = 0x108090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108094: 0x232102a
    ctx->pc = 0x108094u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x108098: 0x5440fff7
    ctx->pc = 0x108098u;
    {
        const bool branch_taken_0x108098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x108098) {
            ctx->pc = 0x10809Cu;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x108078u;
            goto label_108078;
        }
    }
    ctx->pc = 0x1080A0u;
    // 0x1080a0: 0x10000002
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1080A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x1080ACu;
            goto label_1080ac;
        }
    }
    ctx->pc = 0x1080A8u;
label_1080a8:
    // 0x1080a8: 0x2610000a
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10));
label_1080ac:
    // 0x1080ac: 0x234102a
    ctx->pc = 0x1080acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x1080b0: 0x5040000d
    ctx->pc = 0x1080B0u;
    {
        const bool branch_taken_0x1080b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1080b0) {
            ctx->pc = 0x1080B4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1080E8u;
            goto label_1080e8;
        }
    }
    ctx->pc = 0x1080B8u;
    // 0x1080b8: 0x2918823
    ctx->pc = 0x1080b8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1080bc: 0x0
    ctx->pc = 0x1080bcu;
    // NOP
label_1080c0:
    // 0x1080c0: 0x82070000
    ctx->pc = 0x1080c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1080c4: 0x26100001
    ctx->pc = 0x1080c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1080c8: 0x260202d
    ctx->pc = 0x1080c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080cc: 0x2406000a
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1080d0: 0x24e7ffd0
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1080d4: 0xc041fb4
    ctx->pc = 0x1080D4u;
    SET_GPR_U32(ctx, 31, 0x1080DCu);
    ctx->pc = 0x1080D8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x107ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107ED0_0x107ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080DCu; }
    }
    if (ctx->pc != 0x1080DCu) { return; }
    ctx->pc = 0x1080DCu;
    // 0x1080dc: 0x1620fff8
    ctx->pc = 0x1080DCu;
    {
        const bool branch_taken_0x1080dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1080E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1080dc) {
            ctx->pc = 0x1080C0u;
            goto label_1080c0;
        }
    }
    ctx->pc = 0x1080E4u;
    // 0x1080e4: 0xdfb00000
    ctx->pc = 0x1080e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1080e8:
    // 0x1080e8: 0xa0102d
    ctx->pc = 0x1080e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080ec: 0xdfb10008
    ctx->pc = 0x1080ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1080f0: 0xdfb20010
    ctx->pc = 0x1080f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1080f4: 0xdfb30018
    ctx->pc = 0x1080f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1080f8: 0xdfb40020
    ctx->pc = 0x1080f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1080fc: 0xdfbf0028
    ctx->pc = 0x1080fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108100: 0x3e00008
    ctx->pc = 0x108100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108104u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10801Cu: goto label_10801c;
            case 0x108030u: goto label_108030;
            case 0x10804Cu: goto label_10804c;
            case 0x108078u: goto label_108078;
            case 0x1080A8u: goto label_1080a8;
            case 0x1080ACu: goto label_1080ac;
            case 0x1080C0u: goto label_1080c0;
            case 0x1080E8u: goto label_1080e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108108u;
}
