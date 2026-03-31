#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B33B0
// Address: 0x1b33b0 - 0x1b3680
void sub_001B33B0_0x1b33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b33b0u;

label_1b33b0:
    // 0x1b33b0: 0x27bdff20
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b33b4: 0x24050001
    ctx->pc = 0x1b33b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b33b8: 0xffbf0070
    ctx->pc = 0x1b33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b33bc: 0x7fb50060
    ctx->pc = 0x1b33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b33c0: 0x7fb40050
    ctx->pc = 0x1b33c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b33c4: 0x7fb30040
    ctx->pc = 0x1b33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b33c8: 0x7fb20030
    ctx->pc = 0x1b33c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b33cc: 0x7fb10020
    ctx->pc = 0x1b33ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b33d0: 0x7fb00010
    ctx->pc = 0x1b33d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b33d4: 0xe7b40000
    ctx->pc = 0x1b33d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b33d8: 0x80802d
    ctx->pc = 0x1b33d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33dc: 0x46006506
    ctx->pc = 0x1b33dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b33e0: 0xc06bde0
    ctx->pc = 0x1B33E0u;
    SET_GPR_U32(ctx, 31, 0x1B33E8u);
    ctx->pc = 0x1B33E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33E8u; }
    }
    if (ctx->pc != 0x1B33E8u) { return; }
    ctx->pc = 0x1B33E8u;
    // 0x1b33e8: 0x27a40080
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b33ec: 0xc064800
    ctx->pc = 0x1B33ECu;
    SET_GPR_U32(ctx, 31, 0x1B33F4u);
    ctx->pc = 0x1B33F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192000_0x192000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33F4u; }
    }
    if (ctx->pc != 0x1B33F4u) { return; }
    ctx->pc = 0x1B33F4u;
    // 0x1b33f4: 0x200282d
    ctx->pc = 0x1b33f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33f8: 0xc06bde0
    ctx->pc = 0x1B33F8u;
    SET_GPR_U32(ctx, 31, 0x1B3400u);
    ctx->pc = 0x1B33FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3400u; }
    }
    if (ctx->pc != 0x1B3400u) { return; }
    ctx->pc = 0x1B3400u;
    // 0x1b3400: 0xa82d
    ctx->pc = 0x1b3400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3404: 0x27b400c4
    ctx->pc = 0x1b3404u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 196));
    // 0x1b3408: 0x27b300c8
    ctx->pc = 0x1b3408u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 200));
    // 0x1b340c: 0x27b200cc
    ctx->pc = 0x1b340cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 204));
    // 0x1b3410: 0x27b100dc
    ctx->pc = 0x1b3410u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 220));
    // 0x1b3414: 0x27b000d8
    ctx->pc = 0x1b3414u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 216));
    // 0x1b3418: 0x151040
    ctx->pc = 0x1b3418u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
label_1b341c:
    // 0x1b341c: 0x3c040023
    ctx->pc = 0x1b341cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1b3420: 0x551021
    ctx->pc = 0x1b3420u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b3424: 0x24844430
    ctx->pc = 0x1b3424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17456));
    // 0x1b3428: 0x228c0
    ctx->pc = 0x1b3428u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b342c: 0x27a300c0
    ctx->pc = 0x1b342cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3430: 0x852021
    ctx->pc = 0x1b3430u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b3434: 0x24020002
    ctx->pc = 0x1b3434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3438: 0xc4820000
    ctx->pc = 0x1b3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b343c: 0xc4810004
    ctx->pc = 0x1b343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3440: 0xc4800008
    ctx->pc = 0x1b3440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3444: 0xe4620000
    ctx->pc = 0x1b3444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b3448: 0xe4610004
    ctx->pc = 0x1b3448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b344c: 0xe4600008
    ctx->pc = 0x1b344cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b3450: 0xc7a000c0
    ctx->pc = 0x1b3450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3454: 0x46140002
    ctx->pc = 0x1b3454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b3458: 0xe7a000c0
    ctx->pc = 0x1b3458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b345c: 0xc6800000
    ctx->pc = 0x1b345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3460: 0x46140002
    ctx->pc = 0x1b3460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b3464: 0xe6800000
    ctx->pc = 0x1b3464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1b3468: 0xc6600000
    ctx->pc = 0x1b3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b346c: 0x46140002
    ctx->pc = 0x1b346cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b3470: 0xe6600000
    ctx->pc = 0x1b3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b3474: 0xc482000c
    ctx->pc = 0x1b3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3478: 0xc4810010
    ctx->pc = 0x1b3478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b347c: 0xc4800014
    ctx->pc = 0x1b347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3480: 0xe6420000
    ctx->pc = 0x1b3480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b3484: 0xe6410004
    ctx->pc = 0x1b3484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1b3488: 0x12a2000f
    ctx->pc = 0x1B3488u;
    {
        const bool branch_taken_0x1b3488 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B348Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x1b3488) {
            ctx->pc = 0x1B34C8u;
            goto label_1b34c8;
        }
    }
    ctx->pc = 0x1B3490u;
    // 0x1b3490: 0x24020001
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3494: 0x12a20008
    ctx->pc = 0x1B3494u;
    {
        const bool branch_taken_0x1b3494 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B3498u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
        if (branch_taken_0x1b3494) {
            ctx->pc = 0x1B34B8u;
            goto label_1b34b8;
        }
    }
    ctx->pc = 0x1B349Cu;
    // 0x1b349c: 0x12a00003
    ctx->pc = 0x1B349Cu;
    {
        const bool branch_taken_0x1b349c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B34A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33023 << 16));
        if (branch_taken_0x1b349c) {
            ctx->pc = 0x1B34ACu;
            goto label_1b34ac;
        }
    }
    ctx->pc = 0x1B34A4u;
    // 0x1b34a4: 0x1000000d
    ctx->pc = 0x1B34A4u;
    {
        const bool branch_taken_0x1b34a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B34A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1b34a4) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B34ACu;
