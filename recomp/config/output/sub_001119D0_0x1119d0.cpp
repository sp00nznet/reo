#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001119D0
// Address: 0x1119d0 - 0x111a90
void sub_001119D0_0x1119d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1119d0u;

    // 0x1119d0: 0xdc820000
    ctx->pc = 0x1119d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1119d4: 0xa0302d
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119d8: 0x2405ffff
    ctx->pc = 0x1119d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1119dc: 0x52b3a
    ctx->pc = 0x1119dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x1119e0: 0x21d3e
    ctx->pc = 0x1119e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x1119e4: 0x227fe
    ctx->pc = 0x1119e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1119e8: 0x306707ff
    ctx->pc = 0x1119e8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), 2047));
    // 0x1119ec: 0x451824
    ctx->pc = 0x1119ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1119f0: 0x14e00005
    ctx->pc = 0x1119F0u;
    {
        const bool branch_taken_0x1119f0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1119F4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        if (branch_taken_0x1119f0) {
            ctx->pc = 0x111A08u;
            goto label_111a08;
        }
    }
    ctx->pc = 0x1119F8u;
    // 0x1119f8: 0x24020002
    ctx->pc = 0x1119f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1119fc: 0x3e00008
    ctx->pc = 0x1119FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A00u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111A08u: goto label_111a08;
            case 0x111A38u: goto label_111a38;
            case 0x111A58u: goto label_111a58;
            case 0x111A5Cu: goto label_111a5c;
            case 0x111A68u: goto label_111a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111A04u;
    // 0x111a04: 0x0
    ctx->pc = 0x111a04u;
    // NOP
label_111a08:
    // 0x111a08: 0x240207ff
    ctx->pc = 0x111a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2047));
    // 0x111a0c: 0x54e20016
    ctx->pc = 0x111A0Cu;
    {
        const bool branch_taken_0x111a0c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x111a0c) {
            ctx->pc = 0x111A10u;
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x111A14u;
    // 0x111a14: 0x240203ff
    ctx->pc = 0x111a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1023));
    // 0x111a18: 0x14600007
    ctx->pc = 0x111A18u;
    {
        const bool branch_taken_0x111a18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x111A1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x111a18) {
            ctx->pc = 0x111A38u;
            goto label_111a38;
        }
    }
    ctx->pc = 0x111A20u;
    // 0x111a20: 0x24030004
    ctx->pc = 0x111a20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x111a24: 0x34028000
    ctx->pc = 0x111a24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111a28: 0x2137c
    ctx->pc = 0x111a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x111a2c: 0xfcc20010
    ctx->pc = 0x111a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x111a30: 0x3e00008
    ctx->pc = 0x111A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A34u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111A08u: goto label_111a08;
            case 0x111A38u: goto label_111a38;
            case 0x111A58u: goto label_111a58;
            case 0x111A5Cu: goto label_111a5c;
            case 0x111A68u: goto label_111a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111A38u;
label_111a38:
    // 0x111a38: 0x34028000
    ctx->pc = 0x111a38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111a3c: 0x2113c
    ctx->pc = 0x111a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x111a40: 0x621024
    ctx->pc = 0x111a40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111a44: 0x10400004
    ctx->pc = 0x111A44u;
    {
        const bool branch_taken_0x111a44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x111A48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x111a44) {
            ctx->pc = 0x111A58u;
            goto label_111a58;
        }
    }
    ctx->pc = 0x111A4Cu;
    // 0x111a4c: 0x10000003
    ctx->pc = 0x111A4Cu;
    {
        const bool branch_taken_0x111a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111A50u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x111a4c) {
            ctx->pc = 0x111A5Cu;
            goto label_111a5c;
        }
    }
    ctx->pc = 0x111A54u;
    // 0x111a54: 0x0
    ctx->pc = 0x111a54u;
    // NOP
label_111a58:
    // 0x111a58: 0xacc00000
    ctx->pc = 0x111a58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_111a5c:
    // 0x111a5c: 0x3e00008
    ctx->pc = 0x111A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A60u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111A08u: goto label_111a08;
            case 0x111A38u: goto label_111a38;
            case 0x111A58u: goto label_111a58;
            case 0x111A5Cu: goto label_111a5c;
            case 0x111A68u: goto label_111a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111A64u;
    // 0x111a64: 0x0
    ctx->pc = 0x111a64u;
    // NOP
label_111a68:
    // 0x111a68: 0x34028000
    ctx->pc = 0x111a68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111a6c: 0x2137c
    ctx->pc = 0x111a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x111a70: 0x621825
    ctx->pc = 0x111a70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111a74: 0x24020003
    ctx->pc = 0x111a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x111a78: 0x24e4fc01
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x111a7c: 0xfcc30010
    ctx->pc = 0x111a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x111a80: 0xacc40008
    ctx->pc = 0x111a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x111a84: 0x3e00008
    ctx->pc = 0x111A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A88u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111A08u: goto label_111a08;
            case 0x111A38u: goto label_111a38;
            case 0x111A58u: goto label_111a58;
            case 0x111A5Cu: goto label_111a5c;
            case 0x111A68u: goto label_111a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111A8Cu;
    // 0x111a8c: 0x0
    ctx->pc = 0x111a8cu;
    // NOP
}
