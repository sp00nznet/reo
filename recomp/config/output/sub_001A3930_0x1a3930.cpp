#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3930
// Address: 0x1a3930 - 0x1a39e0
void sub_001A3930_0x1a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3930u;

    // 0x1a3930: 0x27bdfff0
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3934: 0xa0502d
    ctx->pc = 0x1a3934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3938: 0xffbf0000
    ctx->pc = 0x1a3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a393c: 0xc0482d
    ctx->pc = 0x1a393cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3940: 0xc068da8
    ctx->pc = 0x1A3940u;
    SET_GPR_U32(ctx, 31, 0x1A3948u);
    ctx->pc = 0x1A3944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A36A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36A0_0x1a36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3948u; }
    }
    if (ctx->pc != 0x1A3948u) { return; }
    ctx->pc = 0x1A3948u;
    // 0x1a3948: 0x4a082a
    ctx->pc = 0x1a3948u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 10)));
    // 0x1a394c: 0x10200003
    ctx->pc = 0x1A394Cu;
    {
        const bool branch_taken_0x1a394c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3950u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a394c) {
            ctx->pc = 0x1A395Cu;
            goto label_1a395c;
        }
    }
    ctx->pc = 0x1A3954u;
    // 0x1a3954: 0x1000001e
    ctx->pc = 0x1A3954u;
    {
        const bool branch_taken_0x1a3954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3954) {
            ctx->pc = 0x1A39D0u;
            goto label_1a39d0;
        }
    }
    ctx->pc = 0x1A395Cu;
label_1a395c:
    // 0x1a395c: 0x24050005
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3960: 0xc068d7c
    ctx->pc = 0x1A3960u;
    SET_GPR_U32(ctx, 31, 0x1A3968u);
    ctx->pc = 0x1A3964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3968u; }
    }
    if (ctx->pc != 0x1A3968u) { return; }
    ctx->pc = 0x1A3968u;
    // 0x1a3968: 0x14400003
    ctx->pc = 0x1A3968u;
    {
        const bool branch_taken_0x1a3968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A396Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x1a3968) {
            ctx->pc = 0x1A3978u;
            goto label_1a3978;
        }
    }
    ctx->pc = 0x1A3970u;
    // 0x1a3970: 0x10000017
    ctx->pc = 0x1A3970u;
    {
        const bool branch_taken_0x1a3970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3970) {
            ctx->pc = 0x1A39D0u;
            goto label_1a39d0;
        }
    }
    ctx->pc = 0x1A3978u;
label_1a3978:
    // 0x1a3978: 0x10000004
    ctx->pc = 0x1A3978u;
    {
        const bool branch_taken_0x1a3978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A397Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3978) {
            ctx->pc = 0x1A398Cu;
            goto label_1a398c;
        }
    }
    ctx->pc = 0x1A3980u;
label_1a3980:
    // 0x1a3980: 0x8c820008
    ctx->pc = 0x1a3980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3984: 0x24630001
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3988: 0x822021
    ctx->pc = 0x1a3988u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a398c:
    // 0x1a398c: 0x6a102a
    ctx->pc = 0x1a398cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x1a3990: 0x0
    ctx->pc = 0x1a3990u;
    // NOP
    // 0x1a3994: 0x1440fffa
    ctx->pc = 0x1A3994u;
    {
        const bool branch_taken_0x1a3994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3994) {
            ctx->pc = 0x1A3980u;
            goto label_1a3980;
        }
    }
    ctx->pc = 0x1A399Cu;
    // 0x1a399c: 0x2484000c
    ctx->pc = 0x1a399cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a39a0: 0x10000008
    ctx->pc = 0x1A39A0u;
    {
        const bool branch_taken_0x1a39a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A39A4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a39a0) {
            ctx->pc = 0x1A39C4u;
            goto label_1a39c4;
        }
    }
    ctx->pc = 0x1A39A8u;
label_1a39a8:
    // 0x1a39a8: 0x8c820000
    ctx->pc = 0x1a39a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a39ac: 0x24630001
    ctx->pc = 0x1a39acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a39b0: 0x2407c
    ctx->pc = 0x1a39b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1a39b4: 0x8407e
    ctx->pc = 0x1a39b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 1));
    // 0x1a39b8: 0x81080
    ctx->pc = 0x1a39b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a39bc: 0x24420004
    ctx->pc = 0x1a39bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a39c0: 0x822021
    ctx->pc = 0x1a39c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a39c4:
    // 0x1a39c4: 0x123082a
    ctx->pc = 0x1a39c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x1a39c8: 0x1020fff7
    ctx->pc = 0x1A39C8u;
    {
        const bool branch_taken_0x1a39c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A39CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a39c8) {
            ctx->pc = 0x1A39A8u;
            goto label_1a39a8;
        }
    }
    ctx->pc = 0x1A39D0u;
label_1a39d0:
    // 0x1a39d0: 0xdfbf0000
    ctx->pc = 0x1a39d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a39d4: 0x3e00008
    ctx->pc = 0x1A39D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A39D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A395Cu: goto label_1a395c;
            case 0x1A3978u: goto label_1a3978;
            case 0x1A3980u: goto label_1a3980;
            case 0x1A398Cu: goto label_1a398c;
            case 0x1A39A8u: goto label_1a39a8;
            case 0x1A39C4u: goto label_1a39c4;
            case 0x1A39D0u: goto label_1a39d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A39DCu;
    // 0x1a39dc: 0x0
    ctx->pc = 0x1a39dcu;
    // NOP
}
