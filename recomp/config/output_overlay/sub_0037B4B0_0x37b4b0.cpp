#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037B4B0
// Address: 0x37b4b0 - 0x37b900
void sub_0037B4B0_0x37b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37b4b0u;

label_37b4b0:
    // 0x37b4b0: 0x27bdff60
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37b4b4: 0xffbf0090
    ctx->pc = 0x37b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x37b4b8: 0x7fbe0080
    ctx->pc = 0x37b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37b4bc: 0x7fb70070
    ctx->pc = 0x37b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37b4c0: 0x7fb60060
    ctx->pc = 0x37b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37b4c4: 0x7fb50050
    ctx->pc = 0x37b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37b4c8: 0x80b02d
    ctx->pc = 0x37b4c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4cc: 0x7fb40040
    ctx->pc = 0x37b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37b4d0: 0xa0a82d
    ctx->pc = 0x37b4d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4d4: 0x7fb30030
    ctx->pc = 0x37b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37b4d8: 0xa02d
    ctx->pc = 0x37b4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4dc: 0x7fb20020
    ctx->pc = 0x37b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37b4e0: 0x7fb10010
    ctx->pc = 0x37b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b4e4: 0x7fb00000
    ctx->pc = 0x37b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b4e8: 0x4c10003
    ctx->pc = 0x37B4E8u;
    {
        const bool branch_taken_0x37b4e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x37B4ECu;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 4));
        if (branch_taken_0x37b4e8) {
            ctx->pc = 0x37B4F8u;
            goto label_37b4f8;
        }
    }
    ctx->pc = 0x37B4F0u;
    // 0x37b4f0: 0x24c3000f
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 15));
    // 0x37b4f4: 0x38103
    ctx->pc = 0x37b4f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
label_37b4f8:
    // 0x37b4f8: 0x108900
    ctx->pc = 0x37b4f8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 4));
    // 0x37b4fc: 0x7b903
    ctx->pc = 0x37b4fcu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 4));
    // 0x37b500: 0x2301823
    ctx->pc = 0x37b500u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x37b504: 0x4e10019
    ctx->pc = 0x37B504u;
    {
        const bool branch_taken_0x37b504 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x37B508u;
        SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x37b504) {
            ctx->pc = 0x37B56Cu;
            goto label_37b56c;
        }
    }
    ctx->pc = 0x37B50Cu;
    // 0x37b50c: 0x24e3000f
    ctx->pc = 0x37b50cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 15));
    // 0x37b510: 0x3b903
    ctx->pc = 0x37b510u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 4));
    // 0x37b514: 0x10000016
    ctx->pc = 0x37B514u;
    {
        const bool branch_taken_0x37b514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B518u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 23)));
        if (branch_taken_0x37b514) {
            ctx->pc = 0x37B570u;
            goto label_37b570;
        }
    }
    ctx->pc = 0x37B51Cu;