label_1b34ac:
    // 0x1b34ac: 0xae220000
    ctx->pc = 0x1b34acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b34b0: 0x10000009
    ctx->pc = 0x1B34B0u;
    {
        const bool branch_taken_0x1b34b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B34B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1b34b0) {
            ctx->pc = 0x1B34D8u;
            goto label_1b34d8;
        }
    }
    ctx->pc = 0x1B34B8u;
label_1b34b8:
    // 0x1b34b8: 0x3442ff00
    ctx->pc = 0x1b34b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65280));
    // 0x1b34bc: 0xae220000
    ctx->pc = 0x1b34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b34c0: 0x10000005
    ctx->pc = 0x1B34C0u;
    {
        const bool branch_taken_0x1b34c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B34C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1b34c0) {
            ctx->pc = 0x1B34D8u;
            goto label_1b34d8;
        }
    }
    ctx->pc = 0x1B34C8u;
label_1b34c8:
    // 0x1b34c8: 0x3c028000
    ctx->pc = 0x1b34c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1b34cc: 0x344200ff
    ctx->pc = 0x1b34ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 255));
    // 0x1b34d0: 0xae220000
    ctx->pc = 0x1b34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b34d4: 0xae020000
    ctx->pc = 0x1b34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b34d8:
    // 0x1b34d8: 0x8e230000
    ctx->pc = 0x1b34d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b34dc:
    // 0x1b34dc: 0x3c02007f
    ctx->pc = 0x1b34dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
    // 0x1b34e0: 0x34427f7f
    ctx->pc = 0x1b34e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32639));
    // 0x1b34e4: 0x27a400c0
    ctx->pc = 0x1b34e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b34e8: 0x621025
    ctx->pc = 0x1b34e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b34ec: 0xc0653f4
    ctx->pc = 0x1B34ECu;
    SET_GPR_U32(ctx, 31, 0x1B34F4u);
    ctx->pc = 0x1B34F0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x194FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00194FD0_0x194fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34F4u; }
    }
    if (ctx->pc != 0x1B34F4u) { return; }
    ctx->pc = 0x1B34F4u;
    // 0x1b34f4: 0x26b50001
    ctx->pc = 0x1b34f4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b34f8: 0x2ea20003
    ctx->pc = 0x1b34f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 3));
    // 0x1b34fc: 0x1440ffc7
    ctx->pc = 0x1B34FCu;
    {
        const bool branch_taken_0x1b34fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3500u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1b34fc) {
            ctx->pc = 0x1B341Cu;
            goto label_1b341c;
        }
    }
    ctx->pc = 0x1B3504u;
    // 0x1b3504: 0x27a50080
    ctx->pc = 0x1b3504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b3508: 0xc06bde0
    ctx->pc = 0x1B3508u;
    SET_GPR_U32(ctx, 31, 0x1B3510u);
    ctx->pc = 0x1B350Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3510u; }
    }
    if (ctx->pc != 0x1B3510u) { return; }
    ctx->pc = 0x1B3510u;
    // 0x1b3510: 0xdfbf0070
    ctx->pc = 0x1b3510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3514: 0xc7b40000
    ctx->pc = 0x1b3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3518: 0x7bb50060
    ctx->pc = 0x1b3518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b351c: 0x7bb40050
    ctx->pc = 0x1b351cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3520: 0x7bb30040
    ctx->pc = 0x1b3520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3524: 0x7bb20030
    ctx->pc = 0x1b3524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3528: 0x7bb10020
    ctx->pc = 0x1b3528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b352c: 0x7bb00010
    ctx->pc = 0x1b352cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3530: 0x3e00008
    ctx->pc = 0x1B3530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B3604u: goto label_1b3604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3538u;
    // 0x1b3538: 0x0
    ctx->pc = 0x1b3538u;
    // NOP
    // 0x1b353c: 0x0
    ctx->pc = 0x1b353cu;
    // NOP
    // 0x1b3540: 0x27bdffc0
    ctx->pc = 0x1b3540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3544: 0xffbf0030
    ctx->pc = 0x1b3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3548: 0x7fb20020
    ctx->pc = 0x1b3548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b354c: 0x7fb10010
    ctx->pc = 0x1b354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3550: 0x7fb00000
    ctx->pc = 0x1b3550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3554: 0x80882d
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3558: 0x8c830034
    ctx->pc = 0x1b3558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1b355c: 0x94720816
    ctx->pc = 0x1b355cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2070)));
    // 0x1b3560: 0x10000009
    ctx->pc = 0x1B3560u;
    {
        const bool branch_taken_0x1b3560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3564u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b3560) {
            ctx->pc = 0x1B3588u;
            goto label_1b3588;
        }
    }
    ctx->pc = 0x1B3568u;
