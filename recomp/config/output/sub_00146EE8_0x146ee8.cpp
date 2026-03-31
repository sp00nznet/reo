#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00146EE8
// Address: 0x146ee8 - 0x1470a0
void sub_00146EE8_0x146ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146ee8u;

    // 0x146ee8: 0x27bdff80
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x146eec: 0x24020002
    ctx->pc = 0x146eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x146ef0: 0xffb60060
    ctx->pc = 0x146ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x146ef4: 0xffb50050
    ctx->pc = 0x146ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x146ef8: 0xb02d
    ctx->pc = 0x146ef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146efc: 0xffb20020
    ctx->pc = 0x146efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x146f00: 0xc0a82d
    ctx->pc = 0x146f00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f04: 0xffb10010
    ctx->pc = 0x146f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x146f08: 0xffbf0070
    ctx->pc = 0x146f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x146f0c: 0x80882d
    ctx->pc = 0x146f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f10: 0xffb40040
    ctx->pc = 0x146f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x146f14: 0xffb30030
    ctx->pc = 0x146f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x146f18: 0xffb00000
    ctx->pc = 0x146f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146f1c: 0x8e23018c
    ctx->pc = 0x146f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x146f20: 0x14620005
    ctx->pc = 0x146F20u;
    {
        const bool branch_taken_0x146f20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x146F24u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146f20) {
            ctx->pc = 0x146F38u;
            goto label_146f38;
        }
    }
    ctx->pc = 0x146F28u;
    // 0x146f28: 0x240982d
    ctx->pc = 0x146f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f2c: 0x2a0a02d
    ctx->pc = 0x146f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f30: 0x10000003
    ctx->pc = 0x146F30u;
    {
        const bool branch_taken_0x146f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146F34u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x146f30) {
            ctx->pc = 0x146F40u;
            goto label_146f40;
        }
    }
    ctx->pc = 0x146F38u;
label_146f38:
    // 0x146f38: 0x2a0982d
    ctx->pc = 0x146f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f3c: 0x240a02d
    ctx->pc = 0x146f3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_146f40:
    // 0x146f40: 0x8e270870
    ctx->pc = 0x146f40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 2160)));
    // 0x146f44: 0x220202d
    ctx->pc = 0x146f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f48: 0x260282d
    ctx->pc = 0x146f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f4c: 0x24100001
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x146f50: 0x24e80020
    ctx->pc = 0x146f50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 32));
    // 0x146f54: 0x24e60010
    ctx->pc = 0x146f54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 16));
    // 0x146f58: 0xc051b18
    ctx->pc = 0x146F58u;
    SET_GPR_U32(ctx, 31, 0x146F60u);
    ctx->pc = 0x146F5Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24));
    ctx->pc = 0x146C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146C60_0x146c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F60u; }
    }
    if (ctx->pc != 0x146F60u) { return; }
    ctx->pc = 0x146F60u;
    // 0x146f60: 0x8e270870
    ctx->pc = 0x146f60u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 2160)));
    // 0x146f64: 0x220202d
    ctx->pc = 0x146f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f68: 0x280282d
    ctx->pc = 0x146f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f6c: 0x8ce20010
    ctx->pc = 0x146f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x146f70: 0x24e80038
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 56));
    // 0x146f74: 0x24e60028
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 40));
    // 0x146f78: 0xfe3000a0
    ctx->pc = 0x146f78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 16));
    // 0x146f7c: 0xae220098
    ctx->pc = 0x146f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x146f80: 0xc051b18
    ctx->pc = 0x146F80u;
    SET_GPR_U32(ctx, 31, 0x146F88u);
    ctx->pc = 0x146F84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 48));
    ctx->pc = 0x146C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146C60_0x146c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F88u; }
    }
    if (ctx->pc != 0x146F88u) { return; }
    ctx->pc = 0x146F88u;
    // 0x146f88: 0x8e270870
    ctx->pc = 0x146f88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 2160)));
    // 0x146f8c: 0x2c0402d
    ctx->pc = 0x146f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f90: 0x220202d
    ctx->pc = 0x146f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f94: 0x240282d
    ctx->pc = 0x146f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f98: 0x8ce30028
    ctx->pc = 0x146f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x146f9c: 0xfe3000a0
    ctx->pc = 0x146f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 16));
    // 0x146fa0: 0xae230098
    ctx->pc = 0x146fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x146fa4: 0xdce20020
    ctx->pc = 0x146fa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x146fa8: 0x8e66005c
    ctx->pc = 0x146fa8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x146fac: 0x481025
    ctx->pc = 0x146facu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x146fb0: 0xdce30038
    ctx->pc = 0x146fb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x146fb4: 0xae2600e4
    ctx->pc = 0x146fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 6));
    // 0x146fb8: 0xfce20020
    ctx->pc = 0x146fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x146fbc: 0x681825
    ctx->pc = 0x146fbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x146fc0: 0x8e660060
    ctx->pc = 0x146fc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x146fc4: 0xfce30038
    ctx->pc = 0x146fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x146fc8: 0xae2600e8
    ctx->pc = 0x146fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 6));
    // 0x146fcc: 0x8e620044
    ctx->pc = 0x146fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x146fd0: 0xae2200cc
    ctx->pc = 0x146fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x146fd4: 0x8e830048
    ctx->pc = 0x146fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x146fd8: 0xae2300d0
    ctx->pc = 0x146fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
    // 0x146fdc: 0x8e620050
    ctx->pc = 0x146fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x146fe0: 0xae2200d8
    ctx->pc = 0x146fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x146fe4: 0x8e830054
    ctx->pc = 0x146fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x146fe8: 0xc051a42
    ctx->pc = 0x146FE8u;
    SET_GPR_U32(ctx, 31, 0x146FF0u);
    ctx->pc = 0x146FECu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
    ctx->pc = 0x146908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146908_0x146908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FF0u; }
    }
    if (ctx->pc != 0x146FF0u) { return; }
    ctx->pc = 0x146FF0u;
    // 0x146ff0: 0x10400021
    ctx->pc = 0x146FF0u;
    {
        const bool branch_taken_0x146ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146FF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146ff0) {
            ctx->pc = 0x147078u;
            goto label_147078;
        }
    }
    ctx->pc = 0x146FF8u;
    // 0x146ff8: 0x8e430028
    ctx->pc = 0x146ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x146ffc: 0x1462001f
    ctx->pc = 0x146FFCu;
    {
        const bool branch_taken_0x146ffc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x147000u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x146ffc) {
            ctx->pc = 0x14707Cu;
            goto label_14707c;
        }
    }
    ctx->pc = 0x147004u;
    // 0x147004: 0x8ea20028
    ctx->pc = 0x147004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x147008: 0x1443001d
    ctx->pc = 0x147008u;
    {
        const bool branch_taken_0x147008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x14700Cu;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x147008) {
            ctx->pc = 0x147080u;
            goto label_147080;
        }
    }
    ctx->pc = 0x147010u;
    // 0x147010: 0x8e420010
    ctx->pc = 0x147010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x147014: 0x21040
    ctx->pc = 0x147014u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x147018: 0xae420010
    ctx->pc = 0x147018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x14701c: 0x8e2300c8
    ctx->pc = 0x14701cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x147020: 0x10600005
    ctx->pc = 0x147020u;
    {
        const bool branch_taken_0x147020 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x147024u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x147020) {
            ctx->pc = 0x147038u;
            goto label_147038;
        }
    }
    ctx->pc = 0x147028u;
    // 0x147028: 0xc051de8
    ctx->pc = 0x147028u;
    SET_GPR_U32(ctx, 31, 0x147030u);
    ctx->pc = 0x14702Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1477A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001477A0_0x1477a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147030u; }
    }
    if (ctx->pc != 0x147030u) { return; }
    ctx->pc = 0x147030u;
    // 0x147030: 0x10000004
    ctx->pc = 0x147030u;
    {
        const bool branch_taken_0x147030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x147034u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        if (branch_taken_0x147030) {
            ctx->pc = 0x147044u;
            goto label_147044;
        }
    }
    ctx->pc = 0x147038u;
