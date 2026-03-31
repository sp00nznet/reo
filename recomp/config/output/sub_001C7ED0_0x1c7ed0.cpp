#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7ED0
// Address: 0x1c7ed0 - 0x1c8080
void sub_001C7ED0_0x1c7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7ed0u;

    // 0x1c7ed0: 0x27bdff90
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c7ed4: 0xffbf0060
    ctx->pc = 0x1c7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c7ed8: 0x7fb50050
    ctx->pc = 0x1c7ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c7edc: 0x7fb40040
    ctx->pc = 0x1c7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c7ee0: 0xe0a82d
    ctx->pc = 0x1c7ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ee4: 0x7fb30030
    ctx->pc = 0x1c7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7ee8: 0x100a02d
    ctx->pc = 0x1c7ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7eec: 0x7fb20020
    ctx->pc = 0x1c7eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7ef0: 0x7fb10010
    ctx->pc = 0x1c7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7ef4: 0x80902d
    ctx->pc = 0x1c7ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ef8: 0x7fb00000
    ctx->pc = 0x1c7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7efc: 0xa0882d
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f00: 0x16a0002b
    ctx->pc = 0x1C7F00u;
    {
        const bool branch_taken_0x1c7f00 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f00) {
            ctx->pc = 0x1C7FB0u;
            goto label_1c7fb0;
        }
    }
    ctx->pc = 0x1C7F08u;
    // 0x1c7f08: 0x16800012
    ctx->pc = 0x1C7F08u;
    {
        const bool branch_taken_0x1c7f08 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F0Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f08) {
            ctx->pc = 0x1C7F54u;
            goto label_1c7f54;
        }
    }
    ctx->pc = 0x1C7F10u;
    // 0x1c7f10: 0x10000009
    ctx->pc = 0x1C7F10u;
    {
        const bool branch_taken_0x1c7f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f10) {
            ctx->pc = 0x1C7F38u;
            goto label_1c7f38;
        }
    }
    ctx->pc = 0x1C7F18u;
label_1c7f18:
    // 0x1c7f18: 0x0
    ctx->pc = 0x1c7f18u;
    // NOP
    // 0x1c7f1c: 0x0
    ctx->pc = 0x1c7f1cu;
    // NOP
    // 0x1c7f20: 0x0
    ctx->pc = 0x1c7f20u;
    // NOP
    // 0x1c7f24: 0x0
    ctx->pc = 0x1c7f24u;
    // NOP
    // 0x1c7f28: 0x0
    ctx->pc = 0x1c7f28u;
    // NOP
    // 0x1c7f2c: 0x0
    ctx->pc = 0x1c7f2cu;
    // NOP
    // 0x1c7f30: 0x0
    ctx->pc = 0x1c7f30u;
    // NOP
    // 0x1c7f34: 0x240202d
    ctx->pc = 0x1c7f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f38:
    // 0x1c7f38: 0x220282d
    ctx->pc = 0x1c7f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f3c: 0xc0471de
    ctx->pc = 0x1C7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F44u);
    ctx->pc = 0x1C7F40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C778_0x11c778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F44u; }
    }
    if (ctx->pc != 0x1C7F44u) { return; }
    ctx->pc = 0x1C7F44u;
    // 0x1c7f44: 0x440fff4
    ctx->pc = 0x1C7F44u;
    {
        const bool branch_taken_0x1c7f44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c7f44) {
            ctx->pc = 0x1C7F18u;
            goto label_1c7f18;
        }
    }
    ctx->pc = 0x1C7F4Cu;
    // 0x1c7f4c: 0x10000042
    ctx->pc = 0x1C7F4Cu;
    {
        const bool branch_taken_0x1c7f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f4c) {
            ctx->pc = 0x1C8058u;
            goto label_1c8058;
        }
    }
    ctx->pc = 0x1C7F54u;
label_1c7f54:
    // 0x1c7f54: 0x10000012
    ctx->pc = 0x1C7F54u;
    {
        const bool branch_taken_0x1c7f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F58u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x1c7f54) {
            ctx->pc = 0x1C7FA0u;
            goto label_1c7fa0;
        }
    }
    ctx->pc = 0x1C7F5Cu;
