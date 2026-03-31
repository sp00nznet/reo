#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF320
// Address: 0x1af320 - 0x1af490
void sub_001AF320_0x1af320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af320u;

    // 0x1af320: 0x27bdfff0
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af324: 0xffbf0000
    ctx->pc = 0x1af324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af328: 0xc06b3dc
    ctx->pc = 0x1AF328u;
    SET_GPR_U32(ctx, 31, 0x1AF330u);
    ctx->pc = 0x1ACF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF70_0x1acf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF330u; }
    }
    if (ctx->pc != 0x1AF330u) { return; }
    ctx->pc = 0x1AF330u;
    // 0x1af330: 0xc06b878
    ctx->pc = 0x1AF330u;
    SET_GPR_U32(ctx, 31, 0x1AF338u);
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE1E0_0x1ae1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF338u; }
    }
    if (ctx->pc != 0x1AF338u) { return; }
    ctx->pc = 0x1AF338u;
    // 0x1af338: 0xc0dc678
    ctx->pc = 0x1AF338u;
    SET_GPR_U32(ctx, 31, 0x1AF340u);
    ctx->pc = 0x3719E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3719E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF340u; }
        if (ctx->pc != 0x1AF340u) { return; }
    }
    ctx->pc = 0x1AF340u;
    // 0x1af340: 0xc07326c
    ctx->pc = 0x1AF340u;
    SET_GPR_U32(ctx, 31, 0x1AF348u);
    ctx->pc = 0x1CC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC9B0_0x1cc9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF348u; }
    }
    if (ctx->pc != 0x1AF348u) { return; }
    ctx->pc = 0x1AF348u;
    // 0x1af348: 0xc06eb08
    ctx->pc = 0x1AF348u;
    SET_GPR_U32(ctx, 31, 0x1AF350u);
    ctx->pc = 0x1BAC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAC20_0x1bac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF350u; }
    }
    if (ctx->pc != 0x1AF350u) { return; }
    ctx->pc = 0x1AF350u;
    // 0x1af350: 0xc06ee2c
    ctx->pc = 0x1AF350u;
    SET_GPR_U32(ctx, 31, 0x1AF358u);
    ctx->pc = 0x1BB8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB8B0_0x1bb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF358u; }
    }
    if (ctx->pc != 0x1AF358u) { return; }
    ctx->pc = 0x1AF358u;
    // 0x1af358: 0xc0ddee4
    ctx->pc = 0x1AF358u;
    SET_GPR_U32(ctx, 31, 0x1AF360u);
    ctx->pc = 0x377B90u;
    {
        auto targetFn = runtime->lookupFunction(0x377B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF360u; }
        if (ctx->pc != 0x1AF360u) { return; }
    }
    ctx->pc = 0x1AF360u;
    // 0x1af360: 0xc06cf70
    ctx->pc = 0x1AF360u;
    SET_GPR_U32(ctx, 31, 0x1AF368u);
    ctx->pc = 0x1B3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF368u; }
    }
    if (ctx->pc != 0x1AF368u) { return; }
    ctx->pc = 0x1AF368u;
    // 0x1af368: 0xc06f0ac
    ctx->pc = 0x1AF368u;
    SET_GPR_U32(ctx, 31, 0x1AF370u);
    ctx->pc = 0x1BC2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC2B0_0x1bc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF370u; }
    }
    if (ctx->pc != 0x1AF370u) { return; }
    ctx->pc = 0x1AF370u;
    // 0x1af370: 0xdfbf0000
    ctx->pc = 0x1af370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af374: 0x3e00008
    ctx->pc = 0x1AF374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF3ECu: goto label_1af3ec;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF444u: goto label_1af444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF37Cu;
    // 0x1af37c: 0x0
    ctx->pc = 0x1af37cu;
    // NOP
    // 0x1af380: 0x27bdfff0
    ctx->pc = 0x1af380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af384: 0xffbf0000
    ctx->pc = 0x1af384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af388: 0xc07326c
    ctx->pc = 0x1AF388u;
    SET_GPR_U32(ctx, 31, 0x1AF390u);
    ctx->pc = 0x1CC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC9B0_0x1cc9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF390u; }
    }
    if (ctx->pc != 0x1AF390u) { return; }
    ctx->pc = 0x1AF390u;
    // 0x1af390: 0xc06c63c
    ctx->pc = 0x1AF390u;
    SET_GPR_U32(ctx, 31, 0x1AF398u);
    ctx->pc = 0x1B18F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B18F0_0x1b18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF398u; }
    }
    if (ctx->pc != 0x1AF398u) { return; }
    ctx->pc = 0x1AF398u;
    // 0x1af398: 0xc06c838
    ctx->pc = 0x1AF398u;
    SET_GPR_U32(ctx, 31, 0x1AF3A0u);
    ctx->pc = 0x1B20E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B20E0_0x1b20e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3A0u; }
    }
    if (ctx->pc != 0x1AF3A0u) { return; }
    ctx->pc = 0x1AF3A0u;
    // 0x1af3a0: 0xc06c65c
    ctx->pc = 0x1AF3A0u;
    SET_GPR_U32(ctx, 31, 0x1AF3A8u);
    ctx->pc = 0x1B1970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1970_0x1b1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3A8u; }
    }
    if (ctx->pc != 0x1AF3A8u) { return; }
    ctx->pc = 0x1AF3A8u;
    // 0x1af3a8: 0xc15d6a0
    ctx->pc = 0x1AF3A8u;
    SET_GPR_U32(ctx, 31, 0x1AF3B0u);
    ctx->pc = 0x575A80u;
    {
        auto targetFn = runtime->lookupFunction(0x575A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3B0u; }
        if (ctx->pc != 0x1AF3B0u) { return; }
    }
    ctx->pc = 0x1AF3B0u;
    // 0x1af3b0: 0xdfbf0000
    ctx->pc = 0x1af3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af3b4: 0x3e00008
    ctx->pc = 0x1AF3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF3ECu: goto label_1af3ec;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF444u: goto label_1af444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF3BCu;
    // 0x1af3bc: 0x0
    ctx->pc = 0x1af3bcu;
    // NOP
    // 0x1af3c0: 0x27bdfff0
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af3c4: 0x24040002
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af3c8: 0xffbf0000
    ctx->pc = 0x1af3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af3cc: 0xc06a5d4
    ctx->pc = 0x1AF3CCu;
    SET_GPR_U32(ctx, 31, 0x1AF3D4u);
    ctx->pc = 0x1AF3D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3D4u; }
    }
    if (ctx->pc != 0x1AF3D4u) { return; }
    ctx->pc = 0x1AF3D4u;
    // 0x1af3d4: 0x10400005
    ctx->pc = 0x1AF3D4u;
    {
        const bool branch_taken_0x1af3d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF3D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1af3d4) {
            ctx->pc = 0x1AF3ECu;
            goto label_1af3ec;
        }
    }
    ctx->pc = 0x1AF3DCu;
    // 0x1af3dc: 0xc17af1c
    ctx->pc = 0x1AF3DCu;
    SET_GPR_U32(ctx, 31, 0x1AF3E4u);
    ctx->pc = 0x1AF3E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x5EBC70u;
    {
        auto targetFn = runtime->lookupFunction(0x5EBC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3E4u; }
        if (ctx->pc != 0x1AF3E4u) { return; }
    }
    ctx->pc = 0x1AF3E4u;
    // 0x1af3e4: 0xc073df8
    ctx->pc = 0x1AF3E4u;
    SET_GPR_U32(ctx, 31, 0x1AF3ECu);
    ctx->pc = 0x1CF7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF7E0_0x1cf7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3ECu; }
    }
    if (ctx->pc != 0x1AF3ECu) { return; }
    ctx->pc = 0x1AF3ECu;