label_147038:
    // 0x147038: 0xc051a6a
    ctx->pc = 0x147038u;
    SET_GPR_U32(ctx, 31, 0x147040u);
    ctx->pc = 0x14703Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1469A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001469A8_0x1469a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147040u; }
    }
    if (ctx->pc != 0x147040u) { return; }
    ctx->pc = 0x147040u;
    // 0x147040: 0x8e420010
    ctx->pc = 0x147040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_147044:
    // 0x147044: 0x220202d
    ctx->pc = 0x147044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147048: 0xdfbf0070
    ctx->pc = 0x147048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14704c: 0x21043
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x147050: 0xdfb60060
    ctx->pc = 0x147050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147054: 0xae420010
    ctx->pc = 0x147054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x147058: 0xdfb50050
    ctx->pc = 0x147058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14705c: 0xdfb40040
    ctx->pc = 0x14705cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147060: 0xdfb30030
    ctx->pc = 0x147060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147064: 0xdfb20020
    ctx->pc = 0x147064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147068: 0xdfb10010
    ctx->pc = 0x147068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14706c: 0xdfb00000
    ctx->pc = 0x14706cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147070: 0x8051b0e
    ctx->pc = 0x147070u;
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x146C38u;
    entry_146c38_0x146c60(rdram, ctx, runtime); return;
    ctx->pc = 0x147078u;
label_147078:
    // 0x147078: 0xdfbf0070
    ctx->pc = 0x147078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_14707c:
    // 0x14707c: 0xdfb60060
    ctx->pc = 0x14707cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_147080:
    // 0x147080: 0xdfb50050
    ctx->pc = 0x147080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147084: 0xdfb40040
    ctx->pc = 0x147084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147088: 0xdfb30030
    ctx->pc = 0x147088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14708c: 0xdfb20020
    ctx->pc = 0x14708cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147090: 0xdfb10010
    ctx->pc = 0x147090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147094: 0xdfb00000
    ctx->pc = 0x147094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147098: 0x3e00008
    ctx->pc = 0x147098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14709Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146F38u: goto label_146f38;
            case 0x146F40u: goto label_146f40;
            case 0x147038u: goto label_147038;
            case 0x147044u: goto label_147044;
            case 0x147078u: goto label_147078;
            case 0x14707Cu: goto label_14707c;
            case 0x147080u: goto label_147080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1470A0u;
}
