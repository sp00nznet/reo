#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144F38
// Address: 0x144f38 - 0x1450d8
void sub_00144F38_0x144f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144f38u;

    // 0x144f38: 0x27bdff50
    ctx->pc = 0x144f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x144f3c: 0x24020001
    ctx->pc = 0x144f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144f40: 0xffbe0090
    ctx->pc = 0x144f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x144f44: 0xffb70080
    ctx->pc = 0x144f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x144f48: 0xffb60070
    ctx->pc = 0x144f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x144f4c: 0xc0b82d
    ctx->pc = 0x144f4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f50: 0xffb50060
    ctx->pc = 0x144f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x144f54: 0xffb40050
    ctx->pc = 0x144f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x144f58: 0x160a82d
    ctx->pc = 0x144f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f5c: 0xffb30040
    ctx->pc = 0x144f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x144f60: 0xa0a02d
    ctx->pc = 0x144f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f64: 0xffb20030
    ctx->pc = 0x144f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x144f68: 0xffb00010
    ctx->pc = 0x144f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x144f6c: 0x80902d
    ctx->pc = 0x144f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f70: 0xffbf00a0
    ctx->pc = 0x144f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x144f74: 0x100802d
    ctx->pc = 0x144f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f78: 0xffb10020
    ctx->pc = 0x144f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x144f7c: 0xafa70000
    ctx->pc = 0x144f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x144f80: 0x8fb600b0
    ctx->pc = 0x144f80u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x144f84: 0x8fb300b8
    ctx->pc = 0x144f84u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x144f88: 0x1522000d
    ctx->pc = 0x144F88u;
    {
        const bool branch_taken_0x144f88 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x144F8Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x144f88) {
            ctx->pc = 0x144FC0u;
            goto label_144fc0;
        }
    }
    ctx->pc = 0x144F90u;
    // 0x144f90: 0x55400036
    ctx->pc = 0x144F90u;
    {
        const bool branch_taken_0x144f90 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x144f90) {
            ctx->pc = 0x144F94u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x14506Cu;
            goto label_14506c;
        }
    }
    ctx->pc = 0x144F98u;
    // 0x144f98: 0x56600034
    ctx->pc = 0x144F98u;
    {
        const bool branch_taken_0x144f98 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x144f98) {
            ctx->pc = 0x144F9Cu;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x14506Cu;
            goto label_14506c;
        }
    }
    ctx->pc = 0x144FA0u;
    // 0x144fa0: 0xc05167a
    ctx->pc = 0x144FA0u;
    SET_GPR_U32(ctx, 31, 0x144FA8u);
    ctx->pc = 0x144FA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FA8u; }
    }
    if (ctx->pc != 0x144FA8u) { return; }
    ctx->pc = 0x144FA8u;
    // 0x144fa8: 0x8fa40000
    ctx->pc = 0x144fa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144fac: 0x101880
    ctx->pc = 0x144facu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x144fb0: 0x641821
    ctx->pc = 0x144fb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144fb4: 0xac620008
    ctx->pc = 0x144fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x144fb8: 0x1000002b
    ctx->pc = 0x144FB8u;
    {
        const bool branch_taken_0x144fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144FBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x144fb8) {
            ctx->pc = 0x145068u;
            goto label_145068;
        }
    }
    ctx->pc = 0x144FC0u;
