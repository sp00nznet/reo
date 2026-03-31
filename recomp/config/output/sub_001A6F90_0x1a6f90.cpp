#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A6F90
// Address: 0x1a6f90 - 0x1a70c0
void sub_001A6F90_0x1a6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a6f90u;

    // 0x1a6f90: 0x41040
    ctx->pc = 0x1a6f90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6f94: 0x3c03002b
    ctx->pc = 0x1a6f94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a6f98: 0x441021
    ctx->pc = 0x1a6f98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a6f9c: 0x27bdffe0
    ctx->pc = 0x1a6f9cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6fa0: 0x24630a20
    ctx->pc = 0x1a6fa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2592));
    // 0x1a6fa4: 0x210c0
    ctx->pc = 0x1a6fa4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6fa8: 0xffbf0000
    ctx->pc = 0x1a6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6fac: 0x623821
    ctx->pc = 0x1a6facu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6fb0: 0x8ce30000
    ctx->pc = 0x1a6fb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a6fb4: 0x14600003
    ctx->pc = 0x1A6FB4u;
    {
        const bool branch_taken_0x1a6fb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FB8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        if (branch_taken_0x1a6fb4) {
            ctx->pc = 0x1A6FC4u;
            goto label_1a6fc4;
        }
    }
    ctx->pc = 0x1A6FBCu;
    // 0x1a6fbc: 0x10000031
    ctx->pc = 0x1A6FBCu;
    {
        const bool branch_taken_0x1a6fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fbc) {
            ctx->pc = 0x1A7084u;
            goto label_1a7084;
        }
    }
    ctx->pc = 0x1A6FC4u;
label_1a6fc4:
    // 0x1a6fc4: 0x24630a24
    ctx->pc = 0x1a6fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2596));
    // 0x1a6fc8: 0x621821
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6fcc: 0x14c0000e
    ctx->pc = 0x1A6FCCu;
    {
        const bool branch_taken_0x1a6fcc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x1a6fcc) {
            ctx->pc = 0x1A7008u;
            goto label_1a7008;
        }
    }
    ctx->pc = 0x1A6FD4u;
    // 0x1a6fd4: 0x24030003
    ctx->pc = 0x1a6fd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6fd8: 0x10600006
    ctx->pc = 0x1A6FD8u;
    {
        const bool branch_taken_0x1a6fd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FDCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a6fd8) {
            ctx->pc = 0x1A6FF4u;
            goto label_1a6ff4;
        }
    }
    ctx->pc = 0x1A6FE0u;
    // 0x1a6fe0: 0xa3a3001f
    ctx->pc = 0x1a6fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6fe4: 0x24070002
    ctx->pc = 0x1a6fe4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6fe8: 0xa3a0001c
    ctx->pc = 0x1a6fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6fec: 0x1000001c
    ctx->pc = 0x1A6FECu;
    {
        const bool branch_taken_0x1a6fec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6FF0u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1a6fec) {
            ctx->pc = 0x1A7060u;
            goto label_1a7060;
        }
    }
    ctx->pc = 0x1A6FF4u;
label_1a6ff4:
    // 0x1a6ff4: 0x24030002
    ctx->pc = 0x1a6ff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6ff8: 0xa3a0001c
    ctx->pc = 0x1a6ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6ffc: 0xa3a3001f
    ctx->pc = 0x1a6ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7000: 0x10000017
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7004u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A7060u;
            goto label_1a7060;
        }
    }
    ctx->pc = 0x1A7008u;
