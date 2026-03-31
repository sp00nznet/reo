#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178910
// Address: 0x178910 - 0x178a78
void sub_00178910_0x178910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178910u;

    // 0x178910: 0x27bdffc0
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178914: 0xffb00000
    ctx->pc = 0x178914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178918: 0xffb10008
    ctx->pc = 0x178918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17891c: 0x80882d
    ctx->pc = 0x17891cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178920: 0xffb30018
    ctx->pc = 0x178920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178924: 0xc0982d
    ctx->pc = 0x178924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178928: 0xffb40020
    ctx->pc = 0x178928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17892c: 0xe0a02d
    ctx->pc = 0x17892cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178930: 0xffb50028
    ctx->pc = 0x178930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x178934: 0xa0a82d
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178938: 0xffb20010
    ctx->pc = 0x178938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17893c: 0xffbf0030
    ctx->pc = 0x17893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178940: 0xc05a78c
    ctx->pc = 0x178940u;
    SET_GPR_U32(ctx, 31, 0x178948u);
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 7360));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178948u; }
    }
    if (ctx->pc != 0x178948u) { return; }
    ctx->pc = 0x178948u;
    // 0x178948: 0x3c05ff00
    ctx->pc = 0x178948u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x17894c: 0x202d
    ctx->pc = 0x17894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178950: 0x34a50191
    ctx->pc = 0x178950u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 401));
    // 0x178954: 0x1040000a
    ctx->pc = 0x178954u;
    {
        const bool branch_taken_0x178954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178958u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x178954) {
            ctx->pc = 0x178980u;
            goto label_178980;
        }
    }
    ctx->pc = 0x17895Cu;
    // 0x17895c: 0xdfb00000
    ctx->pc = 0x17895cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178960: 0xdfb10008
    ctx->pc = 0x178960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178964: 0xdfb20010
    ctx->pc = 0x178964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178968: 0xdfb30018
    ctx->pc = 0x178968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17896c: 0xdfb40020
    ctx->pc = 0x17896cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178970: 0xdfb50028
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178974: 0xdfbf0030
    ctx->pc = 0x178974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178978: 0x805a704
    ctx->pc = 0x178978u;
    ctx->pc = 0x17897Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178980u;
label_178980:
    // 0x178980: 0x8e120010
    ctx->pc = 0x178980u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x178984: 0x1643000e
    ctx->pc = 0x178984u;
    {
        const bool branch_taken_0x178984 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        ctx->pc = 0x178988u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x178984) {
            ctx->pc = 0x1789C0u;
            goto label_1789c0;
        }
    }
    ctx->pc = 0x17898Cu;
    // 0x17898c: 0x220202d
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178990: 0xdfb10008
    ctx->pc = 0x178990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178994: 0x3c05ff00
    ctx->pc = 0x178994u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178998: 0xdfb00000
    ctx->pc = 0x178998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17899c: 0xdfb20010
    ctx->pc = 0x17899cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1789a0: 0x34a50602
    ctx->pc = 0x1789a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1538));
    // 0x1789a4: 0xdfb30018
    ctx->pc = 0x1789a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1789a8: 0xdfb40020
    ctx->pc = 0x1789a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1789ac: 0xdfb50028
    ctx->pc = 0x1789acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1789b0: 0xdfbf0030
    ctx->pc = 0x1789b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1789b4: 0x805a704
    ctx->pc = 0x1789B4u;
    ctx->pc = 0x1789B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1789BCu;
    // 0x1789bc: 0x0
    ctx->pc = 0x1789bcu;
    // NOP
label_1789c0:
    // 0x1789c0: 0x158100
    ctx->pc = 0x1789c0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1789c4: 0x260282d
    ctx->pc = 0x1789c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789c8: 0x508021
    ctx->pc = 0x1789c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1789cc: 0x280302d
    ctx->pc = 0x1789ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789d0: 0x26100004
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1789d4: 0x402d
    ctx->pc = 0x1789d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789d8: 0x200202d
    ctx->pc = 0x1789d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789dc: 0xc05e318
    ctx->pc = 0x1789DCu;
    SET_GPR_U32(ctx, 31, 0x1789E4u);
    ctx->pc = 0x1789E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C60_0x178c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789E4u; }
    }
    if (ctx->pc != 0x1789E4u) { return; }
    ctx->pc = 0x1789E4u;
    // 0x1789e4: 0x220202d
    ctx->pc = 0x1789e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789e8: 0x240282d
    ctx->pc = 0x1789e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789ec: 0x2a0302d
    ctx->pc = 0x1789ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789f0: 0xc059bc6
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166F18_0x166f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789F8u; }
    }
    if (ctx->pc != 0x1789F8u) { return; }
    ctx->pc = 0x1789F8u;
    // 0x1789f8: 0x102d
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789fc: 0xdfb00000
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a00: 0xdfb10008
    ctx->pc = 0x178a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178a04: 0xdfb20010
    ctx->pc = 0x178a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a08: 0xdfb30018
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a0c: 0xdfb40020
    ctx->pc = 0x178a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178a10: 0xdfb50028
    ctx->pc = 0x178a10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178a14: 0xdfbf0030
    ctx->pc = 0x178a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178a18: 0x3e00008
    ctx->pc = 0x178A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178980u: goto label_178980;
            case 0x1789C0u: goto label_1789c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178A20u;
    // 0x178a20: 0x3e00008
    ctx->pc = 0x178A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178980u: goto label_178980;
            case 0x1789C0u: goto label_1789c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178A28u;
    // 0x178a28: 0x3e00008
    ctx->pc = 0x178A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178980u: goto label_178980;
            case 0x1789C0u: goto label_1789c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178A30u;
    // 0x178a30: 0x27bdffe0
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178a34: 0xffb10008
    ctx->pc = 0x178a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178a38: 0xffb00000
    ctx->pc = 0x178a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178a3c: 0xffbf0010
    ctx->pc = 0x178a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178a40: 0xc05e29e
    ctx->pc = 0x178A40u;
    SET_GPR_U32(ctx, 31, 0x178A48u);
    ctx->pc = 0x178A44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178A78_0x178a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A48u; }
    }
    if (ctx->pc != 0x178A48u) { return; }
    ctx->pc = 0x178A48u;
    // 0x178a48: 0xc05e2e2
    ctx->pc = 0x178A48u;
    SET_GPR_U32(ctx, 31, 0x178A50u);
    ctx->pc = 0x178A4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178B88_0x178b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A50u; }
    }
    if (ctx->pc != 0x178A50u) { return; }
    ctx->pc = 0x178A50u;
    // 0x178a50: 0x220202d
    ctx->pc = 0x178a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a54: 0xc05e2c0
    ctx->pc = 0x178A54u;
    SET_GPR_U32(ctx, 31, 0x178A5Cu);
    ctx->pc = 0x178A58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178B00_0x178b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A5Cu; }
    }
    if (ctx->pc != 0x178A5Cu) { return; }
    ctx->pc = 0x178A5Cu;
    // 0x178a5c: 0xdfb10008
    ctx->pc = 0x178a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178a60: 0x200102d
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a64: 0xdfbf0010
    ctx->pc = 0x178a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a68: 0xdfb00000
    ctx->pc = 0x178a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a6c: 0x3e00008
    ctx->pc = 0x178A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178980u: goto label_178980;
            case 0x1789C0u: goto label_1789c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178A74u;
    // 0x178a74: 0x0
    ctx->pc = 0x178a74u;
    // NOP
}
