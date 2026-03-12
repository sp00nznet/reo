#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374B20
// Address: 0x374b20 - 0x374c00
void sub_00374B20_0x374b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374b20u;

    // 0x374b20: 0x27bdffd0
    ctx->pc = 0x374b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374b24: 0xffbf0020
    ctx->pc = 0x374b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x374b28: 0x7fb10010
    ctx->pc = 0x374b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374b2c: 0x7fb00000
    ctx->pc = 0x374b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374b30: 0xa0882d
    ctx->pc = 0x374b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b34: 0x9082008a
    ctx->pc = 0x374b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x374b38: 0x80802d
    ctx->pc = 0x374b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b3c: 0x90830089
    ctx->pc = 0x374b3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 137)));
    // 0x374b40: 0x21100
    ctx->pc = 0x374b40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x374b44: 0x2404005e
    ctx->pc = 0x374b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x374b48: 0xc06bde0
    ctx->pc = 0x374B48u;
    SET_GPR_U32(ctx, 31, 0x374B50u);
    ctx->pc = 0x374B4Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B50u; }
        if (ctx->pc != 0x374B50u) { return; }
    }
    ctx->pc = 0x374B50u;
    // 0x374b50: 0x9202008b
    ctx->pc = 0x374b50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x374b54: 0x2404000d
    ctx->pc = 0x374b54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x374b58: 0xc06bde0
    ctx->pc = 0x374B58u;
    SET_GPR_U32(ctx, 31, 0x374B60u);
    ctx->pc = 0x374B5Cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 10));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B60u; }
        if (ctx->pc != 0x374B60u) { return; }
    }
    ctx->pc = 0x374B60u;
    // 0x374b60: 0x9202008d
    ctx->pc = 0x374b60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x374b64: 0x10400009
    ctx->pc = 0x374B64u;
    {
        const bool branch_taken_0x374b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x374b64) {
            ctx->pc = 0x374B8Cu;
            goto label_374b8c;
        }
    }
    ctx->pc = 0x374B6Cu;
    // 0x374b6c: 0x2404005f
    ctx->pc = 0x374b6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x374b70: 0xc06bde0
    ctx->pc = 0x374B70u;
    SET_GPR_U32(ctx, 31, 0x374B78u);
    ctx->pc = 0x374B74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B78u; }
        if (ctx->pc != 0x374B78u) { return; }
    }
    ctx->pc = 0x374B78u;
    // 0x374b78: 0x24040060
    ctx->pc = 0x374b78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x374b7c: 0xc06bde0
    ctx->pc = 0x374B7Cu;
    SET_GPR_U32(ctx, 31, 0x374B84u);
    ctx->pc = 0x374B80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B84u; }
        if (ctx->pc != 0x374B84u) { return; }
    }
    ctx->pc = 0x374B84u;
    // 0x374b84: 0x10000006
    ctx->pc = 0x374B84u;
    {
        const bool branch_taken_0x374b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x374b84) {
            ctx->pc = 0x374BA0u;
            goto label_374ba0;
        }
    }
    ctx->pc = 0x374B8Cu;
label_374b8c:
    // 0x374b8c: 0xc06bde0
    ctx->pc = 0x374B8Cu;
    SET_GPR_U32(ctx, 31, 0x374B94u);
    ctx->pc = 0x374B90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B94u; }
        if (ctx->pc != 0x374B94u) { return; }
    }
    ctx->pc = 0x374B94u;
    // 0x374b94: 0x24040060
    ctx->pc = 0x374b94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x374b98: 0xc06bde0
    ctx->pc = 0x374B98u;
    SET_GPR_U32(ctx, 31, 0x374BA0u);
    ctx->pc = 0x374B9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BA0u; }
        if (ctx->pc != 0x374BA0u) { return; }
    }
    ctx->pc = 0x374BA0u;
label_374ba0:
    // 0x374ba0: 0x12200006
    ctx->pc = 0x374BA0u;
    {
        const bool branch_taken_0x374ba0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x374BA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x374ba0) {
            ctx->pc = 0x374BBCu;
            goto label_374bbc;
        }
    }
    ctx->pc = 0x374BA8u;
    // 0x374ba8: 0x8e250000
    ctx->pc = 0x374ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374bac: 0xc06bde0
    ctx->pc = 0x374BACu;
    SET_GPR_U32(ctx, 31, 0x374BB4u);
    ctx->pc = 0x374BB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BB4u; }
        if (ctx->pc != 0x374BB4u) { return; }
    }
    ctx->pc = 0x374BB4u;
    // 0x374bb4: 0x10000004
    ctx->pc = 0x374BB4u;
    {
        const bool branch_taken_0x374bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374BB8u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        if (branch_taken_0x374bb4) {
            ctx->pc = 0x374BC8u;
            goto label_374bc8;
        }
    }
    ctx->pc = 0x374BBCu;
label_374bbc:
    // 0x374bbc: 0xc06bde0
    ctx->pc = 0x374BBCu;
    SET_GPR_U32(ctx, 31, 0x374BC4u);
    ctx->pc = 0x374BC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BC4u; }
        if (ctx->pc != 0x374BC4u) { return; }
    }
    ctx->pc = 0x374BC4u;
    // 0x374bc4: 0x9202008c
    ctx->pc = 0x374bc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_374bc8:
    // 0x374bc8: 0x24040063
    ctx->pc = 0x374bc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x374bcc: 0xc06bde0
    ctx->pc = 0x374BCCu;
    SET_GPR_U32(ctx, 31, 0x374BD4u);
    ctx->pc = 0x374BD0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BD4u; }
        if (ctx->pc != 0x374BD4u) { return; }
    }
    ctx->pc = 0x374BD4u;
    // 0x374bd4: 0x9205008f
    ctx->pc = 0x374bd4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
    // 0x374bd8: 0xc06bde0
    ctx->pc = 0x374BD8u;
    SET_GPR_U32(ctx, 31, 0x374BE0u);
    ctx->pc = 0x374BDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BE0u; }
        if (ctx->pc != 0x374BE0u) { return; }
    }
    ctx->pc = 0x374BE0u;
    // 0x374be0: 0xdfbf0020
    ctx->pc = 0x374be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374be4: 0x7bb10010
    ctx->pc = 0x374be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374be8: 0x7bb00000
    ctx->pc = 0x374be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374bec: 0x3e00008
    ctx->pc = 0x374BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374BF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374B8Cu: goto label_374b8c;
            case 0x374BA0u: goto label_374ba0;
            case 0x374BBCu: goto label_374bbc;
            case 0x374BC8u: goto label_374bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374BF4u;
    // 0x374bf4: 0x0
    ctx->pc = 0x374bf4u;
    // NOP
    // 0x374bf8: 0x0
    ctx->pc = 0x374bf8u;
    // NOP
    // 0x374bfc: 0x0
    ctx->pc = 0x374bfcu;
    // NOP
}
