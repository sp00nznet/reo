#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134C58
// Address: 0x134c58 - 0x134d90
void sub_00134C58_0x134c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134c58u;

    // 0x134c58: 0x27bdfff0
    ctx->pc = 0x134c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134c5c: 0xffb00000
    ctx->pc = 0x134c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134c60: 0x80802d
    ctx->pc = 0x134c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c64: 0x16000008
    ctx->pc = 0x134C64u;
    {
        const bool branch_taken_0x134c64 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x134C68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x134c64) {
            ctx->pc = 0x134C88u;
            goto label_134c88;
        }
    }
    ctx->pc = 0x134C6Cu;
    // 0x134c6c: 0x3c040024
    ctx->pc = 0x134c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x134c70: 0xdfb00000
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134c74: 0xdfbf0008
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134c78: 0x2484b748
    ctx->pc = 0x134c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948680));
    // 0x134c7c: 0x804a034
    ctx->pc = 0x134C7Cu;
    ctx->pc = 0x134C80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x134C84u;
    // 0x134c84: 0x0
    ctx->pc = 0x134c84u;
    // NOP
label_134c88:
    // 0x134c88: 0x82030001
    ctx->pc = 0x134c88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x134c8c: 0x24020003
    ctx->pc = 0x134c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x134c90: 0x14620005
    ctx->pc = 0x134C90u;
    {
        const bool branch_taken_0x134c90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x134C94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x134c90) {
            ctx->pc = 0x134CA8u;
            goto label_134ca8;
        }
    }
    ctx->pc = 0x134C98u;
    // 0x134c98: 0xc04d14c
    ctx->pc = 0x134C98u;
    SET_GPR_U32(ctx, 31, 0x134CA0u);
    ctx->pc = 0x134530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134530_0x134530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CA0u; }
    }
    if (ctx->pc != 0x134CA0u) { return; }
    ctx->pc = 0x134CA0u;
    // 0x134ca0: 0x10000017
    ctx->pc = 0x134CA0u;
    {
        const bool branch_taken_0x134ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x134ca0) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134CA8u;
label_134ca8:
    // 0x134ca8: 0x14620005
    ctx->pc = 0x134CA8u;
    {
        const bool branch_taken_0x134ca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x134CACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x134ca8) {
            ctx->pc = 0x134CC0u;
            goto label_134cc0;
        }
    }
    ctx->pc = 0x134CB0u;
    // 0x134cb0: 0xc04cff8
    ctx->pc = 0x134CB0u;
    SET_GPR_U32(ctx, 31, 0x134CB8u);
    ctx->pc = 0x133FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FE0_0x133fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CB8u; }
    }
    if (ctx->pc != 0x134CB8u) { return; }
    ctx->pc = 0x134CB8u;
    // 0x134cb8: 0x10000011
    ctx->pc = 0x134CB8u;
    {
        const bool branch_taken_0x134cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x134cb8) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134CC0u;
label_134cc0:
    // 0x134cc0: 0x14620005
    ctx->pc = 0x134CC0u;
    {
        const bool branch_taken_0x134cc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x134CC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x134cc0) {
            ctx->pc = 0x134CD8u;
            goto label_134cd8;
        }
    }
    ctx->pc = 0x134CC8u;
    // 0x134cc8: 0xc04d0ee
    ctx->pc = 0x134CC8u;
    SET_GPR_U32(ctx, 31, 0x134CD0u);
    ctx->pc = 0x1343B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001343B8_0x1343b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CD0u; }
    }
    if (ctx->pc != 0x134CD0u) { return; }
    ctx->pc = 0x134CD0u;
    // 0x134cd0: 0x1000000b
    ctx->pc = 0x134CD0u;
    {
        const bool branch_taken_0x134cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x134cd0) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134CD8u;
label_134cd8:
    // 0x134cd8: 0x14620005
    ctx->pc = 0x134CD8u;
    {
        const bool branch_taken_0x134cd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x134CDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x134cd8) {
            ctx->pc = 0x134CF0u;
            goto label_134cf0;
        }
    }
    ctx->pc = 0x134CE0u;
    // 0x134ce0: 0xc04d17c
    ctx->pc = 0x134CE0u;
    SET_GPR_U32(ctx, 31, 0x134CE8u);
    ctx->pc = 0x1345F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001345F0_0x1345f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CE8u; }
    }
    if (ctx->pc != 0x134CE8u) { return; }
    ctx->pc = 0x134CE8u;
    // 0x134ce8: 0x10000005
    ctx->pc = 0x134CE8u;
    {
        const bool branch_taken_0x134ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x134ce8) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134CF0u;
