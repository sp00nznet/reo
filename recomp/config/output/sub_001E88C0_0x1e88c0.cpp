#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E88C0
// Address: 0x1e88c0 - 0x1e8f30
void sub_001E88C0_0x1e88c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e88c0u;

    // 0x1e88c0: 0x27bdffe0
    ctx->pc = 0x1e88c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e88c4: 0xffbe0010
    ctx->pc = 0x1e88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e88c8: 0x3a0f02d
    ctx->pc = 0x1e88c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88cc: 0x80102d
    ctx->pc = 0x1e88ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88d0: 0xa7c20000
    ctx->pc = 0x1e88d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e88d4: 0xafc00004
    ctx->pc = 0x1e88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e88d8:
    // 0x1e88d8: 0x8fc20004
    ctx->pc = 0x1e88d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e88dc: 0x28420040
    ctx->pc = 0x1e88dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1e88e0: 0x14400003
    ctx->pc = 0x1E88E0u;
    {
        const bool branch_taken_0x1e88e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e88e0) {
            ctx->pc = 0x1E88F0u;
            goto label_1e88f0;
        }
    }
    ctx->pc = 0x1E88E8u;
    // 0x1e88e8: 0x1000001a
    ctx->pc = 0x1E88E8u;
    {
        const bool branch_taken_0x1e88e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e88e8) {
            ctx->pc = 0x1E8954u;
            goto label_1e8954;
        }
    }
    ctx->pc = 0x1E88F0u;
label_1e88f0:
    // 0x1e88f0: 0x8fc30004
    ctx->pc = 0x1e88f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e88f4: 0x60102d
    ctx->pc = 0x1e88f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88f8: 0x210c0
    ctx->pc = 0x1e88f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e88fc: 0x431021
    ctx->pc = 0x1e88fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8900: 0x21880
    ctx->pc = 0x1e8900u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8904: 0x8f828028
    ctx->pc = 0x1e8904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8908: 0x621021
    ctx->pc = 0x1e8908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e890c: 0x84430000
    ctx->pc = 0x1e890cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8910: 0x87c20000
    ctx->pc = 0x1e8910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8914: 0x1462000a
    ctx->pc = 0x1E8914u;
    {
        const bool branch_taken_0x1e8914 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e8914) {
            ctx->pc = 0x1E8940u;
            goto label_1e8940;
        }
    }
    ctx->pc = 0x1E891Cu;
    // 0x1e891c: 0x8fc30004
    ctx->pc = 0x1e891cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8920: 0x60102d
    ctx->pc = 0x1e8920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8924: 0x210c0
    ctx->pc = 0x1e8924u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8928: 0x431021
    ctx->pc = 0x1e8928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e892c: 0x21880
    ctx->pc = 0x1e892cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8930: 0x8f828028
    ctx->pc = 0x1e8930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8934: 0x621021
    ctx->pc = 0x1e8934u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8938: 0x10000007
    ctx->pc = 0x1E8938u;
    {
        const bool branch_taken_0x1e8938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8938) {
            ctx->pc = 0x1E8958u;
            goto label_1e8958;
        }
    }
    ctx->pc = 0x1E8940u;
label_1e8940:
    // 0x1e8940: 0x8fc20004
    ctx->pc = 0x1e8940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8944: 0x24420001
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8948: 0xafc20004
    ctx->pc = 0x1e8948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e894c: 0x1000ffe2
    ctx->pc = 0x1E894Cu;
    {
        const bool branch_taken_0x1e894c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e894c) {
            ctx->pc = 0x1E88D8u;
            goto label_1e88d8;
        }
    }
    ctx->pc = 0x1E8954u;
