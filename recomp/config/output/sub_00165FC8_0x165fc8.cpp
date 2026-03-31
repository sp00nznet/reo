#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165FC8
// Address: 0x165fc8 - 0x166128
void sub_00165FC8_0x165fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165fc8u;

    // 0x165fc8: 0x27bdffd0
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165fcc: 0xffb00010
    ctx->pc = 0x165fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x165fd0: 0xc0802d
    ctx->pc = 0x165fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fd4: 0xffb10018
    ctx->pc = 0x165fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x165fd8: 0xa0882d
    ctx->pc = 0x165fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fdc: 0x27a60004
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x165fe0: 0xffbf0020
    ctx->pc = 0x165fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165fe4: 0xc05db7a
    ctx->pc = 0x165FE4u;
    SET_GPR_U32(ctx, 31, 0x165FECu);
    ctx->pc = 0x165FE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176DE8_0x176de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FECu; }
    }
    if (ctx->pc != 0x165FECu) { return; }
    ctx->pc = 0x165FECu;
    // 0x165fec: 0x8fa50000
    ctx->pc = 0x165fecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ff0: 0x200202d
    ctx->pc = 0x165ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ff4: 0xc056ea0
    ctx->pc = 0x165FF4u;
    SET_GPR_U32(ctx, 31, 0x165FFCu);
    ctx->pc = 0x165FF8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FFCu; }
    }
    if (ctx->pc != 0x165FFCu) { return; }
    ctx->pc = 0x165FFCu;
    // 0x165ffc: 0xae220000
    ctx->pc = 0x165ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166000: 0xdfb00010
    ctx->pc = 0x166000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166004: 0xdfb10018
    ctx->pc = 0x166004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166008: 0xdfbf0020
    ctx->pc = 0x166008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16600c: 0x3e00008
    ctx->pc = 0x16600Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166110u: goto label_166110;
            case 0x166114u: goto label_166114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166014u;
    // 0x166014: 0x0
    ctx->pc = 0x166014u;
    // NOP
    // 0x166018: 0x27bdfff0
    ctx->pc = 0x166018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16601c: 0x3c05ff00
    ctx->pc = 0x16601cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166020: 0xffbf0000
    ctx->pc = 0x166020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166024: 0x34a50c03
    ctx->pc = 0x166024u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    // 0x166028: 0xdfbf0000
    ctx->pc = 0x166028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16602c: 0x805a704
    ctx->pc = 0x16602Cu;
    ctx->pc = 0x166030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166034u;
    // 0x166034: 0x0
    ctx->pc = 0x166034u;
    // NOP
    // 0x166038: 0x27bdfff0
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16603c: 0x3c05ff00
    ctx->pc = 0x16603cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166040: 0xffbf0000
    ctx->pc = 0x166040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166044: 0x34a50c03
    ctx->pc = 0x166044u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    // 0x166048: 0xdfbf0000
    ctx->pc = 0x166048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16604c: 0x805a704
    ctx->pc = 0x16604Cu;
    ctx->pc = 0x166050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166054u;
    // 0x166054: 0x0
    ctx->pc = 0x166054u;
    // NOP
    // 0x166058: 0x27bdfff0
    ctx->pc = 0x166058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16605c: 0x3c05ff00
    ctx->pc = 0x16605cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166060: 0xffbf0000
    ctx->pc = 0x166060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166064: 0x34a50c03
    ctx->pc = 0x166064u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    // 0x166068: 0xdfbf0000
    ctx->pc = 0x166068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16606c: 0x805a704
    ctx->pc = 0x16606Cu;
    ctx->pc = 0x166070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166074u;
    // 0x166074: 0x0
    ctx->pc = 0x166074u;
    // NOP
    // 0x166078: 0x27bdfff0
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16607c: 0x3c05ff00
    ctx->pc = 0x16607cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166080: 0xffbf0000
    ctx->pc = 0x166080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166084: 0x34a50c03
    ctx->pc = 0x166084u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    // 0x166088: 0xdfbf0000
    ctx->pc = 0x166088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16608c: 0x805a704
    ctx->pc = 0x16608Cu;
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166094u;
    // 0x166094: 0x0
    ctx->pc = 0x166094u;
    // NOP
    // 0x166098: 0x27bdffe0
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16609c: 0xffb00000
    ctx->pc = 0x16609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1660a0: 0xffb10008
    ctx->pc = 0x1660a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1660a4: 0xffbf0010
    ctx->pc = 0x1660a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1660a8: 0xc05984a
    ctx->pc = 0x1660A8u;
    SET_GPR_U32(ctx, 31, 0x1660B0u);
    ctx->pc = 0x1660ACu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166128_0x166128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660B0u; }
    }
    if (ctx->pc != 0x1660B0u) { return; }
    ctx->pc = 0x1660B0u;
    // 0x1660b0: 0x40302d
    ctx->pc = 0x1660b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660b4: 0x50c00017
    ctx->pc = 0x1660B4u;
    {
        const bool branch_taken_0x1660b4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1660b4) {
            ctx->pc = 0x1660B8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x166114u;
            goto label_166114;
        }
    }
    ctx->pc = 0x1660BCu;
    // 0x1660bc: 0x8e101b74
    ctx->pc = 0x1660bcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
    // 0x1660c0: 0x102d
    ctx->pc = 0x1660c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660c4: 0x8e030034
    ctx->pc = 0x1660c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1660c8: 0x14600011
    ctx->pc = 0x1660C8u;
    {
        const bool branch_taken_0x1660c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1660CCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1660c8) {
            ctx->pc = 0x166110u;
            goto label_166110;
        }
    }
    ctx->pc = 0x1660D0u;
    // 0x1660d0: 0x8cc30000
    ctx->pc = 0x1660d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1660d4: 0x1060000e
    ctx->pc = 0x1660D4u;
    {
        const bool branch_taken_0x1660d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1660D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1660d4) {
            ctx->pc = 0x166110u;
            goto label_166110;
        }
    }
    ctx->pc = 0x1660DCu;
    // 0x1660dc: 0x8cc70014
    ctx->pc = 0x1660dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1660e0: 0x8cc5000c
    ctx->pc = 0x1660e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1660e4: 0xc04a916
    ctx->pc = 0x1660E4u;
    SET_GPR_U32(ctx, 31, 0x1660ECu);
    ctx->pc = 0x1660E8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->pc = 0x12A458u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A458_0x12a458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660ECu; }
    }
    if (ctx->pc != 0x1660ECu) { return; }
    ctx->pc = 0x1660ECu;
    // 0x1660ec: 0x220202d
    ctx->pc = 0x1660ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660f0: 0xc04cc50
    ctx->pc = 0x1660F0u;
    SET_GPR_U32(ctx, 31, 0x1660F8u);
    ctx->pc = 0x1660F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133140_0x133140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660F8u; }
    }
    if (ctx->pc != 0x1660F8u) { return; }
    ctx->pc = 0x1660F8u;
    // 0x1660f8: 0x24020001
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1660fc: 0x3c030016
    ctx->pc = 0x1660fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)22 << 16));
    // 0x166100: 0xae020034
    ctx->pc = 0x166100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x166104: 0x246351c0
    ctx->pc = 0x166104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20928));
    // 0x166108: 0x102d
    ctx->pc = 0x166108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16610c: 0xae03003c
    ctx->pc = 0x16610cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_166110:
    // 0x166110: 0xdfb00000
    ctx->pc = 0x166110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166114:
    // 0x166114: 0xdfb10008
    ctx->pc = 0x166114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166118: 0xdfbf0010
    ctx->pc = 0x166118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16611c: 0x3e00008
    ctx->pc = 0x16611Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166110u: goto label_166110;
            case 0x166114u: goto label_166114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166124u;
    // 0x166124: 0x0
    ctx->pc = 0x166124u;
    // NOP
}