label_37b51c:
    // 0x37b51c: 0x1000000e
    ctx->pc = 0x37B51Cu;
    {
        const bool branch_taken_0x37b51c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B520u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37b51c) {
            ctx->pc = 0x37B558u;
            goto label_37b558;
        }
    }
    ctx->pc = 0x37B524u;
    // 0x37b524: 0x902d
    ctx->pc = 0x37b524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b528:
    // 0x37b528: 0x2511018
    ctx->pc = 0x37b528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x37b52c: 0x2a0202d
    ctx->pc = 0x37b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b530: 0x24060001
    ctx->pc = 0x37b530u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b534: 0x21080
    ctx->pc = 0x37b534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b538: 0xc0626f8
    ctx->pc = 0x37B538u;
    SET_GPR_U32(ctx, 31, 0x37B540u);
    ctx->pc = 0x37B53Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->pc = 0x189BE0u;
    {
        auto targetFn = runtime->lookupFunction(0x189BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B540u; }
        if (ctx->pc != 0x37B540u) { return; }
    }
    ctx->pc = 0x37B540u;
    // 0x37b540: 0x26520001
    ctx->pc = 0x37b540u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x37b544: 0x2a430010
    ctx->pc = 0x37b544u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 16));
    // 0x37b548: 0x1460fff7
    ctx->pc = 0x37B548u;
    {
        const bool branch_taken_0x37b548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B54Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 64));
        if (branch_taken_0x37b548) {
            ctx->pc = 0x37B528u;
            goto label_37b528;
        }
    }
    ctx->pc = 0x37B550u;
    // 0x37b550: 0x26d60040
    ctx->pc = 0x37b550u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 64));
    // 0x37b554: 0x26730001
    ctx->pc = 0x37b554u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_37b558:
    // 0x37b558: 0x270182a
    ctx->pc = 0x37b558u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
    // 0x37b55c: 0x1460fff2
    ctx->pc = 0x37B55Cu;
    {
        const bool branch_taken_0x37b55c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B560u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37b55c) {
            ctx->pc = 0x37B528u;
            goto label_37b528;
        }
    }
    ctx->pc = 0x37B564u;
    // 0x37b564: 0x2deb021
    ctx->pc = 0x37b564u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x37b568: 0x26940001
    ctx->pc = 0x37b568u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_37b56c:
    // 0x37b56c: 0x297182a
    ctx->pc = 0x37b56cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 23)));
label_37b570:
    // 0x37b570: 0x1460ffea
    ctx->pc = 0x37B570u;
    {
        const bool branch_taken_0x37b570 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37b570) {
            ctx->pc = 0x37B51Cu;
            goto label_37b51c;
        }
    }
    ctx->pc = 0x37B578u;
    // 0x37b578: 0xdfbf0090
    ctx->pc = 0x37b578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37b57c: 0x7bbe0080
    ctx->pc = 0x37b57cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37b580: 0x7bb70070
    ctx->pc = 0x37b580u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37b584: 0x7bb60060
    ctx->pc = 0x37b584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37b588: 0x7bb50050
    ctx->pc = 0x37b588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37b58c: 0x7bb40040
    ctx->pc = 0x37b58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b590: 0x7bb30030
    ctx->pc = 0x37b590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b594: 0x7bb20020
    ctx->pc = 0x37b594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b598: 0x7bb10010
    ctx->pc = 0x37b598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b59c: 0x7bb00000
    ctx->pc = 0x37b59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b5a0: 0x3e00008
    ctx->pc = 0x37B5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B5A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B4B0u: goto label_37b4b0;
            case 0x37B4F8u: goto label_37b4f8;
            case 0x37B51Cu: goto label_37b51c;
            case 0x37B528u: goto label_37b528;
            case 0x37B558u: goto label_37b558;
            case 0x37B56Cu: goto label_37b56c;
            case 0x37B570u: goto label_37b570;
            case 0x37B610u: goto label_37b610;
            case 0x37B724u: goto label_37b724;
            case 0x37B774u: goto label_37b774;
            case 0x37B7F0u: goto label_37b7f0;
            case 0x37B80Cu: goto label_37b80c;
            case 0x37B890u: goto label_37b890;
            case 0x37B8ACu: goto label_37b8ac;
            case 0x37B8B8u: goto label_37b8b8;
            case 0x37B8D0u: goto label_37b8d0;
            case 0x37B8E4u: goto label_37b8e4;
            case 0x37B8E8u: goto label_37b8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B5A8u;
    // 0x37b5a8: 0x0
    ctx->pc = 0x37b5a8u;
    // NOP
    // 0x37b5ac: 0x0
    ctx->pc = 0x37b5acu;
    // NOP
    // 0x37b5b0: 0x27bdffb0
    ctx->pc = 0x37b5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37b5b4: 0x3083ffff
    ctx->pc = 0x37b5b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x37b5b8: 0xffbf0040
    ctx->pc = 0x37b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37b5bc: 0x2464ffff
    ctx->pc = 0x37b5bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37b5c0: 0x7fb30030
    ctx->pc = 0x37b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37b5c4: 0x418c0
    ctx->pc = 0x37b5c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37b5c8: 0x7fb20020
    ctx->pc = 0x37b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37b5cc: 0x3c02002a
    ctx->pc = 0x37b5ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x37b5d0: 0x7fb10010
    ctx->pc = 0x37b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b5d4: 0x641823
    ctx->pc = 0x37b5d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37b5d8: 0x7fb00000
    ctx->pc = 0x37b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b5dc: 0x24428680
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936192));
    // 0x37b5e0: 0x318c0
    ctx->pc = 0x37b5e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x37b5e4: 0xa0902d
    ctx->pc = 0x37b5e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5e8: 0x439821
    ctx->pc = 0x37b5e8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b5ec: 0xc0882d
    ctx->pc = 0x37b5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5f0: 0x8e640024
    ctx->pc = 0x37b5f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x37b5f4: 0xc063728
    ctx->pc = 0x37B5F4u;
    SET_GPR_U32(ctx, 31, 0x37B5FCu);
    ctx->pc = 0x37B5F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCA0u;
    {
        auto targetFn = runtime->lookupFunction(0x18DCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B5FCu; }
        if (ctx->pc != 0x37B5FCu) { return; }
    }
    ctx->pc = 0x37B5FCu;
    // 0x37b5fc: 0x40202d
    ctx->pc = 0x37b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b600: 0x240282d
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b604: 0x220302d
    ctx->pc = 0x37b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b608: 0xc0ded2c
    ctx->pc = 0x37B608u;
    SET_GPR_U32(ctx, 31, 0x37B610u);
    ctx->pc = 0x37B60Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x37B4B0u;
    goto label_37b4b0;
    ctx->pc = 0x37B610u;
