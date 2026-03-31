#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B078
// Address: 0x15b078 - 0x15b148
void sub_0015B078_0x15b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b078u;

    // 0x15b078: 0x3c030026
    ctx->pc = 0x15b078u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x15b07c: 0x3c020024
    ctx->pc = 0x15b07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x15b080: 0x27bdffe0
    ctx->pc = 0x15b080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b084: 0x24634c68
    ctx->pc = 0x15b084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19560));
    // 0x15b088: 0x2442e5c0
    ctx->pc = 0x15b088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x15b08c: 0xffb00000
    ctx->pc = 0x15b08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b090: 0xffb10008
    ctx->pc = 0x15b090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15b094: 0x80882d
    ctx->pc = 0x15b094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b098: 0xffbf0010
    ctx->pc = 0x15b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15b09c: 0xa0802d
    ctx->pc = 0x15b09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0a0: 0xc056c52
    ctx->pc = 0x15B0A0u;
    SET_GPR_U32(ctx, 31, 0x15B0A8u);
    ctx->pc = 0x15B0A4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x15B148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B148_0x15b148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0A8u; }
    }
    if (ctx->pc != 0x15B0A8u) { return; }
    ctx->pc = 0x15B0A8u;
    // 0x15b0a8: 0x40202d
    ctx->pc = 0x15b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0ac: 0x1080000e
    ctx->pc = 0x15B0ACu;
    {
        const bool branch_taken_0x15b0ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15b0ac) {
            ctx->pc = 0x15B0E8u;
            goto label_15b0e8;
        }
    }
    ctx->pc = 0x15B0B4u;
    // 0x15b0b4: 0x3c03ff03
    ctx->pc = 0x15b0b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65283 << 16));
    // 0x15b0b8: 0x3463ff05
    ctx->pc = 0x15b0b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65285));
    // 0x15b0bc: 0x5083001e
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B0C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x15B138u;
            goto label_15b138;
        }
    }
    ctx->pc = 0x15B0C4u;
    // 0x15b0c4: 0x0
    ctx->pc = 0x15b0c4u;
    // NOP
label_15b0c8:
    // 0x15b0c8: 0x0
    ctx->pc = 0x15b0c8u;
    // NOP
    // 0x15b0cc: 0x0
    ctx->pc = 0x15b0ccu;
    // NOP
    // 0x15b0d0: 0x0
    ctx->pc = 0x15b0d0u;
    // NOP
    // 0x15b0d4: 0x0
    ctx->pc = 0x15b0d4u;
    // NOP
    // 0x15b0d8: 0x0
    ctx->pc = 0x15b0d8u;
    // NOP
    // 0x15b0dc: 0x1000fffa
    ctx->pc = 0x15B0DCu;
    {
        const bool branch_taken_0x15b0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x15b0dc) {
            ctx->pc = 0x15B0C8u;
            goto label_15b0c8;
        }
    }
    ctx->pc = 0x15B0E4u;
    // 0x15b0e4: 0x0
    ctx->pc = 0x15b0e4u;
    // NOP
label_15b0e8:
    // 0x15b0e8: 0xc056c70
    ctx->pc = 0x15B0E8u;
    SET_GPR_U32(ctx, 31, 0x15B0F0u);
    ctx->pc = 0x15B1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B1C0_0x15b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0F0u; }
    }
    if (ctx->pc != 0x15B0F0u) { return; }
    ctx->pc = 0x15B0F0u;
    // 0x15b0f0: 0xc056c7a
    ctx->pc = 0x15B0F0u;
    SET_GPR_U32(ctx, 31, 0x15B0F8u);
    ctx->pc = 0x15B0F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B1E8_0x15b1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0F8u; }
    }
    if (ctx->pc != 0x15B0F8u) { return; }
    ctx->pc = 0x15B0F8u;
    // 0x15b0f8: 0x220202d
    ctx->pc = 0x15b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0fc: 0xc056cd8
    ctx->pc = 0x15B0FCu;
    SET_GPR_U32(ctx, 31, 0x15B104u);
    ctx->pc = 0x15B100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B360_0x15b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B104u; }
    }
    if (ctx->pc != 0x15B104u) { return; }
    ctx->pc = 0x15B104u;
    // 0x15b104: 0x3c020026
    ctx->pc = 0x15b104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b108: 0xc056384
    ctx->pc = 0x15B108u;
    SET_GPR_U32(ctx, 31, 0x15B110u);
    ctx->pc = 0x15B10Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 19648)));
    ctx->pc = 0x158E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158E10_0x158e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B110u; }
    }
    if (ctx->pc != 0x15B110u) { return; }
    ctx->pc = 0x15B110u;
    // 0x15b110: 0xc056c82
    ctx->pc = 0x15B110u;
    SET_GPR_U32(ctx, 31, 0x15B118u);
    ctx->pc = 0x15B114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1760));
    ctx->pc = 0x15B208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B208_0x15b208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B118u; }
    }
    if (ctx->pc != 0x15B118u) { return; }
    ctx->pc = 0x15B118u;
    // 0x15b118: 0xc056cb8
    ctx->pc = 0x15B118u;
    SET_GPR_U32(ctx, 31, 0x15B120u);
    ctx->pc = 0x15B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B2E0_0x15b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B120u; }
    }
    if (ctx->pc != 0x15B120u) { return; }
    ctx->pc = 0x15B120u;
    // 0x15b120: 0xc056cd6
    ctx->pc = 0x15B120u;
    SET_GPR_U32(ctx, 31, 0x15B128u);
    ctx->pc = 0x15B124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B358_0x15b358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B128u; }
    }
    if (ctx->pc != 0x15B128u) { return; }
    ctx->pc = 0x15B128u;
    // 0x15b128: 0xc056df6
    ctx->pc = 0x15B128u;
    SET_GPR_U32(ctx, 31, 0x15B130u);
    ctx->pc = 0x15B7D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7D8_0x15b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B130u; }
    }
    if (ctx->pc != 0x15B130u) { return; }
    ctx->pc = 0x15B130u;
    // 0x15b130: 0x102d
    ctx->pc = 0x15b130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b134: 0xdfb00000
    ctx->pc = 0x15b134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b138:
    // 0x15b138: 0xdfb10008
    ctx->pc = 0x15b138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b13c: 0xdfbf0010
    ctx->pc = 0x15b13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b140: 0x3e00008
    ctx->pc = 0x15B140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B0C8u: goto label_15b0c8;
            case 0x15B0E8u: goto label_15b0e8;
            case 0x15B138u: goto label_15b138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B148u;
}
