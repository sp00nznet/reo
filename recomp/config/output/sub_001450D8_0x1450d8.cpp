#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001450D8
// Address: 0x1450d8 - 0x145228
void sub_001450D8_0x1450d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1450d8u;

    // 0x1450d8: 0x27bdff60
    ctx->pc = 0x1450d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1450dc: 0xffb30030
    ctx->pc = 0x1450dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1450e0: 0xffb20020
    ctx->pc = 0x1450e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1450e4: 0x80982d
    ctx->pc = 0x1450e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450e8: 0xffbe0080
    ctx->pc = 0x1450e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1450ec: 0xa0902d
    ctx->pc = 0x1450ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450f0: 0xffb70070
    ctx->pc = 0x1450f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1450f4: 0xc0f02d
    ctx->pc = 0x1450f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450f8: 0xffb60060
    ctx->pc = 0x1450f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1450fc: 0x120b82d
    ctx->pc = 0x1450fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145100: 0xffb50050
    ctx->pc = 0x145100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x145104: 0x140b02d
    ctx->pc = 0x145104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145108: 0xffb40040
    ctx->pc = 0x145108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x14510c: 0x160a82d
    ctx->pc = 0x14510cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145110: 0xffb10010
    ctx->pc = 0x145110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x145114: 0x100a02d
    ctx->pc = 0x145114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145118: 0xffb00000
    ctx->pc = 0x145118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14511c: 0xe0882d
    ctx->pc = 0x14511cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145120: 0xffbf0090
    ctx->pc = 0x145120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x145124: 0xc051552
    ctx->pc = 0x145124u;
    SET_GPR_U32(ctx, 31, 0x14512Cu);
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x145548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145548_0x145548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14512Cu; }
    }
    if (ctx->pc != 0x14512Cu) { return; }
    ctx->pc = 0x14512Cu;
    // 0x14512c: 0x12200007
    ctx->pc = 0x14512Cu;
    {
        const bool branch_taken_0x14512c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x145130u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14512c) {
            ctx->pc = 0x14514Cu;
            goto label_14514c;
        }
    }
    ctx->pc = 0x145134u;
    // 0x145134: 0x12000005
    ctx->pc = 0x145134u;
    {
        const bool branch_taken_0x145134 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x145138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145134) {
            ctx->pc = 0x14514Cu;
            goto label_14514c;
        }
    }
    ctx->pc = 0x14513Cu;
    // 0x14513c: 0xc05167a
    ctx->pc = 0x14513Cu;
    SET_GPR_U32(ctx, 31, 0x145144u);
    ctx->pc = 0x145140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145144u; }
    }
    if (ctx->pc != 0x145144u) { return; }
    ctx->pc = 0x145144u;
    // 0x145144: 0x10000002
    ctx->pc = 0x145144u;
    {
        const bool branch_taken_0x145144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145148u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145144) {
            ctx->pc = 0x145150u;
            goto label_145150;
        }
    }
    ctx->pc = 0x14514Cu;
label_14514c:
    // 0x14514c: 0x382d
    ctx->pc = 0x14514cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145150:
    // 0x145150: 0x220282d
    ctx->pc = 0x145150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145154: 0x200302d
    ctx->pc = 0x145154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145158: 0x240202d
    ctx->pc = 0x145158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14515c: 0xc0513ac
    ctx->pc = 0x14515Cu;
    SET_GPR_U32(ctx, 31, 0x145164u);
    ctx->pc = 0x145160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144EB0_0x144eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145164u; }
    }
    if (ctx->pc != 0x145164u) { return; }
    ctx->pc = 0x145164u;
    // 0x145164: 0x12e00005
    ctx->pc = 0x145164u;
    {
        const bool branch_taken_0x145164 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x145168u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145164) {
            ctx->pc = 0x14517Cu;
            goto label_14517c;
        }
    }
    ctx->pc = 0x14516Cu;
    // 0x14516c: 0xc051092
    ctx->pc = 0x14516Cu;
    SET_GPR_U32(ctx, 31, 0x145174u);
    ctx->pc = 0x145170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144248_0x144248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145174u; }
    }
    if (ctx->pc != 0x145174u) { return; }
    ctx->pc = 0x145174u;
    // 0x145174: 0xafc20000
    ctx->pc = 0x145174u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x145178: 0x260202d
    ctx->pc = 0x145178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14517c:
    // 0x14517c: 0xc051552
    ctx->pc = 0x14517Cu;
    SET_GPR_U32(ctx, 31, 0x145184u);
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x145548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145548_0x145548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145184u; }
    }
    if (ctx->pc != 0x145184u) { return; }
    ctx->pc = 0x145184u;
    // 0x145184: 0x12800007
    ctx->pc = 0x145184u;
    {
        const bool branch_taken_0x145184 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x145188u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145184) {
            ctx->pc = 0x1451A4u;
            goto label_1451a4;
        }
    }
    ctx->pc = 0x14518Cu;
    // 0x14518c: 0x12000005
    ctx->pc = 0x14518Cu;
    {
        const bool branch_taken_0x14518c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x145190u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14518c) {
            ctx->pc = 0x1451A4u;
            goto label_1451a4;
        }
    }
    ctx->pc = 0x145194u;
    // 0x145194: 0xc05167a
    ctx->pc = 0x145194u;
    SET_GPR_U32(ctx, 31, 0x14519Cu);
    ctx->pc = 0x145198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14519Cu; }
    }
    if (ctx->pc != 0x14519Cu) { return; }
    ctx->pc = 0x14519Cu;
    // 0x14519c: 0x10000002
    ctx->pc = 0x14519Cu;
    {
        const bool branch_taken_0x14519c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1451A0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14519c) {
            ctx->pc = 0x1451A8u;
            goto label_1451a8;
        }
    }
    ctx->pc = 0x1451A4u;
