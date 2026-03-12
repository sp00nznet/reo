#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037BFB0
// Address: 0x37bfb0 - 0x37c170
void sub_0037BFB0_0x37bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37bfb0u;

    // 0x37bfb0: 0x27bdffe0
    ctx->pc = 0x37bfb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37bfb4: 0xffbf0010
    ctx->pc = 0x37bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37bfb8: 0x7fb00000
    ctx->pc = 0x37bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bfbc: 0x80802d
    ctx->pc = 0x37bfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37bfc0:
    // 0x37bfc0: 0x3c010057
    ctx->pc = 0x37bfc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37bfc4: 0x8423c810
    ctx->pc = 0x37bfc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37bfc8: 0x3182b
    ctx->pc = 0x37bfc8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x37bfcc: 0x38630001
    ctx->pc = 0x37bfccu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x37bfd0: 0x14600016
    ctx->pc = 0x37BFD0u;
    {
        const bool branch_taken_0x37bfd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37BFD4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37bfd0) {
            ctx->pc = 0x37C02Cu;
            goto label_37c02c;
        }
    }
    ctx->pc = 0x37BFD8u;
    // 0x37bfd8: 0xc0df080
    ctx->pc = 0x37BFD8u;
    SET_GPR_U32(ctx, 31, 0x37BFE0u);
    ctx->pc = 0x37C200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C200_0x37c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BFE0u; }
    }
    if (ctx->pc != 0x37BFE0u) { return; }
    ctx->pc = 0x37BFE0u;
    // 0x37bfe0: 0x1040001a
    ctx->pc = 0x37BFE0u;
    {
        const bool branch_taken_0x37bfe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37BFE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37bfe0) {
            ctx->pc = 0x37C04Cu;
            goto label_37c04c;
        }
    }
    ctx->pc = 0x37BFE8u;
    // 0x37bfe8: 0x3c01004c
    ctx->pc = 0x37bfe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37bfec: 0xa043000e
    ctx->pc = 0x37bfecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x37bff0: 0x8c23ade8
    ctx->pc = 0x37bff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946280)));
    // 0x37bff4: 0xac430008
    ctx->pc = 0x37bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x37bff8: 0x3c0100a4
    ctx->pc = 0x37bff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)164 << 16));
    // 0x37bffc: 0x8c430008
    ctx->pc = 0x37bffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37c000: 0x3421c479
    ctx->pc = 0x37c000u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50297));
    // 0x37c004: 0x61082b
    ctx->pc = 0x37c004u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x37c008: 0x14200003
    ctx->pc = 0x37C008u;
    {
        const bool branch_taken_0x37c008 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c008) {
            ctx->pc = 0x37C018u;
            goto label_37c018;
        }
    }
    ctx->pc = 0x37C010u;
    // 0x37c010: 0x3c0300a4
    ctx->pc = 0x37c010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)164 << 16));
    // 0x37c014: 0x3463c478
    ctx->pc = 0x37c014u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50296));
label_37c018:
    // 0x37c018: 0xac430008
    ctx->pc = 0x37c018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x37c01c: 0x24030009
    ctx->pc = 0x37c01cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x37c020: 0xa450000c
    ctx->pc = 0x37c020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x37c024: 0x10000009
    ctx->pc = 0x37C024u;
    {
        const bool branch_taken_0x37c024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C028u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x37c024) {
            ctx->pc = 0x37C04Cu;
            goto label_37c04c;
        }
    }
    ctx->pc = 0x37C02Cu;
label_37c02c:
    // 0x37c02c: 0x8023bb88
    ctx->pc = 0x37c02cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c030: 0x28610009
    ctx->pc = 0x37c030u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 9));
    // 0x37c034: 0x10200005
    ctx->pc = 0x37C034u;
    {
        const bool branch_taken_0x37c034 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x37c034) {
            ctx->pc = 0x37C04Cu;
            goto label_37c04c;
        }
    }
    ctx->pc = 0x37C03Cu;
    // 0x37c03c: 0xc0df0ec
    ctx->pc = 0x37C03Cu;
    SET_GPR_U32(ctx, 31, 0x37C044u);
    ctx->pc = 0x37C3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C3B0_0x37c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C044u; }
    }
    if (ctx->pc != 0x37C044u) { return; }
    ctx->pc = 0x37C044u;
    // 0x37c044: 0x1440ffde
    ctx->pc = 0x37C044u;
    {
        const bool branch_taken_0x37c044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c044) {
            ctx->pc = 0x37BFC0u;
            goto label_37bfc0;
        }
    }
    ctx->pc = 0x37C04Cu;
