#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182520
// Address: 0x182520 - 0x182640
void sub_00182520_0x182520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182520u;

    // 0x182520: 0x27bdffe0
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182524: 0xffb00000
    ctx->pc = 0x182524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182528: 0x80802d
    ctx->pc = 0x182528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18252c: 0xffb10008
    ctx->pc = 0x18252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182530: 0xa0882d
    ctx->pc = 0x182530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182534: 0xffb20010
    ctx->pc = 0x182534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182538: 0x12000008
    ctx->pc = 0x182538u;
    {
        const bool branch_taken_0x182538 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18253Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x182538) {
            ctx->pc = 0x18255Cu;
            goto label_18255c;
        }
    }
    ctx->pc = 0x182540u;
    // 0x182540: 0x3c040028
    ctx->pc = 0x182540u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x182544: 0x200282d
    ctx->pc = 0x182544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182548: 0x24845a48
    ctx->pc = 0x182548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23112));
    // 0x18254c: 0xc042bf0
    ctx->pc = 0x18254Cu;
    SET_GPR_U32(ctx, 31, 0x182554u);
    ctx->pc = 0x182550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182554u; }
    }
    if (ctx->pc != 0x182554u) { return; }
    ctx->pc = 0x182554u;
    // 0x182554: 0x56000006
    ctx->pc = 0x182554u;
    {
        const bool branch_taken_0x182554 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x182554) {
            ctx->pc = 0x182558u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x182570u;
            goto label_182570;
        }
    }
    ctx->pc = 0x18255Cu;
label_18255c:
    // 0x18255c: 0x3c020028
    ctx->pc = 0x18255cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x182560: 0x8c505a40
    ctx->pc = 0x182560u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x182564: 0x1200002f
    ctx->pc = 0x182564u;
    {
        const bool branch_taken_0x182564 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x182568u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182564) {
            ctx->pc = 0x182624u;
            goto label_182624;
        }
    }
    ctx->pc = 0x18256Cu;
    // 0x18256c: 0x82020000
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_182570:
    // 0x182570: 0x14400006
    ctx->pc = 0x182570u;
    {
        const bool branch_taken_0x182570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182574u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x182570) {
            ctx->pc = 0x18258Cu;
            goto label_18258c;
        }
    }
    ctx->pc = 0x182578u;
    // 0x182578: 0x1000002a
    ctx->pc = 0x182578u;
    {
        const bool branch_taken_0x182578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18257Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182578) {
            ctx->pc = 0x182624u;
            goto label_182624;
        }
    }
    ctx->pc = 0x182580u;
label_182580:
    // 0x182580: 0x10600028
    ctx->pc = 0x182580u;
    {
        const bool branch_taken_0x182580 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x182584u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182580) {
            ctx->pc = 0x182624u;
            goto label_182624;
        }
    }
    ctx->pc = 0x182588u;
    // 0x182588: 0x92050000
    ctx->pc = 0x182588u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_18258c:
    // 0x18258c: 0x52e00
    ctx->pc = 0x18258cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x182590: 0x220202d
    ctx->pc = 0x182590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182594: 0x52e03
    ctx->pc = 0x182594u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x182598: 0xc042b3a
    ctx->pc = 0x182598u;
    SET_GPR_U32(ctx, 31, 0x1825A0u);
    ctx->pc = 0x18259Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825A0u; }
    }
    if (ctx->pc != 0x1825A0u) { return; }
    ctx->pc = 0x1825A0u;
    // 0x1825a0: 0x5440fff7
    ctx->pc = 0x1825A0u;
    {
        const bool branch_taken_0x1825a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1825a0) {
            ctx->pc = 0x1825A4u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
            ctx->pc = 0x182580u;
            goto label_182580;
        }
    }
    ctx->pc = 0x1825A8u;
    // 0x1825a8: 0x2612ffff
    ctx->pc = 0x1825a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1825ac: 0x24030022
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1825b0: 0x82420000
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1825b4: 0x5443000d
    ctx->pc = 0x1825B4u;
    {
        const bool branch_taken_0x1825b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1825b4) {
            ctx->pc = 0x1825B8u;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1825ECu;
            goto label_1825ec;
        }
    }
    ctx->pc = 0x1825BCu;
    // 0x1825bc: 0x200902d
    ctx->pc = 0x1825bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825c0: 0x3c110024
    ctx->pc = 0x1825c0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x1825c4: 0x0
    ctx->pc = 0x1825c4u;
    // NOP
