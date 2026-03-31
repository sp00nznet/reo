#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C64C0
// Address: 0x1c64c0 - 0x1c6670
void sub_001C64C0_0x1c64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c64c0u;

    // 0x1c64c0: 0x27bdffd0
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c64c4: 0xffbf0020
    ctx->pc = 0x1c64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c64c8: 0x7fb10010
    ctx->pc = 0x1c64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c64cc: 0x7fb00000
    ctx->pc = 0x1c64ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c64d0: 0x80882d
    ctx->pc = 0x1c64d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64d4: 0x8c9001b8
    ctx->pc = 0x1c64d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1c64d8: 0xc072250
    ctx->pc = 0x1C64D8u;
    SET_GPR_U32(ctx, 31, 0x1C64E0u);
    ctx->pc = 0x1C64DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x1C8940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8940_0x1c8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E0u; }
    }
    if (ctx->pc != 0x1C64E0u) { return; }
    ctx->pc = 0x1C64E0u;
    // 0x1c64e0: 0x8e2301bc
    ctx->pc = 0x1c64e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1c64e4: 0x200282d
    ctx->pc = 0x1c64e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64e8: 0x8e2201b8
    ctx->pc = 0x1c64e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1c64ec: 0x26240014
    ctx->pc = 0x1c64ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c64f0: 0xc072258
    ctx->pc = 0x1C64F0u;
    SET_GPR_U32(ctx, 31, 0x1C64F8u);
    ctx->pc = 0x1C64F4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1C8960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8960_0x1c8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64F8u; }
    }
    if (ctx->pc != 0x1C64F8u) { return; }
    ctx->pc = 0x1C64F8u;
    // 0x1c64f8: 0xdfbf0020
    ctx->pc = 0x1c64f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c64fc: 0x7bb10010
    ctx->pc = 0x1c64fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6500: 0x7bb00000
    ctx->pc = 0x1c6500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6504: 0x3e00008
    ctx->pc = 0x1C6504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6564u: goto label_1c6564;
            case 0x1C656Cu: goto label_1c656c;
            case 0x1C6574u: goto label_1c6574;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65BCu: goto label_1c65bc;
            case 0x1C65ECu: goto label_1c65ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C650Cu;
    // 0x1c650c: 0x0
    ctx->pc = 0x1c650cu;
    // NOP
    // 0x1c6510: 0x27bdffc0
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6514: 0xffbf0020
    ctx->pc = 0x1c6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6518: 0x27a5003f
    ctx->pc = 0x1c6518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 63));
    // 0x1c651c: 0x7fb10010
    ctx->pc = 0x1c651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6520: 0x80882d
    ctx->pc = 0x1c6520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6524: 0x7fb00000
    ctx->pc = 0x1c6524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6528: 0x26240028
    ctx->pc = 0x1c6528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 40));
    // 0x1c652c: 0x220302d
    ctx->pc = 0x1c652cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6530: 0xc072198
    ctx->pc = 0x1C6530u;
    SET_GPR_U32(ctx, 31, 0x1C6538u);
    ctx->pc = 0x1C6534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8660_0x1c8660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6538u; }
    }
    if (ctx->pc != 0x1C6538u) { return; }
    ctx->pc = 0x1C6538u;
    // 0x1c6538: 0x24030004
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c653c: 0x1043000d
    ctx->pc = 0x1C653Cu;
    {
        const bool branch_taken_0x1c653c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c653c) {
            ctx->pc = 0x1C6574u;
            goto label_1c6574;
        }
    }
    ctx->pc = 0x1C6544u;
    // 0x1c6544: 0x24030001
    ctx->pc = 0x1c6544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6548: 0x10430008
    ctx->pc = 0x1C6548u;
    {
        const bool branch_taken_0x1c6548 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c6548) {
            ctx->pc = 0x1C656Cu;
            goto label_1c656c;
        }
    }
    ctx->pc = 0x1C6550u;
    // 0x1c6550: 0x24030020
    ctx->pc = 0x1c6550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c6554: 0x10430003
    ctx->pc = 0x1C6554u;
    {
        const bool branch_taken_0x1c6554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c6554) {
            ctx->pc = 0x1C6564u;
            goto label_1c6564;
        }
    }
    ctx->pc = 0x1C655Cu;
    // 0x1c655c: 0x10000008
    ctx->pc = 0x1C655Cu;
    {
        const bool branch_taken_0x1c655c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c655c) {
            ctx->pc = 0x1C6580u;
            goto label_1c6580;
        }
    }
    ctx->pc = 0x1C6564u;
