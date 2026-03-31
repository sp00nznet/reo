#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103938
// Address: 0x103938 - 0x103a48
void sub_00103938_0x103938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103938u;

    // 0x103938: 0x27bdfff0
    ctx->pc = 0x103938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10393c: 0xffb00000
    ctx->pc = 0x10393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103940: 0xffbf0008
    ctx->pc = 0x103940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x103944: 0xc041c76
    ctx->pc = 0x103944u;
    SET_GPR_U32(ctx, 31, 0x10394Cu);
    ctx->pc = 0x103948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    ctx->pc = 0x1071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001071D8_0x1071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10394Cu; }
    }
    if (ctx->pc != 0x10394Cu) { return; }
    ctx->pc = 0x10394Cu;
    // 0x10394c: 0x40802d
    ctx->pc = 0x10394cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103950: 0x12000022
    ctx->pc = 0x103950u;
    {
        const bool branch_taken_0x103950 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x103954u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x103950) {
            ctx->pc = 0x1039DCu;
            goto label_1039dc;
        }
    }
    ctx->pc = 0x103958u;
    // 0x103958: 0x8e02fffc
    ctx->pc = 0x103958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x10395c: 0x431024
    ctx->pc = 0x10395cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103960: 0x2447fffc
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x103964: 0x282d
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103968: 0x2ce20025
    ctx->pc = 0x103968u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 37));
    // 0x10396c: 0xe0302d
    ctx->pc = 0x10396cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103970: 0x200202d
    ctx->pc = 0x103970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103974: 0x10400016
    ctx->pc = 0x103974u;
    {
        const bool branch_taken_0x103974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x103978u;
        SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 7), 20));
        if (branch_taken_0x103974) {
            ctx->pc = 0x1039D0u;
            goto label_1039d0;
        }
    }
    ctx->pc = 0x10397Cu;
    // 0x10397c: 0x1500000e
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x103980u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10397c) {
            ctx->pc = 0x1039B8u;
            goto label_1039b8;
        }
    }
    ctx->pc = 0x103984u;
    // 0x103984: 0x2ce2001c
    ctx->pc = 0x103984u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 28));
    // 0x103988: 0xae000000
    ctx->pc = 0x103988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10398c: 0xae000004
    ctx->pc = 0x10398cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x103990: 0x14400009
    ctx->pc = 0x103990u;
    {
        const bool branch_taken_0x103990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103994u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x103990) {
            ctx->pc = 0x1039B8u;
            goto label_1039b8;
        }
    }
    ctx->pc = 0x103998u;
    // 0x103998: 0x2ce20024
    ctx->pc = 0x103998u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 36));
    // 0x10399c: 0xac600000
    ctx->pc = 0x10399cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1039a0: 0x26030010
    ctx->pc = 0x1039a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1039a4: 0x14400004
    ctx->pc = 0x1039A4u;
    {
        const bool branch_taken_0x1039a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1039A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1039a4) {
            ctx->pc = 0x1039B8u;
            goto label_1039b8;
        }
    }
    ctx->pc = 0x1039ACu;
    // 0x1039ac: 0xac600000
    ctx->pc = 0x1039acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1039b0: 0x26030018
    ctx->pc = 0x1039b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 24));
    // 0x1039b4: 0xae000014
    ctx->pc = 0x1039b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1039b8:
    // 0x1039b8: 0xac600000
    ctx->pc = 0x1039b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1039bc: 0x24630004
    ctx->pc = 0x1039bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1039c0: 0xac600004
    ctx->pc = 0x1039c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1039c4: 0x10000004
    ctx->pc = 0x1039C4u;
    {
        const bool branch_taken_0x1039c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1039C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1039c4) {
            ctx->pc = 0x1039D8u;
            goto label_1039d8;
        }
    }
    ctx->pc = 0x1039CCu;
    // 0x1039cc: 0x0
    ctx->pc = 0x1039ccu;
    // NOP
label_1039d0:
    // 0x1039d0: 0xc041f1a
    ctx->pc = 0x1039D0u;
    SET_GPR_U32(ctx, 31, 0x1039D8u);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039D8u; }
    }
    if (ctx->pc != 0x1039D8u) { return; }
    ctx->pc = 0x1039D8u;
label_1039d8:
    // 0x1039d8: 0x200102d
    ctx->pc = 0x1039d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1039dc:
    // 0x1039dc: 0xdfb00000
    ctx->pc = 0x1039dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039e0: 0xdfbf0008
    ctx->pc = 0x1039e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1039e4: 0x3e00008
    ctx->pc = 0x1039E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1039E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1039B8u: goto label_1039b8;
            case 0x1039D0u: goto label_1039d0;
            case 0x1039D8u: goto label_1039d8;
            case 0x1039DCu: goto label_1039dc;
            case 0x103A34u: goto label_103a34;
            case 0x103A38u: goto label_103a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1039ECu;
    // 0x1039ec: 0x0
    ctx->pc = 0x1039ecu;
    // NOP
    // 0x1039f0: 0x27bdffe0
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1039f4: 0x3c020037
    ctx->pc = 0x1039f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x1039f8: 0xffb00000
    ctx->pc = 0x1039f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1039fc: 0x80802d
    ctx->pc = 0x1039fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a00: 0xffb10008
    ctx->pc = 0x103a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103a04: 0x2451f0dc
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
    // 0x103a08: 0xa0202d
    ctx->pc = 0x103a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a0c: 0xffbf0010
    ctx->pc = 0x103a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103a10: 0xc045342
    ctx->pc = 0x103A10u;
    SET_GPR_U32(ctx, 31, 0x103A18u);
    ctx->pc = 0x103A14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114D08_0x114d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A18u; }
    }
    if (ctx->pc != 0x103A18u) { return; }
    ctx->pc = 0x103A18u;
    // 0x103a18: 0x40202d
    ctx->pc = 0x103a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a1c: 0x2403ffff
    ctx->pc = 0x103a1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103a20: 0x54830005
    ctx->pc = 0x103A20u;
    {
        const bool branch_taken_0x103a20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x103a20) {
            ctx->pc = 0x103A24u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x103A38u;
            goto label_103a38;
        }
    }
    ctx->pc = 0x103A28u;
    // 0x103a28: 0x8e230000
    ctx->pc = 0x103a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103a2c: 0x54600001
    ctx->pc = 0x103A2Cu;
    {
        const bool branch_taken_0x103a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x103a2c) {
            ctx->pc = 0x103A30u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x103A34u;
            goto label_103a34;
        }
    }
    ctx->pc = 0x103A34u;
label_103a34:
    // 0x103a34: 0xdfb00000
    ctx->pc = 0x103a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103a38:
    // 0x103a38: 0xdfb10008
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103a3c: 0xdfbf0010
    ctx->pc = 0x103a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a40: 0x3e00008
    ctx->pc = 0x103A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1039B8u: goto label_1039b8;
            case 0x1039D0u: goto label_1039d0;
            case 0x1039D8u: goto label_1039d8;
            case 0x1039DCu: goto label_1039dc;
            case 0x103A34u: goto label_103a34;
            case 0x103A38u: goto label_103a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103A48u;
}
