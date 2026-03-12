#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003753D0
// Address: 0x3753d0 - 0x375550
void sub_003753D0_0x3753d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3753d0u;

label_3753d0:
    // 0x3753d0: 0x27bdffe0
    ctx->pc = 0x3753d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_3753d4:
    // 0x3753d4: 0x282d
    ctx->pc = 0x3753d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3753d8:
    // 0x3753d8: 0xffbf0010
    ctx->pc = 0x3753d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3753dc:
    // 0x3753dc: 0x7fb00000
    ctx->pc = 0x3753dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3753e0:
    // 0x3753e0: 0x80802d
    ctx->pc = 0x3753e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3753e4:
    // 0x3753e4: 0xc06bde0
label_3753e8:
    if (ctx->pc == 0x3753E8u) {
        ctx->pc = 0x3753E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x3753ECu;
        goto label_3753ec;
    }
    ctx->pc = 0x3753E4u;
    SET_GPR_U32(ctx, 31, 0x3753ECu);
    ctx->pc = 0x3753E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3753ECu; }
        if (ctx->pc != 0x3753ECu) { return; }
    }
    ctx->pc = 0x3753ECu;
label_3753ec:
    // 0x3753ec: 0xa2000198
    ctx->pc = 0x3753ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 0));
label_3753f0:
    // 0x3753f0: 0x82040000
    ctx->pc = 0x3753f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3753f4:
    // 0x3753f4: 0x82030001
    ctx->pc = 0x3753f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3753f8:
    // 0x3753f8: 0x831824
    ctx->pc = 0x3753f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3753fc:
    // 0x3753fc: 0x1060004e
label_375400:
    if (ctx->pc == 0x375400u) {
        ctx->pc = 0x375400u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x375404u;
        goto label_375404;
    }
    ctx->pc = 0x3753FCu;
    {
        const bool branch_taken_0x3753fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x375400u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x3753fc) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375404u;
label_375404:
    // 0x375404: 0xc06e0a8
label_375408:
    if (ctx->pc == 0x375408u) {
        ctx->pc = 0x37540Cu;
        goto label_37540c;
    }
    ctx->pc = 0x375404u;
    SET_GPR_U32(ctx, 31, 0x37540Cu);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37540Cu; }
        if (ctx->pc != 0x37540Cu) { return; }
    }
    ctx->pc = 0x37540Cu;
label_37540c:
    // 0x37540c: 0x10400004
label_375410:
    if (ctx->pc == 0x375410u) {
        ctx->pc = 0x375410u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x375414u;
        goto label_375414;
    }
    ctx->pc = 0x37540Cu;
    {
        const bool branch_taken_0x37540c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375410u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x37540c) {
            ctx->pc = 0x375420u;
            goto label_375420;
        }
    }
    ctx->pc = 0x375414u;
label_375414:
    // 0x375414: 0x92030003
    ctx->pc = 0x375414u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_375418:
    // 0x375418: 0x10600047
label_37541c:
    if (ctx->pc == 0x37541Cu) {
        ctx->pc = 0x375420u;
        goto label_375420;
    }
    ctx->pc = 0x375418u;
    {
        const bool branch_taken_0x375418 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x375418) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375420u;
label_375420:
    // 0x375420: 0xc06e0a8
label_375424:
    if (ctx->pc == 0x375424u) {
        ctx->pc = 0x375428u;
        goto label_375428;
    }
    ctx->pc = 0x375420u;
    SET_GPR_U32(ctx, 31, 0x375428u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375428u; }
        if (ctx->pc != 0x375428u) { return; }
    }
    ctx->pc = 0x375428u;
label_375428:
    // 0x375428: 0x10400006
label_37542c:
    if (ctx->pc == 0x37542Cu) {
        ctx->pc = 0x37542Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x375430u;
        goto label_375430;
    }
    ctx->pc = 0x375428u;
    {
        const bool branch_taken_0x375428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37542Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x375428) {
            ctx->pc = 0x375444u;
            goto label_375444;
        }
    }
    ctx->pc = 0x375430u;
