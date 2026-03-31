#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BB2B0
// Address: 0x1bb2b0 - 0x1bb6e0
void sub_001BB2B0_0x1bb2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bb2b0u;

    // 0x1bb2b0: 0x27bdff40
    ctx->pc = 0x1bb2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bb2b4: 0x3c020023
    ctx->pc = 0x1bb2b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1bb2b8: 0xffbf0010
    ctx->pc = 0x1bb2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb2bc: 0x3c050023
    ctx->pc = 0x1bb2bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1bb2c0: 0x7fb00000
    ctx->pc = 0x1bb2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb2c4: 0x24424e28
    ctx->pc = 0x1bb2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20008));
    // 0x1bb2c8: 0xc4400000
    ctx->pc = 0x1bb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb2cc: 0x27a300b8
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bb2d0: 0x27a40040
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bb2d4: 0x24a54dc8
    ctx->pc = 0x1bb2d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19912));
    // 0x1bb2d8: 0x90420004
    ctx->pc = 0x1bb2d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb2dc: 0xe4600000
    ctx->pc = 0x1bb2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1bb2e0: 0xc042bf0
    ctx->pc = 0x1BB2E0u;
    SET_GPR_U32(ctx, 31, 0x1BB2E8u);
    ctx->pc = 0x1BB2E4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2E8u; }
    }
    if (ctx->pc != 0x1BB2E8u) { return; }
    ctx->pc = 0x1BB2E8u;
    // 0x1bb2e8: 0x3c050023
    ctx->pc = 0x1bb2e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1bb2ec: 0x27a40020
    ctx->pc = 0x1bb2ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bb2f0: 0xc042bf0
    ctx->pc = 0x1BB2F0u;
    SET_GPR_U32(ctx, 31, 0x1BB2F8u);
    ctx->pc = 0x1BB2F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19928));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F8u; }
    }
    if (ctx->pc != 0x1BB2F8u) { return; }
    ctx->pc = 0x1BB2F8u;
    // 0x1bb2f8: 0x27a40040
    ctx->pc = 0x1bb2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bb2fc: 0xc0431fe
    ctx->pc = 0x1BB2FCu;
    SET_GPR_U32(ctx, 31, 0x1BB304u);
    ctx->pc = 0x1BB300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x10C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7F8_0x10c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB304u; }
    }
    if (ctx->pc != 0x1BB304u) { return; }
    ctx->pc = 0x1BB304u;
    // 0x1bb304: 0x40282d
    ctx->pc = 0x1bb304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb308: 0xc042bf0
    ctx->pc = 0x1BB308u;
    SET_GPR_U32(ctx, 31, 0x1BB310u);
    ctx->pc = 0x1BB30Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 168));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB310u; }
    }
    if (ctx->pc != 0x1BB310u) { return; }
    ctx->pc = 0x1BB310u;
    // 0x1bb310: 0x202d
    ctx->pc = 0x1bb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb314: 0xc0431fe
    ctx->pc = 0x1BB314u;
    SET_GPR_U32(ctx, 31, 0x1BB31Cu);
    ctx->pc = 0x1BB318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x10C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7F8_0x10c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB31Cu; }
    }
    if (ctx->pc != 0x1BB31Cu) { return; }
    ctx->pc = 0x1BB31Cu;
    // 0x1bb31c: 0x40282d
    ctx->pc = 0x1bb31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb320: 0xc042bf0
    ctx->pc = 0x1BB320u;
    SET_GPR_U32(ctx, 31, 0x1BB328u);
    ctx->pc = 0x1BB324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB328u; }
    }
    if (ctx->pc != 0x1BB328u) { return; }
    ctx->pc = 0x1BB328u;
    // 0x1bb328: 0x202d
    ctx->pc = 0x1bb328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb32c: 0xc0431fe
    ctx->pc = 0x1BB32Cu;
    SET_GPR_U32(ctx, 31, 0x1BB334u);
    ctx->pc = 0x1BB330u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x10C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7F8_0x10c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB334u; }
    }
    if (ctx->pc != 0x1BB334u) { return; }
    ctx->pc = 0x1BB334u;
    // 0x1bb334: 0x40282d
    ctx->pc = 0x1bb334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb338: 0xc042bf0
    ctx->pc = 0x1BB338u;
    SET_GPR_U32(ctx, 31, 0x1BB340u);
    ctx->pc = 0x1BB33Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB340u; }
    }
    if (ctx->pc != 0x1BB340u) { return; }
    ctx->pc = 0x1BB340u;
    // 0x1bb340: 0x27a40088
    ctx->pc = 0x1bb340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bb344: 0xc042bf0
    ctx->pc = 0x1BB344u;
    SET_GPR_U32(ctx, 31, 0x1BB34Cu);
    ctx->pc = 0x1BB348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 178));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB34Cu; }
    }
    if (ctx->pc != 0x1BB34Cu) { return; }
    ctx->pc = 0x1BB34Cu;
    // 0x1bb34c: 0x10000010
    ctx->pc = 0x1BB34Cu;
    {
        const bool branch_taken_0x1bb34c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB350u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bb34c) {
            ctx->pc = 0x1BB390u;
            goto label_1bb390;
        }
    }
    ctx->pc = 0x1BB354u;
