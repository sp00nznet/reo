#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D5B0
// Address: 0x19d5b0 - 0x19d720
void sub_0019D5B0_0x19d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d5b0u;

    // 0x19d5b0: 0x2485ffff
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d5b4: 0x27bdffe0
    ctx->pc = 0x19d5b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d5b8: 0x518c0
    ctx->pc = 0x19d5b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d5bc: 0xffbf0010
    ctx->pc = 0x19d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d5c0: 0x3c020029
    ctx->pc = 0x19d5c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x19d5c4: 0x651823
    ctx->pc = 0x19d5c4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d5c8: 0x7fb00000
    ctx->pc = 0x19d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d5cc: 0x24424e80
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20096));
    // 0x19d5d0: 0x318c0
    ctx->pc = 0x19d5d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d5d4: 0x14800003
    ctx->pc = 0x19D5D4u;
    {
        const bool branch_taken_0x19d5d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D5D8u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19d5d4) {
            ctx->pc = 0x19D5E4u;
            goto label_19d5e4;
        }
    }
    ctx->pc = 0x19D5DCu;
    // 0x19d5dc: 0x1000001e
    ctx->pc = 0x19D5DCu;
    {
        const bool branch_taken_0x19d5dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D5E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d5dc) {
            ctx->pc = 0x19D658u;
            goto label_19d658;
        }
    }
    ctx->pc = 0x19D5E4u;
label_19d5e4:
    // 0x19d5e4: 0x2c810101
    ctx->pc = 0x19d5e4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 257));
    // 0x19d5e8: 0x14200003
    ctx->pc = 0x19D5E8u;
    {
        const bool branch_taken_0x19d5e8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D5ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d5e8) {
            ctx->pc = 0x19D5F8u;
            goto label_19d5f8;
        }
    }
    ctx->pc = 0x19D5F0u;
    // 0x19d5f0: 0x1000001a
    ctx->pc = 0x19D5F0u;
    {
        const bool branch_taken_0x19d5f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D5F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19d5f0) {
            ctx->pc = 0x19D65Cu;
            goto label_19d65c;
        }
    }
    ctx->pc = 0x19D5F8u;
label_19d5f8:
    // 0x19d5f8: 0x82020034
    ctx->pc = 0x19d5f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19d5fc: 0x14400003
    ctx->pc = 0x19D5FCu;
    {
        const bool branch_taken_0x19d5fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D600u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d5fc) {
            ctx->pc = 0x19D60Cu;
            goto label_19d60c;
        }
    }
    ctx->pc = 0x19D604u;
    // 0x19d604: 0x10000014
    ctx->pc = 0x19D604u;
    {
        const bool branch_taken_0x19d604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d604) {
            ctx->pc = 0x19D658u;
            goto label_19d658;
        }
    }
    ctx->pc = 0x19D60Cu;
label_19d60c:
    // 0x19d60c: 0xc0635b0
    ctx->pc = 0x19D60Cu;
    SET_GPR_U32(ctx, 31, 0x19D614u);
    ctx->pc = 0x18D6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D6C0_0x18d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D614u; }
    }
    if (ctx->pc != 0x19D614u) { return; }
    ctx->pc = 0x19D614u;
    // 0x19d614: 0xc067bb4
    ctx->pc = 0x19D614u;
    SET_GPR_U32(ctx, 31, 0x19D61Cu);
    ctx->pc = 0x19D618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EED0_0x19eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D61Cu; }
    }
    if (ctx->pc != 0x19D61Cu) { return; }
    ctx->pc = 0x19D61Cu;
    // 0x19d61c: 0x8e040024
    ctx->pc = 0x19d61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d620: 0x10800003
    ctx->pc = 0x19D620u;
    {
        const bool branch_taken_0x19d620 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d620) {
            ctx->pc = 0x19D630u;
            goto label_19d630;
        }
    }
    ctx->pc = 0x19D628u;
    // 0x19d628: 0xc063724
    ctx->pc = 0x19D628u;
    SET_GPR_U32(ctx, 31, 0x19D630u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D630u; }
    }
    if (ctx->pc != 0x19D630u) { return; }
    ctx->pc = 0x19D630u;
