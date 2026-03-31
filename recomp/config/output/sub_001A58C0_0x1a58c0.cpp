#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A58C0
// Address: 0x1a58c0 - 0x1a5aa0
void sub_001A58C0_0x1a58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a58c0u;

label_1a58c0:
    // 0x1a58c0: 0x27bdfff0
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a58c4: 0xa0482d
    ctx->pc = 0x1a58c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58c8: 0x80502d
    ctx->pc = 0x1a58c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58cc: 0xffbf0000
    ctx->pc = 0x1a58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a58d0: 0x24050010
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a58d4: 0xc069614
    ctx->pc = 0x1A58D4u;
    SET_GPR_U32(ctx, 31, 0x1A58DCu);
    ctx->pc = 0x1A58D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58DCu; }
    }
    if (ctx->pc != 0x1A58DCu) { return; }
    ctx->pc = 0x1A58DCu;
    // 0x1a58dc: 0x1425021
    ctx->pc = 0x1a58dcu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a58e0: 0x402d
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58e4: 0x1000000c
    ctx->pc = 0x1A58E4u;
    {
        const bool branch_taken_0x1a58e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A58E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a58e4) {
            ctx->pc = 0x1A5918u;
            goto label_1a5918;
        }
    }
    ctx->pc = 0x1A58ECu;
label_1a58ec:
    // 0x1a58ec: 0x94e20006
    ctx->pc = 0x1a58ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1a58f0: 0x102082a
    ctx->pc = 0x1a58f0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x1a58f4: 0x1020000b
    ctx->pc = 0x1A58F4u;
    {
        const bool branch_taken_0x1a58f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A58F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a58f4) {
            ctx->pc = 0x1A5924u;
            goto label_1a5924;
        }
    }
    ctx->pc = 0x1A58FCu;
    // 0x1a58fc: 0xc069614
    ctx->pc = 0x1A58FCu;
    SET_GPR_U32(ctx, 31, 0x1A5904u);
    ctx->pc = 0x1A5900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5904u; }
    }
    if (ctx->pc != 0x1A5904u) { return; }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x1425021
    ctx->pc = 0x1a5904u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a5908: 0x25080001
    ctx->pc = 0x1a5908u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a590c: 0x8cc20000
    ctx->pc = 0x1a590cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a5910: 0x1425021
    ctx->pc = 0x1a5910u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a5914: 0x140302d
    ctx->pc = 0x1a5914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a5918:
    // 0x1a5918: 0x109102a
    ctx->pc = 0x1a5918u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
    // 0x1a591c: 0x1440fff3
    ctx->pc = 0x1A591Cu;
    {
        const bool branch_taken_0x1a591c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a591c) {
            ctx->pc = 0x1A58ECu;
            goto label_1a58ec;
        }
    }
    ctx->pc = 0x1A5924u;
label_1a5924:
    // 0x1a5924: 0xdfbf0000
    ctx->pc = 0x1a5924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5928: 0xc0102d
    ctx->pc = 0x1a5928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a592c: 0x3e00008
    ctx->pc = 0x1A592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58C0u: goto label_1a58c0;
            case 0x1A58ECu: goto label_1a58ec;
            case 0x1A5918u: goto label_1a5918;
            case 0x1A5924u: goto label_1a5924;
            case 0x1A5958u: goto label_1a5958;
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5994u: goto label_1a5994;
            case 0x1A59B0u: goto label_1a59b0;
            case 0x1A59B4u: goto label_1a59b4;
            case 0x1A59D8u: goto label_1a59d8;
            case 0x1A59F4u: goto label_1a59f4;
            case 0x1A5A04u: goto label_1a5a04;
            case 0x1A5A34u: goto label_1a5a34;
            case 0x1A5A60u: goto label_1a5a60;
            case 0x1A5A64u: goto label_1a5a64;
            case 0x1A5A68u: goto label_1a5a68;
            case 0x1A5A8Cu: goto label_1a5a8c;
            case 0x1A5A90u: goto label_1a5a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5934u;
    // 0x1a5934: 0x0
    ctx->pc = 0x1a5934u;
    // NOP
    // 0x1a5938: 0x0
    ctx->pc = 0x1a5938u;
    // NOP
    // 0x1a593c: 0x0
    ctx->pc = 0x1a593cu;
    // NOP
    // 0x1a5940: 0x27bdffd0
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5944: 0xc0582d
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5948: 0xffbf0000
    ctx->pc = 0x1a5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a594c: 0x80602d
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5950: 0xc069630
    ctx->pc = 0x1A5950u;
    SET_GPR_U32(ctx, 31, 0x1A5958u);
    ctx->pc = 0x1A5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    goto label_1a58c0;
    ctx->pc = 0x1A5958u;
