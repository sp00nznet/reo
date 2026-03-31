#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173FB0
// Address: 0x173fb0 - 0x174030
void sub_00173FB0_0x173fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173fb0u;

    // 0x173fb0: 0x27bdffe0
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173fb4: 0xffb00000
    ctx->pc = 0x173fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173fb8: 0xa0802d
    ctx->pc = 0x173fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fbc: 0xffb10008
    ctx->pc = 0x173fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173fc0: 0x80882d
    ctx->pc = 0x173fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fc4: 0xffbf0010
    ctx->pc = 0x173fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173fc8: 0xc05a78c
    ctx->pc = 0x173FC8u;
    SET_GPR_U32(ctx, 31, 0x173FD0u);
    ctx->pc = 0x173FCCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD0u; }
    }
    if (ctx->pc != 0x173FD0u) { return; }
    ctx->pc = 0x173FD0u;
    // 0x173fd0: 0x202d
    ctx->pc = 0x173fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fd4: 0x3c05ff00
    ctx->pc = 0x173fd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173fd8: 0x2406000b
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x173fdc: 0x200382d
    ctx->pc = 0x173fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe0: 0x402d
    ctx->pc = 0x173fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe4: 0x10400006
    ctx->pc = 0x173FE4u;
    {
        const bool branch_taken_0x173fe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173FE8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 310));
        if (branch_taken_0x173fe4) {
            ctx->pc = 0x174000u;
            goto label_174000;
        }
    }
    ctx->pc = 0x173FECu;
    // 0x173fec: 0xdfb00000
    ctx->pc = 0x173fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ff0: 0xdfb10008
    ctx->pc = 0x173ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173ff4: 0xdfbf0010
    ctx->pc = 0x173ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ff8: 0x805a704
    ctx->pc = 0x173FF8u;
    ctx->pc = 0x173FFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0x220202d
    ctx->pc = 0x174000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174004: 0xc05def8
    ctx->pc = 0x174004u;
    SET_GPR_U32(ctx, 31, 0x17400Cu);
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17400Cu; }
    }
    if (ctx->pc != 0x17400Cu) { return; }
    ctx->pc = 0x17400Cu;
    // 0x17400c: 0x8e030000
    ctx->pc = 0x17400cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174010: 0x10600002
    ctx->pc = 0x174010u;
    {
        const bool branch_taken_0x174010 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x174014u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x174010) {
            ctx->pc = 0x17401Cu;
            goto label_17401c;
        }
    }
    ctx->pc = 0x174018u;
    // 0x174018: 0xae230960
    ctx->pc = 0x174018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2400), GPR_U32(ctx, 3));
label_17401c:
    // 0x17401c: 0xdfb00000
    ctx->pc = 0x17401cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174020: 0xdfb10008
    ctx->pc = 0x174020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174024: 0xdfbf0010
    ctx->pc = 0x174024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174028: 0x3e00008
    ctx->pc = 0x174028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17402Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174030u;
}
