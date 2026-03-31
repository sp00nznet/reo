#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178C60
// Address: 0x178c60 - 0x178d90
void sub_00178C60_0x178c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178c60u;

    // 0x178c60: 0xac88000c
    ctx->pc = 0x178c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x178c64: 0xac850000
    ctx->pc = 0x178c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x178c68: 0xac860004
    ctx->pc = 0x178c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x178c6c: 0x3e00008
    ctx->pc = 0x178C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C70u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C74u;
    // 0x178c74: 0x0
    ctx->pc = 0x178c74u;
    // NOP
    // 0x178c78: 0x3e00008
    ctx->pc = 0x178C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C80u;
    // 0x178c80: 0x3e00008
    ctx->pc = 0x178C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C88u;
    // 0x178c88: 0x3e00008
    ctx->pc = 0x178C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C90u;
    // 0x178c90: 0x3e00008
    ctx->pc = 0x178C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C98u;
    // 0x178c98: 0x3e00008
    ctx->pc = 0x178C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178CA0u;
    // 0x178ca0: 0x27bdfff0
    ctx->pc = 0x178ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178ca4: 0x3c05ff00
    ctx->pc = 0x178ca4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178ca8: 0xffbf0000
    ctx->pc = 0x178ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178cac: 0x34a50601
    ctx->pc = 0x178cacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1537));
    // 0x178cb0: 0xdfbf0000
    ctx->pc = 0x178cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cb4: 0x805a704
    ctx->pc = 0x178CB4u;
    ctx->pc = 0x178CB8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178CBCu;
    // 0x178cbc: 0x0
    ctx->pc = 0x178cbcu;
    // NOP
    // 0x178cc0: 0x27bdfff0
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178cc4: 0x3c05ff00
    ctx->pc = 0x178cc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178cc8: 0xffbf0000
    ctx->pc = 0x178cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178ccc: 0x34a50601
    ctx->pc = 0x178cccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1537));
    // 0x178cd0: 0xdfbf0000
    ctx->pc = 0x178cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cd4: 0x805a704
    ctx->pc = 0x178CD4u;
    ctx->pc = 0x178CD8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178CDCu;
    // 0x178cdc: 0x0
    ctx->pc = 0x178cdcu;
    // NOP
    // 0x178ce0: 0x27bdfff0
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178ce4: 0x3c05ff00
    ctx->pc = 0x178ce4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178ce8: 0xffbf0000
    ctx->pc = 0x178ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178cec: 0x34a50601
    ctx->pc = 0x178cecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1537));
    // 0x178cf0: 0xdfbf0000
    ctx->pc = 0x178cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cf4: 0x805a704
    ctx->pc = 0x178CF4u;
    ctx->pc = 0x178CF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178CFCu;
    // 0x178cfc: 0x0
    ctx->pc = 0x178cfcu;
    // NOP
    // 0x178d00: 0x27bdfff0
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178d04: 0x3c05ff00
    ctx->pc = 0x178d04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x178d08: 0xffbf0000
    ctx->pc = 0x178d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d0c: 0x34a50601
    ctx->pc = 0x178d0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1537));
    // 0x178d10: 0xdfbf0000
    ctx->pc = 0x178d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d14: 0x805a704
    ctx->pc = 0x178D14u;
    ctx->pc = 0x178D18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x178D1Cu;
    // 0x178d1c: 0x0
    ctx->pc = 0x178d1cu;
    // NOP
    // 0x178d20: 0x3e00008
    ctx->pc = 0x178D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178D28u;
    // 0x178d28: 0x3e00008
    ctx->pc = 0x178D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178D30u;
    // 0x178d30: 0x3e00008
    ctx->pc = 0x178D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178D38u;
    // 0x178d38: 0x27bdffe0
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178d3c: 0x24050005
    ctx->pc = 0x178d3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x178d40: 0xffb10008
    ctx->pc = 0x178d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178d44: 0xffb00000
    ctx->pc = 0x178d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178d48: 0xffbf0010
    ctx->pc = 0x178d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178d4c: 0xc05d58a
    ctx->pc = 0x178D4Cu;
    SET_GPR_U32(ctx, 31, 0x178D54u);
    ctx->pc = 0x178D50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D54u; }
    }
    if (ctx->pc != 0x178D54u) { return; }
    ctx->pc = 0x178D54u;
    // 0x178d54: 0x10400009
    ctx->pc = 0x178D54u;
    {
        const bool branch_taken_0x178d54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178D58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178d54) {
            ctx->pc = 0x178D7Cu;
            goto label_178d7c;
        }
    }
    ctx->pc = 0x178D5Cu;
    // 0x178d5c: 0xc05e364
    ctx->pc = 0x178D5Cu;
    SET_GPR_U32(ctx, 31, 0x178D64u);
    ctx->pc = 0x178D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D90_0x178d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D64u; }
    }
    if (ctx->pc != 0x178D64u) { return; }
    ctx->pc = 0x178D64u;
    // 0x178d64: 0xc05e3b8
    ctx->pc = 0x178D64u;
    SET_GPR_U32(ctx, 31, 0x178D6Cu);
    ctx->pc = 0x178D68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178EE0_0x178ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D6Cu; }
    }
    if (ctx->pc != 0x178D6Cu) { return; }
    ctx->pc = 0x178D6Cu;
    // 0x178d6c: 0x220202d
    ctx->pc = 0x178d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d70: 0xc05e396
    ctx->pc = 0x178D70u;
    SET_GPR_U32(ctx, 31, 0x178D78u);
    ctx->pc = 0x178D74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178E58_0x178e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D78u; }
    }
    if (ctx->pc != 0x178D78u) { return; }
    ctx->pc = 0x178D78u;
    // 0x178d78: 0x200102d
    ctx->pc = 0x178d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d7c:
    // 0x178d7c: 0xdfb00000
    ctx->pc = 0x178d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d80: 0xdfb10008
    ctx->pc = 0x178d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178d84: 0xdfbf0010
    ctx->pc = 0x178d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d88: 0x3e00008
    ctx->pc = 0x178D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178D7Cu: goto label_178d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178D90u;
}