label_1e8954:
    // 0x1e8954: 0x102d
    ctx->pc = 0x1e8954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8958:
    // 0x1e8958: 0x3c0e82d
    ctx->pc = 0x1e8958u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e895c: 0xdfbe0010
    ctx->pc = 0x1e895cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8960: 0x27bd0020
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8964: 0x3e00008
    ctx->pc = 0x1E8964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88D8u: goto label_1e88d8;
            case 0x1E88F0u: goto label_1e88f0;
            case 0x1E8940u: goto label_1e8940;
            case 0x1E8954u: goto label_1e8954;
            case 0x1E8958u: goto label_1e8958;
            case 0x1E89D8u: goto label_1e89d8;
            case 0x1E8A0Cu: goto label_1e8a0c;
            case 0x1E8A40u: goto label_1e8a40;
            case 0x1E8A84u: goto label_1e8a84;
            case 0x1E8A94u: goto label_1e8a94;
            case 0x1E8B30u: goto label_1e8b30;
            case 0x1E8B6Cu: goto label_1e8b6c;
            case 0x1E8BB4u: goto label_1e8bb4;
            case 0x1E8C08u: goto label_1e8c08;
            case 0x1E8C44u: goto label_1e8c44;
            case 0x1E8C74u: goto label_1e8c74;
            case 0x1E8C90u: goto label_1e8c90;
            case 0x1E8C94u: goto label_1e8c94;
            case 0x1E8CACu: goto label_1e8cac;
            case 0x1E8D00u: goto label_1e8d00;
            case 0x1E8D34u: goto label_1e8d34;
            case 0x1E8D48u: goto label_1e8d48;
            case 0x1E8D78u: goto label_1e8d78;
            case 0x1E8E14u: goto label_1e8e14;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F18u: goto label_1e8f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E896Cu;
    // 0x1e896c: 0x27bdffd0
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8970: 0xffbe0020
    ctx->pc = 0x1e8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e8974: 0xffbf0028
    ctx->pc = 0x1e8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e8978: 0x3a0f02d
    ctx->pc = 0x1e8978u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e897c: 0xafc40000
    ctx->pc = 0x1e897cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8980: 0xafc50004
    ctx->pc = 0x1e8980u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e8984: 0xafc60008
    ctx->pc = 0x1e8984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e8988: 0xc0413bc
    ctx->pc = 0x1E8988u;
    SET_GPR_U32(ctx, 31, 0x1E8990u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8990u; }
    }
    if (ctx->pc != 0x1E8990u) { return; }
    ctx->pc = 0x1E8990u;
    // 0x1e8990: 0xac400000
    ctx->pc = 0x1e8990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e8994: 0x8fc20004
    ctx->pc = 0x1e8994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8998: 0xafc20014
    ctx->pc = 0x1e8998u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1e899c: 0x8fc40000
    ctx->pc = 0x1e899cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e89a0: 0xc07a216
    ctx->pc = 0x1E89A0u;
    SET_GPR_U32(ctx, 31, 0x1E89A8u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89A8u; }
    }
    if (ctx->pc != 0x1E89A8u) { return; }
    ctx->pc = 0x1E89A8u;
    // 0x1e89a8: 0xafc20010
    ctx->pc = 0x1e89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e89ac: 0x8fc20010
    ctx->pc = 0x1e89acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e89b0: 0x14400009
    ctx->pc = 0x1E89B0u;
    {
        const bool branch_taken_0x1e89b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e89b0) {
            ctx->pc = 0x1E89D8u;
            goto label_1e89d8;
        }
    }
    ctx->pc = 0x1E89B8u;
    // 0x1e89b8: 0xc0413bc
    ctx->pc = 0x1E89B8u;
    SET_GPR_U32(ctx, 31, 0x1E89C0u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89C0u; }
    }
    if (ctx->pc != 0x1E89C0u) { return; }
    ctx->pc = 0x1E89C0u;
    // 0x1e89c0: 0x40182d
    ctx->pc = 0x1e89c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89c4: 0x2402000e
    ctx->pc = 0x1e89c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e89c8: 0xac620000
    ctx->pc = 0x1e89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e89cc: 0x2402ffff
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e89d0: 0x10000030
    ctx->pc = 0x1E89D0u;
    {
        const bool branch_taken_0x1e89d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e89d0) {
            ctx->pc = 0x1E8A94u;
            goto label_1e8a94;
        }
    }
    ctx->pc = 0x1E89D8u;
label_1e89d8:
    // 0x1e89d8: 0x8fc20010
    ctx->pc = 0x1e89d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e89dc: 0x94430002
    ctx->pc = 0x1e89dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e89e0: 0x24020001
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e89e4: 0x14620009
    ctx->pc = 0x1E89E4u;
    {
        const bool branch_taken_0x1e89e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e89e4) {
            ctx->pc = 0x1E8A0Cu;
            goto label_1e8a0c;
        }
    }
    ctx->pc = 0x1E89ECu;
    // 0x1e89ec: 0xc0413bc
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89F4u; }
    }
    if (ctx->pc != 0x1E89F4u) { return; }
    ctx->pc = 0x1E89F4u;
    // 0x1e89f4: 0x40182d
    ctx->pc = 0x1e89f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89f8: 0x2402006d
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
    // 0x1e89fc: 0xac620000
    ctx->pc = 0x1e89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8a00: 0x2402ffff
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8a04: 0x10000023
    ctx->pc = 0x1E8A04u;
    {
        const bool branch_taken_0x1e8a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a04) {
            ctx->pc = 0x1E8A94u;
            goto label_1e8a94;
        }
    }
    ctx->pc = 0x1E8A0Cu;
label_1e8a0c:
    // 0x1e8a0c: 0x8fc20010
    ctx->pc = 0x1e8a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8a10: 0x94430004
    ctx->pc = 0x1e8a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8a14: 0x3402ffff
    ctx->pc = 0x1e8a14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e8a18: 0x10620009
    ctx->pc = 0x1E8A18u;
    {
        const bool branch_taken_0x1e8a18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8a18) {
            ctx->pc = 0x1E8A40u;
            goto label_1e8a40;
        }
    }
    ctx->pc = 0x1E8A20u;
    // 0x1e8a20: 0xc0413bc
    ctx->pc = 0x1E8A20u;
    SET_GPR_U32(ctx, 31, 0x1E8A28u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A28u; }
    }
    if (ctx->pc != 0x1E8A28u) { return; }
    ctx->pc = 0x1E8A28u;
    // 0x1e8a28: 0x40182d
    ctx->pc = 0x1e8a28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a2c: 0x2402000e
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8a30: 0xac620000
    ctx->pc = 0x1e8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8a34: 0x2402ffff
    ctx->pc = 0x1e8a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8a38: 0x10000016
    ctx->pc = 0x1E8A38u;
    {
        const bool branch_taken_0x1e8a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a38) {
            ctx->pc = 0x1E8A94u;
            goto label_1e8a94;
        }
    }
    ctx->pc = 0x1E8A40u;
