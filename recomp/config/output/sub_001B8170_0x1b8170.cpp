#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8170
// Address: 0x1b8170 - 0x1b8280
void sub_001B8170_0x1b8170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8170u;

    // 0x1b8170: 0x27bdfff0
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8174: 0x3c040058
    ctx->pc = 0x1b8174u;
    SET_GPR_U32(ctx, 4, ((uint32_t)88 << 16));
    // 0x1b8178: 0xffbf0000
    ctx->pc = 0x1b8178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b817c: 0x2484f1f0
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963696));
    // 0x1b8180: 0xc06dfb8
    ctx->pc = 0x1B8180u;
    SET_GPR_U32(ctx, 31, 0x1B8188u);
    ctx->pc = 0x1B8184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1B7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7EE0_0x1b7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8188u; }
    }
    if (ctx->pc != 0x1B8188u) { return; }
    ctx->pc = 0x1B8188u;
    // 0x1b8188: 0x24040001
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b818c: 0xc06e034
    ctx->pc = 0x1B818Cu;
    SET_GPR_U32(ctx, 31, 0x1B8194u);
    ctx->pc = 0x1B8190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1B80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80D0_0x1b80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8194u; }
    }
    if (ctx->pc != 0x1B8194u) { return; }
    ctx->pc = 0x1B8194u;
    // 0x1b8194: 0xdfbf0000
    ctx->pc = 0x1b8194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8198: 0x3e00008
    ctx->pc = 0x1B8198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B819Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B81E0u: goto label_1b81e0;
            case 0x1B81F0u: goto label_1b81f0;
            case 0x1B81F4u: goto label_1b81f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B81A0u;
    // 0x1b81a0: 0x27bdffe0
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b81a4: 0xffbf0010
    ctx->pc = 0x1b81a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b81a8: 0xc06c0c0
    ctx->pc = 0x1B81A8u;
    SET_GPR_U32(ctx, 31, 0x1B81B0u);
    ctx->pc = 0x1B81ACu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81B0u; }
    }
    if (ctx->pc != 0x1B81B0u) { return; }
    ctx->pc = 0x1B81B0u;
    // 0x1b81b0: 0x3c040060
    ctx->pc = 0x1b81b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)96 << 16));
    // 0x1b81b4: 0x40802d
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b8: 0x2484e360
    ctx->pc = 0x1b81b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959968));
    // 0x1b81bc: 0xc06dfd0
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1B7F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7F40_0x1b7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81C4u; }
    }
    if (ctx->pc != 0x1B81C4u) { return; }
    ctx->pc = 0x1B81C4u;
    // 0x1b81c4: 0x24030001
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b81c8: 0x16030005
    ctx->pc = 0x1B81C8u;
    {
        const bool branch_taken_0x1b81c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B81CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b81c8) {
            ctx->pc = 0x1B81E0u;
            goto label_1b81e0;
        }
    }
    ctx->pc = 0x1B81D0u;
    // 0x1b81d0: 0xc06e034
    ctx->pc = 0x1B81D0u;
    SET_GPR_U32(ctx, 31, 0x1B81D8u);
    ctx->pc = 0x1B81D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1B80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80D0_0x1b80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D8u; }
    }
    if (ctx->pc != 0x1B81D8u) { return; }
    ctx->pc = 0x1B81D8u;
    // 0x1b81d8: 0x10000006
    ctx->pc = 0x1B81D8u;
    {
        const bool branch_taken_0x1b81d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B81DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1b81d8) {
            ctx->pc = 0x1B81F4u;
            goto label_1b81f4;
        }
    }
    ctx->pc = 0x1B81E0u;
label_1b81e0:
    // 0x1b81e0: 0x16000003
    ctx->pc = 0x1B81E0u;
    {
        const bool branch_taken_0x1b81e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B81E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b81e0) {
            ctx->pc = 0x1B81F0u;
            goto label_1b81f0;
        }
    }
    ctx->pc = 0x1B81E8u;
    // 0x1b81e8: 0xc06e034
    ctx->pc = 0x1B81E8u;
    SET_GPR_U32(ctx, 31, 0x1B81F0u);
    ctx->pc = 0x1B81ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1B80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80D0_0x1b80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81F0u; }
    }
    if (ctx->pc != 0x1B81F0u) { return; }
    ctx->pc = 0x1B81F0u;
