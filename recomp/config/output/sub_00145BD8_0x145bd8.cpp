#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00145BD8
// Address: 0x145bd8 - 0x145c40
void sub_00145BD8_0x145bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x145bd8u;

    // 0x145bd8: 0x27bdffe0
    ctx->pc = 0x145bd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145bdc: 0x24050005
    ctx->pc = 0x145bdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x145be0: 0xffb00000
    ctx->pc = 0x145be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145be4: 0xffbf0010
    ctx->pc = 0x145be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145be8: 0xc05167a
    ctx->pc = 0x145BE8u;
    SET_GPR_U32(ctx, 31, 0x145BF0u);
    ctx->pc = 0x145BECu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BF0u; }
    }
    if (ctx->pc != 0x145BF0u) { return; }
    ctx->pc = 0x145BF0u;
    // 0x145bf0: 0xae0201cc
    ctx->pc = 0x145bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
    // 0x145bf4: 0x200202d
    ctx->pc = 0x145bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bf8: 0xc05167a
    ctx->pc = 0x145BF8u;
    SET_GPR_U32(ctx, 31, 0x145C00u);
    ctx->pc = 0x145BFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C00u; }
    }
    if (ctx->pc != 0x145C00u) { return; }
    ctx->pc = 0x145C00u;
    // 0x145c00: 0x1040000a
    ctx->pc = 0x145C00u;
    {
        const bool branch_taken_0x145c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x145C04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x145c00) {
            ctx->pc = 0x145C2Cu;
            goto label_145c2c;
        }
    }
    ctx->pc = 0x145C08u;
    // 0x145c08: 0x200202d
    ctx->pc = 0x145c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c0c: 0xc05167a
    ctx->pc = 0x145C0Cu;
    SET_GPR_U32(ctx, 31, 0x145C14u);
    ctx->pc = 0x145C10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1459E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001459E8_0x1459e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C14u; }
    }
    if (ctx->pc != 0x145C14u) { return; }
    ctx->pc = 0x145C14u;
    // 0x145c14: 0x200202d
    ctx->pc = 0x145c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c18: 0xc051636
    ctx->pc = 0x145C18u;
    SET_GPR_U32(ctx, 31, 0x145C20u);
    ctx->pc = 0x145C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1458D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001458D8_0x1458d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C20u; }
    }
    if (ctx->pc != 0x145C20u) { return; }
    ctx->pc = 0x145C20u;
    // 0x145c20: 0xc051850
    ctx->pc = 0x145C20u;
    SET_GPR_U32(ctx, 31, 0x145C28u);
    ctx->pc = 0x145C24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x146140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146140_0x146140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C28u; }
    }
    if (ctx->pc != 0x145C28u) { return; }
    ctx->pc = 0x145C28u;
    // 0x145c28: 0xdfbf0010
    ctx->pc = 0x145c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_145c2c:
    // 0x145c2c: 0x102d
    ctx->pc = 0x145c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c30: 0xdfb00000
    ctx->pc = 0x145c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145c34: 0x3e00008
    ctx->pc = 0x145C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145C38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145C2Cu: goto label_145c2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145C3Cu;
    // 0x145c3c: 0x0
    ctx->pc = 0x145c3cu;
    // NOP
}