label_1e8a40:
    // 0x1e8a40: 0x8fc20014
    ctx->pc = 0x1e8a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e8a44: 0x88430007
    ctx->pc = 0x1e8a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1e8a48: 0x98430004
    ctx->pc = 0x1e8a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1e8a4c: 0x8fc20014
    ctx->pc = 0x1e8a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e8a50: 0x94420002
    ctx->pc = 0x1e8a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e8a54: 0x60202d
    ctx->pc = 0x1e8a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a58: 0x40282d
    ctx->pc = 0x1e8a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a5c: 0x302d
    ctx->pc = 0x1e8a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a60: 0xc075ec0
    ctx->pc = 0x1E8A60u;
    SET_GPR_U32(ctx, 31, 0x1E8A68u);
    ctx->pc = 0x1D7B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B00_0x1d7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A68u; }
    }
    if (ctx->pc != 0x1E8A68u) { return; }
    ctx->pc = 0x1E8A68u;
    // 0x1e8a68: 0xa7c2000c
    ctx->pc = 0x1e8a68u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a6c: 0x87c2000c
    ctx->pc = 0x1e8a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8a70: 0x4410004
    ctx->pc = 0x1E8A70u;
    {
        const bool branch_taken_0x1e8a70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e8a70) {
            ctx->pc = 0x1E8A84u;
            goto label_1e8a84;
        }
    }
    ctx->pc = 0x1E8A78u;
    // 0x1e8a78: 0x87c2000c
    ctx->pc = 0x1e8a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8a7c: 0x10000005
    ctx->pc = 0x1E8A7Cu;
    {
        const bool branch_taken_0x1e8a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a7c) {
            ctx->pc = 0x1E8A94u;
            goto label_1e8a94;
        }
    }
    ctx->pc = 0x1E8A84u;
label_1e8a84:
    // 0x1e8a84: 0x8fc30010
    ctx->pc = 0x1e8a84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8a88: 0x97c2000c
    ctx->pc = 0x1e8a88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8a8c: 0xa4620000
    ctx->pc = 0x1e8a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a90: 0x102d
    ctx->pc = 0x1e8a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a94:
    // 0x1e8a94: 0x3c0e82d
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a98: 0xdfbe0020
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8a9c: 0xdfbf0028
    ctx->pc = 0x1e8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8aa0: 0x27bd0030
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8aa4: 0x3e00008
    ctx->pc = 0x1E8AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88D8u: goto label_1e88d8;
            case 0x1E88F0u: goto label_1e88f0;
            case 0x1E8940u: goto label_1e8940;
            case 0x1E8954u: goto label_1e8954;
            case 0x1E8958u: goto label_1e8958;
            case 0x1E89D8u: goto label_1e89d8;
            case 0x1E8A0Cu: goto label_1e8a0c;
            case 0x1E8A40u: goto label_1e8a40;
            case 0x1E8A84u: goto label_1e8a84;
            case 0x1E8A94u: goto label_1e8a94;
            case 0x1E8B30u: goto label_1e8b30;
            case 0x1E8B6Cu: goto label_1e8b6c;
            case 0x1E8BB4u: goto label_1e8bb4;
            case 0x1E8C08u: goto label_1e8c08;
            case 0x1E8C44u: goto label_1e8c44;
            case 0x1E8C74u: goto label_1e8c74;
            case 0x1E8C90u: goto label_1e8c90;
            case 0x1E8C94u: goto label_1e8c94;
            case 0x1E8CACu: goto label_1e8cac;
            case 0x1E8D00u: goto label_1e8d00;
            case 0x1E8D34u: goto label_1e8d34;
            case 0x1E8D48u: goto label_1e8d48;
            case 0x1E8D78u: goto label_1e8d78;
            case 0x1E8E14u: goto label_1e8e14;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F18u: goto label_1e8f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8AACu;
    // 0x1e8aac: 0x27bdffb0
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e8ab0: 0xffbe0040
    ctx->pc = 0x1e8ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1e8ab4: 0xffbf0048
    ctx->pc = 0x1e8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e8ab8: 0x3a0f02d
    ctx->pc = 0x1e8ab8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8abc: 0xafc40000
    ctx->pc = 0x1e8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8ac0: 0xafc50004
    ctx->pc = 0x1e8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e8ac4: 0xafc60008
    ctx->pc = 0x1e8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e8ac8: 0x27c30030
    ctx->pc = 0x1e8ac8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 48));
    // 0x1e8acc: 0x27828048
    ctx->pc = 0x1e8accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294934600));
    // 0x1e8ad0: 0x68440007
    ctx->pc = 0x1e8ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1e8ad4: 0x6c440000
    ctx->pc = 0x1e8ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1e8ad8: 0xb0640007
    ctx->pc = 0x1e8ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8adc: 0xb4640000
    ctx->pc = 0x1e8adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e8ae0: 0xc0413bc
    ctx->pc = 0x1E8AE0u;
    SET_GPR_U32(ctx, 31, 0x1E8AE8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE8u; }
    }
    if (ctx->pc != 0x1E8AE8u) { return; }
    ctx->pc = 0x1E8AE8u;
    // 0x1e8ae8: 0xac400000
    ctx->pc = 0x1e8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e8aec: 0x8fc20004
    ctx->pc = 0x1e8aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8af0: 0xafc20024
    ctx->pc = 0x1e8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1e8af4: 0x8fc40000
    ctx->pc = 0x1e8af4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8af8: 0xc07a216
    ctx->pc = 0x1E8AF8u;
    SET_GPR_U32(ctx, 31, 0x1E8B00u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B00u; }
    }
    if (ctx->pc != 0x1E8B00u) { return; }
    ctx->pc = 0x1E8B00u;
    // 0x1e8b00: 0xafc2001c
    ctx->pc = 0x1e8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1e8b04: 0x8fc2001c
    ctx->pc = 0x1e8b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8b08: 0x14400009
    ctx->pc = 0x1E8B08u;
    {
        const bool branch_taken_0x1e8b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b08) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8B10u;
    // 0x1e8b10: 0xc0413bc
    ctx->pc = 0x1E8B10u;
    SET_GPR_U32(ctx, 31, 0x1E8B18u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B18u; }
    }
    if (ctx->pc != 0x1E8B18u) { return; }
    ctx->pc = 0x1E8B18u;
    // 0x1e8b18: 0x40182d
    ctx->pc = 0x1e8b18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b1c: 0x2402000e
    ctx->pc = 0x1e8b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8b20: 0xac620000
    ctx->pc = 0x1e8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8b24: 0x2402ffff
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8b28: 0x100000ba
    ctx->pc = 0x1E8B28u;
    {
        const bool branch_taken_0x1e8b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b28) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8B30u;
