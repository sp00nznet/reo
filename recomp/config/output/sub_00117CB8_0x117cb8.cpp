#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117CB8
// Address: 0x117cb8 - 0x117eb0
void sub_00117CB8_0x117cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117cb8u;

    // 0x117cb8: 0x27bdff80
    ctx->pc = 0x117cb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x117cbc: 0xffb60060
    ctx->pc = 0x117cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x117cc0: 0xffb50050
    ctx->pc = 0x117cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x117cc4: 0x140b02d
    ctx->pc = 0x117cc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cc8: 0xffb40040
    ctx->pc = 0x117cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117ccc: 0x80a82d
    ctx->pc = 0x117cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd0: 0xffb30030
    ctx->pc = 0x117cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117cd4: 0x120a02d
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd8: 0xffb20020
    ctx->pc = 0x117cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117cdc: 0x100982d
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ce0: 0xffb10010
    ctx->pc = 0x117ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117ce4: 0xe0902d
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ce8: 0xffb00000
    ctx->pc = 0x117ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117cec: 0xc0882d
    ctx->pc = 0x117cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf0: 0xffbf0070
    ctx->pc = 0x117cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x117cf4: 0xc047598
    ctx->pc = 0x117CF4u;
    SET_GPR_U32(ctx, 31, 0x117CFCu);
    ctx->pc = 0x117CF8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CFCu; }
    }
    if (ctx->pc != 0x117CFCu) { return; }
    ctx->pc = 0x117CFCu;
    // 0x117cfc: 0xaea0003c
    ctx->pc = 0x117cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 0));
    // 0x117d00: 0xaea00038
    ctx->pc = 0x117d00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 0));
    // 0x117d04: 0xaeb00000
    ctx->pc = 0x117d04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x117d08: 0x8ec20008
    ctx->pc = 0x117d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x117d0c: 0xaeb10004
    ctx->pc = 0x117d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x117d10: 0xaeb20008
    ctx->pc = 0x117d10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x117d14: 0xaeb30010
    ctx->pc = 0x117d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 19));
    // 0x117d18: 0xaeb40014
    ctx->pc = 0x117d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
    // 0x117d1c: 0x14400003
    ctx->pc = 0x117D1Cu;
    {
        const bool branch_taken_0x117d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x117D20u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 22));
        if (branch_taken_0x117d1c) {
            ctx->pc = 0x117D2Cu;
            goto label_117d2c;
        }
    }
    ctx->pc = 0x117D24u;
    // 0x117d24: 0x1000000e
    ctx->pc = 0x117D24u;
    {
        const bool branch_taken_0x117d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117D28u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
        if (branch_taken_0x117d24) {
            ctx->pc = 0x117D60u;
            goto label_117d60;
        }
    }
    ctx->pc = 0x117D2Cu;
label_117d2c:
    // 0x117d2c: 0x40202d
    ctx->pc = 0x117d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d30: 0x8c830038
    ctx->pc = 0x117d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x117d34: 0x5060000a
    ctx->pc = 0x117D34u;
    {
        const bool branch_taken_0x117d34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x117d34) {
            ctx->pc = 0x117D38u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
            ctx->pc = 0x117D60u;
            goto label_117d60;
        }
    }
    ctx->pc = 0x117D3Cu;
    // 0x117d3c: 0x0
    ctx->pc = 0x117d3cu;
    // NOP
label_117d40:
    // 0x117d40: 0x60202d
    ctx->pc = 0x117d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d44: 0x8c820038
    ctx->pc = 0x117d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x117d48: 0x40182d
    ctx->pc = 0x117d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d4c: 0x0
    ctx->pc = 0x117d4cu;
    // NOP
    // 0x117d50: 0x0
    ctx->pc = 0x117d50u;
    // NOP
    // 0x117d54: 0x1440fffa
    ctx->pc = 0x117D54u;
    {
        const bool branch_taken_0x117d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117d54) {
            ctx->pc = 0x117D40u;
            goto label_117d40;
        }
    }
    ctx->pc = 0x117D5Cu;
    // 0x117d5c: 0xac950038
    ctx->pc = 0x117d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