label_375430:
    // 0x375430: 0x92040003
    ctx->pc = 0x375430u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_375434:
    // 0x375434: 0x24030001
    ctx->pc = 0x375434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_375438:
    // 0x375438: 0x1083003f
label_37543c:
    if (ctx->pc == 0x37543Cu) {
        ctx->pc = 0x375440u;
        goto label_375440;
    }
    ctx->pc = 0x375438u;
    {
        const bool branch_taken_0x375438 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375438) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375440u;
label_375440:
    // 0x375440: 0x24040019
    ctx->pc = 0x375440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
label_375444:
    // 0x375444: 0xc06e0a8
label_375448:
    if (ctx->pc == 0x375448u) {
        ctx->pc = 0x37544Cu;
        goto label_37544c;
    }
    ctx->pc = 0x375444u;
    SET_GPR_U32(ctx, 31, 0x37544Cu);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37544Cu; }
        if (ctx->pc != 0x37544Cu) { return; }
    }
    ctx->pc = 0x37544Cu;
label_37544c:
    // 0x37544c: 0x10400006
label_375450:
    if (ctx->pc == 0x375450u) {
        ctx->pc = 0x375450u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x375454u;
        goto label_375454;
    }
    ctx->pc = 0x37544Cu;
    {
        const bool branch_taken_0x37544c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375450u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x37544c) {
            ctx->pc = 0x375468u;
            goto label_375468;
        }
    }
    ctx->pc = 0x375454u;
label_375454:
    // 0x375454: 0x92040003
    ctx->pc = 0x375454u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_375458:
    // 0x375458: 0x24030002
    ctx->pc = 0x375458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_37545c:
    // 0x37545c: 0x10830036
label_375460:
    if (ctx->pc == 0x375460u) {
        ctx->pc = 0x375464u;
        goto label_375464;
    }
    ctx->pc = 0x37545Cu;
    {
        const bool branch_taken_0x37545c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x37545c) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375464u;
label_375464:
    // 0x375464: 0x2404001a
    ctx->pc = 0x375464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
label_375468:
    // 0x375468: 0xc06e0a8
label_37546c:
    if (ctx->pc == 0x37546Cu) {
        ctx->pc = 0x375470u;
        goto label_375470;
    }
    ctx->pc = 0x375468u;
    SET_GPR_U32(ctx, 31, 0x375470u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375470u; }
        if (ctx->pc != 0x375470u) { return; }
    }
    ctx->pc = 0x375470u;
label_375470:
    // 0x375470: 0x10400005
label_375474:
    if (ctx->pc == 0x375474u) {
        ctx->pc = 0x375474u;
        SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
        ctx->pc = 0x375478u;
        goto label_375478;
    }
    ctx->pc = 0x375470u;
    {
        const bool branch_taken_0x375470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375474u;
        SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
        if (branch_taken_0x375470) {
            ctx->pc = 0x375488u;
            goto label_375488;
        }
    }
    ctx->pc = 0x375478u;
label_375478:
    // 0x375478: 0x92040003
    ctx->pc = 0x375478u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_37547c:
    // 0x37547c: 0x24030003
    ctx->pc = 0x37547cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_375480:
    // 0x375480: 0x1083002d
label_375484:
    if (ctx->pc == 0x375484u) {
        ctx->pc = 0x375488u;
        goto label_375488;
    }
    ctx->pc = 0x375480u;
    {
        const bool branch_taken_0x375480 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375480) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375488u;
label_375488:
    // 0x375488: 0x92040003
    ctx->pc = 0x375488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_37548c:
    // 0x37548c: 0x9023ddd4
    ctx->pc = 0x37548cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958548)));
label_375490:
    // 0x375490: 0x14830007
label_375494:
    if (ctx->pc == 0x375494u) {
        ctx->pc = 0x375498u;
        goto label_375498;
    }
    ctx->pc = 0x375490u;
    {
        const bool branch_taken_0x375490 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x375490) {
            ctx->pc = 0x3754B0u;
            goto label_3754b0;
        }
    }
    ctx->pc = 0x375498u;
