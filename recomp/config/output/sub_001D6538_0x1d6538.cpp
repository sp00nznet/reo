#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6538
// Address: 0x1d6538 - 0x1d6690
void sub_001D6538_0x1d6538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6538u;

    // 0x1d6538: 0x3c030034
    ctx->pc = 0x1d6538u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d653c: 0x80302d
    ctx->pc = 0x1d653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6540: 0x8c622840
    ctx->pc = 0x1d6540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10304)));
    // 0x1d6544: 0xc2102a
    ctx->pc = 0x1d6544u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1d6548: 0x14400003
    ctx->pc = 0x1D6548u;
    {
        const bool branch_taken_0x1d6548 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D654Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 10304));
        if (branch_taken_0x1d6548) {
            ctx->pc = 0x1D6558u;
            goto label_1d6558;
        }
    }
    ctx->pc = 0x1D6550u;
    // 0x1d6550: 0x3e00008
    ctx->pc = 0x1D6550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6558u: goto label_1d6558;
            case 0x1D656Cu: goto label_1d656c;
            case 0x1D659Cu: goto label_1d659c;
            case 0x1D65ECu: goto label_1d65ec;
            case 0x1D664Cu: goto label_1d664c;
            case 0x1D6678u: goto label_1d6678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6558u;
label_1d6558:
    // 0x1d6558: 0x2ca20002
    ctx->pc = 0x1d6558u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x1d655c: 0x14400003
    ctx->pc = 0x1D655Cu;
    {
        const bool branch_taken_0x1d655c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1d655c) {
            ctx->pc = 0x1D656Cu;
            goto label_1d656c;
        }
    }
    ctx->pc = 0x1D6564u;
    // 0x1d6564: 0x3e00008
    ctx->pc = 0x1D6564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6568u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6558u: goto label_1d6558;
            case 0x1D656Cu: goto label_1d656c;
            case 0x1D659Cu: goto label_1d659c;
            case 0x1D65ECu: goto label_1d65ec;
            case 0x1D664Cu: goto label_1d664c;
            case 0x1D6678u: goto label_1d6678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D656Cu;
label_1d656c:
    // 0x1d656c: 0x8ce40004
    ctx->pc = 0x1d656cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d6570: 0xc21018
    ctx->pc = 0x1d6570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1d6574: 0x441021
    ctx->pc = 0x1d6574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6578: 0x8c43000c
    ctx->pc = 0x1d6578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d657c: 0x50a30007
    ctx->pc = 0x1D657Cu;
    {
        const bool branch_taken_0x1d657c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d657c) {
            ctx->pc = 0x1D6580u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
            ctx->pc = 0x1D659Cu;
            goto label_1d659c;
        }
    }
    ctx->pc = 0x1D6584u;
    // 0x1d6584: 0xac400014
    ctx->pc = 0x1d6584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d6588: 0xac40002c
    ctx->pc = 0x1d6588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1d658c: 0xac400030
    ctx->pc = 0x1d658cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1d6590: 0xace00010
    ctx->pc = 0x1d6590u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1d6594: 0xa4400020
    ctx->pc = 0x1d6594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d6598: 0xac45000c
    ctx->pc = 0x1d6598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_1d659c:
    // 0x1d659c: 0x3e00008
    ctx->pc = 0x1D659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6558u: goto label_1d6558;
            case 0x1D656Cu: goto label_1d656c;
            case 0x1D659Cu: goto label_1d659c;
            case 0x1D65ECu: goto label_1d65ec;
            case 0x1D664Cu: goto label_1d664c;
            case 0x1D6678u: goto label_1d6678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D65A4u;
    // 0x1d65a4: 0x0
    ctx->pc = 0x1d65a4u;
    // NOP
    // 0x1d65a8: 0x27bdffb0
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d65ac: 0x3c030023
    ctx->pc = 0x1d65acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1d65b0: 0xffb10020
    ctx->pc = 0x1d65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1d65b4: 0x2402ffff
    ctx->pc = 0x1d65b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d65b8: 0x80882d
    ctx->pc = 0x1d65b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65bc: 0xffbf0040
    ctx->pc = 0x1d65bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d65c0: 0x8c646998
    ctx->pc = 0x1d65c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 27032)));
    // 0x1d65c4: 0xffb20030
    ctx->pc = 0x1d65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1d65c8: 0x1082002b
    ctx->pc = 0x1D65C8u;
    {
        const bool branch_taken_0x1d65c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D65CCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x1d65c8) {
            ctx->pc = 0x1D6678u;
            goto label_1d6678;
        }
    }
    ctx->pc = 0x1D65D0u;
    // 0x1d65d0: 0x3c030034
    ctx->pc = 0x1d65d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d65d4: 0x8c622840
    ctx->pc = 0x1d65d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10304)));
    // 0x1d65d8: 0x222102b
    ctx->pc = 0x1d65d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d65dc: 0x14400003
    ctx->pc = 0x1D65DCu;
    {
        const bool branch_taken_0x1d65dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D65E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 10304));
        if (branch_taken_0x1d65dc) {
            ctx->pc = 0x1D65ECu;
            goto label_1d65ec;
        }
    }
    ctx->pc = 0x1D65E4u;
    // 0x1d65e4: 0x10000024
    ctx->pc = 0x1D65E4u;
    {
        const bool branch_taken_0x1d65e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D65E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x1d65e4) {
            ctx->pc = 0x1D6678u;
            goto label_1d6678;
        }
    }
    ctx->pc = 0x1D65ECu;