label_37c04c:
    // 0x37c04c: 0xdfbf0010
    ctx->pc = 0x37c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c050: 0x7bb00000
    ctx->pc = 0x37c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c054: 0x3e00008
    ctx->pc = 0x37C054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37BFC0u: goto label_37bfc0;
            case 0x37C018u: goto label_37c018;
            case 0x37C02Cu: goto label_37c02c;
            case 0x37C04Cu: goto label_37c04c;
            case 0x37C084u: goto label_37c084;
            case 0x37C104u: goto label_37c104;
            case 0x37C12Cu: goto label_37c12c;
            case 0x37C14Cu: goto label_37c14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C05Cu;
    // 0x37c05c: 0x0
    ctx->pc = 0x37c05cu;
    // NOP
    // 0x37c060: 0x27bdffb0
    ctx->pc = 0x37c060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37c064: 0xffbf0040
    ctx->pc = 0x37c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37c068: 0x7fb30030
    ctx->pc = 0x37c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37c06c: 0x7fb20020
    ctx->pc = 0x37c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37c070: 0x80982d
    ctx->pc = 0x37c070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c074: 0x7fb10010
    ctx->pc = 0x37c074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c078: 0xa0902d
    ctx->pc = 0x37c078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c07c: 0x7fb00000
    ctx->pc = 0x37c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c080: 0xc0882d
    ctx->pc = 0x37c080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37c084:
    // 0x37c084: 0x3c010057
    ctx->pc = 0x37c084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c088: 0x8423c810
    ctx->pc = 0x37c088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c08c: 0x3182b
    ctx->pc = 0x37c08cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x37c090: 0x38630001
    ctx->pc = 0x37c090u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x37c094: 0x14600025
    ctx->pc = 0x37C094u;
    {
        const bool branch_taken_0x37c094 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C098u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c094) {
            ctx->pc = 0x37C12Cu;
            goto label_37c12c;
        }
    }
    ctx->pc = 0x37C09Cu;
    // 0x37c09c: 0x3c030039
    ctx->pc = 0x37c09cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x37c0a0: 0x3264ffff
    ctx->pc = 0x37c0a0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 65535));
    // 0x37c0a4: 0x24639d30
    ctx->pc = 0x37c0a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294942000));
    // 0x37c0a8: 0x3c010057
    ctx->pc = 0x37c0a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c0ac: 0x648021
    ctx->pc = 0x37c0acu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37c0b0: 0x8024bb88
    ctx->pc = 0x37c0b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c0b4: 0x82030000
    ctx->pc = 0x37c0b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37c0b8: 0x64082a
    ctx->pc = 0x37c0b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x37c0bc: 0x14200023
    ctx->pc = 0x37C0BCu;
    {
        const bool branch_taken_0x37c0bc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c0bc) {
            ctx->pc = 0x37C14Cu;
            goto label_37c14c;
        }
    }
    ctx->pc = 0x37C0C4u;
    // 0x37c0c4: 0xc0df080
    ctx->pc = 0x37C0C4u;
    SET_GPR_U32(ctx, 31, 0x37C0CCu);
    ctx->pc = 0x37C200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C200_0x37c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C0CCu; }
    }
    if (ctx->pc != 0x37C0CCu) { return; }
    ctx->pc = 0x37C0CCu;
    // 0x37c0cc: 0x1040001f
    ctx->pc = 0x37C0CCu;
    {
        const bool branch_taken_0x37c0cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C0D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x37c0cc) {
            ctx->pc = 0x37C14Cu;
            goto label_37c14c;
        }
    }
    ctx->pc = 0x37C0D4u;
    // 0x37c0d4: 0x3c01004c
    ctx->pc = 0x37c0d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37c0d8: 0xa043000e
    ctx->pc = 0x37c0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c0dc: 0x8c23ade8
    ctx->pc = 0x37c0dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946280)));
    // 0x37c0e0: 0xac430008
    ctx->pc = 0x37c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x37c0e4: 0x3c0100a4
    ctx->pc = 0x37c0e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)164 << 16));
    // 0x37c0e8: 0x8c430008
    ctx->pc = 0x37c0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37c0ec: 0x3421c479
    ctx->pc = 0x37c0ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50297));
    // 0x37c0f0: 0x61082b
    ctx->pc = 0x37c0f0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x37c0f4: 0x14200003
    ctx->pc = 0x37C0F4u;
    {
        const bool branch_taken_0x37c0f4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c0f4) {
            ctx->pc = 0x37C104u;
            goto label_37c104;
        }
    }
    ctx->pc = 0x37C0FCu;
    // 0x37c0fc: 0x3c0300a4
    ctx->pc = 0x37c0fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)164 << 16));
    // 0x37c100: 0x3463c478
    ctx->pc = 0x37c100u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50296));
