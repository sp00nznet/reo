#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B18F0
// Address: 0x1b18f0 - 0x1b1970
void sub_001B18F0_0x1b18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b18f0u;

    // 0x1b18f0: 0x27bdffd0
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b18f4: 0xffbf0020
    ctx->pc = 0x1b18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b18f8: 0x7fb10010
    ctx->pc = 0x1b18f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b18fc: 0x7fb00000
    ctx->pc = 0x1b18fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1900: 0x3c110057
    ctx->pc = 0x1b1900u;
    SET_GPR_U32(ctx, 17, ((uint32_t)87 << 16));
    // 0x1b1904: 0x263198d0
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294940880));
    // 0x1b1908: 0x802d
    ctx->pc = 0x1b1908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b190c:
    // 0x1b190c: 0x8e240000
    ctx->pc = 0x1b190cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b1910: 0x2402ffff
    ctx->pc = 0x1b1910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1914: 0x10820007
    ctx->pc = 0x1B1914u;
    {
        const bool branch_taken_0x1b1914 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b1914) {
            ctx->pc = 0x1B1934u;
            goto label_1b1934;
        }
    }
    ctx->pc = 0x1B191Cu;
    // 0x1b191c: 0x10800005
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B1934u;
            goto label_1b1934;
        }
    }
    ctx->pc = 0x1B1924u;
    // 0x1b1924: 0xc063128
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B192Cu; }
    }
    if (ctx->pc != 0x1B192Cu) { return; }
    ctx->pc = 0x1B192Cu;
    // 0x1b192c: 0x2402ffff
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1930: 0xae220000
    ctx->pc = 0x1b1930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b1934:
    // 0x1b1934: 0x26100001
    ctx->pc = 0x1b1934u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b1938: 0x2a0202bc
    ctx->pc = 0x1b1938u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 700));
    // 0x1b193c: 0x1440fff3
    ctx->pc = 0x1B193Cu;
    {
        const bool branch_taken_0x1b193c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1940u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1b193c) {
            ctx->pc = 0x1B190Cu;
            goto label_1b190c;
        }
    }
    ctx->pc = 0x1B1944u;
    // 0x1b1944: 0xc06c478
    ctx->pc = 0x1B1944u;
    SET_GPR_U32(ctx, 31, 0x1B194Cu);
    ctx->pc = 0x1B11E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B11E0_0x1b11e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B194Cu; }
    }
    if (ctx->pc != 0x1B194Cu) { return; }
    ctx->pc = 0x1B194Cu;
    // 0x1b194c: 0xc06c454
    ctx->pc = 0x1B194Cu;
    SET_GPR_U32(ctx, 31, 0x1B1954u);
    ctx->pc = 0x1B1150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1150_0x1b1150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1954u; }
    }
    if (ctx->pc != 0x1B1954u) { return; }
    ctx->pc = 0x1B1954u;
    // 0x1b1954: 0xc06ca64
    ctx->pc = 0x1B1954u;
    SET_GPR_U32(ctx, 31, 0x1B195Cu);
    ctx->pc = 0x1B2990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2990_0x1b2990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B195Cu; }
    }
    if (ctx->pc != 0x1B195Cu) { return; }
    ctx->pc = 0x1B195Cu;
    // 0x1b195c: 0xdfbf0020
    ctx->pc = 0x1b195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1960: 0x7bb10010
    ctx->pc = 0x1b1960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1964: 0x7bb00000
    ctx->pc = 0x1b1964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1968: 0x3e00008
    ctx->pc = 0x1B1968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B196Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B190Cu: goto label_1b190c;
            case 0x1B1934u: goto label_1b1934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1970u;
}
