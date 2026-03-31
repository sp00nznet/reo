#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B738
// Address: 0x16b738 - 0x16b8b8
void sub_0016B738_0x16b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b738u;

    // 0x16b738: 0x27bdffb0
    ctx->pc = 0x16b738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b73c: 0xffb00020
    ctx->pc = 0x16b73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16b740: 0xffb10028
    ctx->pc = 0x16b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16b744: 0xa0882d
    ctx->pc = 0x16b744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b748: 0xffb20030
    ctx->pc = 0x16b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16b74c: 0xc0902d
    ctx->pc = 0x16b74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b750: 0xffb30038
    ctx->pc = 0x16b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16b754: 0xffbf0040
    ctx->pc = 0x16b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b758: 0xc05aee6
    ctx->pc = 0x16B758u;
    SET_GPR_U32(ctx, 31, 0x16B760u);
    ctx->pc = 0x16B75Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BB98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BB98_0x16bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B760u; }
    }
    if (ctx->pc != 0x16B760u) { return; }
    ctx->pc = 0x16B760u;
    // 0x16b760: 0x40802d
    ctx->pc = 0x16b760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b764: 0x5200001c
    ctx->pc = 0x16B764u;
    {
        const bool branch_taken_0x16b764 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b764) {
            ctx->pc = 0x16B768u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16B7D8u;
            goto label_16b7d8;
        }
    }
    ctx->pc = 0x16B76Cu;
    // 0x16b76c: 0x8e020000
    ctx->pc = 0x16b76cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b770: 0x54400019
    ctx->pc = 0x16B770u;
    {
        const bool branch_taken_0x16b770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b770) {
            ctx->pc = 0x16B774u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16B7D8u;
            goto label_16b7d8;
        }
    }
    ctx->pc = 0x16B778u;
    // 0x16b778: 0x220202d
    ctx->pc = 0x16b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b77c: 0xc055fbc
    ctx->pc = 0x16B77Cu;
    SET_GPR_U32(ctx, 31, 0x16B784u);
    ctx->pc = 0x16B780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157EF0_0x157ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B784u; }
    }
    if (ctx->pc != 0x16B784u) { return; }
    ctx->pc = 0x16B784u;
    // 0x16b784: 0x240282d
    ctx->pc = 0x16b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b788: 0x260382d
    ctx->pc = 0x16b788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b78c: 0x240200b0
    ctx->pc = 0x16b78cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 176));
    // 0x16b790: 0x28e300b1
    ctx->pc = 0x16b790u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 177));
    // 0x16b794: 0x8fa4000c
    ctx->pc = 0x16b794u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16b798: 0x43380a
    ctx->pc = 0x16b798u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
    // 0x16b79c: 0x26030024
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 36));
    // 0x16b7a0: 0xe0302d
    ctx->pc = 0x16b7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7a4: 0x18800004
    ctx->pc = 0x16B7A4u;
    {
        const bool branch_taken_0x16b7a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x16B7A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b7a4) {
            ctx->pc = 0x16B7B8u;
            goto label_16b7b8;
        }
    }
    ctx->pc = 0x16B7ACu;
    // 0x16b7ac: 0x10000007
    ctx->pc = 0x16B7ACu;
    {
        const bool branch_taken_0x16b7ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B7B0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 7));
        if (branch_taken_0x16b7ac) {
            ctx->pc = 0x16B7CCu;
            goto label_16b7cc;
        }
    }
    ctx->pc = 0x16B7B4u;
    // 0x16b7b4: 0x0
    ctx->pc = 0x16b7b4u;
    // NOP
label_16b7b8:
    // 0x16b7b8: 0x8fa20008
    ctx->pc = 0x16b7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b7bc: 0x58400006
    ctx->pc = 0x16B7BCu;
    {
        const bool branch_taken_0x16b7bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16b7bc) {
            ctx->pc = 0x16B7C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16B7D8u;
            goto label_16b7d8;
        }
    }
    ctx->pc = 0x16B7C4u;
    // 0x16b7c4: 0xac670164
    ctx->pc = 0x16b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 7));
    // 0x16b7c8: 0x260200d4
    ctx->pc = 0x16b7c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 212));