label_37b610:
    // 0x37b610: 0xc067bb4
    ctx->pc = 0x37B610u;
    SET_GPR_U32(ctx, 31, 0x37B618u);
    ctx->pc = 0x37B614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EED0u;
    {
        auto targetFn = runtime->lookupFunction(0x19EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B618u; }
        if (ctx->pc != 0x37B618u) { return; }
    }
    ctx->pc = 0x37B618u;
    // 0x37b618: 0xdfbf0040
    ctx->pc = 0x37b618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b61c: 0x7bb30030
    ctx->pc = 0x37b61cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b620: 0x7bb20020
    ctx->pc = 0x37b620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b624: 0x7bb10010
    ctx->pc = 0x37b624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b628: 0x7bb00000
    ctx->pc = 0x37b628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b62c: 0x3e00008
    ctx->pc = 0x37B62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B4B0u: goto label_37b4b0;
            case 0x37B4F8u: goto label_37b4f8;
            case 0x37B51Cu: goto label_37b51c;
            case 0x37B528u: goto label_37b528;
            case 0x37B558u: goto label_37b558;
            case 0x37B56Cu: goto label_37b56c;
            case 0x37B570u: goto label_37b570;
            case 0x37B610u: goto label_37b610;
            case 0x37B724u: goto label_37b724;
            case 0x37B774u: goto label_37b774;
            case 0x37B7F0u: goto label_37b7f0;
            case 0x37B80Cu: goto label_37b80c;
            case 0x37B890u: goto label_37b890;
            case 0x37B8ACu: goto label_37b8ac;
            case 0x37B8B8u: goto label_37b8b8;
            case 0x37B8D0u: goto label_37b8d0;
            case 0x37B8E4u: goto label_37b8e4;
            case 0x37B8E8u: goto label_37b8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B634u;
    // 0x37b634: 0x0
    ctx->pc = 0x37b634u;
    // NOP
    // 0x37b638: 0x0
    ctx->pc = 0x37b638u;
    // NOP
    // 0x37b63c: 0x0
    ctx->pc = 0x37b63cu;
    // NOP
    // 0x37b640: 0x27bdffd0
    ctx->pc = 0x37b640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b644: 0x3c010057
    ctx->pc = 0x37b644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b648: 0xffbf0020
    ctx->pc = 0x37b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37b64c: 0x7fb10010
    ctx->pc = 0x37b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b650: 0x7fb00000
    ctx->pc = 0x37b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b654: 0x80882d
    ctx->pc = 0x37b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b658: 0xa0802d
    ctx->pc = 0x37b658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b65c: 0xc0de760
    ctx->pc = 0x37B65Cu;
    SET_GPR_U32(ctx, 31, 0x37B664u);
    ctx->pc = 0x37B660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949592), GPR_U32(ctx, 0));
    ctx->pc = 0x379D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379D80_0x379d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B664u; }
    }
    if (ctx->pc != 0x37B664u) { return; }
    ctx->pc = 0x37B664u;
    // 0x37b664: 0x3c020034
    ctx->pc = 0x37b664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x37b668: 0x3c010034
    ctx->pc = 0x37b668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b66c: 0x24420a40
    ctx->pc = 0x37b66cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2624));
    // 0x37b670: 0x282d
    ctx->pc = 0x37b670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b674: 0xac220a20
    ctx->pc = 0x37b674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
    // 0x37b678: 0x24060030
    ctx->pc = 0x37b678u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b67c: 0x3c010034
    ctx->pc = 0x37b67cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b680: 0x8c220a20
    ctx->pc = 0x37b680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b684: 0xa451008c
    ctx->pc = 0x37b684u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 140), (uint16_t)GPR_U32(ctx, 17));
    // 0x37b688: 0x3c010034
    ctx->pc = 0x37b688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b68c: 0x8c220a20
    ctx->pc = 0x37b68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b690: 0xa450008e
    ctx->pc = 0x37b690u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 142), (uint16_t)GPR_U32(ctx, 16));
    // 0x37b694: 0x3c010034
    ctx->pc = 0x37b694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b698: 0x8c220a20
    ctx->pc = 0x37b698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b69c: 0x24500004
    ctx->pc = 0x37b69cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4));
    // 0x37b6a0: 0xc041f1a
    ctx->pc = 0x37B6A0u;
    SET_GPR_U32(ctx, 31, 0x37B6A8u);
    ctx->pc = 0x37B6A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B6A8u; }
        if (ctx->pc != 0x37B6A8u) { return; }
    }
    ctx->pc = 0x37B6A8u;
    // 0x37b6a8: 0x24030011
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x37b6ac: 0x24020003
    ctx->pc = 0x37b6acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b6b0: 0xae030020
    ctx->pc = 0x37b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x37b6b4: 0x3c010057
    ctx->pc = 0x37b6b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b6b8: 0xae020000
    ctx->pc = 0x37b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b6bc: 0x24030002
    ctx->pc = 0x37b6bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b6c0: 0x3c02002d
    ctx->pc = 0x37b6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x37b6c4: 0xae030010
    ctx->pc = 0x37b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x37b6c8: 0x3442c6c0
    ctx->pc = 0x37b6c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50880));
    // 0x37b6cc: 0x200202d
    ctx->pc = 0x37b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b6d0: 0xae020004
    ctx->pc = 0x37b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b6d4: 0x8c22bae8
    ctx->pc = 0x37b6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b6d8: 0x94420008
    ctx->pc = 0x37b6d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37b6dc: 0x3c010057
    ctx->pc = 0x37b6dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b6e0: 0xae020008
    ctx->pc = 0x37b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x37b6e4: 0x8c22bae8
    ctx->pc = 0x37b6e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b6e8: 0x9442000a
    ctx->pc = 0x37b6e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x37b6ec: 0xae02000c
    ctx->pc = 0x37b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37b6f0: 0xc056fd2
    ctx->pc = 0x37B6F0u;
    SET_GPR_U32(ctx, 31, 0x37B6F8u);
    ctx->pc = 0x37B6F4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x15BF48u;
    {
        auto targetFn = runtime->lookupFunction(0x15BF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B6F8u; }
        if (ctx->pc != 0x37B6F8u) { return; }
    }
    ctx->pc = 0x37B6F8u;
    // 0x37b6f8: 0xae02001c
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x37b6fc: 0x3c010057
    ctx->pc = 0x37b6fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b700: 0x8c24bae8
    ctx->pc = 0x37b700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b704: 0x8e03001c
    ctx->pc = 0x37b704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x37b708: 0x8c820004
    ctx->pc = 0x37b708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37b70c: 0x62102b
    ctx->pc = 0x37b70cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b710: 0x14400004
    ctx->pc = 0x37B710u;
    {
        const bool branch_taken_0x37b710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B714u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37b710) {
            ctx->pc = 0x37B724u;
            goto label_37b724;
        }
    }
    ctx->pc = 0x37B718u;
    // 0x37b718: 0x2402ffff
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b71c: 0x1000003b
    ctx->pc = 0x37B71Cu;
    {
        const bool branch_taken_0x37b71c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B720u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
        if (branch_taken_0x37b71c) {
            ctx->pc = 0x37B80Cu;
            goto label_37b80c;
        }
    }
    ctx->pc = 0x37B724u;