label_1e8b30:
    // 0x1e8b30: 0x8fc4001c
    ctx->pc = 0x1e8b30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8b34: 0xc07aa87
    ctx->pc = 0x1E8B34u;
    SET_GPR_U32(ctx, 31, 0x1E8B3Cu);
    ctx->pc = 0x1EAA1Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAA1C_0x1eaa1c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B3Cu; }
    }
    if (ctx->pc != 0x1E8B3Cu) { return; }
    ctx->pc = 0x1E8B3Cu;
    // 0x1e8b3c: 0xa7c2000c
    ctx->pc = 0x1e8b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8b40: 0x87c2000c
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8b44: 0x4410009
    ctx->pc = 0x1E8B44u;
    {
        const bool branch_taken_0x1e8b44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e8b44) {
            ctx->pc = 0x1E8B6Cu;
            goto label_1e8b6c;
        }
    }
    ctx->pc = 0x1E8B4Cu;
    // 0x1e8b4c: 0xc0413bc
    ctx->pc = 0x1E8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B54u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B54u; }
    }
    if (ctx->pc != 0x1E8B54u) { return; }
    ctx->pc = 0x1E8B54u;
    // 0x1e8b54: 0x40182d
    ctx->pc = 0x1e8b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b58: 0x2402000e
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8b5c: 0xac620000
    ctx->pc = 0x1e8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8b60: 0x2402ffff
    ctx->pc = 0x1e8b60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8b64: 0x100000ab
    ctx->pc = 0x1E8B64u;
    {
        const bool branch_taken_0x1e8b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b64) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8B6Cu;
label_1e8b6c:
    // 0x1e8b6c: 0x8fc2001c
    ctx->pc = 0x1e8b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8b70: 0x94430004
    ctx->pc = 0x1e8b70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8b74: 0x24020ff5
    ctx->pc = 0x1e8b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4085));
    // 0x1e8b78: 0x1062000e
    ctx->pc = 0x1E8B78u;
    {
        const bool branch_taken_0x1e8b78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8b78) {
            ctx->pc = 0x1E8BB4u;
            goto label_1e8bb4;
        }
    }
    ctx->pc = 0x1E8B80u;
    // 0x1e8b80: 0x8fc2001c
    ctx->pc = 0x1e8b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8b84: 0x94430004
    ctx->pc = 0x1e8b84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8b88: 0x24020ff6
    ctx->pc = 0x1e8b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4086));
    // 0x1e8b8c: 0x10620009
    ctx->pc = 0x1E8B8Cu;
    {
        const bool branch_taken_0x1e8b8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8b8c) {
            ctx->pc = 0x1E8BB4u;
            goto label_1e8bb4;
        }
    }
    ctx->pc = 0x1E8B94u;
    // 0x1e8b94: 0xc0413bc
    ctx->pc = 0x1E8B94u;
    SET_GPR_U32(ctx, 31, 0x1E8B9Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B9Cu; }
    }
    if (ctx->pc != 0x1E8B9Cu) { return; }
    ctx->pc = 0x1E8B9Cu;
    // 0x1e8b9c: 0x40182d
    ctx->pc = 0x1e8b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ba0: 0x2402000e
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8ba4: 0xac620000
    ctx->pc = 0x1e8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8ba8: 0x2402ffff
    ctx->pc = 0x1e8ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8bac: 0x10000099
    ctx->pc = 0x1E8BACu;
    {
        const bool branch_taken_0x1e8bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8bac) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8BB4u;
label_1e8bb4:
    // 0x1e8bb4: 0x8fc2001c
    ctx->pc = 0x1e8bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8bb8: 0x84420000
    ctx->pc = 0x1e8bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8bbc: 0x40202d
    ctx->pc = 0x1e8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bc0: 0xc075f00
    ctx->pc = 0x1E8BC0u;
    SET_GPR_U32(ctx, 31, 0x1E8BC8u);
    ctx->pc = 0x1D7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7C00_0x1d7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BC8u; }
    }
    if (ctx->pc != 0x1E8BC8u) { return; }
    ctx->pc = 0x1E8BC8u;
    // 0x1e8bc8: 0xa7c2000c
    ctx->pc = 0x1e8bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8bcc: 0x87c3000c
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8bd0: 0x2402ffff
    ctx->pc = 0x1e8bd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8bd4: 0x1062000c
    ctx->pc = 0x1E8BD4u;
    {
        const bool branch_taken_0x1e8bd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8bd4) {
            ctx->pc = 0x1E8C08u;
            goto label_1e8c08;
        }
    }
    ctx->pc = 0x1E8BDCu;
    // 0x1e8bdc: 0x87c2000c
    ctx->pc = 0x1e8bdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8be0: 0x4410009
    ctx->pc = 0x1E8BE0u;
    {
        const bool branch_taken_0x1e8be0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e8be0) {
            ctx->pc = 0x1E8C08u;
            goto label_1e8c08;
        }
    }
    ctx->pc = 0x1E8BE8u;
    // 0x1e8be8: 0xc0413bc
    ctx->pc = 0x1E8BE8u;
    SET_GPR_U32(ctx, 31, 0x1E8BF0u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BF0u; }
    }
    if (ctx->pc != 0x1E8BF0u) { return; }
    ctx->pc = 0x1E8BF0u;
    // 0x1e8bf0: 0x40182d
    ctx->pc = 0x1e8bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8bf4: 0x2402000e
    ctx->pc = 0x1e8bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8bf8: 0xac620000
    ctx->pc = 0x1e8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8bfc: 0x2402ffff
    ctx->pc = 0x1e8bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c00: 0x10000084
    ctx->pc = 0x1E8C00u;
    {
        const bool branch_taken_0x1e8c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c00) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8C08u;
