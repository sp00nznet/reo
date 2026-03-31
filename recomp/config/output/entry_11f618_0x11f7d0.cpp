#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11f618
// Address: 0x11f618 - 0x11f7d0
void entry_11f618_0x11f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f618u;

    // 0x11f618: 0x3c020021
    ctx->pc = 0x11f618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11f61c: 0x3c030021
    ctx->pc = 0x11f61cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11f620: 0x3c040026
    ctx->pc = 0x11f620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11f624: 0xac40b408
    ctx->pc = 0x11f624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947848), GPR_U32(ctx, 0));
    // 0x11f628: 0xac60b40c
    ctx->pc = 0x11f628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947852), GPR_U32(ctx, 0));
    // 0x11f62c: 0x24841d08
    ctx->pc = 0x11f62cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7432));
    // 0x11f630: 0x282d
    ctx->pc = 0x11f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f634: 0x8041f1a
    ctx->pc = 0x11F634u;
    ctx->pc = 0x11F638u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x11F63Cu;
    // 0x11f63c: 0x0
    ctx->pc = 0x11f63cu;
    // NOP
    // 0x11f640: 0x27bdffb0
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f644: 0xffb10010
    ctx->pc = 0x11f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f648: 0xffb00000
    ctx->pc = 0x11f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f64c: 0xa0882d
    ctx->pc = 0x11f64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f650: 0xffb30030
    ctx->pc = 0x11f650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11f654: 0xffb20020
    ctx->pc = 0x11f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f658: 0xffbf0040
    ctx->pc = 0x11f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f65c: 0xc047598
    ctx->pc = 0x11F65Cu;
    SET_GPR_U32(ctx, 31, 0x11F664u);
    ctx->pc = 0x11F660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F664u; }
    }
    if (ctx->pc != 0x11F664u) { return; }
    ctx->pc = 0x11F664u;
    // 0x11f664: 0x3c030021
    ctx->pc = 0x11f664u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11f668: 0x3c050021
    ctx->pc = 0x11f668u;
    SET_GPR_U32(ctx, 5, ((uint32_t)33 << 16));
    // 0x11f66c: 0x8c73b408
    ctx->pc = 0x11f66cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 4294947848)));
    // 0x11f670: 0x40902d
    ctx->pc = 0x11f670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f674: 0xacb1b40c
    ctx->pc = 0x11f674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294947852), GPR_U32(ctx, 17));
    // 0x11f678: 0x200202d
    ctx->pc = 0x11f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f67c: 0xac70b408
    ctx->pc = 0x11f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947848), GPR_U32(ctx, 16));
    // 0x11f680: 0x113100
    ctx->pc = 0x11f680u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 4));
    // 0x11f684: 0xc041f1a
    ctx->pc = 0x11F684u;
    SET_GPR_U32(ctx, 31, 0x11F68Cu);
    ctx->pc = 0x11F688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F68Cu; }
    }
    if (ctx->pc != 0x11F68Cu) { return; }
    ctx->pc = 0x11F68Cu;
    // 0x11f68c: 0x12400004
    ctx->pc = 0x11F68Cu;
    {
        const bool branch_taken_0x11f68c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F690u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f68c) {
            ctx->pc = 0x11F6A0u;
            goto label_11f6a0;
        }
    }
    ctx->pc = 0x11F694u;
    // 0x11f694: 0xc0475ae
    ctx->pc = 0x11F694u;
    SET_GPR_U32(ctx, 31, 0x11F69Cu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F69Cu; }
    }
    if (ctx->pc != 0x11F69Cu) { return; }
    ctx->pc = 0x11F69Cu;
    // 0x11f69c: 0x260102d
    ctx->pc = 0x11f69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11f6a0:
    // 0x11f6a0: 0xdfbf0040
    ctx->pc = 0x11f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f6a4: 0xdfb30030
    ctx->pc = 0x11f6a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f6a8: 0xdfb20020
    ctx->pc = 0x11f6a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f6ac: 0xdfb10010
    ctx->pc = 0x11f6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f6b0: 0xdfb00000
    ctx->pc = 0x11f6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f6b4: 0x3e00008
    ctx->pc = 0x11F6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F6B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F6A0u: goto label_11f6a0;
            case 0x11F704u: goto label_11f704;
            case 0x11F714u: goto label_11f714;
            case 0x11F72Cu: goto label_11f72c;
            case 0x11F758u: goto label_11f758;
            case 0x11F75Cu: goto label_11f75c;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7BCu: goto label_11f7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F6BCu;
    // 0x11f6bc: 0x0
    ctx->pc = 0x11f6bcu;
    // NOP
    // 0x11f6c0: 0x27bdffb0
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f6c4: 0xffb30030
    ctx->pc = 0x11f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11f6c8: 0xffb20020
    ctx->pc = 0x11f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f6cc: 0xc0982d
    ctx->pc = 0x11f6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6d0: 0xffb00000
    ctx->pc = 0x11f6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f6d4: 0xa0902d
    ctx->pc = 0x11f6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6d8: 0xffbf0040
    ctx->pc = 0x11f6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f6dc: 0x80802d
    ctx->pc = 0x11f6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6e0: 0x6010008
    ctx->pc = 0x11F6E0u;
    {
        const bool branch_taken_0x11f6e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11F6E4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x11f6e0) {
            ctx->pc = 0x11F704u;
            goto label_11f704;
        }
    }
    ctx->pc = 0x11F6E8u;
    // 0x11f6e8: 0x3c027fff
    ctx->pc = 0x11f6e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11f6ec: 0x3c030026
    ctx->pc = 0x11f6ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x11f6f0: 0x3442ffff
    ctx->pc = 0x11f6f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11f6f4: 0x24711d08
    ctx->pc = 0x11f6f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 7432));
    // 0x11f6f8: 0x2028024
    ctx->pc = 0x11f6f8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11f6fc: 0x10000005
    ctx->pc = 0x11F6FCu;
    {
        const bool branch_taken_0x11f6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F700u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x11f6fc) {
            ctx->pc = 0x11F714u;
            goto label_11f714;
        }
    }
    ctx->pc = 0x11F704u;