label_1bb354:
    // 0x1bb354: 0x101880
    ctx->pc = 0x1bb354u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb358: 0x24424df0
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19952));
    // 0x1bb35c: 0x431021
    ctx->pc = 0x1bb35cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb360: 0x8c440000
    ctx->pc = 0x1bb360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb364: 0xc042b9e
    ctx->pc = 0x1BB364u;
    SET_GPR_U32(ctx, 31, 0x1BB36Cu);
    ctx->pc = 0x1BB368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 168));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB36Cu; }
    }
    if (ctx->pc != 0x1BB36Cu) { return; }
    ctx->pc = 0x1BB36Cu;
    // 0x1bb36c: 0x14400007
    ctx->pc = 0x1BB36Cu;
    {
        const bool branch_taken_0x1bb36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BB370u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1bb36c) {
            ctx->pc = 0x1BB38Cu;
            goto label_1bb38c;
        }
    }
    ctx->pc = 0x1BB374u;
    // 0x1bb374: 0x26060001
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bb378: 0x27a40080
    ctx->pc = 0x1bb378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bb37c: 0xc042a0c
    ctx->pc = 0x1BB37Cu;
    SET_GPR_U32(ctx, 31, 0x1BB384u);
    ctx->pc = 0x1BB380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 664));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB384u; }
    }
    if (ctx->pc != 0x1BB384u) { return; }
    ctx->pc = 0x1BB384u;
    // 0x1bb384: 0x10000006
    ctx->pc = 0x1BB384u;
    {
        const bool branch_taken_0x1bb384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB388u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x1bb384) {
            ctx->pc = 0x1BB3A0u;
            goto label_1bb3a0;
        }
    }
    ctx->pc = 0x1BB38Cu;
label_1bb38c:
    // 0x1bb38c: 0x26100001
    ctx->pc = 0x1bb38cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1bb390:
    // 0x1bb390: 0x2a02000c
    ctx->pc = 0x1bb390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x1bb394: 0x1440ffef
    ctx->pc = 0x1BB394u;
    {
        const bool branch_taken_0x1bb394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BB398u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1bb394) {
            ctx->pc = 0x1BB354u;
            goto label_1bb354;
        }
    }
    ctx->pc = 0x1BB39Cu;
    // 0x1bb39c: 0x27a400a0
    ctx->pc = 0x1bb39cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
label_1bb3a0:
    // 0x1bb3a0: 0xc042c56
    ctx->pc = 0x1BB3A0u;
    SET_GPR_U32(ctx, 31, 0x1BB3A8u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3A8u; }
    }
    if (ctx->pc != 0x1BB3A8u) { return; }
    ctx->pc = 0x1BB3A8u;
    // 0x1bb3a8: 0x24030001
    ctx->pc = 0x1bb3a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb3ac: 0x14430008
    ctx->pc = 0x1BB3ACu;
    {
        const bool branch_taken_0x1bb3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1BB3B0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1bb3ac) {
            ctx->pc = 0x1BB3D0u;
            goto label_1bb3d0;
        }
    }
    ctx->pc = 0x1BB3B4u;
    // 0x1bb3b4: 0x3c050025
    ctx->pc = 0x1bb3b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bb3b8: 0x27a40078
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1bb3bc: 0x24a502a0
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 672));
    // 0x1bb3c0: 0xc042a0c
    ctx->pc = 0x1BB3C0u;
    SET_GPR_U32(ctx, 31, 0x1BB3C8u);
    ctx->pc = 0x1BB3C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C8u; }
    }
    if (ctx->pc != 0x1BB3C8u) { return; }
    ctx->pc = 0x1BB3C8u;
    // 0x1bb3c8: 0x10000006
    ctx->pc = 0x1BB3C8u;
    {
        const bool branch_taken_0x1bb3c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB3CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x1bb3c8) {
            ctx->pc = 0x1BB3E4u;
            goto label_1bb3e4;
        }
    }
    ctx->pc = 0x1BB3D0u;