label_37b724:
    // 0x37b724: 0x8c820000
    ctx->pc = 0x37b724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b728: 0x3c010034
    ctx->pc = 0x37b728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b72c: 0xac220a28
    ctx->pc = 0x37b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2600), GPR_U32(ctx, 2));
    // 0x37b730: 0x3c010034
    ctx->pc = 0x37b730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b734: 0x8c220a28
    ctx->pc = 0x37b734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x37b738: 0xae020018
    ctx->pc = 0x37b738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x37b73c: 0x3c010057
    ctx->pc = 0x37b73cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b740: 0x8c22bae8
    ctx->pc = 0x37b740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b744: 0x9445000a
    ctx->pc = 0x37b744u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x37b748: 0xc0de4bc
    ctx->pc = 0x37B748u;
    SET_GPR_U32(ctx, 31, 0x37B750u);
    ctx->pc = 0x37B74Cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x3792F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003792F0_0x3792f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B750u; }
    }
    if (ctx->pc != 0x37B750u) { return; }
    ctx->pc = 0x37B750u;
    // 0x37b750: 0x3c010032
    ctx->pc = 0x37b750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37b754: 0x24020002
    ctx->pc = 0x37b754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b758: 0x90234405
    ctx->pc = 0x37b758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x37b75c: 0x10620005
    ctx->pc = 0x37B75Cu;
    {
        const bool branch_taken_0x37b75c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x37B760u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x37b75c) {
            ctx->pc = 0x37B774u;
            goto label_37b774;
        }
    }
    ctx->pc = 0x37B764u;
    // 0x37b764: 0x3c010057
    ctx->pc = 0x37b764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b768: 0x2402ffff
    ctx->pc = 0x37b768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b76c: 0x10000027
    ctx->pc = 0x37B76Cu;
    {
        const bool branch_taken_0x37b76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B770u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
        if (branch_taken_0x37b76c) {
            ctx->pc = 0x37B80Cu;
            goto label_37b80c;
        }
    }
    ctx->pc = 0x37B774u;