label_1e8c08:
    // 0x1e8c08: 0x8fc2001c
    ctx->pc = 0x1e8c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e8c0c: 0x84420000
    ctx->pc = 0x1e8c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8c10: 0x27c3000e
    ctx->pc = 0x1e8c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 14));
    // 0x1e8c14: 0x27c60010
    ctx->pc = 0x1e8c14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1e8c18: 0x27c70014
    ctx->pc = 0x1e8c18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 20));
    // 0x1e8c1c: 0x40202d
    ctx->pc = 0x1e8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c20: 0x60282d
    ctx->pc = 0x1e8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c24: 0xc076078
    ctx->pc = 0x1E8C24u;
    SET_GPR_U32(ctx, 31, 0x1E8C2Cu);
    ctx->pc = 0x1D81E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D81E0_0x1d81e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C2Cu; }
    }
    if (ctx->pc != 0x1E8C2Cu) { return; }
    ctx->pc = 0x1E8C2Cu;
    // 0x1e8c2c: 0xa7c2000c
    ctx->pc = 0x1e8c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8c30: 0x87c2000c
    ctx->pc = 0x1e8c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8c34: 0x14400003
    ctx->pc = 0x1E8C34u;
    {
        const bool branch_taken_0x1e8c34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c34) {
            ctx->pc = 0x1E8C44u;
            goto label_1e8c44;
        }
    }
    ctx->pc = 0x1E8C3Cu;
    // 0x1e8c3c: 0x10000014
    ctx->pc = 0x1E8C3Cu;
    {
        const bool branch_taken_0x1e8c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c3c) {
            ctx->pc = 0x1E8C90u;
            goto label_1e8c90;
        }
    }
    ctx->pc = 0x1E8C44u;
label_1e8c44:
    // 0x1e8c44: 0x87c3000c
    ctx->pc = 0x1e8c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8c48: 0x2402ffff
    ctx->pc = 0x1e8c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c4c: 0x10620009
    ctx->pc = 0x1E8C4Cu;
    {
        const bool branch_taken_0x1e8c4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8c4c) {
            ctx->pc = 0x1E8C74u;
            goto label_1e8c74;
        }
    }
    ctx->pc = 0x1E8C54u;
    // 0x1e8c54: 0xc0413bc
    ctx->pc = 0x1E8C54u;
    SET_GPR_U32(ctx, 31, 0x1E8C5Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C5Cu; }
    }
    if (ctx->pc != 0x1E8C5Cu) { return; }
    ctx->pc = 0x1E8C5Cu;
    // 0x1e8c5c: 0x40182d
    ctx->pc = 0x1e8c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c60: 0x2402000e
    ctx->pc = 0x1e8c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8c64: 0xac620000
    ctx->pc = 0x1e8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8c68: 0x2402ffff
    ctx->pc = 0x1e8c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c6c: 0x10000069
    ctx->pc = 0x1E8C6Cu;
    {
        const bool branch_taken_0x1e8c6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c6c) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8C74u;
label_1e8c74:
    // 0x1e8c74: 0x27c20030
    ctx->pc = 0x1e8c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x1e8c78: 0x40202d
    ctx->pc = 0x1e8c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c7c: 0x282d
    ctx->pc = 0x1e8c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c80: 0xc079fb4
    ctx->pc = 0x1E8C80u;
    SET_GPR_U32(ctx, 31, 0x1E8C88u);
    ctx->pc = 0x1E7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7ED0_0x1e7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C88u; }
    }
    if (ctx->pc != 0x1E8C88u) { return; }
    ctx->pc = 0x1E8C88u;
    // 0x1e8c88: 0x1000ffdf
    ctx->pc = 0x1E8C88u;
    {
        const bool branch_taken_0x1e8c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c88) {
            ctx->pc = 0x1E8C08u;
            goto label_1e8c08;
        }
    }
    ctx->pc = 0x1E8C90u;
label_1e8c90:
    // 0x1e8c90: 0xafc00018
    ctx->pc = 0x1e8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_1e8c94:
    // 0x1e8c94: 0x8fc20018
    ctx->pc = 0x1e8c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8c98: 0x28420040
    ctx->pc = 0x1e8c98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1e8c9c: 0x14400003
    ctx->pc = 0x1E8C9Cu;
    {
        const bool branch_taken_0x1e8c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c9c) {
            ctx->pc = 0x1E8CACu;
            goto label_1e8cac;
        }
    }
    ctx->pc = 0x1E8CA4u;
    // 0x1e8ca4: 0x10000028
    ctx->pc = 0x1E8CA4u;
    {
        const bool branch_taken_0x1e8ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ca4) {
            ctx->pc = 0x1E8D48u;
            goto label_1e8d48;
        }
    }
    ctx->pc = 0x1E8CACu;