label_1bb3d0:
    // 0x1bb3d0: 0x27a40078
    ctx->pc = 0x1bb3d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1bb3d4: 0x24a502a8
    ctx->pc = 0x1bb3d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 680));
    // 0x1bb3d8: 0xc042a0c
    ctx->pc = 0x1BB3D8u;
    SET_GPR_U32(ctx, 31, 0x1BB3E0u);
    ctx->pc = 0x1BB3DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3E0u; }
    }
    if (ctx->pc != 0x1BB3E0u) { return; }
    ctx->pc = 0x1BB3E0u;
    // 0x1bb3e0: 0x27a40020
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1bb3e4:
    // 0x1bb3e4: 0xc0431fe
    ctx->pc = 0x1BB3E4u;
    SET_GPR_U32(ctx, 31, 0x1BB3ECu);
    ctx->pc = 0x1BB3E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x10C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7F8_0x10c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3ECu; }
    }
    if (ctx->pc != 0x1BB3ECu) { return; }
    ctx->pc = 0x1BB3ECu;
    // 0x1bb3ec: 0x40282d
    ctx->pc = 0x1bb3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3f0: 0xc042bf0
    ctx->pc = 0x1BB3F0u;
    SET_GPR_U32(ctx, 31, 0x1BB3F8u);
    ctx->pc = 0x1BB3F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3F8u; }
    }
    if (ctx->pc != 0x1BB3F8u) { return; }
    ctx->pc = 0x1BB3F8u;
    // 0x1bb3f8: 0x202d
    ctx->pc = 0x1bb3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3fc: 0xc0431fe
    ctx->pc = 0x1BB3FCu;
    SET_GPR_U32(ctx, 31, 0x1BB404u);
    ctx->pc = 0x1BB400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x10C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C7F8_0x10c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB404u; }
    }
    if (ctx->pc != 0x1BB404u) { return; }
    ctx->pc = 0x1BB404u;
    // 0x1bb404: 0x40282d
    ctx->pc = 0x1bb404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb408: 0xc042bf0
    ctx->pc = 0x1BB408u;
    SET_GPR_U32(ctx, 31, 0x1BB410u);
    ctx->pc = 0x1BB40Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB410u; }
    }
    if (ctx->pc != 0x1BB410u) { return; }
    ctx->pc = 0x1BB410u;
    // 0x1bb410: 0x3c050025
    ctx->pc = 0x1bb410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bb414: 0x27a40070
    ctx->pc = 0x1bb414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bb418: 0x24a502a8
    ctx->pc = 0x1bb418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 680));
    // 0x1bb41c: 0xc042a0c
    ctx->pc = 0x1BB41Cu;
    SET_GPR_U32(ctx, 31, 0x1BB424u);
    ctx->pc = 0x1BB420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB424u; }
    }
    if (ctx->pc != 0x1BB424u) { return; }
    ctx->pc = 0x1BB424u;
    // 0x1bb424: 0x3c050025
    ctx->pc = 0x1bb424u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bb428: 0x27a40068
    ctx->pc = 0x1bb428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1bb42c: 0x24a502a8
    ctx->pc = 0x1bb42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 680));
    // 0x1bb430: 0xc042a0c
    ctx->pc = 0x1BB430u;
    SET_GPR_U32(ctx, 31, 0x1BB438u);
    ctx->pc = 0x1BB434u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB438u; }
    }
    if (ctx->pc != 0x1BB438u) { return; }
    ctx->pc = 0x1BB438u;
    // 0x1bb438: 0x3c040031
    ctx->pc = 0x1bb438u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bb43c: 0x3c050025
    ctx->pc = 0x1bb43cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1bb440: 0x248465a8
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26024));
    // 0x1bb444: 0x24a502b0
    ctx->pc = 0x1bb444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 688));
    // 0x1bb448: 0x27a60088
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bb44c: 0x27a70080
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bb450: 0x27a80078
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1bb454: 0x27a90070
    ctx->pc = 0x1bb454u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bb458: 0xc042a0c
    ctx->pc = 0x1BB458u;
    SET_GPR_U32(ctx, 31, 0x1BB460u);
    ctx->pc = 0x1BB45Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 104));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB460u; }
    }
    if (ctx->pc != 0x1BB460u) { return; }
    ctx->pc = 0x1BB460u;
    // 0x1bb460: 0xdfbf0010
    ctx->pc = 0x1bb460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb464: 0x7bb00000
    ctx->pc = 0x1bb464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb468: 0x3e00008
    ctx->pc = 0x1BB468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB46Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB354u: goto label_1bb354;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB390u: goto label_1bb390;
            case 0x1BB3A0u: goto label_1bb3a0;
            case 0x1BB3D0u: goto label_1bb3d0;
            case 0x1BB3E4u: goto label_1bb3e4;
            case 0x1BB4DCu: goto label_1bb4dc;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB54Cu: goto label_1bb54c;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5E8u: goto label_1bb5e8;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB6A4u: goto label_1bb6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB470u;
    // 0x1bb470: 0x3e00008
    ctx->pc = 0x1BB470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB354u: goto label_1bb354;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB390u: goto label_1bb390;
            case 0x1BB3A0u: goto label_1bb3a0;
            case 0x1BB3D0u: goto label_1bb3d0;
            case 0x1BB3E4u: goto label_1bb3e4;
            case 0x1BB4DCu: goto label_1bb4dc;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB54Cu: goto label_1bb54c;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5E8u: goto label_1bb5e8;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB6A4u: goto label_1bb6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB478u;
    // 0x1bb478: 0x0
    ctx->pc = 0x1bb478u;
    // NOP
    // 0x1bb47c: 0x0
    ctx->pc = 0x1bb47cu;
    // NOP
    // 0x1bb480: 0x27bdfff0
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb484: 0xffbf0000
    ctx->pc = 0x1bb484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb488: 0x90830008
    ctx->pc = 0x1bb488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb48c: 0x14600013
    ctx->pc = 0x1BB48Cu;
    {
        const bool branch_taken_0x1bb48c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BB490u;
        SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
        if (branch_taken_0x1bb48c) {
            ctx->pc = 0x1BB4DCu;
            goto label_1bb4dc;
        }
    }
    ctx->pc = 0x1BB494u;
    // 0x1bb494: 0x24020001
    ctx->pc = 0x1bb494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb498: 0x282d
    ctx->pc = 0x1bb498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb49c: 0xa0820008
    ctx->pc = 0x1bb49cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb4a0: 0x24060020
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bb4a4: 0x3c040031
    ctx->pc = 0x1bb4a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bb4a8: 0xc041f1a
    ctx->pc = 0x1BB4A8u;
    SET_GPR_U32(ctx, 31, 0x1BB4B0u);
    ctx->pc = 0x1BB4ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26192));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4B0u; }
    }
    if (ctx->pc != 0x1BB4B0u) { return; }
    ctx->pc = 0x1BB4B0u;
    // 0x1bb4b0: 0x3c010031
    ctx->pc = 0x1bb4b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb4b4: 0x24030280
    ctx->pc = 0x1bb4b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1bb4b8: 0xa4206664
    ctx->pc = 0x1bb4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26212), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bb4bc: 0x3c010031
    ctx->pc = 0x1bb4bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb4c0: 0xa4236668
    ctx->pc = 0x1bb4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26216), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bb4c4: 0x240301e0
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1bb4c8: 0x3c010031
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb4cc: 0xa423666a
    ctx->pc = 0x1bb4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26218), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bb4d0: 0x3c010031
    ctx->pc = 0x1bb4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb4d4: 0x10000034
    ctx->pc = 0x1BB4D4u;
    {
        const bool branch_taken_0x1bb4d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB4D8u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 26214), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1bb4d4) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB4DCu;