label_1b81f0:
    // 0x1b81f0: 0xdfbf0010
    ctx->pc = 0x1b81f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b81f4:
    // 0x1b81f4: 0x7bb00000
    ctx->pc = 0x1b81f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b81f8: 0x3e00008
    ctx->pc = 0x1B81F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B81E0u: goto label_1b81e0;
            case 0x1B81F0u: goto label_1b81f0;
            case 0x1B81F4u: goto label_1b81f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8200u;
    // 0x1b8200: 0x27bdfff0
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8204: 0xffbf0000
    ctx->pc = 0x1b8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8208: 0xc06c0c0
    ctx->pc = 0x1B8208u;
    SET_GPR_U32(ctx, 31, 0x1B8210u);
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8210u; }
    }
    if (ctx->pc != 0x1B8210u) { return; }
    ctx->pc = 0x1B8210u;
    // 0x1b8210: 0x3c04005c
    ctx->pc = 0x1b8210u;
    SET_GPR_U32(ctx, 4, ((uint32_t)92 << 16));
    // 0x1b8214: 0x24050004
    ctx->pc = 0x1b8214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8218: 0xc06dfd0
    ctx->pc = 0x1B8218u;
    SET_GPR_U32(ctx, 31, 0x1B8220u);
    ctx->pc = 0x1B821Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942736));
    ctx->pc = 0x1B7F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7F40_0x1b7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8220u; }
    }
    if (ctx->pc != 0x1B8220u) { return; }
    ctx->pc = 0x1B8220u;
    // 0x1b8220: 0x24040003
    ctx->pc = 0x1b8220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8224: 0xc06e034
    ctx->pc = 0x1B8224u;
    SET_GPR_U32(ctx, 31, 0x1B822Cu);
    ctx->pc = 0x1B8228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1B80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80D0_0x1b80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B822Cu; }
    }
    if (ctx->pc != 0x1B822Cu) { return; }
    ctx->pc = 0x1B822Cu;
    // 0x1b822c: 0xdfbf0000
    ctx->pc = 0x1b822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8230: 0x3e00008
    ctx->pc = 0x1B8230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B81E0u: goto label_1b81e0;
            case 0x1B81F0u: goto label_1b81f0;
            case 0x1B81F4u: goto label_1b81f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8238u;
    // 0x1b8238: 0x0
    ctx->pc = 0x1b8238u;
    // NOP
    // 0x1b823c: 0x0
    ctx->pc = 0x1b823cu;
    // NOP
    // 0x1b8240: 0x27bdfff0
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8244: 0xffbf0000
    ctx->pc = 0x1b8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8248: 0xc06c0c0
    ctx->pc = 0x1B8248u;
    SET_GPR_U32(ctx, 31, 0x1B8250u);
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8250u; }
    }
    if (ctx->pc != 0x1B8250u) { return; }
    ctx->pc = 0x1B8250u;
    // 0x1b8250: 0x3c04005c
    ctx->pc = 0x1b8250u;
    SET_GPR_U32(ctx, 4, ((uint32_t)92 << 16));
    // 0x1b8254: 0x24050004
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8258: 0xc06dfd0
    ctx->pc = 0x1B8258u;
    SET_GPR_U32(ctx, 31, 0x1B8260u);
    ctx->pc = 0x1B825Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943216));
    ctx->pc = 0x1B7F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7F40_0x1b7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8260u; }
    }
    if (ctx->pc != 0x1B8260u) { return; }
    ctx->pc = 0x1B8260u;
    // 0x1b8260: 0x24040003
    ctx->pc = 0x1b8260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8264: 0xc06e034
    ctx->pc = 0x1B8264u;
    SET_GPR_U32(ctx, 31, 0x1B826Cu);
    ctx->pc = 0x1B8268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1B80D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B80D0_0x1b80d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B826Cu; }
    }
    if (ctx->pc != 0x1B826Cu) { return; }
    ctx->pc = 0x1B826Cu;
    // 0x1b826c: 0xdfbf0000
    ctx->pc = 0x1b826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8270: 0x3e00008
    ctx->pc = 0x1B8270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B81E0u: goto label_1b81e0;
            case 0x1B81F0u: goto label_1b81f0;
            case 0x1B81F4u: goto label_1b81f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8278u;
    // 0x1b8278: 0x0
    ctx->pc = 0x1b8278u;
    // NOP
    // 0x1b827c: 0x0
    ctx->pc = 0x1b827cu;
    // NOP
}
