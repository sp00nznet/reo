#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144948
// Address: 0x144948 - 0x144a08
void sub_00144948_0x144948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144948u;

    // 0x144948: 0x27bdffe0
    ctx->pc = 0x144948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14494c: 0x24030140
    ctx->pc = 0x14494cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x144950: 0xffb00000
    ctx->pc = 0x144950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144954: 0x24090001
    ctx->pc = 0x144954u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144958: 0xffbf0010
    ctx->pc = 0x144958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14495c: 0x100802d
    ctx->pc = 0x14495cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144960: 0x24080002
    ctx->pc = 0x144960u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x144964: 0x8c820828
    ctx->pc = 0x144964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2088)));
    // 0x144968: 0x435018
    ctx->pc = 0x144968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x14496c: 0x1441021
    ctx->pc = 0x14496cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x144970: 0xac4906e4
    ctx->pc = 0x144970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1764), GPR_U32(ctx, 9));
    // 0x144974: 0xac8901c8
    ctx->pc = 0x144974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 9));
    // 0x144978: 0x8c820168
    ctx->pc = 0x144978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x14497c: 0x54480006
    ctx->pc = 0x14497Cu;
    {
        const bool branch_taken_0x14497c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x14497c) {
            ctx->pc = 0x144980u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 396)));
            ctx->pc = 0x144998u;
            goto label_144998;
        }
    }
    ctx->pc = 0x144984u;
    // 0x144984: 0xaca00000
    ctx->pc = 0x144984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x144988: 0xaca00014
    ctx->pc = 0x144988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x14498c: 0xaca00010
    ctx->pc = 0x14498cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x144990: 0xaca00004
    ctx->pc = 0x144990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x144994: 0x8c83018c
    ctx->pc = 0x144994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 396)));
label_144998:
    // 0x144998: 0x24020003
    ctx->pc = 0x144998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14499c: 0x54620003
    ctx->pc = 0x14499Cu;
    {
        const bool branch_taken_0x14499c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x14499c) {
            ctx->pc = 0x1449A0u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->pc = 0x1449ACu;
            goto label_1449ac;
        }
    }
    ctx->pc = 0x1449A4u;
    // 0x1449a4: 0x10000006
    ctx->pc = 0x1449A4u;
    {
        const bool branch_taken_0x1449a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1449A8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        if (branch_taken_0x1449a4) {
            ctx->pc = 0x1449C0u;
            goto label_1449c0;
        }
    }
    ctx->pc = 0x1449ACu;
label_1449ac:
    // 0x1449ac: 0x8c82018c
    ctx->pc = 0x1449acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x1449b0: 0x38420002
    ctx->pc = 0x1449b0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x1449b4: 0x2c420001
    ctx->pc = 0x1449b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1449b8: 0xace20000
    ctx->pc = 0x1449b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1449bc: 0xace20004
    ctx->pc = 0x1449bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1449c0:
    // 0x1449c0: 0x8c830168
    ctx->pc = 0x1449c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x1449c4: 0x24020001
    ctx->pc = 0x1449c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1449c8: 0x54620006
    ctx->pc = 0x1449C8u;
    {
        const bool branch_taken_0x1449c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1449c8) {
            ctx->pc = 0x1449CCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1449E4u;
            goto label_1449e4;
        }
    }
    ctx->pc = 0x1449D0u;
    // 0x1449d0: 0x3c050024
    ctx->pc = 0x1449d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1449d4: 0xc05221c
    ctx->pc = 0x1449D4u;
    SET_GPR_U32(ctx, 31, 0x1449DCu);
    ctx->pc = 0x1449D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958760));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449DCu; }
    }
    if (ctx->pc != 0x1449DCu) { return; }
    ctx->pc = 0x1449DCu;
    // 0x1449dc: 0x482d
    ctx->pc = 0x1449dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e0: 0x8e030000
    ctx->pc = 0x1449e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1449e4:
    // 0x1449e4: 0x2404fffe
    ctx->pc = 0x1449e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1449e8: 0xdfbf0010
    ctx->pc = 0x1449e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1449ec: 0x120102d
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f0: 0x641824
    ctx->pc = 0x1449f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1449f4: 0xae030000
    ctx->pc = 0x1449f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1449f8: 0xdfb00000
    ctx->pc = 0x1449f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1449fc: 0x3e00008
    ctx->pc = 0x1449FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144A00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144998u: goto label_144998;
            case 0x1449ACu: goto label_1449ac;
            case 0x1449C0u: goto label_1449c0;
            case 0x1449E4u: goto label_1449e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144A04u;
    // 0x144a04: 0x0
    ctx->pc = 0x144a04u;
    // NOP
}
