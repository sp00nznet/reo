#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D950
// Address: 0x12d950 - 0x12da30
void sub_0012D950_0x12d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d950u;

    // 0x12d950: 0x27bdffe0
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d954: 0xffb00000
    ctx->pc = 0x12d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d958: 0x80802d
    ctx->pc = 0x12d958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d95c: 0xffb10008
    ctx->pc = 0x12d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d960: 0xa0882d
    ctx->pc = 0x12d960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d964: 0xffbf0010
    ctx->pc = 0x12d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d968: 0xc0493d2
    ctx->pc = 0x12D968u;
    SET_GPR_U32(ctx, 31, 0x12D970u);
    ctx->pc = 0x12D96Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F48_0x124f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D970u; }
    }
    if (ctx->pc != 0x12D970u) { return; }
    ctx->pc = 0x12D970u;
    // 0x12d970: 0x1840000b
    ctx->pc = 0x12D970u;
    {
        const bool branch_taken_0x12d970 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12D974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
        if (branch_taken_0x12d970) {
            ctx->pc = 0x12D9A0u;
            goto label_12d9a0;
        }
    }
    ctx->pc = 0x12D978u;
    // 0x12d978: 0x92020001
    ctx->pc = 0x12d978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x12d97c: 0x2442fffe
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x12d980: 0x2c420002
    ctx->pc = 0x12d980u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x12d984: 0x50400006
    ctx->pc = 0x12D984u;
    {
        const bool branch_taken_0x12d984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d984) {
            ctx->pc = 0x12D988u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
            ctx->pc = 0x12D9A0u;
            goto label_12d9a0;
        }
    }
    ctx->pc = 0x12D98Cu;
    // 0x12d98c: 0x8e040004
    ctx->pc = 0x12d98cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12d990: 0xc0493d6
    ctx->pc = 0x12D990u;
    SET_GPR_U32(ctx, 31, 0x12D998u);
    ctx->pc = 0x12D994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F58_0x124f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D998u; }
    }
    if (ctx->pc != 0x12D998u) { return; }
    ctx->pc = 0x12D998u;
    // 0x12d998: 0x10000002
    ctx->pc = 0x12D998u;
    {
        const bool branch_taken_0x12d998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D99Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12d998) {
            ctx->pc = 0x12D9A4u;
            goto label_12d9a4;
        }
    }
    ctx->pc = 0x12D9A0u;
label_12d9a0:
    // 0x12d9a0: 0xdfb00000
    ctx->pc = 0x12d9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d9a4:
    // 0x12d9a4: 0xdfb10008
    ctx->pc = 0x12d9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d9a8: 0xdfbf0010
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d9ac: 0x3e00008
    ctx->pc = 0x12D9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D9B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D9A0u: goto label_12d9a0;
            case 0x12D9A4u: goto label_12d9a4;
            case 0x12DA00u: goto label_12da00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D9B4u;
    // 0x12d9b4: 0x0
    ctx->pc = 0x12d9b4u;
    // NOP
    // 0x12d9b8: 0x27bdfff0
    ctx->pc = 0x12d9b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d9bc: 0xffb00000
    ctx->pc = 0x12d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d9c0: 0x80802d
    ctx->pc = 0x12d9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9c4: 0xffbf0008
    ctx->pc = 0x12d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d9c8: 0xc0493d2
    ctx->pc = 0x12D9C8u;
    SET_GPR_U32(ctx, 31, 0x12D9D0u);
    ctx->pc = 0x12D9CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F48_0x124f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D9D0u; }
    }
    if (ctx->pc != 0x12D9D0u) { return; }
    ctx->pc = 0x12D9D0u;
    // 0x12d9d0: 0x5840000b
    ctx->pc = 0x12D9D0u;
    {
        const bool branch_taken_0x12d9d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12d9d0) {
            ctx->pc = 0x12D9D4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12DA00u;
            goto label_12da00;
        }
    }
    ctx->pc = 0x12D9D8u;
    // 0x12d9d8: 0x92020001
    ctx->pc = 0x12d9d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x12d9dc: 0x2442fffe
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x12d9e0: 0x2c420002
    ctx->pc = 0x12d9e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x12d9e4: 0x50400006
    ctx->pc = 0x12D9E4u;
    {
        const bool branch_taken_0x12d9e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d9e4) {
            ctx->pc = 0x12D9E8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12DA00u;
            goto label_12da00;
        }
    }
    ctx->pc = 0x12D9ECu;
    // 0x12d9ec: 0x8e040004
    ctx->pc = 0x12d9ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12d9f0: 0xdfbf0008
    ctx->pc = 0x12d9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d9f4: 0xdfb00000
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d9f8: 0x80493da
    ctx->pc = 0x12D9F8u;
    ctx->pc = 0x12D9FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F68u;
    entry_124f68_0x124f70(rdram, ctx, runtime); return;
    ctx->pc = 0x12DA00u;
label_12da00:
    // 0x12da00: 0x102d
    ctx->pc = 0x12da00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da04: 0xdfbf0008
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12da08: 0x3e00008
    ctx->pc = 0x12DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D9A0u: goto label_12d9a0;
            case 0x12D9A4u: goto label_12d9a4;
            case 0x12DA00u: goto label_12da00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DA10u;
    // 0x12da10: 0x3e00008
    ctx->pc = 0x12DA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D9A0u: goto label_12d9a0;
            case 0x12D9A4u: goto label_12d9a4;
            case 0x12DA00u: goto label_12da00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DA18u;
    // 0x12da18: 0x27bdfff0
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12da1c: 0xffbf0000
    ctx->pc = 0x12da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12da20: 0x8c840004
    ctx->pc = 0x12da20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12da24: 0xdfbf0000
    ctx->pc = 0x12da24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12da28: 0x80493a0
    ctx->pc = 0x12DA28u;
    ctx->pc = 0x12DA2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E80u;
    entry_124e80_0x124e88(rdram, ctx, runtime); return;
    ctx->pc = 0x12DA30u;
}
