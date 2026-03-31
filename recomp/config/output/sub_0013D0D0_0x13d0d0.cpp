#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D0D0
// Address: 0x13d0d0 - 0x13d358
void sub_0013D0D0_0x13d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d0d0u;

    // 0x13d0d0: 0x27bdfff0
    ctx->pc = 0x13d0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d0d4: 0x14800006
    ctx->pc = 0x13D0D4u;
    {
        const bool branch_taken_0x13d0d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D0D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d0d4) {
            ctx->pc = 0x13D0F0u;
            goto label_13d0f0;
        }
    }
    ctx->pc = 0x13D0DCu;
    // 0x13d0dc: 0x3c040024
    ctx->pc = 0x13d0dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d0e0: 0xc04f53e
    ctx->pc = 0x13D0E0u;
    SET_GPR_U32(ctx, 31, 0x13D0E8u);
    ctx->pc = 0x13D0E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0E8u; }
    }
    if (ctx->pc != 0x13D0E8u) { return; }
    ctx->pc = 0x13D0E8u;
    // 0x13d0e8: 0x10000002
    ctx->pc = 0x13D0E8u;
    {
        const bool branch_taken_0x13d0e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D0ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d0e8) {
            ctx->pc = 0x13D0F4u;
            goto label_13d0f4;
        }
    }
    ctx->pc = 0x13D0F0u;
label_13d0f0:
    // 0x13d0f0: 0x8c820024
    ctx->pc = 0x13d0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_13d0f4:
    // 0x13d0f4: 0xdfbf0000
    ctx->pc = 0x13d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0f8: 0x3e00008
    ctx->pc = 0x13D0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0F0u: goto label_13d0f0;
            case 0x13D0F4u: goto label_13d0f4;
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D100u;
    // 0x13d100: 0x27bdfff0
    ctx->pc = 0x13d100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d104: 0x80302d
    ctx->pc = 0x13d104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d108: 0xffbf0000
    ctx->pc = 0x13d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d10c: 0x14c00006
    ctx->pc = 0x13D10Cu;
    {
        const bool branch_taken_0x13d10c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D110u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d10c) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D114u;
    // 0x13d114: 0x3c040024
    ctx->pc = 0x13d114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d118: 0xc04f53e
    ctx->pc = 0x13D118u;
    SET_GPR_U32(ctx, 31, 0x13D120u);
    ctx->pc = 0x13D11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D120u; }
    }
    if (ctx->pc != 0x13D120u) { return; }
    ctx->pc = 0x13D120u;
    // 0x13d120: 0x10000018
    ctx->pc = 0x13D120u;
    {
        const bool branch_taken_0x13d120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D124u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d120) {
            ctx->pc = 0x13D184u;
            goto label_13d184;
        }
    }
    ctx->pc = 0x13D128u;
label_13d128:
    // 0x13d128: 0x4600006
    ctx->pc = 0x13D128u;
    {
        const bool branch_taken_0x13d128 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13D12Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x13d128) {
            ctx->pc = 0x13D144u;
            goto label_13d144;
        }
    }
    ctx->pc = 0x13D130u;
    // 0x13d130: 0x8cc20024
    ctx->pc = 0x13d130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x13d134: 0x62102a
    ctx->pc = 0x13d134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x13d138: 0x54400007
    ctx->pc = 0x13D138u;
    {
        const bool branch_taken_0x13d138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13d138) {
            ctx->pc = 0x13D13Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->pc = 0x13D158u;
            goto label_13d158;
        }
    }
    ctx->pc = 0x13D140u;
    // 0x13d140: 0x3c040024
    ctx->pc = 0x13d140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13d144:
    // 0x13d144: 0xc04f53e
    ctx->pc = 0x13D144u;
    SET_GPR_U32(ctx, 31, 0x13D14Cu);
    ctx->pc = 0x13D148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955960));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D14Cu; }
    }
    if (ctx->pc != 0x13D14Cu) { return; }
    ctx->pc = 0x13D14Cu;
    // 0x13d14c: 0x1000000d
    ctx->pc = 0x13D14Cu;
    {
        const bool branch_taken_0x13d14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d14c) {
            ctx->pc = 0x13D184u;
            goto label_13d184;
        }
    }
    ctx->pc = 0x13D154u;
    // 0x13d154: 0x0
    ctx->pc = 0x13d154u;
    // NOP
