#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168908
// Address: 0x168908 - 0x1689a0
void sub_00168908_0x168908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168908u;

    // 0x168908: 0x27bdffe0
    ctx->pc = 0x168908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16890c: 0xffb00000
    ctx->pc = 0x16890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168910: 0x80802d
    ctx->pc = 0x168910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168914: 0xffb10008
    ctx->pc = 0x168914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168918: 0xa0882d
    ctx->pc = 0x168918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16891c: 0xffb20010
    ctx->pc = 0x16891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168920: 0xffbf0018
    ctx->pc = 0x168920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168924: 0xc05a268
    ctx->pc = 0x168924u;
    SET_GPR_U32(ctx, 31, 0x16892Cu);
    ctx->pc = 0x168928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1689A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001689A0_0x1689a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16892Cu; }
    }
    if (ctx->pc != 0x16892Cu) { return; }
    ctx->pc = 0x16892Cu;
    // 0x16892c: 0x26040002
    ctx->pc = 0x16892cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2));
    // 0x168930: 0x2625fffe
    ctx->pc = 0x168930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x168934: 0x1440000d
    ctx->pc = 0x168934u;
    {
        const bool branch_taken_0x168934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168938u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168934) {
            ctx->pc = 0x16896Cu;
            goto label_16896c;
        }
    }
    ctx->pc = 0x16893Cu;
    // 0x16893c: 0xc05a268
    ctx->pc = 0x16893Cu;
    SET_GPR_U32(ctx, 31, 0x168944u);
    ctx->pc = 0x1689A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001689A0_0x1689a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168944u; }
    }
    if (ctx->pc != 0x168944u) { return; }
    ctx->pc = 0x168944u;
    // 0x168944: 0x5440000f
    ctx->pc = 0x168944u;
    {
        const bool branch_taken_0x168944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168944) {
            ctx->pc = 0x168948u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x168984u;
            goto label_168984;
        }
    }
    ctx->pc = 0x16894Cu;
    // 0x16894c: 0x26040001
    ctx->pc = 0x16894cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    // 0x168950: 0x2625ffff
    ctx->pc = 0x168950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x168954: 0xc05a268
    ctx->pc = 0x168954u;
    SET_GPR_U32(ctx, 31, 0x16895Cu);
    ctx->pc = 0x168958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1689A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001689A0_0x1689a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16895Cu; }
    }
    if (ctx->pc != 0x16895Cu) { return; }
    ctx->pc = 0x16895Cu;
    // 0x16895c: 0x26040003
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3));
    // 0x168960: 0x2625fffd
    ctx->pc = 0x168960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x168964: 0x10400004
    ctx->pc = 0x168964u;
    {
        const bool branch_taken_0x168964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168968u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168964) {
            ctx->pc = 0x168978u;
            goto label_168978;
        }
    }
    ctx->pc = 0x16896Cu;
label_16896c:
    // 0x16896c: 0x10000005
    ctx->pc = 0x16896Cu;
    {
        const bool branch_taken_0x16896c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168970u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16896c) {
            ctx->pc = 0x168984u;
            goto label_168984;
        }
    }
    ctx->pc = 0x168974u;
    // 0x168974: 0x0
    ctx->pc = 0x168974u;
    // NOP
label_168978:
    // 0x168978: 0xc05a268
    ctx->pc = 0x168978u;
    SET_GPR_U32(ctx, 31, 0x168980u);
    ctx->pc = 0x1689A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001689A0_0x1689a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168980u; }
    }
    if (ctx->pc != 0x168980u) { return; }
    ctx->pc = 0x168980u;
    // 0x168980: 0x2102b
    ctx->pc = 0x168980u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_168984:
    // 0x168984: 0xdfb00000
    ctx->pc = 0x168984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168988: 0xdfb10008
    ctx->pc = 0x168988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16898c: 0xdfb20010
    ctx->pc = 0x16898cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168990: 0xdfbf0018
    ctx->pc = 0x168990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168994: 0x3e00008
    ctx->pc = 0x168994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16896Cu: goto label_16896c;
            case 0x168978u: goto label_168978;
            case 0x168984u: goto label_168984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16899Cu;
    // 0x16899c: 0x0
    ctx->pc = 0x16899cu;
    // NOP
}
