#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DBB0
// Address: 0x18dbb0 - 0x18dc00
void sub_0018DBB0_0x18dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dbb0u;

    // 0x18dbb0: 0x10000006
    ctx->pc = 0x18DBB0u;
    {
        const bool branch_taken_0x18dbb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DBB4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18dbb0) {
            ctx->pc = 0x18DBCCu;
            goto label_18dbcc;
        }
    }
    ctx->pc = 0x18DBB8u;
label_18dbb8:
    // 0x18dbb8: 0x24e70001
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18dbbc: 0x24650001
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18dbc0: 0x80630000
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dbc4: 0xa0830000
    ctx->pc = 0x18dbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18dbc8: 0x24840001
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_18dbcc:
    // 0x18dbcc: 0xe6182a
    ctx->pc = 0x18dbccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x18dbd0: 0x1460fff9
    ctx->pc = 0x18DBD0u;
    {
        const bool branch_taken_0x18dbd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18DBD4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18dbd0) {
            ctx->pc = 0x18DBB8u;
            goto label_18dbb8;
        }
    }
    ctx->pc = 0x18DBD8u;
    // 0x18dbd8: 0x3e00008
    ctx->pc = 0x18DBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DBB8u: goto label_18dbb8;
            case 0x18DBCCu: goto label_18dbcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DBE0u;
    // 0x18dbe0: 0x80282d
    ctx->pc = 0x18dbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe4: 0x302d
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe8: 0x3c04002a
    ctx->pc = 0x18dbe8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x18dbec: 0x806267c
    ctx->pc = 0x18DBECu;
    ctx->pc = 0x18DBF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    ctx->pc = 0x1899F0u;
    sub_001899F0_0x1899f0(rdram, ctx, runtime); return;
    ctx->pc = 0x18DBF4u;
    // 0x18dbf4: 0x0
    ctx->pc = 0x18dbf4u;
    // NOP
    // 0x18dbf8: 0x0
    ctx->pc = 0x18dbf8u;
    // NOP
    // 0x18dbfc: 0x0
    ctx->pc = 0x18dbfcu;
    // NOP
}
