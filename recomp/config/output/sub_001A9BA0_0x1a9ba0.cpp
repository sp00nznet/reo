#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9BA0
// Address: 0x1a9ba0 - 0x1a9c80
void sub_001A9BA0_0x1a9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9ba0u;

    // 0x1a9ba0: 0x27bdffc0
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9ba4: 0x2405002f
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a9ba8: 0xffbf0010
    ctx->pc = 0x1a9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9bac: 0x7fb00000
    ctx->pc = 0x1a9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9bb0: 0xc042dee
    ctx->pc = 0x1A9BB0u;
    SET_GPR_U32(ctx, 31, 0x1A9BB8u);
    ctx->pc = 0x1A9BB4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BB8u; }
    }
    if (ctx->pc != 0x1A9BB8u) { return; }
    ctx->pc = 0x1A9BB8u;
    // 0x1a9bb8: 0x14400003
    ctx->pc = 0x1A9BB8u;
    {
        const bool branch_taken_0x1a9bb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9BBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9bb8) {
            ctx->pc = 0x1A9BC8u;
            goto label_1a9bc8;
        }
    }
    ctx->pc = 0x1A9BC0u;
    // 0x1a9bc0: 0xc042dee
    ctx->pc = 0x1A9BC0u;
    SET_GPR_U32(ctx, 31, 0x1A9BC8u);
    ctx->pc = 0x1A9BC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 92));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BC8u; }
    }
    if (ctx->pc != 0x1A9BC8u) { return; }
    ctx->pc = 0x1A9BC8u;
label_1a9bc8:
    // 0x1a9bc8: 0x10400003
    ctx->pc = 0x1A9BC8u;
    {
        const bool branch_taken_0x1a9bc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9bc8) {
            ctx->pc = 0x1A9BD8u;
            goto label_1a9bd8;
        }
    }
    ctx->pc = 0x1A9BD0u;
    // 0x1a9bd0: 0x10000002
    ctx->pc = 0x1A9BD0u;
    {
        const bool branch_taken_0x1a9bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9BD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1a9bd0) {
            ctx->pc = 0x1A9BDCu;
            goto label_1a9bdc;
        }
    }
    ctx->pc = 0x1A9BD8u;
label_1a9bd8:
    // 0x1a9bd8: 0x200102d
    ctx->pc = 0x1a9bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bdc:
    // 0x1a9bdc: 0x40282d
    ctx->pc = 0x1a9bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9be0: 0xc042bf0
    ctx->pc = 0x1A9BE0u;
    SET_GPR_U32(ctx, 31, 0x1A9BE8u);
    ctx->pc = 0x1A9BE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BE8u; }
    }
    if (ctx->pc != 0x1A9BE8u) { return; }
    ctx->pc = 0x1A9BE8u;
    // 0x1a9be8: 0xc042c56
    ctx->pc = 0x1A9BE8u;
    SET_GPR_U32(ctx, 31, 0x1A9BF0u);
    ctx->pc = 0x1A9BECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BF0u; }
    }
    if (ctx->pc != 0x1A9BF0u) { return; }
    ctx->pc = 0x1A9BF0u;
    // 0x1a9bf0: 0x14400003
    ctx->pc = 0x1A9BF0u;
    {
        const bool branch_taken_0x1a9bf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9BF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x1a9bf0) {
            ctx->pc = 0x1A9C00u;
            goto label_1a9c00;
        }
    }
    ctx->pc = 0x1A9BF8u;
    // 0x1a9bf8: 0x1000001a
    ctx->pc = 0x1A9BF8u;
    {
        const bool branch_taken_0x1a9bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9BFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a9bf8) {
            ctx->pc = 0x1A9C64u;
            goto label_1a9c64;
        }
    }
    ctx->pc = 0x1A9C00u;
