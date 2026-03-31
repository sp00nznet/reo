#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C82D0
// Address: 0x1c82d0 - 0x1c8440
void sub_001C82D0_0x1c82d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c82d0u;

    // 0x1c82d0: 0x27bdffe0
    ctx->pc = 0x1c82d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82d4: 0xffbf0010
    ctx->pc = 0x1c82d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c82d8: 0x7fb00000
    ctx->pc = 0x1c82d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c82dc: 0xc0719f4
    ctx->pc = 0x1C82DCu;
    SET_GPR_U32(ctx, 31, 0x1C82E4u);
    ctx->pc = 0x1C82E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C67D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67D0_0x1c67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E4u; }
    }
    if (ctx->pc != 0x1C82E4u) { return; }
    ctx->pc = 0x1C82E4u;
    // 0x1c82e4: 0x3c050034
    ctx->pc = 0x1c82e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1c82e8: 0x26040004
    ctx->pc = 0x1c82e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c82ec: 0x24a59200
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939136));
    // 0x1c82f0: 0xc07224c
    ctx->pc = 0x1C82F0u;
    SET_GPR_U32(ctx, 31, 0x1C82F8u);
    ctx->pc = 0x1C82F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82F8u; }
    }
    if (ctx->pc != 0x1C82F8u) { return; }
    ctx->pc = 0x1C82F8u;
    // 0x1c82f8: 0x3c050033
    ctx->pc = 0x1c82f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c82fc: 0x26040018
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c8300: 0x24a57200
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29184));
    // 0x1c8304: 0xc07224c
    ctx->pc = 0x1C8304u;
    SET_GPR_U32(ctx, 31, 0x1C830Cu);
    ctx->pc = 0x1C8308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C830Cu; }
    }
    if (ctx->pc != 0x1C830Cu) { return; }
    ctx->pc = 0x1C830Cu;
    // 0x1c830c: 0x3c050033
    ctx->pc = 0x1c830cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x1c8310: 0x2604002c
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c8314: 0x24a55200
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20992));
    // 0x1c8318: 0xc07224c
    ctx->pc = 0x1C8318u;
    SET_GPR_U32(ctx, 31, 0x1C8320u);
    ctx->pc = 0x1C831Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8320u; }
    }
    if (ctx->pc != 0x1C8320u) { return; }
    ctx->pc = 0x1C8320u;
    // 0x1c8320: 0xae000000
    ctx->pc = 0x1c8320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c8324: 0x2403ffff
    ctx->pc = 0x1c8324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8328: 0xae030040
    ctx->pc = 0x1c8328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1c832c: 0xa200007c
    ctx->pc = 0x1c832cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8330: 0xae00017c
    ctx->pc = 0x1c8330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x1c8334: 0xdfbf0010
    ctx->pc = 0x1c8334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8338: 0x7bb00000
    ctx->pc = 0x1c8338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c833c: 0x3e00008
    ctx->pc = 0x1C833Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A8u: goto label_1c83a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8344u;
    // 0x1c8344: 0x0
    ctx->pc = 0x1c8344u;
    // NOP
    // 0x1c8348: 0x0
    ctx->pc = 0x1c8348u;
    // NOP
    // 0x1c834c: 0x0
    ctx->pc = 0x1c834cu;
    // NOP
    // 0x1c8350: 0x27bdffe0
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8354: 0xffbf0010
    ctx->pc = 0x1c8354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8358: 0x7fb00000
    ctx->pc = 0x1c8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c835c: 0xc072214
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C8360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8364u; }
    }
    if (ctx->pc != 0x1C8364u) { return; }
    ctx->pc = 0x1C8364u;
    // 0x1c8364: 0xc072214
    ctx->pc = 0x1C8364u;
    SET_GPR_U32(ctx, 31, 0x1C836Cu);
    ctx->pc = 0x1C8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C836Cu; }
    }
    if (ctx->pc != 0x1C836Cu) { return; }
    ctx->pc = 0x1C836Cu;
    // 0x1c836c: 0xc072214
    ctx->pc = 0x1C836Cu;
    SET_GPR_U32(ctx, 31, 0x1C8374u);
    ctx->pc = 0x1C8370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8374u; }
    }
    if (ctx->pc != 0x1C8374u) { return; }
    ctx->pc = 0x1C8374u;
    // 0x1c8374: 0xc0722d4
    ctx->pc = 0x1C8374u;
    SET_GPR_U32(ctx, 31, 0x1C837Cu);
    ctx->pc = 0x1C8378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    ctx->pc = 0x1C8B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B50_0x1c8b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C837Cu; }
    }
    if (ctx->pc != 0x1C837Cu) { return; }
    ctx->pc = 0x1C837Cu;
    // 0x1c837c: 0x3c010034
    ctx->pc = 0x1c837cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8380: 0x182d
    ctx->pc = 0x1c8380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8384: 0x8022c6c0
    ctx->pc = 0x1c8384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c8388: 0xae020048
    ctx->pc = 0x1c8388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1c838c: 0x3c010034
    ctx->pc = 0x1c838cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8390: 0x8022c6c1
    ctx->pc = 0x1c8390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c8394: 0x10000004
    ctx->pc = 0x1C8394u;
    {
        const bool branch_taken_0x1c8394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8398u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x1c8394) {
            ctx->pc = 0x1C83A8u;
            goto label_1c83a8;
        }
    }
    ctx->pc = 0x1C839Cu;
