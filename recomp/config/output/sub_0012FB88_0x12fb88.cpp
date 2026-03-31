#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012FB88
// Address: 0x12fb88 - 0x12fce0
void sub_0012FB88_0x12fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fb88u;

    // 0x12fb88: 0xac850060
    ctx->pc = 0x12fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x12fb8c: 0x3e00008
    ctx->pc = 0x12FB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB94u;
    // 0x12fb94: 0x0
    ctx->pc = 0x12fb94u;
    // NOP
    // 0x12fb98: 0x3e00008
    ctx->pc = 0x12FB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBA0u;
    // 0x12fba0: 0x3e00008
    ctx->pc = 0x12FBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBA8u;
    // 0x12fba8: 0x3e00008
    ctx->pc = 0x12FBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBB0u;
    // 0x12fbb0: 0x3e00008
    ctx->pc = 0x12FBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBB4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBB8u;
    // 0x12fbb8: 0x3e00008
    ctx->pc = 0x12FBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBBCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBC0u;
    // 0x12fbc0: 0x3e00008
    ctx->pc = 0x12FBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBC4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBC8u;
    // 0x12fbc8: 0x3e00008
    ctx->pc = 0x12FBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBCCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBD0u;
    // 0x12fbd0: 0x808202d6
    ctx->pc = 0x12fbd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 726)));
    // 0x12fbd4: 0x24030001
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fbd8: 0x10430005
    ctx->pc = 0x12FBD8u;
    {
        const bool branch_taken_0x12fbd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x12fbd8) {
            ctx->pc = 0x12FBF0u;
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12FBE0u;
    // 0x12fbe0: 0x8c820048
    ctx->pc = 0x12fbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x12fbe4: 0xa08302d6
    ctx->pc = 0x12fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 726), (uint8_t)GPR_U32(ctx, 3));
    // 0x12fbe8: 0x24420024
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x12fbec: 0xac820048
    ctx->pc = 0x12fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_12fbf0:
    // 0x12fbf0: 0x3e00008
    ctx->pc = 0x12FBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBF4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 744), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBF8u;
    // 0x12fbf8: 0x808202d6
    ctx->pc = 0x12fbf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 726)));
    // 0x12fbfc: 0x52840
    ctx->pc = 0x12fbfcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fc00: 0x24030001
    ctx->pc = 0x12fc00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fc04: 0x10430005
    ctx->pc = 0x12FC04u;
    {
        const bool branch_taken_0x12fc04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x12FC08u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x12fc04) {
            ctx->pc = 0x12FC1Cu;
            goto label_12fc1c;
        }
    }
    ctx->pc = 0x12FC0Cu;
    // 0x12fc0c: 0x8c820048
    ctx->pc = 0x12fc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x12fc10: 0xa08302d6
    ctx->pc = 0x12fc10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 726), (uint8_t)GPR_U32(ctx, 3));
    // 0x12fc14: 0x24420024
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x12fc18: 0xac820048
    ctx->pc = 0x12fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_12fc1c:
    // 0x12fc1c: 0x3e00008
    ctx->pc = 0x12FC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC20u;
        WRITE16(ADD32(GPR_U32(ctx, 5), 746), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC1Cu: goto label_12fc1c;
            case 0x12FC68u: goto label_12fc68;
            case 0x12FCBCu: goto label_12fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FC24u;
    // 0x12fc24: 0x0
    ctx->pc = 0x12fc24u;
    // NOP
    // 0x12fc28: 0x27bdffe0
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fc2c: 0x80182d
    ctx->pc = 0x12fc2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc30: 0xffb00000
    ctx->pc = 0x12fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fc34: 0x247002d7
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 727));
    // 0x12fc38: 0xffb10008
    ctx->pc = 0x12fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fc3c: 0xa0882d
    ctx->pc = 0x12fc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc40: 0xffbf0010
    ctx->pc = 0x12fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fc44: 0x24060001
    ctx->pc = 0x12fc44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fc48: 0x200202d
    ctx->pc = 0x12fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc4c: 0x806202d6
    ctx->pc = 0x12fc4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 726)));
    // 0x12fc50: 0x10460005
    ctx->pc = 0x12FC50u;
    {
        const bool branch_taken_0x12fc50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x12FC54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fc50) {
            ctx->pc = 0x12FC68u;
            goto label_12fc68;
        }
    }
    ctx->pc = 0x12FC58u;
    // 0x12fc58: 0x8c620048
    ctx->pc = 0x12fc58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x12fc5c: 0xa06602d6
    ctx->pc = 0x12fc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 726), (uint8_t)GPR_U32(ctx, 6));
    // 0x12fc60: 0x24420024
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x12fc64: 0xac620048
    ctx->pc = 0x12fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_12fc68:
    // 0x12fc68: 0xc041f1a
    ctx->pc = 0x12FC68u;
    SET_GPR_U32(ctx, 31, 0x12FC70u);
    ctx->pc = 0x12FC6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC70u; }
    }
    if (ctx->pc != 0x12FC70u) { return; }
    ctx->pc = 0x12FC70u;
    // 0x12fc70: 0x200202d
    ctx->pc = 0x12fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc74: 0x220282d
    ctx->pc = 0x12fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc78: 0xdfb10008
    ctx->pc = 0x12fc78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fc7c: 0xdfb00000
    ctx->pc = 0x12fc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fc80: 0x24060010
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x12fc84: 0xdfbf0010
    ctx->pc = 0x12fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fc88: 0x8042d7e
    ctx->pc = 0x12FC88u;
    ctx->pc = 0x12FC8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10B5F8u;
    sub_0010B5F8_0x10b5f8(rdram, ctx, runtime); return;
    ctx->pc = 0x12FC90u;
    // 0x12fc90: 0x27bdfff0
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fc94: 0x80382d
    ctx->pc = 0x12fc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc98: 0xffbf0000
    ctx->pc = 0x12fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fc9c: 0x24030001
    ctx->pc = 0x12fc9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fca0: 0x80e202d6
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 726)));
    // 0x12fca4: 0x14430005
    ctx->pc = 0x12FCA4u;
    {
        const bool branch_taken_0x12fca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12FCA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 727));
        if (branch_taken_0x12fca4) {
            ctx->pc = 0x12FCBCu;
            goto label_12fcbc;
        }
    }
    ctx->pc = 0x12FCACu;
    // 0x12fcac: 0x8ce20048
    ctx->pc = 0x12fcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x12fcb0: 0xa0e002d6
    ctx->pc = 0x12fcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fcb4: 0x24420024
    ctx->pc = 0x12fcb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x12fcb8: 0xace20048
    ctx->pc = 0x12fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
label_12fcbc:
    // 0x12fcbc: 0xdfbf0000
    ctx->pc = 0x12fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fcc0: 0x2402ff80
    ctx->pc = 0x12fcc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x12fcc4: 0x282d
    ctx->pc = 0x12fcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcc8: 0x24060010
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x12fccc: 0xa4e002e8
    ctx->pc = 0x12fcccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 744), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fcd0: 0xa4e202ec
    ctx->pc = 0x12fcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 748), (uint16_t)GPR_U32(ctx, 2));
    // 0x12fcd4: 0xa4e202ea
    ctx->pc = 0x12fcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 746), (uint16_t)GPR_U32(ctx, 2));
    // 0x12fcd8: 0x8041f1a
    ctx->pc = 0x12FCD8u;
    ctx->pc = 0x12FCDCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12FCE0u;
}
