#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E8254
// Address: 0x1e8254 - 0x1e8440
void sub_001E8254_0x1e8254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e8254u;

    // 0x1e8254: 0x27bdffd0
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8258: 0xffbe0020
    ctx->pc = 0x1e8258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e825c: 0xffbf0028
    ctx->pc = 0x1e825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e8260: 0x3a0f02d
    ctx->pc = 0x1e8260u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8264: 0xafc40000
    ctx->pc = 0x1e8264u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e8268: 0xafc00008
    ctx->pc = 0x1e8268u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1e826c: 0x8f828028
    ctx->pc = 0x1e826cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1e8270: 0xafc2000c
    ctx->pc = 0x1e8270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e8274: 0x8f828038
    ctx->pc = 0x1e8274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x1e8278: 0x24420001
    ctx->pc = 0x1e8278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e827c: 0xaf828038
    ctx->pc = 0x1e827cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934584), GPR_U32(ctx, 2));
    // 0x1e8280: 0x8f828038
    ctx->pc = 0x1e8280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x1e8284: 0x28420002
    ctx->pc = 0x1e8284u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1e8288: 0x10400045
    ctx->pc = 0x1E8288u;
    {
        const bool branch_taken_0x1e8288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8288) {
            ctx->pc = 0x1E83A0u;
            goto label_1e83a0;
        }
    }
    ctx->pc = 0x1E8290u;
    // 0x1e8290: 0x8fc20000
    ctx->pc = 0x1e8290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8294: 0x10400020
    ctx->pc = 0x1E8294u;
    {
        const bool branch_taken_0x1e8294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8294) {
            ctx->pc = 0x1E8318u;
            goto label_1e8318;
        }
    }
    ctx->pc = 0x1E829Cu;
    // 0x1e829c: 0xafc00004
    ctx->pc = 0x1e829cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e82a0:
    // 0x1e82a0: 0x8fc20004
    ctx->pc = 0x1e82a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e82a4: 0x21880
    ctx->pc = 0x1e82a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e82a8: 0x8fc20000
    ctx->pc = 0x1e82a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e82ac: 0x621021
    ctx->pc = 0x1e82acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e82b0: 0x8c420000
    ctx->pc = 0x1e82b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e82b4: 0x14400003
    ctx->pc = 0x1E82B4u;
    {
        const bool branch_taken_0x1e82b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e82b4) {
            ctx->pc = 0x1E82C4u;
            goto label_1e82c4;
        }
    }
    ctx->pc = 0x1E82BCu;
    // 0x1e82bc: 0x10000016
    ctx->pc = 0x1E82BCu;
    {
        const bool branch_taken_0x1e82bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e82bc) {
            ctx->pc = 0x1E8318u;
            goto label_1e8318;
        }
    }
    ctx->pc = 0x1E82C4u;
label_1e82c4:
    // 0x1e82c4: 0x8fc20004
    ctx->pc = 0x1e82c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e82c8: 0x21880
    ctx->pc = 0x1e82c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e82cc: 0x8fc20000
    ctx->pc = 0x1e82ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e82d0: 0x621021
    ctx->pc = 0x1e82d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e82d4: 0x8c440000
    ctx->pc = 0x1e82d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e82d8: 0x3c050026
    ctx->pc = 0x1e82d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1e82dc: 0x24a58008
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294934536));
    // 0x1e82e0: 0xc042b9e
    ctx->pc = 0x1E82E0u;
    SET_GPR_U32(ctx, 31, 0x1E82E8u);
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82E8u; }
    }
    if (ctx->pc != 0x1E82E8u) { return; }
    ctx->pc = 0x1E82E8u;
    // 0x1e82e8: 0x14400003
    ctx->pc = 0x1E82E8u;
    {
        const bool branch_taken_0x1e82e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e82e8) {
            ctx->pc = 0x1E82F8u;
            goto label_1e82f8;
        }
    }
    ctx->pc = 0x1E82F0u;
    // 0x1e82f0: 0x24020001
    ctx->pc = 0x1e82f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e82f4: 0xafc20008
    ctx->pc = 0x1e82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_1e82f8:
    // 0x1e82f8: 0x8fc20004
    ctx->pc = 0x1e82f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e82fc: 0x24420001
    ctx->pc = 0x1e82fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8300: 0xafc20004
    ctx->pc = 0x1e8300u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e8304: 0x8fc20004
    ctx->pc = 0x1e8304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8308: 0x24420001
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e830c: 0xafc20004
    ctx->pc = 0x1e830cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e8310: 0x1000ffe3
    ctx->pc = 0x1E8310u;
    {
        const bool branch_taken_0x1e8310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8310) {
            ctx->pc = 0x1E82A0u;
            goto label_1e82a0;
        }
    }
    ctx->pc = 0x1E8318u;
