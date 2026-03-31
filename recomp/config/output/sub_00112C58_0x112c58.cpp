#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112C58
// Address: 0x112c58 - 0x112d20
void sub_00112C58_0x112c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112c58u;

    // 0x112c58: 0x27bdffc0
    ctx->pc = 0x112c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112c5c: 0x63400
    ctx->pc = 0x112c5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x112c60: 0xffb10010
    ctx->pc = 0x112c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112c64: 0xffb00000
    ctx->pc = 0x112c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112c68: 0x48c00
    ctx->pc = 0x112c68u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 4), 16));
    // 0x112c6c: 0xffb20020
    ctx->pc = 0x112c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x112c70: 0x58400
    ctx->pc = 0x112c70u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 16));
    // 0x112c74: 0x108403
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x112c78: 0x118c03
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x112c7c: 0xffbf0030
    ctx->pc = 0x112c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x112c80: 0xc0449be
    ctx->pc = 0x112C80u;
    SET_GPR_U32(ctx, 31, 0x112C88u);
    ctx->pc = 0x112C84u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    ctx->pc = 0x1126F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001126F8_0x1126f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C88u; }
    }
    if (ctx->pc != 0x112C88u) { return; }
    ctx->pc = 0x112C88u;
    // 0x112c88: 0x2603003f
    ctx->pc = 0x112c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 63));
    // 0x112c8c: 0x40282d
    ctx->pc = 0x112c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c90: 0x2404ffff
    ctx->pc = 0x112c90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112c94: 0x2610007e
    ctx->pc = 0x112c94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 126));
    // 0x112c98: 0x83102a
    ctx->pc = 0x112c98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x112c9c: 0x32310002
    ctx->pc = 0x112c9cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 2));
    // 0x112ca0: 0x62800b
    ctx->pc = 0x112ca0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x112ca4: 0x12200007
    ctx->pc = 0x112CA4u;
    {
        const bool branch_taken_0x112ca4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x112CA8u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        if (branch_taken_0x112ca4) {
            ctx->pc = 0x112CC4u;
            goto label_112cc4;
        }
    }
    ctx->pc = 0x112CACu;
    // 0x112cac: 0x2642003f
    ctx->pc = 0x112cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 63));
    // 0x112cb0: 0x2643007e
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 126));
    // 0x112cb4: 0x82202a
    ctx->pc = 0x112cb4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x112cb8: 0x44180b
    ctx->pc = 0x112cb8u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x112cbc: 0x10000006
    ctx->pc = 0x112CBCu;
    {
        const bool branch_taken_0x112cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112CC0u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x112cbc) {
            ctx->pc = 0x112CD8u;
            goto label_112cd8;
        }
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0x2642001f
    ctx->pc = 0x112cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 31));
    // 0x112cc8: 0x2643003e
    ctx->pc = 0x112cc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 62));
    // 0x112ccc: 0x82202a
    ctx->pc = 0x112cccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x112cd0: 0x44180b
    ctx->pc = 0x112cd0u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x112cd4: 0x33143
    ctx->pc = 0x112cd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
label_112cd8:
    // 0x112cd8: 0xdca20000
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112cdc: 0x3403ffff
    ctx->pc = 0x112cdcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x112ce0: 0x3183c
    ctx->pc = 0x112ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x112ce4: 0x3463ffff
    ctx->pc = 0x112ce4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x112ce8: 0x24040001
    ctx->pc = 0x112ce8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112cec: 0x431024
    ctx->pc = 0x112cecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112cf0: 0x14440003
    ctx->pc = 0x112CF0u;
    {
        const bool branch_taken_0x112cf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x112CF4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x112cf0) {
            ctx->pc = 0x112D00u;
            goto label_112d00;
        }
    }
    ctx->pc = 0x112CF8u;
    // 0x112cf8: 0x10000002
    ctx->pc = 0x112CF8u;
    {
        const bool branch_taken_0x112cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112CFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x112cf8) {
            ctx->pc = 0x112D04u;
            goto label_112d04;
        }
    }
    ctx->pc = 0x112D00u;
label_112d00:
    // 0x112d00: 0x21440
    ctx->pc = 0x112d00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 17));
label_112d04:
    // 0x112d04: 0x21403
    ctx->pc = 0x112d04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112d08: 0xdfbf0030
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112d0c: 0xdfb20020
    ctx->pc = 0x112d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112d10: 0xdfb10010
    ctx->pc = 0x112d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112d14: 0xdfb00000
    ctx->pc = 0x112d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112d18: 0x3e00008
    ctx->pc = 0x112D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112CC4u: goto label_112cc4;
            case 0x112CD8u: goto label_112cd8;
            case 0x112D00u: goto label_112d00;
            case 0x112D04u: goto label_112d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112D20u;
}
