#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001024F0
// Address: 0x1024f0 - 0x1027f0
void sub_001024F0_0x1024f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1024f0u;

    // 0x1024f0: 0x27bdffe0
    ctx->pc = 0x1024f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1024f4: 0x2405043a
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1082));
    // 0x1024f8: 0xffbf0010
    ctx->pc = 0x1024f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1024fc: 0xc0408c2
    ctx->pc = 0x1024FCu;
    SET_GPR_U32(ctx, 31, 0x102504u);
    ctx->pc = 0x102500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102504u; }
    }
    if (ctx->pc != 0x102504u) { return; }
    ctx->pc = 0x102504u;
    // 0x102504: 0x97a20000
    ctx->pc = 0x102504u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102508: 0xdfbf0010
    ctx->pc = 0x102508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10250c: 0x3e00008
    ctx->pc = 0x10250Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102588u: goto label_102588;
            case 0x102648u: goto label_102648;
            case 0x102674u: goto label_102674;
            case 0x1026E0u: goto label_1026e0;
            case 0x1027A8u: goto label_1027a8;
            case 0x1027D4u: goto label_1027d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102514u;
    // 0x102514: 0x0
    ctx->pc = 0x102514u;
    // NOP
    // 0x102518: 0x27bdfed0
    ctx->pc = 0x102518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x10251c: 0xffb200b0
    ctx->pc = 0x10251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x102520: 0xffbf0120
    ctx->pc = 0x102520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x102524: 0x80902d
    ctx->pc = 0x102524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102528: 0xffbe0110
    ctx->pc = 0x102528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x10252c: 0xffb70100
    ctx->pc = 0x10252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x102530: 0xffb600f0
    ctx->pc = 0x102530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x102534: 0xffb500e0
    ctx->pc = 0x102534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x102538: 0xffb400d0
    ctx->pc = 0x102538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x10253c: 0xffb300c0
    ctx->pc = 0x10253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x102540: 0xffb100a0
    ctx->pc = 0x102540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x102544: 0xc0408a6
    ctx->pc = 0x102544u;
    SET_GPR_U32(ctx, 31, 0x10254Cu);
    ctx->pc = 0x102548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    ctx->pc = 0x102298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102298_0x102298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10254Cu; }
    }
    if (ctx->pc != 0x10254Cu) { return; }
    ctx->pc = 0x10254Cu;
    // 0x10254c: 0x14400049
    ctx->pc = 0x10254Cu;
    {
        const bool branch_taken_0x10254c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102550u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10254c) {
            ctx->pc = 0x102674u;
            goto label_102674;
        }
    }
    ctx->pc = 0x102554u;
    // 0x102554: 0x27a20050
    ctx->pc = 0x102554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x102558: 0x882d
    ctx->pc = 0x102558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10255c: 0xafa20084
    ctx->pc = 0x10255cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x102560: 0x27b40010
    ctx->pc = 0x102560u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 16));
    // 0x102564: 0x27a20060
    ctx->pc = 0x102564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 96));
    // 0x102568: 0x27b50020
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 32));
    // 0x10256c: 0xafa20080
    ctx->pc = 0x10256cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x102570: 0x27b60030
    ctx->pc = 0x102570u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 48));
    // 0x102574: 0x27b70040
    ctx->pc = 0x102574u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 64));
    // 0x102578: 0x27be0070
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 112));
    // 0x10257c: 0x2653021c
    ctx->pc = 0x10257cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 540));
    // 0x102580: 0x240802d
    ctx->pc = 0x102580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102584: 0x0
    ctx->pc = 0x102584u;
    // NOP
