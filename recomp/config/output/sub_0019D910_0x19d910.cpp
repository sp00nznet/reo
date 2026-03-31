#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D910
// Address: 0x19d910 - 0x19dac0
void sub_0019D910_0x19d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d910u;

    // 0x19d910: 0x30a2ffff
    ctx->pc = 0x19d910u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x19d914: 0x3c03002a
    ctx->pc = 0x19d914u;
    SET_GPR_U32(ctx, 3, ((uint32_t)42 << 16));
    // 0x19d918: 0x2446ffff
    ctx->pc = 0x19d918u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19d91c: 0x24638680
    ctx->pc = 0x19d91cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x19d920: 0x628c0
    ctx->pc = 0x19d920u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x19d924: 0x24020014
    ctx->pc = 0x19d924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x19d928: 0xa62823
    ctx->pc = 0x19d928u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19d92c: 0x528c0
    ctx->pc = 0x19d92cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d930: 0x653021
    ctx->pc = 0x19d930u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d934: 0x84c3001a
    ctx->pc = 0x19d934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x19d938: 0xac830004
    ctx->pc = 0x19d938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x19d93c: 0x84c3001c
    ctx->pc = 0x19d93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x19d940: 0xac830008
    ctx->pc = 0x19d940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x19d944: 0x8cc3000c
    ctx->pc = 0x19d944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19d948: 0xac830014
    ctx->pc = 0x19d948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x19d94c: 0x8c850004
    ctx->pc = 0x19d94cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19d950: 0x8c830014
    ctx->pc = 0x19d950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19d954: 0xa31818
    ctx->pc = 0x19d954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19d958: 0xac83000c
    ctx->pc = 0x19d958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x19d95c: 0x8cc30020
    ctx->pc = 0x19d95cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x19d960: 0x10620045
    ctx->pc = 0x19D960u;
    {
        const bool branch_taken_0x19d960 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19D964u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x19d960) {
            ctx->pc = 0x19DA78u;
            goto label_19da78;
        }
    }
    ctx->pc = 0x19D968u;
    // 0x19d968: 0x10620043
    ctx->pc = 0x19D968u;
    {
        const bool branch_taken_0x19d968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19d968) {
            ctx->pc = 0x19DA78u;
            goto label_19da78;
        }
    }
    ctx->pc = 0x19D970u;
    // 0x19d970: 0x24020002
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d974: 0x1062002b
    ctx->pc = 0x19D974u;
    {
        const bool branch_taken_0x19d974 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19D978u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x19d974) {
            ctx->pc = 0x19DA24u;
            goto label_19da24;
        }
    }
    ctx->pc = 0x19D97Cu;
    // 0x19d97c: 0x24020001
    ctx->pc = 0x19d97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d980: 0x10620017
    ctx->pc = 0x19D980u;
    {
        const bool branch_taken_0x19d980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19D984u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x19d980) {
            ctx->pc = 0x19D9E0u;
            goto label_19d9e0;
        }
    }
    ctx->pc = 0x19D988u;
    // 0x19d988: 0x10600003
    ctx->pc = 0x19D988u;
    {
        const bool branch_taken_0x19d988 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D98Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x19d988) {
            ctx->pc = 0x19D998u;
            goto label_19d998;
        }
    }
    ctx->pc = 0x19D990u;
    // 0x19d990: 0x10000046
    ctx->pc = 0x19D990u;
    {
        const bool branch_taken_0x19d990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D994u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19d990) {
            ctx->pc = 0x19DAACu;
            goto label_19daac;
        }
    }
    ctx->pc = 0x19D998u;
label_19d998:
    // 0x19d998: 0x24050010
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d99c: 0xac860018
    ctx->pc = 0x19d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x19d9a0: 0x240300ff
    ctx->pc = 0x19d9a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x19d9a4: 0xac85001c
    ctx->pc = 0x19d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x19d9a8: 0x24020018
    ctx->pc = 0x19d9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x19d9ac: 0xac830020
    ctx->pc = 0x19d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x19d9b0: 0xac860024
    ctx->pc = 0x19d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x19d9b4: 0xac860028
    ctx->pc = 0x19d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x19d9b8: 0xac83002c
    ctx->pc = 0x19d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x19d9bc: 0xac860030
    ctx->pc = 0x19d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x19d9c0: 0xac800034
    ctx->pc = 0x19d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x19d9c4: 0xac830038
    ctx->pc = 0x19d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x19d9c8: 0xac86003c
    ctx->pc = 0x19d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x19d9cc: 0xac820040
    ctx->pc = 0x19d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x19d9d0: 0xac830044
    ctx->pc = 0x19d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x19d9d4: 0xac80001c
    ctx->pc = 0x19d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19d9d8: 0x10000033
    ctx->pc = 0x19D9D8u;
    {
        const bool branch_taken_0x19d9d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D9DCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        if (branch_taken_0x19d9d8) {
            ctx->pc = 0x19DAA8u;
            goto label_19daa8;
        }
    }
    ctx->pc = 0x19D9E0u;
