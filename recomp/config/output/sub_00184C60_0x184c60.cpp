#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00184C60
// Address: 0x184c60 - 0x184d88
void sub_00184C60_0x184c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x184c60u;

    // 0x184c60: 0x27bdffb0
    ctx->pc = 0x184c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x184c64: 0x3c020028
    ctx->pc = 0x184c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x184c68: 0xffb30018
    ctx->pc = 0x184c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x184c6c: 0xe0982d
    ctx->pc = 0x184c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c70: 0xffb00000
    ctx->pc = 0x184c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184c74: 0xa0802d
    ctx->pc = 0x184c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c78: 0xffb10008
    ctx->pc = 0x184c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184c7c: 0xc0882d
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c80: 0xffb20010
    ctx->pc = 0x184c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184c84: 0x902d
    ctx->pc = 0x184c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c88: 0xffb40020
    ctx->pc = 0x184c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x184c8c: 0x80a02d
    ctx->pc = 0x184c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c90: 0xffb50028
    ctx->pc = 0x184c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x184c94: 0x24556c80
    ctx->pc = 0x184c94u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 27776));
    // 0x184c98: 0xffb60030
    ctx->pc = 0x184c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x184c9c: 0x3c167fff
    ctx->pc = 0x184c9cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)32767 << 16));
    // 0x184ca0: 0xffb70038
    ctx->pc = 0x184ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x184ca4: 0x3c178101
    ctx->pc = 0x184ca4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)33025 << 16));
    // 0x184ca8: 0xffbe0040
    ctx->pc = 0x184ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x184cac: 0x241effff
    ctx->pc = 0x184cacu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184cb0: 0xffbf0048
    ctx->pc = 0x184cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x184cb4: 0x36f7006f
    ctx->pc = 0x184cb4u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 111));
    // 0x184cb8: 0xae600000
    ctx->pc = 0x184cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x184cbc: 0x36d6ffff
    ctx->pc = 0x184cbcu;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 65535));
label_184cc0:
    // 0x184cc0: 0x280202d
    ctx->pc = 0x184cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cc4: 0x2a0282d
    ctx->pc = 0x184cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cc8: 0x200302d
    ctx->pc = 0x184cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ccc: 0xc061d1e
    ctx->pc = 0x184CCCu;
    SET_GPR_U32(ctx, 31, 0x184CD4u);
    ctx->pc = 0x184CD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CD4u; }
    }
    if (ctx->pc != 0x184CD4u) { return; }
    ctx->pc = 0x184CD4u;
    // 0x184cd4: 0x14400004
    ctx->pc = 0x184CD4u;
    {
        const bool branch_taken_0x184cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184CD8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184cd4) {
            ctx->pc = 0x184CE8u;
            goto label_184ce8;
        }
    }
    ctx->pc = 0x184CDCu;
    // 0x184cdc: 0xae770000
    ctx->pc = 0x184cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x184ce0: 0x1000001d
    ctx->pc = 0x184CE0u;
    {
        const bool branch_taken_0x184ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x184ce0) {
            ctx->pc = 0x184D58u;
            goto label_184d58;
        }
    }
    ctx->pc = 0x184CE8u;
label_184ce8:
    // 0x184ce8: 0x2a0202d
    ctx->pc = 0x184ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cec: 0x94820000
    ctx->pc = 0x184cecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_184cf0:
    // 0x184cf0: 0x24840200
    ctx->pc = 0x184cf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 512));
    // 0x184cf4: 0x26430001
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1));
    // 0x184cf8: 0x2631ffff
    ctx->pc = 0x184cf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x184cfc: 0x30428000
    ctx->pc = 0x184cfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x184d00: 0x16200005
    ctx->pc = 0x184D00u;
    {
        const bool branch_taken_0x184d00 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x184D04u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x184d00) {
            ctx->pc = 0x184D18u;
            goto label_184d18;
        }
    }
    ctx->pc = 0x184D08u;
    // 0x184d08: 0x26420001
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x184d0c: 0x10000012
    ctx->pc = 0x184D0Cu;
    {
        const bool branch_taken_0x184d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184D10u;
        if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 18));
        if (branch_taken_0x184d0c) {
            ctx->pc = 0x184D58u;
            goto label_184d58;
        }
    }
    ctx->pc = 0x184D14u;
    // 0x184d14: 0x0
    ctx->pc = 0x184d14u;
    // NOP
label_184d18:
    // 0x184d18: 0x24a50001
    ctx->pc = 0x184d18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x184d1c: 0x28a20002
    ctx->pc = 0x184d1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x184d20: 0x5440fff3
    ctx->pc = 0x184D20u;
    {
        const bool branch_taken_0x184d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184d20) {
            ctx->pc = 0x184D24u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x184CF0u;
            goto label_184cf0;
        }
    }
    ctx->pc = 0x184D28u;
    // 0x184d28: 0x200282d
    ctx->pc = 0x184d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d2c: 0x280202d
    ctx->pc = 0x184d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d30: 0xc060b02
    ctx->pc = 0x184D30u;
    SET_GPR_U32(ctx, 31, 0x184D38u);
    ctx->pc = 0x184D34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D38u; }
    }
    if (ctx->pc != 0x184D38u) { return; }
    ctx->pc = 0x184D38u;
    // 0x184d38: 0x8e630000
    ctx->pc = 0x184d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x184d3c: 0x40802d
    ctx->pc = 0x184d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d40: 0x14600005
    ctx->pc = 0x184D40u;
    {
        const bool branch_taken_0x184d40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x184D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x184d40) {
            ctx->pc = 0x184D58u;
            goto label_184d58;
        }
    }
    ctx->pc = 0x184D48u;
    // 0x184d48: 0x121e0003
    ctx->pc = 0x184D48u;
    {
        const bool branch_taken_0x184d48 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 30));
        ctx->pc = 0x184D4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184d48) {
            ctx->pc = 0x184D58u;
            goto label_184d58;
        }
    }
    ctx->pc = 0x184D50u;
    // 0x184d50: 0x1000ffdb
    ctx->pc = 0x184D50u;
    {
        const bool branch_taken_0x184d50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184D54u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        if (branch_taken_0x184d50) {
            ctx->pc = 0x184CC0u;
            goto label_184cc0;
        }
    }
    ctx->pc = 0x184D58u;
label_184d58:
    // 0x184d58: 0xdfb00000
    ctx->pc = 0x184d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d5c: 0xdfb10008
    ctx->pc = 0x184d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184d60: 0xdfb20010
    ctx->pc = 0x184d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184d64: 0xdfb30018
    ctx->pc = 0x184d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184d68: 0xdfb40020
    ctx->pc = 0x184d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184d6c: 0xdfb50028
    ctx->pc = 0x184d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x184d70: 0xdfb60030
    ctx->pc = 0x184d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184d74: 0xdfb70038
    ctx->pc = 0x184d74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x184d78: 0xdfbe0040
    ctx->pc = 0x184d78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184d7c: 0xdfbf0048
    ctx->pc = 0x184d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x184d80: 0x3e00008
    ctx->pc = 0x184D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184CC0u: goto label_184cc0;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CF0u: goto label_184cf0;
            case 0x184D18u: goto label_184d18;
            case 0x184D58u: goto label_184d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184D88u;
}
