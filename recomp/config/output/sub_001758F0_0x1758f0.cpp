#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001758F0
// Address: 0x1758f0 - 0x175970
void sub_001758F0_0x1758f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1758f0u;

    // 0x1758f0: 0x27bdffe0
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1758f4: 0xffb00000
    ctx->pc = 0x1758f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1758f8: 0x80802d
    ctx->pc = 0x1758f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758fc: 0xffb10008
    ctx->pc = 0x1758fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175900: 0xc0882d
    ctx->pc = 0x175900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175904: 0xffb20010
    ctx->pc = 0x175904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175908: 0xffbf0018
    ctx->pc = 0x175908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17590c: 0xc05a78c
    ctx->pc = 0x17590Cu;
    SET_GPR_U32(ctx, 31, 0x175914u);
    ctx->pc = 0x175910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175914u; }
    }
    if (ctx->pc != 0x175914u) { return; }
    ctx->pc = 0x175914u;
    // 0x175914: 0x3c05ff00
    ctx->pc = 0x175914u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175918: 0x200202d
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17591c: 0x220302d
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175920: 0x10400009
    ctx->pc = 0x175920u;
    {
        const bool branch_taken_0x175920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175924u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 279));
        if (branch_taken_0x175920) {
            ctx->pc = 0x175948u;
            goto label_175948;
        }
    }
    ctx->pc = 0x175928u;
    // 0x175928: 0xdfb00000
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17592c: 0x202d
    ctx->pc = 0x17592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175930: 0xdfb10008
    ctx->pc = 0x175930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175934: 0xdfb20010
    ctx->pc = 0x175934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175938: 0xdfbf0018
    ctx->pc = 0x175938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17593c: 0x805a704
    ctx->pc = 0x17593Cu;
    ctx->pc = 0x175940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175944u;
    // 0x175944: 0x0
    ctx->pc = 0x175944u;
    // NOP
label_175948:
    // 0x175948: 0xc05d65c
    ctx->pc = 0x175948u;
    SET_GPR_U32(ctx, 31, 0x175950u);
    ctx->pc = 0x17594Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175970_0x175970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175950u; }
    }
    if (ctx->pc != 0x175950u) { return; }
    ctx->pc = 0x175950u;
    // 0x175950: 0x102d
    ctx->pc = 0x175950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175954: 0xdfb00000
    ctx->pc = 0x175954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175958: 0xdfb10008
    ctx->pc = 0x175958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17595c: 0xdfb20010
    ctx->pc = 0x17595cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175960: 0xdfbf0018
    ctx->pc = 0x175960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175964: 0x3e00008
    ctx->pc = 0x175964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175948u: goto label_175948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17596Cu;
    // 0x17596c: 0x0
    ctx->pc = 0x17596cu;
    // NOP
}