label_1bb4dc:
    // 0x1bb4dc: 0x24030002
    ctx->pc = 0x1bb4dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb4e0: 0x90246650
    ctx->pc = 0x1bb4e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26192)));
    // 0x1bb4e4: 0x10830019
    ctx->pc = 0x1BB4E4u;
    {
        const bool branch_taken_0x1bb4e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BB4E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bb4e4) {
            ctx->pc = 0x1BB54Cu;
            goto label_1bb54c;
        }
    }
    ctx->pc = 0x1BB4ECu;
    // 0x1bb4ec: 0x10830005
    ctx->pc = 0x1BB4ECu;
    {
        const bool branch_taken_0x1bb4ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BB4F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
        if (branch_taken_0x1bb4ec) {
            ctx->pc = 0x1BB504u;
            goto label_1bb504;
        }
    }
    ctx->pc = 0x1BB4F4u;
    // 0x1bb4f4: 0x1080002c
    ctx->pc = 0x1BB4F4u;
    {
        const bool branch_taken_0x1bb4f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bb4f4) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB4FCu;
    // 0x1bb4fc: 0x10000025
    ctx->pc = 0x1BB4FCu;
    {
        const bool branch_taken_0x1bb4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB500u;
        SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
        if (branch_taken_0x1bb4fc) {
            ctx->pc = 0x1BB594u;
            goto label_1bb594;
        }
    }
    ctx->pc = 0x1BB504u;
