#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173EA8
// Address: 0x173ea8 - 0x173f28
void sub_00173EA8_0x173ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173ea8u;

    // 0x173ea8: 0x27bdffe0
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173eac: 0xffb00000
    ctx->pc = 0x173eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173eb0: 0xa0802d
    ctx->pc = 0x173eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173eb4: 0xffb10008
    ctx->pc = 0x173eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173eb8: 0x80882d
    ctx->pc = 0x173eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ebc: 0xffb20010
    ctx->pc = 0x173ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173ec0: 0xffbf0018
    ctx->pc = 0x173ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173ec4: 0xc05a78c
    ctx->pc = 0x173EC4u;
    SET_GPR_U32(ctx, 31, 0x173ECCu);
    ctx->pc = 0x173EC8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173ECCu; }
    }
    if (ctx->pc != 0x173ECCu) { return; }
    ctx->pc = 0x173ECCu;
    // 0x173ecc: 0x3c05ff00
    ctx->pc = 0x173eccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173ed0: 0x220202d
    ctx->pc = 0x173ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ed4: 0x200382d
    ctx->pc = 0x173ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ed8: 0x240402d
    ctx->pc = 0x173ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173edc: 0x34a50135
    ctx->pc = 0x173edcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 309));
    // 0x173ee0: 0x10400009
    ctx->pc = 0x173EE0u;
    {
        const bool branch_taken_0x173ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173EE4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x173ee0) {
            ctx->pc = 0x173F08u;
            goto label_173f08;
        }
    }
    ctx->pc = 0x173EE8u;
    // 0x173ee8: 0xdfb00000
    ctx->pc = 0x173ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173eec: 0x202d
    ctx->pc = 0x173eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ef0: 0xdfb10008
    ctx->pc = 0x173ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173ef4: 0xdfb20010
    ctx->pc = 0x173ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ef8: 0xdfbf0018
    ctx->pc = 0x173ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173efc: 0x805a704
    ctx->pc = 0x173EFCu;
    ctx->pc = 0x173F00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x173F04u;
    // 0x173f04: 0x0
    ctx->pc = 0x173f04u;
    // NOP
label_173f08:
    // 0x173f08: 0xdfb00000
    ctx->pc = 0x173f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f0c: 0x282d
    ctx->pc = 0x173f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f10: 0xdfb10008
    ctx->pc = 0x173f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173f14: 0xdfb20010
    ctx->pc = 0x173f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f18: 0xdfbf0018
    ctx->pc = 0x173f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173f1c: 0x805def8
    ctx->pc = 0x173F1Cu;
    ctx->pc = 0x173F20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177BE0u;
    sub_00177BE0_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x173F24u;
    // 0x173f24: 0x0
    ctx->pc = 0x173f24u;
    // NOP
}
