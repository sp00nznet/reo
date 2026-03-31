#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A110
// Address: 0x16a110 - 0x16a1c0
void sub_0016A110_0x16a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a110u;

    // 0x16a110: 0x3e00008
    ctx->pc = 0x16A110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A150u: goto label_16a150;
            case 0x16A180u: goto label_16a180;
            case 0x16A1A4u: goto label_16a1a4;
            case 0x16A1A8u: goto label_16a1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A118u;
    // 0x16a118: 0x27bdfff0
    ctx->pc = 0x16a118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a11c: 0xffbf0000
    ctx->pc = 0x16a11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a120: 0xc056056
    ctx->pc = 0x16A120u;
    SET_GPR_U32(ctx, 31, 0x16A128u);
    ctx->pc = 0x158158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158158_0x158158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A128u; }
    }
    if (ctx->pc != 0x16A128u) { return; }
    ctx->pc = 0x16A128u;
    // 0x16a128: 0xdfbf0000
    ctx->pc = 0x16a128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a12c: 0x102d
    ctx->pc = 0x16a12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a130: 0x3e00008
    ctx->pc = 0x16A130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A150u: goto label_16a150;
            case 0x16A180u: goto label_16a180;
            case 0x16A1A4u: goto label_16a1a4;
            case 0x16A1A8u: goto label_16a1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A138u;
    // 0x16a138: 0x27bdfff0
    ctx->pc = 0x16a138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a13c: 0xffbf0000
    ctx->pc = 0x16a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a140: 0xdfbf0000
    ctx->pc = 0x16a140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a144: 0x805a854
    ctx->pc = 0x16A144u;
    ctx->pc = 0x16A148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16A150u;
    goto label_16a150;
    ctx->pc = 0x16A14Cu;
    // 0x16a14c: 0x0
    ctx->pc = 0x16a14cu;
    // NOP
label_16a150:
    // 0x16a150: 0x27bdffe0
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a154: 0xffb00000
    ctx->pc = 0x16a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a158: 0xffb10008
    ctx->pc = 0x16a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a15c: 0xffbf0010
    ctx->pc = 0x16a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a160: 0xc05ac10
    ctx->pc = 0x16A160u;
    SET_GPR_U32(ctx, 31, 0x16A168u);
    ctx->pc = 0x16A164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B040_0x16b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A168u; }
    }
    if (ctx->pc != 0x16A168u) { return; }
    ctx->pc = 0x16A168u;
    // 0x16a168: 0x24030001
    ctx->pc = 0x16a168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a16c: 0x14430004
    ctx->pc = 0x16A16Cu;
    {
        const bool branch_taken_0x16a16c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16A170u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a16c) {
            ctx->pc = 0x16A180u;
            goto label_16a180;
        }
    }
    ctx->pc = 0x16A174u;
    // 0x16a174: 0x1000000c
    ctx->pc = 0x16A174u;
    {
        const bool branch_taken_0x16a174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A178u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a174) {
            ctx->pc = 0x16A1A8u;
            goto label_16a1a8;
        }
    }
    ctx->pc = 0x16A17Cu;
    // 0x16a17c: 0x0
    ctx->pc = 0x16a17cu;
    // NOP
label_16a180:
    // 0x16a180: 0xc05a870
    ctx->pc = 0x16A180u;
    SET_GPR_U32(ctx, 31, 0x16A188u);
    ctx->pc = 0x16A1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A1C0_0x16a1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A188u; }
    }
    if (ctx->pc != 0x16A188u) { return; }
    ctx->pc = 0x16A188u;
    // 0x16a188: 0x24030002
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a18c: 0x40882d
    ctx->pc = 0x16a18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a190: 0x8e020048
    ctx->pc = 0x16a190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x16a194: 0x14430003
    ctx->pc = 0x16A194u;
    {
        const bool branch_taken_0x16a194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16A198u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a194) {
            ctx->pc = 0x16A1A4u;
            goto label_16a1a4;
        }
    }
    ctx->pc = 0x16A19Cu;
    // 0x16a19c: 0xc05ac9a
    ctx->pc = 0x16A19Cu;
    SET_GPR_U32(ctx, 31, 0x16A1A4u);
    ctx->pc = 0x16B268u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B268_0x16b268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1A4u; }
    }
    if (ctx->pc != 0x16A1A4u) { return; }
    ctx->pc = 0x16A1A4u;
label_16a1a4:
    // 0x16a1a4: 0x220102d
    ctx->pc = 0x16a1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a1a8:
    // 0x16a1a8: 0xdfb00000
    ctx->pc = 0x16a1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a1ac: 0xdfb10008
    ctx->pc = 0x16a1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a1b0: 0xdfbf0010
    ctx->pc = 0x16a1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a1b4: 0x3e00008
    ctx->pc = 0x16A1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A1B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A150u: goto label_16a150;
            case 0x16A180u: goto label_16a180;
            case 0x16A1A4u: goto label_16a1a4;
            case 0x16A1A8u: goto label_16a1a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A1BCu;
    // 0x16a1bc: 0x0
    ctx->pc = 0x16a1bcu;
    // NOP
}
