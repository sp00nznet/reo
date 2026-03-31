#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D108
// Address: 0x15d108 - 0x15d1d0
void sub_0015D108_0x15d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d108u;

    // 0x15d108: 0x27bdffe0
    ctx->pc = 0x15d108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d10c: 0xffb00000
    ctx->pc = 0x15d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d110: 0x80802d
    ctx->pc = 0x15d110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d114: 0xffb10008
    ctx->pc = 0x15d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15d118: 0x2611000c
    ctx->pc = 0x15d118u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 12));
    // 0x15d11c: 0xffb20010
    ctx->pc = 0x15d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15d120: 0xffbf0018
    ctx->pc = 0x15d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15d124: 0x8e240008
    ctx->pc = 0x15d124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15d128: 0xc0582d6
    ctx->pc = 0x15D128u;
    SET_GPR_U32(ctx, 31, 0x15D130u);
    ctx->pc = 0x15D12Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x160B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B58_0x160b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D130u; }
    }
    if (ctx->pc != 0x15D130u) { return; }
    ctx->pc = 0x15D130u;
    // 0x15d130: 0x200202d
    ctx->pc = 0x15d130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d134: 0x40902d
    ctx->pc = 0x15d134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d138: 0xc057568
    ctx->pc = 0x15D138u;
    SET_GPR_U32(ctx, 31, 0x15D140u);
    ctx->pc = 0x15D13Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5A0_0x15d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D140u; }
    }
    if (ctx->pc != 0x15D140u) { return; }
    ctx->pc = 0x15D140u;
    // 0x15d140: 0x3c040024
    ctx->pc = 0x15d140u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d144: 0x1040000e
    ctx->pc = 0x15D144u;
    {
        const bool branch_taken_0x15d144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D148u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961928));
        if (branch_taken_0x15d144) {
            ctx->pc = 0x15D180u;
            goto label_15d180;
        }
    }
    ctx->pc = 0x15D14Cu;
    // 0x15d14c: 0xae0200ac
    ctx->pc = 0x15d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x15d150: 0x220202d
    ctx->pc = 0x15d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d154: 0xc058630
    ctx->pc = 0x15D154u;
    SET_GPR_U32(ctx, 31, 0x15D15Cu);
    ctx->pc = 0x15D158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
    ctx->pc = 0x1618C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001618C0_0x1618c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D15Cu; }
    }
    if (ctx->pc != 0x15D15Cu) { return; }
    ctx->pc = 0x15D15Cu;
    // 0x15d15c: 0x24030001
    ctx->pc = 0x15d15cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d160: 0x14430011
    ctx->pc = 0x15D160u;
    {
        const bool branch_taken_0x15d160 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x15D164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d160) {
            ctx->pc = 0x15D1A8u;
            goto label_15d1a8;
        }
    }
    ctx->pc = 0x15D168u;
    // 0x15d168: 0xc057568
    ctx->pc = 0x15D168u;
    SET_GPR_U32(ctx, 31, 0x15D170u);
    ctx->pc = 0x15D16Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)2 << 16));
    ctx->pc = 0x15D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5A0_0x15d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D170u; }
    }
    if (ctx->pc != 0x15D170u) { return; }
    ctx->pc = 0x15D170u;
    // 0x15d170: 0x3c040024
    ctx->pc = 0x15d170u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d174: 0x40182d
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d178: 0x14600007
    ctx->pc = 0x15D178u;
    {
        const bool branch_taken_0x15d178 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D17Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961968));
        if (branch_taken_0x15d178) {
            ctx->pc = 0x15D198u;
            goto label_15d198;
        }
    }
    ctx->pc = 0x15D180u;
label_15d180:
    // 0x15d180: 0xc058dd4
    ctx->pc = 0x15D180u;
    SET_GPR_U32(ctx, 31, 0x15D188u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D188u; }
    }
    if (ctx->pc != 0x15D188u) { return; }
    ctx->pc = 0x15D188u;
    // 0x15d188: 0xc0575d0
    ctx->pc = 0x15D188u;
    SET_GPR_U32(ctx, 31, 0x15D190u);
    ctx->pc = 0x15D18Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D740_0x15d740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D190u; }
    }
    if (ctx->pc != 0x15D190u) { return; }
    ctx->pc = 0x15D190u;
    // 0x15d190: 0x10000008
    ctx->pc = 0x15D190u;
    {
        const bool branch_taken_0x15d190 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15d190) {
            ctx->pc = 0x15D1B4u;
            goto label_15d1b4;
        }
    }
    ctx->pc = 0x15D198u;
label_15d198:
    // 0x15d198: 0x3c020002
    ctx->pc = 0x15d198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x15d19c: 0xae0300ec
    ctx->pc = 0x15d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
    // 0x15d1a0: 0x10000003
    ctx->pc = 0x15D1A0u;
    {
        const bool branch_taken_0x15d1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        if (branch_taken_0x15d1a0) {
            ctx->pc = 0x15D1B0u;
            goto label_15d1b0;
        }
    }
    ctx->pc = 0x15D1A8u;
label_15d1a8:
    // 0x15d1a8: 0xae0000f0
    ctx->pc = 0x15d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x15d1ac: 0xae0000ec
    ctx->pc = 0x15d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_15d1b0:
    // 0x15d1b0: 0x102d
    ctx->pc = 0x15d1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d1b4:
    // 0x15d1b4: 0xdfb00000
    ctx->pc = 0x15d1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1b8: 0xdfb10008
    ctx->pc = 0x15d1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d1bc: 0xdfb20010
    ctx->pc = 0x15d1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d1c0: 0xdfbf0018
    ctx->pc = 0x15d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d1c4: 0x3e00008
    ctx->pc = 0x15D1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D180u: goto label_15d180;
            case 0x15D198u: goto label_15d198;
            case 0x15D1A8u: goto label_15d1a8;
            case 0x15D1B0u: goto label_15d1b0;
            case 0x15D1B4u: goto label_15d1b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D1CCu;
    // 0x15d1cc: 0x0
    ctx->pc = 0x15d1ccu;
    // NOP
}
