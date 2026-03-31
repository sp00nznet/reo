#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00183FC8
// Address: 0x183fc8 - 0x1840e0
void sub_00183FC8_0x183fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x183fc8u;

    // 0x183fc8: 0x27bdffd0
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183fcc: 0xffb20020
    ctx->pc = 0x183fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x183fd0: 0xffb00010
    ctx->pc = 0x183fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183fd4: 0xffb10018
    ctx->pc = 0x183fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x183fd8: 0xffbf0028
    ctx->pc = 0x183fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x183fdc: 0xc062210
    ctx->pc = 0x183FDCu;
    SET_GPR_U32(ctx, 31, 0x183FE4u);
    ctx->pc = 0x183FE0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FE4u; }
    }
    if (ctx->pc != 0x183FE4u) { return; }
    ctx->pc = 0x183FE4u;
    // 0x183fe4: 0x54400004
    ctx->pc = 0x183FE4u;
    {
        const bool branch_taken_0x183fe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x183fe4) {
            ctx->pc = 0x183FE8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x183FF8u;
            goto label_183ff8;
        }
    }
    ctx->pc = 0x183FECu;
    // 0x183fec: 0x3c028101
    ctx->pc = 0x183fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x183ff0: 0x10000035
    ctx->pc = 0x183FF0u;
    {
        const bool branch_taken_0x183ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183FF4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x183ff0) {
            ctx->pc = 0x1840C8u;
            goto label_1840c8;
        }
    }
    ctx->pc = 0x183FF8u;
label_183ff8:
    // 0x183ff8: 0xc061af8
    ctx->pc = 0x183FF8u;
    SET_GPR_U32(ctx, 31, 0x184000u);
    ctx->pc = 0x183FFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186BE0_0x186be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184000u; }
    }
    if (ctx->pc != 0x184000u) { return; }
    ctx->pc = 0x184000u;
    // 0x184000: 0x14400005
    ctx->pc = 0x184000u;
    {
        const bool branch_taken_0x184000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184004u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x184000) {
            ctx->pc = 0x184018u;
            goto label_184018;
        }
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0x3c028101
    ctx->pc = 0x184008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18400c: 0x1000002e
    ctx->pc = 0x18400Cu;
    {
        const bool branch_taken_0x18400c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184010u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x18400c) {
            ctx->pc = 0x1840C8u;
            goto label_1840c8;
        }
    }
    ctx->pc = 0x184014u;
    // 0x184014: 0x0
    ctx->pc = 0x184014u;
    // NOP
label_184018:
    // 0x184018: 0x24030898
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x18401c: 0x8fa40008
    ctx->pc = 0x18401cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184020: 0x2431818
    ctx->pc = 0x184020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x184024: 0x3c020028
    ctx->pc = 0x184024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x184028: 0x240bffff
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18402c: 0x88001a
    ctx->pc = 0x18402cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x184030: 0x24425b48
    ctx->pc = 0x184030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23368));
    // 0x184034: 0x24460004
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4));
    // 0x184038: 0x24470808
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2056));
    // 0x18403c: 0x24640890
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 2192));
    // 0x184040: 0x24650800
    ctx->pc = 0x184040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x184044: 0xa65021
    ctx->pc = 0x184044u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x184048: 0xa22821
    ctx->pc = 0x184048u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18404c: 0x824821
    ctx->pc = 0x18404cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x184050: 0x862021
    ctx->pc = 0x184050u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x184054: 0x673821
    ctx->pc = 0x184054u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x184058: 0x621821
    ctx->pc = 0x184058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18405c: 0x3c060024
    ctx->pc = 0x18405cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x184060: 0xac800000
    ctx->pc = 0x184060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x184064: 0x802d
    ctx->pc = 0x184064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184068: 0xacab0000
    ctx->pc = 0x184068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x18406c: 0xad4b0000
    ctx->pc = 0x18406cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x184070: 0xad200000
    ctx->pc = 0x184070u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x184074: 0xac60088c
    ctx->pc = 0x184074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2188), GPR_U32(ctx, 0));
    // 0x184078: 0x24c517c8
    ctx->pc = 0x184078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 6088));
    // 0x18407c: 0x80a20000
    ctx->pc = 0x18407cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184080: 0x80a30001
    ctx->pc = 0x184080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x184084: 0xa0e20000
    ctx->pc = 0x184084u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x184088: 0xa0e30001
    ctx->pc = 0x184088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18408c: 0x51000001
    ctx->pc = 0x18408Cu;
    {
        const bool branch_taken_0x18408c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x18408c) {
            ctx->pc = 0x184090u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x184094u;
            goto label_184094;
        }
    }
    ctx->pc = 0x184094u;
label_184094:
    // 0x184094: 0x8812
    ctx->pc = 0x184094u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x184098: 0x1a20000b
    ctx->pc = 0x184098u;
    {
        const bool branch_taken_0x184098 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18409Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184098) {
            ctx->pc = 0x1840C8u;
            goto label_1840c8;
        }
    }
    ctx->pc = 0x1840A0u;
    // 0x1840a0: 0x200282d
    ctx->pc = 0x1840a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840a4: 0x0
    ctx->pc = 0x1840a4u;
    // NOP
label_1840a8:
    // 0x1840a8: 0x26100001
    ctx->pc = 0x1840a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1840ac: 0xc0621ae
    ctx->pc = 0x1840ACu;
    SET_GPR_U32(ctx, 31, 0x1840B4u);
    ctx->pc = 0x1840B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1886B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001886B8_0x1886b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840B4u; }
    }
    if (ctx->pc != 0x1840B4u) { return; }
    ctx->pc = 0x1840B4u;
    // 0x1840b4: 0x1040ffd4
    ctx->pc = 0x1840B4u;
    {
        const bool branch_taken_0x1840b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1840B8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
        if (branch_taken_0x1840b4) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x1840BCu;
    // 0x1840bc: 0x1460fffa
    ctx->pc = 0x1840BCu;
    {
        const bool branch_taken_0x1840bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1840C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1840bc) {
            ctx->pc = 0x1840A8u;
            goto label_1840a8;
        }
    }
    ctx->pc = 0x1840C4u;
    // 0x1840c4: 0x102d
    ctx->pc = 0x1840c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1840c8:
    // 0x1840c8: 0xdfb00010
    ctx->pc = 0x1840c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1840cc: 0xdfb10018
    ctx->pc = 0x1840ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1840d0: 0xdfb20020
    ctx->pc = 0x1840d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840d4: 0xdfbf0028
    ctx->pc = 0x1840d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1840d8: 0x3e00008
    ctx->pc = 0x1840D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1840DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183FF8u: goto label_183ff8;
            case 0x184008u: goto label_184008;
            case 0x184018u: goto label_184018;
            case 0x184094u: goto label_184094;
            case 0x1840A8u: goto label_1840a8;
            case 0x1840C8u: goto label_1840c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1840E0u;
}