label_1b3568:
    // 0x1b3568: 0x8e230034
    ctx->pc = 0x1b3568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b356c: 0x3c0241a0
    ctx->pc = 0x1b356cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
    // 0x1b3570: 0x44826000
    ctx->pc = 0x1b3570u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1b3574: 0x102080
    ctx->pc = 0x1b3574u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b3578: 0x641021
    ctx->pc = 0x1b3578u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b357c: 0xc06ccec
    ctx->pc = 0x1B357Cu;
    SET_GPR_U32(ctx, 31, 0x1B3584u);
    ctx->pc = 0x1B3580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    ctx->pc = 0x1B33B0u;
    goto label_1b33b0;
    ctx->pc = 0x1B3584u;
label_1b3584:
    // 0x1b3584: 0x26100001
    ctx->pc = 0x1b3584u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1b3588:
    // 0x1b3588: 0x212182b
    ctx->pc = 0x1b3588u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b358c: 0x1460fff6
    ctx->pc = 0x1B358Cu;
    {
        const bool branch_taken_0x1b358c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b358c) {
            ctx->pc = 0x1B3568u;
            goto label_1b3568;
        }
    }
    ctx->pc = 0x1B3594u;
    // 0x1b3594: 0xdfbf0030
    ctx->pc = 0x1b3594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3598: 0x7bb20020
    ctx->pc = 0x1b3598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b359c: 0x7bb10010
    ctx->pc = 0x1b359cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b35a0: 0x7bb00000
    ctx->pc = 0x1b35a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b35a4: 0x3e00008
    ctx->pc = 0x1B35A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B35A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B3604u: goto label_1b3604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B35ACu;
    // 0x1b35ac: 0x0
    ctx->pc = 0x1b35acu;
    // NOP
    // 0x1b35b0: 0x27bdff60
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b35b4: 0x24030004
    ctx->pc = 0x1b35b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b35b8: 0xffbf0030
    ctx->pc = 0x1b35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b35bc: 0x28620008
    ctx->pc = 0x1b35bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1b35c0: 0x7fb20020
    ctx->pc = 0x1b35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b35c4: 0x7fb10010
    ctx->pc = 0x1b35c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b35c8: 0x80902d
    ctx->pc = 0x1b35c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35cc: 0x7fb00000
    ctx->pc = 0x1b35ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b35d0: 0xa0882d
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35d4: 0xafa70070
    ctx->pc = 0x1b35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x1b35d8: 0xc0802d
    ctx->pc = 0x1b35d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35dc: 0xffa80080
    ctx->pc = 0x1b35dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x1b35e0: 0xffa90088
    ctx->pc = 0x1b35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x1b35e4: 0xffaa0090
    ctx->pc = 0x1b35e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x1b35e8: 0x14400003
    ctx->pc = 0x1B35E8u;
    {
        const bool branch_taken_0x1b35e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B35ECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
        if (branch_taken_0x1b35e8) {
            ctx->pc = 0x1B35F8u;
            goto label_1b35f8;
        }
    }
    ctx->pc = 0x1B35F0u;
    // 0x1b35f0: 0x10000004
    ctx->pc = 0x1B35F0u;
    {
        const bool branch_taken_0x1b35f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B35F4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b35f0) {
            ctx->pc = 0x1B3604u;
            goto label_1b3604;
        }
    }
    ctx->pc = 0x1B35F8u;
