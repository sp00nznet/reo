#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001418A8
// Address: 0x1418a8 - 0x141968
void sub_001418A8_0x1418a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1418a8u;

label_1418a8:
    // 0x1418a8: 0x27bdfff0
    ctx->pc = 0x1418a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1418ac:
    // 0x1418ac: 0x80282d
    ctx->pc = 0x1418acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1418b0:
    // 0x1418b0: 0xffb00000
    ctx->pc = 0x1418b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1418b4:
    // 0x1418b4: 0x3c100023
    ctx->pc = 0x1418b4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_1418b8:
    // 0x1418b8: 0x2610a638
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294944312));
label_1418bc:
    // 0x1418bc: 0x2406007f
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
label_1418c0:
    // 0x1418c0: 0xffbf0008
    ctx->pc = 0x1418c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1418c4:
    // 0x1418c4: 0xc042d7e
label_1418c8:
    if (ctx->pc == 0x1418C8u) {
        ctx->pc = 0x1418C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1418CCu;
        goto label_1418cc;
    }
    ctx->pc = 0x1418C4u;
    SET_GPR_U32(ctx, 31, 0x1418CCu);
    ctx->pc = 0x1418C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418CCu; }
    }
    if (ctx->pc != 0x1418CCu) { return; }
    ctx->pc = 0x1418CCu;
label_1418cc:
    // 0x1418cc: 0x3c020026
    ctx->pc = 0x1418ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1418d0:
    // 0x1418d0: 0x244249f0
    ctx->pc = 0x1418d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18928));
label_1418d4:
    // 0x1418d4: 0x8c430000
    ctx->pc = 0x1418d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1418d8:
    // 0x1418d8: 0x10600003
label_1418dc:
    if (ctx->pc == 0x1418DCu) {
        ctx->pc = 0x1418DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1418E0u;
        goto label_1418e0;
    }
    ctx->pc = 0x1418D8u;
    {
        const bool branch_taken_0x1418d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1418DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1418d8) {
            ctx->pc = 0x1418E8u;
            goto label_1418e8;
        }
    }
    ctx->pc = 0x1418E0u;
label_1418e0:
    // 0x1418e0: 0x60f809
label_1418e4:
    if (ctx->pc == 0x1418E4u) {
        ctx->pc = 0x1418E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1418E8u;
        goto label_1418e8;
    }
    ctx->pc = 0x1418E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1418E8u);
        ctx->pc = 0x1418E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1418A8u: goto label_1418a8;
            case 0x1418ACu: goto label_1418ac;
            case 0x1418B0u: goto label_1418b0;
            case 0x1418B4u: goto label_1418b4;
            case 0x1418B8u: goto label_1418b8;
            case 0x1418BCu: goto label_1418bc;
            case 0x1418C0u: goto label_1418c0;
            case 0x1418C4u: goto label_1418c4;
            case 0x1418C8u: goto label_1418c8;
            case 0x1418CCu: goto label_1418cc;
            case 0x1418D0u: goto label_1418d0;
            case 0x1418D4u: goto label_1418d4;
            case 0x1418D8u: goto label_1418d8;
            case 0x1418DCu: goto label_1418dc;
            case 0x1418E0u: goto label_1418e0;
            case 0x1418E4u: goto label_1418e4;
            case 0x1418E8u: goto label_1418e8;
            case 0x1418ECu: goto label_1418ec;
            case 0x1418F0u: goto label_1418f0;
            case 0x1418F4u: goto label_1418f4;
            case 0x1418F8u: goto label_1418f8;
            case 0x1418FCu: goto label_1418fc;
            case 0x141900u: goto label_141900;
            case 0x141904u: goto label_141904;
            case 0x141908u: goto label_141908;
            case 0x14190Cu: goto label_14190c;
            case 0x141910u: goto label_141910;
            case 0x141914u: goto label_141914;
            case 0x141918u: goto label_141918;
            case 0x14191Cu: goto label_14191c;
            case 0x141920u: goto label_141920;
            case 0x141924u: goto label_141924;
            case 0x141928u: goto label_141928;
            case 0x14192Cu: goto label_14192c;
            case 0x141930u: goto label_141930;
            case 0x141934u: goto label_141934;
            case 0x141938u: goto label_141938;
            case 0x14193Cu: goto label_14193c;
            case 0x141940u: goto label_141940;
            case 0x141944u: goto label_141944;
            case 0x141948u: goto label_141948;
            case 0x14194Cu: goto label_14194c;
            case 0x141950u: goto label_141950;
            case 0x141954u: goto label_141954;
            case 0x141958u: goto label_141958;
            case 0x14195Cu: goto label_14195c;
            case 0x141960u: goto label_141960;
            case 0x141964u: goto label_141964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1418E8u; }
            if (ctx->pc != 0x1418E8u) { return; }
        }
    }
    ctx->pc = 0x1418E8u;