label_375498:
    // 0x375498: 0x3c01004c
    ctx->pc = 0x375498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_37549c:
    // 0x37549c: 0x90239d10
    ctx->pc = 0x37549cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941968)));
label_3754a0:
    // 0x3754a0: 0x1060000b
label_3754a4:
    if (ctx->pc == 0x3754A4u) {
        ctx->pc = 0x3754A8u;
        goto label_3754a8;
    }
    ctx->pc = 0x3754A0u;
    {
        const bool branch_taken_0x3754a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3754a0) {
            ctx->pc = 0x3754D0u;
            goto label_3754d0;
        }
    }
    ctx->pc = 0x3754A8u;
label_3754a8:
    // 0x3754a8: 0x10000024
label_3754ac:
    if (ctx->pc == 0x3754ACu) {
        ctx->pc = 0x3754ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3754B0u;
        goto label_3754b0;
    }
    ctx->pc = 0x3754A8u;
    {
        const bool branch_taken_0x3754a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3754ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3754a8) {
            ctx->pc = 0x37553Cu;
            goto label_37553c;
        }
    }
    ctx->pc = 0x3754B0u;
label_3754b0:
    // 0x3754b0: 0x3c01004c
    ctx->pc = 0x3754b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_3754b4:
    // 0x3754b4: 0x90239d11
    ctx->pc = 0x3754b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941969)));
label_3754b8:
    // 0x3754b8: 0x1460001f
label_3754bc:
    if (ctx->pc == 0x3754BCu) {
        ctx->pc = 0x3754BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 56));
        ctx->pc = 0x3754C0u;
        goto label_3754c0;
    }
    ctx->pc = 0x3754B8u;
    {
        const bool branch_taken_0x3754b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x3754BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 56));
        if (branch_taken_0x3754b8) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x3754C0u;
label_3754c0:
    // 0x3754c0: 0xc17021c
label_3754c4:
    if (ctx->pc == 0x3754C4u) {
        ctx->pc = 0x3754C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3754C8u;
        goto label_3754c8;
    }
    ctx->pc = 0x3754C0u;
    SET_GPR_U32(ctx, 31, 0x3754C8u);
    ctx->pc = 0x3754C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x5C0870u;
    {
        auto targetFn = runtime->lookupFunction(0x5C0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3754C8u; }
        if (ctx->pc != 0x3754C8u) { return; }
    }
    ctx->pc = 0x3754C8u;
label_3754c8:
    // 0x3754c8: 0x1440001b
label_3754cc:
    if (ctx->pc == 0x3754CCu) {
        ctx->pc = 0x3754D0u;
        goto label_3754d0;
    }
    ctx->pc = 0x3754C8u;
    {
        const bool branch_taken_0x3754c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3754c8) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x3754D0u;
label_3754d0:
    // 0x3754d0: 0x8e020018
    ctx->pc = 0x3754d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3754d4:
    // 0x3754d4: 0x40f809