label_37b774:
    // 0x37b774: 0x24020001
    ctx->pc = 0x37b774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b778: 0xa020ae0c
    ctx->pc = 0x37b778u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946316), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b77c: 0x3c010032
    ctx->pc = 0x37b77cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37b780: 0xa02243d5
    ctx->pc = 0x37b780u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17365), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b784: 0x3c010057
    ctx->pc = 0x37b784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b788: 0xac20bae0
    ctx->pc = 0x37b788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949600), GPR_U32(ctx, 0));
    // 0x37b78c: 0x3c010057
    ctx->pc = 0x37b78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b790: 0x8c22bae8
    ctx->pc = 0x37b790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b794: 0xac400018
    ctx->pc = 0x37b794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x37b798: 0x3c010057
    ctx->pc = 0x37b798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b79c: 0x8c22bae8
    ctx->pc = 0x37b79cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37b7a0: 0x94450008
    ctx->pc = 0x37b7a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37b7a4: 0x9446000a
    ctx->pc = 0x37b7a4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x37b7a8: 0xc0de73c
    ctx->pc = 0x37B7A8u;
    SET_GPR_U32(ctx, 31, 0x37B7B0u);
    ctx->pc = 0x37B7ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379CF0_0x379cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7B0u; }
    }
    if (ctx->pc != 0x37B7B0u) { return; }
    ctx->pc = 0x37B7B0u;
    // 0x37b7b0: 0xc057320
    ctx->pc = 0x37B7B0u;
    SET_GPR_U32(ctx, 31, 0x37B7B8u);
    ctx->pc = 0x37B7B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15CC80u;
    {
        auto targetFn = runtime->lookupFunction(0x15CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7B8u; }
        if (ctx->pc != 0x37B7B8u) { return; }
    }
    ctx->pc = 0x37B7B8u;
    // 0x37b7b8: 0x3c010034
    ctx->pc = 0x37b7b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b7bc: 0x8c230a20
    ctx->pc = 0x37b7bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b7c0: 0xac620000
    ctx->pc = 0x37b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37b7c4: 0x3c010034
    ctx->pc = 0x37b7c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b7c8: 0x8c240a20
    ctx->pc = 0x37b7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b7cc: 0x8c820000
    ctx->pc = 0x37b7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b7d0: 0x14400007
    ctx->pc = 0x37B7D0u;
    {
        const bool branch_taken_0x37b7d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B7D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37b7d0) {
            ctx->pc = 0x37B7F0u;
            goto label_37b7f0;
        }
    }
    ctx->pc = 0x37B7D8u;
    // 0x37b7d8: 0x3c010057
    ctx->pc = 0x37b7d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b7dc: 0x2402ffff
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b7e0: 0xac20bae8
    ctx->pc = 0x37b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
    // 0x37b7e4: 0x3c010032
    ctx->pc = 0x37b7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37b7e8: 0x10000008
    ctx->pc = 0x37B7E8u;
    {
        const bool branch_taken_0x37b7e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B7ECu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17365), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x37b7e8) {
            ctx->pc = 0x37B80Cu;
            goto label_37b80c;
        }
    }
    ctx->pc = 0x37B7F0u;
