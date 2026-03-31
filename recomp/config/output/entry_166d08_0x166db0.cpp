#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_166d08
// Address: 0x166d08 - 0x166db0
void entry_166d08_0x166db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166d08u;

    // 0x166d08: 0x27bdffe0
    ctx->pc = 0x166d08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166d0c: 0xffb10008
    ctx->pc = 0x166d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166d10: 0xa0882d
    ctx->pc = 0x166d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d14: 0xffb00000
    ctx->pc = 0x166d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166d18: 0x80802d
    ctx->pc = 0x166d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d1c: 0xffbf0010
    ctx->pc = 0x166d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166d20: 0xc059b6c
    ctx->pc = 0x166D20u;
    SET_GPR_U32(ctx, 31, 0x166D28u);
    ctx->pc = 0x166D24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166DB0_0x166db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D28u; }
    }
    if (ctx->pc != 0x166D28u) { return; }
    ctx->pc = 0x166D28u;
    // 0x166d28: 0x200202d
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d2c: 0x10400008
    ctx->pc = 0x166D2Cu;
    {
        const bool branch_taken_0x166d2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166D30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x166d2c) {
            ctx->pc = 0x166D50u;
            goto label_166d50;
        }
    }
    ctx->pc = 0x166D34u;
    // 0x166d34: 0x3c05ff00
    ctx->pc = 0x166d34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166d38: 0xdfb00000
    ctx->pc = 0x166d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166d3c: 0xdfb10008
    ctx->pc = 0x166d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166d40: 0x34a50408
    ctx->pc = 0x166d40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1032));
    // 0x166d44: 0xdfbf0010
    ctx->pc = 0x166d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166d48: 0x805a704
    ctx->pc = 0x166D48u;
    ctx->pc = 0x166D4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166D50u;
label_166d50:
    // 0x166d50: 0xc05df24
    ctx->pc = 0x166D50u;
    SET_GPR_U32(ctx, 31, 0x166D58u);
    ctx->pc = 0x166D54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D58u; }
    }
    if (ctx->pc != 0x166D58u) { return; }
    ctx->pc = 0x166D58u;
    // 0x166d58: 0x200202d
    ctx->pc = 0x166d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d5c: 0x24050002
    ctx->pc = 0x166d5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x166d60: 0x1440000d
    ctx->pc = 0x166D60u;
    {
        const bool branch_taken_0x166d60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x166D64u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166d60) {
            ctx->pc = 0x166D98u;
            goto label_166d98;
        }
    }
    ctx->pc = 0x166D68u;
    // 0x166d68: 0xc05df24
    ctx->pc = 0x166D68u;
    SET_GPR_U32(ctx, 31, 0x166D70u);
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D70u; }
    }
    if (ctx->pc != 0x166D70u) { return; }
    ctx->pc = 0x166D70u;
    // 0x166d70: 0x200202d
    ctx->pc = 0x166d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d74: 0x24050003
    ctx->pc = 0x166d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x166d78: 0x14400007
    ctx->pc = 0x166D78u;
    {
        const bool branch_taken_0x166d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x166D7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x166d78) {
            ctx->pc = 0x166D98u;
            goto label_166d98;
        }
    }
    ctx->pc = 0x166D80u;
    // 0x166d80: 0xc05df24
    ctx->pc = 0x166D80u;
    SET_GPR_U32(ctx, 31, 0x166D88u);
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D88u; }
    }
    if (ctx->pc != 0x166D88u) { return; }
    ctx->pc = 0x166D88u;
    // 0x166d88: 0x24030002
    ctx->pc = 0x166d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x166d8c: 0x302d
    ctx->pc = 0x166d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d90: 0x62300b
    ctx->pc = 0x166d90u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x166d94: 0x200202d
    ctx->pc = 0x166d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166d98:
    // 0x166d98: 0xdfb00000
    ctx->pc = 0x166d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166d9c: 0x220282d
    ctx->pc = 0x166d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166da0: 0xdfb10008
    ctx->pc = 0x166da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166da4: 0xdfbf0010
    ctx->pc = 0x166da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166da8: 0x8059b7e
    ctx->pc = 0x166DA8u;
    ctx->pc = 0x166DACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x166DF8u;
    entry_166df8_0x166e68(rdram, ctx, runtime); return;
    ctx->pc = 0x166DB0u;
}