label_3754d8:
    if (ctx->pc == 0x3754D8u) {
        ctx->pc = 0x3754D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3754DCu;
        goto label_3754dc;
    }
    ctx->pc = 0x3754D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3754DCu);
        ctx->pc = 0x3754D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3753D0u: goto label_3753d0;
            case 0x3753D4u: goto label_3753d4;
            case 0x3753D8u: goto label_3753d8;
            case 0x3753DCu: goto label_3753dc;
            case 0x3753E0u: goto label_3753e0;
            case 0x3753E4u: goto label_3753e4;
            case 0x3753E8u: goto label_3753e8;
            case 0x3753ECu: goto label_3753ec;
            case 0x3753F0u: goto label_3753f0;
            case 0x3753F4u: goto label_3753f4;
            case 0x3753F8u: goto label_3753f8;
            case 0x3753FCu: goto label_3753fc;
            case 0x375400u: goto label_375400;
            case 0x375404u: goto label_375404;
            case 0x375408u: goto label_375408;
            case 0x37540Cu: goto label_37540c;
            case 0x375410u: goto label_375410;
            case 0x375414u: goto label_375414;
            case 0x375418u: goto label_375418;
            case 0x37541Cu: goto label_37541c;
            case 0x375420u: goto label_375420;
            case 0x375424u: goto label_375424;
            case 0x375428u: goto label_375428;
            case 0x37542Cu: goto label_37542c;
            case 0x375430u: goto label_375430;
            case 0x375434u: goto label_375434;
            case 0x375438u: goto label_375438;
            case 0x37543Cu: goto label_37543c;
            case 0x375440u: goto label_375440;
            case 0x375444u: goto label_375444;
            case 0x375448u: goto label_375448;
            case 0x37544Cu: goto label_37544c;
            case 0x375450u: goto label_375450;
            case 0x375454u: goto label_375454;
            case 0x375458u: goto label_375458;
            case 0x37545Cu: goto label_37545c;
            case 0x375460u: goto label_375460;
            case 0x375464u: goto label_375464;
            case 0x375468u: goto label_375468;
            case 0x37546Cu: goto label_37546c;
            case 0x375470u: goto label_375470;
            case 0x375474u: goto label_375474;
            case 0x375478u: goto label_375478;
            case 0x37547Cu: goto label_37547c;
            case 0x375480u: goto label_375480;
            case 0x375484u: goto label_375484;
            case 0x375488u: goto label_375488;
            case 0x37548Cu: goto label_37548c;
            case 0x375490u: goto label_375490;
            case 0x375494u: goto label_375494;
            case 0x375498u: goto label_375498;
            case 0x37549Cu: goto label_37549c;
            case 0x3754A0u: goto label_3754a0;
            case 0x3754A4u: goto label_3754a4;
            case 0x3754A8u: goto label_3754a8;
            case 0x3754ACu: goto label_3754ac;
            case 0x3754B0u: goto label_3754b0;
            case 0x3754B4u: goto label_3754b4;
            case 0x3754B8u: goto label_3754b8;
            case 0x3754BCu: goto label_3754bc;
            case 0x3754C0u: goto label_3754c0;
            case 0x3754C4u: goto label_3754c4;
            case 0x3754C8u: goto label_3754c8;
            case 0x3754CCu: goto label_3754cc;
            case 0x3754D0u: goto label_3754d0;
            case 0x3754D4u: goto label_3754d4;
            case 0x3754D8u: goto label_3754d8;
            case 0x3754DCu: goto label_3754dc;
            case 0x3754E0u: goto label_3754e0;
            case 0x3754E4u: goto label_3754e4;
            case 0x3754E8u: goto label_3754e8;
            case 0x3754ECu: goto label_3754ec;
            case 0x3754F0u: goto label_3754f0;
            case 0x3754F4u: goto label_3754f4;
            case 0x3754F8u: goto label_3754f8;
            case 0x3754FCu: goto label_3754fc;
            case 0x375500u: goto label_375500;
            case 0x375504u: goto label_375504;
            case 0x375508u: goto label_375508;
            case 0x37550Cu: goto label_37550c;
            case 0x375510u: goto label_375510;
            case 0x375514u: goto label_375514;
            case 0x375518u: goto label_375518;
            case 0x37551Cu: goto label_37551c;
            case 0x375520u: goto label_375520;
            case 0x375524u: goto label_375524;
            case 0x375528u: goto label_375528;
            case 0x37552Cu: goto label_37552c;
            case 0x375530u: goto label_375530;
            case 0x375534u: goto label_375534;
            case 0x375538u: goto label_375538;
            case 0x37553Cu: goto label_37553c;
            case 0x375540u: goto label_375540;
            case 0x375544u: goto label_375544;
            case 0x375548u: goto label_375548;
            case 0x37554Cu: goto label_37554c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3754DCu; }
            if (ctx->pc != 0x3754DCu) { return; }
        }
    }
    ctx->pc = 0x3754DCu;
