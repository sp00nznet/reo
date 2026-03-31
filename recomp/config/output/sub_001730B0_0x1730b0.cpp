#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001730B0
// Address: 0x1730b0 - 0x173130
void sub_001730B0_0x1730b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1730b0u;

label_1730b0:
    // 0x1730b0: 0x27bdfff0
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1730b4:
    // 0x1730b4: 0xffb00000
    ctx->pc = 0x1730b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1730b8:
    // 0x1730b8: 0x80802d
    ctx->pc = 0x1730b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1730bc:
    // 0x1730bc: 0xffbf0008
    ctx->pc = 0x1730bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1730c0:
    // 0x1730c0: 0x8e031b7c
    ctx->pc = 0x1730c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7036)));
label_1730c4:
    // 0x1730c4: 0x310c0
    ctx->pc = 0x1730c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
label_1730c8:
    // 0x1730c8: 0x431023
    ctx->pc = 0x1730c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1730cc:
    // 0x1730cc: 0x21080
    ctx->pc = 0x1730ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1730d0:
    // 0x1730d0: 0x431021
    ctx->pc = 0x1730d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1730d4:
    // 0x1730d4: 0x21080
    ctx->pc = 0x1730d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1730d8:
    // 0x1730d8: 0x2028021
    ctx->pc = 0x1730d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1730dc:
    // 0x1730dc: 0x26101150
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4432));
label_1730e0:
    // 0x1730e0: 0x8e040004
    ctx->pc = 0x1730e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1730e4:
    // 0x1730e4: 0x8c830000
    ctx->pc = 0x1730e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1730e8:
    // 0x1730e8: 0x8c620024
    ctx->pc = 0x1730e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1730ec:
    // 0x1730ec: 0x40f809
label_1730f0:
    if (ctx->pc == 0x1730F0u) {
        ctx->pc = 0x1730F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1730F4u;
        goto label_1730f4;
    }
    ctx->pc = 0x1730ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1730F4u);
        ctx->pc = 0x1730F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            case 0x1730BCu: goto label_1730bc;
            case 0x1730C0u: goto label_1730c0;
            case 0x1730C4u: goto label_1730c4;
            case 0x1730C8u: goto label_1730c8;
            case 0x1730CCu: goto label_1730cc;
            case 0x1730D0u: goto label_1730d0;
            case 0x1730D4u: goto label_1730d4;
            case 0x1730D8u: goto label_1730d8;
            case 0x1730DCu: goto label_1730dc;
            case 0x1730E0u: goto label_1730e0;
            case 0x1730E4u: goto label_1730e4;
            case 0x1730E8u: goto label_1730e8;
            case 0x1730ECu: goto label_1730ec;
            case 0x1730F0u: goto label_1730f0;
            case 0x1730F4u: goto label_1730f4;
            case 0x1730F8u: goto label_1730f8;
            case 0x1730FCu: goto label_1730fc;
            case 0x173100u: goto label_173100;
            case 0x173104u: goto label_173104;
            case 0x173108u: goto label_173108;
            case 0x17310Cu: goto label_17310c;
            case 0x173110u: goto label_173110;
            case 0x173114u: goto label_173114;
            case 0x173118u: goto label_173118;
            case 0x17311Cu: goto label_17311c;
            case 0x173120u: goto label_173120;
            case 0x173124u: goto label_173124;
            case 0x173128u: goto label_173128;
            case 0x17312Cu: goto label_17312c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1730F4u; }
            if (ctx->pc != 0x1730F4u) { return; }
        }
    }
    ctx->pc = 0x1730F4u;
label_1730f4:
    // 0x1730f4: 0x8e05000c
    ctx->pc = 0x1730f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1730f8:
    // 0x1730f8: 0x24040064
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
label_1730fc:
    // 0x1730fc: 0x51880
    ctx->pc = 0x1730fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_173100:
    // 0x173100: 0x50800001
label_173104:
    if (ctx->pc == 0x173104u) {
        ctx->pc = 0x173104u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x173108u;
        goto label_173108;
    }
    ctx->pc = 0x173100u;
    {
        const bool branch_taken_0x173100 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x173100) {
            ctx->pc = 0x173104u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x173108u;
            goto label_173108;
        }
    }
    ctx->pc = 0x173108u;
label_173108:
    // 0x173108: 0x651821
    ctx->pc = 0x173108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17310c:
    // 0x17310c: 0xdfb00000
    ctx->pc = 0x17310cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173110:
    // 0x173110: 0x31900
    ctx->pc = 0x173110u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_173114:
    // 0x173114: 0xdfbf0008
    ctx->pc = 0x173114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173118:
    // 0x173118: 0x64001a
    ctx->pc = 0x173118u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17311c:
    // 0x17311c: 0x1812
    ctx->pc = 0x17311cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_173120:
    // 0x173120: 0x43102a
    ctx->pc = 0x173120u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_173124:
    // 0x173124: 0x2c420001
    ctx->pc = 0x173124u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_173128:
    // 0x173128: 0x3e00008
label_17312c:
    if (ctx->pc == 0x17312Cu) {
        ctx->pc = 0x17312Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x173130u;
        goto label_fallthrough_0x173128;
    }
    ctx->pc = 0x173128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17312Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            case 0x1730BCu: goto label_1730bc;
            case 0x1730C0u: goto label_1730c0;
            case 0x1730C4u: goto label_1730c4;
            case 0x1730C8u: goto label_1730c8;
            case 0x1730CCu: goto label_1730cc;
            case 0x1730D0u: goto label_1730d0;
            case 0x1730D4u: goto label_1730d4;
            case 0x1730D8u: goto label_1730d8;
            case 0x1730DCu: goto label_1730dc;
            case 0x1730E0u: goto label_1730e0;
            case 0x1730E4u: goto label_1730e4;
            case 0x1730E8u: goto label_1730e8;
            case 0x1730ECu: goto label_1730ec;
            case 0x1730F0u: goto label_1730f0;
            case 0x1730F4u: goto label_1730f4;
            case 0x1730F8u: goto label_1730f8;
            case 0x1730FCu: goto label_1730fc;
            case 0x173100u: goto label_173100;
            case 0x173104u: goto label_173104;
            case 0x173108u: goto label_173108;
            case 0x17310Cu: goto label_17310c;
            case 0x173110u: goto label_173110;
            case 0x173114u: goto label_173114;
            case 0x173118u: goto label_173118;
            case 0x17311Cu: goto label_17311c;
            case 0x173120u: goto label_173120;
            case 0x173124u: goto label_173124;
            case 0x173128u: goto label_173128;
            case 0x17312Cu: goto label_17312c;
            default: break;
        }
        return;
    }
label_fallthrough_0x173128:
    ctx->pc = 0x173130u;
}
