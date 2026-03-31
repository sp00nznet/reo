#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129C08
// Address: 0x129c08 - 0x129d48
void sub_00129C08_0x129c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129c08u;

label_129c08:
    // 0x129c08: 0x27bdfff0
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129c0c: 0xffb00000
    ctx->pc = 0x129c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129c10: 0x80802d
    ctx->pc = 0x129c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c14: 0x16000006
    ctx->pc = 0x129C14u;
    {
        const bool branch_taken_0x129c14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x129C18u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x129c14) {
            ctx->pc = 0x129C30u;
            goto label_129c30;
        }
    }
    ctx->pc = 0x129C1Cu;
    // 0x129c1c: 0x3c040024
    ctx->pc = 0x129c1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129c20: 0xc04a034
    ctx->pc = 0x129C20u;
    SET_GPR_U32(ctx, 31, 0x129C28u);
    ctx->pc = 0x129C24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943104));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C28u; }
    }
    if (ctx->pc != 0x129C28u) { return; }
    ctx->pc = 0x129C28u;
    // 0x129c28: 0x1000001a
    ctx->pc = 0x129C28u;
    {
        const bool branch_taken_0x129c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129c28) {
            ctx->pc = 0x129C94u;
            goto label_129c94;
        }
    }
    ctx->pc = 0x129C30u;
label_129c30:
    // 0x129c30: 0x8e03000c
    ctx->pc = 0x129c30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129c34: 0x3c02000f
    ctx->pc = 0x129c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x129c38: 0x3442fffe
    ctx->pc = 0x129c38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x129c3c: 0x43102a
    ctx->pc = 0x129c3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x129c40: 0x10400008
    ctx->pc = 0x129C40u;
    {
        const bool branch_taken_0x129c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x129c40) {
            ctx->pc = 0x129C64u;
            goto label_129c64;
        }
    }
    ctx->pc = 0x129C48u;
    // 0x129c48: 0xc04c3fa
    ctx->pc = 0x129C48u;
    SET_GPR_U32(ctx, 31, 0x129C50u);
    ctx->pc = 0x129C4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130FE8_0x130fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C50u; }
    }
    if (ctx->pc != 0x129C50u) { return; }
    ctx->pc = 0x129C50u;
    // 0x129c50: 0xc04c16e
    ctx->pc = 0x129C50u;
    SET_GPR_U32(ctx, 31, 0x129C58u);
    ctx->pc = 0x129C54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C58u; }
    }
    if (ctx->pc != 0x129C58u) { return; }
    ctx->pc = 0x129C58u;
    // 0x129c58: 0x24030004
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x129c5c: 0x1043000d
    ctx->pc = 0x129C5Cu;
    {
        const bool branch_taken_0x129c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x129C60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x129c5c) {
            ctx->pc = 0x129C94u;
            goto label_129c94;
        }
    }
    ctx->pc = 0x129C64u;
label_129c64:
    // 0x129c64: 0xc04c390
    ctx->pc = 0x129C64u;
    SET_GPR_U32(ctx, 31, 0x129C6Cu);
    ctx->pc = 0x129C68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x130E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E40_0x130e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C6Cu; }
    }
    if (ctx->pc != 0x129C6Cu) { return; }
    ctx->pc = 0x129C6Cu;
    // 0x129c6c: 0x3c04000f
    ctx->pc = 0x129c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)15 << 16));
    // 0x129c70: 0x28430000
    ctx->pc = 0x129c70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x129c74: 0x244507ff
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x129c78: 0xa3100b
    ctx->pc = 0x129c78u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x129c7c: 0x2403fffb
    ctx->pc = 0x129c7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x129c80: 0x212c3
    ctx->pc = 0x129c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x129c84: 0x3484fffe
    ctx->pc = 0x129c84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65534));
    // 0x129c88: 0x82202a
    ctx->pc = 0x129c88u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x129c8c: 0xae02000c
    ctx->pc = 0x129c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x129c90: 0x64100b
    ctx->pc = 0x129c90u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_129c94:
    // 0x129c94: 0xdfb00000
    ctx->pc = 0x129c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129c98: 0xdfbf0008
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129c9c: 0x3e00008
    ctx->pc = 0x129C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129CA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129C08u: goto label_129c08;
            case 0x129C30u: goto label_129c30;
            case 0x129C64u: goto label_129c64;
            case 0x129C94u: goto label_129c94;
            case 0x129CB8u: goto label_129cb8;
            case 0x129CF8u: goto label_129cf8;
            case 0x129D04u: goto label_129d04;
            case 0x129D38u: goto label_129d38;
            case 0x129D3Cu: goto label_129d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129CA4u;
    // 0x129ca4: 0x0
    ctx->pc = 0x129ca4u;
    // NOP
    // 0x129ca8: 0x27bdfff0
    ctx->pc = 0x129ca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129cac: 0xffbf0000
    ctx->pc = 0x129cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129cb0: 0xc04a702
    ctx->pc = 0x129CB0u;
    SET_GPR_U32(ctx, 31, 0x129CB8u);
    ctx->pc = 0x129C08u;
    goto label_129c08;
    ctx->pc = 0x129CB8u;