label_37b7f0:
    // 0x37b7f0: 0x3c010034
    ctx->pc = 0x37b7f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b7f4: 0xa0830091
    ctx->pc = 0x37b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 145), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b7f8: 0x102d
    ctx->pc = 0x37b7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7fc: 0x8c230a20
    ctx->pc = 0x37b7fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b800: 0xa4600096
    ctx->pc = 0x37b800u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x37b804: 0x3c010057
    ctx->pc = 0x37b804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37b808: 0xa020baf0
    ctx->pc = 0x37b808u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949616), (uint8_t)GPR_U32(ctx, 0));
label_37b80c:
    // 0x37b80c: 0xdfbf0020
    ctx->pc = 0x37b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b810: 0x7bb10010
    ctx->pc = 0x37b810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b814: 0x7bb00000
    ctx->pc = 0x37b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b818: 0x3e00008
    ctx->pc = 0x37B818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B81Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B4B0u: goto label_37b4b0;
            case 0x37B4F8u: goto label_37b4f8;
            case 0x37B51Cu: goto label_37b51c;
            case 0x37B528u: goto label_37b528;
            case 0x37B558u: goto label_37b558;
            case 0x37B56Cu: goto label_37b56c;
            case 0x37B570u: goto label_37b570;
            case 0x37B610u: goto label_37b610;
            case 0x37B724u: goto label_37b724;
            case 0x37B774u: goto label_37b774;
            case 0x37B7F0u: goto label_37b7f0;
            case 0x37B80Cu: goto label_37b80c;
            case 0x37B890u: goto label_37b890;
            case 0x37B8ACu: goto label_37b8ac;
            case 0x37B8B8u: goto label_37b8b8;
            case 0x37B8D0u: goto label_37b8d0;
            case 0x37B8E4u: goto label_37b8e4;
            case 0x37B8E8u: goto label_37b8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B820u;
    // 0x37b820: 0x27bdffe0
    ctx->pc = 0x37b820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b824: 0xffbf0010
    ctx->pc = 0x37b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b828: 0x7fb00000
    ctx->pc = 0x37b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b82c: 0x80802d
    ctx->pc = 0x37b82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b830: 0xc06e0a8
    ctx->pc = 0x37B830u;
    SET_GPR_U32(ctx, 31, 0x37B838u);
    ctx->pc = 0x37B834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B838u; }
        if (ctx->pc != 0x37B838u) { return; }
    }
    ctx->pc = 0x37B838u;
    // 0x37b838: 0x1440002a
    ctx->pc = 0x37B838u;
    {
        const bool branch_taken_0x37b838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B83Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x37b838) {
            ctx->pc = 0x37B8E4u;
            goto label_37b8e4;
        }
    }
    ctx->pc = 0x37B840u;
    // 0x37b840: 0x3c010032
    ctx->pc = 0x37b840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37b844: 0x3c020034
    ctx->pc = 0x37b844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x37b848: 0xa02343fc
    ctx->pc = 0x37b848u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17404), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b84c: 0x24420a40
    ctx->pc = 0x37b84cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2624));
    // 0x37b850: 0x3c010034
    ctx->pc = 0x37b850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b854: 0xac220a20
    ctx->pc = 0x37b854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
    // 0x37b858: 0x3c010034
    ctx->pc = 0x37b858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b85c: 0x8c220a20
    ctx->pc = 0x37b85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b860: 0x8c420000
    ctx->pc = 0x37b860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b864: 0x1440000a
    ctx->pc = 0x37B864u;
    {
        const bool branch_taken_0x37b864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B868u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x37b864) {
            ctx->pc = 0x37B890u;
            goto label_37b890;
        }
    }
    ctx->pc = 0x37B86Cu;
    // 0x37b86c: 0xc0de7b4
    ctx->pc = 0x37B86Cu;
    SET_GPR_U32(ctx, 31, 0x37B874u);
    ctx->pc = 0x37B870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 448));
    ctx->pc = 0x379ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379ED0_0x379ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B874u; }
    }
    if (ctx->pc != 0x37B874u) { return; }
    ctx->pc = 0x37B874u;
    // 0x37b874: 0x3c010034
    ctx->pc = 0x37b874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37b878: 0x8c230a20
    ctx->pc = 0x37b878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b87c: 0x8c630000
    ctx->pc = 0x37b87cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37b880: 0x14600003
    ctx->pc = 0x37B880u;
    {
        const bool branch_taken_0x37b880 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B884u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x37b880) {
            ctx->pc = 0x37B890u;
            goto label_37b890;
        }
    }
    ctx->pc = 0x37B888u;
    // 0x37b888: 0x10000016
    ctx->pc = 0x37B888u;
    {
        const bool branch_taken_0x37b888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B88Cu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17404), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x37b888) {
            ctx->pc = 0x37B8E4u;
            goto label_37b8e4;
        }
    }
    ctx->pc = 0x37B890u;