label_1a7008:
    // 0x1a7008: 0x30a40007
    ctx->pc = 0x1a7008u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 7));
    // 0x1a700c: 0x24030003
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7010: 0x42140
    ctx->pc = 0x1a7010u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a7014: 0xace30000
    ctx->pc = 0x1a7014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a7018: 0x3484000f
    ctx->pc = 0x1a7018u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 15));
    // 0x1a701c: 0x1060000c
    ctx->pc = 0x1A701Cu;
    {
        const bool branch_taken_0x1a701c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7020u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x1a701c) {
            ctx->pc = 0x1A7050u;
            goto label_1a7050;
        }
    }
    ctx->pc = 0x1A7024u;
    // 0x1a7024: 0xa3a3001f
    ctx->pc = 0x1a7024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7028: 0x308500ff
    ctx->pc = 0x1a7028u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x1a702c: 0x30a3007f
    ctx->pc = 0x1a702cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 127));
    // 0x1a7030: 0x24070002
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7034: 0x32040
    ctx->pc = 0x1a7034u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7038: 0x30a30080
    ctx->pc = 0x1a7038u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 128));
    // 0x1a703c: 0x34840001
    ctx->pc = 0x1a703cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x1a7040: 0x319c3
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1a7044: 0xa3a4001c
    ctx->pc = 0x1a7044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7048: 0x10000005
    ctx->pc = 0x1A7048u;
    {
        const bool branch_taken_0x1a7048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A704Cu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a7048) {
            ctx->pc = 0x1A7060u;
            goto label_1a7060;
        }
    }
    ctx->pc = 0x1A7050u;
label_1a7050:
    // 0x1a7050: 0x24030002
    ctx->pc = 0x1a7050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7054: 0xa3a4001c
    ctx->pc = 0x1a7054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7058: 0xa3a3001f
    ctx->pc = 0x1a7058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a705c: 0x24070001
    ctx->pc = 0x1a705cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_1a7060:
    // 0x1a7060: 0x3c03002b
    ctx->pc = 0x1a7060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7064: 0x24050001
    ctx->pc = 0x1a7064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7068: 0x24630a16
    ctx->pc = 0x1a7068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2582));
    // 0x1a706c: 0x27a6001f
    ctx->pc = 0x1a706cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 31));
    // 0x1a7070: 0x621021
    ctx->pc = 0x1a7070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7074: 0x90440000
    ctx->pc = 0x1a7074u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7078: 0xc062620
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x189880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7080u; }
    }
    if (ctx->pc != 0x1A7080u) { return; }
    ctx->pc = 0x1A7080u;
    // 0x1a7080: 0x24020001
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a7084:
    // 0x1a7084: 0xdfbf0000
    ctx->pc = 0x1a7084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7088: 0x3e00008
    ctx->pc = 0x1A7088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A708Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6FC4u: goto label_1a6fc4;
            case 0x1A6FF4u: goto label_1a6ff4;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A7060u: goto label_1a7060;
            case 0x1A7084u: goto label_1a7084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7090u;
    // 0x1a7090: 0x27bdfff0
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7094: 0xffbf0000
    ctx->pc = 0x1a7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7098: 0xc045534
    ctx->pc = 0x1A7098u;
    SET_GPR_U32(ctx, 31, 0x1A70A0u);
    ctx->pc = 0x1A709Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1154D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001154D0_0x1154d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70A0u; }
    }
    if (ctx->pc != 0x1A70A0u) { return; }
    ctx->pc = 0x1A70A0u;
    // 0x1a70a0: 0xf
    ctx->pc = 0x1a70a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a70a4: 0x42000038
    ctx->pc = 0x1a70a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a70a8: 0xdfbf0000
    ctx->pc = 0x1a70a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a70ac: 0x3e00008
    ctx->pc = 0x1A70ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6FC4u: goto label_1a6fc4;
            case 0x1A6FF4u: goto label_1a6ff4;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A7050u: goto label_1a7050;
            case 0x1A7060u: goto label_1a7060;
            case 0x1A7084u: goto label_1a7084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A70B4u;
    // 0x1a70b4: 0x0
    ctx->pc = 0x1a70b4u;
    // NOP
    // 0x1a70b8: 0x0
    ctx->pc = 0x1a70b8u;
    // NOP
    // 0x1a70bc: 0x0
    ctx->pc = 0x1a70bcu;
    // NOP
}
