#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130E48
// Address: 0x130e48 - 0x130f20
void sub_00130E48_0x130e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130e48u;

    // 0x130e48: 0x3e00008
    ctx->pc = 0x130E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E50u;
    // 0x130e50: 0x3e00008
    ctx->pc = 0x130E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E54u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E58u;
    // 0x130e58: 0x27bdfff0
    ctx->pc = 0x130e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130e5c: 0xffb00000
    ctx->pc = 0x130e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130e60: 0xa0802d
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e64: 0xffbf0008
    ctx->pc = 0x130e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130e68: 0xc04d7d4
    ctx->pc = 0x130E68u;
    SET_GPR_U32(ctx, 31, 0x130E70u);
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x135F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F50_0x135f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E70u; }
    }
    if (ctx->pc != 0x130E70u) { return; }
    ctx->pc = 0x130E70u;
    // 0x130e70: 0xae020000
    ctx->pc = 0x130e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x130e74: 0xdfbf0008
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130e78: 0xdfb00000
    ctx->pc = 0x130e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e7c: 0x3e00008
    ctx->pc = 0x130E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E84u;
    // 0x130e84: 0x0
    ctx->pc = 0x130e84u;
    // NOP
    // 0x130e88: 0xaca00000
    ctx->pc = 0x130e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x130e8c: 0x3e00008
    ctx->pc = 0x130E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0x0
    ctx->pc = 0x130e94u;
    // NOP
    // 0x130e98: 0x27bdfff0
    ctx->pc = 0x130e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130e9c: 0xffb00000
    ctx->pc = 0x130e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ea0: 0xffbf0008
    ctx->pc = 0x130ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130ea4: 0xc04d7ee
    ctx->pc = 0x130EA4u;
    SET_GPR_U32(ctx, 31, 0x130EACu);
    ctx->pc = 0x130EA8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FB8_0x135fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130EACu; }
    }
    if (ctx->pc != 0x130EACu) { return; }
    ctx->pc = 0x130EACu;
    // 0x130eac: 0x40282d
    ctx->pc = 0x130eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb0: 0x24020001
    ctx->pc = 0x130eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130eb4: 0x24a607ff
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 2047));
    // 0x130eb8: 0x28a40000
    ctx->pc = 0x130eb8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 0));
    // 0x130ebc: 0xa0182d
    ctx->pc = 0x130ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ec0: 0xc4180b
    ctx->pc = 0x130ec0u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x130ec4: 0x31ac3
    ctx->pc = 0x130ec4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x130ec8: 0x322c0
    ctx->pc = 0x130ec8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 11));
    // 0x130ecc: 0x24660001
    ctx->pc = 0x130eccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 1));
    // 0x130ed0: 0xa42823
    ctx->pc = 0x130ed0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x130ed4: 0x18a00002
    ctx->pc = 0x130ED4u;
    {
        const bool branch_taken_0x130ed4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x130ED8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x130ed4) {
            ctx->pc = 0x130EE0u;
            goto label_130ee0;
        }
    }
    ctx->pc = 0x130EDCu;
    // 0x130edc: 0xae060000
    ctx->pc = 0x130edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_130ee0:
    // 0x130ee0: 0xdfb00000
    ctx->pc = 0x130ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ee4: 0xdfbf0008
    ctx->pc = 0x130ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130ee8: 0x3e00008
    ctx->pc = 0x130EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130EF0u;
    // 0x130ef0: 0x27bdfff0
    ctx->pc = 0x130ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130ef4: 0xffb00000
    ctx->pc = 0x130ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ef8: 0xffbf0008
    ctx->pc = 0x130ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130efc: 0xc04d7ee
    ctx->pc = 0x130EFCu;
    SET_GPR_U32(ctx, 31, 0x130F04u);
    ctx->pc = 0x130F00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FB8_0x135fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F04u; }
    }
    if (ctx->pc != 0x130F04u) { return; }
    ctx->pc = 0x130F04u;
    // 0x130f04: 0xae020000
    ctx->pc = 0x130f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x130f08: 0x24020001
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f0c: 0xdfb00000
    ctx->pc = 0x130f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130f10: 0xdfbf0008
    ctx->pc = 0x130f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130f14: 0x3e00008
    ctx->pc = 0x130F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130EE0u: goto label_130ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130F1Cu;
    // 0x130f1c: 0x0
    ctx->pc = 0x130f1cu;
    // NOP
}