label_1a9c00:
    // 0x1a9c00: 0xc04336a
    ctx->pc = 0x1A9C00u;
    SET_GPR_U32(ctx, 31, 0x1A9C08u);
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C08u; }
    }
    if (ctx->pc != 0x1A9C08u) { return; }
    ctx->pc = 0x1A9C08u;
    // 0x1a9c08: 0x27a40020
    ctx->pc = 0x1a9c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9c0c: 0xc042dee
    ctx->pc = 0x1A9C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C14u);
    ctx->pc = 0x1A9C10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C14u; }
    }
    if (ctx->pc != 0x1A9C14u) { return; }
    ctx->pc = 0x1A9C14u;
    // 0x1a9c14: 0x10400003
    ctx->pc = 0x1A9C14u;
    {
        const bool branch_taken_0x1a9c14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9C18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c14) {
            ctx->pc = 0x1A9C24u;
            goto label_1a9c24;
        }
    }
    ctx->pc = 0x1A9C1Cu;
    // 0x1a9c1c: 0x2403005f
    ctx->pc = 0x1a9c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1a9c20: 0xa0430000
    ctx->pc = 0x1a9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9c24:
    // 0x1a9c24: 0x10000008
    ctx->pc = 0x1A9C24u;
    {
        const bool branch_taken_0x1a9c24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9c24) {
            ctx->pc = 0x1A9C48u;
            goto label_1a9c48;
        }
    }
    ctx->pc = 0x1A9C2Cu;
label_1a9c2c:
    // 0x1a9c2c: 0xc042b9e
    ctx->pc = 0x1A9C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C34u);
    ctx->pc = 0x1A9C30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C34u; }
    }
    if (ctx->pc != 0x1A9C34u) { return; }
    ctx->pc = 0x1A9C34u;
    // 0x1a9c34: 0x14400003
    ctx->pc = 0x1A9C34u;
    {
        const bool branch_taken_0x1a9c34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9c34) {
            ctx->pc = 0x1A9C44u;
            goto label_1a9c44;
        }
    }
    ctx->pc = 0x1A9C3Cu;
    // 0x1a9c3c: 0x10000009
    ctx->pc = 0x1A9C3Cu;
    {
        const bool branch_taken_0x1a9c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9C40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c3c) {
            ctx->pc = 0x1A9C64u;
            goto label_1a9c64;
        }
    }
    ctx->pc = 0x1A9C44u;
label_1a9c44:
    // 0x1a9c44: 0x26100001
    ctx->pc = 0x1a9c44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a9c48:
    // 0x1a9c48: 0x3c020023
    ctx->pc = 0x1a9c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1a9c4c: 0x101880
    ctx->pc = 0x1a9c4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9c50: 0x24422270
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8816));
    // 0x1a9c54: 0x431021
    ctx->pc = 0x1a9c54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9c58: 0x8c450000
    ctx->pc = 0x1a9c58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9c5c: 0x14a0fff3
    ctx->pc = 0x1A9C5Cu;
    {
        const bool branch_taken_0x1a9c5c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9C60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a9c5c) {
            ctx->pc = 0x1A9C2Cu;
            goto label_1a9c2c;
        }
    }
    ctx->pc = 0x1A9C64u;
label_1a9c64:
    // 0x1a9c64: 0xdfbf0010
    ctx->pc = 0x1a9c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9c68: 0x7bb00000
    ctx->pc = 0x1a9c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9c6c: 0x3e00008
    ctx->pc = 0x1A9C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9BC8u: goto label_1a9bc8;
            case 0x1A9BD8u: goto label_1a9bd8;
            case 0x1A9BDCu: goto label_1a9bdc;
            case 0x1A9C00u: goto label_1a9c00;
            case 0x1A9C24u: goto label_1a9c24;
            case 0x1A9C2Cu: goto label_1a9c2c;
            case 0x1A9C44u: goto label_1a9c44;
            case 0x1A9C48u: goto label_1a9c48;
            case 0x1A9C64u: goto label_1a9c64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9C74u;
    // 0x1a9c74: 0x0
    ctx->pc = 0x1a9c74u;
    // NOP
    // 0x1a9c78: 0x0
    ctx->pc = 0x1a9c78u;
    // NOP
    // 0x1a9c7c: 0x0
    ctx->pc = 0x1a9c7cu;
    // NOP
}