label_1e8cac:
    // 0x1e8cac: 0x8fc30018
    ctx->pc = 0x1e8cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8cb0: 0x60102d
    ctx->pc = 0x1e8cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cb4: 0x210c0
    ctx->pc = 0x1e8cb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8cb8: 0x431021
    ctx->pc = 0x1e8cb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8cbc: 0x21880
    ctx->pc = 0x1e8cbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8cc0: 0x8f828028
    ctx->pc = 0x1e8cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8cc4: 0x621021
    ctx->pc = 0x1e8cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8cc8: 0x94430002
    ctx->pc = 0x1e8cc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e8ccc: 0x24020001
    ctx->pc = 0x1e8cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8cd0: 0x1462000b
    ctx->pc = 0x1E8CD0u;
    {
        const bool branch_taken_0x1e8cd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e8cd0) {
            ctx->pc = 0x1E8D00u;
            goto label_1e8d00;
        }
    }
    ctx->pc = 0x1E8CD8u;
    // 0x1e8cd8: 0x8fc30018
    ctx->pc = 0x1e8cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8cdc: 0x60102d
    ctx->pc = 0x1e8cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ce0: 0x210c0
    ctx->pc = 0x1e8ce0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8ce4: 0x431021
    ctx->pc = 0x1e8ce4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8ce8: 0x21880
    ctx->pc = 0x1e8ce8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8cec: 0x8f828028
    ctx->pc = 0x1e8cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8cf0: 0x621021
    ctx->pc = 0x1e8cf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8cf4: 0x40202d
    ctx->pc = 0x1e8cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cf8: 0xc07aa87
    ctx->pc = 0x1E8CF8u;
    SET_GPR_U32(ctx, 31, 0x1E8D00u);
    ctx->pc = 0x1EAA1Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAA1C_0x1eaa1c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D00u; }
    }
    if (ctx->pc != 0x1E8D00u) { return; }
    ctx->pc = 0x1E8D00u;
label_1e8d00:
    // 0x1e8d00: 0x8fc30018
    ctx->pc = 0x1e8d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8d04: 0x60102d
    ctx->pc = 0x1e8d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d08: 0x210c0
    ctx->pc = 0x1e8d08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8d0c: 0x431021
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8d10: 0x21880
    ctx->pc = 0x1e8d10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8d14: 0x8f828028
    ctx->pc = 0x1e8d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8d18: 0x621021
    ctx->pc = 0x1e8d18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8d1c: 0x94430002
    ctx->pc = 0x1e8d1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e8d20: 0x3402ffff
    ctx->pc = 0x1e8d20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e8d24: 0x14620003
    ctx->pc = 0x1E8D24u;
    {
        const bool branch_taken_0x1e8d24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e8d24) {
            ctx->pc = 0x1E8D34u;
            goto label_1e8d34;
        }
    }
    ctx->pc = 0x1E8D2Cu;
    // 0x1e8d2c: 0x10000006
    ctx->pc = 0x1E8D2Cu;
    {
        const bool branch_taken_0x1e8d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d2c) {
            ctx->pc = 0x1E8D48u;
            goto label_1e8d48;
        }
    }
    ctx->pc = 0x1E8D34u;
label_1e8d34:
    // 0x1e8d34: 0x8fc20018
    ctx->pc = 0x1e8d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8d38: 0x24420001
    ctx->pc = 0x1e8d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8d3c: 0xafc20018
    ctx->pc = 0x1e8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1e8d40: 0x1000ffd4
    ctx->pc = 0x1E8D40u;
    {
        const bool branch_taken_0x1e8d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d40) {
            ctx->pc = 0x1E8C94u;
            goto label_1e8c94;
        }
    }
    ctx->pc = 0x1E8D48u;
label_1e8d48:
    // 0x1e8d48: 0x8fc20018
    ctx->pc = 0x1e8d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8d4c: 0x28420040
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1e8d50: 0x14400009
    ctx->pc = 0x1E8D50u;
    {
        const bool branch_taken_0x1e8d50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d50) {
            ctx->pc = 0x1E8D78u;
            goto label_1e8d78;
        }
    }
    ctx->pc = 0x1E8D58u;
    // 0x1e8d58: 0xc0413bc
    ctx->pc = 0x1E8D58u;
    SET_GPR_U32(ctx, 31, 0x1E8D60u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D60u; }
    }
    if (ctx->pc != 0x1E8D60u) { return; }
    ctx->pc = 0x1E8D60u;
    // 0x1e8d60: 0x40182d
    ctx->pc = 0x1e8d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d64: 0x2402006c
    ctx->pc = 0x1e8d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e8d68: 0xac620000
    ctx->pc = 0x1e8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8d6c: 0x2402ffff
    ctx->pc = 0x1e8d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8d70: 0x10000028
    ctx->pc = 0x1E8D70u;
    {
        const bool branch_taken_0x1e8d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d70) {
            ctx->pc = 0x1E8E14u;
            goto label_1e8e14;
        }
    }
    ctx->pc = 0x1E8D78u;
