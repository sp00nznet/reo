#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD150
// Address: 0x1ad150 - 0x1ad220
void sub_001AD150_0x1ad150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad150u;

    // 0x1ad150: 0x27bdffc0
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad154: 0x3c028000
    ctx->pc = 0x1ad154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1ad158: 0xffbf0030
    ctx->pc = 0x1ad158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ad15c: 0x7fb20020
    ctx->pc = 0x1ad15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ad160: 0x7fb10010
    ctx->pc = 0x1ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad164: 0x80902d
    ctx->pc = 0x1ad164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad168: 0x7fb00000
    ctx->pc = 0x1ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad16c: 0xa0882d
    ctx->pc = 0x1ad16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad170: 0xc0802d
    ctx->pc = 0x1ad170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad174: 0x24050001
    ctx->pc = 0x1ad174u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad178: 0xc06a030
    ctx->pc = 0x1AD178u;
    SET_GPR_U32(ctx, 31, 0x1AD180u);
    ctx->pc = 0x1AD17Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80C0_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD180u; }
    }
    if (ctx->pc != 0x1AD180u) { return; }
    ctx->pc = 0x1AD180u;
    // 0x1ad180: 0x240202d
    ctx->pc = 0x1ad180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad184: 0x220282d
    ctx->pc = 0x1ad184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad188: 0xc06b488
    ctx->pc = 0x1AD188u;
    SET_GPR_U32(ctx, 31, 0x1AD190u);
    ctx->pc = 0x1AD18Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AD220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD220_0x1ad220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD190u; }
    }
    if (ctx->pc != 0x1AD190u) { return; }
    ctx->pc = 0x1AD190u;
    // 0x1ad190: 0x4410003
    ctx->pc = 0x1AD190u;
    {
        const bool branch_taken_0x1ad190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AD194u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad190) {
            ctx->pc = 0x1AD1A0u;
            goto label_1ad1a0;
        }
    }
    ctx->pc = 0x1AD198u;
    // 0x1ad198: 0x1000001a
    ctx->pc = 0x1AD198u;
    {
        const bool branch_taken_0x1ad198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD19Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1ad198) {
            ctx->pc = 0x1AD204u;
            goto label_1ad204;
        }
    }
    ctx->pc = 0x1AD1A0u;
label_1ad1a0:
    // 0x1ad1a0: 0xc06ade4
    ctx->pc = 0x1AD1A0u;
    SET_GPR_U32(ctx, 31, 0x1AD1A8u);
    ctx->pc = 0x1AB790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1A8u; }
    }
    if (ctx->pc != 0x1AD1A8u) { return; }
    ctx->pc = 0x1AD1A8u;
    // 0x1ad1a8: 0x10000004
    ctx->pc = 0x1AD1A8u;
    {
        const bool branch_taken_0x1ad1a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD1ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ad1a8) {
            ctx->pc = 0x1AD1BCu;
            goto label_1ad1bc;
        }
    }
    ctx->pc = 0x1AD1B0u;
label_1ad1b0:
    // 0x1ad1b0: 0xc044cfc
    ctx->pc = 0x1AD1B0u;
    SET_GPR_U32(ctx, 31, 0x1AD1B8u);
    ctx->pc = 0x1AD1B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1133F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001133F0_0x1133f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B8u; }
    }
    if (ctx->pc != 0x1AD1B8u) { return; }
    ctx->pc = 0x1AD1B8u;
    // 0x1ad1b8: 0x24040001
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1ad1bc:
    // 0x1ad1bc: 0xc069fd4
    ctx->pc = 0x1AD1BCu;
    SET_GPR_U32(ctx, 31, 0x1AD1C4u);
    ctx->pc = 0x1A7F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F50_0x1a7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1C4u; }
    }
    if (ctx->pc != 0x1AD1C4u) { return; }
    ctx->pc = 0x1AD1C4u;
    // 0x1ad1c4: 0x1c40fffa
    ctx->pc = 0x1AD1C4u;
    {
        const bool branch_taken_0x1ad1c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ad1c4) {
            ctx->pc = 0x1AD1B0u;
            goto label_1ad1b0;
        }
    }
    ctx->pc = 0x1AD1CCu;
    // 0x1ad1cc: 0x10000004
    ctx->pc = 0x1AD1CCu;
    {
        const bool branch_taken_0x1ad1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD1D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
        if (branch_taken_0x1ad1cc) {
            ctx->pc = 0x1AD1E0u;
            goto label_1ad1e0;
        }
    }
    ctx->pc = 0x1AD1D4u;
label_1ad1d4:
    // 0x1ad1d4: 0xc044cfc
    ctx->pc = 0x1AD1D4u;
    SET_GPR_U32(ctx, 31, 0x1AD1DCu);
    ctx->pc = 0x1AD1D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1133F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001133F0_0x1133f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1DCu; }
    }
    if (ctx->pc != 0x1AD1DCu) { return; }
    ctx->pc = 0x1AD1DCu;
    // 0x1ad1dc: 0x3c028000
    ctx->pc = 0x1ad1dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1ad1e0:
    // 0x1ad1e0: 0x24050001
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad1e4: 0xc06a030
    ctx->pc = 0x1AD1E4u;
    SET_GPR_U32(ctx, 31, 0x1AD1ECu);
    ctx->pc = 0x1AD1E8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80C0_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1ECu; }
    }
    if (ctx->pc != 0x1AD1ECu) { return; }
    ctx->pc = 0x1AD1ECu;
    // 0x1ad1ec: 0x1c40fff9
    ctx->pc = 0x1AD1ECu;
    {
        const bool branch_taken_0x1ad1ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ad1ec) {
            ctx->pc = 0x1AD1D4u;
            goto label_1ad1d4;
        }
    }
    ctx->pc = 0x1AD1F4u;
    // 0x1ad1f4: 0xc06adfc
    ctx->pc = 0x1AD1F4u;
    SET_GPR_U32(ctx, 31, 0x1AD1FCu);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1FCu; }
    }
    if (ctx->pc != 0x1AD1FCu) { return; }
    ctx->pc = 0x1AD1FCu;
    // 0x1ad1fc: 0x200102d
    ctx->pc = 0x1ad1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad200: 0xdfbf0030
    ctx->pc = 0x1ad200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad204:
    // 0x1ad204: 0x7bb20020
    ctx->pc = 0x1ad204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad208: 0x7bb10010
    ctx->pc = 0x1ad208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad20c: 0x7bb00000
    ctx->pc = 0x1ad20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad210: 0x3e00008
    ctx->pc = 0x1AD210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD1A0u: goto label_1ad1a0;
            case 0x1AD1B0u: goto label_1ad1b0;
            case 0x1AD1BCu: goto label_1ad1bc;
            case 0x1AD1D4u: goto label_1ad1d4;
            case 0x1AD1E0u: goto label_1ad1e0;
            case 0x1AD204u: goto label_1ad204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD218u;
    // 0x1ad218: 0x0
    ctx->pc = 0x1ad218u;
    // NOP
    // 0x1ad21c: 0x0
    ctx->pc = 0x1ad21cu;
    // NOP
}
