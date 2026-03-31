#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5DA0
// Address: 0x1c5da0 - 0x1c5ec0
void sub_001C5DA0_0x1c5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5da0u;

label_1c5da0:
    // 0x1c5da0: 0x27bdff90
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c5da4: 0xffbf0060
    ctx->pc = 0x1c5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c5da8: 0x7fb50050
    ctx->pc = 0x1c5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5dac: 0x7fb40040
    ctx->pc = 0x1c5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c5db0: 0x80a82d
    ctx->pc = 0x1c5db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5db4: 0x7fb30030
    ctx->pc = 0x1c5db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5db8: 0xa62021
    ctx->pc = 0x1c5db8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c5dbc: 0x7fb20020
    ctx->pc = 0x1c5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5dc0: 0xa0a02d
    ctx->pc = 0x1c5dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dc4: 0x7fb10010
    ctx->pc = 0x1c5dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5dc8: 0xc0982d
    ctx->pc = 0x1c5dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dcc: 0x7fb00000
    ctx->pc = 0x1c5dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5dd0: 0x280902d
    ctx->pc = 0x1c5dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dd4: 0x260882d
    ctx->pc = 0x1c5dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dd8: 0x4810003
    ctx->pc = 0x1C5DD8u;
    {
        const bool branch_taken_0x1c5dd8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C5DDCu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        if (branch_taken_0x1c5dd8) {
            ctx->pc = 0x1C5DE8u;
            goto label_1c5de8;
        }
    }
    ctx->pc = 0x1C5DE0u;
    // 0x1c5de0: 0x24830001
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c5de4: 0x31843
    ctx->pc = 0x1c5de4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1c5de8:
    // 0x1c5de8: 0x31880
    ctx->pc = 0x1c5de8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5dec: 0x2a31821
    ctx->pc = 0x1c5decu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1c5df0: 0x8c630000
    ctx->pc = 0x1c5df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5df4: 0x10000002
    ctx->pc = 0x1C5DF4u;
    {
        const bool branch_taken_0x1c5df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5DF8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        if (branch_taken_0x1c5df4) {
            ctx->pc = 0x1C5E00u;
            goto label_1c5e00;
        }
    }
    ctx->pc = 0x1C5DFCu;
label_1c5dfc:
    // 0x1c5dfc: 0x26520001
    ctx->pc = 0x1c5dfcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1c5e00:
    // 0x1c5e00: 0x121880
    ctx->pc = 0x1c5e00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c5e04: 0x2a32021
    ctx->pc = 0x1c5e04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1c5e08: 0x8c830000
    ctx->pc = 0x1c5e08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5e0c: 0x8c630008
    ctx->pc = 0x1c5e0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c5e10: 0x70182b
    ctx->pc = 0x1c5e10u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5e14: 0x1460fff9
    ctx->pc = 0x1C5E14u;
    {
        const bool branch_taken_0x1c5e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5e14) {
            ctx->pc = 0x1C5DFCu;
            goto label_1c5dfc;
        }
    }
    ctx->pc = 0x1C5E1Cu;
    // 0x1c5e1c: 0x10000003
    ctx->pc = 0x1C5E1Cu;
    {
        const bool branch_taken_0x1c5e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E20u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x1c5e1c) {
            ctx->pc = 0x1C5E2Cu;
            goto label_1c5e2c;
        }
    }
    ctx->pc = 0x1C5E24u;
