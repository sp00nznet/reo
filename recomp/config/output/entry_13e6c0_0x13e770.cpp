#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13e6c0
// Address: 0x13e6c0 - 0x13e770
void entry_13e6c0_0x13e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e6c0u;

    // 0x13e6c0: 0x27bdffe0
    ctx->pc = 0x13e6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e6c4: 0x3c030022
    ctx->pc = 0x13e6c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13e6c8: 0xffb00000
    ctx->pc = 0x13e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e6cc: 0x2463146c
    ctx->pc = 0x13e6ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5228));
    // 0x13e6d0: 0xffb10008
    ctx->pc = 0x13e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e6d4: 0xffbf0010
    ctx->pc = 0x13e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e6d8: 0x8c620000
    ctx->pc = 0x13e6d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e6dc: 0x2442ffff
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e6e0: 0x1440001d
    ctx->pc = 0x13E6E0u;
    {
        const bool branch_taken_0x13e6e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x13e6e0) {
            ctx->pc = 0x13E758u;
            goto label_13e758;
        }
    }
    ctx->pc = 0x13E6E8u;
    // 0x13e6e8: 0x3c100022
    ctx->pc = 0x13e6e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13e6ec: 0x3c110022
    ctx->pc = 0x13e6ecu;
    SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
    // 0x13e6f0: 0x26101454
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5204));
    // 0x13e6f4: 0x26313e80
    ctx->pc = 0x13e6f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16000));
    // 0x13e6f8: 0xc046e86
    ctx->pc = 0x13E6F8u;
    SET_GPR_U32(ctx, 31, 0x13E700u);
    ctx->pc = 0x13E6FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x11BA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA18_0x11ba18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E700u; }
    }
    if (ctx->pc != 0x13E700u) { return; }
    ctx->pc = 0x13E700u;
    // 0x13e700: 0xae000000
    ctx->pc = 0x13e700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13e704: 0x3c100022
    ctx->pc = 0x13e704u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13e708: 0x8e240000
    ctx->pc = 0x13e708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e70c: 0xc04e444
    ctx->pc = 0x13E70Cu;
    SET_GPR_U32(ctx, 31, 0x13E714u);
    ctx->pc = 0x13E710u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5236));
    ctx->pc = 0x139110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139110_0x139110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E714u; }
    }
    if (ctx->pc != 0x13E714u) { return; }
    ctx->pc = 0x13E714u;
    // 0x13e714: 0x0
    ctx->pc = 0x13e714u;
    // NOP
    // 0x13e718: 0xc046e86
    ctx->pc = 0x13E718u;
    SET_GPR_U32(ctx, 31, 0x13E720u);
    ctx->pc = 0x13E71Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x11BA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA18_0x11ba18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E720u; }
    }
    if (ctx->pc != 0x13E720u) { return; }
    ctx->pc = 0x13E720u;
    // 0x13e720: 0xc04f790
    ctx->pc = 0x13E720u;
    SET_GPR_U32(ctx, 31, 0x13E728u);
    ctx->pc = 0x13DE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE40_0x13de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E728u; }
    }
    if (ctx->pc != 0x13E728u) { return; }
    ctx->pc = 0x13E728u;
    // 0x13e728: 0xc04f970
    ctx->pc = 0x13E728u;
    SET_GPR_U32(ctx, 31, 0x13E730u);
    ctx->pc = 0x13E5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E5C0_0x13e5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E730u; }
    }
    if (ctx->pc != 0x13E730u) { return; }
    ctx->pc = 0x13E730u;
    // 0x13e730: 0xc04e4fa
    ctx->pc = 0x13E730u;
    SET_GPR_U32(ctx, 31, 0x13E738u);
    ctx->pc = 0x1393E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001393E8_0x1393e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E738u; }
    }
    if (ctx->pc != 0x13E738u) { return; }
    ctx->pc = 0x13E738u;
    // 0x13e738: 0xc050506
    ctx->pc = 0x13E738u;
    SET_GPR_U32(ctx, 31, 0x13E740u);
    ctx->pc = 0x141418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141418_0x141418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E740u; }
    }
    if (ctx->pc != 0x13E740u) { return; }
    ctx->pc = 0x13E740u;
    // 0x13e740: 0xdfb00000
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e744: 0xdfb10008
    ctx->pc = 0x13e744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e748: 0xdfbf0010
    ctx->pc = 0x13e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e74c: 0x80503b6
    ctx->pc = 0x13E74Cu;
    ctx->pc = 0x13E750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x140ED8u;
    entry_140ed8_0x141268(rdram, ctx, runtime); return;
    ctx->pc = 0x13E754u;
    // 0x13e754: 0x0
    ctx->pc = 0x13e754u;
    // NOP
label_13e758:
    // 0x13e758: 0xdfb00000
    ctx->pc = 0x13e758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e75c: 0xdfb10008
    ctx->pc = 0x13e75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e760: 0xdfbf0010
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e764: 0x3e00008
    ctx->pc = 0x13E764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E758u: goto label_13e758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E76Cu;
    // 0x13e76c: 0x0
    ctx->pc = 0x13e76cu;
    // NOP
}
