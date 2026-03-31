#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3AA0
// Address: 0x1a3aa0 - 0x1a3b80
void sub_001A3AA0_0x1a3aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3aa0u;

    // 0x1a3aa0: 0x27bdfff0
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3aa4: 0xa0502d
    ctx->pc = 0x1a3aa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3aa8: 0xffbf0000
    ctx->pc = 0x1a3aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3aac: 0xc0482d
    ctx->pc = 0x1a3aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ab0: 0xe0402d
    ctx->pc = 0x1a3ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ab4: 0xc068da8
    ctx->pc = 0x1A3AB4u;
    SET_GPR_U32(ctx, 31, 0x1A3ABCu);
    ctx->pc = 0x1A3AB8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A36A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36A0_0x1a36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ABCu; }
    }
    if (ctx->pc != 0x1A3ABCu) { return; }
    ctx->pc = 0x1A3ABCu;
    // 0x1a3abc: 0x4a082a
    ctx->pc = 0x1a3abcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 10)));
    // 0x1a3ac0: 0x10200003
    ctx->pc = 0x1A3AC0u;
    {
        const bool branch_taken_0x1a3ac0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3AC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ac0) {
            ctx->pc = 0x1A3AD0u;
            goto label_1a3ad0;
        }
    }
    ctx->pc = 0x1A3AC8u;
    // 0x1a3ac8: 0x10000029
    ctx->pc = 0x1A3AC8u;
    {
        const bool branch_taken_0x1a3ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3ACCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3ac8) {
            ctx->pc = 0x1A3B70u;
            goto label_1a3b70;
        }
    }
    ctx->pc = 0x1A3AD0u;
label_1a3ad0:
    // 0x1a3ad0: 0x24050005
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3ad4: 0xc068d7c
    ctx->pc = 0x1A3AD4u;
    SET_GPR_U32(ctx, 31, 0x1A3ADCu);
    ctx->pc = 0x1A3AD8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ADCu; }
    }
    if (ctx->pc != 0x1A3ADCu) { return; }
    ctx->pc = 0x1A3ADCu;
    // 0x1a3adc: 0x14400003
    ctx->pc = 0x1A3ADCu;
    {
        const bool branch_taken_0x1a3adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3AE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x1a3adc) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AE4u;
    // 0x1a3ae4: 0x10000022
    ctx->pc = 0x1A3AE4u;
    {
        const bool branch_taken_0x1a3ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3ae4) {
            ctx->pc = 0x1A3B70u;
            goto label_1a3b70;
        }
    }
    ctx->pc = 0x1A3AECu;
label_1a3aec:
    // 0x1a3aec: 0x10000004
    ctx->pc = 0x1A3AECu;
    {
        const bool branch_taken_0x1a3aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3AF0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3aec) {
            ctx->pc = 0x1A3B00u;
            goto label_1a3b00;
        }
    }
    ctx->pc = 0x1A3AF4u;
label_1a3af4:
    // 0x1a3af4: 0x8c820008
    ctx->pc = 0x1a3af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3af8: 0x24630001
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3afc: 0x822021
    ctx->pc = 0x1a3afcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3b00:
    // 0x1a3b00: 0x6a102a
    ctx->pc = 0x1a3b00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x1a3b04: 0x0
    ctx->pc = 0x1a3b04u;
    // NOP
    // 0x1a3b08: 0x1440fffa
    ctx->pc = 0x1A3B08u;
    {
        const bool branch_taken_0x1a3b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3b08) {
            ctx->pc = 0x1A3AF4u;
            goto label_1a3af4;
        }
    }
    ctx->pc = 0x1A3B10u;
    // 0x1a3b10: 0x2484000c
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a3b14: 0x10000008
    ctx->pc = 0x1A3B14u;
    {
        const bool branch_taken_0x1a3b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3B18u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3b14) {
            ctx->pc = 0x1A3B38u;
            goto label_1a3b38;
        }
    }
    ctx->pc = 0x1A3B1Cu;
label_1a3b1c:
    // 0x1a3b1c: 0x8c820000
    ctx->pc = 0x1a3b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3b20: 0x24630001
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3b24: 0x2107c
    ctx->pc = 0x1a3b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1a3b28: 0x2107e
    ctx->pc = 0x1a3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x1a3b2c: 0x21080
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3b30: 0x24420004
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a3b34: 0x822021
    ctx->pc = 0x1a3b34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3b38:
    // 0x1a3b38: 0x69102a
    ctx->pc = 0x1a3b38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
    // 0x1a3b3c: 0x1440fff7
    ctx->pc = 0x1A3B3Cu;
    {
        const bool branch_taken_0x1a3b3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3b3c) {
            ctx->pc = 0x1A3B1Cu;
            goto label_1a3b1c;
        }
    }
    ctx->pc = 0x1A3B44u;
    // 0x1a3b44: 0x8c820000
    ctx->pc = 0x1a3b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3b48: 0x2107c
    ctx->pc = 0x1a3b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1a3b4c: 0x2107e
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x1a3b50: 0x102102a
    ctx->pc = 0x1a3b50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x1a3b54: 0x14400003
    ctx->pc = 0x1A3B54u;
    {
        const bool branch_taken_0x1a3b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3B58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1a3b54) {
            ctx->pc = 0x1A3B64u;
            goto label_1a3b64;
        }
    }
    ctx->pc = 0x1A3B5Cu;
    // 0x1a3b5c: 0x10000004
    ctx->pc = 0x1A3B5Cu;
    {
        const bool branch_taken_0x1a3b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3B60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3b5c) {
            ctx->pc = 0x1A3B70u;
            goto label_1a3b70;
        }
    }
    ctx->pc = 0x1A3B64u;
label_1a3b64:
    // 0x1a3b64: 0x81080
    ctx->pc = 0x1a3b64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3b68: 0x621021
    ctx->pc = 0x1a3b68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3b6c: 0x8c420000
    ctx->pc = 0x1a3b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3b70:
    // 0x1a3b70: 0xdfbf0000
    ctx->pc = 0x1a3b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3b74: 0x3e00008
    ctx->pc = 0x1A3B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3AD0u: goto label_1a3ad0;
            case 0x1A3AECu: goto label_1a3aec;
            case 0x1A3AF4u: goto label_1a3af4;
            case 0x1A3B00u: goto label_1a3b00;
            case 0x1A3B1Cu: goto label_1a3b1c;
            case 0x1A3B38u: goto label_1a3b38;
            case 0x1A3B64u: goto label_1a3b64;
            case 0x1A3B70u: goto label_1a3b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3B7Cu;
    // 0x1a3b7c: 0x0
    ctx->pc = 0x1a3b7cu;
    // NOP
}