label_16b7cc:
    // 0x16b7cc: 0xc055798
    ctx->pc = 0x16B7CCu;
    SET_GPR_U32(ctx, 31, 0x16B7D4u);
    ctx->pc = 0x16B7D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7D4u; }
    }
    if (ctx->pc != 0x16B7D4u) { return; }
    ctx->pc = 0x16B7D4u;
    // 0x16b7d4: 0xdfb00020
    ctx->pc = 0x16b7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16b7d8:
    // 0x16b7d8: 0xdfb10028
    ctx->pc = 0x16b7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b7dc: 0xdfb20030
    ctx->pc = 0x16b7dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b7e0: 0xdfb30038
    ctx->pc = 0x16b7e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b7e4: 0xdfbf0040
    ctx->pc = 0x16b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b7e8: 0x3e00008
    ctx->pc = 0x16B7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B7ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B7B8u: goto label_16b7b8;
            case 0x16B7CCu: goto label_16b7cc;
            case 0x16B7D8u: goto label_16b7d8;
            case 0x16B850u: goto label_16b850;
            case 0x16B898u: goto label_16b898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B7F0u;
    // 0x16b7f0: 0x27bdffe0
    ctx->pc = 0x16b7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b7f4: 0xffb10008
    ctx->pc = 0x16b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b7f8: 0x80882d
    ctx->pc = 0x16b7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7fc: 0xffb20010
    ctx->pc = 0x16b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b800: 0x26321d04
    ctx->pc = 0x16b800u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 7428));
    // 0x16b804: 0xffb00000
    ctx->pc = 0x16b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b808: 0x240202d
    ctx->pc = 0x16b808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b80c: 0xffbf0018
    ctx->pc = 0x16b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b810: 0xc05ae2e
    ctx->pc = 0x16B810u;
    SET_GPR_U32(ctx, 31, 0x16B818u);
    ctx->pc = 0x16B814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6892), GPR_U32(ctx, 18));
    ctx->pc = 0x16B8B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B8B8_0x16b8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B818u; }
    }
    if (ctx->pc != 0x16B818u) { return; }
    ctx->pc = 0x16B818u;
    // 0x16b818: 0xc0560fc
    ctx->pc = 0x16B818u;
    SET_GPR_U32(ctx, 31, 0x16B820u);
    ctx->pc = 0x1583F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583F0_0x1583f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B820u; }
    }
    if (ctx->pc != 0x16B820u) { return; }
    ctx->pc = 0x16B820u;
    // 0x16b820: 0x40802d
    ctx->pc = 0x16b820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b824: 0x3c05ff00
    ctx->pc = 0x16b824u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16b828: 0x220202d
    ctx->pc = 0x16b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b82c: 0x34a50d08
    ctx->pc = 0x16b82cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3336));
    // 0x16b830: 0x16000007
    ctx->pc = 0x16B830u;
    {
        const bool branch_taken_0x16b830 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B834u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b830) {
            ctx->pc = 0x16B850u;
            goto label_16b850;
        }
    }
    ctx->pc = 0x16B838u;
    // 0x16b838: 0xdfb00000
    ctx->pc = 0x16b838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b83c: 0xdfb10008
    ctx->pc = 0x16b83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b840: 0xdfb20010
    ctx->pc = 0x16b840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b844: 0xdfbf0018
    ctx->pc = 0x16b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b848: 0x805a704
    ctx->pc = 0x16B848u;
    ctx->pc = 0x16B84Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16B850u;
label_16b850:
    // 0x16b850: 0x3c050017
    ctx->pc = 0x16b850u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16b854: 0x200202d
    ctx->pc = 0x16b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b858: 0xc0560a0
    ctx->pc = 0x16B858u;
    SET_GPR_U32(ctx, 31, 0x16B860u);
    ctx->pc = 0x16B85Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949160));
    ctx->pc = 0x158280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158280_0x158280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B860u; }
    }
    if (ctx->pc != 0x16B860u) { return; }
    ctx->pc = 0x16B860u;
    // 0x16b860: 0x1040000d
    ctx->pc = 0x16B860u;
    {
        const bool branch_taken_0x16b860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B864u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b860) {
            ctx->pc = 0x16B898u;
            goto label_16b898;
        }
    }
    ctx->pc = 0x16B868u;
    // 0x16b868: 0xc05ae64
    ctx->pc = 0x16B868u;
    SET_GPR_U32(ctx, 31, 0x16B870u);
    ctx->pc = 0x16B990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B990_0x16b990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B870u; }
    }
    if (ctx->pc != 0x16B870u) { return; }
    ctx->pc = 0x16B870u;
    // 0x16b870: 0x220202d
    ctx->pc = 0x16b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b874: 0x3c05ff00
    ctx->pc = 0x16b874u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16b878: 0xdfb00000
    ctx->pc = 0x16b878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b87c: 0xdfb10008
    ctx->pc = 0x16b87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b880: 0x34a50d09
    ctx->pc = 0x16b880u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3337));
    // 0x16b884: 0xdfb20010
    ctx->pc = 0x16b884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b888: 0xdfbf0018
    ctx->pc = 0x16b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b88c: 0x805a704
    ctx->pc = 0x16B88Cu;
    ctx->pc = 0x16B890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16B894u;
    // 0x16b894: 0x0
    ctx->pc = 0x16b894u;
    // NOP
label_16b898:
    // 0x16b898: 0xae500000
    ctx->pc = 0x16b898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x16b89c: 0xdfb00000
    ctx->pc = 0x16b89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b8a0: 0xdfb10008
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b8a4: 0xdfb20010
    ctx->pc = 0x16b8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b8a8: 0xdfbf0018
    ctx->pc = 0x16b8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b8ac: 0x3e00008
    ctx->pc = 0x16B8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B7B8u: goto label_16b7b8;
            case 0x16B7CCu: goto label_16b7cc;
            case 0x16B7D8u: goto label_16b7d8;
            case 0x16B850u: goto label_16b850;
            case 0x16B898u: goto label_16b898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B8B4u;
    // 0x16b8b4: 0x0
    ctx->pc = 0x16b8b4u;
    // NOP
}
