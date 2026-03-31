#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE570
// Address: 0x1ce570 - 0x1ce700
void sub_001CE570_0x1ce570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce570u;

    // 0x1ce570: 0x27bdff90
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ce574: 0x282d
    ctx->pc = 0x1ce574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce578: 0xffbf0060
    ctx->pc = 0x1ce578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ce57c: 0x24060140
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ce580: 0x7fb50050
    ctx->pc = 0x1ce580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ce584: 0x7fb40040
    ctx->pc = 0x1ce584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce588: 0x80a82d
    ctx->pc = 0x1ce588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce58c: 0x7fb30030
    ctx->pc = 0x1ce58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce590: 0x3c040034
    ctx->pc = 0x1ce590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1ce594: 0x7fb20020
    ctx->pc = 0x1ce594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce598: 0x24841500
    ctx->pc = 0x1ce598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5376));
    // 0x1ce59c: 0x7fb10010
    ctx->pc = 0x1ce59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce5a0: 0xc041f1a
    ctx->pc = 0x1CE5A0u;
    SET_GPR_U32(ctx, 31, 0x1CE5A8u);
    ctx->pc = 0x1CE5A4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5A8u; }
    }
    if (ctx->pc != 0x1CE5A8u) { return; }
    ctx->pc = 0x1CE5A8u;
    // 0x1ce5a8: 0x3c040034
    ctx->pc = 0x1ce5a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1ce5ac: 0x282d
    ctx->pc = 0x1ce5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5b0: 0x24841430
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5168));
    // 0x1ce5b4: 0xc041f1a
    ctx->pc = 0x1CE5B4u;
    SET_GPR_U32(ctx, 31, 0x1CE5BCu);
    ctx->pc = 0x1CE5B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE5BCu; }
    }
    if (ctx->pc != 0x1CE5BCu) { return; }
    ctx->pc = 0x1CE5BCu;
    // 0x1ce5bc: 0x8ea30014
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1ce5c0: 0x3c010034
    ctx->pc = 0x1ce5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ce5c4: 0x3c020001
    ctx->pc = 0x1ce5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1ce5c8: 0x3c130034
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x1ce5cc: 0x3c120034
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x1ce5d0: 0x34424680
    ctx->pc = 0x1ce5d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 18048));
    // 0x1ce5d4: 0x26731430
    ctx->pc = 0x1ce5d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 5168));
    // 0x1ce5d8: 0x26521500
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 5376));
    // 0x1ce5dc: 0xa02d
    ctx->pc = 0x1ce5dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5e0: 0xac2314f0
    ctx->pc = 0x1ce5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5360), GPR_U32(ctx, 3));
    // 0x1ce5e4: 0x3c010034
    ctx->pc = 0x1ce5e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ce5e8: 0x8ea30014
    ctx->pc = 0x1ce5e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1ce5ec: 0x8c3114f0
    ctx->pc = 0x1ce5ecu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 5360)));
    // 0x1ce5f0: 0x628021
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce5f4:
    // 0x1ce5f4: 0x260202d
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5f8: 0x282d
    ctx->pc = 0x1ce5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5fc: 0xc041f1a
    ctx->pc = 0x1CE5FCu;
    SET_GPR_U32(ctx, 31, 0x1CE604u);
    ctx->pc = 0x1CE600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE604u; }
    }
    if (ctx->pc != 0x1CE604u) { return; }
    ctx->pc = 0x1CE604u;
    // 0x1ce604: 0x220202d
    ctx->pc = 0x1ce604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce608: 0x282d
    ctx->pc = 0x1ce608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce60c: 0xc041f1a
    ctx->pc = 0x1CE60Cu;
    SET_GPR_U32(ctx, 31, 0x1CE614u);
    ctx->pc = 0x1CE610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5224));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE614u; }
    }
    if (ctx->pc != 0x1CE614u) { return; }
    ctx->pc = 0x1CE614u;
    // 0x1ce614: 0x26220820
    ctx->pc = 0x1ce614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2080));
    // 0x1ce618: 0x26230a20
    ctx->pc = 0x1ce618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2592));
    // 0x1ce61c: 0xae220000
    ctx->pc = 0x1ce61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ce620: 0x202d
    ctx->pc = 0x1ce620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce624: 0x26220c20
    ctx->pc = 0x1ce624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 3104));
    // 0x1ce628: 0xae230004
    ctx->pc = 0x1ce628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ce62c: 0xae220818
    ctx->pc = 0x1ce62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    // 0x1ce630: 0xae300808
    ctx->pc = 0x1ce630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2056), GPR_U32(ctx, 16));
    // 0x1ce634: 0xa2740001
    ctx->pc = 0x1ce634u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x1ce638: 0x26101300
    ctx->pc = 0x1ce638u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4864));
    // 0x1ce63c: 0xae710004
    ctx->pc = 0x1ce63cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1ce640: 0xa254000e
    ctx->pc = 0x1ce640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 20));
    // 0x1ce644: 0x2403ffff
    ctx->pc = 0x1ce644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ce648:
    // 0x1ce648: 0x41040
    ctx->pc = 0x1ce648u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ce64c: 0x2421021
    ctx->pc = 0x1ce64cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ce650: 0x24840001
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce654: 0xa4430002
    ctx->pc = 0x1ce654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce658: 0x28820006
    ctx->pc = 0x1ce658u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
    // 0x1ce65c: 0x1440fffa
    ctx->pc = 0x1CE65Cu;
    {
        const bool branch_taken_0x1ce65c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce65c) {
            ctx->pc = 0x1CE648u;
            goto label_1ce648;
        }
    }
    ctx->pc = 0x1CE664u;
    // 0x1ce664: 0x26940001
    ctx->pc = 0x1ce664u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ce668: 0x2673000c
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
    // 0x1ce66c: 0x2a820010
    ctx->pc = 0x1ce66cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 16));
    // 0x1ce670: 0x26311468
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 5224));
    // 0x1ce674: 0x1440ffdf
    ctx->pc = 0x1CE674u;
    {
        const bool branch_taken_0x1ce674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE678u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x1ce674) {
            ctx->pc = 0x1CE5F4u;
            goto label_1ce5f4;
        }
    }
    ctx->pc = 0x1CE67Cu;
    // 0x1ce67c: 0x3c040034
    ctx->pc = 0x1ce67cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1ce680: 0x282d
    ctx->pc = 0x1ce680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce684: 0x248413f0
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5104));
    // 0x1ce688: 0xc041f1a
    ctx->pc = 0x1CE688u;
    SET_GPR_U32(ctx, 31, 0x1CE690u);
    ctx->pc = 0x1CE68Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE690u; }
    }
    if (ctx->pc != 0x1CE690u) { return; }
    ctx->pc = 0x1CE690u;
    // 0x1ce690: 0x8ea30014
    ctx->pc = 0x1ce690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1ce694: 0x3c020002
    ctx->pc = 0x1ce694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ce698: 0x34427680
    ctx->pc = 0x1ce698u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 30336));
    // 0x1ce69c: 0x3c110034
    ctx->pc = 0x1ce69cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x1ce6a0: 0x263113f0
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 5104));
    // 0x1ce6a4: 0x802d
    ctx->pc = 0x1ce6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6a8: 0x629021
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce6ac:
    // 0x1ce6ac: 0xae320004
    ctx->pc = 0x1ce6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1ce6b0: 0x282d
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6b4: 0x8e240004
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce6b8: 0xc041f1a
    ctx->pc = 0x1CE6B8u;
    SET_GPR_U32(ctx, 31, 0x1CE6C0u);
    ctx->pc = 0x1CE6BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6C0u; }
    }
    if (ctx->pc != 0x1CE6C0u) { return; }
    ctx->pc = 0x1CE6C0u;
    // 0x1ce6c0: 0xa2300001
    ctx->pc = 0x1ce6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ce6c4: 0x26521000
    ctx->pc = 0x1ce6c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4096));
    // 0x1ce6c8: 0x26100001
    ctx->pc = 0x1ce6c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ce6cc: 0x2a030004
    ctx->pc = 0x1ce6ccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1ce6d0: 0x1460fff6
    ctx->pc = 0x1CE6D0u;
    {
        const bool branch_taken_0x1ce6d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE6D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1ce6d0) {
            ctx->pc = 0x1CE6ACu;
            goto label_1ce6ac;
        }
    }
    ctx->pc = 0x1CE6D8u;
    // 0x1ce6d8: 0xdfbf0060
    ctx->pc = 0x1ce6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce6dc: 0x7bb50050
    ctx->pc = 0x1ce6dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce6e0: 0x7bb40040
    ctx->pc = 0x1ce6e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce6e4: 0x7bb30030
    ctx->pc = 0x1ce6e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce6e8: 0x7bb20020
    ctx->pc = 0x1ce6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce6ec: 0x7bb10010
    ctx->pc = 0x1ce6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce6f0: 0x7bb00000
    ctx->pc = 0x1ce6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce6f4: 0x3e00008
    ctx->pc = 0x1CE6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE5F4u: goto label_1ce5f4;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE6ACu: goto label_1ce6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE6FCu;
    // 0x1ce6fc: 0x0
    ctx->pc = 0x1ce6fcu;
    // NOP
}
