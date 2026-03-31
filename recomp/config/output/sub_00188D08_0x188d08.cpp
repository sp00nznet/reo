#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188D08
// Address: 0x188d08 - 0x188d90
void sub_00188D08_0x188d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188d08u;

    // 0x188d08: 0x3c030023
    ctx->pc = 0x188d08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x188d0c: 0x27bdffd0
    ctx->pc = 0x188d0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188d10: 0x8c62fd38
    ctx->pc = 0x188d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966584)));
    // 0x188d14: 0x80302d
    ctx->pc = 0x188d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d18: 0xffbf0020
    ctx->pc = 0x188d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188d1c: 0x14400003
    ctx->pc = 0x188D1Cu;
    {
        const bool branch_taken_0x188d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x188D20u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x188d1c) {
            ctx->pc = 0x188D2Cu;
            goto label_188d2c;
        }
    }
    ctx->pc = 0x188D24u;
    // 0x188d24: 0x10000016
    ctx->pc = 0x188D24u;
    {
        const bool branch_taken_0x188d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188D28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x188d24) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D2Cu;
label_188d2c:
    // 0x188d2c: 0x3c020029
    ctx->pc = 0x188d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188d30: 0x3c040029
    ctx->pc = 0x188d30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x188d34: 0x24500c00
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x188d38: 0x3c058000
    ctx->pc = 0x188d38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x188d3c: 0xac460c00
    ctx->pc = 0x188d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 6));
    // 0x188d40: 0x24840b88
    ctx->pc = 0x188d40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2952));
    // 0x188d44: 0xafa00000
    ctx->pc = 0x188d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188d48: 0x34a51302
    ctx->pc = 0x188d48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4866));
    // 0x188d4c: 0x302d
    ctx->pc = 0x188d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d50: 0x200382d
    ctx->pc = 0x188d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d54: 0x24080280
    ctx->pc = 0x188d54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188d58: 0x200482d
    ctx->pc = 0x188d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d5c: 0x240a0280
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x188d60: 0xc045e7a
    ctx->pc = 0x188D60u;
    SET_GPR_U32(ctx, 31, 0x188D68u);
    ctx->pc = 0x188D64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D68u; }
    }
    if (ctx->pc != 0x188D68u) { return; }
    ctx->pc = 0x188D68u;
    // 0x188d68: 0x4430005
    ctx->pc = 0x188D68u;
    {
        const bool branch_taken_0x188d68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x188d68) {
            ctx->pc = 0x188D6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D70u;
    // 0x188d70: 0x3c040024
    ctx->pc = 0x188d70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x188d74: 0xc0625f6
    ctx->pc = 0x188D74u;
    SET_GPR_U32(ctx, 31, 0x188D7Cu);
    ctx->pc = 0x188D78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6464));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D7Cu; }
    }
    if (ctx->pc != 0x188D7Cu) { return; }
    ctx->pc = 0x188D7Cu;
    // 0x188d7c: 0x102d
    ctx->pc = 0x188d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188d80:
    // 0x188d80: 0xdfbf0020
    ctx->pc = 0x188d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188d84: 0xdfb00010
    ctx->pc = 0x188d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188d88: 0x3e00008
    ctx->pc = 0x188D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188D2Cu: goto label_188d2c;
            case 0x188D80u: goto label_188d80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188D90u;
}
