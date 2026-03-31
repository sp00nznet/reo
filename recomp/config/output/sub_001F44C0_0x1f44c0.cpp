#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F44C0
// Address: 0x1f44c0 - 0x1f45b0
void sub_001F44C0_0x1f44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f44c0u;

    // 0x1f44c0: 0x27bdff90
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f44c4: 0xffbf0050
    ctx->pc = 0x1f44c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f44c8: 0x7fb40040
    ctx->pc = 0x1f44c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f44cc: 0x7fb30030
    ctx->pc = 0x1f44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f44d0: 0xa0a02d
    ctx->pc = 0x1f44d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44d4: 0x7fb20020
    ctx->pc = 0x1f44d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f44d8: 0x80982d
    ctx->pc = 0x1f44d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44dc: 0x7fb10010
    ctx->pc = 0x1f44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f44e0: 0xc0902d
    ctx->pc = 0x1f44e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44e4: 0x7fb00000
    ctx->pc = 0x1f44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f44e8: 0xe0882d
    ctx->pc = 0x1f44e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44ec: 0x16600003
    ctx->pc = 0x1F44ECu;
    {
        const bool branch_taken_0x1f44ec = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F44F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f44ec) {
            ctx->pc = 0x1F44FCu;
            goto label_1f44fc;
        }
    }
    ctx->pc = 0x1F44F4u;
    // 0x1f44f4: 0x10000024
    ctx->pc = 0x1F44F4u;
    {
        const bool branch_taken_0x1f44f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F44F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f44f4) {
            ctx->pc = 0x1F4588u;
            goto label_1f4588;
        }
    }
    ctx->pc = 0x1F44FCu;
label_1f44fc:
    // 0x1f44fc: 0x27a40060
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f4500: 0x282d
    ctx->pc = 0x1f4500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4504: 0xc041f1a
    ctx->pc = 0x1F4504u;
    SET_GPR_U32(ctx, 31, 0x1F450Cu);
    ctx->pc = 0x1F4508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F450Cu; }
    }
    if (ctx->pc != 0x1F450Cu) { return; }
    ctx->pc = 0x1F450Cu;
    // 0x1f450c: 0x3c010023
    ctx->pc = 0x1f450cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1f4510: 0xc042c56
    ctx->pc = 0x1F4510u;
    SET_GPR_U32(ctx, 31, 0x1F4518u);
    ctx->pc = 0x1F4514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 29744)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4518u; }
    }
    if (ctx->pc != 0x1F4518u) { return; }
    ctx->pc = 0x1F4518u;
    // 0x1f4518: 0x3c010023
    ctx->pc = 0x1f4518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1f451c: 0x40302d
    ctx->pc = 0x1f451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4520: 0x8c247430
    ctx->pc = 0x1f4520u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 29744)));
    // 0x1f4524: 0x27a50060
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f4528: 0xc07d0b0
    ctx->pc = 0x1F4528u;
    SET_GPR_U32(ctx, 31, 0x1F4530u);
    ctx->pc = 0x1F452Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1F42C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F42C0_0x1f42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4530u; }
    }
    if (ctx->pc != 0x1F4530u) { return; }
    ctx->pc = 0x1F4530u;
    // 0x1f4530: 0x328500ff
    ctx->pc = 0x1f4530u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 20), 255));
    // 0x1f4534: 0x1000000d
    ctx->pc = 0x1F4534u;
    {
        const bool branch_taken_0x1f4534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4538u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f4534) {
            ctx->pc = 0x1F456Cu;
            goto label_1f456c;
        }
    }
    ctx->pc = 0x1F453Cu;
label_1f453c:
    // 0x1f453c: 0x92640000
    ctx->pc = 0x1f453cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f4540: 0x2221821
    ctx->pc = 0x1f4540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f4544: 0x30c20007
    ctx->pc = 0x1f4544u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 7));
    // 0x1f4548: 0x5d1021
    ctx->pc = 0x1f4548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f454c: 0x24c60001
    ctx->pc = 0x1f454cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f4550: 0x90420060
    ctx->pc = 0x1f4550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1f4554: 0x831826
    ctx->pc = 0x1f4554u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f4558: 0x431026
    ctx->pc = 0x1f4558u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f455c: 0xa2620000
    ctx->pc = 0x1f455cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4560: 0x92620000
    ctx->pc = 0x1f4560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f4564: 0x2028021
    ctx->pc = 0x1f4564u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4568: 0x26730001
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1f456c:
    // 0x1f456c: 0xd2102a
    ctx->pc = 0x1f456cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 18)));
    // 0x1f4570: 0x1440fff2
    ctx->pc = 0x1F4570u;
    {
        const bool branch_taken_0x1f4570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4574u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x1f4570) {
            ctx->pc = 0x1F453Cu;
            goto label_1f453c;
        }
    }
    ctx->pc = 0x1F4578u;
    // 0x1f4578: 0x51200
    ctx->pc = 0x1f4578u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 8));
    // 0x1f457c: 0xa21021
    ctx->pc = 0x1f457cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f4580: 0x2028021
    ctx->pc = 0x1f4580u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4584: 0x32027fff
    ctx->pc = 0x1f4584u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32767));
label_1f4588:
    // 0x1f4588: 0xdfbf0050
    ctx->pc = 0x1f4588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f458c: 0x7bb40040
    ctx->pc = 0x1f458cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4590: 0x7bb30030
    ctx->pc = 0x1f4590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4594: 0x7bb20020
    ctx->pc = 0x1f4594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4598: 0x7bb10010
    ctx->pc = 0x1f4598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f459c: 0x7bb00000
    ctx->pc = 0x1f459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45a0: 0x3e00008
    ctx->pc = 0x1F45A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F44FCu: goto label_1f44fc;
            case 0x1F453Cu: goto label_1f453c;
            case 0x1F456Cu: goto label_1f456c;
            case 0x1F4588u: goto label_1f4588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F45A8u;
    // 0x1f45a8: 0x0
    ctx->pc = 0x1f45a8u;
    // NOP
    // 0x1f45ac: 0x0
    ctx->pc = 0x1f45acu;
    // NOP
}