label_117d60:
    // 0x117d60: 0xdfbf0070
    ctx->pc = 0x117d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117d64: 0xdfb60060
    ctx->pc = 0x117d64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117d68: 0xdfb50050
    ctx->pc = 0x117d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117d6c: 0xdfb40040
    ctx->pc = 0x117d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117d70: 0xdfb30030
    ctx->pc = 0x117d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d74: 0xdfb20020
    ctx->pc = 0x117d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d78: 0xdfb10010
    ctx->pc = 0x117d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d7c: 0xdfb00000
    ctx->pc = 0x117d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d80: 0x80475ae
    ctx->pc = 0x117D80u;
    ctx->pc = 0x117D84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x117D88u;
    // 0x117d88: 0x27bdffc0
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117d8c: 0xffb20020
    ctx->pc = 0x117d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117d90: 0xffb10010
    ctx->pc = 0x117d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117d94: 0xa0902d
    ctx->pc = 0x117d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d98: 0xffb00000
    ctx->pc = 0x117d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117d9c: 0xffbf0030
    ctx->pc = 0x117d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117da0: 0xc047598
    ctx->pc = 0x117DA0u;
    SET_GPR_U32(ctx, 31, 0x117DA8u);
    ctx->pc = 0x117DA4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DA8u; }
    }
    if (ctx->pc != 0x117DA8u) { return; }
    ctx->pc = 0x117DA8u;
    // 0x117da8: 0x8e500008
    ctx->pc = 0x117da8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x117dac: 0x16110004
    ctx->pc = 0x117DACu;
    {
        const bool branch_taken_0x117dac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        if (branch_taken_0x117dac) {
            ctx->pc = 0x117DC0u;
            goto label_117dc0;
        }
    }
    ctx->pc = 0x117DB4u;
    // 0x117db4: 0x8e020038
    ctx->pc = 0x117db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x117db8: 0x1000000f
    ctx->pc = 0x117DB8u;
    {
        const bool branch_taken_0x117db8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117DBCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x117db8) {
            ctx->pc = 0x117DF8u;
            goto label_117df8;
        }
    }
    ctx->pc = 0x117DC0u;
label_117dc0:
    // 0x117dc0: 0x1200000d
    ctx->pc = 0x117DC0u;
    {
        const bool branch_taken_0x117dc0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x117dc0) {
            ctx->pc = 0x117DF8u;
            goto label_117df8;
        }
    }
    ctx->pc = 0x117DC8u;
    // 0x117dc8: 0x8e030038
    ctx->pc = 0x117dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x117dcc: 0x50710009
    ctx->pc = 0x117DCCu;
    {
        const bool branch_taken_0x117dcc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        if (branch_taken_0x117dcc) {
            ctx->pc = 0x117DD0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x117DF4u;
            goto label_117df4;
        }
    }
    ctx->pc = 0x117DD4u;
    // 0x117dd4: 0x0
    ctx->pc = 0x117dd4u;
    // NOP
label_117dd8:
    // 0x117dd8: 0x60802d
    ctx->pc = 0x117dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ddc: 0x12000006
    ctx->pc = 0x117DDCu;
    {
        const bool branch_taken_0x117ddc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x117ddc) {
            ctx->pc = 0x117DF8u;
            goto label_117df8;
        }
    }
    ctx->pc = 0x117DE4u;
    // 0x117de4: 0x8e020038
    ctx->pc = 0x117de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x117de8: 0x1451fffb
    ctx->pc = 0x117DE8u;
    {
        const bool branch_taken_0x117de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x117DECu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117de8) {
            ctx->pc = 0x117DD8u;
            goto label_117dd8;
        }
    }
    ctx->pc = 0x117DF0u;
    // 0x117df0: 0x8e220038
    ctx->pc = 0x117df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_117df4:
    // 0x117df4: 0xae020038
    ctx->pc = 0x117df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_117df8:
    // 0x117df8: 0xc0475ae
    ctx->pc = 0x117DF8u;
    SET_GPR_U32(ctx, 31, 0x117E00u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E00u; }
    }
    if (ctx->pc != 0x117E00u) { return; }
    ctx->pc = 0x117E00u;
    // 0x117e00: 0x200102d
    ctx->pc = 0x117e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e04: 0xdfbf0030
    ctx->pc = 0x117e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117e08: 0xdfb20020
    ctx->pc = 0x117e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117e0c: 0xdfb10010
    ctx->pc = 0x117e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e10: 0xdfb00000
    ctx->pc = 0x117e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e14: 0x3e00008
    ctx->pc = 0x117E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D2Cu: goto label_117d2c;
            case 0x117D40u: goto label_117d40;
            case 0x117D60u: goto label_117d60;
            case 0x117DC0u: goto label_117dc0;
            case 0x117DD8u: goto label_117dd8;
            case 0x117DF4u: goto label_117df4;
            case 0x117DF8u: goto label_117df8;
            case 0x117E58u: goto label_117e58;
            case 0x117E70u: goto label_117e70;
            case 0x117E8Cu: goto label_117e8c;
            case 0x117E90u: goto label_117e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117E1Cu;
    // 0x117e1c: 0x0
    ctx->pc = 0x117e1cu;
    // NOP
    // 0x117e20: 0x27bdffd0
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117e24: 0xffb10010
    ctx->pc = 0x117e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117e28: 0xffb00000
    ctx->pc = 0x117e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117e2c: 0xffbf0020
    ctx->pc = 0x117e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117e30: 0xc047598
    ctx->pc = 0x117E30u;
    SET_GPR_U32(ctx, 31, 0x117E38u);
    ctx->pc = 0x117E34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E38u; }
    }
    if (ctx->pc != 0x117E38u) { return; }
    ctx->pc = 0x117E38u;
    // 0x117e38: 0x3c030026
    ctx->pc = 0x117e38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x117e3c: 0x2463c9c0
    ctx->pc = 0x117e3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953408));
    // 0x117e40: 0x8c700028
    ctx->pc = 0x117e40u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x117e44: 0x16110004
    ctx->pc = 0x117E44u;
    {
        const bool branch_taken_0x117e44 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        if (branch_taken_0x117e44) {
            ctx->pc = 0x117E58u;
            goto label_117e58;
        }
    }
    ctx->pc = 0x117E4Cu;
    // 0x117e4c: 0x8e020014
    ctx->pc = 0x117e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x117e50: 0x1000000f
    ctx->pc = 0x117E50u;
    {
        const bool branch_taken_0x117e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117E54u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x117e50) {
            ctx->pc = 0x117E90u;
            goto label_117e90;
        }
    }
    ctx->pc = 0x117E58u;
