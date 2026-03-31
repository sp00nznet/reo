#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176F68
// Address: 0x176f68 - 0x1770f0
void sub_00176F68_0x176f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176f68u;

    // 0x176f68: 0x27bdffe0
    ctx->pc = 0x176f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176f6c: 0x248709a0
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 2464));
    // 0x176f70: 0xffbf0010
    ctx->pc = 0x176f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176f74: 0x8ce30038
    ctx->pc = 0x176f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x176f78: 0x14600005
    ctx->pc = 0x176F78u;
    {
        const bool branch_taken_0x176f78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x176F7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x176f78) {
            ctx->pc = 0x176F90u;
            goto label_176f90;
        }
    }
    ctx->pc = 0x176F80u;
    // 0x176f80: 0x8ce800b0
    ctx->pc = 0x176f80u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x176f84: 0xc05dc3c
    ctx->pc = 0x176F84u;
    SET_GPR_U32(ctx, 31, 0x176F8Cu);
    ctx->pc = 0x176F88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001770F0_0x1770f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F8Cu; }
    }
    if (ctx->pc != 0x176F8Cu) { return; }
    ctx->pc = 0x176F8Cu;
    // 0x176f8c: 0x8fa20000
    ctx->pc = 0x176f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_176f90:
    // 0x176f90: 0xdfbf0010
    ctx->pc = 0x176f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f94: 0x3e00008
    ctx->pc = 0x176F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176F90u: goto label_176f90;
            case 0x176FF0u: goto label_176ff0;
            case 0x177088u: goto label_177088;
            case 0x1770A0u: goto label_1770a0;
            case 0x1770B8u: goto label_1770b8;
            case 0x1770D0u: goto label_1770d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176F9Cu;
    // 0x176f9c: 0x0
    ctx->pc = 0x176f9cu;
    // NOP
    // 0x176fa0: 0x27bdffe0
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176fa4: 0xffb00000
    ctx->pc = 0x176fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176fa8: 0x80802d
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fac: 0xffb10008
    ctx->pc = 0x176facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176fb0: 0xc0882d
    ctx->pc = 0x176fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fb4: 0xffb20010
    ctx->pc = 0x176fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176fb8: 0xffbf0018
    ctx->pc = 0x176fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x176fbc: 0xc05a78c
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC4u; }
    }
    if (ctx->pc != 0x176FC4u) { return; }
    ctx->pc = 0x176FC4u;
    // 0x176fc4: 0x3c05ff00
    ctx->pc = 0x176fc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x176fc8: 0x26060cc0
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x176fcc: 0x202d
    ctx->pc = 0x176fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fd0: 0x10400007
    ctx->pc = 0x176FD0u;
    {
        const bool branch_taken_0x176fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176FD4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 293));
        if (branch_taken_0x176fd0) {
            ctx->pc = 0x176FF0u;
            goto label_176ff0;
        }
    }
    ctx->pc = 0x176FD8u;
    // 0x176fd8: 0xdfb00000
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fdc: 0xdfb10008
    ctx->pc = 0x176fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176fe0: 0xdfb20010
    ctx->pc = 0x176fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176fe4: 0xdfbf0018
    ctx->pc = 0x176fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176fe8: 0x805a704
    ctx->pc = 0x176FE8u;
    ctx->pc = 0x176FECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176FF0u;