label_1d65ec:
    // 0x1d65ec: 0x3c100034
    ctx->pc = 0x1d65ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x1d65f0: 0xa2112940
    ctx->pc = 0x1d65f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10560), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d65f4: 0xc045198
    ctx->pc = 0x1D65F4u;
    SET_GPR_U32(ctx, 31, 0x1D65FCu);
    ctx->pc = 0x1D65F8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10560));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65FCu; }
    }
    if (ctx->pc != 0x1D65FCu) { return; }
    ctx->pc = 0x1D65FCu;
    // 0x1d65fc: 0x3c040034
    ctx->pc = 0x1d65fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d6600: 0x3c090034
    ctx->pc = 0x1d6600u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1d6604: 0x3c0b001d
    ctx->pc = 0x1d6604u;
    SET_GPR_U32(ctx, 11, ((uint32_t)29 << 16));
    // 0x1d6608: 0x248428e0
    ctx->pc = 0x1d6608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10464));
    // 0x1d660c: 0x200382d
    ctx->pc = 0x1d660cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6610: 0x25292980
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 10624));
    // 0x1d6614: 0x256b59b8
    ctx->pc = 0x1d6614u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 22968));
    // 0x1d6618: 0xafa00000
    ctx->pc = 0x1d6618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d661c: 0x24050006
    ctx->pc = 0x1d661cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6620: 0x24060001
    ctx->pc = 0x1d6620u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6624: 0x24080010
    ctx->pc = 0x1d6624u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d6628: 0xc045e7a
    ctx->pc = 0x1D6628u;
    SET_GPR_U32(ctx, 31, 0x1D6630u);
    ctx->pc = 0x1D662Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6630u; }
    }
    if (ctx->pc != 0x1D6630u) { return; }
    ctx->pc = 0x1D6630u;
    // 0x1d6630: 0x10400006
    ctx->pc = 0x1D6630u;
    {
        const bool branch_taken_0x1d6630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6634u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d6630) {
            ctx->pc = 0x1D664Cu;
            goto label_1d664c;
        }
    }
    ctx->pc = 0x1D6638u;
    // 0x1d6638: 0x40282d
    ctx->pc = 0x1d6638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d663c: 0xc045a12
    ctx->pc = 0x1D663Cu;
    SET_GPR_U32(ctx, 31, 0x1D6644u);
    ctx->pc = 0x1D6640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28296));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6644u; }
    }
    if (ctx->pc != 0x1D6644u) { return; }
    ctx->pc = 0x1D6644u;
    // 0x1d6644: 0x1000000c
    ctx->pc = 0x1D6644u;
    {
        const bool branch_taken_0x1d6644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1d6644) {
            ctx->pc = 0x1D6678u;
            goto label_1d6678;
        }
    }
    ctx->pc = 0x1D664Cu;
label_1d664c:
    // 0x1d664c: 0x24040038
    ctx->pc = 0x1d664cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d6650: 0x8e430004
    ctx->pc = 0x1d6650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d6654: 0x2242018
    ctx->pc = 0x1d6654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d6658: 0x102d
    ctx->pc = 0x1d6658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d665c: 0x641821
    ctx->pc = 0x1d665cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6660: 0xac600034
    ctx->pc = 0x1d6660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1d6664: 0xac600010
    ctx->pc = 0x1d6664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d6668: 0xac600014
    ctx->pc = 0x1d6668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d666c: 0xa4600020
    ctx->pc = 0x1d666cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d6670: 0xac60002c
    ctx->pc = 0x1d6670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1d6674: 0xac600030
    ctx->pc = 0x1d6674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_1d6678:
    // 0x1d6678: 0xdfbf0040
    ctx->pc = 0x1d6678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d667c: 0xdfb20030
    ctx->pc = 0x1d667cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6680: 0xdfb10020
    ctx->pc = 0x1d6680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6684: 0xdfb00010
    ctx->pc = 0x1d6684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6688: 0x3e00008
    ctx->pc = 0x1D6688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D668Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6558u: goto label_1d6558;
            case 0x1D656Cu: goto label_1d656c;
            case 0x1D659Cu: goto label_1d659c;
            case 0x1D65ECu: goto label_1d65ec;
            case 0x1D664Cu: goto label_1d664c;
            case 0x1D6678u: goto label_1d6678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6690u;
}
