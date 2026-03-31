#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169CC0
// Address: 0x169cc0 - 0x169d58
void sub_00169CC0_0x169cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169cc0u;

    // 0x169cc0: 0x27bdffe0
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169cc4: 0xffb00000
    ctx->pc = 0x169cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169cc8: 0x80802d
    ctx->pc = 0x169cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ccc: 0xffb10008
    ctx->pc = 0x169cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169cd0: 0xa0882d
    ctx->pc = 0x169cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cd4: 0xffb20010
    ctx->pc = 0x169cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169cd8: 0xc0902d
    ctx->pc = 0x169cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cdc: 0x16000006
    ctx->pc = 0x169CDCu;
    {
        const bool branch_taken_0x169cdc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x169CE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x169cdc) {
            ctx->pc = 0x169CF8u;
            goto label_169cf8;
        }
    }
    ctx->pc = 0x169CE4u;
    // 0x169ce4: 0x3c040023
    ctx->pc = 0x169ce4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x169ce8: 0xc05a756
    ctx->pc = 0x169CE8u;
    SET_GPR_U32(ctx, 31, 0x169CF0u);
    ctx->pc = 0x169CECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963492));
    ctx->pc = 0x169D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169D58_0x169d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CF0u; }
    }
    if (ctx->pc != 0x169CF0u) { return; }
    ctx->pc = 0x169CF0u;
    // 0x169cf0: 0x10000012
    ctx->pc = 0x169CF0u;
    {
        const bool branch_taken_0x169cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169CF4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x169cf0) {
            ctx->pc = 0x169D3Cu;
            goto label_169d3c;
        }
    }
    ctx->pc = 0x169CF8u;
label_169cf8:
    // 0x169cf8: 0xc05a78c
    ctx->pc = 0x169CF8u;
    SET_GPR_U32(ctx, 31, 0x169D00u);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D00u; }
    }
    if (ctx->pc != 0x169D00u) { return; }
    ctx->pc = 0x169D00u;
    // 0x169d00: 0x3c05ff00
    ctx->pc = 0x169d00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x169d04: 0x10400008
    ctx->pc = 0x169D04u;
    {
        const bool branch_taken_0x169d04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169D08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169d04) {
            ctx->pc = 0x169D28u;
            goto label_169d28;
        }
    }
    ctx->pc = 0x169D0Cu;
    // 0x169d0c: 0xdfb00000
    ctx->pc = 0x169d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d10: 0x34a50101
    ctx->pc = 0x169d10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 257));
    // 0x169d14: 0xdfb10008
    ctx->pc = 0x169d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169d18: 0xdfb20010
    ctx->pc = 0x169d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d1c: 0xdfbf0018
    ctx->pc = 0x169d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d20: 0x805a704
    ctx->pc = 0x169D20u;
    ctx->pc = 0x169D24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x169D28u;
label_169d28:
    // 0x169d28: 0x2604098c
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2444));
    // 0x169d2c: 0x220282d
    ctx->pc = 0x169d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d30: 0xc05a756
    ctx->pc = 0x169D30u;
    SET_GPR_U32(ctx, 31, 0x169D38u);
    ctx->pc = 0x169D34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169D58_0x169d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D38u; }
    }
    if (ctx->pc != 0x169D38u) { return; }
    ctx->pc = 0x169D38u;
    // 0x169d38: 0xdfb00000
    ctx->pc = 0x169d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169d3c:
    // 0x169d3c: 0x102d
    ctx->pc = 0x169d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d40: 0xdfb10008
    ctx->pc = 0x169d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169d44: 0xdfb20010
    ctx->pc = 0x169d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d48: 0xdfbf0018
    ctx->pc = 0x169d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d4c: 0x3e00008
    ctx->pc = 0x169D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169CF8u: goto label_169cf8;
            case 0x169D28u: goto label_169d28;
            case 0x169D3Cu: goto label_169d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169D54u;
    // 0x169d54: 0x0
    ctx->pc = 0x169d54u;
    // NOP
}