label_37b890:
    // 0x37b890: 0x16000006
    ctx->pc = 0x37B890u;
    {
        const bool branch_taken_0x37b890 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x37B894u;
        SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
        if (branch_taken_0x37b890) {
            ctx->pc = 0x37B8ACu;
            goto label_37b8ac;
        }
    }
    ctx->pc = 0x37B898u;
    // 0x37b898: 0x3c040039
    ctx->pc = 0x37b898u;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x37b89c: 0xc06acbc
    ctx->pc = 0x37B89Cu;
    SET_GPR_U32(ctx, 31, 0x37B8A4u);
    ctx->pc = 0x37B8A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954168));
    ctx->pc = 0x1AB2F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8A4u; }
        if (ctx->pc != 0x37B8A4u) { return; }
    }
    ctx->pc = 0x37B8A4u;
    // 0x37b8a4: 0x10000004
    ctx->pc = 0x37B8A4u;
    {
        const bool branch_taken_0x37b8a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B8A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x37b8a4) {
            ctx->pc = 0x37B8B8u;
            goto label_37b8b8;
        }
    }
    ctx->pc = 0x37B8ACu;
label_37b8ac:
    // 0x37b8ac: 0xc06acbc
    ctx->pc = 0x37B8ACu;
    SET_GPR_U32(ctx, 31, 0x37B8B4u);
    ctx->pc = 0x37B8B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->pc = 0x1AB2F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8B4u; }
        if (ctx->pc != 0x37B8B4u) { return; }
    }
    ctx->pc = 0x37B8B4u;
    // 0x37b8b4: 0x2403ffff
    ctx->pc = 0x37b8b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_37b8b8:
    // 0x37b8b8: 0x14430005
    ctx->pc = 0x37B8B8u;
    {
        const bool branch_taken_0x37b8b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x37B8BCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x37b8b8) {
            ctx->pc = 0x37B8D0u;
            goto label_37b8d0;
        }
    }
    ctx->pc = 0x37B8C0u;
    // 0x37b8c0: 0xc0de938
    ctx->pc = 0x37B8C0u;
    SET_GPR_U32(ctx, 31, 0x37B8C8u);
    ctx->pc = 0x37A4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A4E0_0x37a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8C8u; }
    }
    if (ctx->pc != 0x37B8C8u) { return; }
    ctx->pc = 0x37B8C8u;
    // 0x37b8c8: 0x10000007
    ctx->pc = 0x37B8C8u;
    {
        const bool branch_taken_0x37b8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37B8CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x37b8c8) {
            ctx->pc = 0x37B8E8u;
            goto label_37b8e8;
        }
    }
    ctx->pc = 0x37B8D0u;