label_1b35f8:
    // 0x1b35f8: 0x24020008
    ctx->pc = 0x1b35f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b35fc: 0x431023
    ctx->pc = 0x1b35fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3600: 0x218c0
    ctx->pc = 0x1b3600u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1b3604:
    // 0x1b3604: 0x8fa50070
    ctx->pc = 0x1b3604u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3608: 0x27a200a0
    ctx->pc = 0x1b3608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b360c: 0x3c04002c
    ctx->pc = 0x1b360cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b3610: 0x433023
    ctx->pc = 0x1b3610u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3614: 0xc043e20
    ctx->pc = 0x1B3614u;
    SET_GPR_U32(ctx, 31, 0x1B361Cu);
    ctx->pc = 0x1B3618u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B361Cu; }
    }
    if (ctx->pc != 0x1B361Cu) { return; }
    ctx->pc = 0x1B361Cu;
    // 0x1b361c: 0xc06ce30
    ctx->pc = 0x1B361Cu;
    SET_GPR_U32(ctx, 31, 0x1B3624u);
    ctx->pc = 0x1B3620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38C0_0x1b38c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3624u; }
    }
    if (ctx->pc != 0x1B3624u) { return; }
    ctx->pc = 0x1B3624u;
    // 0x1b3624: 0x24040008
    ctx->pc = 0x1b3624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3628: 0xc06cec4
    ctx->pc = 0x1B3628u;
    SET_GPR_U32(ctx, 31, 0x1B3630u);
    ctx->pc = 0x1B362Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3630u; }
    }
    if (ctx->pc != 0x1B3630u) { return; }
    ctx->pc = 0x1B3630u;
    // 0x1b3630: 0x240202d
    ctx->pc = 0x1b3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3634: 0xc06ce24
    ctx->pc = 0x1B3634u;
    SET_GPR_U32(ctx, 31, 0x1B363Cu);
    ctx->pc = 0x1B3638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3890_0x1b3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B363Cu; }
    }
    if (ctx->pc != 0x1B363Cu) { return; }
    ctx->pc = 0x1B363Cu;
    // 0x1b363c: 0x3c04002c
    ctx->pc = 0x1b363cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b3640: 0xc06ce48
    ctx->pc = 0x1B3640u;
    SET_GPR_U32(ctx, 31, 0x1B3648u);
    ctx->pc = 0x1B3644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->pc = 0x1B3920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3920_0x1b3920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3648u; }
    }
    if (ctx->pc != 0x1B3648u) { return; }
    ctx->pc = 0x1B3648u;
    // 0x1b3648: 0x24040008
    ctx->pc = 0x1b3648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b364c: 0xc06cec4
    ctx->pc = 0x1B364Cu;
    SET_GPR_U32(ctx, 31, 0x1B3654u);
    ctx->pc = 0x1B3650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B10_0x1b3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3654u; }
    }
    if (ctx->pc != 0x1B3654u) { return; }
    ctx->pc = 0x1B3654u;
    // 0x1b3654: 0xc06ce30
    ctx->pc = 0x1B3654u;
    SET_GPR_U32(ctx, 31, 0x1B365Cu);
    ctx->pc = 0x1B3658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B38C0_0x1b38c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B365Cu; }
    }
    if (ctx->pc != 0x1B365Cu) { return; }
    ctx->pc = 0x1B365Cu;
    // 0x1b365c: 0xdfbf0030
    ctx->pc = 0x1b365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3660: 0x7bb20020
    ctx->pc = 0x1b3660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3664: 0x7bb10010
    ctx->pc = 0x1b3664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3668: 0x7bb00000
    ctx->pc = 0x1b3668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b366c: 0x3e00008
    ctx->pc = 0x1B366Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B3604u: goto label_1b3604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3674u;
    // 0x1b3674: 0x0
    ctx->pc = 0x1b3674u;
    // NOP
    // 0x1b3678: 0x0
    ctx->pc = 0x1b3678u;
    // NOP
    // 0x1b367c: 0x0
    ctx->pc = 0x1b367cu;
    // NOP
}