label_1a5958:
    // 0x1a5958: 0x90460011
    ctx->pc = 0x1a5958u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a595c: 0x40482d
    ctx->pc = 0x1a595cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5960: 0x120402d
    ctx->pc = 0x1a5960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5964: 0x28c10002
    ctx->pc = 0x1a5964u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 2));
    // 0x1a5968: 0x14200012
    ctx->pc = 0x1A5968u;
    {
        const bool branch_taken_0x1a5968 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A596Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1a5968) {
            ctx->pc = 0x1A59B4u;
            goto label_1a59b4;
        }
    }
    ctx->pc = 0x1A5970u;
    // 0x1a5970: 0x502d
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5974: 0x24c7ffff
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a5978: 0x10000006
    ctx->pc = 0x1A5978u;
    {
        const bool branch_taken_0x1a5978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A597Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 48));
        if (branch_taken_0x1a5978) {
            ctx->pc = 0x1A5994u;
            goto label_1a5994;
        }
    }
    ctx->pc = 0x1A5980u;
label_1a5980:
    // 0x1a5980: 0x821821
    ctx->pc = 0x1a5980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5984: 0x254a0001
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a5988: 0x5d1021
    ctx->pc = 0x1a5988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a598c: 0x24630010
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a5990: 0xac430010
    ctx->pc = 0x1a5990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_1a5994:
    // 0x1a5994: 0x147102a
    ctx->pc = 0x1a5994u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 7)));
    // 0x1a5998: 0x1440fff9
    ctx->pc = 0x1A5998u;
    {
        const bool branch_taken_0x1a5998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A599Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x1a5998) {
            ctx->pc = 0x1A5980u;
            goto label_1a5980;
        }
    }
    ctx->pc = 0x1A59A0u;
    // 0x1a59a0: 0x28c10005
    ctx->pc = 0x1a59a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 5));
    // 0x1a59a4: 0x10200002
    ctx->pc = 0x1A59A4u;
    {
        const bool branch_taken_0x1a59a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A59A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1a59a4) {
            ctx->pc = 0x1A59B0u;
            goto label_1a59b0;
        }
    }
    ctx->pc = 0x1A59ACu;
    // 0x1a59ac: 0x24020020
    ctx->pc = 0x1a59acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1a59b0:
    // 0x1a59b0: 0xa22821
    ctx->pc = 0x1a59b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a59b4:
    // 0x1a59b4: 0xc069614
    ctx->pc = 0x1A59B4u;
    SET_GPR_U32(ctx, 31, 0x1A59BCu);
    ctx->pc = 0x1A59B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59BCu; }
    }
    if (ctx->pc != 0x1A59BCu) { return; }
    ctx->pc = 0x1A59BCu;
    // 0x1a59bc: 0x1224821
    ctx->pc = 0x1a59bcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a59c0: 0x91020011
    ctx->pc = 0x1a59c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x1a59c4: 0x28410002
    ctx->pc = 0x1a59c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1a59c8: 0x1420000e
    ctx->pc = 0x1A59C8u;
    {
        const bool branch_taken_0x1a59c8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A59CCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a59c8) {
            ctx->pc = 0x1A5A04u;
            goto label_1a5a04;
        }
    }
    ctx->pc = 0x1A59D0u;
    // 0x1a59d0: 0x10000008
    ctx->pc = 0x1A59D0u;
    {
        const bool branch_taken_0x1a59d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A59D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a59d0) {
            ctx->pc = 0x1A59F4u;
            goto label_1a59f4;
        }
    }
    ctx->pc = 0x1A59D8u;
label_1a59d8:
    // 0x1a59d8: 0x5d1021
    ctx->pc = 0x1a59d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a59dc: 0x8c420010
    ctx->pc = 0x1a59dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a59e0: 0x8c450000
    ctx->pc = 0x1a59e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a59e4: 0xc069614
    ctx->pc = 0x1A59E4u;
    SET_GPR_U32(ctx, 31, 0x1A59ECu);
    ctx->pc = 0x1A59E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59ECu; }
    }
    if (ctx->pc != 0x1A59ECu) { return; }
    ctx->pc = 0x1A59ECu;
    // 0x1a59ec: 0xe23821
    ctx->pc = 0x1a59ecu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a59f0: 0x24c60001
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1a59f4:
    // 0x1a59f4: 0xcb102a
    ctx->pc = 0x1a59f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 11)));
    // 0x1a59f8: 0x1440fff7
    ctx->pc = 0x1A59F8u;
    {
        const bool branch_taken_0x1a59f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A59FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1a59f8) {
            ctx->pc = 0x1A59D8u;
            goto label_1a59d8;
        }
    }
    ctx->pc = 0x1A5A00u;
    // 0x1a5a00: 0x1274821
    ctx->pc = 0x1a5a00u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_1a5a04:
    // 0x1a5a04: 0xdfbf0000
    ctx->pc = 0x1a5a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a08: 0x120102d
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a0c: 0x3e00008
    ctx->pc = 0x1A5A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58C0u: goto label_1a58c0;
            case 0x1A58ECu: goto label_1a58ec;
            case 0x1A5918u: goto label_1a5918;
            case 0x1A5924u: goto label_1a5924;
            case 0x1A5958u: goto label_1a5958;
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5994u: goto label_1a5994;
            case 0x1A59B0u: goto label_1a59b0;
            case 0x1A59B4u: goto label_1a59b4;
            case 0x1A59D8u: goto label_1a59d8;
            case 0x1A59F4u: goto label_1a59f4;
            case 0x1A5A04u: goto label_1a5a04;
            case 0x1A5A34u: goto label_1a5a34;
            case 0x1A5A60u: goto label_1a5a60;
            case 0x1A5A64u: goto label_1a5a64;
            case 0x1A5A68u: goto label_1a5a68;
            case 0x1A5A8Cu: goto label_1a5a8c;
            case 0x1A5A90u: goto label_1a5a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A14u;
    // 0x1a5a14: 0x0
    ctx->pc = 0x1a5a14u;
    // NOP
    // 0x1a5a18: 0x0
    ctx->pc = 0x1a5a18u;
    // NOP
    // 0x1a5a1c: 0x0
    ctx->pc = 0x1a5a1cu;
    // NOP
    // 0x1a5a20: 0x27bdfff0
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5a24: 0x80582d
    ctx->pc = 0x1a5a24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a28: 0xffbf0000
    ctx->pc = 0x1a5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5a2c: 0xc069630
    ctx->pc = 0x1A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A34u);
    ctx->pc = 0x1A5A30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    goto label_1a58c0;
    ctx->pc = 0x1A5A34u;