label_3754dc:
    // 0x3754dc: 0x24040001
    ctx->pc = 0x3754dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_3754e0:
    // 0x3754e0: 0x3c03003f
    ctx->pc = 0x3754e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63 << 16));
label_3754e4:
    // 0x3754e4: 0xa2040198
    ctx->pc = 0x3754e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 4));
label_3754e8:
    // 0x3754e8: 0x2463a380
    ctx->pc = 0x3754e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943616));
label_3754ec:
    // 0x3754ec: 0x92050003
    ctx->pc = 0x3754ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3754f0:
    // 0x3754f0: 0x52180
    ctx->pc = 0x3754f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 6));
label_3754f4:
    // 0x3754f4: 0x852021
    ctx->pc = 0x3754f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3754f8:
    // 0x3754f8: 0x420c0
    ctx->pc = 0x3754f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_3754fc:
    // 0x3754fc: 0x852021
    ctx->pc = 0x3754fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_375500:
    // 0x375500: 0x42080
    ctx->pc = 0x375500u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_375504:
    // 0x375504: 0x642021
    ctx->pc = 0x375504u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_375508:
    // 0x375508: 0x80830000
    ctx->pc = 0x375508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_37550c:
    // 0x37550c: 0x1060000a
label_375510:
    if (ctx->pc == 0x375510u) {
        ctx->pc = 0x375514u;
        goto label_375514;
    }
    ctx->pc = 0x37550Cu;
    {
        const bool branch_taken_0x37550c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37550c) {
            ctx->pc = 0x375538u;
            goto label_375538;
        }
    }
    ctx->pc = 0x375514u;
label_375514:
    // 0x375514: 0x92050b98
    ctx->pc = 0x375514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2968)));
label_375518:
    // 0x375518: 0x3c020038
    ctx->pc = 0x375518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_37551c:
    // 0x37551c: 0x24426330
    ctx->pc = 0x37551cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25392));
label_375520:
    // 0x375520: 0x200302d
    ctx->pc = 0x375520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375524:
    // 0x375524: 0x51880
    ctx->pc = 0x375524u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_375528:
    // 0x375528: 0x651821
    ctx->pc = 0x375528u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37552c:
    // 0x37552c: 0x31880
    ctx->pc = 0x37552cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_375530:
    // 0x375530: 0xc0dcfd0
label_375534:
    if (ctx->pc == 0x375534u) {
        ctx->pc = 0x375534u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x375538u;
        goto label_375538;
    }
    ctx->pc = 0x375530u;
    SET_GPR_U32(ctx, 31, 0x375538u);
    ctx->pc = 0x375534u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x373F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00373F40_0x373f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375538u; }
    }
    if (ctx->pc != 0x375538u) { return; }
    ctx->pc = 0x375538u;
label_375538:
    // 0x375538: 0xdfbf0010
    ctx->pc = 0x375538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37553c:
    // 0x37553c: 0x7bb00000
    ctx->pc = 0x37553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375540:
    // 0x375540: 0x3e00008