label_1af3ec:
    // 0x1af3ec: 0xc07326c
    ctx->pc = 0x1AF3ECu;
    SET_GPR_U32(ctx, 31, 0x1AF3F4u);
    ctx->pc = 0x1CC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC9B0_0x1cc9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3F4u; }
    }
    if (ctx->pc != 0x1AF3F4u) { return; }
    ctx->pc = 0x1AF3F4u;
    // 0x1af3f4: 0xc06c63c
    ctx->pc = 0x1AF3F4u;
    SET_GPR_U32(ctx, 31, 0x1AF3FCu);
    ctx->pc = 0x1B18F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B18F0_0x1b18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3FCu; }
    }
    if (ctx->pc != 0x1AF3FCu) { return; }
    ctx->pc = 0x1AF3FCu;
    // 0x1af3fc: 0xc06c838
    ctx->pc = 0x1AF3FCu;
    SET_GPR_U32(ctx, 31, 0x1AF404u);
    ctx->pc = 0x1B20E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B20E0_0x1b20e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF404u; }
    }
    if (ctx->pc != 0x1AF404u) { return; }
    ctx->pc = 0x1AF404u;
    // 0x1af404: 0xc06c65c
    ctx->pc = 0x1AF404u;
    SET_GPR_U32(ctx, 31, 0x1AF40Cu);
    ctx->pc = 0x1B1970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1970_0x1b1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF40Cu; }
    }
    if (ctx->pc != 0x1AF40Cu) { return; }
    ctx->pc = 0x1AF40Cu;
    // 0x1af40c: 0x24040002
    ctx->pc = 0x1af40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af410: 0xc06a5d4
    ctx->pc = 0x1AF410u;
    SET_GPR_U32(ctx, 31, 0x1AF418u);
    ctx->pc = 0x1AF414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF418u; }
    }
    if (ctx->pc != 0x1AF418u) { return; }
    ctx->pc = 0x1AF418u;
    // 0x1af418: 0x10400004
    ctx->pc = 0x1AF418u;
    {
        const bool branch_taken_0x1af418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF41Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1af418) {
            ctx->pc = 0x1AF42Cu;
            goto label_1af42c;
        }
    }
    ctx->pc = 0x1AF420u;
    // 0x1af420: 0xc17ab74
    ctx->pc = 0x1AF420u;
    SET_GPR_U32(ctx, 31, 0x1AF428u);
    ctx->pc = 0x5EADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x5EADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF428u; }
        if (ctx->pc != 0x1AF428u) { return; }
    }
    ctx->pc = 0x1AF428u;
    // 0x1af428: 0x24040003
    ctx->pc = 0x1af428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1af42c:
    // 0x1af42c: 0xc06a5d4
    ctx->pc = 0x1AF42Cu;
    SET_GPR_U32(ctx, 31, 0x1AF434u);
    ctx->pc = 0x1AF430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF434u; }
    }
    if (ctx->pc != 0x1AF434u) { return; }
    ctx->pc = 0x1AF434u;
    // 0x1af434: 0x10400003
    ctx->pc = 0x1AF434u;
    {
        const bool branch_taken_0x1af434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af434) {
            ctx->pc = 0x1AF444u;
            goto label_1af444;
        }
    }
    ctx->pc = 0x1AF43Cu;
    // 0x1af43c: 0xc15d6a0
    ctx->pc = 0x1AF43Cu;
    SET_GPR_U32(ctx, 31, 0x1AF444u);
    ctx->pc = 0x575A80u;
    {
        auto targetFn = runtime->lookupFunction(0x575A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF444u; }
        if (ctx->pc != 0x1AF444u) { return; }
    }
    ctx->pc = 0x1AF444u;
