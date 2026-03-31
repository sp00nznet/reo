#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C89D0
// Address: 0x1c89d0 - 0x1c8a50
void sub_001C89D0_0x1c89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c89d0u;

    // 0x1c89d0: 0x27bdffc0
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c89d4: 0xffbf0030
    ctx->pc = 0x1c89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c89d8: 0x7fb20020
    ctx->pc = 0x1c89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c89dc: 0x7fb10010
    ctx->pc = 0x1c89dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c89e0: 0xa0902d
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e4: 0x7fb00000
    ctx->pc = 0x1c89e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c89e8: 0x80882d
    ctx->pc = 0x1c89e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89ec: 0x8c820004
    ctx->pc = 0x1c89ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c89f0: 0x8c83000c
    ctx->pc = 0x1c89f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c89f4: 0x461021
    ctx->pc = 0x1c89f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c89f8: 0x62082a
    ctx->pc = 0x1c89f8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c89fc: 0x10200003
    ctx->pc = 0x1C89FCu;
    {
        const bool branch_taken_0x1c89fc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8A00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c89fc) {
            ctx->pc = 0x1C8A0Cu;
            goto label_1c8a0c;
        }
    }
    ctx->pc = 0x1C8A04u;
    // 0x1c8a04: 0xc071ef0
    ctx->pc = 0x1C8A04u;
    SET_GPR_U32(ctx, 31, 0x1C8A0Cu);
    ctx->pc = 0x1C8A08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1C7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7BC0_0x1c7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A0Cu; }
    }
    if (ctx->pc != 0x1C8A0Cu) { return; }
    ctx->pc = 0x1C8A0Cu;
label_1c8a0c:
    // 0x1c8a0c: 0x8e230008
    ctx->pc = 0x1c8a0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c8a10: 0x240202d
    ctx->pc = 0x1c8a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a14: 0x8e220004
    ctx->pc = 0x1c8a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c8a18: 0x200302d
    ctx->pc = 0x1c8a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a1c: 0xc041eac
    ctx->pc = 0x1C8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A24u);
    ctx->pc = 0x1C8A20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A24u; }
    }
    if (ctx->pc != 0x1C8A24u) { return; }
    ctx->pc = 0x1C8A24u;
    // 0x1c8a24: 0x8e230004
    ctx->pc = 0x1c8a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c8a28: 0x701821
    ctx->pc = 0x1c8a28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c8a2c: 0xae230004
    ctx->pc = 0x1c8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1c8a30: 0xdfbf0030
    ctx->pc = 0x1c8a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8a34: 0x7bb20020
    ctx->pc = 0x1c8a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8a38: 0x7bb10010
    ctx->pc = 0x1c8a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8a3c: 0x7bb00000
    ctx->pc = 0x1c8a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8a40: 0x3e00008
    ctx->pc = 0x1C8A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8A0Cu: goto label_1c8a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8A48u;
    // 0x1c8a48: 0x0
    ctx->pc = 0x1c8a48u;
    // NOP
    // 0x1c8a4c: 0x0
    ctx->pc = 0x1c8a4cu;
    // NOP
}
