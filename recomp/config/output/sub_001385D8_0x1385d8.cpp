#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001385D8
// Address: 0x1385d8 - 0x138650
void sub_001385D8_0x1385d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1385d8u;

    // 0x1385d8: 0x27bdffe0
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1385dc: 0xffb00000
    ctx->pc = 0x1385dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1385e0: 0x80802d
    ctx->pc = 0x1385e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385e4: 0xffb10008
    ctx->pc = 0x1385e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1385e8: 0xa0882d
    ctx->pc = 0x1385e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385ec: 0xffb20010
    ctx->pc = 0x1385ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1385f0: 0xffbf0018
    ctx->pc = 0x1385f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1385f4: 0xc04e0bc
    ctx->pc = 0x1385F4u;
    SET_GPR_U32(ctx, 31, 0x1385FCu);
    ctx->pc = 0x1385F8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001382F0_0x1382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385FCu; }
    }
    if (ctx->pc != 0x1385FCu) { return; }
    ctx->pc = 0x1385FCu;
    // 0x1385fc: 0x200202d
    ctx->pc = 0x1385fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138600: 0x220282d
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138604: 0xc04642c
    ctx->pc = 0x138604u;
    SET_GPR_U32(ctx, 31, 0x13860Cu);
    ctx->pc = 0x138608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13860Cu; }
    }
    if (ctx->pc != 0x13860Cu) { return; }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x3c040024
    ctx->pc = 0x13860cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138610: 0x40802d
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138614: 0x2484c7a0
    ctx->pc = 0x138614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952864));
    // 0x138618: 0x6010003
    ctx->pc = 0x138618u;
    {
        const bool branch_taken_0x138618 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13861Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x138618) {
            ctx->pc = 0x138628u;
            goto label_138628;
        }
    }
    ctx->pc = 0x138620u;
    // 0x138620: 0xc045a12
    ctx->pc = 0x138620u;
    SET_GPR_U32(ctx, 31, 0x138628u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138628u; }
    }
    if (ctx->pc != 0x138628u) { return; }
    ctx->pc = 0x138628u;
label_138628:
    // 0x138628: 0xc04e0ca
    ctx->pc = 0x138628u;
    SET_GPR_U32(ctx, 31, 0x138630u);
    ctx->pc = 0x138328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138328_0x138328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138630u; }
    }
    if (ctx->pc != 0x138630u) { return; }
    ctx->pc = 0x138630u;
    // 0x138630: 0x200102d
    ctx->pc = 0x138630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138634: 0xdfb10008
    ctx->pc = 0x138634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138638: 0xdfb00000
    ctx->pc = 0x138638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13863c: 0xdfb20010
    ctx->pc = 0x13863cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138640: 0xdfbf0018
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138644: 0x3e00008
    ctx->pc = 0x138644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138628u: goto label_138628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13864Cu;
    // 0x13864c: 0x0
    ctx->pc = 0x13864cu;
    // NOP
}