label_1418e8:
    // 0x1418e8: 0xdfb00000
    ctx->pc = 0x1418e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1418ec:
    // 0x1418ec: 0xdfbf0008
    ctx->pc = 0x1418ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1418f0:
    // 0x1418f0: 0x3e00008
label_1418f4:
    if (ctx->pc == 0x1418F4u) {
        ctx->pc = 0x1418F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1418F8u;
        goto label_1418f8;
    }
    ctx->pc = 0x1418F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1418A8u: goto label_1418a8;
            case 0x1418ACu: goto label_1418ac;
            case 0x1418B0u: goto label_1418b0;
            case 0x1418B4u: goto label_1418b4;
            case 0x1418B8u: goto label_1418b8;
            case 0x1418BCu: goto label_1418bc;
            case 0x1418C0u: goto label_1418c0;
            case 0x1418C4u: goto label_1418c4;
            case 0x1418C8u: goto label_1418c8;
            case 0x1418CCu: goto label_1418cc;
            case 0x1418D0u: goto label_1418d0;
            case 0x1418D4u: goto label_1418d4;
            case 0x1418D8u: goto label_1418d8;
            case 0x1418DCu: goto label_1418dc;
            case 0x1418E0u: goto label_1418e0;
            case 0x1418E4u: goto label_1418e4;
            case 0x1418E8u: goto label_1418e8;
            case 0x1418ECu: goto label_1418ec;
            case 0x1418F0u: goto label_1418f0;
            case 0x1418F4u: goto label_1418f4;
            case 0x1418F8u: goto label_1418f8;
            case 0x1418FCu: goto label_1418fc;
            case 0x141900u: goto label_141900;
            case 0x141904u: goto label_141904;
            case 0x141908u: goto label_141908;
            case 0x14190Cu: goto label_14190c;
            case 0x141910u: goto label_141910;
            case 0x141914u: goto label_141914;
            case 0x141918u: goto label_141918;
            case 0x14191Cu: goto label_14191c;
            case 0x141920u: goto label_141920;
            case 0x141924u: goto label_141924;
            case 0x141928u: goto label_141928;
            case 0x14192Cu: goto label_14192c;
            case 0x141930u: goto label_141930;
            case 0x141934u: goto label_141934;
            case 0x141938u: goto label_141938;
            case 0x14193Cu: goto label_14193c;
            case 0x141940u: goto label_141940;
            case 0x141944u: goto label_141944;
            case 0x141948u: goto label_141948;
            case 0x14194Cu: goto label_14194c;
            case 0x141950u: goto label_141950;
            case 0x141954u: goto label_141954;
            case 0x141958u: goto label_141958;
            case 0x14195Cu: goto label_14195c;
            case 0x141960u: goto label_141960;
            case 0x141964u: goto label_141964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1418F8u;
label_1418f8:
    // 0x1418f8: 0x27bdffe0
    ctx->pc = 0x1418f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1418fc:
    // 0x1418fc: 0x2406007f
    ctx->pc = 0x1418fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