label_1825c8:
    // 0x1825c8: 0x82050000
    ctx->pc = 0x1825c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1825cc: 0x26100001
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1825d0: 0xc042b3a
    ctx->pc = 0x1825D0u;
    SET_GPR_U32(ctx, 31, 0x1825D8u);
    ctx->pc = 0x1825D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6080));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825D8u; }
    }
    if (ctx->pc != 0x1825D8u) { return; }
    ctx->pc = 0x1825D8u;
    // 0x1825d8: 0x1040fffb
    ctx->pc = 0x1825D8u;
    {
        const bool branch_taken_0x1825d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1825DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1825d8) {
            ctx->pc = 0x1825C8u;
            goto label_1825c8;
        }
    }
    ctx->pc = 0x1825E0u;
    // 0x1825e0: 0x10000008
    ctx->pc = 0x1825E0u;
    {
        const bool branch_taken_0x1825e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1825E4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1825e0) {
            ctx->pc = 0x182604u;
            goto label_182604;
        }
    }
    ctx->pc = 0x1825E8u;
label_1825e8:
    // 0x1825e8: 0x82050000
    ctx->pc = 0x1825e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1825ec:
    // 0x1825ec: 0x26100001
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1825f0: 0xc042b3a
    ctx->pc = 0x1825F0u;
    SET_GPR_U32(ctx, 31, 0x1825F8u);
    ctx->pc = 0x1825F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825F8u; }
    }
    if (ctx->pc != 0x1825F8u) { return; }
    ctx->pc = 0x1825F8u;
    // 0x1825f8: 0x1040fffb
    ctx->pc = 0x1825F8u;
    {
        const bool branch_taken_0x1825f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1825FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1825f8) {
            ctx->pc = 0x1825E8u;
            goto label_1825e8;
        }
    }
    ctx->pc = 0x182600u;
    // 0x182600: 0x80620000
    ctx->pc = 0x182600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_182604:
    // 0x182604: 0x10400004
    ctx->pc = 0x182604u;
    {
        const bool branch_taken_0x182604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
        if (branch_taken_0x182604) {
            ctx->pc = 0x182618u;
            goto label_182618;
        }
    }
    ctx->pc = 0x18260Cu;
    // 0x18260c: 0x10000003
    ctx->pc = 0x18260Cu;
    {
        const bool branch_taken_0x18260c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182610u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 23104), GPR_U32(ctx, 16));
        if (branch_taken_0x18260c) {
            ctx->pc = 0x18261Cu;
            goto label_18261c;
        }
    }
    ctx->pc = 0x182614u;
    // 0x182614: 0x0
    ctx->pc = 0x182614u;
    // NOP
label_182618:
    // 0x182618: 0xac405a40
    ctx->pc = 0x182618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23104), GPR_U32(ctx, 0));
label_18261c:
    // 0x18261c: 0xa0600000
    ctx->pc = 0x18261cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x182620: 0x240102d
    ctx->pc = 0x182620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182624:
    // 0x182624: 0xdfb00000
    ctx->pc = 0x182624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182628: 0xdfb10008
    ctx->pc = 0x182628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18262c: 0xdfb20010
    ctx->pc = 0x18262cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182630: 0xdfbf0018
    ctx->pc = 0x182630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182634: 0x3e00008
    ctx->pc = 0x182634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18255Cu: goto label_18255c;
            case 0x182570u: goto label_182570;
            case 0x182580u: goto label_182580;
            case 0x18258Cu: goto label_18258c;
            case 0x1825C8u: goto label_1825c8;
            case 0x1825E8u: goto label_1825e8;
            case 0x1825ECu: goto label_1825ec;
            case 0x182604u: goto label_182604;
            case 0x182618u: goto label_182618;
            case 0x18261Cu: goto label_18261c;
            case 0x182624u: goto label_182624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18263Cu;
    // 0x18263c: 0x0
    ctx->pc = 0x18263cu;
    // NOP
}