label_144fc0:
    // 0x144fc0: 0x240202d
    ctx->pc = 0x144fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fc4: 0xc05167a
    ctx->pc = 0x144FC4u;
    SET_GPR_U32(ctx, 31, 0x144FCCu);
    ctx->pc = 0x144FC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FCCu; }
    }
    if (ctx->pc != 0x144FCCu) { return; }
    ctx->pc = 0x144FCCu;
    // 0x144fcc: 0x1088c0
    ctx->pc = 0x144fccu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 3));
    // 0x144fd0: 0x8fa30000
    ctx->pc = 0x144fd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144fd4: 0x108080
    ctx->pc = 0x144fd4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x144fd8: 0x2912821
    ctx->pc = 0x144fd8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x144fdc: 0x240202d
    ctx->pc = 0x144fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fe0: 0x2038021
    ctx->pc = 0x144fe0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x144fe4: 0x2e0302d
    ctx->pc = 0x144fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fe8: 0xae020000
    ctx->pc = 0x144fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144fec: 0x2a0382d
    ctx->pc = 0x144fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ff0: 0x2c0402d
    ctx->pc = 0x144ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ff4: 0x260482d
    ctx->pc = 0x144ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ff8: 0x3c0502d
    ctx->pc = 0x144ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ffc: 0xc051436
    ctx->pc = 0x144FFCu;
    SET_GPR_U32(ctx, 31, 0x145004u);
    ctx->pc = 0x145000u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1450D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001450D8_0x1450d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145004u; }
    }
    if (ctx->pc != 0x145004u) { return; }
    ctx->pc = 0x145004u;
    // 0x145004: 0x240202d
    ctx->pc = 0x145004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145008: 0xc05167a
    ctx->pc = 0x145008u;
    SET_GPR_U32(ctx, 31, 0x145010u);
    ctx->pc = 0x14500Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145010u; }
    }
    if (ctx->pc != 0x145010u) { return; }
    ctx->pc = 0x145010u;
    // 0x145010: 0x26310010
    ctx->pc = 0x145010u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x145014: 0xae020008
    ctx->pc = 0x145014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x145018: 0x2912821
    ctx->pc = 0x145018u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x14501c: 0x240202d
    ctx->pc = 0x14501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145020: 0x2e0302d
    ctx->pc = 0x145020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145024: 0x2a0382d
    ctx->pc = 0x145024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145028: 0x2c0402d
    ctx->pc = 0x145028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14502c: 0x260482d
    ctx->pc = 0x14502cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145030: 0x3c0502d
    ctx->pc = 0x145030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145034: 0xdfbf00a0
    ctx->pc = 0x145034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x145038: 0xdfbe0090
    ctx->pc = 0x145038u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14503c: 0x582d
    ctx->pc = 0x14503cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145040: 0xdfb70080
    ctx->pc = 0x145040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145044: 0xdfb60070
    ctx->pc = 0x145044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145048: 0xdfb50060
    ctx->pc = 0x145048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14504c: 0xdfb40050
    ctx->pc = 0x14504cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145050: 0xdfb30040
    ctx->pc = 0x145050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145054: 0xdfb20030
    ctx->pc = 0x145054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145058: 0xdfb10020
    ctx->pc = 0x145058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14505c: 0xdfb00010
    ctx->pc = 0x14505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145060: 0x8051436
    ctx->pc = 0x145060u;
    ctx->pc = 0x145064u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1450D8u;
    sub_001450D8_0x1450d8(rdram, ctx, runtime); return;
    ctx->pc = 0x145068u;
label_145068:
    // 0x145068: 0x1080c0
    ctx->pc = 0x145068u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
label_14506c:
    // 0x14506c: 0x240202d
    ctx->pc = 0x14506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145070: 0x2908021
    ctx->pc = 0x145070u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x145074: 0x2e0302d
    ctx->pc = 0x145074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145078: 0x2a0382d
    ctx->pc = 0x145078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14507c: 0x2c0402d
    ctx->pc = 0x14507cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145080: 0x260482d
    ctx->pc = 0x145080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145084: 0x3c0502d
    ctx->pc = 0x145084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145088: 0x200282d
    ctx->pc = 0x145088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14508c: 0xc051436
    ctx->pc = 0x14508Cu;
    SET_GPR_U32(ctx, 31, 0x145094u);
    ctx->pc = 0x145090u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1450D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001450D8_0x1450d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145094u; }
    }
    if (ctx->pc != 0x145094u) { return; }
    ctx->pc = 0x145094u;
    // 0x145094: 0x8e020000
    ctx->pc = 0x145094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145098: 0x8e030004
    ctx->pc = 0x145098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14509c: 0xae020010
    ctx->pc = 0x14509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1450a0: 0xae030014
    ctx->pc = 0x1450a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1450a4: 0xdfbf00a0
    ctx->pc = 0x1450a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1450a8: 0xdfbe0090
    ctx->pc = 0x1450a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1450ac: 0xdfb70080
    ctx->pc = 0x1450acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1450b0: 0xdfb60070
    ctx->pc = 0x1450b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1450b4: 0xdfb50060
    ctx->pc = 0x1450b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1450b8: 0xdfb40050
    ctx->pc = 0x1450b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1450bc: 0xdfb30040
    ctx->pc = 0x1450bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1450c0: 0xdfb20030
    ctx->pc = 0x1450c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1450c4: 0xdfb10020
    ctx->pc = 0x1450c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1450c8: 0xdfb00010
    ctx->pc = 0x1450c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1450cc: 0x3e00008
    ctx->pc = 0x1450CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1450D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144FC0u: goto label_144fc0;
            case 0x145068u: goto label_145068;
            case 0x14506Cu: goto label_14506c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1450D4u;
    // 0x1450d4: 0x0
    ctx->pc = 0x1450d4u;
    // NOP
}