label_37b8d0:
    // 0x37b8d0: 0x24050003
    ctx->pc = 0x37b8d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b8d4: 0x8c230a20
    ctx->pc = 0x37b8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37b8d8: 0x8c640000
    ctx->pc = 0x37b8d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37b8dc: 0xc057d44
    ctx->pc = 0x37B8DCu;
    SET_GPR_U32(ctx, 31, 0x37B8E4u);
    ctx->pc = 0x37B8E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F510u;
    {
        auto targetFn = runtime->lookupFunction(0x15F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8E4u; }
        if (ctx->pc != 0x37B8E4u) { return; }
    }
    ctx->pc = 0x37B8E4u;
label_37b8e4:
    // 0x37b8e4: 0xdfbf0010
    ctx->pc = 0x37b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37b8e8:
    // 0x37b8e8: 0x7bb00000
    ctx->pc = 0x37b8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b8ec: 0x3e00008
    ctx->pc = 0x37B8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B4B0u: goto label_37b4b0;
            case 0x37B4F8u: goto label_37b4f8;
            case 0x37B51Cu: goto label_37b51c;
            case 0x37B528u: goto label_37b528;
            case 0x37B558u: goto label_37b558;
            case 0x37B56Cu: goto label_37b56c;
            case 0x37B570u: goto label_37b570;
            case 0x37B610u: goto label_37b610;
            case 0x37B724u: goto label_37b724;
            case 0x37B774u: goto label_37b774;
            case 0x37B7F0u: goto label_37b7f0;
            case 0x37B80Cu: goto label_37b80c;
            case 0x37B890u: goto label_37b890;
            case 0x37B8ACu: goto label_37b8ac;
            case 0x37B8B8u: goto label_37b8b8;
            case 0x37B8D0u: goto label_37b8d0;
            case 0x37B8E4u: goto label_37b8e4;
            case 0x37B8E8u: goto label_37b8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B8F4u;
    // 0x37b8f4: 0x0
    ctx->pc = 0x37b8f4u;
    // NOP
    // 0x37b8f8: 0x0
    ctx->pc = 0x37b8f8u;
    // NOP
    // 0x37b8fc: 0x0
    ctx->pc = 0x37b8fcu;
    // NOP
}