label_1e8d78:
    // 0x1e8d78: 0x8fc30018
    ctx->pc = 0x1e8d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e8d7c: 0x60102d
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d80: 0x210c0
    ctx->pc = 0x1e8d80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8d84: 0x431021
    ctx->pc = 0x1e8d84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8d88: 0x21880
    ctx->pc = 0x1e8d88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8d8c: 0x8f828028
    ctx->pc = 0x1e8d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8d90: 0x431021
    ctx->pc = 0x1e8d90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8d94: 0xafc20020
    ctx->pc = 0x1e8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1e8d98: 0x8fc30020
    ctx->pc = 0x1e8d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8d9c: 0x97c2000e
    ctx->pc = 0x1e8d9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x1e8da0: 0xa4620000
    ctx->pc = 0x1e8da0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8da4: 0x8fc30020
    ctx->pc = 0x1e8da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8da8: 0x24020001
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8dac: 0xa4620002
    ctx->pc = 0x1e8dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8db0: 0x8fc30020
    ctx->pc = 0x1e8db0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8db4: 0x2402007f
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e8db8: 0xa4620004
    ctx->pc = 0x1e8db8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8dbc: 0x8fc30020
    ctx->pc = 0x1e8dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8dc0: 0x97c20014
    ctx->pc = 0x1e8dc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e8dc4: 0xac620020
    ctx->pc = 0x1e8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1e8dc8: 0x8fc30020
    ctx->pc = 0x1e8dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8dcc: 0x8fc20010
    ctx->pc = 0x1e8dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8dd0: 0xac62001c
    ctx->pc = 0x1e8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1e8dd4: 0x8fc30024
    ctx->pc = 0x1e8dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1e8dd8: 0x24020002
    ctx->pc = 0x1e8dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8ddc: 0xa4620000
    ctx->pc = 0x1e8ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8de0: 0x8fc30024
    ctx->pc = 0x1e8de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1e8de4: 0x8fc20020
    ctx->pc = 0x1e8de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8de8: 0x94420020
    ctx->pc = 0x1e8de8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e8dec: 0xa4620002
    ctx->pc = 0x1e8decu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8df0: 0x8fc30024
    ctx->pc = 0x1e8df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1e8df4: 0x8fc20020
    ctx->pc = 0x1e8df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e8df8: 0x8c42001c
    ctx->pc = 0x1e8df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e8dfc: 0xa8620007
    ctx->pc = 0x1e8dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e8e00: 0xb8620004
    ctx->pc = 0x1e8e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e8e04: 0x8fc30008
    ctx->pc = 0x1e8e04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8e08: 0x24020008
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e8e0c: 0xac620000
    ctx->pc = 0x1e8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8e10: 0x8fc20018
    ctx->pc = 0x1e8e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_1e8e14:
    // 0x1e8e14: 0x3c0e82d
    ctx->pc = 0x1e8e14u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e18: 0xdfbe0040
    ctx->pc = 0x1e8e18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8e1c: 0xdfbf0048
    ctx->pc = 0x1e8e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e8e20: 0x27bd0050
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8e24: 0x3e00008
    ctx->pc = 0x1E8E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88D8u: goto label_1e88d8;
            case 0x1E88F0u: goto label_1e88f0;
            case 0x1E8940u: goto label_1e8940;
            case 0x1E8954u: goto label_1e8954;
            case 0x1E8958u: goto label_1e8958;
            case 0x1E89D8u: goto label_1e89d8;
            case 0x1E8A0Cu: goto label_1e8a0c;
            case 0x1E8A40u: goto label_1e8a40;
            case 0x1E8A84u: goto label_1e8a84;
            case 0x1E8A94u: goto label_1e8a94;
            case 0x1E8B30u: goto label_1e8b30;
            case 0x1E8B6Cu: goto label_1e8b6c;
            case 0x1E8BB4u: goto label_1e8bb4;
            case 0x1E8C08u: goto label_1e8c08;
            case 0x1E8C44u: goto label_1e8c44;
            case 0x1E8C74u: goto label_1e8c74;
            case 0x1E8C90u: goto label_1e8c90;
            case 0x1E8C94u: goto label_1e8c94;
            case 0x1E8CACu: goto label_1e8cac;
            case 0x1E8D00u: goto label_1e8d00;
            case 0x1E8D34u: goto label_1e8d34;
            case 0x1E8D48u: goto label_1e8d48;
            case 0x1E8D78u: goto label_1e8d78;
            case 0x1E8E14u: goto label_1e8e14;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F18u: goto label_1e8f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8E2Cu;
    // 0x1e8e2c: 0x27bdffe0
    ctx->pc = 0x1e8e2cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8e30: 0xffbe0010
    ctx->pc = 0x1e8e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e8e34: 0xffbf0018
    ctx->pc = 0x1e8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e8e38: 0x3a0f02d
    ctx->pc = 0x1e8e38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e3c: 0xafc40000
    ctx->pc = 0x1e8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8e40: 0xafc50004
    ctx->pc = 0x1e8e40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e8e44: 0xc0413bc
    ctx->pc = 0x1E8E44u;
    SET_GPR_U32(ctx, 31, 0x1E8E4Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E4Cu; }
    }
    if (ctx->pc != 0x1E8E4Cu) { return; }
    ctx->pc = 0x1E8E4Cu;
    // 0x1e8e4c: 0xac400000
    ctx->pc = 0x1e8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e8e50: 0x8fc40000
    ctx->pc = 0x1e8e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8e54: 0xc07a216
    ctx->pc = 0x1E8E54u;
    SET_GPR_U32(ctx, 31, 0x1E8E5Cu);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E5Cu; }
    }
    if (ctx->pc != 0x1E8E5Cu) { return; }
    ctx->pc = 0x1E8E5Cu;
    // 0x1e8e5c: 0xafc2000c
    ctx->pc = 0x1e8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e8e60: 0x8fc2000c
    ctx->pc = 0x1e8e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8e64: 0x14400009
    ctx->pc = 0x1E8E64u;
    {
        const bool branch_taken_0x1e8e64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e64) {
            ctx->pc = 0x1E8E8Cu;
            goto label_1e8e8c;
        }
    }
    ctx->pc = 0x1E8E6Cu;
    // 0x1e8e6c: 0xc0413bc
    ctx->pc = 0x1E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E74u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E74u; }
    }
    if (ctx->pc != 0x1E8E74u) { return; }
    ctx->pc = 0x1E8E74u;
    // 0x1e8e74: 0x40182d
    ctx->pc = 0x1e8e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e78: 0x2402000e
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8e7c: 0xac620000
    ctx->pc = 0x1e8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8e80: 0x2402ffff
    ctx->pc = 0x1e8e80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8e84: 0x10000024
    ctx->pc = 0x1E8E84u;
    {
        const bool branch_taken_0x1e8e84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e84) {
            ctx->pc = 0x1E8F18u;
            goto label_1e8f18;
        }
    }
    ctx->pc = 0x1E8E8Cu;
