#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E678
// Address: 0x16e678 - 0x16e768
void sub_0016E678_0x16e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e678u;

    // 0x16e678: 0x27bdffd0
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e67c: 0xffb00000
    ctx->pc = 0x16e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e680: 0x80802d
    ctx->pc = 0x16e680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e684: 0xffb20010
    ctx->pc = 0x16e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16e688: 0x24120001
    ctx->pc = 0x16e688u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e68c: 0xffb30018
    ctx->pc = 0x16e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16e690: 0xffb40020
    ctx->pc = 0x16e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16e694: 0xa0a02d
    ctx->pc = 0x16e694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e698: 0xffb10008
    ctx->pc = 0x16e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16e69c: 0x2405002f
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x16e6a0: 0xffbf0028
    ctx->pc = 0x16e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16e6a4: 0xc05d58a
    ctx->pc = 0x16E6A4u;
    SET_GPR_U32(ctx, 31, 0x16E6ACu);
    ctx->pc = 0x16E6A8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6ACu; }
    }
    if (ctx->pc != 0x16E6ACu) { return; }
    ctx->pc = 0x16E6ACu;
    // 0x16e6ac: 0x10520026
    ctx->pc = 0x16E6ACu;
    {
        const bool branch_taken_0x16e6ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x16E6B0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 140));
        if (branch_taken_0x16e6ac) {
            ctx->pc = 0x16E748u;
            goto label_16e748;
        }
    }
    ctx->pc = 0x16E6B4u;
    // 0x16e6b4: 0x200202d
    ctx->pc = 0x16e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6b8: 0xc05d58a
    ctx->pc = 0x16E6B8u;
    SET_GPR_U32(ctx, 31, 0x16E6C0u);
    ctx->pc = 0x16E6BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6C0u; }
    }
    if (ctx->pc != 0x16E6C0u) { return; }
    ctx->pc = 0x16E6C0u;
    // 0x16e6c0: 0x54520003
    ctx->pc = 0x16E6C0u;
    {
        const bool branch_taken_0x16e6c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x16e6c0) {
            ctx->pc = 0x16E6C4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x16E6D0u;
            goto label_16e6d0;
        }
    }
    ctx->pc = 0x16E6C8u;
    // 0x16e6c8: 0x1000001f
    ctx->pc = 0x16E6C8u;
    {
        const bool branch_taken_0x16e6c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E6CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e6c8) {
            ctx->pc = 0x16E748u;
            goto label_16e748;
        }
    }
    ctx->pc = 0x16E6D0u;
label_16e6d0:
    // 0x16e6d0: 0x1460001d
    ctx->pc = 0x16E6D0u;
    {
        const bool branch_taken_0x16e6d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E6D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e6d0) {
            ctx->pc = 0x16E748u;
            goto label_16e748;
        }
    }
    ctx->pc = 0x16E6D8u;
    // 0x16e6d8: 0x200202d
    ctx->pc = 0x16e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6dc: 0xc05ba24
    ctx->pc = 0x16E6DCu;
    SET_GPR_U32(ctx, 31, 0x16E6E4u);
    ctx->pc = 0x16E6E0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x16E890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E890_0x16e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6E4u; }
    }
    if (ctx->pc != 0x16E6E4u) { return; }
    ctx->pc = 0x16E6E4u;
    // 0x16e6e4: 0x14400013
    ctx->pc = 0x16E6E4u;
    {
        const bool branch_taken_0x16e6e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E6E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16e6e4) {
            ctx->pc = 0x16E734u;
            goto label_16e734;
        }
    }
    ctx->pc = 0x16E6ECu;
    // 0x16e6ec: 0x200202d
    ctx->pc = 0x16e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6f0: 0xc05ba38
    ctx->pc = 0x16E6F0u;
    SET_GPR_U32(ctx, 31, 0x16E6F8u);
    ctx->pc = 0x16E6F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E8E0_0x16e8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6F8u; }
    }
    if (ctx->pc != 0x16E6F8u) { return; }
    ctx->pc = 0x16E6F8u;
    // 0x16e6f8: 0x1440000f
    ctx->pc = 0x16E6F8u;
    {
        const bool branch_taken_0x16e6f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E6FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e6f8) {
            ctx->pc = 0x16E738u;
            goto label_16e738;
        }
    }
    ctx->pc = 0x16E700u;
    // 0x16e700: 0x280302d
    ctx->pc = 0x16e700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e704: 0xc05ba4c
    ctx->pc = 0x16E704u;
    SET_GPR_U32(ctx, 31, 0x16E70Cu);
    ctx->pc = 0x16E708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E930_0x16e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E70Cu; }
    }
    if (ctx->pc != 0x16E70Cu) { return; }
    ctx->pc = 0x16E70Cu;
    // 0x16e70c: 0x1440000a
    ctx->pc = 0x16E70Cu;
    {
        const bool branch_taken_0x16e70c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E710u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e70c) {
            ctx->pc = 0x16E738u;
            goto label_16e738;
        }
    }
    ctx->pc = 0x16E714u;
    // 0x16e714: 0xc05b9da
    ctx->pc = 0x16E714u;
    SET_GPR_U32(ctx, 31, 0x16E71Cu);
    ctx->pc = 0x16E718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E768_0x16e768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E71Cu; }
    }
    if (ctx->pc != 0x16E71Cu) { return; }
    ctx->pc = 0x16E71Cu;
    // 0x16e71c: 0x54400006
    ctx->pc = 0x16E71Cu;
    {
        const bool branch_taken_0x16e71c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e71c) {
            ctx->pc = 0x16E720u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16E738u;
            goto label_16e738;
        }
    }
    ctx->pc = 0x16E724u;
    // 0x16e724: 0x220282d
    ctx->pc = 0x16e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e728: 0xc05ba6e
    ctx->pc = 0x16E728u;
    SET_GPR_U32(ctx, 31, 0x16E730u);
    ctx->pc = 0x16E72Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9B8_0x16e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E730u; }
    }
    if (ctx->pc != 0x16E730u) { return; }
    ctx->pc = 0x16E730u;
    // 0x16e730: 0x2902b
    ctx->pc = 0x16e730u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_16e734:
    // 0x16e734: 0x200202d
    ctx->pc = 0x16e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e738:
    // 0x16e738: 0x260282d
    ctx->pc = 0x16e738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e73c: 0xc05b9f2
    ctx->pc = 0x16E73Cu;
    SET_GPR_U32(ctx, 31, 0x16E744u);
    ctx->pc = 0x16E740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E7C8_0x16e7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E744u; }
    }
    if (ctx->pc != 0x16E744u) { return; }
    ctx->pc = 0x16E744u;
    // 0x16e744: 0x240102d
    ctx->pc = 0x16e744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e748:
    // 0x16e748: 0xdfb00000
    ctx->pc = 0x16e748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e74c: 0xdfb10008
    ctx->pc = 0x16e74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e750: 0xdfb20010
    ctx->pc = 0x16e750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e754: 0xdfb30018
    ctx->pc = 0x16e754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e758: 0xdfb40020
    ctx->pc = 0x16e758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e75c: 0xdfbf0028
    ctx->pc = 0x16e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e760: 0x3e00008
    ctx->pc = 0x16E760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E6D0u: goto label_16e6d0;
            case 0x16E734u: goto label_16e734;
            case 0x16E738u: goto label_16e738;
            case 0x16E748u: goto label_16e748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E768u;
}
