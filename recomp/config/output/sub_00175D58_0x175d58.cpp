#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175D58
// Address: 0x175d58 - 0x175e00
void sub_00175D58_0x175d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175d58u;

    // 0x175d58: 0xa0302d
    ctx->pc = 0x175d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d5c: 0x8c850250
    ctx->pc = 0x175d5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x175d60: 0x8c820254
    ctx->pc = 0x175d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x175d64: 0x8c830258
    ctx->pc = 0x175d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x175d68: 0xa21021
    ctx->pc = 0x175d68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175d6c: 0xc2202a
    ctx->pc = 0x175d6cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x175d70: 0xa32821
    ctx->pc = 0x175d70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x175d74: 0x14800005
    ctx->pc = 0x175D74u;
    {
        const bool branch_taken_0x175d74 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175D78u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175d74) {
            ctx->pc = 0x175D8Cu;
            goto label_175d8c;
        }
    }
    ctx->pc = 0x175D7Cu;
    // 0x175d7c: 0x3c037fff
    ctx->pc = 0x175d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x175d80: 0xc5102a
    ctx->pc = 0x175d80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x175d84: 0x3463ffff
    ctx->pc = 0x175d84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x175d88: 0xa2180b
    ctx->pc = 0x175d88u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
label_175d8c:
    // 0x175d8c: 0x3e00008
    ctx->pc = 0x175D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175D8Cu: goto label_175d8c;
            case 0x175DC8u: goto label_175dc8;
            case 0x175DDCu: goto label_175ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175D94u;
    // 0x175d94: 0x0
    ctx->pc = 0x175d94u;
    // NOP
    // 0x175d98: 0x27bdffe0
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175d9c: 0x3c030023
    ctx->pc = 0x175d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x175da0: 0xffb00000
    ctx->pc = 0x175da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175da4: 0x2463f138
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963512));
    // 0x175da8: 0xffb10008
    ctx->pc = 0x175da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175dac: 0x24110007
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x175db0: 0xffbf0010
    ctx->pc = 0x175db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175db4: 0x24700054
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 84));
    // 0x175db8: 0x8c620000
    ctx->pc = 0x175db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175dbc: 0x24420001
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x175dc0: 0xac620000
    ctx->pc = 0x175dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x175dc4: 0x8e020000
    ctx->pc = 0x175dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175dc8:
    // 0x175dc8: 0x26100004
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x175dcc: 0x10400003
    ctx->pc = 0x175DCCu;
    {
        const bool branch_taken_0x175dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175DD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175dcc) {
            ctx->pc = 0x175DDCu;
            goto label_175ddc;
        }
    }
    ctx->pc = 0x175DD4u;
    // 0x175dd4: 0xc05d780
    ctx->pc = 0x175DD4u;
    SET_GPR_U32(ctx, 31, 0x175DDCu);
    ctx->pc = 0x175E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175E00_0x175e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DDCu; }
    }
    if (ctx->pc != 0x175DDCu) { return; }
    ctx->pc = 0x175DDCu;
label_175ddc:
    // 0x175ddc: 0x2631ffff
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x175de0: 0x623fff9
    ctx->pc = 0x175DE0u;
    {
        const bool branch_taken_0x175de0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x175de0) {
            ctx->pc = 0x175DE4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x175DC8u;
            goto label_175dc8;
        }
    }
    ctx->pc = 0x175DE8u;
    // 0x175de8: 0xdfb00000
    ctx->pc = 0x175de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175dec: 0xdfb10008
    ctx->pc = 0x175decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175df0: 0xdfbf0010
    ctx->pc = 0x175df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175df4: 0x3e00008
    ctx->pc = 0x175DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175DF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175D8Cu: goto label_175d8c;
            case 0x175DC8u: goto label_175dc8;
            case 0x175DDCu: goto label_175ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175DFCu;
    // 0x175dfc: 0x0
    ctx->pc = 0x175dfcu;
    // NOP
}
