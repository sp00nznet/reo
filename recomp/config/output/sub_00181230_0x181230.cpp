#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181230
// Address: 0x181230 - 0x181310
void sub_00181230_0x181230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181230u;

    // 0x181230: 0x3c030023
    ctx->pc = 0x181230u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x181234: 0x27bdffc0
    ctx->pc = 0x181234u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181238: 0x8c69fa10
    ctx->pc = 0x181238u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x18123c: 0x3c028101
    ctx->pc = 0x18123cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181240: 0xffb10008
    ctx->pc = 0x181240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181244: 0xa0882d
    ctx->pc = 0x181244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181248: 0xffb20010
    ctx->pc = 0x181248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18124c: 0x80902d
    ctx->pc = 0x18124cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181250: 0xffb30018
    ctx->pc = 0x181250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181254: 0x100982d
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181258: 0xffb40020
    ctx->pc = 0x181258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18125c: 0xc0a02d
    ctx->pc = 0x18125cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181260: 0xffb50028
    ctx->pc = 0x181260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x181264: 0xe0a82d
    ctx->pc = 0x181264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181268: 0xffb00000
    ctx->pc = 0x181268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18126c: 0x34428001
    ctx->pc = 0x18126cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181270: 0x1120001e
    ctx->pc = 0x181270u;
    {
        const bool branch_taken_0x181270 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x181274u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x181270) {
            ctx->pc = 0x1812ECu;
            goto label_1812ec;
        }
    }
    ctx->pc = 0x181278u;
    // 0x181278: 0xc061e90
    ctx->pc = 0x181278u;
    SET_GPR_U32(ctx, 31, 0x181280u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181280u; }
    }
    if (ctx->pc != 0x181280u) { return; }
    ctx->pc = 0x181280u;
    // 0x181280: 0x3c030028
    ctx->pc = 0x181280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x181284: 0x14400004
    ctx->pc = 0x181284u;
    {
        const bool branch_taken_0x181284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181288u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x181284) {
            ctx->pc = 0x181298u;
            goto label_181298;
        }
    }
    ctx->pc = 0x18128Cu;
    // 0x18128c: 0x3c028101
    ctx->pc = 0x18128cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181290: 0x10000016
    ctx->pc = 0x181290u;
    {
        const bool branch_taken_0x181290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181294u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181290) {
            ctx->pc = 0x1812ECu;
            goto label_1812ec;
        }
    }
    ctx->pc = 0x181298u;
label_181298:
    // 0x181298: 0x8e030004
    ctx->pc = 0x181298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18129c: 0x3c028101
    ctx->pc = 0x18129cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1812a0: 0x14600012
    ctx->pc = 0x1812A0u;
    {
        const bool branch_taken_0x1812a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1812A4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1812a0) {
            ctx->pc = 0x1812ECu;
            goto label_1812ec;
        }
    }
    ctx->pc = 0x1812A8u;
    // 0x1812a8: 0xc042c56
    ctx->pc = 0x1812A8u;
    SET_GPR_U32(ctx, 31, 0x1812B0u);
    ctx->pc = 0x1812ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812B0u; }
    }
    if (ctx->pc != 0x1812B0u) { return; }
    ctx->pc = 0x1812B0u;
    // 0x1812b0: 0x220282d
    ctx->pc = 0x1812b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812b4: 0x2c430080
    ctx->pc = 0x1812b4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x1812b8: 0x3c028101
    ctx->pc = 0x1812b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1812bc: 0x2604041c
    ctx->pc = 0x1812bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x1812c0: 0x1060000a
    ctx->pc = 0x1812C0u;
    {
        const bool branch_taken_0x1812c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1812C4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x1812c0) {
            ctx->pc = 0x1812ECu;
            goto label_1812ec;
        }
    }
    ctx->pc = 0x1812C8u;
    // 0x1812c8: 0x24020005
    ctx->pc = 0x1812c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1812cc: 0xae120000
    ctx->pc = 0x1812ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1812d0: 0xc042bf0
    ctx->pc = 0x1812D0u;
    SET_GPR_U32(ctx, 31, 0x1812D8u);
    ctx->pc = 0x1812D4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812D8u; }
    }
    if (ctx->pc != 0x1812D8u) { return; }
    ctx->pc = 0x1812D8u;
    // 0x1812d8: 0xae14000c
    ctx->pc = 0x1812d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1812dc: 0xae130014
    ctx->pc = 0x1812dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x1812e0: 0xc062228
    ctx->pc = 0x1812E0u;
    SET_GPR_U32(ctx, 31, 0x1812E8u);
    ctx->pc = 0x1812E4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812E8u; }
    }
    if (ctx->pc != 0x1812E8u) { return; }
    ctx->pc = 0x1812E8u;
    // 0x1812e8: 0x102d
    ctx->pc = 0x1812e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1812ec:
    // 0x1812ec: 0xdfb00000
    ctx->pc = 0x1812ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1812f0: 0xdfb10008
    ctx->pc = 0x1812f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1812f4: 0xdfb20010
    ctx->pc = 0x1812f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1812f8: 0xdfb30018
    ctx->pc = 0x1812f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1812fc: 0xdfb40020
    ctx->pc = 0x1812fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181300: 0xdfb50028
    ctx->pc = 0x181300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x181304: 0xdfbf0030
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181308: 0x3e00008
    ctx->pc = 0x181308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18130Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181298u: goto label_181298;
            case 0x1812ECu: goto label_1812ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181310u;
}
