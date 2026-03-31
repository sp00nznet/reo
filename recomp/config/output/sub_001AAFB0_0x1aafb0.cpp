#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AAFB0
// Address: 0x1aafb0 - 0x1ab050
void sub_001AAFB0_0x1aafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aafb0u;

    // 0x1aafb0: 0x27bdff30
    ctx->pc = 0x1aafb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1aafb4: 0xffbf0040
    ctx->pc = 0x1aafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aafb8: 0x7fb30030
    ctx->pc = 0x1aafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aafbc: 0x7fb20020
    ctx->pc = 0x1aafbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aafc0: 0x80982d
    ctx->pc = 0x1aafc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafc4: 0x7fb10010
    ctx->pc = 0x1aafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aafc8: 0xc0902d
    ctx->pc = 0x1aafc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafcc: 0x7fb00000
    ctx->pc = 0x1aafccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aafd0: 0x12600015
    ctx->pc = 0x1AAFD0u;
    {
        const bool branch_taken_0x1aafd0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAFD4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1aafd0) {
            ctx->pc = 0x1AB028u;
            goto label_1ab028;
        }
    }
    ctx->pc = 0x1AAFD8u;
    // 0x1aafd8: 0xa0802d
    ctx->pc = 0x1aafd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafdc: 0x27a40050
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1aafe0: 0xc041eac
    ctx->pc = 0x1AAFE0u;
    SET_GPR_U32(ctx, 31, 0x1AAFE8u);
    ctx->pc = 0x1AAFE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFE8u; }
    }
    if (ctx->pc != 0x1AAFE8u) { return; }
    ctx->pc = 0x1AAFE8u;
    // 0x1aafe8: 0x8fa40064
    ctx->pc = 0x1aafe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1aafec: 0x1080000e
    ctx->pc = 0x1AAFECu;
    {
        const bool branch_taken_0x1aafec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aafec) {
            ctx->pc = 0x1AB028u;
            goto label_1ab028;
        }
    }
    ctx->pc = 0x1AAFF4u;
    // 0x1aaff4: 0x8fa30074
    ctx->pc = 0x1aaff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1aaff8: 0x14600004
    ctx->pc = 0x1AAFF8u;
    {
        const bool branch_taken_0x1aaff8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AAFFCu;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        if (branch_taken_0x1aaff8) {
            ctx->pc = 0x1AB00Cu;
            goto label_1ab00c;
        }
    }
    ctx->pc = 0x1AB000u;
    // 0x1ab000: 0x1000000a
    ctx->pc = 0x1AB000u;
    {
        const bool branch_taken_0x1ab000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB004u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1ab000) {
            ctx->pc = 0x1AB02Cu;
            goto label_1ab02c;
        }
    }
    ctx->pc = 0x1AB008u;
    // 0x1ab008: 0x2043021
    ctx->pc = 0x1ab008u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1ab00c:
    // 0x1ab00c: 0x324500ff
    ctx->pc = 0x1ab00cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 18), 255));
    // 0x1ab010: 0x260202d
    ctx->pc = 0x1ab010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab014: 0x220402d
    ctx->pc = 0x1ab014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab018: 0xc073d58
    ctx->pc = 0x1AB018u;
    SET_GPR_U32(ctx, 31, 0x1AB020u);
    ctx->pc = 0x1AB01Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF560_0x1cf560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB020u; }
    }
    if (ctx->pc != 0x1AB020u) { return; }
    ctx->pc = 0x1AB020u;
    // 0x1ab020: 0xc06372c
    ctx->pc = 0x1AB020u;
    SET_GPR_U32(ctx, 31, 0x1AB028u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB028u; }
    }
    if (ctx->pc != 0x1AB028u) { return; }
    ctx->pc = 0x1AB028u;
label_1ab028:
    // 0x1ab028: 0xdfbf0040
    ctx->pc = 0x1ab028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab02c:
    // 0x1ab02c: 0x7bb30030
    ctx->pc = 0x1ab02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab030: 0x7bb20020
    ctx->pc = 0x1ab030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab034: 0x7bb10010
    ctx->pc = 0x1ab034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab038: 0x7bb00000
    ctx->pc = 0x1ab038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab03c: 0x3e00008
    ctx->pc = 0x1AB03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB00Cu: goto label_1ab00c;
            case 0x1AB028u: goto label_1ab028;
            case 0x1AB02Cu: goto label_1ab02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB044u;
    // 0x1ab044: 0x0
    ctx->pc = 0x1ab044u;
    // NOP
    // 0x1ab048: 0x0
    ctx->pc = 0x1ab048u;
    // NOP
    // 0x1ab04c: 0x0
    ctx->pc = 0x1ab04cu;
    // NOP
}