label_102588:
    // 0x102588: 0x26250400
    ctx->pc = 0x102588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1024));
    // 0x10258c: 0x3a0202d
    ctx->pc = 0x10258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102590: 0x30a5ffff
    ctx->pc = 0x102590u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x102594: 0xc0408c2
    ctx->pc = 0x102594u;
    SET_GPR_U32(ctx, 31, 0x10259Cu);
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10259Cu; }
    }
    if (ctx->pc != 0x10259Cu) { return; }
    ctx->pc = 0x10259Cu;
    // 0x10259c: 0x7ba20000
    ctx->pc = 0x10259cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025a0: 0x2e230020
    ctx->pc = 0x1025a0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 32));
    // 0x1025a4: 0x7e020000
    ctx->pc = 0x1025a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1025a8: 0x1460fff7
    ctx->pc = 0x1025A8u;
    {
        const bool branch_taken_0x1025a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1025ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x1025a8) {
            ctx->pc = 0x102588u;
            goto label_102588;
        }
    }
    ctx->pc = 0x1025B0u;
    // 0x1025b0: 0x3a0202d
    ctx->pc = 0x1025b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025b4: 0xc0408c2
    ctx->pc = 0x1025B4u;
    SET_GPR_U32(ctx, 31, 0x1025BCu);
    ctx->pc = 0x1025B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1072));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025BCu; }
    }
    if (ctx->pc != 0x1025BCu) { return; }
    ctx->pc = 0x1025BCu;
    // 0x1025bc: 0x260802d
    ctx->pc = 0x1025bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025c0: 0x8fa20000
    ctx->pc = 0x1025c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025c4: 0x280202d
    ctx->pc = 0x1025c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025c8: 0x24050431
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1073));
    // 0x1025cc: 0x882d
    ctx->pc = 0x1025ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025d0: 0xc0408c2
    ctx->pc = 0x1025D0u;
    SET_GPR_U32(ctx, 31, 0x1025D8u);
    ctx->pc = 0x1025D4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025D8u; }
    }
    if (ctx->pc != 0x1025D8u) { return; }
    ctx->pc = 0x1025D8u;
    // 0x1025d8: 0x8fa20010
    ctx->pc = 0x1025d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1025dc: 0x2a0202d
    ctx->pc = 0x1025dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025e0: 0x24050432
    ctx->pc = 0x1025e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1074));
    // 0x1025e4: 0xc0408c2
    ctx->pc = 0x1025E4u;
    SET_GPR_U32(ctx, 31, 0x1025ECu);
    ctx->pc = 0x1025E8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025ECu; }
    }
    if (ctx->pc != 0x1025ECu) { return; }
    ctx->pc = 0x1025ECu;
    // 0x1025ec: 0x8fa20020
    ctx->pc = 0x1025ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1025f0: 0x2c0202d
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025f4: 0x24050434
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1076));
    // 0x1025f8: 0xc0408c2
    ctx->pc = 0x1025F8u;
    SET_GPR_U32(ctx, 31, 0x102600u);
    ctx->pc = 0x1025FCu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102600u; }
    }
    if (ctx->pc != 0x102600u) { return; }
    ctx->pc = 0x102600u;
    // 0x102600: 0x8fa20030
    ctx->pc = 0x102600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102604: 0x2e0202d
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0x24050435
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1077));
    // 0x10260c: 0xc0408c2
    ctx->pc = 0x10260Cu;
    SET_GPR_U32(ctx, 31, 0x102614u);
    ctx->pc = 0x102610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102614u; }
    }
    if (ctx->pc != 0x102614u) { return; }
    ctx->pc = 0x102614u;
    // 0x102614: 0x8fa20040
    ctx->pc = 0x102614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102618: 0x24050436
    ctx->pc = 0x102618u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1078));
    // 0x10261c: 0x8fa40084
    ctx->pc = 0x10261cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x102620: 0xc0408c2
    ctx->pc = 0x102620u;
    SET_GPR_U32(ctx, 31, 0x102628u);
    ctx->pc = 0x102624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102628u; }
    }
    if (ctx->pc != 0x102628u) { return; }
    ctx->pc = 0x102628u;
    // 0x102628: 0x8fa20050
    ctx->pc = 0x102628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10262c: 0x24050437
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1079));
    // 0x102630: 0x8fa40080
    ctx->pc = 0x102630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102634: 0xc0408c2
    ctx->pc = 0x102634u;
    SET_GPR_U32(ctx, 31, 0x10263Cu);
    ctx->pc = 0x102638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10263Cu; }
    }
    if (ctx->pc != 0x10263Cu) { return; }
    ctx->pc = 0x10263Cu;
    // 0x10263c: 0x8fa20060
    ctx->pc = 0x10263cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102640: 0xae420218
    ctx->pc = 0x102640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
    // 0x102644: 0x0
    ctx->pc = 0x102644u;
    // NOP