label_19d630:
    // 0x19d630: 0x200202d
    ctx->pc = 0x19d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d634: 0x282d
    ctx->pc = 0x19d634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d638: 0xc0636e0
    ctx->pc = 0x19D638u;
    SET_GPR_U32(ctx, 31, 0x19D640u);
    ctx->pc = 0x19D63Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D640u; }
    }
    if (ctx->pc != 0x19D640u) { return; }
    ctx->pc = 0x19D640u;
    // 0x19d640: 0x3c01002a
    ctx->pc = 0x19d640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d644: 0x24020001
    ctx->pc = 0x19d644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d648: 0x8c23bec0
    ctx->pc = 0x19d648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294950592)));
    // 0x19d64c: 0x2463ffff
    ctx->pc = 0x19d64cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d650: 0x3c01002a
    ctx->pc = 0x19d650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d654: 0xac23bec0
    ctx->pc = 0x19d654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950592), GPR_U32(ctx, 3));
label_19d658:
    // 0x19d658: 0xdfbf0010
    ctx->pc = 0x19d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d65c:
    // 0x19d65c: 0x7bb00000
    ctx->pc = 0x19d65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d660: 0x3e00008
    ctx->pc = 0x19D660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D5E4u: goto label_19d5e4;
            case 0x19D5F8u: goto label_19d5f8;
            case 0x19D60Cu: goto label_19d60c;
            case 0x19D630u: goto label_19d630;
            case 0x19D658u: goto label_19d658;
            case 0x19D65Cu: goto label_19d65c;
            case 0x19D6A4u: goto label_19d6a4;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6CCu: goto label_19d6cc;
            case 0x19D6E8u: goto label_19d6e8;
            case 0x19D710u: goto label_19d710;
            case 0x19D714u: goto label_19d714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D668u;
    // 0x19d668: 0x0
    ctx->pc = 0x19d668u;
    // NOP
    // 0x19d66c: 0x0
    ctx->pc = 0x19d66cu;
    // NOP
    // 0x19d670: 0x2485ffff
    ctx->pc = 0x19d670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19d674: 0x27bdffe0
    ctx->pc = 0x19d674u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d678: 0x518c0
    ctx->pc = 0x19d678u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d67c: 0xffbf0010
    ctx->pc = 0x19d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d680: 0x3c020029
    ctx->pc = 0x19d680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x19d684: 0x651823
    ctx->pc = 0x19d684u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d688: 0x7fb00000
    ctx->pc = 0x19d688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d68c: 0x24424e80
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20096));
    // 0x19d690: 0x318c0
    ctx->pc = 0x19d690u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d694: 0x14800003
    ctx->pc = 0x19D694u;
    {
        const bool branch_taken_0x19d694 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D698u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19d694) {
            ctx->pc = 0x19D6A4u;
            goto label_19d6a4;
        }
    }
    ctx->pc = 0x19D69Cu;
    // 0x19d69c: 0x1000001c
    ctx->pc = 0x19D69Cu;
    {
        const bool branch_taken_0x19d69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D6A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d69c) {
            ctx->pc = 0x19D710u;
            goto label_19d710;
        }
    }
    ctx->pc = 0x19D6A4u;
label_19d6a4:
    // 0x19d6a4: 0x2c810101
    ctx->pc = 0x19d6a4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 257));
    // 0x19d6a8: 0x14200003
    ctx->pc = 0x19D6A8u;
    {
        const bool branch_taken_0x19d6a8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D6ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d6a8) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D6B0u;
    // 0x19d6b0: 0x10000018
    ctx->pc = 0x19D6B0u;
    {
        const bool branch_taken_0x19d6b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D6B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19d6b0) {
            ctx->pc = 0x19D714u;
            goto label_19d714;
        }
    }
    ctx->pc = 0x19D6B8u;