label_19d9e0:
    // 0x19d9e0: 0x24030010
    ctx->pc = 0x19d9e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d9e4: 0xac850018
    ctx->pc = 0x19d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x19d9e8: 0x240200ff
    ctx->pc = 0x19d9e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x19d9ec: 0xac83001c
    ctx->pc = 0x19d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x19d9f0: 0xac820020
    ctx->pc = 0x19d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x19d9f4: 0xac850024
    ctx->pc = 0x19d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x19d9f8: 0xac850028
    ctx->pc = 0x19d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x19d9fc: 0xac82002c
    ctx->pc = 0x19d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x19da00: 0xac850030
    ctx->pc = 0x19da00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x19da04: 0xac800034
    ctx->pc = 0x19da04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x19da08: 0xac820038
    ctx->pc = 0x19da08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x19da0c: 0xac80003c
    ctx->pc = 0x19da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x19da10: 0xac800040
    ctx->pc = 0x19da10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x19da14: 0xac800044
    ctx->pc = 0x19da14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x19da18: 0xac80001c
    ctx->pc = 0x19da18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19da1c: 0x10000022
    ctx->pc = 0x19DA1Cu;
    {
        const bool branch_taken_0x19da1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DA20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x19da1c) {
            ctx->pc = 0x19DAA8u;
            goto label_19daa8;
        }
    }
    ctx->pc = 0x19DA24u;
label_19da24:
    // 0x19da24: 0x2406000a
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19da28: 0xac870018
    ctx->pc = 0x19da28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x19da2c: 0x2405001f
    ctx->pc = 0x19da2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 31));
    // 0x19da30: 0xac86001c
    ctx->pc = 0x19da30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x19da34: 0x24030001
    ctx->pc = 0x19da34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19da38: 0xac850020
    ctx->pc = 0x19da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x19da3c: 0x2402000f
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19da40: 0xac870024
    ctx->pc = 0x19da40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x19da44: 0xac870028
    ctx->pc = 0x19da44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x19da48: 0xac85002c
    ctx->pc = 0x19da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x19da4c: 0xac870030
    ctx->pc = 0x19da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x19da50: 0xac800034
    ctx->pc = 0x19da50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x19da54: 0xac850038
    ctx->pc = 0x19da54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x19da58: 0xac83003c
    ctx->pc = 0x19da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x19da5c: 0xac820040
    ctx->pc = 0x19da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x19da60: 0xac830044
    ctx->pc = 0x19da60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x19da64: 0xac80001c
    ctx->pc = 0x19da64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19da68: 0xac860034
    ctx->pc = 0x19da68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x19da6c: 0xac870024
    ctx->pc = 0x19da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x19da70: 0x1000000d
    ctx->pc = 0x19DA70u;
    {
        const bool branch_taken_0x19da70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DA74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        if (branch_taken_0x19da70) {
            ctx->pc = 0x19DAA8u;
            goto label_19daa8;
        }
    }
    ctx->pc = 0x19DA78u;
label_19da78:
    // 0x19da78: 0xac800020
    ctx->pc = 0x19da78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x19da7c: 0xac80001c
    ctx->pc = 0x19da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19da80: 0xac800018
    ctx->pc = 0x19da80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x19da84: 0xac80002c
    ctx->pc = 0x19da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x19da88: 0xac800028
    ctx->pc = 0x19da88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x19da8c: 0xac800024
    ctx->pc = 0x19da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x19da90: 0xac800038
    ctx->pc = 0x19da90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x19da94: 0xac800034
    ctx->pc = 0x19da94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x19da98: 0xac800030
    ctx->pc = 0x19da98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x19da9c: 0xac800044
    ctx->pc = 0x19da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x19daa0: 0xac800040
    ctx->pc = 0x19daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x19daa4: 0xac80003c
    ctx->pc = 0x19daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_19daa8:
    // 0x19daa8: 0x24020001
    ctx->pc = 0x19daa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19daac:
    // 0x19daac: 0x3e00008
    ctx->pc = 0x19DAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D998u: goto label_19d998;
            case 0x19D9E0u: goto label_19d9e0;
            case 0x19DA24u: goto label_19da24;
            case 0x19DA78u: goto label_19da78;
            case 0x19DAA8u: goto label_19daa8;
            case 0x19DAACu: goto label_19daac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DAB4u;
    // 0x19dab4: 0x0
    ctx->pc = 0x19dab4u;
    // NOP
    // 0x19dab8: 0x0
    ctx->pc = 0x19dab8u;
    // NOP
    // 0x19dabc: 0x0
    ctx->pc = 0x19dabcu;
    // NOP
}