label_1e8318:
    // 0x1e8318: 0x202d
    ctx->pc = 0x1e8318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e831c: 0xc04042a
    ctx->pc = 0x1E831Cu;
    SET_GPR_U32(ctx, 31, 0x1E8324u);
    ctx->pc = 0x1010A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001010A8_0x1010a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8324u; }
    }
    if (ctx->pc != 0x1E8324u) { return; }
    ctx->pc = 0x1E8324u;
    // 0x1e8324: 0xafc20010
    ctx->pc = 0x1e8324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e8328: 0x8fc20010
    ctx->pc = 0x1e8328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e832c: 0x14400006
    ctx->pc = 0x1E832Cu;
    {
        const bool branch_taken_0x1e832c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e832c) {
            ctx->pc = 0x1E8348u;
            goto label_1e8348;
        }
    }
    ctx->pc = 0x1E8334u;
    // 0x1e8334: 0x3c040026
    ctx->pc = 0x1e8334u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1e8338: 0x24848018
    ctx->pc = 0x1e8338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934552));
    // 0x1e833c: 0x8fc50010
    ctx->pc = 0x1e833cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8340: 0xc045a12
    ctx->pc = 0x1E8340u;
    SET_GPR_U32(ctx, 31, 0x1E8348u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8348u; }
    }
    if (ctx->pc != 0x1E8348u) { return; }
    ctx->pc = 0x1E8348u;
label_1e8348:
    // 0x1e8348: 0x8fc20008
    ctx->pc = 0x1e8348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e834c: 0x10400007
    ctx->pc = 0x1E834Cu;
    {
        const bool branch_taken_0x1e834c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e834c) {
            ctx->pc = 0x1E836Cu;
            goto label_1e836c;
        }
    }
    ctx->pc = 0x1E8354u;
    // 0x1e8354: 0x24040002
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8358: 0xc04070e
    ctx->pc = 0x1E8358u;
    SET_GPR_U32(ctx, 31, 0x1E8360u);
    ctx->pc = 0x101C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101C38_0x101c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8360u; }
    }
    if (ctx->pc != 0x1E8360u) { return; }
    ctx->pc = 0x1E8360u;
    // 0x1e8360: 0xafc20010
    ctx->pc = 0x1e8360u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e8364: 0x10000005
    ctx->pc = 0x1E8364u;
    {
        const bool branch_taken_0x1e8364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8364) {
            ctx->pc = 0x1E837Cu;
            goto label_1e837c;
        }
    }
    ctx->pc = 0x1E836Cu;
label_1e836c:
    // 0x1e836c: 0x24040001
    ctx->pc = 0x1e836cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8370: 0xc04070e
    ctx->pc = 0x1E8370u;
    SET_GPR_U32(ctx, 31, 0x1E8378u);
    ctx->pc = 0x101C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101C38_0x101c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8378u; }
    }
    if (ctx->pc != 0x1E8378u) { return; }
    ctx->pc = 0x1E8378u;
    // 0x1e8378: 0xafc20010
    ctx->pc = 0x1e8378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1e837c:
    // 0x1e837c: 0x8fc20010
    ctx->pc = 0x1e837cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8380: 0x14400006
    ctx->pc = 0x1E8380u;
    {
        const bool branch_taken_0x1e8380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8380) {
            ctx->pc = 0x1E839Cu;
            goto label_1e839c;
        }
    }
    ctx->pc = 0x1E8388u;
    // 0x1e8388: 0x3c040026
    ctx->pc = 0x1e8388u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1e838c: 0x24848040
    ctx->pc = 0x1e838cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x1e8390: 0x8fc50010
    ctx->pc = 0x1e8390u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e8394: 0xc045a12
    ctx->pc = 0x1E8394u;
    SET_GPR_U32(ctx, 31, 0x1E839Cu);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E839Cu; }
    }
    if (ctx->pc != 0x1E839Cu) { return; }
    ctx->pc = 0x1E839Cu;