label_1e8e8c:
    // 0x1e8e8c: 0x8fc2000c
    ctx->pc = 0x1e8e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8e90: 0x94430004
    ctx->pc = 0x1e8e90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8e94: 0x3402ffff
    ctx->pc = 0x1e8e94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e8e98: 0x10620009
    ctx->pc = 0x1E8E98u;
    {
        const bool branch_taken_0x1e8e98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e8e98) {
            ctx->pc = 0x1E8EC0u;
            goto label_1e8ec0;
        }
    }
    ctx->pc = 0x1E8EA0u;
    // 0x1e8ea0: 0xc0413bc
    ctx->pc = 0x1E8EA0u;
    SET_GPR_U32(ctx, 31, 0x1E8EA8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EA8u; }
    }
    if (ctx->pc != 0x1E8EA8u) { return; }
    ctx->pc = 0x1E8EA8u;
    // 0x1e8ea8: 0x40182d
    ctx->pc = 0x1e8ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8eac: 0x2402000e
    ctx->pc = 0x1e8eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e8eb0: 0xac620000
    ctx->pc = 0x1e8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8eb4: 0x2402ffff
    ctx->pc = 0x1e8eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8eb8: 0x10000017
    ctx->pc = 0x1E8EB8u;
    {
        const bool branch_taken_0x1e8eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8eb8) {
            ctx->pc = 0x1E8F18u;
            goto label_1e8f18;
        }
    }
    ctx->pc = 0x1E8EC0u;
label_1e8ec0:
    // 0x1e8ec0: 0x8fc3000c
    ctx->pc = 0x1e8ec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8ec4: 0x8fc2000c
    ctx->pc = 0x1e8ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8ec8: 0x94420020
    ctx->pc = 0x1e8ec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e8ecc: 0x8c64001c
    ctx->pc = 0x1e8eccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1e8ed0: 0x282d
    ctx->pc = 0x1e8ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ed4: 0x40302d
    ctx->pc = 0x1e8ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ed8: 0xc075ee0
    ctx->pc = 0x1E8ED8u;
    SET_GPR_U32(ctx, 31, 0x1E8EE0u);
    ctx->pc = 0x1D7B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B80_0x1d7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EE0u; }
    }
    if (ctx->pc != 0x1E8EE0u) { return; }
    ctx->pc = 0x1E8EE0u;
    // 0x1e8ee0: 0xa7c20008
    ctx->pc = 0x1e8ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8ee4: 0x87c20008
    ctx->pc = 0x1e8ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8ee8: 0x4410004
    ctx->pc = 0x1E8EE8u;
    {
        const bool branch_taken_0x1e8ee8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e8ee8) {
            ctx->pc = 0x1E8EFCu;
            goto label_1e8efc;
        }
    }
    ctx->pc = 0x1E8EF0u;
    // 0x1e8ef0: 0x87c20008
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8ef4: 0x10000008
    ctx->pc = 0x1E8EF4u;
    {
        const bool branch_taken_0x1e8ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ef4) {
            ctx->pc = 0x1E8F18u;
            goto label_1e8f18;
        }
    }
    ctx->pc = 0x1E8EFCu;
label_1e8efc:
    // 0x1e8efc: 0x8fc3000c
    ctx->pc = 0x1e8efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8f00: 0x24020ff5
    ctx->pc = 0x1e8f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4085));
    // 0x1e8f04: 0xa4620004
    ctx->pc = 0x1e8f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8f08: 0x8fc3000c
    ctx->pc = 0x1e8f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e8f0c: 0x97c20008
    ctx->pc = 0x1e8f0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8f10: 0xa4620000
    ctx->pc = 0x1e8f10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8f14: 0x102d
    ctx->pc = 0x1e8f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f18:
    // 0x1e8f18: 0x3c0e82d
    ctx->pc = 0x1e8f18u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f1c: 0xdfbe0010
    ctx->pc = 0x1e8f1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f20: 0xdfbf0018
    ctx->pc = 0x1e8f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8f24: 0x27bd0020
    ctx->pc = 0x1e8f24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8f28: 0x3e00008
    ctx->pc = 0x1E8F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88D8u: goto label_1e88d8;
            case 0x1E88F0u: goto label_1e88f0;
            case 0x1E8940u: goto label_1e8940;
            case 0x1E8954u: goto label_1e8954;
            case 0x1E8958u: goto label_1e8958;
            case 0x1E89D8u: goto label_1e89d8;
            case 0x1E8A0Cu: goto label_1e8a0c;
            case 0x1E8A40u: goto label_1e8a40;
            case 0x1E8A84u: goto label_1e8a84;
            case 0x1E8A94u: goto label_1e8a94;
            case 0x1E8B30u: goto label_1e8b30;
            case 0x1E8B6Cu: goto label_1e8b6c;
            case 0x1E8BB4u: goto label_1e8bb4;
            case 0x1E8C08u: goto label_1e8c08;
            case 0x1E8C44u: goto label_1e8c44;
            case 0x1E8C74u: goto label_1e8c74;
            case 0x1E8C90u: goto label_1e8c90;
            case 0x1E8C94u: goto label_1e8c94;
            case 0x1E8CACu: goto label_1e8cac;
            case 0x1E8D00u: goto label_1e8d00;
            case 0x1E8D34u: goto label_1e8d34;
            case 0x1E8D48u: goto label_1e8d48;
            case 0x1E8D78u: goto label_1e8d78;
            case 0x1E8E14u: goto label_1e8e14;
            case 0x1E8E8Cu: goto label_1e8e8c;
            case 0x1E8EC0u: goto label_1e8ec0;
            case 0x1E8EFCu: goto label_1e8efc;
            case 0x1E8F18u: goto label_1e8f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8F30u;
}
