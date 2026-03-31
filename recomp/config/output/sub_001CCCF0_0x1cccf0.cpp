#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CCCF0
// Address: 0x1cccf0 - 0x1ccd90
void sub_001CCCF0_0x1cccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cccf0u;

    // 0x1cccf0: 0x27bdffb0
    ctx->pc = 0x1cccf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cccf4: 0xffbf0040
    ctx->pc = 0x1cccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cccf8: 0x7fb30030
    ctx->pc = 0x1cccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cccfc: 0x7fb20020
    ctx->pc = 0x1cccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ccd00: 0x80982d
    ctx->pc = 0x1ccd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd04: 0x7fb10010
    ctx->pc = 0x1ccd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ccd08: 0xa0902d
    ctx->pc = 0x1ccd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd0c: 0x7fb00000
    ctx->pc = 0x1ccd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccd10: 0xc0732a0
    ctx->pc = 0x1CCD10u;
    SET_GPR_U32(ctx, 31, 0x1CCD18u);
    ctx->pc = 0x1CCD14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCA80_0x1cca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD18u; }
    }
    if (ctx->pc != 0x1CCD18u) { return; }
    ctx->pc = 0x1CCD18u;
    // 0x1ccd18: 0x40802d
    ctx->pc = 0x1ccd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd1c: 0x16000003
    ctx->pc = 0x1CCD1Cu;
    {
        const bool branch_taken_0x1ccd1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCD20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd1c) {
            ctx->pc = 0x1CCD2Cu;
            goto label_1ccd2c;
        }
    }
    ctx->pc = 0x1CCD24u;
    // 0x1ccd24: 0x10000013
    ctx->pc = 0x1CCD24u;
    {
        const bool branch_taken_0x1ccd24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCD28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd24) {
            ctx->pc = 0x1CCD74u;
            goto label_1ccd74;
        }
    }
    ctx->pc = 0x1CCD2Cu;
label_1ccd2c:
    // 0x1ccd2c: 0xc0deaa8
    ctx->pc = 0x1CCD2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD34u);
    ctx->pc = 0x37AAA0u;
    {
        auto targetFn = runtime->lookupFunction(0x37AAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD34u; }
        if (ctx->pc != 0x1CCD34u) { return; }
    }
    ctx->pc = 0x1CCD34u;
    // 0x1ccd34: 0xae020000
    ctx->pc = 0x1ccd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ccd38: 0x8e020000
    ctx->pc = 0x1ccd38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccd3c: 0x1040000a
    ctx->pc = 0x1CCD3Cu;
    {
        const bool branch_taken_0x1ccd3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCD40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd3c) {
            ctx->pc = 0x1CCD68u;
            goto label_1ccd68;
        }
    }
    ctx->pc = 0x1CCD44u;
    // 0x1ccd44: 0xae130004
    ctx->pc = 0x1ccd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1ccd48: 0x24040004
    ctx->pc = 0x1ccd48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccd4c: 0xa6120008
    ctx->pc = 0x1ccd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x1ccd50: 0x24030001
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd54: 0xa611000a
    ctx->pc = 0x1ccd54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x1ccd58: 0x200102d
    ctx->pc = 0x1ccd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd5c: 0xa604000c
    ctx->pc = 0x1ccd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccd60: 0x10000004
    ctx->pc = 0x1CCD60u;
    {
        const bool branch_taken_0x1ccd60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCD64u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ccd60) {
            ctx->pc = 0x1CCD74u;
            goto label_1ccd74;
        }
    }
    ctx->pc = 0x1CCD68u;
label_1ccd68:
    // 0x1ccd68: 0xc0732b4
    ctx->pc = 0x1CCD68u;
    SET_GPR_U32(ctx, 31, 0x1CCD70u);
    ctx->pc = 0x1CCAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCAD0_0x1ccad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD70u; }
    }
    if (ctx->pc != 0x1CCD70u) { return; }
    ctx->pc = 0x1CCD70u;
    // 0x1ccd70: 0x102d
    ctx->pc = 0x1ccd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd74:
    // 0x1ccd74: 0xdfbf0040
    ctx->pc = 0x1ccd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ccd78: 0x7bb30030
    ctx->pc = 0x1ccd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ccd7c: 0x7bb20020
    ctx->pc = 0x1ccd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccd80: 0x7bb10010
    ctx->pc = 0x1ccd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccd84: 0x7bb00000
    ctx->pc = 0x1ccd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd88: 0x3e00008
    ctx->pc = 0x1CCD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCD2Cu: goto label_1ccd2c;
            case 0x1CCD68u: goto label_1ccd68;
            case 0x1CCD74u: goto label_1ccd74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCD90u;
}