label_37c104:
    // 0x37c104: 0xac430008
    ctx->pc = 0x37c104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x37c108: 0x3c010032
    ctx->pc = 0x37c108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37c10c: 0xa453000c
    ctx->pc = 0x37c10cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x37c110: 0x82030000
    ctx->pc = 0x37c110u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37c114: 0xa043000f
    ctx->pc = 0x37c114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c118: 0xa4520012
    ctx->pc = 0x37c118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x37c11c: 0xa4510014
    ctx->pc = 0x37c11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 17));
    // 0x37c120: 0x942343dc
    ctx->pc = 0x37c120u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x37c124: 0x10000009
    ctx->pc = 0x37C124u;
    {
        const bool branch_taken_0x37c124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C128u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x37c124) {
            ctx->pc = 0x37C14Cu;
            goto label_37c14c;
        }
    }
    ctx->pc = 0x37C12Cu;
label_37c12c:
    // 0x37c12c: 0x8023bb88
    ctx->pc = 0x37c12cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294949768)));
    // 0x37c130: 0x28610009
    ctx->pc = 0x37c130u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 9));
    // 0x37c134: 0x10200005
    ctx->pc = 0x37C134u;
    {
        const bool branch_taken_0x37c134 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x37c134) {
            ctx->pc = 0x37C14Cu;
            goto label_37c14c;
        }
    }
    ctx->pc = 0x37C13Cu;
    // 0x37c13c: 0xc0df0ec
    ctx->pc = 0x37C13Cu;
    SET_GPR_U32(ctx, 31, 0x37C144u);
    ctx->pc = 0x37C3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C3B0_0x37c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C144u; }
    }
    if (ctx->pc != 0x37C144u) { return; }
    ctx->pc = 0x37C144u;
    // 0x37c144: 0x1440ffcf
    ctx->pc = 0x37C144u;
    {
        const bool branch_taken_0x37c144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c144) {
            ctx->pc = 0x37C084u;
            goto label_37c084;
        }
    }
    ctx->pc = 0x37C14Cu;
label_37c14c:
    // 0x37c14c: 0xdfbf0040
    ctx->pc = 0x37c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c150: 0x7bb30030
    ctx->pc = 0x37c150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c154: 0x7bb20020
    ctx->pc = 0x37c154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c158: 0x7bb10010
    ctx->pc = 0x37c158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c15c: 0x7bb00000
    ctx->pc = 0x37c15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c160: 0x3e00008
    ctx->pc = 0x37C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37BFC0u: goto label_37bfc0;
            case 0x37C018u: goto label_37c018;
            case 0x37C02Cu: goto label_37c02c;
            case 0x37C04Cu: goto label_37c04c;
            case 0x37C084u: goto label_37c084;
            case 0x37C104u: goto label_37c104;
            case 0x37C12Cu: goto label_37c12c;
            case 0x37C14Cu: goto label_37c14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C168u;
    // 0x37c168: 0x0
    ctx->pc = 0x37c168u;
    // NOP
    // 0x37c16c: 0x0
    ctx->pc = 0x37c16cu;
    // NOP
}