label_102648:
    // 0x102648: 0x26250420
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1056));
    // 0x10264c: 0x3c0202d
    ctx->pc = 0x10264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102650: 0x30a5ffff
    ctx->pc = 0x102650u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x102654: 0xc0408c2
    ctx->pc = 0x102654u;
    SET_GPR_U32(ctx, 31, 0x10265Cu);
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x102308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102308_0x102308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10265Cu; }
    }
    if (ctx->pc != 0x10265Cu) { return; }
    ctx->pc = 0x10265Cu;
    // 0x10265c: 0x97a20070
    ctx->pc = 0x10265cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102660: 0x2e230010
    ctx->pc = 0x102660u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 16));
    // 0x102664: 0xa6020000
    ctx->pc = 0x102664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x102668: 0x1460fff7
    ctx->pc = 0x102668u;
    {
        const bool branch_taken_0x102668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10266Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x102668) {
            ctx->pc = 0x102648u;
            goto label_102648;
        }
    }
    ctx->pc = 0x102670u;
    // 0x102670: 0x24020001
    ctx->pc = 0x102670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_102674:
    // 0x102674: 0xdfbf0120
    ctx->pc = 0x102674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x102678: 0xdfbe0110
    ctx->pc = 0x102678u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10267c: 0xdfb70100
    ctx->pc = 0x10267cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x102680: 0xdfb600f0
    ctx->pc = 0x102680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x102684: 0xdfb500e0
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x102688: 0xdfb400d0
    ctx->pc = 0x102688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10268c: 0xdfb300c0
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x102690: 0xdfb200b0
    ctx->pc = 0x102690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x102694: 0xdfb100a0
    ctx->pc = 0x102694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x102698: 0xdfb00090
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10269c: 0x3e00008
    ctx->pc = 0x10269Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1026A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102588u: goto label_102588;
            case 0x102648u: goto label_102648;
            case 0x102674u: goto label_102674;
            case 0x1026E0u: goto label_1026e0;
            case 0x1027A8u: goto label_1027a8;
            case 0x1027D4u: goto label_1027d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1026A4u;
    // 0x1026a4: 0x0
    ctx->pc = 0x1026a4u;
    // NOP
    // 0x1026a8: 0x27bdffa0
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1026ac: 0xffb20030
    ctx->pc = 0x1026acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1026b0: 0xffbf0050
    ctx->pc = 0x1026b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1026b4: 0x80902d
    ctx->pc = 0x1026b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026b8: 0xffb30040
    ctx->pc = 0x1026b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1026bc: 0xffb10020
    ctx->pc = 0x1026bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1026c0: 0xc0408a6
    ctx->pc = 0x1026C0u;
    SET_GPR_U32(ctx, 31, 0x1026C8u);
    ctx->pc = 0x1026C4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x102298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102298_0x102298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026C8u; }
    }
    if (ctx->pc != 0x1026C8u) { return; }
    ctx->pc = 0x1026C8u;
    // 0x1026c8: 0x14400042
    ctx->pc = 0x1026C8u;
    {
        const bool branch_taken_0x1026c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1026CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1026c8) {
            ctx->pc = 0x1027D4u;
            goto label_1027d4;
        }
    }
    ctx->pc = 0x1026D0u;
    // 0x1026d0: 0x882d
    ctx->pc = 0x1026d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026d4: 0x2653021c
    ctx->pc = 0x1026d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 540));
    // 0x1026d8: 0x240802d
    ctx->pc = 0x1026d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026dc: 0x0
    ctx->pc = 0x1026dcu;
    // NOP