label_1c6564:
    // 0x1c6564: 0x10000006
    ctx->pc = 0x1C6564u;
    {
        const bool branch_taken_0x1c6564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6568u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x1c6564) {
            ctx->pc = 0x1C6580u;
            goto label_1c6580;
        }
    }
    ctx->pc = 0x1C656Cu;
label_1c656c:
    // 0x1c656c: 0x10000004
    ctx->pc = 0x1C656Cu;
    {
        const bool branch_taken_0x1c656c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6570u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c656c) {
            ctx->pc = 0x1C6580u;
            goto label_1c6580;
        }
    }
    ctx->pc = 0x1C6574u;
label_1c6574:
    // 0x1c6574: 0x93a2003f
    ctx->pc = 0x1c6574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x1c6578: 0x60802d
    ctx->pc = 0x1c6578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c657c: 0xa22201ce
    ctx->pc = 0x1c657cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 462), (uint8_t)GPR_U32(ctx, 2));
label_1c6580:
    // 0x1c6580: 0x16000006
    ctx->pc = 0x1C6580u;
    {
        const bool branch_taken_0x1c6580 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C6584u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6580) {
            ctx->pc = 0x1C659Cu;
            goto label_1c659c;
        }
    }
    ctx->pc = 0x1C6588u;
    // 0x1c6588: 0xc072254
    ctx->pc = 0x1C6588u;
    SET_GPR_U32(ctx, 31, 0x1C6590u);
    ctx->pc = 0x1C8950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8950_0x1c8950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6590u; }
    }
    if (ctx->pc != 0x1C6590u) { return; }
    ctx->pc = 0x1C6590u;
    // 0x1c6590: 0x10400002
    ctx->pc = 0x1C6590u;
    {
        const bool branch_taken_0x1c6590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6590) {
            ctx->pc = 0x1C659Cu;
            goto label_1c659c;
        }
    }
    ctx->pc = 0x1C6598u;
    // 0x1c6598: 0x24100080
    ctx->pc = 0x1c6598u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 128));