label_13d158:
    // 0x13d158: 0xa32821
    ctx->pc = 0x13d158u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13d15c: 0x24a4000f
    ctx->pc = 0x13d15cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 15));
    // 0x13d160: 0x28a30000
    ctx->pc = 0x13d160u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 0));
    // 0x13d164: 0xa0102d
    ctx->pc = 0x13d164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d168: 0x83100b
    ctx->pc = 0x13d168u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x13d16c: 0x21103
    ctx->pc = 0x13d16cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13d170: 0x22100
    ctx->pc = 0x13d170u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d174: 0xa41023
    ctx->pc = 0x13d174u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13d178: 0x21940
    ctx->pc = 0x13d178u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 5));
    // 0x13d17c: 0x661821
    ctx->pc = 0x13d17cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13d180: 0x8c620038
    ctx->pc = 0x13d180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_13d184:
    // 0x13d184: 0xdfbf0000
    ctx->pc = 0x13d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d188: 0x3e00008
    ctx->pc = 0x13D188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D18Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0F0u: goto label_13d0f0;
            case 0x13D0F4u: goto label_13d0f4;
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D190u;
    // 0x13d190: 0x27bdfff0
    ctx->pc = 0x13d190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d194: 0x14800006
    ctx->pc = 0x13D194u;
    {
        const bool branch_taken_0x13d194 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D198u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d194) {
            ctx->pc = 0x13D1B0u;
            goto label_13d1b0;
        }
    }
    ctx->pc = 0x13D19Cu;
    // 0x13d19c: 0x3c040024
    ctx->pc = 0x13d19cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d1a0: 0xc04f53e
    ctx->pc = 0x13D1A0u;
    SET_GPR_U32(ctx, 31, 0x13D1A8u);
    ctx->pc = 0x13D1A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1A8u; }
    }
    if (ctx->pc != 0x13D1A8u) { return; }
    ctx->pc = 0x13D1A8u;
    // 0x13d1a8: 0x1000001b
    ctx->pc = 0x13D1A8u;
    {
        const bool branch_taken_0x13d1a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D1ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d1a8) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D1B0u;
label_13d1b0:
    // 0x13d1b0: 0x24860038
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d1b4: 0x8cc20000
    ctx->pc = 0x13d1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d1b8: 0x1045000c
    ctx->pc = 0x13D1B8u;
    {
        const bool branch_taken_0x13d1b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D1BCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d1b8) {
            ctx->pc = 0x13D1ECu;
            goto label_13d1ec;
        }
    }
    ctx->pc = 0x13D1C0u;
    // 0x13d1c0: 0x24630001
    ctx->pc = 0x13d1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d1c4: 0x0
    ctx->pc = 0x13d1c4u;
    // NOP
label_13d1c8:
    // 0x13d1c8: 0x28620010
    ctx->pc = 0x13d1c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d1cc: 0x10400007
    ctx->pc = 0x13D1CCu;
    {
        const bool branch_taken_0x13d1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D1D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d1cc) {
            ctx->pc = 0x13D1ECu;
            goto label_13d1ec;
        }
    }
    ctx->pc = 0x13D1D4u;
    // 0x13d1d4: 0x8cc20000
    ctx->pc = 0x13d1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d1d8: 0x0
    ctx->pc = 0x13d1d8u;
    // NOP
    // 0x13d1dc: 0x0
    ctx->pc = 0x13d1dcu;
    // NOP
    // 0x13d1e0: 0x0
    ctx->pc = 0x13d1e0u;
    // NOP
    // 0x13d1e4: 0x5445fff8
    ctx->pc = 0x13D1E4u;
    {
        const bool branch_taken_0x13d1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d1e4) {
            ctx->pc = 0x13D1E8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D1C8u;
            goto label_13d1c8;
        }
    }
    ctx->pc = 0x13D1ECu;
label_13d1ec:
    // 0x13d1ec: 0x24020010
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d1f0: 0x54620007
    ctx->pc = 0x13D1F0u;
    {
        const bool branch_taken_0x13d1f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d1f0) {
            ctx->pc = 0x13D1F4u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D210u;
            goto label_13d210;
        }
    }
    ctx->pc = 0x13D1F8u;
    // 0x13d1f8: 0x3c040024
    ctx->pc = 0x13d1f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d1fc: 0xc04f53e
    ctx->pc = 0x13D1FCu;
    SET_GPR_U32(ctx, 31, 0x13D204u);
    ctx->pc = 0x13D200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D204u; }
    }
    if (ctx->pc != 0x13D204u) { return; }
    ctx->pc = 0x13D204u;
    // 0x13d204: 0x10000004
    ctx->pc = 0x13D204u;
    {
        const bool branch_taken_0x13d204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D208u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d204) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13D20Cu;
    // 0x13d20c: 0x0
    ctx->pc = 0x13d20cu;
    // NOP