label_141900:
    // 0x141900: 0xffb00000
    ctx->pc = 0x141900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141904:
    // 0x141904: 0x3c100023
    ctx->pc = 0x141904u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_141908:
    // 0x141908: 0x2610a638
    ctx->pc = 0x141908u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294944312));
label_14190c:
    // 0x14190c: 0xffb10008
    ctx->pc = 0x14190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141910:
    // 0x141910: 0xa0882d
    ctx->pc = 0x141910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141914:
    // 0x141914: 0x80282d
    ctx->pc = 0x141914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141918:
    // 0x141918: 0xffbf0010
    ctx->pc = 0x141918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14191c:
    // 0x14191c: 0xc042d7e
label_141920:
    if (ctx->pc == 0x141920u) {
        ctx->pc = 0x141920u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141924u;
        goto label_141924;
    }
    ctx->pc = 0x14191Cu;
    SET_GPR_U32(ctx, 31, 0x141924u);
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141924u; }
    }
    if (ctx->pc != 0x141924u) { return; }
    ctx->pc = 0x141924u;
label_141924:
    // 0x141924: 0x200202d
    ctx->pc = 0x141924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141928:
    // 0x141928: 0x220282d
    ctx->pc = 0x141928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14192c:
    // 0x14192c: 0xc042ca4
label_141930:
    if (ctx->pc == 0x141930u) {
        ctx->pc = 0x141930u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x141934u;
        goto label_141934;
    }
    ctx->pc = 0x14192Cu;
    SET_GPR_U32(ctx, 31, 0x141934u);
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x10B290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B290_0x10b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141934u; }
    }
    if (ctx->pc != 0x141934u) { return; }
    ctx->pc = 0x141934u;
label_141934:
    // 0x141934: 0x3c020026
    ctx->pc = 0x141934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_141938:
    // 0x141938: 0x244249f0
    ctx->pc = 0x141938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18928));
label_14193c:
    // 0x14193c: 0x8c430000
    ctx->pc = 0x14193cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141940:
    // 0x141940: 0x10600003
label_141944:
    if (ctx->pc == 0x141944u) {
        ctx->pc = 0x141944u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141948u;
        goto label_141948;
    }
    ctx->pc = 0x141940u;
    {
        const bool branch_taken_0x141940 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x141944u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141940) {
            ctx->pc = 0x141950u;
            goto label_141950;
        }
    }
    ctx->pc = 0x141948u;
label_141948:
    // 0x141948: 0x60f809
label_14194c:
    if (ctx->pc == 0x14194Cu) {
        ctx->pc = 0x14194Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x141950u;
        goto label_141950;
    }
    ctx->pc = 0x141948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141950u);
        ctx->pc = 0x14194Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1418A8u: goto label_1418a8;
            case 0x1418ACu: goto label_1418ac;
            case 0x1418B0u: goto label_1418b0;
            case 0x1418B4u: goto label_1418b4;
            case 0x1418B8u: goto label_1418b8;
            case 0x1418BCu: goto label_1418bc;
            case 0x1418C0u: goto label_1418c0;
            case 0x1418C4u: goto label_1418c4;
            case 0x1418C8u: goto label_1418c8;
            case 0x1418CCu: goto label_1418cc;
            case 0x1418D0u: goto label_1418d0;
            case 0x1418D4u: goto label_1418d4;
            case 0x1418D8u: goto label_1418d8;
            case 0x1418DCu: goto label_1418dc;
            case 0x1418E0u: goto label_1418e0;
            case 0x1418E4u: goto label_1418e4;
            case 0x1418E8u: goto label_1418e8;
            case 0x1418ECu: goto label_1418ec;
            case 0x1418F0u: goto label_1418f0;
            case 0x1418F4u: goto label_1418f4;
            case 0x1418F8u: goto label_1418f8;
            case 0x1418FCu: goto label_1418fc;
            case 0x141900u: goto label_141900;
            case 0x141904u: goto label_141904;
            case 0x141908u: goto label_141908;
            case 0x14190Cu: goto label_14190c;
            case 0x141910u: goto label_141910;
            case 0x141914u: goto label_141914;
            case 0x141918u: goto label_141918;
            case 0x14191Cu: goto label_14191c;
            case 0x141920u: goto label_141920;
            case 0x141924u: goto label_141924;
            case 0x141928u: goto label_141928;
            case 0x14192Cu: goto label_14192c;
            case 0x141930u: goto label_141930;
            case 0x141934u: goto label_141934;
            case 0x141938u: goto label_141938;
            case 0x14193Cu: goto label_14193c;
            case 0x141940u: goto label_141940;
            case 0x141944u: goto label_141944;
            case 0x141948u: goto label_141948;
            case 0x14194Cu: goto label_14194c;
            case 0x141950u: goto label_141950;
            case 0x141954u: goto label_141954;
            case 0x141958u: goto label_141958;
            case 0x14195Cu: goto label_14195c;
            case 0x141960u: goto label_141960;
            case 0x141964u: goto label_141964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141950u; }
            if (ctx->pc != 0x141950u) { return; }
        }
    }
    ctx->pc = 0x141950u;
