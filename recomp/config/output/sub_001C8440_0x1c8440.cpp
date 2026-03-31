#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8440
// Address: 0x1c8440 - 0x1c85c0
void sub_001C8440_0x1c8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8440u;

    // 0x1c8440: 0x27bdffe0
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8444: 0xffbf0010
    ctx->pc = 0x1c8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8448: 0x7fb00000
    ctx->pc = 0x1c8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c844c: 0xc072214
    ctx->pc = 0x1C844Cu;
    SET_GPR_U32(ctx, 31, 0x1C8454u);
    ctx->pc = 0x1C8450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8454u; }
    }
    if (ctx->pc != 0x1C8454u) { return; }
    ctx->pc = 0x1C8454u;
    // 0x1c8454: 0xc602006c
    ctx->pc = 0x1c8454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8458: 0xc6010070
    ctx->pc = 0x1c8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c845c: 0x46020001
    ctx->pc = 0x1c845cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c8460: 0x46010041
    ctx->pc = 0x1c8460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8464: 0xe6010074
    ctx->pc = 0x1c8464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c8468: 0xc0722f0
    ctx->pc = 0x1C8468u;
    SET_GPR_U32(ctx, 31, 0x1C8470u);
    ctx->pc = 0x1C846Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->pc = 0x1C8BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8BC0_0x1c8bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8470u; }
    }
    if (ctx->pc != 0x1C8470u) { return; }
    ctx->pc = 0x1C8470u;
    // 0x1c8470: 0x24050002
    ctx->pc = 0x1c8470u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8474: 0x14450046
    ctx->pc = 0x1C8474u;
    {
        const bool branch_taken_0x1c8474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x1C8478u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c8474) {
            ctx->pc = 0x1C8590u;
            goto label_1c8590;
        }
    }
    ctx->pc = 0x1C847Cu;
    // 0x1c847c: 0x8e040000
    ctx->pc = 0x1c847cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8480: 0x24030005
    ctx->pc = 0x1c8480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8484: 0x10830048
    ctx->pc = 0x1C8484u;
    {
        const bool branch_taken_0x1c8484 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8488u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c8484) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C848Cu;
    // 0x1c848c: 0x10830046
    ctx->pc = 0x1C848Cu;
    {
        const bool branch_taken_0x1c848c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c848c) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C8494u;
    // 0x1c8494: 0x24030003
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8498: 0x10830037
    ctx->pc = 0x1C8498u;
    {
        const bool branch_taken_0x1c8498 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c8498) {
            ctx->pc = 0x1C8578u;
            goto label_1c8578;
        }
    }
    ctx->pc = 0x1C84A0u;
    // 0x1c84a0: 0x10850007
    ctx->pc = 0x1C84A0u;
    {
        const bool branch_taken_0x1c84a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x1C84A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c84a0) {
            ctx->pc = 0x1C84C0u;
            goto label_1c84c0;
        }
    }
    ctx->pc = 0x1C84A8u;
    // 0x1c84a8: 0x10830003
    ctx->pc = 0x1C84A8u;
    {
        const bool branch_taken_0x1c84a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c84a8) {
            ctx->pc = 0x1C84B8u;
            goto label_1c84b8;
        }
    }
    ctx->pc = 0x1C84B0u;
    // 0x1c84b0: 0x1000003e
    ctx->pc = 0x1C84B0u;
    {
        const bool branch_taken_0x1c84b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C84B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c84b0) {
            ctx->pc = 0x1C85ACu;
            goto label_1c85ac;
        }
    }
    ctx->pc = 0x1C84B8u;
label_1c84b8:
    // 0x1c84b8: 0x1000003b
    ctx->pc = 0x1C84B8u;
    {
        const bool branch_taken_0x1c84b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C84BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1c84b8) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C84C0u;
label_1c84c0:
    // 0x1c84c0: 0xc072410
    ctx->pc = 0x1C84C0u;
    SET_GPR_U32(ctx, 31, 0x1C84C8u);
    ctx->pc = 0x1C9040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9040_0x1c9040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84C8u; }
    }
    if (ctx->pc != 0x1C84C8u) { return; }
    ctx->pc = 0x1C84C8u;
    // 0x1c84c8: 0x24030003
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c84cc: 0x14430025
    ctx->pc = 0x1C84CCu;
    {
        const bool branch_taken_0x1c84cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C84D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1c84cc) {
            ctx->pc = 0x1C8564u;
            goto label_1c8564;
        }
    }
    ctx->pc = 0x1C84D4u;
    // 0x1c84d4: 0x3c010034
    ctx->pc = 0x1c84d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c84d8: 0x182d
    ctx->pc = 0x1c84d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84dc: 0x8022c6c0
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c84e0: 0xae020048
    ctx->pc = 0x1c84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1c84e4: 0x3c010034
    ctx->pc = 0x1c84e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c84e8: 0x8022c6c1
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c84ec: 0x10000004
    ctx->pc = 0x1C84ECu;
    {
        const bool branch_taken_0x1c84ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C84F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x1c84ec) {
            ctx->pc = 0x1C8500u;
            goto label_1c8500;
        }
    }
    ctx->pc = 0x1C84F4u;
