#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B19D0
// Address: 0x1b19d0 - 0x1b1a90
void sub_001B19D0_0x1b19d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b19d0u;

    // 0x1b19d0: 0x27bdffc0
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b19d4: 0xffbf0030
    ctx->pc = 0x1b19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b19d8: 0x7fb20020
    ctx->pc = 0x1b19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b19dc: 0x7fb10010
    ctx->pc = 0x1b19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b19e0: 0x7fb00000
    ctx->pc = 0x1b19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b19e4: 0x882d
    ctx->pc = 0x1b19e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19e8: 0x8c920000
    ctx->pc = 0x1b19e8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b19ec: 0x10000006
    ctx->pc = 0x1B19ECu;
    {
        const bool branch_taken_0x1b19ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B19F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b19ec) {
            ctx->pc = 0x1B1A08u;
            goto label_1b1a08;
        }
    }
    ctx->pc = 0x1B19F4u;
label_1b19f4:
    // 0x1b19f4: 0xc06c4c0
    ctx->pc = 0x1B19F4u;
    SET_GPR_U32(ctx, 31, 0x1B19FCu);
    ctx->pc = 0x1B19F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1B1300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1300_0x1b1300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19FCu; }
    }
    if (ctx->pc != 0x1B19FCu) { return; }
    ctx->pc = 0x1B19FCu;
    // 0x1b19fc: 0xae400000
    ctx->pc = 0x1b19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b1a00: 0x26310001
    ctx->pc = 0x1b1a00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1a04: 0x26520004
    ctx->pc = 0x1b1a04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_1b1a08:
    // 0x1b1a08: 0x96030816
    ctx->pc = 0x1b1a08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2070)));
    // 0x1b1a0c: 0x223182a
    ctx->pc = 0x1b1a0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1b1a10: 0x1460fff8
    ctx->pc = 0x1B1A10u;
    {
        const bool branch_taken_0x1b1a10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1a10) {
            ctx->pc = 0x1B19F4u;
            goto label_1b19f4;
        }
    }
    ctx->pc = 0x1B1A18u;
    // 0x1b1a18: 0xae000000
    ctx->pc = 0x1b1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1a1c: 0x8e120004
    ctx->pc = 0x1b1a1cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1a20: 0x12400013
    ctx->pc = 0x1B1A20u;
    {
        const bool branch_taken_0x1b1a20 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1a20) {
            ctx->pc = 0x1B1A70u;
            goto label_1b1a70;
        }
    }
    ctx->pc = 0x1B1A28u;
    // 0x1b1a28: 0x9204081c
    ctx->pc = 0x1b1a28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1b1a2c: 0x24030001
    ctx->pc = 0x1b1a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1a30: 0x1083000f
    ctx->pc = 0x1B1A30u;
    {
        const bool branch_taken_0x1b1a30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B1A34u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a30) {
            ctx->pc = 0x1B1A70u;
            goto label_1b1a70;
        }
    }
    ctx->pc = 0x1B1A38u;
    // 0x1b1a38: 0x1000000a
    ctx->pc = 0x1B1A38u;
    {
        const bool branch_taken_0x1b1a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1A3Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2070)));
        if (branch_taken_0x1b1a38) {
            ctx->pc = 0x1B1A64u;
            goto label_1b1a64;
        }
    }
    ctx->pc = 0x1B1A40u;
label_1b1a40:
    // 0x1b1a40: 0x8e440000
    ctx->pc = 0x1b1a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b1a44: 0x10800003
    ctx->pc = 0x1B1A44u;
    {
        const bool branch_taken_0x1b1a44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1a44) {
            ctx->pc = 0x1B1A54u;
            goto label_1b1a54;
        }
    }
    ctx->pc = 0x1B1A4Cu;
    // 0x1b1a4c: 0xc06c4c0
    ctx->pc = 0x1B1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1A54u);
    ctx->pc = 0x1B1300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1300_0x1b1300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A54u; }
    }
    if (ctx->pc != 0x1B1A54u) { return; }
    ctx->pc = 0x1B1A54u;
label_1b1a54:
    // 0x1b1a54: 0xae400000
    ctx->pc = 0x1b1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b1a58: 0x26310001
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1a5c: 0x26520004
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b1a60: 0x96030816
    ctx->pc = 0x1b1a60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2070)));
label_1b1a64:
    // 0x1b1a64: 0x223182a
    ctx->pc = 0x1b1a64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1b1a68: 0x1460fff5
    ctx->pc = 0x1B1A68u;
    {
        const bool branch_taken_0x1b1a68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1a68) {
            ctx->pc = 0x1B1A40u;
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B1A70u;
label_1b1a70:
    // 0x1b1a70: 0xae000004
    ctx->pc = 0x1b1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b1a74: 0xa6000816
    ctx->pc = 0x1b1a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2070), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1a78: 0xdfbf0030
    ctx->pc = 0x1b1a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1a7c: 0x7bb20020
    ctx->pc = 0x1b1a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1a80: 0x7bb10010
    ctx->pc = 0x1b1a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a84: 0x7bb00000
    ctx->pc = 0x1b1a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a88: 0x3e00008
    ctx->pc = 0x1B1A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B19F4u: goto label_1b19f4;
            case 0x1B1A08u: goto label_1b1a08;
            case 0x1B1A40u: goto label_1b1a40;
            case 0x1B1A54u: goto label_1b1a54;
            case 0x1B1A64u: goto label_1b1a64;
            case 0x1B1A70u: goto label_1b1a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1A90u;
}