label_1c5e24:
    // 0x1c5e24: 0x2631ffff
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c5e28: 0x111880
    ctx->pc = 0x1c5e28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_1c5e2c:
    // 0x1c5e2c: 0x2a32821
    ctx->pc = 0x1c5e2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1c5e30: 0x8ca30000
    ctx->pc = 0x1c5e30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5e34: 0x8c630008
    ctx->pc = 0x1c5e34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c5e38: 0x203082b
    ctx->pc = 0x1c5e38u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c5e3c: 0x1420fff9
    ctx->pc = 0x1C5E3Cu;
    {
        const bool branch_taken_0x1c5e3c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E40u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
        if (branch_taken_0x1c5e3c) {
            ctx->pc = 0x1C5E24u;
            goto label_1c5e24;
        }
    }
    ctx->pc = 0x1C5E44u;
    // 0x1c5e44: 0x10200006
    ctx->pc = 0x1C5E44u;
    {
        const bool branch_taken_0x1c5e44 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E48u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x1c5e44) {
            ctx->pc = 0x1C5E60u;
            goto label_1c5e60;
        }
    }
    ctx->pc = 0x1C5E4Cu;
    // 0x1c5e4c: 0xc0717b0
    ctx->pc = 0x1C5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E54u);
    ctx->pc = 0x1C5EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5EC0_0x1c5ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E54u; }
    }
    if (ctx->pc != 0x1C5E54u) { return; }
    ctx->pc = 0x1C5E54u;
    // 0x1c5e54: 0x26520001
    ctx->pc = 0x1c5e54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5e58: 0x1000ffe9
    ctx->pc = 0x1C5E58u;
    {
        const bool branch_taken_0x1c5e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E5Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x1c5e58) {
            ctx->pc = 0x1C5E00u;
            goto label_1c5e00;
        }
    }
    ctx->pc = 0x1C5E60u;
label_1c5e60:
    // 0x1c5e60: 0x286082a
    ctx->pc = 0x1c5e60u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 6)));
    // 0x1c5e64: 0x10200005
    ctx->pc = 0x1C5E64u;
    {
        const bool branch_taken_0x1c5e64 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E68u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1c5e64) {
            ctx->pc = 0x1C5E7Cu;
            goto label_1c5e7c;
        }
    }
    ctx->pc = 0x1C5E6Cu;
    // 0x1c5e6c: 0x280282d
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e70: 0xc071768
    ctx->pc = 0x1C5E70u;
    SET_GPR_U32(ctx, 31, 0x1C5E78u);
    ctx->pc = 0x1C5E74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5DA0u;
    goto label_1c5da0;
    ctx->pc = 0x1C5E78u;
label_1c5e78:
    // 0x1c5e78: 0x26250001
    ctx->pc = 0x1c5e78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1));
label_1c5e7c:
    // 0x1c5e7c: 0xb3082a
    ctx->pc = 0x1c5e7cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 19)));
    // 0x1c5e80: 0x10200003
    ctx->pc = 0x1C5E80u;
    {
        const bool branch_taken_0x1c5e80 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e80) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E88u;
    // 0x1c5e88: 0xc071768
    ctx->pc = 0x1C5E88u;
    SET_GPR_U32(ctx, 31, 0x1C5E90u);
    ctx->pc = 0x1C5E8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5DA0u;
    goto label_1c5da0;
    ctx->pc = 0x1C5E90u;
label_1c5e90:
    // 0x1c5e90: 0xdfbf0060
    ctx->pc = 0x1c5e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5e94: 0x7bb50050
    ctx->pc = 0x1c5e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5e98: 0x7bb40040
    ctx->pc = 0x1c5e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5e9c: 0x7bb30030
    ctx->pc = 0x1c5e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5ea0: 0x7bb20020
    ctx->pc = 0x1c5ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5ea4: 0x7bb10010
    ctx->pc = 0x1c5ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5ea8: 0x7bb00000
    ctx->pc = 0x1c5ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5eac: 0x3e00008
    ctx->pc = 0x1C5EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5EB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5DA0u: goto label_1c5da0;
            case 0x1C5DE8u: goto label_1c5de8;
            case 0x1C5DFCu: goto label_1c5dfc;
            case 0x1C5E00u: goto label_1c5e00;
            case 0x1C5E24u: goto label_1c5e24;
            case 0x1C5E2Cu: goto label_1c5e2c;
            case 0x1C5E60u: goto label_1c5e60;
            case 0x1C5E78u: goto label_1c5e78;
            case 0x1C5E7Cu: goto label_1c5e7c;
            case 0x1C5E90u: goto label_1c5e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5EB4u;
    // 0x1c5eb4: 0x0
    ctx->pc = 0x1c5eb4u;
    // NOP
    // 0x1c5eb8: 0x0
    ctx->pc = 0x1c5eb8u;
    // NOP
    // 0x1c5ebc: 0x0
    ctx->pc = 0x1c5ebcu;
    // NOP
}