label_117e58:
    // 0x117e58: 0x1200000d
    ctx->pc = 0x117E58u;
    {
        const bool branch_taken_0x117e58 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x117e58) {
            ctx->pc = 0x117E90u;
            goto label_117e90;
        }
    }
    ctx->pc = 0x117E60u;
    // 0x117e60: 0x8e030014
    ctx->pc = 0x117e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x117e64: 0x50710009
    ctx->pc = 0x117E64u;
    {
        const bool branch_taken_0x117e64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        if (branch_taken_0x117e64) {
            ctx->pc = 0x117E68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E6Cu;
    // 0x117e6c: 0x0
    ctx->pc = 0x117e6cu;
    // NOP
label_117e70:
    // 0x117e70: 0x60802d
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e74: 0x12000006
    ctx->pc = 0x117E74u;
    {
        const bool branch_taken_0x117e74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x117e74) {
            ctx->pc = 0x117E90u;
            goto label_117e90;
        }
    }
    ctx->pc = 0x117E7Cu;
    // 0x117e7c: 0x8e020014
    ctx->pc = 0x117e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x117e80: 0x1451fffb
    ctx->pc = 0x117E80u;
    {
        const bool branch_taken_0x117e80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x117E84u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117e80) {
            ctx->pc = 0x117E70u;
            goto label_117e70;
        }
    }
    ctx->pc = 0x117E88u;
    // 0x117e88: 0x8e220014
    ctx->pc = 0x117e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_117e8c:
    // 0x117e8c: 0xae020014
    ctx->pc = 0x117e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_117e90:
    // 0x117e90: 0xc0475ae
    ctx->pc = 0x117E90u;
    SET_GPR_U32(ctx, 31, 0x117E98u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E98u; }
    }
    if (ctx->pc != 0x117E98u) { return; }
    ctx->pc = 0x117E98u;
    // 0x117e98: 0x200102d
    ctx->pc = 0x117e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e9c: 0xdfbf0020
    ctx->pc = 0x117e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117ea0: 0xdfb10010
    ctx->pc = 0x117ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ea4: 0xdfb00000
    ctx->pc = 0x117ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117ea8: 0x3e00008
    ctx->pc = 0x117EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117EACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D2Cu: goto label_117d2c;
            case 0x117D40u: goto label_117d40;
            case 0x117D60u: goto label_117d60;
            case 0x117DC0u: goto label_117dc0;
            case 0x117DD8u: goto label_117dd8;
            case 0x117DF4u: goto label_117df4;
            case 0x117DF8u: goto label_117df8;
            case 0x117E58u: goto label_117e58;
            case 0x117E70u: goto label_117e70;
            case 0x117E8Cu: goto label_117e8c;
            case 0x117E90u: goto label_117e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117EB0u;
}
