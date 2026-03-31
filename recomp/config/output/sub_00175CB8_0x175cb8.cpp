#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175CB8
// Address: 0x175cb8 - 0x175d58
void sub_00175CB8_0x175cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175cb8u;

    // 0x175cb8: 0x80402d
    ctx->pc = 0x175cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cbc: 0x2402fffb
    ctx->pc = 0x175cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x175cc0: 0x8d060250
    ctx->pc = 0x175cc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 592)));
    // 0x175cc4: 0x14c20004
    ctx->pc = 0x175CC4u;
    {
        const bool branch_taken_0x175cc4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x175CC8u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175cc4) {
            ctx->pc = 0x175CD8u;
            goto label_175cd8;
        }
    }
    ctx->pc = 0x175CCCu;
    // 0x175ccc: 0x3e00008
    ctx->pc = 0x175CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 592), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175CD8u: goto label_175cd8;
            case 0x175D48u: goto label_175d48;
            case 0x175D4Cu: goto label_175d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175CD4u;
    // 0x175cd4: 0x0
    ctx->pc = 0x175cd4u;
    // NOP
label_175cd8:
    // 0x175cd8: 0x1463823
    ctx->pc = 0x175cd8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x175cdc: 0x10e0001b
    ctx->pc = 0x175CDCu;
    {
        const bool branch_taken_0x175cdc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x175CE0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
        if (branch_taken_0x175cdc) {
            ctx->pc = 0x175D4Cu;
            goto label_175d4c;
        }
    }
    ctx->pc = 0x175CE4u;
    // 0x175ce4: 0x8d030258
    ctx->pc = 0x175ce4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 600)));
    // 0x175ce8: 0x8d02025c
    ctx->pc = 0x175ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 604)));
    // 0x175cec: 0x34a5ffff
    ctx->pc = 0x175cecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x175cf0: 0xe3302a
    ctx->pc = 0x175cf0u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x175cf4: 0x8d090254
    ctx->pc = 0x175cf4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 596)));
    // 0x175cf8: 0x47202a
    ctx->pc = 0x175cf8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x175cfc: 0xe6180a
    ctx->pc = 0x175cfcu;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x175d00: 0xe4100a
    ctx->pc = 0x175d00u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x175d04: 0xad0a0250
    ctx->pc = 0x175d04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 592), GPR_U32(ctx, 10));
    // 0x175d08: 0xad030258
    ctx->pc = 0x175d08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 600), GPR_U32(ctx, 3));
    // 0x175d0c: 0x1125000e
    ctx->pc = 0x175D0Cu;
    {
        const bool branch_taken_0x175d0c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        ctx->pc = 0x175D10u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 604), GPR_U32(ctx, 2));
        if (branch_taken_0x175d0c) {
            ctx->pc = 0x175D48u;
            goto label_175d48;
        }
    }
    ctx->pc = 0x175D14u;
    // 0x175d14: 0xe9102a
    ctx->pc = 0x175d14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
    // 0x175d18: 0x5040000c
    ctx->pc = 0x175D18u;
    {
        const bool branch_taken_0x175d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x175d18) {
            ctx->pc = 0x175D1Cu;
            WRITE32(ADD32(GPR_U32(ctx, 8), 596), GPR_U32(ctx, 7));
            ctx->pc = 0x175D4Cu;
            goto label_175d4c;
        }
    }
    ctx->pc = 0x175D20u;
    // 0x175d20: 0x1271023
    ctx->pc = 0x175d20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x175d24: 0x24440007
    ctx->pc = 0x175d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7));
    // 0x175d28: 0x28430000
    ctx->pc = 0x175d28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x175d2c: 0x83100b
    ctx->pc = 0x175d2cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x175d30: 0x210c3
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x175d34: 0x10400004
    ctx->pc = 0x175D34u;
    {
        const bool branch_taken_0x175d34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175D38u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x175d34) {
            ctx->pc = 0x175D48u;
            goto label_175d48;
        }
    }
    ctx->pc = 0x175D3Cu;
    // 0x175d3c: 0x3e00008
    ctx->pc = 0x175D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D40u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 596), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175CD8u: goto label_175cd8;
            case 0x175D48u: goto label_175d48;
            case 0x175D4Cu: goto label_175d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175D44u;
    // 0x175d44: 0x0
    ctx->pc = 0x175d44u;
    // NOP
label_175d48:
    // 0x175d48: 0xad070254
    ctx->pc = 0x175d48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 596), GPR_U32(ctx, 7));
label_175d4c:
    // 0x175d4c: 0x3e00008
    ctx->pc = 0x175D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175CD8u: goto label_175cd8;
            case 0x175D48u: goto label_175d48;
            case 0x175D4Cu: goto label_175d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175D54u;
    // 0x175d54: 0x0
    ctx->pc = 0x175d54u;
    // NOP
}