label_13d210:
    // 0x13d210: 0x641821
    ctx->pc = 0x13d210u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d214: 0x8c62003c
    ctx->pc = 0x13d214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_13d218:
    // 0x13d218: 0xdfbf0000
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d21c: 0x3e00008
    ctx->pc = 0x13D21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0F0u: goto label_13d0f0;
            case 0x13D0F4u: goto label_13d0f4;
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D224u;
    // 0x13d224: 0x0
    ctx->pc = 0x13d224u;
    // NOP
    // 0x13d228: 0x27bdfff0
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d22c: 0x14800006
    ctx->pc = 0x13D22Cu;
    {
        const bool branch_taken_0x13d22c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D230u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d22c) {
            ctx->pc = 0x13D248u;
            goto label_13d248;
        }
    }
    ctx->pc = 0x13D234u;
    // 0x13d234: 0x3c040024
    ctx->pc = 0x13d234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d238: 0xc04f53e
    ctx->pc = 0x13D238u;
    SET_GPR_U32(ctx, 31, 0x13D240u);
    ctx->pc = 0x13D23Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D240u; }
    }
    if (ctx->pc != 0x13D240u) { return; }
    ctx->pc = 0x13D240u;
    // 0x13d240: 0x1000001b
    ctx->pc = 0x13D240u;
    {
        const bool branch_taken_0x13d240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d240) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D248u;
label_13d248:
    // 0x13d248: 0x24860038
    ctx->pc = 0x13d248u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d24c: 0x8cc20000
    ctx->pc = 0x13d24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d250: 0x1045000c
    ctx->pc = 0x13D250u;
    {
        const bool branch_taken_0x13d250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D254u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d250) {
            ctx->pc = 0x13D284u;
            goto label_13d284;
        }
    }
    ctx->pc = 0x13D258u;
    // 0x13d258: 0x24630001
    ctx->pc = 0x13d258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d25c: 0x0
    ctx->pc = 0x13d25cu;
    // NOP
label_13d260:
    // 0x13d260: 0x28620010
    ctx->pc = 0x13d260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d264: 0x10400007
    ctx->pc = 0x13D264u;
    {
        const bool branch_taken_0x13d264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D268u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d264) {
            ctx->pc = 0x13D284u;
            goto label_13d284;
        }
    }
    ctx->pc = 0x13D26Cu;
    // 0x13d26c: 0x8cc20000
    ctx->pc = 0x13d26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d270: 0x0
    ctx->pc = 0x13d270u;
    // NOP
    // 0x13d274: 0x0
    ctx->pc = 0x13d274u;
    // NOP
    // 0x13d278: 0x0
    ctx->pc = 0x13d278u;
    // NOP
    // 0x13d27c: 0x5445fff8
    ctx->pc = 0x13D27Cu;
    {
        const bool branch_taken_0x13d27c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d27c) {
            ctx->pc = 0x13D280u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D260u;
            goto label_13d260;
        }
    }
    ctx->pc = 0x13D284u;
label_13d284:
    // 0x13d284: 0x24020010
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d288: 0x54620007
    ctx->pc = 0x13D288u;
    {
        const bool branch_taken_0x13d288 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d288) {
            ctx->pc = 0x13D28Cu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D2A8u;
            goto label_13d2a8;
        }
    }
    ctx->pc = 0x13D290u;
    // 0x13d290: 0x3c040024
    ctx->pc = 0x13d290u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d294: 0xc04f53e
    ctx->pc = 0x13D294u;
    SET_GPR_U32(ctx, 31, 0x13D29Cu);
    ctx->pc = 0x13D298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D29Cu; }
    }
    if (ctx->pc != 0x13D29Cu) { return; }
    ctx->pc = 0x13D29Cu;
    // 0x13d29c: 0x10000004
    ctx->pc = 0x13D29Cu;
    {
        const bool branch_taken_0x13d29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D2A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d29c) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D2A4u;
    // 0x13d2a4: 0x0
    ctx->pc = 0x13d2a4u;
    // NOP
label_13d2a8:
    // 0x13d2a8: 0x641821
    ctx->pc = 0x13d2a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d2ac: 0x8c620050
    ctx->pc = 0x13d2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_13d2b0:
    // 0x13d2b0: 0xdfbf0000
    ctx->pc = 0x13d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d2b4: 0x3e00008
    ctx->pc = 0x13D2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D2B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0F0u: goto label_13d0f0;
            case 0x13D0F4u: goto label_13d0f4;
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D2BCu;
    // 0x13d2bc: 0x0
    ctx->pc = 0x13d2bcu;
    // NOP
    // 0x13d2c0: 0x27bdfff0
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d2c4: 0x14800006
    ctx->pc = 0x13D2C4u;
    {
        const bool branch_taken_0x13d2c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D2C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d2c4) {
            ctx->pc = 0x13D2E0u;
            goto label_13d2e0;
        }
    }
    ctx->pc = 0x13D2CCu;
    // 0x13d2cc: 0x3c040024
    ctx->pc = 0x13d2ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d2d0: 0xc04f53e
    ctx->pc = 0x13D2D0u;
    SET_GPR_U32(ctx, 31, 0x13D2D8u);
    ctx->pc = 0x13D2D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2D8u; }
    }
    if (ctx->pc != 0x13D2D8u) { return; }
    ctx->pc = 0x13D2D8u;
    // 0x13d2d8: 0x1000001b
    ctx->pc = 0x13D2D8u;
    {
        const bool branch_taken_0x13d2d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D2DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d8) {
            ctx->pc = 0x13D348u;
            goto label_13d348;
        }
    }
    ctx->pc = 0x13D2E0u;