label_1a5a34:
    // 0x1a5a34: 0x40382d
    ctx->pc = 0x1a5a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a38: 0x24050030
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a5a3c: 0x90420011
    ctx->pc = 0x1a5a3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a5a40: 0x28410002
    ctx->pc = 0x1a5a40u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1a5a44: 0x14200008
    ctx->pc = 0x1A5A44u;
    {
        const bool branch_taken_0x1a5a44 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a44) {
            ctx->pc = 0x1A5A68u;
            goto label_1a5a68;
        }
    }
    ctx->pc = 0x1A5A4Cu;
    // 0x1a5a4c: 0x28410005
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x1a5a50: 0x10200003
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A60u;
            goto label_1a5a60;
        }
    }
    ctx->pc = 0x1A5A58u;
    // 0x1a5a58: 0x10000002
    ctx->pc = 0x1A5A58u;
    {
        const bool branch_taken_0x1a5a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1a5a58) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A60u;
label_1a5a60:
    // 0x1a5a60: 0xa0102d
    ctx->pc = 0x1a5a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a64:
    // 0x1a5a64: 0xa22821
    ctx->pc = 0x1a5a64u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a5a68:
    // 0x1a5a68: 0xc069614
    ctx->pc = 0x1A5A68u;
    SET_GPR_U32(ctx, 31, 0x1A5A70u);
    ctx->pc = 0x1A5A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A70u; }
    }
    if (ctx->pc != 0x1A5A70u) { return; }
    ctx->pc = 0x1A5A70u;
    // 0x1a5a70: 0xe23821
    ctx->pc = 0x1a5a70u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a5a74: 0x8cc20004
    ctx->pc = 0x1a5a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a5a78: 0x10400004
    ctx->pc = 0x1A5A78u;
    {
        const bool branch_taken_0x1a5a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5a78) {
            ctx->pc = 0x1A5A8Cu;
            goto label_1a5a8c;
        }
    }
    ctx->pc = 0x1A5A80u;
    // 0x1a5a80: 0x8cc20008
    ctx->pc = 0x1a5a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a5a84: 0x10000002
    ctx->pc = 0x1A5A84u;
    {
        const bool branch_taken_0x1a5a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A88u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a5a84) {
            ctx->pc = 0x1A5A90u;
            goto label_1a5a90;
        }
    }
    ctx->pc = 0x1A5A8Cu;
label_1a5a8c:
    // 0x1a5a8c: 0x102d
    ctx->pc = 0x1a5a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a90:
    // 0x1a5a90: 0xdfbf0000
    ctx->pc = 0x1a5a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a94: 0x3e00008
    ctx->pc = 0x1A5A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58C0u: goto label_1a58c0;
            case 0x1A58ECu: goto label_1a58ec;
            case 0x1A5918u: goto label_1a5918;
            case 0x1A5924u: goto label_1a5924;
            case 0x1A5958u: goto label_1a5958;
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5994u: goto label_1a5994;
            case 0x1A59B0u: goto label_1a59b0;
            case 0x1A59B4u: goto label_1a59b4;
            case 0x1A59D8u: goto label_1a59d8;
            case 0x1A59F4u: goto label_1a59f4;
            case 0x1A5A04u: goto label_1a5a04;
            case 0x1A5A34u: goto label_1a5a34;
            case 0x1A5A60u: goto label_1a5a60;
            case 0x1A5A64u: goto label_1a5a64;
            case 0x1A5A68u: goto label_1a5a68;
            case 0x1A5A8Cu: goto label_1a5a8c;
            case 0x1A5A90u: goto label_1a5a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A9Cu;
    // 0x1a5a9c: 0x0
    ctx->pc = 0x1a5a9cu;
    // NOP
}