label_141950:
    // 0x141950: 0xdfb00000
    ctx->pc = 0x141950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141954:
    // 0x141954: 0xdfb10008
    ctx->pc = 0x141954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141958:
    // 0x141958: 0xdfbf0010
    ctx->pc = 0x141958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14195c:
    // 0x14195c: 0x3e00008
label_141960:
    if (ctx->pc == 0x141960u) {
        ctx->pc = 0x141960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141964u;
        goto label_141964;
    }
    ctx->pc = 0x14195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1418A8u: goto label_1418a8;
            case 0x1418ACu: goto label_1418ac;
            case 0x1418B0u: goto label_1418b0;
            case 0x1418B4u: goto label_1418b4;
            case 0x1418B8u: goto label_1418b8;
            case 0x1418BCu: goto label_1418bc;
            case 0x1418C0u: goto label_1418c0;
            case 0x1418C4u: goto label_1418c4;
            case 0x1418C8u: goto label_1418c8;
            case 0x1418CCu: goto label_1418cc;
            case 0x1418D0u: goto label_1418d0;
            case 0x1418D4u: goto label_1418d4;
            case 0x1418D8u: goto label_1418d8;
            case 0x1418DCu: goto label_1418dc;
            case 0x1418E0u: goto label_1418e0;
            case 0x1418E4u: goto label_1418e4;
            case 0x1418E8u: goto label_1418e8;
            case 0x1418ECu: goto label_1418ec;
            case 0x1418F0u: goto label_1418f0;
            case 0x1418F4u: goto label_1418f4;
            case 0x1418F8u: goto label_1418f8;
            case 0x1418FCu: goto label_1418fc;
            case 0x141900u: goto label_141900;
            case 0x141904u: goto label_141904;
            case 0x141908u: goto label_141908;
            case 0x14190Cu: goto label_14190c;
            case 0x141910u: goto label_141910;
            case 0x141914u: goto label_141914;
            case 0x141918u: goto label_141918;
            case 0x14191Cu: goto label_14191c;
            case 0x141920u: goto label_141920;
            case 0x141924u: goto label_141924;
            case 0x141928u: goto label_141928;
            case 0x14192Cu: goto label_14192c;
            case 0x141930u: goto label_141930;
            case 0x141934u: goto label_141934;
            case 0x141938u: goto label_141938;
            case 0x14193Cu: goto label_14193c;
            case 0x141940u: goto label_141940;
            case 0x141944u: goto label_141944;
            case 0x141948u: goto label_141948;
            case 0x14194Cu: goto label_14194c;
            case 0x141950u: goto label_141950;
            case 0x141954u: goto label_141954;
            case 0x141958u: goto label_141958;
            case 0x14195Cu: goto label_14195c;
            case 0x141960u: goto label_141960;
            case 0x141964u: goto label_141964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141964u;
label_141964:
    // 0x141964: 0x0
    ctx->pc = 0x141964u;
    // NOP
}