label_1c839c:
    // 0x1c839c: 0x2021021
    ctx->pc = 0x1c839cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c83a0: 0xac43004c
    ctx->pc = 0x1c83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1c83a4: 0x24630001
    ctx->pc = 0x1c83a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1c83a8:
    // 0x1c83a8: 0x3c010034
    ctx->pc = 0x1c83a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c83ac: 0x8022c6c0
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c83b0: 0x62102a
    ctx->pc = 0x1c83b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c83b4: 0x1440fff9
    ctx->pc = 0x1C83B4u;
    {
        const bool branch_taken_0x1c83b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C83B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1c83b4) {
            ctx->pc = 0x1C839Cu;
            goto label_1c839c;
        }
    }
    ctx->pc = 0x1C83BCu;
    // 0x1c83bc: 0x3c010034
    ctx->pc = 0x1c83bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c83c0: 0x24020001
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c83c4: 0x8023c6c1
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c83c8: 0x3100b
    ctx->pc = 0x1c83c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1c83cc: 0xc072214
    ctx->pc = 0x1C83CCu;
    SET_GPR_U32(ctx, 31, 0x1C83D4u);
    ctx->pc = 0x1C83D0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83D4u; }
    }
    if (ctx->pc != 0x1C83D4u) { return; }
    ctx->pc = 0x1C83D4u;
    // 0x1c83d4: 0xe600006c
    ctx->pc = 0x1c83d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1c83d8: 0x3c010034
    ctx->pc = 0x1c83d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c83dc: 0xae000070
    ctx->pc = 0x1c83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1c83e0: 0x8025c6c1
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952641)));
    // 0x1c83e4: 0x3c010034
    ctx->pc = 0x1c83e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c83e8: 0x8026c6c0
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c83ec: 0x3c010034
    ctx->pc = 0x1c83ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c83f0: 0xc0719f8
    ctx->pc = 0x1C83F0u;
    SET_GPR_U32(ctx, 31, 0x1C83F8u);
    ctx->pc = 0x1C83F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294948500)));
    ctx->pc = 0x1C67E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67E0_0x1c67e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83F8u; }
    }
    if (ctx->pc != 0x1C83F8u) { return; }
    ctx->pc = 0x1C83F8u;
    // 0x1c83f8: 0xc0719f0
    ctx->pc = 0x1C83F8u;
    SET_GPR_U32(ctx, 31, 0x1C8400u);
    ctx->pc = 0x1C67C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67C0_0x1c67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8400u; }
    }
    if (ctx->pc != 0x1C8400u) { return; }
    ctx->pc = 0x1C8400u;
    // 0x1c8400: 0x24030003
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8404: 0xae030000
    ctx->pc = 0x1c8404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c8408: 0xdfbf0010
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c840c: 0x7bb00000
    ctx->pc = 0x1c840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8410: 0x3e00008
    ctx->pc = 0x1C8410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A8u: goto label_1c83a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8418u;
    // 0x1c8418: 0x0
    ctx->pc = 0x1c8418u;
    // NOP
    // 0x1c841c: 0x0
    ctx->pc = 0x1c841cu;
    // NOP
    // 0x1c8420: 0x3e00008
    ctx->pc = 0x1C8420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C839Cu: goto label_1c839c;
            case 0x1C83A8u: goto label_1c83a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8428u;
    // 0x1c8428: 0x0
    ctx->pc = 0x1c8428u;
    // NOP
    // 0x1c842c: 0x0
    ctx->pc = 0x1c842cu;
    // NOP
    // 0x1c8430: 0x80722e0
    ctx->pc = 0x1C8430u;
    ctx->pc = 0x1C8B80u;
    entry_1c8b80_0x1c8bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8438u;
    // 0x1c8438: 0x0
    ctx->pc = 0x1c8438u;
    // NOP
    // 0x1c843c: 0x0
    ctx->pc = 0x1c843cu;
    // NOP
}