label_176ff0:
    // 0x176ff0: 0x8cc3026c
    ctx->pc = 0x176ff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 620)));
    // 0x176ff4: 0x24040001
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176ff8: 0xacd10274
    ctx->pc = 0x176ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 628), GPR_U32(ctx, 17));
    // 0x176ffc: 0x24630001
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x177000: 0xacd20270
    ctx->pc = 0x177000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 624), GPR_U32(ctx, 18));
    // 0x177004: 0xacc3026c
    ctx->pc = 0x177004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 620), GPR_U32(ctx, 3));
    // 0x177008: 0xdfb10008
    ctx->pc = 0x177008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17700c: 0xae040044
    ctx->pc = 0x17700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x177010: 0xdfb20010
    ctx->pc = 0x177010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177014: 0xdfb00000
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177018: 0xdfbf0018
    ctx->pc = 0x177018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17701c: 0x3e00008
    ctx->pc = 0x17701Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176F90u: goto label_176f90;
            case 0x176FF0u: goto label_176ff0;
            case 0x177088u: goto label_177088;
            case 0x1770A0u: goto label_1770a0;
            case 0x1770B8u: goto label_1770b8;
            case 0x1770D0u: goto label_1770d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177024u;
    // 0x177024: 0x0
    ctx->pc = 0x177024u;
    // NOP
    // 0x177028: 0x27bdffd0
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17702c: 0xffb10008
    ctx->pc = 0x17702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177030: 0xe0882d
    ctx->pc = 0x177030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177034: 0xffb00000
    ctx->pc = 0x177034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177038: 0x80802d
    ctx->pc = 0x177038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17703c: 0xffb20010
    ctx->pc = 0x17703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177040: 0xc0902d
    ctx->pc = 0x177040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177044: 0xffb30018
    ctx->pc = 0x177044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177048: 0xa0982d
    ctx->pc = 0x177048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17704c: 0xffbf0020
    ctx->pc = 0x17704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177050: 0xc05a78c
    ctx->pc = 0x177050u;
    SET_GPR_U32(ctx, 31, 0x177058u);
    ctx->pc = 0x177054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177058u; }
    }
    if (ctx->pc != 0x177058u) { return; }
    ctx->pc = 0x177058u;
    // 0x177058: 0x202d
    ctx->pc = 0x177058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17705c: 0x3c05ff00
    ctx->pc = 0x17705cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x177060: 0x260609a0
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2464));
    // 0x177064: 0x10400008
    ctx->pc = 0x177064u;
    {
        const bool branch_taken_0x177064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177068u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 294));
        if (branch_taken_0x177064) {
            ctx->pc = 0x177088u;
            goto label_177088;
        }
    }
    ctx->pc = 0x17706Cu;
    // 0x17706c: 0xdfb00000
    ctx->pc = 0x17706cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177070: 0xdfb10008
    ctx->pc = 0x177070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177074: 0xdfb20010
    ctx->pc = 0x177074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177078: 0xdfb30018
    ctx->pc = 0x177078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17707c: 0xdfbf0020
    ctx->pc = 0x17707cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177080: 0x805a704
    ctx->pc = 0x177080u;
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x177088u;
label_177088:
    // 0x177088: 0x8cc30038
    ctx->pc = 0x177088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x17708c: 0x54600004
    ctx->pc = 0x17708Cu;
    {
        const bool branch_taken_0x17708c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17708c) {
            ctx->pc = 0x177090u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x1770A0u;
            goto label_1770a0;
        }
    }
    ctx->pc = 0x177094u;
    // 0x177094: 0x24030001
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177098: 0x1000000d
    ctx->pc = 0x177098u;
    {
        const bool branch_taken_0x177098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17709Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x177098) {
            ctx->pc = 0x1770D0u;
            goto label_1770d0;
        }
    }
    ctx->pc = 0x1770A0u;
label_1770a0:
    // 0x1770a0: 0x24030004
    ctx->pc = 0x1770a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1770a4: 0x50830004
    ctx->pc = 0x1770A4u;
    {
        const bool branch_taken_0x1770a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1770a4) {
            ctx->pc = 0x1770A8u;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 180)));
            ctx->pc = 0x1770B8u;
            goto label_1770b8;
        }
    }
    ctx->pc = 0x1770ACu;
    // 0x1770ac: 0x10000008
    ctx->pc = 0x1770ACu;
    {
        const bool branch_taken_0x1770ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1770B0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1770ac) {
            ctx->pc = 0x1770D0u;
            goto label_1770d0;
        }
    }
    ctx->pc = 0x1770B4u;
    // 0x1770b4: 0x0
    ctx->pc = 0x1770b4u;
    // NOP
label_1770b8:
    // 0x1770b8: 0x240302d
    ctx->pc = 0x1770b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770bc: 0x200202d
    ctx->pc = 0x1770bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770c0: 0x260282d
    ctx->pc = 0x1770c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1770c4: 0xc05dc3c
    ctx->pc = 0x1770C4u;
    SET_GPR_U32(ctx, 31, 0x1770CCu);
    ctx->pc = 0x1770C8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001770F0_0x1770f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1770CCu; }
    }
    if (ctx->pc != 0x1770CCu) { return; }
    ctx->pc = 0x1770CCu;
    // 0x1770cc: 0x102d
    ctx->pc = 0x1770ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1770d0:
    // 0x1770d0: 0xdfb00000
    ctx->pc = 0x1770d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1770d4: 0xdfb10008
    ctx->pc = 0x1770d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1770d8: 0xdfb20010
    ctx->pc = 0x1770d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1770dc: 0xdfb30018
    ctx->pc = 0x1770dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1770e0: 0xdfbf0020
    ctx->pc = 0x1770e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1770e4: 0x3e00008
    ctx->pc = 0x1770E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176F90u: goto label_176f90;
            case 0x176FF0u: goto label_176ff0;
            case 0x177088u: goto label_177088;
            case 0x1770A0u: goto label_1770a0;
            case 0x1770B8u: goto label_1770b8;
            case 0x1770D0u: goto label_1770d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1770ECu;
    // 0x1770ec: 0x0
    ctx->pc = 0x1770ecu;
    // NOP
}
