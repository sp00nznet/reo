#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E763C
// Address: 0x1e763c - 0x1e77f4
void sub_001E763C_0x1e763c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e763cu;

    // 0x1e763c: 0x27bdffe0
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7640: 0xffbe0010
    ctx->pc = 0x1e7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e7644: 0xffbf0018
    ctx->pc = 0x1e7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e7648: 0x3a0f02d
    ctx->pc = 0x1e7648u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e764c: 0xafc40000
    ctx->pc = 0x1e764cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e7650: 0xafc50004
    ctx->pc = 0x1e7650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e7654: 0xc0102d
    ctx->pc = 0x1e7654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7658: 0xe0182d
    ctx->pc = 0x1e7658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e765c: 0x100202d
    ctx->pc = 0x1e765cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7660: 0x120282d
    ctx->pc = 0x1e7660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7664: 0xa7c20008
    ctx->pc = 0x1e7664u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7668: 0xa7c3000a
    ctx->pc = 0x1e7668u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e766c: 0xa3c4000c
    ctx->pc = 0x1e766cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e7670: 0xa3c5000d
    ctx->pc = 0x1e7670u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e7674: 0x8fc20000
    ctx->pc = 0x1e7674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7678: 0x8c42050c
    ctx->pc = 0x1e7678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1292)));
    // 0x1e767c: 0x10400004
    ctx->pc = 0x1E767Cu;
    {
        const bool branch_taken_0x1e767c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e767c) {
            ctx->pc = 0x1E7690u;
            goto label_1e7690;
        }
    }
    ctx->pc = 0x1E7684u;
    // 0x1e7684: 0x24020027
    ctx->pc = 0x1e7684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
    // 0x1e7688: 0x10000054
    ctx->pc = 0x1E7688u;
    {
        const bool branch_taken_0x1e7688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7688) {
            ctx->pc = 0x1E77DCu;
            goto label_1e77dc;
        }
    }
    ctx->pc = 0x1E7690u;
label_1e7690:
    // 0x1e7690: 0x8fc40004
    ctx->pc = 0x1e7690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7694: 0xc07c6b6
    ctx->pc = 0x1E7694u;
    SET_GPR_U32(ctx, 31, 0x1E769Cu);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E769Cu; }
    }
    if (ctx->pc != 0x1E769Cu) { return; }
    ctx->pc = 0x1E769Cu;
    // 0x1e769c: 0x97c3000a
    ctx->pc = 0x1e769cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1e76a0: 0x24630010
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e76a4: 0x10430004
    ctx->pc = 0x1E76A4u;
    {
        const bool branch_taken_0x1e76a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e76a4) {
            ctx->pc = 0x1E76B8u;
            goto label_1e76b8;
        }
    }
    ctx->pc = 0x1E76ACu;
    // 0x1e76ac: 0x24020027
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
    // 0x1e76b0: 0x1000004a
    ctx->pc = 0x1E76B0u;
    {
        const bool branch_taken_0x1e76b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e76b0) {
            ctx->pc = 0x1E77DCu;
            goto label_1e77dc;
        }
    }
    ctx->pc = 0x1E76B8u;
