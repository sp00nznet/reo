#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037E1E0
// Address: 0x37e1e0 - 0x37e310
void sub_0037E1E0_0x37e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37e1e0u;

    // 0x37e1e0: 0x27bdffd0
    ctx->pc = 0x37e1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37e1e4: 0x282d
    ctx->pc = 0x37e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1e8: 0xffbf0020
    ctx->pc = 0x37e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37e1ec: 0x24060800
    ctx->pc = 0x37e1ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x37e1f0: 0x7fb10010
    ctx->pc = 0x37e1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37e1f4: 0x7fb00000
    ctx->pc = 0x37e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37e1f8: 0x3c10008a
    ctx->pc = 0x37e1f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)138 << 16));
    // 0x37e1fc: 0x26104cc0
    ctx->pc = 0x37e1fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 19648));
    // 0x37e200: 0xc041f1a
    ctx->pc = 0x37E200u;
    SET_GPR_U32(ctx, 31, 0x37E208u);
    ctx->pc = 0x37E204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E208u; }
        if (ctx->pc != 0x37E208u) { return; }
    }
    ctx->pc = 0x37E208u;
    // 0x37e208: 0x3c01008a
    ctx->pc = 0x37e208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x37e20c: 0x24030080
    ctx->pc = 0x37e20cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37e210: 0xac204cb0
    ctx->pc = 0x37e210u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19632), GPR_U32(ctx, 0));
    // 0x37e214: 0x3c010057
    ctx->pc = 0x37e214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e218: 0x8424c810
    ctx->pc = 0x37e218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37e21c: 0x10830034
    ctx->pc = 0x37E21Cu;
    {
        const bool branch_taken_0x37e21c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x37E220u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37e21c) {
            ctx->pc = 0x37E2F0u;
            goto label_37e2f0;
        }
    }
    ctx->pc = 0x37E224u;
    // 0x37e224: 0x3c010057
    ctx->pc = 0x37e224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37e228: 0x8c26c820
    ctx->pc = 0x37e228u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294952992)));
    // 0x37e22c: 0x1000001b
    ctx->pc = 0x37E22Cu;
    {
        const bool branch_taken_0x37e22c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E230u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x37e22c) {
            ctx->pc = 0x37E29Cu;
            goto label_37e29c;
        }
    }
    ctx->pc = 0x37E234u;
label_37e234:
    // 0x37e234: 0x94c3000c
    ctx->pc = 0x37e234u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37e238: 0x14640005
    ctx->pc = 0x37E238u;
    {
        const bool branch_taken_0x37e238 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x37e238) {
            ctx->pc = 0x37E250u;
            goto label_37e250;
        }
    }
    ctx->pc = 0x37E240u;
    // 0x37e240: 0xc0882d
    ctx->pc = 0x37e240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e244: 0x8cc60000
    ctx->pc = 0x37e244u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37e248: 0x10000014
    ctx->pc = 0x37E248u;
    {
        const bool branch_taken_0x37e248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37E24Cu;
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
        if (branch_taken_0x37e248) {
            ctx->pc = 0x37E29Cu;
            goto label_37e29c;
        }
    }
    ctx->pc = 0x37E250u;
label_37e250:
    // 0x37e250: 0x8cc30008
    ctx->pc = 0x37e250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37e254: 0x3c01008a
    ctx->pc = 0x37e254u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x37e258: 0xae030000
    ctx->pc = 0x37e258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37e25c: 0x94c3000c
    ctx->pc = 0x37e25cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x37e260: 0xa6030004
    ctx->pc = 0x37e260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e264: 0x90c3000e
    ctx->pc = 0x37e264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x37e268: 0xa2030006
    ctx->pc = 0x37e268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e26c: 0x94c30010
    ctx->pc = 0x37e26cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x37e270: 0xa603000a
    ctx->pc = 0x37e270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e274: 0x94c30012
    ctx->pc = 0x37e274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x37e278: 0xa603000c
    ctx->pc = 0x37e278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e27c: 0x94c30014
    ctx->pc = 0x37e27cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x37e280: 0xa603000e
    ctx->pc = 0x37e280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e284: 0x8c234cb0
    ctx->pc = 0x37e284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 19632)));
    // 0x37e288: 0x26100010
    ctx->pc = 0x37e288u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x37e28c: 0x8cc60000
    ctx->pc = 0x37e28cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37e290: 0x24630001
    ctx->pc = 0x37e290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e294: 0x3c01008a
    ctx->pc = 0x37e294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x37e298: 0xac234cb0
    ctx->pc = 0x37e298u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19632), GPR_U32(ctx, 3));
label_37e29c:
    // 0x37e29c: 0x14c0ffe5
    ctx->pc = 0x37E29Cu;
    {
        const bool branch_taken_0x37e29c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x37e29c) {
            ctx->pc = 0x37E234u;
            goto label_37e234;
        }
    }
    ctx->pc = 0x37E2A4u;
    // 0x37e2a4: 0x10a00012
    ctx->pc = 0x37E2A4u;
    {
        const bool branch_taken_0x37e2a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x37e2a4) {
            ctx->pc = 0x37E2F0u;
            goto label_37e2f0;
        }
    }
    ctx->pc = 0x37E2ACu;
    // 0x37e2ac: 0x8e230008
    ctx->pc = 0x37e2acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37e2b0: 0x3c01008a
    ctx->pc = 0x37e2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x37e2b4: 0xae030000
    ctx->pc = 0x37e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37e2b8: 0x9623000c
    ctx->pc = 0x37e2b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37e2bc: 0xa6030004
    ctx->pc = 0x37e2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e2c0: 0x9223000e
    ctx->pc = 0x37e2c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x37e2c4: 0xa2030006
    ctx->pc = 0x37e2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e2c8: 0x96230010
    ctx->pc = 0x37e2c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37e2cc: 0xa603000a
    ctx->pc = 0x37e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e2d0: 0x96230012
    ctx->pc = 0x37e2d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x37e2d4: 0xa603000c
    ctx->pc = 0x37e2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e2d8: 0x96230014
    ctx->pc = 0x37e2d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x37e2dc: 0xa603000e
    ctx->pc = 0x37e2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x37e2e0: 0x8c234cb0
    ctx->pc = 0x37e2e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 19632)));
    // 0x37e2e4: 0x24630001
    ctx->pc = 0x37e2e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x37e2e8: 0x3c01008a
    ctx->pc = 0x37e2e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x37e2ec: 0xac234cb0
    ctx->pc = 0x37e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19632), GPR_U32(ctx, 3));
label_37e2f0:
    // 0x37e2f0: 0xdfbf0020
    ctx->pc = 0x37e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e2f4: 0x7bb10010
    ctx->pc = 0x37e2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e2f8: 0x7bb00000
    ctx->pc = 0x37e2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e2fc: 0x3e00008
    ctx->pc = 0x37E2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E234u: goto label_37e234;
            case 0x37E250u: goto label_37e250;
            case 0x37E29Cu: goto label_37e29c;
            case 0x37E2F0u: goto label_37e2f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37E304u;
    // 0x37e304: 0x0
    ctx->pc = 0x37e304u;
    // NOP
    // 0x37e308: 0x0
    ctx->pc = 0x37e308u;
    // NOP
    // 0x37e30c: 0x0
    ctx->pc = 0x37e30cu;
    // NOP
}