label_1bb504:
    // 0x1bb504: 0x3c033f80
    ctx->pc = 0x1bb504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1bb508: 0xc422665c
    ctx->pc = 0x1bb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 26204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb50c: 0x44830000
    ctx->pc = 0x1bb50cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1bb510: 0x3c010031
    ctx->pc = 0x1bb510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb514: 0xc4216660
    ctx->pc = 0x1bb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 26208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb518: 0x46011040
    ctx->pc = 0x1bb518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1bb51c: 0x3c010031
    ctx->pc = 0x1bb51cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb520: 0x46000836
    ctx->pc = 0x1bb520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb524: 0x45010020
    ctx->pc = 0x1BB524u;
    {
        const bool branch_taken_0x1bb524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB528u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 26204), bits); }
        if (branch_taken_0x1bb524) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB52Cu;
    // 0x1bb52c: 0x3c010031
    ctx->pc = 0x1bb52cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb530: 0x24030063
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1bb534: 0xe420665c
    ctx->pc = 0x1bb534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 26204), bits); }
    // 0x1bb538: 0x3c010031
    ctx->pc = 0x1bb538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb53c: 0xa0236650
    ctx->pc = 0x1bb53cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26192), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb540: 0x3c010031
    ctx->pc = 0x1bb540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb544: 0x10000018
    ctx->pc = 0x1BB544u;
    {
        const bool branch_taken_0x1bb544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB548u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 26196), GPR_U32(ctx, 3));
        if (branch_taken_0x1bb544) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB54Cu;
label_1bb54c:
    // 0x1bb54c: 0x3c010031
    ctx->pc = 0x1bb54cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb550: 0xc422665c
    ctx->pc = 0x1bb550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 26204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb554: 0x44800000
    ctx->pc = 0x1bb554u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1bb558: 0x3c010031
    ctx->pc = 0x1bb558u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb55c: 0xc4216660
    ctx->pc = 0x1bb55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 26208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb560: 0x46011040
    ctx->pc = 0x1bb560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1bb564: 0x3c010031
    ctx->pc = 0x1bb564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb568: 0x46000834
    ctx->pc = 0x1bb568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb56c: 0x4500000e
    ctx->pc = 0x1BB56Cu;
    {
        const bool branch_taken_0x1bb56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB570u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 26204), bits); }
        if (branch_taken_0x1bb56c) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB574u;
    // 0x1bb574: 0x3c010031
    ctx->pc = 0x1bb574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb578: 0x24030063
    ctx->pc = 0x1bb578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1bb57c: 0xe420665c
    ctx->pc = 0x1bb57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 26204), bits); }
    // 0x1bb580: 0x3c010031
    ctx->pc = 0x1bb580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb584: 0xac236654
    ctx->pc = 0x1bb584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26196), GPR_U32(ctx, 3));
    // 0x1bb588: 0x3c010031
    ctx->pc = 0x1bb588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb58c: 0x10000006
    ctx->pc = 0x1BB58Cu;
    {
        const bool branch_taken_0x1bb58c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BB590u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 26192), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1bb58c) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB594u;