label_1c7f5c:
    // 0x1c7f5c: 0x220282d
    ctx->pc = 0x1c7f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f60: 0xc0471de
    ctx->pc = 0x1C7F60u;
    SET_GPR_U32(ctx, 31, 0x1C7F68u);
    ctx->pc = 0x1C7F64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C778_0x11c778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F68u; }
    }
    if (ctx->pc != 0x1C7F68u) { return; }
    ctx->pc = 0x1C7F68u;
    // 0x1c7f68: 0x40082a
    ctx->pc = 0x1c7f68u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
    // 0x1c7f6c: 0x14200003
    ctx->pc = 0x1C7F6Cu;
    {
        const bool branch_taken_0x1c7f6c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f6c) {
            ctx->pc = 0x1C7F7Cu;
            goto label_1c7f7c;
        }
    }
    ctx->pc = 0x1C7F74u;
    // 0x1c7f74: 0x10000039
    ctx->pc = 0x1C7F74u;
    {
        const bool branch_taken_0x1c7f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1c7f74) {
            ctx->pc = 0x1C805Cu;
            goto label_1c805c;
        }
    }
    ctx->pc = 0x1C7F7Cu;
label_1c7f7c:
    // 0x1c7f7c: 0x0
    ctx->pc = 0x1c7f7cu;
    // NOP
    // 0x1c7f80: 0x0
    ctx->pc = 0x1c7f80u;
    // NOP
    // 0x1c7f84: 0x0
    ctx->pc = 0x1c7f84u;
    // NOP
    // 0x1c7f88: 0x0
    ctx->pc = 0x1c7f88u;
    // NOP
    // 0x1c7f8c: 0x0
    ctx->pc = 0x1c7f8cu;
    // NOP
    // 0x1c7f90: 0x0
    ctx->pc = 0x1c7f90u;
    // NOP
    // 0x1c7f94: 0x0
    ctx->pc = 0x1c7f94u;
    // NOP
    // 0x1c7f98: 0x26730001
    ctx->pc = 0x1c7f98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7f9c: 0x274182a
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
label_1c7fa0:
    // 0x1c7fa0: 0x1460ffee
    ctx->pc = 0x1C7FA0u;
    {
        const bool branch_taken_0x1c7fa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7FA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fa0) {
            ctx->pc = 0x1C7F5Cu;
            goto label_1c7f5c;
        }
    }
    ctx->pc = 0x1C7FA8u;
    // 0x1c7fa8: 0x1000002b
    ctx->pc = 0x1C7FA8u;
    {
        const bool branch_taken_0x1c7fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7fa8) {
            ctx->pc = 0x1C8058u;
            goto label_1c8058;
        }
    }
    ctx->pc = 0x1C7FB0u;
label_1c7fb0:
    // 0x1c7fb0: 0x16800013
    ctx->pc = 0x1C7FB0u;
    {
        const bool branch_taken_0x1c7fb0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7FB4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fb0) {
            ctx->pc = 0x1C8000u;
            goto label_1c8000;
        }
    }
    ctx->pc = 0x1C7FB8u;
    // 0x1c7fb8: 0x10000009
    ctx->pc = 0x1C7FB8u;
    {
        const bool branch_taken_0x1c7fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fb8) {
            ctx->pc = 0x1C7FE0u;
            goto label_1c7fe0;
        }
    }
    ctx->pc = 0x1C7FC0u;
label_1c7fc0:
    // 0x1c7fc0: 0x0
    ctx->pc = 0x1c7fc0u;
    // NOP
    // 0x1c7fc4: 0x0
    ctx->pc = 0x1c7fc4u;
    // NOP
    // 0x1c7fc8: 0x0
    ctx->pc = 0x1c7fc8u;
    // NOP
    // 0x1c7fcc: 0x0
    ctx->pc = 0x1c7fccu;
    // NOP
    // 0x1c7fd0: 0x0
    ctx->pc = 0x1c7fd0u;
    // NOP
    // 0x1c7fd4: 0x0
    ctx->pc = 0x1c7fd4u;
    // NOP
    // 0x1c7fd8: 0x0
    ctx->pc = 0x1c7fd8u;
    // NOP
    // 0x1c7fdc: 0x240202d
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fe0:
    // 0x1c7fe0: 0x220282d
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fe4: 0x200302d
    ctx->pc = 0x1c7fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7fe8: 0xc0471e6
    ctx->pc = 0x1C7FE8u;
    SET_GPR_U32(ctx, 31, 0x1C7FF0u);
    ctx->pc = 0x1C7FECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C798_0x11c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FF0u; }
    }
    if (ctx->pc != 0x1C7FF0u) { return; }
    ctx->pc = 0x1C7FF0u;
    // 0x1c7ff0: 0x440fff3
    ctx->pc = 0x1C7FF0u;
    {
        const bool branch_taken_0x1c7ff0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c7ff0) {
            ctx->pc = 0x1C7FC0u;
            goto label_1c7fc0;
        }
    }
    ctx->pc = 0x1C7FF8u;
    // 0x1c7ff8: 0x10000017
    ctx->pc = 0x1C7FF8u;
    {
        const bool branch_taken_0x1c7ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7ff8) {
            ctx->pc = 0x1C8058u;
            goto label_1c8058;
        }
    }
    ctx->pc = 0x1C8000u;