label_375544:
    if (ctx->pc == 0x375544u) {
        ctx->pc = 0x375544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x375548u;
        goto label_375548;
    }
    ctx->pc = 0x375540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3753D0u: goto label_3753d0;
            case 0x3753D4u: goto label_3753d4;
            case 0x3753D8u: goto label_3753d8;
            case 0x3753DCu: goto label_3753dc;
            case 0x3753E0u: goto label_3753e0;
            case 0x3753E4u: goto label_3753e4;
            case 0x3753E8u: goto label_3753e8;
            case 0x3753ECu: goto label_3753ec;
            case 0x3753F0u: goto label_3753f0;
            case 0x3753F4u: goto label_3753f4;
            case 0x3753F8u: goto label_3753f8;
            case 0x3753FCu: goto label_3753fc;
            case 0x375400u: goto label_375400;
            case 0x375404u: goto label_375404;
            case 0x375408u: goto label_375408;
            case 0x37540Cu: goto label_37540c;
            case 0x375410u: goto label_375410;
            case 0x375414u: goto label_375414;
            case 0x375418u: goto label_375418;
            case 0x37541Cu: goto label_37541c;
            case 0x375420u: goto label_375420;
            case 0x375424u: goto label_375424;
            case 0x375428u: goto label_375428;
            case 0x37542Cu: goto label_37542c;
            case 0x375430u: goto label_375430;
            case 0x375434u: goto label_375434;
            case 0x375438u: goto label_375438;
            case 0x37543Cu: goto label_37543c;
            case 0x375440u: goto label_375440;
            case 0x375444u: goto label_375444;
            case 0x375448u: goto label_375448;
            case 0x37544Cu: goto label_37544c;
            case 0x375450u: goto label_375450;
            case 0x375454u: goto label_375454;
            case 0x375458u: goto label_375458;
            case 0x37545Cu: goto label_37545c;
            case 0x375460u: goto label_375460;
            case 0x375464u: goto label_375464;
            case 0x375468u: goto label_375468;
            case 0x37546Cu: goto label_37546c;
            case 0x375470u: goto label_375470;
            case 0x375474u: goto label_375474;
            case 0x375478u: goto label_375478;
            case 0x37547Cu: goto label_37547c;
            case 0x375480u: goto label_375480;
            case 0x375484u: goto label_375484;
            case 0x375488u: goto label_375488;
            case 0x37548Cu: goto label_37548c;
            case 0x375490u: goto label_375490;
            case 0x375494u: goto label_375494;
            case 0x375498u: goto label_375498;
            case 0x37549Cu: goto label_37549c;
            case 0x3754A0u: goto label_3754a0;
            case 0x3754A4u: goto label_3754a4;
            case 0x3754A8u: goto label_3754a8;
            case 0x3754ACu: goto label_3754ac;
            case 0x3754B0u: goto label_3754b0;
            case 0x3754B4u: goto label_3754b4;
            case 0x3754B8u: goto label_3754b8;
            case 0x3754BCu: goto label_3754bc;
            case 0x3754C0u: goto label_3754c0;
            case 0x3754C4u: goto label_3754c4;
            case 0x3754C8u: goto label_3754c8;
            case 0x3754CCu: goto label_3754cc;
            case 0x3754D0u: goto label_3754d0;
            case 0x3754D4u: goto label_3754d4;
            case 0x3754D8u: goto label_3754d8;
            case 0x3754DCu: goto label_3754dc;
            case 0x3754E0u: goto label_3754e0;
            case 0x3754E4u: goto label_3754e4;
            case 0x3754E8u: goto label_3754e8;
            case 0x3754ECu: goto label_3754ec;
            case 0x3754F0u: goto label_3754f0;
            case 0x3754F4u: goto label_3754f4;
            case 0x3754F8u: goto label_3754f8;
            case 0x3754FCu: goto label_3754fc;
            case 0x375500u: goto label_375500;
            case 0x375504u: goto label_375504;
            case 0x375508u: goto label_375508;
            case 0x37550Cu: goto label_37550c;
            case 0x375510u: goto label_375510;
            case 0x375514u: goto label_375514;
            case 0x375518u: goto label_375518;
            case 0x37551Cu: goto label_37551c;
            case 0x375520u: goto label_375520;
            case 0x375524u: goto label_375524;
            case 0x375528u: goto label_375528;
            case 0x37552Cu: goto label_37552c;
            case 0x375530u: goto label_375530;
            case 0x375534u: goto label_375534;
            case 0x375538u: goto label_375538;
            case 0x37553Cu: goto label_37553c;
            case 0x375540u: goto label_375540;
            case 0x375544u: goto label_375544;
            case 0x375548u: goto label_375548;
            case 0x37554Cu: goto label_37554c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375548u;
label_375548:
    // 0x375548: 0x0
    ctx->pc = 0x375548u;
    // NOP
label_37554c:
    // 0x37554c: 0x0
    ctx->pc = 0x37554cu;
    // NOP
}