label_1026e0:
    // 0x1026e0: 0x7a020000
    ctx->pc = 0x1026e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1026e4: 0x26240400
    ctx->pc = 0x1026e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1026e8: 0x3084ffff
    ctx->pc = 0x1026e8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1026ec: 0x3a0282d
    ctx->pc = 0x1026ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026f0: 0x7fa20000
    ctx->pc = 0x1026f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1026f4: 0xc0408b2
    ctx->pc = 0x1026F4u;
    SET_GPR_U32(ctx, 31, 0x1026FCu);
    ctx->pc = 0x1026F8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026FCu; }
    }
    if (ctx->pc != 0x1026FCu) { return; }
    ctx->pc = 0x1026FCu;
    // 0x1026fc: 0x2e220020
    ctx->pc = 0x1026fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
    // 0x102700: 0x1440fff7
    ctx->pc = 0x102700u;
    {
        const bool branch_taken_0x102700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102704u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x102700) {
            ctx->pc = 0x1026E0u;
            goto label_1026e0;
        }
    }
    ctx->pc = 0x102708u;
    // 0x102708: 0x9e420200
    ctx->pc = 0x102708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x10270c: 0x70001ca9
    ctx->pc = 0x10270cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x102710: 0x7fa30000
    ctx->pc = 0x102710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x102714: 0x24040430
    ctx->pc = 0x102714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1072));
    // 0x102718: 0x3a0282d
    ctx->pc = 0x102718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10271c: 0xc0408b2
    ctx->pc = 0x10271Cu;
    SET_GPR_U32(ctx, 31, 0x102724u);
    ctx->pc = 0x102720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102724u; }
    }
    if (ctx->pc != 0x102724u) { return; }
    ctx->pc = 0x102724u;
    // 0x102724: 0x260802d
    ctx->pc = 0x102724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102728: 0x9e420204
    ctx->pc = 0x102728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x10272c: 0x24040431
    ctx->pc = 0x10272cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1073));
    // 0x102730: 0x3a0282d
    ctx->pc = 0x102730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102734: 0x882d
    ctx->pc = 0x102734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102738: 0xc0408b2
    ctx->pc = 0x102738u;
    SET_GPR_U32(ctx, 31, 0x102740u);
    ctx->pc = 0x10273Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102740u; }
    }
    if (ctx->pc != 0x102740u) { return; }
    ctx->pc = 0x102740u;
    // 0x102740: 0x9e420208
    ctx->pc = 0x102740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x102744: 0x24040432
    ctx->pc = 0x102744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1074));
    // 0x102748: 0x3a0282d
    ctx->pc = 0x102748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10274c: 0xc0408b2
    ctx->pc = 0x10274Cu;
    SET_GPR_U32(ctx, 31, 0x102754u);
    ctx->pc = 0x102750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102754u; }
    }
    if (ctx->pc != 0x102754u) { return; }
    ctx->pc = 0x102754u;
    // 0x102754: 0x9e42020c
    ctx->pc = 0x102754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x102758: 0x24040434
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1076));
    // 0x10275c: 0x3a0282d
    ctx->pc = 0x10275cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102760: 0xc0408b2
    ctx->pc = 0x102760u;
    SET_GPR_U32(ctx, 31, 0x102768u);
    ctx->pc = 0x102764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102768u; }
    }
    if (ctx->pc != 0x102768u) { return; }
    ctx->pc = 0x102768u;
    // 0x102768: 0x9e420210
    ctx->pc = 0x102768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x10276c: 0x24040435
    ctx->pc = 0x10276cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1077));
    // 0x102770: 0x3a0282d
    ctx->pc = 0x102770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102774: 0xc0408b2
    ctx->pc = 0x102774u;
    SET_GPR_U32(ctx, 31, 0x10277Cu);
    ctx->pc = 0x102778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10277Cu; }
    }
    if (ctx->pc != 0x10277Cu) { return; }
    ctx->pc = 0x10277Cu;
    // 0x10277c: 0x9e420214
    ctx->pc = 0x10277cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x102780: 0x24040436
    ctx->pc = 0x102780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1078));
    // 0x102784: 0x3a0282d
    ctx->pc = 0x102784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102788: 0xc0408b2
    ctx->pc = 0x102788u;
    SET_GPR_U32(ctx, 31, 0x102790u);
    ctx->pc = 0x10278Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102790u; }
    }
    if (ctx->pc != 0x102790u) { return; }
    ctx->pc = 0x102790u;
    // 0x102790: 0x9e420218
    ctx->pc = 0x102790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x102794: 0x24040437
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1079));
    // 0x102798: 0x3a0282d
    ctx->pc = 0x102798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10279c: 0xc0408b2
    ctx->pc = 0x10279Cu;
    SET_GPR_U32(ctx, 31, 0x1027A4u);
    ctx->pc = 0x1027A0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027A4u; }
    }
    if (ctx->pc != 0x1027A4u) { return; }
    ctx->pc = 0x1027A4u;
    // 0x1027a4: 0x0
    ctx->pc = 0x1027a4u;
    // NOP
label_1027a8:
    // 0x1027a8: 0x96020000
    ctx->pc = 0x1027a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1027ac: 0x26240420
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1056));
    // 0x1027b0: 0x3084ffff
    ctx->pc = 0x1027b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1027b4: 0x3a0282d
    ctx->pc = 0x1027b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027b8: 0xffa20000
    ctx->pc = 0x1027b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1027bc: 0xc0408b2
    ctx->pc = 0x1027BCu;
    SET_GPR_U32(ctx, 31, 0x1027C4u);
    ctx->pc = 0x1027C0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1022C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001022C8_0x1022c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027C4u; }
    }
    if (ctx->pc != 0x1027C4u) { return; }
    ctx->pc = 0x1027C4u;
    // 0x1027c4: 0x2e220010
    ctx->pc = 0x1027c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 16));
    // 0x1027c8: 0x1440fff7
    ctx->pc = 0x1027C8u;
    {
        const bool branch_taken_0x1027c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1027CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1027c8) {
            ctx->pc = 0x1027A8u;
            goto label_1027a8;
        }
    }
    ctx->pc = 0x1027D0u;
    // 0x1027d0: 0x24020001
    ctx->pc = 0x1027d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1027d4:
    // 0x1027d4: 0xdfbf0050
    ctx->pc = 0x1027d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1027d8: 0xdfb30040
    ctx->pc = 0x1027d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1027dc: 0xdfb20030
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1027e0: 0xdfb10020
    ctx->pc = 0x1027e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1027e4: 0xdfb00010
    ctx->pc = 0x1027e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1027e8: 0x3e00008
    ctx->pc = 0x1027E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1027ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102588u: goto label_102588;
            case 0x102648u: goto label_102648;
            case 0x102674u: goto label_102674;
            case 0x1026E0u: goto label_1026e0;
            case 0x1027A8u: goto label_1027a8;
            case 0x1027D4u: goto label_1027d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1027F0u;
}