label_19d6b8:
    // 0x19d6b8: 0x82020034
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19d6bc: 0x14400003
    ctx->pc = 0x19D6BCu;
    {
        const bool branch_taken_0x19d6bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D6C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d6bc) {
            ctx->pc = 0x19D6CCu;
            goto label_19d6cc;
        }
    }
    ctx->pc = 0x19D6C4u;
    // 0x19d6c4: 0x10000012
    ctx->pc = 0x19D6C4u;
    {
        const bool branch_taken_0x19d6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D6C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d6c4) {
            ctx->pc = 0x19D710u;
            goto label_19d710;
        }
    }
    ctx->pc = 0x19D6CCu;
label_19d6cc:
    // 0x19d6cc: 0xc067bb4
    ctx->pc = 0x19D6CCu;
    SET_GPR_U32(ctx, 31, 0x19D6D4u);
    ctx->pc = 0x19EED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EED0_0x19eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6D4u; }
    }
    if (ctx->pc != 0x19D6D4u) { return; }
    ctx->pc = 0x19D6D4u;
    // 0x19d6d4: 0x8e040024
    ctx->pc = 0x19d6d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19d6d8: 0x10800003
    ctx->pc = 0x19D6D8u;
    {
        const bool branch_taken_0x19d6d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d6d8) {
            ctx->pc = 0x19D6E8u;
            goto label_19d6e8;
        }
    }
    ctx->pc = 0x19D6E0u;
    // 0x19d6e0: 0xc063724
    ctx->pc = 0x19D6E0u;
    SET_GPR_U32(ctx, 31, 0x19D6E8u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6E8u; }
    }
    if (ctx->pc != 0x19D6E8u) { return; }
    ctx->pc = 0x19D6E8u;
label_19d6e8:
    // 0x19d6e8: 0x200202d
    ctx->pc = 0x19d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6ec: 0x282d
    ctx->pc = 0x19d6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6f0: 0xc0636e0
    ctx->pc = 0x19D6F0u;
    SET_GPR_U32(ctx, 31, 0x19D6F8u);
    ctx->pc = 0x19D6F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6F8u; }
    }
    if (ctx->pc != 0x19D6F8u) { return; }
    ctx->pc = 0x19D6F8u;
    // 0x19d6f8: 0x3c01002a
    ctx->pc = 0x19d6f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d6fc: 0x24020001
    ctx->pc = 0x19d6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d700: 0x8c23bec0
    ctx->pc = 0x19d700u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294950592)));
    // 0x19d704: 0x2463ffff
    ctx->pc = 0x19d704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d708: 0x3c01002a
    ctx->pc = 0x19d708u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19d70c: 0xac23bec0
    ctx->pc = 0x19d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950592), GPR_U32(ctx, 3));
label_19d710:
    // 0x19d710: 0xdfbf0010
    ctx->pc = 0x19d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d714:
    // 0x19d714: 0x7bb00000
    ctx->pc = 0x19d714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d718: 0x3e00008
    ctx->pc = 0x19D718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D71Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D5E4u: goto label_19d5e4;
            case 0x19D5F8u: goto label_19d5f8;
            case 0x19D60Cu: goto label_19d60c;
            case 0x19D630u: goto label_19d630;
            case 0x19D658u: goto label_19d658;
            case 0x19D65Cu: goto label_19d65c;
            case 0x19D6A4u: goto label_19d6a4;
            case 0x19D6B8u: goto label_19d6b8;
            case 0x19D6CCu: goto label_19d6cc;
            case 0x19D6E8u: goto label_19d6e8;
            case 0x19D710u: goto label_19d710;
            case 0x19D714u: goto label_19d714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D720u;
}