label_129cb8:
    // 0x129cb8: 0xdfbf0000
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129cbc: 0x212c0
    ctx->pc = 0x129cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x129cc0: 0x3e00008
    ctx->pc = 0x129CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129CC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129C08u: goto label_129c08;
            case 0x129C30u: goto label_129c30;
            case 0x129C64u: goto label_129c64;
            case 0x129C94u: goto label_129c94;
            case 0x129CB8u: goto label_129cb8;
            case 0x129CF8u: goto label_129cf8;
            case 0x129D04u: goto label_129d04;
            case 0x129D38u: goto label_129d38;
            case 0x129D3Cu: goto label_129d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129CC8u;
    // 0x129cc8: 0x27bdfff0
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129ccc: 0xffb00000
    ctx->pc = 0x129cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129cd0: 0xa0802d
    ctx->pc = 0x129cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cd4: 0x14800008
    ctx->pc = 0x129CD4u;
    {
        const bool branch_taken_0x129cd4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x129CD8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x129cd4) {
            ctx->pc = 0x129CF8u;
            goto label_129cf8;
        }
    }
    ctx->pc = 0x129CDCu;
    // 0x129cdc: 0x3c040024
    ctx->pc = 0x129cdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129ce0: 0xc04a034
    ctx->pc = 0x129CE0u;
    SET_GPR_U32(ctx, 31, 0x129CE8u);
    ctx->pc = 0x129CE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943152));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CE8u; }
    }
    if (ctx->pc != 0x129CE8u) { return; }
    ctx->pc = 0x129CE8u;
    // 0x129ce8: 0xae000000
    ctx->pc = 0x129ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x129cec: 0x10000005
    ctx->pc = 0x129CECu;
    {
        const bool branch_taken_0x129cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129cec) {
            ctx->pc = 0x129D04u;
            goto label_129d04;
        }
    }
    ctx->pc = 0x129CF4u;
    // 0x129cf4: 0x0
    ctx->pc = 0x129cf4u;
    // NOP
label_129cf8:
    // 0x129cf8: 0x8c820018
    ctx->pc = 0x129cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x129cfc: 0xae020000
    ctx->pc = 0x129cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x129d00: 0x8c82001c
    ctx->pc = 0x129d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_129d04:
    // 0x129d04: 0xdfb00000
    ctx->pc = 0x129d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129d08: 0xdfbf0008
    ctx->pc = 0x129d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129d0c: 0x3e00008
    ctx->pc = 0x129D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129C08u: goto label_129c08;
            case 0x129C30u: goto label_129c30;
            case 0x129C64u: goto label_129c64;
            case 0x129C94u: goto label_129c94;
            case 0x129CB8u: goto label_129cb8;
            case 0x129CF8u: goto label_129cf8;
            case 0x129D04u: goto label_129d04;
            case 0x129D38u: goto label_129d38;
            case 0x129D3Cu: goto label_129d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129D14u;
    // 0x129d14: 0x0
    ctx->pc = 0x129d14u;
    // NOP
    // 0x129d18: 0x27bdfff0
    ctx->pc = 0x129d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129d1c: 0x14800006
    ctx->pc = 0x129D1Cu;
    {
        const bool branch_taken_0x129d1c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x129D20u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x129d1c) {
            ctx->pc = 0x129D38u;
            goto label_129d38;
        }
    }
    ctx->pc = 0x129D24u;
    // 0x129d24: 0x3c040024
    ctx->pc = 0x129d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129d28: 0xc04a034
    ctx->pc = 0x129D28u;
    SET_GPR_U32(ctx, 31, 0x129D30u);
    ctx->pc = 0x129D2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943200));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D30u; }
    }
    if (ctx->pc != 0x129D30u) { return; }
    ctx->pc = 0x129D30u;
    // 0x129d30: 0x10000002
    ctx->pc = 0x129D30u;
    {
        const bool branch_taken_0x129d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129D34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129d30) {
            ctx->pc = 0x129D3Cu;
            goto label_129d3c;
        }
    }
    ctx->pc = 0x129D38u;
label_129d38:
    // 0x129d38: 0x8c820020
    ctx->pc = 0x129d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_129d3c:
    // 0x129d3c: 0xdfbf0000
    ctx->pc = 0x129d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129d40: 0x3e00008
    ctx->pc = 0x129D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129C08u: goto label_129c08;
            case 0x129C30u: goto label_129c30;
            case 0x129C64u: goto label_129c64;
            case 0x129C94u: goto label_129c94;
            case 0x129CB8u: goto label_129cb8;
            case 0x129CF8u: goto label_129cf8;
            case 0x129D04u: goto label_129d04;
            case 0x129D38u: goto label_129d38;
            case 0x129D3Cu: goto label_129d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129D48u;
}