label_1c84f4:
    // 0x1c84f4: 0x2021021
    ctx->pc = 0x1c84f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c84f8: 0xac43004c
    ctx->pc = 0x1c84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1c84fc: 0x24630001
    ctx->pc = 0x1c84fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1c8500:
    // 0x1c8500: 0x3c010034
    ctx->pc = 0x1c8500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8504: 0x8022c6c0
    ctx->pc = 0x1c8504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c8508: 0x62102a
    ctx->pc = 0x1c8508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c850c: 0x1440fff9
    ctx->pc = 0x1C850Cu;
    {
        const bool branch_taken_0x1c850c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8510u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1c850c) {
            ctx->pc = 0x1C84F4u;
            goto label_1c84f4;
        }
    }
    ctx->pc = 0x1C8514u;
    // 0x1c8514: 0x3c010034
    ctx->pc = 0x1c8514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8518: 0x24020001
    ctx->pc = 0x1c8518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c851c: 0x8023c6c1
    ctx->pc = 0x1c851cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c8520: 0x3100b
    ctx->pc = 0x1c8520u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1c8524: 0xc072214
    ctx->pc = 0x1C8524u;
    SET_GPR_U32(ctx, 31, 0x1C852Cu);
    ctx->pc = 0x1C8528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C852Cu; }
    }
    if (ctx->pc != 0x1C852Cu) { return; }
    ctx->pc = 0x1C852Cu;
    // 0x1c852c: 0xe600006c
    ctx->pc = 0x1c852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1c8530: 0x3c010034
    ctx->pc = 0x1c8530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8534: 0xae000070
    ctx->pc = 0x1c8534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1c8538: 0x8025c6c1
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c853c: 0x3c010034
    ctx->pc = 0x1c853cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8540: 0x8026c6c0
    ctx->pc = 0x1c8540u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c8544: 0x3c010034
    ctx->pc = 0x1c8544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8548: 0xc0719f8
    ctx->pc = 0x1C8548u;
    SET_GPR_U32(ctx, 31, 0x1C8550u);
    ctx->pc = 0x1C854Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294948500)));
    ctx->pc = 0x1C67E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67E0_0x1c67e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8550u; }
    }
    if (ctx->pc != 0x1C8550u) { return; }
    ctx->pc = 0x1C8550u;
    // 0x1c8550: 0xc0719f0
    ctx->pc = 0x1C8550u;
    SET_GPR_U32(ctx, 31, 0x1C8558u);
    ctx->pc = 0x1C67C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67C0_0x1c67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8558u; }
    }
    if (ctx->pc != 0x1C8558u) { return; }
    ctx->pc = 0x1C8558u;
    // 0x1c8558: 0x24030003
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c855c: 0x10000012
    ctx->pc = 0x1C855Cu;
    {
        const bool branch_taken_0x1c855c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8560u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1c855c) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C8564u;
label_1c8564:
    // 0x1c8564: 0x14430010
    ctx->pc = 0x1C8564u;
    {
        const bool branch_taken_0x1c8564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8564) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C856Cu;
    // 0x1c856c: 0x24030005
    ctx->pc = 0x1c856cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8570: 0x1000000d
    ctx->pc = 0x1C8570u;
    {
        const bool branch_taken_0x1c8570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8574u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1c8570) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C8578u;
label_1c8578:
    // 0x1c8578: 0xc071a90
    ctx->pc = 0x1C8578u;
    SET_GPR_U32(ctx, 31, 0x1C8580u);
    ctx->pc = 0x1C6A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A40_0x1c6a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8580u; }
    }
    if (ctx->pc != 0x1C8580u) { return; }
    ctx->pc = 0x1C8580u;
    // 0x1c8580: 0x10400009
    ctx->pc = 0x1C8580u;
    {
        const bool branch_taken_0x1c8580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8584u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c8580) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C8588u;
    // 0x1c8588: 0x10000007
    ctx->pc = 0x1C8588u;
    {
        const bool branch_taken_0x1c8588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C858Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1c8588) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C8590u;
label_1c8590:
    // 0x1c8590: 0x10430003
    ctx->pc = 0x1C8590u;
    {
        const bool branch_taken_0x1c8590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8594u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c8590) {
            ctx->pc = 0x1C85A0u;
            goto label_1c85a0;
        }
    }
    ctx->pc = 0x1C8598u;
    // 0x1c8598: 0x10000003
    ctx->pc = 0x1C8598u;
    {
        const bool branch_taken_0x1c8598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8598) {
            ctx->pc = 0x1C85A8u;
            goto label_1c85a8;
        }
    }
    ctx->pc = 0x1C85A0u;
label_1c85a0:
    // 0x1c85a0: 0xc071ef0
    ctx->pc = 0x1C85A0u;
    SET_GPR_U32(ctx, 31, 0x1C85A8u);
    ctx->pc = 0x1C85A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1C7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7BC0_0x1c7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85A8u; }
    }
    if (ctx->pc != 0x1C85A8u) { return; }
    ctx->pc = 0x1C85A8u;
label_1c85a8:
    // 0x1c85a8: 0xdfbf0010
    ctx->pc = 0x1c85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c85ac:
    // 0x1c85ac: 0x7bb00000
    ctx->pc = 0x1c85acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c85b0: 0x3e00008
    ctx->pc = 0x1C85B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C85B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C84B8u: goto label_1c84b8;
            case 0x1C84C0u: goto label_1c84c0;
            case 0x1C84F4u: goto label_1c84f4;
            case 0x1C8500u: goto label_1c8500;
            case 0x1C8564u: goto label_1c8564;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C8590u: goto label_1c8590;
            case 0x1C85A0u: goto label_1c85a0;
            case 0x1C85A8u: goto label_1c85a8;
            case 0x1C85ACu: goto label_1c85ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C85B8u;
    // 0x1c85b8: 0x0
    ctx->pc = 0x1c85b8u;
    // NOP
    // 0x1c85bc: 0x0
    ctx->pc = 0x1c85bcu;
    // NOP
}
