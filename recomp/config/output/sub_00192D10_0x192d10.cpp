#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192D10
// Address: 0x192d10 - 0x192df0
void sub_00192D10_0x192d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192d10u;

    // 0x192d10: 0x30a3ffff
    ctx->pc = 0x192d10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x192d14: 0x80282d
    ctx->pc = 0x192d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192d18:
    // 0x192d18: 0x948200c6
    ctx->pc = 0x192d18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x192d1c: 0x14430003
    ctx->pc = 0x192D1Cu;
    {
        const bool branch_taken_0x192d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x192D20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d1c) {
            ctx->pc = 0x192D2Cu;
            goto label_192d2c;
        }
    }
    ctx->pc = 0x192D24u;
    // 0x192d24: 0x10000013
    ctx->pc = 0x192D24u;
    {
        const bool branch_taken_0x192d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x192d24) {
            ctx->pc = 0x192D74u;
            goto label_192d74;
        }
    }
    ctx->pc = 0x192D2Cu;
label_192d2c:
    // 0x192d2c: 0x8c8200d0
    ctx->pc = 0x192d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x192d30: 0x10400003
    ctx->pc = 0x192D30u;
    {
        const bool branch_taken_0x192d30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192d30) {
            ctx->pc = 0x192D40u;
            goto label_192d40;
        }
    }
    ctx->pc = 0x192D38u;
    // 0x192d38: 0x1000fff7
    ctx->pc = 0x192D38u;
    {
        const bool branch_taken_0x192d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d38) {
            ctx->pc = 0x192D18u;
            goto label_192d18;
        }
    }
    ctx->pc = 0x192D40u;
label_192d40:
    // 0x192d40: 0x8c8200cc
    ctx->pc = 0x192d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x192d44: 0x10400009
    ctx->pc = 0x192D44u;
    {
        const bool branch_taken_0x192d44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192d44) {
            ctx->pc = 0x192D6Cu;
            goto label_192d6c;
        }
    }
    ctx->pc = 0x192D4Cu;
    // 0x192d4c: 0x1000fff2
    ctx->pc = 0x192D4Cu;
    {
        const bool branch_taken_0x192d4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d4c) {
            ctx->pc = 0x192D18u;
            goto label_192d18;
        }
    }
    ctx->pc = 0x192D54u;
label_192d54:
    // 0x192d54: 0x8c8200cc
    ctx->pc = 0x192d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x192d58: 0x10400003
    ctx->pc = 0x192D58u;
    {
        const bool branch_taken_0x192d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192d58) {
            ctx->pc = 0x192D68u;
            goto label_192d68;
        }
    }
    ctx->pc = 0x192D60u;
    // 0x192d60: 0x1000ffed
    ctx->pc = 0x192D60u;
    {
        const bool branch_taken_0x192d60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192D64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d60) {
            ctx->pc = 0x192D18u;
            goto label_192d18;
        }
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x8c8400c8
    ctx->pc = 0x192d68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_192d6c:
    // 0x192d6c: 0x1485fff9
    ctx->pc = 0x192D6Cu;
    {
        const bool branch_taken_0x192d6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x192D70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192d6c) {
            ctx->pc = 0x192D54u;
            goto label_192d54;
        }
    }
    ctx->pc = 0x192D74u;
label_192d74:
    // 0x192d74: 0x3e00008
    ctx->pc = 0x192D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192D18u: goto label_192d18;
            case 0x192D2Cu: goto label_192d2c;
            case 0x192D40u: goto label_192d40;
            case 0x192D54u: goto label_192d54;
            case 0x192D68u: goto label_192d68;
            case 0x192D6Cu: goto label_192d6c;
            case 0x192D74u: goto label_192d74;
            case 0x192DD4u: goto label_192dd4;
            case 0x192DDCu: goto label_192ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192D7Cu;
    // 0x192d7c: 0x0
    ctx->pc = 0x192d7cu;
    // NOP
    // 0x192d80: 0x27bdfff0
    ctx->pc = 0x192d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192d84: 0xffbf0000
    ctx->pc = 0x192d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192d88: 0xc063728
    ctx->pc = 0x192D88u;
    SET_GPR_U32(ctx, 31, 0x192D90u);
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D90u; }
    }
    if (ctx->pc != 0x192D90u) { return; }
    ctx->pc = 0x192D90u;
    // 0x192d90: 0xdfbf0000
    ctx->pc = 0x192d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d94: 0xc4400008
    ctx->pc = 0x192d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d98: 0x3e00008
    ctx->pc = 0x192D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192D18u: goto label_192d18;
            case 0x192D2Cu: goto label_192d2c;
            case 0x192D40u: goto label_192d40;
            case 0x192D54u: goto label_192d54;
            case 0x192D68u: goto label_192d68;
            case 0x192D6Cu: goto label_192d6c;
            case 0x192D74u: goto label_192d74;
            case 0x192DD4u: goto label_192dd4;
            case 0x192DDCu: goto label_192ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192DA0u;
    // 0x192da0: 0x27bdffe0
    ctx->pc = 0x192da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192da4: 0xffbf0010
    ctx->pc = 0x192da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192da8: 0x7fb00000
    ctx->pc = 0x192da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192dac: 0xc063728
    ctx->pc = 0x192DACu;
    SET_GPR_U32(ctx, 31, 0x192DB4u);
    ctx->pc = 0x192DB0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DB4u; }
    }
    if (ctx->pc != 0x192DB4u) { return; }
    ctx->pc = 0x192DB4u;
    // 0x192db4: 0x94430000
    ctx->pc = 0x192db4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192db8: 0x30638000
    ctx->pc = 0x192db8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32768));
    // 0x192dbc: 0x10600005
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DD4u;
            goto label_192dd4;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0xc440000c
    ctx->pc = 0x192dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192dc8: 0xe6000000
    ctx->pc = 0x192dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x192dcc: 0x10000003
    ctx->pc = 0x192DCCu;
    {
        const bool branch_taken_0x192dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192dcc) {
            ctx->pc = 0x192DDCu;
            goto label_192ddc;
        }
    }
    ctx->pc = 0x192DD4u;
label_192dd4:
    // 0x192dd4: 0xae000000
    ctx->pc = 0x192dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x192dd8: 0x102d
    ctx->pc = 0x192dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192ddc:
    // 0x192ddc: 0xdfbf0010
    ctx->pc = 0x192ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192de0: 0x7bb00000
    ctx->pc = 0x192de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192de4: 0x3e00008
    ctx->pc = 0x192DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192DE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192D18u: goto label_192d18;
            case 0x192D2Cu: goto label_192d2c;
            case 0x192D40u: goto label_192d40;
            case 0x192D54u: goto label_192d54;
            case 0x192D68u: goto label_192d68;
            case 0x192D6Cu: goto label_192d6c;
            case 0x192D74u: goto label_192d74;
            case 0x192DD4u: goto label_192dd4;
            case 0x192DDCu: goto label_192ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192DECu;
    // 0x192dec: 0x0
    ctx->pc = 0x192decu;
    // NOP
}