label_1e839c:
    // 0x1e839c: 0xff808030
    ctx->pc = 0x1e839cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934576), GPR_U64(ctx, 0));
label_1e83a0:
    // 0x1e83a0: 0xafc00004
    ctx->pc = 0x1e83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1e83a4:
    // 0x1e83a4: 0x8fc20004
    ctx->pc = 0x1e83a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e83a8: 0x28420040
    ctx->pc = 0x1e83a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1e83ac: 0x14400003
    ctx->pc = 0x1E83ACu;
    {
        const bool branch_taken_0x1e83ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e83ac) {
            ctx->pc = 0x1E83BCu;
            goto label_1e83bc;
        }
    }
    ctx->pc = 0x1E83B4u;
    // 0x1e83b4: 0x1000001c
    ctx->pc = 0x1E83B4u;
    {
        const bool branch_taken_0x1e83b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83b4) {
            ctx->pc = 0x1E8428u;
            goto label_1e8428;
        }
    }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x8f828038
    ctx->pc = 0x1e83bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x1e83c0: 0x28420002
    ctx->pc = 0x1e83c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1e83c4: 0x1040000a
    ctx->pc = 0x1E83C4u;
    {
        const bool branch_taken_0x1e83c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83c4) {
            ctx->pc = 0x1E83F0u;
            goto label_1e83f0;
        }
    }
    ctx->pc = 0x1E83CCu;
    // 0x1e83cc: 0x8fc3000c
    ctx->pc = 0x1e83ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e83d0: 0x2402ffff
    ctx->pc = 0x1e83d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e83d4: 0xa4620000
    ctx->pc = 0x1e83d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e83d8: 0x8fc3000c
    ctx->pc = 0x1e83d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e83dc: 0x2402ffff
    ctx->pc = 0x1e83dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e83e0: 0xa4620002
    ctx->pc = 0x1e83e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e83e4: 0x8fc3000c
    ctx->pc = 0x1e83e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e83e8: 0x2402ffff
    ctx->pc = 0x1e83e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e83ec: 0xa4620004
    ctx->pc = 0x1e83ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_1e83f0:
    // 0x1e83f0: 0x8fc2000c
    ctx->pc = 0x1e83f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e83f4: 0x24420008
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e83f8: 0x40202d
    ctx->pc = 0x1e83f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83fc: 0x282d
    ctx->pc = 0x1e83fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8400: 0xc07c417
    ctx->pc = 0x1E8400u;
    SET_GPR_U32(ctx, 31, 0x1E8408u);
    ctx->pc = 0x1F105Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F105C_0x1f105c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8408u; }
    }
    if (ctx->pc != 0x1E8408u) { return; }
    ctx->pc = 0x1E8408u;
    // 0x1e8408: 0x8fc2000c
    ctx->pc = 0x1e8408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e840c: 0x24420024
    ctx->pc = 0x1e840cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x1e8410: 0xafc2000c
    ctx->pc = 0x1e8410u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e8414: 0x8fc20004
    ctx->pc = 0x1e8414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e8418: 0x24420001
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e841c: 0xafc20004
    ctx->pc = 0x1e841cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e8420: 0x1000ffe0
    ctx->pc = 0x1E8420u;
    {
        const bool branch_taken_0x1e8420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8420) {
            ctx->pc = 0x1E83A4u;
            goto label_1e83a4;
        }
    }
    ctx->pc = 0x1E8428u;
label_1e8428:
    // 0x1e8428: 0x3c0e82d
    ctx->pc = 0x1e8428u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e842c: 0xdfbe0020
    ctx->pc = 0x1e842cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8430: 0xdfbf0028
    ctx->pc = 0x1e8430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8434: 0x27bd0030
    ctx->pc = 0x1e8434u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8438: 0x3e00008
    ctx->pc = 0x1E8438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E82A0u: goto label_1e82a0;
            case 0x1E82C4u: goto label_1e82c4;
            case 0x1E82F8u: goto label_1e82f8;
            case 0x1E8318u: goto label_1e8318;
            case 0x1E8348u: goto label_1e8348;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E837Cu: goto label_1e837c;
            case 0x1E839Cu: goto label_1e839c;
            case 0x1E83A0u: goto label_1e83a0;
            case 0x1E83A4u: goto label_1e83a4;
            case 0x1E83BCu: goto label_1e83bc;
            case 0x1E83F0u: goto label_1e83f0;
            case 0x1E8428u: goto label_1e8428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8440u;
}