label_134cf0:
    // 0x134cf0: 0x14620003
    ctx->pc = 0x134CF0u;
    {
        const bool branch_taken_0x134cf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x134cf0) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134CF8u;
    // 0x134cf8: 0xc04d1fe
    ctx->pc = 0x134CF8u;
    SET_GPR_U32(ctx, 31, 0x134D00u);
    ctx->pc = 0x1347F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001347F8_0x1347f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D00u; }
    }
    if (ctx->pc != 0x134D00u) { return; }
    ctx->pc = 0x134D00u;
label_134d00:
    // 0x134d00: 0xc04d2f0
    ctx->pc = 0x134D00u;
    SET_GPR_U32(ctx, 31, 0x134D08u);
    ctx->pc = 0x134D04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134BC0_0x134bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D08u; }
    }
    if (ctx->pc != 0x134D08u) { return; }
    ctx->pc = 0x134D08u;
    // 0x134d08: 0x200202d
    ctx->pc = 0x134d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d0c: 0xdfbf0008
    ctx->pc = 0x134d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134d10: 0xdfb00000
    ctx->pc = 0x134d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d14: 0x804d2d0
    ctx->pc = 0x134D14u;
    ctx->pc = 0x134D18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x134B40u;
    entry_134b40_0x134bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x134D1Cu;
    // 0x134d1c: 0x0
    ctx->pc = 0x134d1cu;
    // NOP
    // 0x134d20: 0x27bdfff0
    ctx->pc = 0x134d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134d24: 0x80182d
    ctx->pc = 0x134d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d28: 0xffbf0000
    ctx->pc = 0x134d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134d2c: 0x10600014
    ctx->pc = 0x134D2Cu;
    {
        const bool branch_taken_0x134d2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x134D30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134d2c) {
            ctx->pc = 0x134D80u;
            goto label_134d80;
        }
    }
    ctx->pc = 0x134D34u;
    // 0x134d34: 0x8c620008
    ctx->pc = 0x134d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x134d38: 0x1440000d
    ctx->pc = 0x134D38u;
    {
        const bool branch_taken_0x134d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x134D3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134d38) {
            ctx->pc = 0x134D70u;
            goto label_134d70;
        }
    }
    ctx->pc = 0x134D40u;
    // 0x134d40: 0x8c640094
    ctx->pc = 0x134d40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x134d44: 0x1080000e
    ctx->pc = 0x134D44u;
    {
        const bool branch_taken_0x134d44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x134D48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134d44) {
            ctx->pc = 0x134D80u;
            goto label_134d80;
        }
    }
    ctx->pc = 0x134D4Cu;
    // 0x134d4c: 0x8c820028
    ctx->pc = 0x134d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x134d50: 0x10400005
    ctx->pc = 0x134D50u;
    {
        const bool branch_taken_0x134d50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134D54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134d50) {
            ctx->pc = 0x134D68u;
            goto label_134d68;
        }
    }
    ctx->pc = 0x134D58u;
    // 0x134d58: 0xdfbf0000
    ctx->pc = 0x134d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d5c: 0x804c3f8
    ctx->pc = 0x134D5Cu;
    ctx->pc = 0x134D60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130FE0u;
    entry_130fe0_0x130fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x134D64u;
    // 0x134d64: 0x0
    ctx->pc = 0x134d64u;
    // NOP
label_134d68:
    // 0x134d68: 0x10000005
    ctx->pc = 0x134D68u;
    {
        const bool branch_taken_0x134d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134D6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134d68) {
            ctx->pc = 0x134D80u;
            goto label_134d80;
        }
    }
    ctx->pc = 0x134D70u;
label_134d70:
    // 0x134d70: 0xdfbf0000
    ctx->pc = 0x134d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d74: 0x804c3f8
    ctx->pc = 0x134D74u;
    ctx->pc = 0x134D78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130FE0u;
    entry_130fe0_0x130fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x134D7Cu;
    // 0x134d7c: 0x0
    ctx->pc = 0x134d7cu;
    // NOP
label_134d80:
    // 0x134d80: 0xdfbf0000
    ctx->pc = 0x134d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d84: 0x3e00008
    ctx->pc = 0x134D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134C88u: goto label_134c88;
            case 0x134CA8u: goto label_134ca8;
            case 0x134CC0u: goto label_134cc0;
            case 0x134CD8u: goto label_134cd8;
            case 0x134CF0u: goto label_134cf0;
            case 0x134D00u: goto label_134d00;
            case 0x134D68u: goto label_134d68;
            case 0x134D70u: goto label_134d70;
            case 0x134D80u: goto label_134d80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0x0
    ctx->pc = 0x134d8cu;
    // NOP
}