label_13d2e0:
    // 0x13d2e0: 0x24860038
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d2e4: 0x8cc20000
    ctx->pc = 0x13d2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d2e8: 0x1045000c
    ctx->pc = 0x13D2E8u;
    {
        const bool branch_taken_0x13d2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13D2ECu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d2e8) {
            ctx->pc = 0x13D31Cu;
            goto label_13d31c;
        }
    }
    ctx->pc = 0x13D2F0u;
    // 0x13d2f0: 0x24630001
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d2f4: 0x0
    ctx->pc = 0x13d2f4u;
    // NOP
label_13d2f8:
    // 0x13d2f8: 0x28620010
    ctx->pc = 0x13d2f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x13d2fc: 0x10400007
    ctx->pc = 0x13D2FCu;
    {
        const bool branch_taken_0x13d2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D300u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x13d2fc) {
            ctx->pc = 0x13D31Cu;
            goto label_13d31c;
        }
    }
    ctx->pc = 0x13D304u;
    // 0x13d304: 0x8cc20000
    ctx->pc = 0x13d304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13d308: 0x0
    ctx->pc = 0x13d308u;
    // NOP
    // 0x13d30c: 0x0
    ctx->pc = 0x13d30cu;
    // NOP
    // 0x13d310: 0x0
    ctx->pc = 0x13d310u;
    // NOP
    // 0x13d314: 0x5445fff8
    ctx->pc = 0x13D314u;
    {
        const bool branch_taken_0x13d314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x13d314) {
            ctx->pc = 0x13D318u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x13D2F8u;
            goto label_13d2f8;
        }
    }
    ctx->pc = 0x13D31Cu;
label_13d31c:
    // 0x13d31c: 0x24020010
    ctx->pc = 0x13d31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d320: 0x54620007
    ctx->pc = 0x13D320u;
    {
        const bool branch_taken_0x13d320 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x13d320) {
            ctx->pc = 0x13D324u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
            ctx->pc = 0x13D340u;
            goto label_13d340;
        }
    }
    ctx->pc = 0x13D328u;
    // 0x13d328: 0x3c040024
    ctx->pc = 0x13d328u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d32c: 0xc04f53e
    ctx->pc = 0x13D32Cu;
    SET_GPR_U32(ctx, 31, 0x13D334u);
    ctx->pc = 0x13D330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955992));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D334u; }
    }
    if (ctx->pc != 0x13D334u) { return; }
    ctx->pc = 0x13D334u;
    // 0x13d334: 0x10000004
    ctx->pc = 0x13D334u;
    {
        const bool branch_taken_0x13d334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D338u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d334) {
            ctx->pc = 0x13D348u;
            goto label_13d348;
        }
    }
    ctx->pc = 0x13D33Cu;
    // 0x13d33c: 0x0
    ctx->pc = 0x13d33cu;
    // NOP
label_13d340:
    // 0x13d340: 0x641821
    ctx->pc = 0x13d340u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d344: 0x8c620054
    ctx->pc = 0x13d344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_13d348:
    // 0x13d348: 0xdfbf0000
    ctx->pc = 0x13d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d34c: 0x3e00008
    ctx->pc = 0x13D34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0F0u: goto label_13d0f0;
            case 0x13D0F4u: goto label_13d0f4;
            case 0x13D128u: goto label_13d128;
            case 0x13D144u: goto label_13d144;
            case 0x13D158u: goto label_13d158;
            case 0x13D184u: goto label_13d184;
            case 0x13D1B0u: goto label_13d1b0;
            case 0x13D1C8u: goto label_13d1c8;
            case 0x13D1ECu: goto label_13d1ec;
            case 0x13D210u: goto label_13d210;
            case 0x13D218u: goto label_13d218;
            case 0x13D248u: goto label_13d248;
            case 0x13D260u: goto label_13d260;
            case 0x13D284u: goto label_13d284;
            case 0x13D2A8u: goto label_13d2a8;
            case 0x13D2B0u: goto label_13d2b0;
            case 0x13D2E0u: goto label_13d2e0;
            case 0x13D2F8u: goto label_13d2f8;
            case 0x13D31Cu: goto label_13d31c;
            case 0x13D340u: goto label_13d340;
            case 0x13D348u: goto label_13d348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D354u;
    // 0x13d354: 0x0
    ctx->pc = 0x13d354u;
    // NOP
}