label_1c8000:
    // 0x1c8000: 0x10000013
    ctx->pc = 0x1C8000u;
    {
        const bool branch_taken_0x1c8000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8004u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
        if (branch_taken_0x1c8000) {
            ctx->pc = 0x1C8050u;
            goto label_1c8050;
        }
    }
    ctx->pc = 0x1C8008u;
label_1c8008:
    // 0x1c8008: 0x220282d
    ctx->pc = 0x1c8008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c800c: 0x200302d
    ctx->pc = 0x1c800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8010: 0xc0471e6
    ctx->pc = 0x1C8010u;
    SET_GPR_U32(ctx, 31, 0x1C8018u);
    ctx->pc = 0x1C8014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C798_0x11c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8018u; }
    }
    if (ctx->pc != 0x1C8018u) { return; }
    ctx->pc = 0x1C8018u;
    // 0x1c8018: 0x40082a
    ctx->pc = 0x1c8018u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
    // 0x1c801c: 0x14200003
    ctx->pc = 0x1C801Cu;
    {
        const bool branch_taken_0x1c801c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c801c) {
            ctx->pc = 0x1C802Cu;
            goto label_1c802c;
        }
    }
    ctx->pc = 0x1C8024u;
    // 0x1c8024: 0x1000000c
    ctx->pc = 0x1C8024u;
    {
        const bool branch_taken_0x1c8024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8024) {
            ctx->pc = 0x1C8058u;
            goto label_1c8058;
        }
    }
    ctx->pc = 0x1C802Cu;
label_1c802c:
    // 0x1c802c: 0x0
    ctx->pc = 0x1c802cu;
    // NOP
    // 0x1c8030: 0x0
    ctx->pc = 0x1c8030u;
    // NOP
    // 0x1c8034: 0x0
    ctx->pc = 0x1c8034u;
    // NOP
    // 0x1c8038: 0x0
    ctx->pc = 0x1c8038u;
    // NOP
    // 0x1c803c: 0x0
    ctx->pc = 0x1c803cu;
    // NOP
    // 0x1c8040: 0x0
    ctx->pc = 0x1c8040u;
    // NOP
    // 0x1c8044: 0x0
    ctx->pc = 0x1c8044u;
    // NOP
    // 0x1c8048: 0x26730001
    ctx->pc = 0x1c8048u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c804c: 0x274182a
    ctx->pc = 0x1c804cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
label_1c8050:
    // 0x1c8050: 0x1460ffed
    ctx->pc = 0x1C8050u;
    {
        const bool branch_taken_0x1c8050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8050) {
            ctx->pc = 0x1C8008u;
            goto label_1c8008;
        }
    }
    ctx->pc = 0x1C8058u;
label_1c8058:
    // 0x1c8058: 0xdfbf0060
    ctx->pc = 0x1c8058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c805c:
    // 0x1c805c: 0x7bb50050
    ctx->pc = 0x1c805cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8060: 0x7bb40040
    ctx->pc = 0x1c8060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8064: 0x7bb30030
    ctx->pc = 0x1c8064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8068: 0x7bb20020
    ctx->pc = 0x1c8068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c806c: 0x7bb10010
    ctx->pc = 0x1c806cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8070: 0x7bb00000
    ctx->pc = 0x1c8070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8074: 0x3e00008
    ctx->pc = 0x1C8074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F18u: goto label_1c7f18;
            case 0x1C7F38u: goto label_1c7f38;
            case 0x1C7F54u: goto label_1c7f54;
            case 0x1C7F5Cu: goto label_1c7f5c;
            case 0x1C7F7Cu: goto label_1c7f7c;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FC0u: goto label_1c7fc0;
            case 0x1C7FE0u: goto label_1c7fe0;
            case 0x1C8000u: goto label_1c8000;
            case 0x1C8008u: goto label_1c8008;
            case 0x1C802Cu: goto label_1c802c;
            case 0x1C8050u: goto label_1c8050;
            case 0x1C8058u: goto label_1c8058;
            case 0x1C805Cu: goto label_1c805c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C807Cu;
    // 0x1c807c: 0x0
    ctx->pc = 0x1c807cu;
    // NOP
}