label_1bb594:
    // 0x1bb594: 0x8c236654
    ctx->pc = 0x1bb594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26196)));
    // 0x1bb598: 0x14600003
    ctx->pc = 0x1BB598u;
    {
        const bool branch_taken_0x1bb598 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bb598) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB5A0u;
    // 0x1bb5a0: 0x3c010031
    ctx->pc = 0x1bb5a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb5a4: 0xa0206650
    ctx->pc = 0x1bb5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26192), (uint8_t)GPR_U32(ctx, 0));
label_1bb5a8:
    // 0x1bb5a8: 0xdfbf0000
    ctx->pc = 0x1bb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb5ac: 0x3e00008
    ctx->pc = 0x1BB5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB354u: goto label_1bb354;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB390u: goto label_1bb390;
            case 0x1BB3A0u: goto label_1bb3a0;
            case 0x1BB3D0u: goto label_1bb3d0;
            case 0x1BB3E4u: goto label_1bb3e4;
            case 0x1BB4DCu: goto label_1bb4dc;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB54Cu: goto label_1bb54c;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5E8u: goto label_1bb5e8;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB6A4u: goto label_1bb6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB5B4u;
    // 0x1bb5b4: 0x0
    ctx->pc = 0x1bb5b4u;
    // NOP
    // 0x1bb5b8: 0x0
    ctx->pc = 0x1bb5b8u;
    // NOP
    // 0x1bb5bc: 0x0
    ctx->pc = 0x1bb5bcu;
    // NOP
    // 0x1bb5c0: 0x3c010031
    ctx->pc = 0x1bb5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb5c4: 0x3c060031
    ctx->pc = 0x1bb5c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x1bb5c8: 0x90236650
    ctx->pc = 0x1bb5c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26192)));
    // 0x1bb5cc: 0x24020002
    ctx->pc = 0x1bb5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb5d0: 0x10620005
    ctx->pc = 0x1BB5D0u;
    {
        const bool branch_taken_0x1bb5d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BB5D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26192));
        if (branch_taken_0x1bb5d0) {
            ctx->pc = 0x1BB5E8u;
            goto label_1bb5e8;
        }
    }
    ctx->pc = 0x1BB5D8u;
    // 0x1bb5d8: 0x24020001
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb5dc: 0x10620002
    ctx->pc = 0x1BB5DCu;
    {
        const bool branch_taken_0x1bb5dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1bb5dc) {
            ctx->pc = 0x1BB5E8u;
            goto label_1bb5e8;
        }
    }
    ctx->pc = 0x1BB5E4u;
    // 0x1bb5e4: 0xacc0000c
    ctx->pc = 0x1bb5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1bb5e8:
    // 0x1bb5e8: 0x3c010032
    ctx->pc = 0x1bb5e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bb5ec: 0x41c3c
    ctx->pc = 0x1bb5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1bb5f0: 0x902243cc
    ctx->pc = 0x1bb5f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17356)));
    // 0x1bb5f4: 0x31c3f
    ctx->pc = 0x1bb5f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bb5f8: 0x431007
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bb5fc: 0x2243c
    ctx->pc = 0x1bb5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bb600: 0x4243f
    ctx->pc = 0x1bb600u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1bb604: 0x14800002
    ctx->pc = 0x1BB604u;
    {
        const bool branch_taken_0x1bb604 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bb604) {
            ctx->pc = 0x1BB610u;
            goto label_1bb610;
        }
    }
    ctx->pc = 0x1BB60Cu;
    // 0x1bb60c: 0x24040001
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1bb610:
    // 0x1bb610: 0x44840000
    ctx->pc = 0x1bb610u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1bb614: 0x3c033f80
    ctx->pc = 0x1bb614u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1bb618: 0x44830800
    ctx->pc = 0x1bb618u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1bb61c: 0xacc50008
    ctx->pc = 0x1bb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bb620: 0x46800020
    ctx->pc = 0x1bb620u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1bb624: 0x24020001
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb628: 0x3c010031
    ctx->pc = 0x1bb628u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb62c: 0x46000803
    ctx->pc = 0x1bb62cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bb630: 0xe4c00010
    ctx->pc = 0x1bb630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1bb634: 0xa0226650
    ctx->pc = 0x1bb634u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26192), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb638: 0x3c010031
    ctx->pc = 0x1bb638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb63c: 0x3e00008
    ctx->pc = 0x1BB63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB640u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 26196), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB354u: goto label_1bb354;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB390u: goto label_1bb390;
            case 0x1BB3A0u: goto label_1bb3a0;
            case 0x1BB3D0u: goto label_1bb3d0;
            case 0x1BB3E4u: goto label_1bb3e4;
            case 0x1BB4DCu: goto label_1bb4dc;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB54Cu: goto label_1bb54c;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5E8u: goto label_1bb5e8;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB6A4u: goto label_1bb6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB644u;
    // 0x1bb644: 0x0
    ctx->pc = 0x1bb644u;
    // NOP
    // 0x1bb648: 0x0
    ctx->pc = 0x1bb648u;
    // NOP
    // 0x1bb64c: 0x0
    ctx->pc = 0x1bb64cu;
    // NOP
    // 0x1bb650: 0x3c010031
    ctx->pc = 0x1bb650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb654: 0x3c060031
    ctx->pc = 0x1bb654u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x1bb658: 0x90236650
    ctx->pc = 0x1bb658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26192)));
    // 0x1bb65c: 0x24020002
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb660: 0x10620005
    ctx->pc = 0x1BB660u;
    {
        const bool branch_taken_0x1bb660 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BB664u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26192));
        if (branch_taken_0x1bb660) {
            ctx->pc = 0x1BB678u;
            goto label_1bb678;
        }
    }
    ctx->pc = 0x1BB668u;
    // 0x1bb668: 0x24020001
    ctx->pc = 0x1bb668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb66c: 0x10620002
    ctx->pc = 0x1BB66Cu;
    {
        const bool branch_taken_0x1bb66c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BB670u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1bb66c) {
            ctx->pc = 0x1BB678u;
            goto label_1bb678;
        }
    }
    ctx->pc = 0x1BB674u;
    // 0x1bb674: 0xacc2000c
    ctx->pc = 0x1bb674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1bb678:
    // 0x1bb678: 0xacc50008
    ctx->pc = 0x1bb678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bb67c: 0x3c010032
    ctx->pc = 0x1bb67cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bb680: 0x902243cc
    ctx->pc = 0x1bb680u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17356)));
    // 0x1bb684: 0x41c3c
    ctx->pc = 0x1bb684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1bb688: 0x31c3f
    ctx->pc = 0x1bb688u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bb68c: 0x431007
    ctx->pc = 0x1bb68cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bb690: 0x2243c
    ctx->pc = 0x1bb690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bb694: 0x4243f
    ctx->pc = 0x1bb694u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1bb698: 0x14800002
    ctx->pc = 0x1BB698u;
    {
        const bool branch_taken_0x1bb698 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bb698) {
            ctx->pc = 0x1BB6A4u;
            goto label_1bb6a4;
        }
    }
    ctx->pc = 0x1BB6A0u;
    // 0x1bb6a0: 0x24040001
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1bb6a4:
    // 0x1bb6a4: 0x44840000
    ctx->pc = 0x1bb6a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1bb6a8: 0x3c02bf80
    ctx->pc = 0x1bb6a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x1bb6ac: 0x44820800
    ctx->pc = 0x1bb6acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1bb6b0: 0x24030002
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb6b4: 0x46800020
    ctx->pc = 0x1bb6b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1bb6b8: 0x3c010031
    ctx->pc = 0x1bb6b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb6bc: 0x24020001
    ctx->pc = 0x1bb6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb6c0: 0x46000803
    ctx->pc = 0x1bb6c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bb6c4: 0xe4c00010
    ctx->pc = 0x1bb6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1bb6c8: 0xa0236650
    ctx->pc = 0x1bb6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26192), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb6cc: 0x3c010031
    ctx->pc = 0x1bb6ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bb6d0: 0x3e00008
    ctx->pc = 0x1BB6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6D4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 26196), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB354u: goto label_1bb354;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB390u: goto label_1bb390;
            case 0x1BB3A0u: goto label_1bb3a0;
            case 0x1BB3D0u: goto label_1bb3d0;
            case 0x1BB3E4u: goto label_1bb3e4;
            case 0x1BB4DCu: goto label_1bb4dc;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB54Cu: goto label_1bb54c;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5E8u: goto label_1bb5e8;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB6A4u: goto label_1bb6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB6D8u;
    // 0x1bb6d8: 0x0
    ctx->pc = 0x1bb6d8u;
    // NOP
    // 0x1bb6dc: 0x0
    ctx->pc = 0x1bb6dcu;
    // NOP
}