label_1af444:
    // 0x1af444: 0xc06b3dc
    ctx->pc = 0x1AF444u;
    SET_GPR_U32(ctx, 31, 0x1AF44Cu);
    ctx->pc = 0x1ACF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF70_0x1acf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF44Cu; }
    }
    if (ctx->pc != 0x1AF44Cu) { return; }
    ctx->pc = 0x1AF44Cu;
    // 0x1af44c: 0xc06b878
    ctx->pc = 0x1AF44Cu;
    SET_GPR_U32(ctx, 31, 0x1AF454u);
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE1E0_0x1ae1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF454u; }
    }
    if (ctx->pc != 0x1AF454u) { return; }
    ctx->pc = 0x1AF454u;
    // 0x1af454: 0xc0dc678
    ctx->pc = 0x1AF454u;
    SET_GPR_U32(ctx, 31, 0x1AF45Cu);
    ctx->pc = 0x3719E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3719E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF45Cu; }
        if (ctx->pc != 0x1AF45Cu) { return; }
    }
    ctx->pc = 0x1AF45Cu;
    // 0x1af45c: 0xc07326c
    ctx->pc = 0x1AF45Cu;
    SET_GPR_U32(ctx, 31, 0x1AF464u);
    ctx->pc = 0x1CC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC9B0_0x1cc9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF464u; }
    }
    if (ctx->pc != 0x1AF464u) { return; }
    ctx->pc = 0x1AF464u;
    // 0x1af464: 0xc06ee2c
    ctx->pc = 0x1AF464u;
    SET_GPR_U32(ctx, 31, 0x1AF46Cu);
    ctx->pc = 0x1BB8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB8B0_0x1bb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF46Cu; }
    }
    if (ctx->pc != 0x1AF46Cu) { return; }
    ctx->pc = 0x1AF46Cu;
    // 0x1af46c: 0xc0ddee4
    ctx->pc = 0x1AF46Cu;
    SET_GPR_U32(ctx, 31, 0x1AF474u);
    ctx->pc = 0x377B90u;
    {
        auto targetFn = runtime->lookupFunction(0x377B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF474u; }
        if (ctx->pc != 0x1AF474u) { return; }
    }
    ctx->pc = 0x1AF474u;
    // 0x1af474: 0xc06cf70
    ctx->pc = 0x1AF474u;
    SET_GPR_U32(ctx, 31, 0x1AF47Cu);
    ctx->pc = 0x1B3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF47Cu; }
    }
    if (ctx->pc != 0x1AF47Cu) { return; }
    ctx->pc = 0x1AF47Cu;
    // 0x1af47c: 0xc06f0ac
    ctx->pc = 0x1AF47Cu;
    SET_GPR_U32(ctx, 31, 0x1AF484u);
    ctx->pc = 0x1BC2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC2B0_0x1bc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF484u; }
    }
    if (ctx->pc != 0x1AF484u) { return; }
    ctx->pc = 0x1AF484u;
    // 0x1af484: 0xdfbf0000
    ctx->pc = 0x1af484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af488: 0x3e00008
    ctx->pc = 0x1AF488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF48Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF3ECu: goto label_1af3ec;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF444u: goto label_1af444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF490u;
}