label_11f704:
    // 0x11f704: 0x3c020021
    ctx->pc = 0x11f704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11f708: 0x3c030021
    ctx->pc = 0x11f708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11f70c: 0x8c51b408
    ctx->pc = 0x11f70cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294947848)));
    // 0x11f710: 0x8c62b40c
    ctx->pc = 0x11f710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947852)));
label_11f714:
    // 0x11f714: 0x202102b
    ctx->pc = 0x11f714u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11f718: 0x14400004
    ctx->pc = 0x11F718u;
    {
        const bool branch_taken_0x11f718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f718) {
            ctx->pc = 0x11F72Cu;
            goto label_11f72c;
        }
    }
    ctx->pc = 0x11F720u;
    // 0x11f720: 0x3c028000
    ctx->pc = 0x11f720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11f724: 0x1000000d
    ctx->pc = 0x11F724u;
    {
        const bool branch_taken_0x11f724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F728u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 105));
        if (branch_taken_0x11f724) {
            ctx->pc = 0x11F75Cu;
            goto label_11f75c;
        }
    }
    ctx->pc = 0x11F72Cu;
label_11f72c:
    // 0x11f72c: 0xc047598
    ctx->pc = 0x11F72Cu;
    SET_GPR_U32(ctx, 31, 0x11F734u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F734u; }
    }
    if (ctx->pc != 0x11F734u) { return; }
    ctx->pc = 0x11F734u;
    // 0x11f734: 0x101900
    ctx->pc = 0x11f734u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x11f738: 0x711821
    ctx->pc = 0x11f738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11f73c: 0xac720000
    ctx->pc = 0x11f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x11f740: 0xac730004
    ctx->pc = 0x11f740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x11f744: 0x380202d
    ctx->pc = 0x11f744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f748: 0x10400003
    ctx->pc = 0x11F748u;
    {
        const bool branch_taken_0x11f748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F74Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x11f748) {
            ctx->pc = 0x11F758u;
            goto label_11f758;
        }
    }
    ctx->pc = 0x11F750u;
    // 0x11f750: 0xc0475ae
    ctx->pc = 0x11F750u;
    SET_GPR_U32(ctx, 31, 0x11F758u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F758u; }
    }
    if (ctx->pc != 0x11F758u) { return; }
    ctx->pc = 0x11F758u;