label_1e76b8:
    // 0x1e76b8: 0x8fc20004
    ctx->pc = 0x1e76b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e76bc: 0x2443002c
    ctx->pc = 0x1e76bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e76c0: 0x8fc20000
    ctx->pc = 0x1e76c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e76c4: 0x8c420044
    ctx->pc = 0x1e76c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1e76c8: 0xac620004
    ctx->pc = 0x1e76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e76cc: 0x8fc20004
    ctx->pc = 0x1e76ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e76d0: 0x2443002c
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e76d4: 0x97c20008
    ctx->pc = 0x1e76d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e76d8: 0xa4620000
    ctx->pc = 0x1e76d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e76dc: 0x8fc20004
    ctx->pc = 0x1e76dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e76e0: 0x2443002c
    ctx->pc = 0x1e76e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e76e4: 0x93c2000d
    ctx->pc = 0x1e76e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x1e76e8: 0xa4620002
    ctx->pc = 0x1e76e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e76ec: 0x8fc20004
    ctx->pc = 0x1e76ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e76f0: 0x2443002c
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e76f4: 0x8fc20004
    ctx->pc = 0x1e76f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e76f8: 0x2442002c
    ctx->pc = 0x1e76f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e76fc: 0x94420002
    ctx->pc = 0x1e76fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e7700: 0x21200
    ctx->pc = 0x1e7700u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1e7704: 0xa4620002
    ctx->pc = 0x1e7704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7708: 0x8fc20004
    ctx->pc = 0x1e7708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e770c: 0x2444002c
    ctx->pc = 0x1e770cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e7710: 0x8fc20004
    ctx->pc = 0x1e7710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7714: 0x2442002c
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e7718: 0x93c3000c
    ctx->pc = 0x1e7718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e771c: 0x94420002
    ctx->pc = 0x1e771cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e7720: 0x431025
    ctx->pc = 0x1e7720u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7724: 0xa4820002
    ctx->pc = 0x1e7724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7728: 0x8fc20004
    ctx->pc = 0x1e7728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e772c: 0x2444002c
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e7730: 0x8fc20004
    ctx->pc = 0x1e7730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7734: 0x2443002c
    ctx->pc = 0x1e7734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e7738: 0x97c2000a
    ctx->pc = 0x1e7738u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1e773c: 0x24420010
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e7740: 0x304203ff
    ctx->pc = 0x1e7740u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x1e7744: 0x94630000
    ctx->pc = 0x1e7744u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7748: 0x621025
    ctx->pc = 0x1e7748u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e774c: 0xa4820000
    ctx->pc = 0x1e774cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7750: 0x97c20008
    ctx->pc = 0x1e7750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e7754: 0x30428000
    ctx->pc = 0x1e7754u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x1e7758: 0x3042ffff
    ctx->pc = 0x1e7758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1e775c: 0x1040000b
    ctx->pc = 0x1E775Cu;
    {
        const bool branch_taken_0x1e775c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e775c) {
            ctx->pc = 0x1E778Cu;
            goto label_1e778c;
        }
    }
    ctx->pc = 0x1E7764u;
    // 0x1e7764: 0x8fc40004
    ctx->pc = 0x1e7764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7768: 0x24050011
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e776c: 0xc07ccd5
    ctx->pc = 0x1E776Cu;
    SET_GPR_U32(ctx, 31, 0x1E7774u);
    ctx->pc = 0x1F3354u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3354_0x1f3354(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7774u; }
    }
    if (ctx->pc != 0x1E7774u) { return; }
    ctx->pc = 0x1E7774u;
    // 0x1e7774: 0x8fc40004
    ctx->pc = 0x1e7774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7778: 0x34058001
    ctx->pc = 0x1e7778u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1e777c: 0xc07c680
    ctx->pc = 0x1E777Cu;
    SET_GPR_U32(ctx, 31, 0x1E7784u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7784u; }
    }
    if (ctx->pc != 0x1E7784u) { return; }
    ctx->pc = 0x1E7784u;
    // 0x1e7784: 0x1000000d
    ctx->pc = 0x1E7784u;
    {
        const bool branch_taken_0x1e7784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7784) {
            ctx->pc = 0x1E77BCu;
            goto label_1e77bc;
        }
    }
    ctx->pc = 0x1E778Cu;
label_1e778c:
    // 0x1e778c: 0x8fc40004
    ctx->pc = 0x1e778cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7790: 0x24050002
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7794: 0xc07c680
    ctx->pc = 0x1E7794u;
    SET_GPR_U32(ctx, 31, 0x1E779Cu);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E779Cu; }
    }
    if (ctx->pc != 0x1E779Cu) { return; }
    ctx->pc = 0x1E779Cu;
    // 0x1e779c: 0x8fc20004
    ctx->pc = 0x1e779cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e77a0: 0x2444002c
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1e77a4: 0x8fc20000
    ctx->pc = 0x1e77a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e77a8: 0x2443000c
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e77ac: 0x8c620000
    ctx->pc = 0x1e77acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e77b0: 0xac820008
    ctx->pc = 0x1e77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1e77b4: 0x24420001
    ctx->pc = 0x1e77b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e77b8: 0xac620000
    ctx->pc = 0x1e77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e77bc:
    // 0x1e77bc: 0x8fc20000
    ctx->pc = 0x1e77bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e77c0: 0x8c420060
    ctx->pc = 0x1e77c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e77c4: 0x24420008
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e77c8: 0x40202d
    ctx->pc = 0x1e77c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77cc: 0x8fc50004
    ctx->pc = 0x1e77ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e77d0: 0xc07c47a
    ctx->pc = 0x1E77D0u;
    SET_GPR_U32(ctx, 31, 0x1E77D8u);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77D8u; }
    }
    if (ctx->pc != 0x1E77D8u) { return; }
    ctx->pc = 0x1E77D8u;
    // 0x1e77d8: 0x102d
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e77dc:
    // 0x1e77dc: 0x3c0e82d
    ctx->pc = 0x1e77dcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77e0: 0xdfbe0010
    ctx->pc = 0x1e77e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77e4: 0xdfbf0018
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e77e8: 0x27bd0020
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e77ec: 0x3e00008
    ctx->pc = 0x1E77ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7690u: goto label_1e7690;
            case 0x1E76B8u: goto label_1e76b8;
            case 0x1E778Cu: goto label_1e778c;
            case 0x1E77BCu: goto label_1e77bc;
            case 0x1E77DCu: goto label_1e77dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E77F4u;
}