label_1c659c:
    // 0x1c659c: 0x962301e0
    ctx->pc = 0x1c659cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1c65a0: 0x962201e8
    ctx->pc = 0x1c65a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c65a4: 0x43082a
    ctx->pc = 0x1c65a4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1c65a8: 0x10200004
    ctx->pc = 0x1C65A8u;
    {
        const bool branch_taken_0x1c65a8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C65ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c65a8) {
            ctx->pc = 0x1C65BCu;
            goto label_1c65bc;
        }
    }
    ctx->pc = 0x1C65B0u;
    // 0x1c65b0: 0xa62001e0
    ctx->pc = 0x1c65b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 480), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c65b4: 0x24100040
    ctx->pc = 0x1c65b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c65b8: 0x200102d
    ctx->pc = 0x1c65b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c65bc:
    // 0x1c65bc: 0xdfbf0020
    ctx->pc = 0x1c65bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c65c0: 0x7bb10010
    ctx->pc = 0x1c65c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c65c4: 0x7bb00000
    ctx->pc = 0x1c65c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c65c8: 0x3e00008
    ctx->pc = 0x1C65C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6564u: goto label_1c6564;
            case 0x1C656Cu: goto label_1c656c;
            case 0x1C6574u: goto label_1c6574;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65BCu: goto label_1c65bc;
            case 0x1C65ECu: goto label_1c65ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C65D0u;
    // 0x1c65d0: 0x8c830004
    ctx->pc = 0x1c65d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c65d4: 0x8c82000c
    ctx->pc = 0x1c65d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c65d8: 0x62082a
    ctx->pc = 0x1c65d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c65dc: 0x10200003
    ctx->pc = 0x1C65DCu;
    {
        const bool branch_taken_0x1c65dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C65E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c65dc) {
            ctx->pc = 0x1C65ECu;
            goto label_1c65ec;
        }
    }
    ctx->pc = 0x1C65E4u;
    // 0x1c65e4: 0x8c820008
    ctx->pc = 0x1c65e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c65e8: 0x431021
    ctx->pc = 0x1c65e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c65ec:
    // 0x1c65ec: 0x3e00008
    ctx->pc = 0x1C65ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6564u: goto label_1c6564;
            case 0x1C656Cu: goto label_1c656c;
            case 0x1C6574u: goto label_1c6574;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65BCu: goto label_1c65bc;
            case 0x1C65ECu: goto label_1c65ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C65F4u;
    // 0x1c65f4: 0x0
    ctx->pc = 0x1c65f4u;
    // NOP
    // 0x1c65f8: 0x0
    ctx->pc = 0x1c65f8u;
    // NOP
    // 0x1c65fc: 0x0
    ctx->pc = 0x1c65fcu;
    // NOP
    // 0x1c6600: 0x80102d
    ctx->pc = 0x1c6600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6604: 0xa0202d
    ctx->pc = 0x1c6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6608: 0x8071688
    ctx->pc = 0x1C6608u;
    ctx->pc = 0x1C660Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5A20u;
    entry_1c5a20_0x1c5c60(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6610u;
    // 0x1c6610: 0x27bdffd0
    ctx->pc = 0x1c6610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6614: 0xffbf0020
    ctx->pc = 0x1c6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6618: 0x7fb10010
    ctx->pc = 0x1c6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c661c: 0x80882d
    ctx->pc = 0x1c661cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6620: 0xc072254
    ctx->pc = 0x1C6620u;
    SET_GPR_U32(ctx, 31, 0x1C6628u);
    ctx->pc = 0x1C6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1C8950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8950_0x1c8950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6628u; }
    }
    if (ctx->pc != 0x1C6628u) { return; }
    ctx->pc = 0x1C6628u;
    // 0x1c6628: 0x40802d
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c662c: 0x8e240008
    ctx->pc = 0x1c662cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6630: 0x8e220004
    ctx->pc = 0x1c6630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6634: 0x200302d
    ctx->pc = 0x1c6634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6638: 0xc041ed8
    ctx->pc = 0x1C6638u;
    SET_GPR_U32(ctx, 31, 0x1C6640u);
    ctx->pc = 0x1C663Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6640u; }
    }
    if (ctx->pc != 0x1C6640u) { return; }
    ctx->pc = 0x1C6640u;
    // 0x1c6640: 0xc072294
    ctx->pc = 0x1C6640u;
    SET_GPR_U32(ctx, 31, 0x1C6648u);
    ctx->pc = 0x1C6644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A50_0x1c8a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6648u; }
    }
    if (ctx->pc != 0x1C6648u) { return; }
    ctx->pc = 0x1C6648u;
    // 0x1c6648: 0xae30000c
    ctx->pc = 0x1c6648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1c664c: 0xdfbf0020
    ctx->pc = 0x1c664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6650: 0x7bb10010
    ctx->pc = 0x1c6650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6654: 0x7bb00000
    ctx->pc = 0x1c6654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6658: 0x3e00008
    ctx->pc = 0x1C6658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C665Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6564u: goto label_1c6564;
            case 0x1C656Cu: goto label_1c656c;
            case 0x1C6574u: goto label_1c6574;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C659Cu: goto label_1c659c;
            case 0x1C65BCu: goto label_1c65bc;
            case 0x1C65ECu: goto label_1c65ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6660u;
    // 0x1c6660: 0x8072200
    ctx->pc = 0x1C6660u;
    ctx->pc = 0x1C6664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 40));
    ctx->pc = 0x1C8800u;
    entry_1c8800_0x1c8810(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6668u;
    // 0x1c6668: 0x0
    ctx->pc = 0x1c6668u;
    // NOP
    // 0x1c666c: 0x0
    ctx->pc = 0x1c666cu;
    // NOP
}