label_11f758:
    // 0x11f758: 0x102d
    ctx->pc = 0x11f758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f75c:
    // 0x11f75c: 0xdfbf0040
    ctx->pc = 0x11f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f760: 0xdfb30030
    ctx->pc = 0x11f760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f764: 0xdfb20020
    ctx->pc = 0x11f764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f768: 0xdfb10010
    ctx->pc = 0x11f768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f76c: 0xdfb00000
    ctx->pc = 0x11f76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f770: 0x3e00008
    ctx->pc = 0x11F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F6A0u: goto label_11f6a0;
            case 0x11F704u: goto label_11f704;
            case 0x11F714u: goto label_11f714;
            case 0x11F72Cu: goto label_11f72c;
            case 0x11F758u: goto label_11f758;
            case 0x11F75Cu: goto label_11f75c;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7BCu: goto label_11f7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F778u;
    // 0x11f778: 0x4830008
    ctx->pc = 0x11F778u;
    {
        const bool branch_taken_0x11f778 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11f778) {
            ctx->pc = 0x11F77Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
            ctx->pc = 0x11F79Cu;
            goto label_11f79c;
        }
    }
    ctx->pc = 0x11F780u;
    // 0x11f780: 0x3c027fff
    ctx->pc = 0x11f780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11f784: 0x3c030026
    ctx->pc = 0x11f784u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x11f788: 0x3442ffff
    ctx->pc = 0x11f788u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11f78c: 0x24651d08
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 7432));
    // 0x11f790: 0x822024
    ctx->pc = 0x11f790u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f794: 0x10000004
    ctx->pc = 0x11F794u;
    {
        const bool branch_taken_0x11f794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x11f794) {
            ctx->pc = 0x11F7A8u;
            goto label_11f7a8;
        }
    }
    ctx->pc = 0x11F79Cu;
label_11f79c:
    // 0x11f79c: 0x3c030021
    ctx->pc = 0x11f79cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11f7a0: 0x8c45b408
    ctx->pc = 0x11f7a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294947848)));
    // 0x11f7a4: 0x8c62b40c
    ctx->pc = 0x11f7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947852)));
label_11f7a8:
    // 0x11f7a8: 0x82102b
    ctx->pc = 0x11f7a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f7ac: 0x14400003
    ctx->pc = 0x11F7ACu;
    {
        const bool branch_taken_0x11f7ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F7B0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x11f7ac) {
            ctx->pc = 0x11F7BCu;
            goto label_11f7bc;
        }
    }
    ctx->pc = 0x11F7B4u;
    // 0x11f7b4: 0x3e00008
    ctx->pc = 0x11F7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F6A0u: goto label_11f6a0;
            case 0x11F704u: goto label_11f704;
            case 0x11F714u: goto label_11f714;
            case 0x11F72Cu: goto label_11f72c;
            case 0x11F758u: goto label_11f758;
            case 0x11F75Cu: goto label_11f75c;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7BCu: goto label_11f7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F7BCu;
label_11f7bc:
    // 0x11f7bc: 0x102d
    ctx->pc = 0x11f7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7c0: 0x651821
    ctx->pc = 0x11f7c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f7c4: 0x3e00008
    ctx->pc = 0x11F7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F6A0u: goto label_11f6a0;
            case 0x11F704u: goto label_11f704;
            case 0x11F714u: goto label_11f714;
            case 0x11F72Cu: goto label_11f72c;
            case 0x11F758u: goto label_11f758;
            case 0x11F75Cu: goto label_11f75c;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7BCu: goto label_11f7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0x0
    ctx->pc = 0x11f7ccu;
    // NOP
}