label_1451a4:
    // 0x1451a4: 0x382d
    ctx->pc = 0x1451a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1451a8:
    // 0x1451a8: 0x12c00004
    ctx->pc = 0x1451A8u;
    {
        const bool branch_taken_0x1451a8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1451ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1451a8) {
            ctx->pc = 0x1451BCu;
            goto label_1451bc;
        }
    }
    ctx->pc = 0x1451B0u;
    // 0x1451b0: 0x8e420004
    ctx->pc = 0x1451b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1451b4: 0x21043
    ctx->pc = 0x1451b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1451b8: 0xae420004
    ctx->pc = 0x1451b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1451bc:
    // 0x1451bc: 0x200302d
    ctx->pc = 0x1451bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451c0: 0x2a0402d
    ctx->pc = 0x1451c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451c4: 0xc0513ac
    ctx->pc = 0x1451C4u;
    SET_GPR_U32(ctx, 31, 0x1451CCu);
    ctx->pc = 0x1451C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x144EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144EB0_0x144eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451CCu; }
    }
    if (ctx->pc != 0x1451CCu) { return; }
    ctx->pc = 0x1451CCu;
    // 0x1451cc: 0x12c00004
    ctx->pc = 0x1451CCu;
    {
        const bool branch_taken_0x1451cc = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x1451cc) {
            ctx->pc = 0x1451E0u;
            goto label_1451e0;
        }
    }
    ctx->pc = 0x1451D4u;
    // 0x1451d4: 0x8e420004
    ctx->pc = 0x1451d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1451d8: 0x21040
    ctx->pc = 0x1451d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1451dc: 0xae420004
    ctx->pc = 0x1451dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1451e0:
    // 0x1451e0: 0x12e00005
    ctx->pc = 0x1451E0u;
    {
        const bool branch_taken_0x1451e0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x1451E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1451e0) {
            ctx->pc = 0x1451F8u;
            goto label_1451f8;
        }
    }
    ctx->pc = 0x1451E8u;
    // 0x1451e8: 0xc051092
    ctx->pc = 0x1451E8u;
    SET_GPR_U32(ctx, 31, 0x1451F0u);
    ctx->pc = 0x1451ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144248_0x144248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451F0u; }
    }
    if (ctx->pc != 0x1451F0u) { return; }
    ctx->pc = 0x1451F0u;
    // 0x1451f0: 0xafc20004
    ctx->pc = 0x1451f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1451f4: 0xdfbf0090
    ctx->pc = 0x1451f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1451f8:
    // 0x1451f8: 0xdfbe0080
    ctx->pc = 0x1451f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1451fc: 0xdfb70070
    ctx->pc = 0x1451fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145200: 0xdfb60060
    ctx->pc = 0x145200u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145204: 0xdfb50050
    ctx->pc = 0x145204u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145208: 0xdfb40040
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14520c: 0xdfb30030
    ctx->pc = 0x14520cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145210: 0xdfb20020
    ctx->pc = 0x145210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145214: 0xdfb10010
    ctx->pc = 0x145214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145218: 0xdfb00000
    ctx->pc = 0x145218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14521c: 0x3e00008
    ctx->pc = 0x14521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14514Cu: goto label_14514c;
            case 0x145150u: goto label_145150;
            case 0x14517Cu: goto label_14517c;
            case 0x1451A4u: goto label_1451a4;
            case 0x1451A8u: goto label_1451a8;
            case 0x1451BCu: goto label_1451bc;
            case 0x1451E0u: goto label_1451e0;
            case 0x1451F8u: goto label_1451f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145224u;
    // 0x145224: 0x0
    ctx->pc = 0x145224u;
    // NOP
}
