#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9AA0
// Address: 0x1d9aa0 - 0x1da330
void sub_001D9AA0_0x1d9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9aa0u;

label_1d9aa0:
    // 0x1d9aa0: 0x27bdffc0
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9aa4: 0xffbf0030
    ctx->pc = 0x1d9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9aa8: 0x7fb20020
    ctx->pc = 0x1d9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9aac: 0x7fb10010
    ctx->pc = 0x1d9aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9ab0: 0x80902d
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ab4: 0xc076514
    ctx->pc = 0x1D9AB4u;
    SET_GPR_U32(ctx, 31, 0x1D9ABCu);
    ctx->pc = 0x1D9AB8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ABCu; }
    }
    if (ctx->pc != 0x1D9ABCu) { return; }
    ctx->pc = 0x1D9ABCu;
    // 0x1d9abc: 0x3c100035
    ctx->pc = 0x1d9abcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x1d9ac0: 0x882d
    ctx->pc = 0x1d9ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ac4: 0x261082d0
    ctx->pc = 0x1d9ac4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294935248));
label_1d9ac8:
    // 0x1d9ac8: 0x200202d
    ctx->pc = 0x1d9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9acc: 0x240282d
    ctx->pc = 0x1d9accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ad0: 0xc042d10
    ctx->pc = 0x1D9AD0u;
    SET_GPR_U32(ctx, 31, 0x1D9AD8u);
    ctx->pc = 0x1D9AD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AD8u; }
    }
    if (ctx->pc != 0x1D9AD8u) { return; }
    ctx->pc = 0x1D9AD8u;
    // 0x1d9ad8: 0x10400073
    ctx->pc = 0x1D9AD8u;
    {
        const bool branch_taken_0x1d9ad8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9ad8) {
            ctx->pc = 0x1D9CA8u;
            goto label_1d9ca8;
        }
    }
    ctx->pc = 0x1D9AE0u;
    // 0x1d9ae0: 0x26220001
    ctx->pc = 0x1d9ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9ae4: 0x28c3c
    ctx->pc = 0x1d9ae4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9ae8: 0x118c3f
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1d9aec: 0x2a220008
    ctx->pc = 0x1d9aecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x1d9af0: 0x1440fff5
    ctx->pc = 0x1D9AF0u;
    {
        const bool branch_taken_0x1d9af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9AF4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 308));
        if (branch_taken_0x1d9af0) {
            ctx->pc = 0x1D9AC8u;
            goto label_1d9ac8;
        }
    }
    ctx->pc = 0x1D9AF8u;
    // 0x1d9af8: 0x3c010035
    ctx->pc = 0x1d9af8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9afc: 0x3c020035
    ctx->pc = 0x1d9afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9b00: 0x8c2582c8
    ctx->pc = 0x1d9b00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294935240)));
    // 0x1d9b04: 0x24030134
    ctx->pc = 0x1d9b04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 308));
    // 0x1d9b08: 0x244282d0
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935248));
    // 0x1d9b0c: 0x240202d
    ctx->pc = 0x1d9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b10: 0xa31818
    ctx->pc = 0x1d9b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d9b14: 0xc07644c
    ctx->pc = 0x1D9B14u;
    SET_GPR_U32(ctx, 31, 0x1D9B1Cu);
    ctx->pc = 0x1D9B18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1D9130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9130_0x1d9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B1Cu; }
    }
    if (ctx->pc != 0x1D9B1Cu) { return; }
    ctx->pc = 0x1D9B1Cu;
    // 0x1d9b1c: 0x28c3c
    ctx->pc = 0x1d9b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9b20: 0x118c3f
    ctx->pc = 0x1d9b20u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1d9b24: 0x2402ffff
    ctx->pc = 0x1d9b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9b28: 0x12220003
    ctx->pc = 0x1D9B28u;
    {
        const bool branch_taken_0x1d9b28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d9b28) {
            ctx->pc = 0x1D9B38u;
            goto label_1d9b38;
        }
    }
    ctx->pc = 0x1D9B30u;
    // 0x1d9b30: 0x10000005
    ctx->pc = 0x1D9B30u;
    {
        const bool branch_taken_0x1d9b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9b30) {
            ctx->pc = 0x1D9B48u;
            goto label_1d9b48;
        }
    }
    ctx->pc = 0x1D9B38u;
label_1d9b38:
    // 0x1d9b38: 0x3c010035
    ctx->pc = 0x1d9b38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9b3c: 0x10000066
    ctx->pc = 0x1D9B3Cu;
    {
        const bool branch_taken_0x1d9b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9B40u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937728), GPR_U32(ctx, 2));
        if (branch_taken_0x1d9b3c) {
            ctx->pc = 0x1D9CD8u;
            goto label_1d9cd8;
        }
    }
    ctx->pc = 0x1D9B44u;
    // 0x1d9b44: 0x0
    ctx->pc = 0x1d9b44u;
    // NOP
label_1d9b48:
    // 0x1d9b48: 0xc076518
    ctx->pc = 0x1D9B48u;
    SET_GPR_U32(ctx, 31, 0x1D9B50u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B50u; }
    }
    if (ctx->pc != 0x1D9B50u) { return; }
    ctx->pc = 0x1D9B50u;
label_1d9b50:
    // 0x1d9b50: 0xc076514
    ctx->pc = 0x1D9B50u;
    SET_GPR_U32(ctx, 31, 0x1D9B58u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B58u; }
    }
    if (ctx->pc != 0x1D9B58u) { return; }
    ctx->pc = 0x1D9B58u;
    // 0x1d9b58: 0x3c040035
    ctx->pc = 0x1d9b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1d9b5c: 0x282d
    ctx->pc = 0x1d9b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b60: 0x24848c70
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937712));
    // 0x1d9b64: 0x24030001
    ctx->pc = 0x1d9b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d9b68:
    // 0x1d9b68: 0x8c820000
    ctx->pc = 0x1d9b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9b6c: 0x1443000e
    ctx->pc = 0x1D9B6Cu;
    {
        const bool branch_taken_0x1d9b6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D9B70u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        if (branch_taken_0x1d9b6c) {
            ctx->pc = 0x1D9BA8u;
            goto label_1d9ba8;
        }
    }
    ctx->pc = 0x1D9B74u;
    // 0x1d9b74: 0x220202d
    ctx->pc = 0x1d9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b78: 0x2143f
    ctx->pc = 0x1d9b78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9b7c: 0x2405ffff
    ctx->pc = 0x1d9b7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9b80: 0x21880
    ctx->pc = 0x1d9b80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9b84: 0x3c020035
    ctx->pc = 0x1d9b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9b88: 0x24428c70
    ctx->pc = 0x1d9b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1d9b8c: 0x431021
    ctx->pc = 0x1d9b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9b90: 0xc076468
    ctx->pc = 0x1D9B90u;
    SET_GPR_U32(ctx, 31, 0x1D9B98u);
    ctx->pc = 0x1D9B94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1D91A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D91A0_0x1d91a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B98u; }
    }
    if (ctx->pc != 0x1D9B98u) { return; }
    ctx->pc = 0x1D9B98u;
    // 0x1d9b98: 0x24020071
    ctx->pc = 0x1d9b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
    // 0x1d9b9c: 0x3c010035
    ctx->pc = 0x1d9b9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9ba0: 0x1000004d
    ctx->pc = 0x1D9BA0u;
    {
        const bool branch_taken_0x1d9ba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937728), GPR_U32(ctx, 2));
        if (branch_taken_0x1d9ba0) {
            ctx->pc = 0x1D9CD8u;
            goto label_1d9cd8;
        }
    }
    ctx->pc = 0x1D9BA8u;
label_1d9ba8:
    // 0x1d9ba8: 0x24a20001
    ctx->pc = 0x1d9ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d9bac: 0x22c3c
    ctx->pc = 0x1d9bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9bb0: 0x52c3f
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1d9bb4: 0x28a20003
    ctx->pc = 0x1d9bb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x1d9bb8: 0x1440ffeb
    ctx->pc = 0x1D9BB8u;
    {
        const bool branch_taken_0x1d9bb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9BBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1d9bb8) {
            ctx->pc = 0x1D9B68u;
            goto label_1d9b68;
        }
    }
    ctx->pc = 0x1D9BC0u;
    // 0x1d9bc0: 0x220202d
    ctx->pc = 0x1d9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bc4: 0xc076480
    ctx->pc = 0x1D9BC4u;
    SET_GPR_U32(ctx, 31, 0x1D9BCCu);
    ctx->pc = 0x1D9BC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 256));
    ctx->pc = 0x1D9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9200_0x1d9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BCCu; }
    }
    if (ctx->pc != 0x1D9BCCu) { return; }
    ctx->pc = 0x1D9BCCu;
    // 0x1d9bcc: 0x21c3c
    ctx->pc = 0x1d9bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9bd0: 0x31c3f
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d9bd4: 0x2402fffe
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d9bd8: 0x1062000f
    ctx->pc = 0x1D9BD8u;
    {
        const bool branch_taken_0x1d9bd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d9bd8) {
            ctx->pc = 0x1D9C18u;
            goto label_1d9c18;
        }
    }
    ctx->pc = 0x1D9BE0u;
    // 0x1d9be0: 0x2402ffff
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9be4: 0x10620006
    ctx->pc = 0x1D9BE4u;
    {
        const bool branch_taken_0x1d9be4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x1d9be4) {
            ctx->pc = 0x1D9C00u;
            goto label_1d9c00;
        }
    }
    ctx->pc = 0x1D9BECu;
    // 0x1d9bec: 0x10620004
    ctx->pc = 0x1D9BECu;
    {
        const bool branch_taken_0x1d9bec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d9bec) {
            ctx->pc = 0x1D9C00u;
            goto label_1d9c00;
        }
    }
    ctx->pc = 0x1D9BF4u;
    // 0x1d9bf4: 0x10000008
    ctx->pc = 0x1D9BF4u;
    {
        const bool branch_taken_0x1d9bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9bf4) {
            ctx->pc = 0x1D9C18u;
            goto label_1d9c18;
        }
    }
    ctx->pc = 0x1D9BFCu;
    // 0x1d9bfc: 0x0
    ctx->pc = 0x1d9bfcu;
    // NOP
label_1d9c00:
    // 0x1d9c00: 0xc076468
    ctx->pc = 0x1D9C00u;
    SET_GPR_U32(ctx, 31, 0x1D9C08u);
    ctx->pc = 0x1D9C04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D91A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D91A0_0x1d91a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C08u; }
    }
    if (ctx->pc != 0x1D9C08u) { return; }
    ctx->pc = 0x1D9C08u;
    // 0x1d9c08: 0x24020001
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9c0c: 0x3c010035
    ctx->pc = 0x1d9c0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9c10: 0x10000031
    ctx->pc = 0x1D9C10u;
    {
        const bool branch_taken_0x1d9c10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9C14u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937728), GPR_U32(ctx, 2));
        if (branch_taken_0x1d9c10) {
            ctx->pc = 0x1D9CD8u;
            goto label_1d9cd8;
        }
    }
    ctx->pc = 0x1D9C18u;
label_1d9c18:
    // 0x1d9c18: 0x3082a
    ctx->pc = 0x1d9c18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1d9c1c: 0x10200008
    ctx->pc = 0x1D9C1Cu;
    {
        const bool branch_taken_0x1d9c1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9C20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c1c) {
            ctx->pc = 0x1D9C40u;
            goto label_1d9c40;
        }
    }
    ctx->pc = 0x1D9C24u;
    // 0x1d9c24: 0xc076468
    ctx->pc = 0x1D9C24u;
    SET_GPR_U32(ctx, 31, 0x1D9C2Cu);
    ctx->pc = 0x1D91A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D91A0_0x1d91a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C2Cu; }
    }
    if (ctx->pc != 0x1D9C2Cu) { return; }
    ctx->pc = 0x1D9C2Cu;
    // 0x1d9c2c: 0xc076518
    ctx->pc = 0x1D9C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C34u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C34u; }
    }
    if (ctx->pc != 0x1D9C34u) { return; }
    ctx->pc = 0x1D9C34u;
    // 0x1d9c34: 0x10000008
    ctx->pc = 0x1D9C34u;
    {
        const bool branch_taken_0x1d9c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9c34) {
            ctx->pc = 0x1D9C58u;
            goto label_1d9c58;
        }
    }
    ctx->pc = 0x1D9C3Cu;
    // 0x1d9c3c: 0x0
    ctx->pc = 0x1d9c3cu;
    // NOP
label_1d9c40:
    // 0x1d9c40: 0xc076518
    ctx->pc = 0x1D9C40u;
    SET_GPR_U32(ctx, 31, 0x1D9C48u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C48u; }
    }
    if (ctx->pc != 0x1D9C48u) { return; }
    ctx->pc = 0x1D9C48u;
    // 0x1d9c48: 0xc07690c
    ctx->pc = 0x1D9C48u;
    SET_GPR_U32(ctx, 31, 0x1D9C50u);
    ctx->pc = 0x1DA430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA430_0x1da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C50u; }
    }
    if (ctx->pc != 0x1D9C50u) { return; }
    ctx->pc = 0x1D9C50u;
    // 0x1d9c50: 0x1000ffbf
    ctx->pc = 0x1D9C50u;
    {
        const bool branch_taken_0x1d9c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9c50) {
            ctx->pc = 0x1D9B50u;
            goto label_1d9b50;
        }
    }
    ctx->pc = 0x1D9C58u;
label_1d9c58:
    // 0x1d9c58: 0xc076514
    ctx->pc = 0x1D9C58u;
    SET_GPR_U32(ctx, 31, 0x1D9C60u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C60u; }
    }
    if (ctx->pc != 0x1D9C60u) { return; }
    ctx->pc = 0x1D9C60u;
    // 0x1d9c60: 0x240282d
    ctx->pc = 0x1d9c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c64: 0x200202d
    ctx->pc = 0x1d9c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c68: 0xc042d7e
    ctx->pc = 0x1D9C68u;
    SET_GPR_U32(ctx, 31, 0x1D9C70u);
    ctx->pc = 0x1D9C6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C70u; }
    }
    if (ctx->pc != 0x1D9C70u) { return; }
    ctx->pc = 0x1D9C70u;
    // 0x1d9c70: 0x3c010035
    ctx->pc = 0x1d9c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9c74: 0x8c2282c8
    ctx->pc = 0x1d9c74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935240)));
    // 0x1d9c78: 0x24420001
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9c7c: 0x3c010035
    ctx->pc = 0x1d9c7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9c80: 0xac2282c8
    ctx->pc = 0x1d9c80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935240), GPR_U32(ctx, 2));
    // 0x1d9c84: 0x3c010035
    ctx->pc = 0x1d9c84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9c88: 0x8c2382c8
    ctx->pc = 0x1d9c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294935240)));
    // 0x1d9c8c: 0x4610004
    ctx->pc = 0x1D9C8Cu;
    {
        const bool branch_taken_0x1d9c8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D9C90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
        if (branch_taken_0x1d9c8c) {
            ctx->pc = 0x1D9CA0u;
            goto label_1d9ca0;
        }
    }
    ctx->pc = 0x1D9C94u;
    // 0x1d9c94: 0x10400002
    ctx->pc = 0x1D9C94u;
    {
        const bool branch_taken_0x1d9c94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9c94) {
            ctx->pc = 0x1D9CA0u;
            goto label_1d9ca0;
        }
    }
    ctx->pc = 0x1D9C9Cu;
    // 0x1d9c9c: 0x2442fff8
    ctx->pc = 0x1d9c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d9ca0:
    // 0x1d9ca0: 0x3c010035
    ctx->pc = 0x1d9ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9ca4: 0xac2282c8
    ctx->pc = 0x1d9ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935240), GPR_U32(ctx, 2));
label_1d9ca8:
    // 0x1d9ca8: 0xae000124
    ctx->pc = 0x1d9ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1d9cac: 0x24030002
    ctx->pc = 0x1d9cacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9cb0: 0x24020004
    ctx->pc = 0x1d9cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9cb4: 0xae030128
    ctx->pc = 0x1d9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x1d9cb8: 0xae02012c
    ctx->pc = 0x1d9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x1d9cbc: 0x26030100
    ctx->pc = 0x1d9cbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d9cc0: 0x26020110
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 272));
    // 0x1d9cc4: 0xae030110
    ctx->pc = 0x1d9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x1d9cc8: 0xc076518
    ctx->pc = 0x1D9CC8u;
    SET_GPR_U32(ctx, 31, 0x1D9CD0u);
    ctx->pc = 0x1D9CCCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CD0u; }
    }
    if (ctx->pc != 0x1D9CD0u) { return; }
    ctx->pc = 0x1D9CD0u;
    // 0x1d9cd0: 0x10000005
    ctx->pc = 0x1D9CD0u;
    {
        const bool branch_taken_0x1d9cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9CD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 288));
        if (branch_taken_0x1d9cd0) {
            ctx->pc = 0x1D9CE8u;
            goto label_1d9ce8;
        }
    }
    ctx->pc = 0x1D9CD8u;
label_1d9cd8:
    // 0x1d9cd8: 0xc076518
    ctx->pc = 0x1D9CD8u;
    SET_GPR_U32(ctx, 31, 0x1D9CE0u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CE0u; }
    }
    if (ctx->pc != 0x1D9CE0u) { return; }
    ctx->pc = 0x1D9CE0u;
    // 0x1d9ce0: 0x102d
    ctx->pc = 0x1d9ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ce4: 0x0
    ctx->pc = 0x1d9ce4u;
    // NOP
label_1d9ce8:
    // 0x1d9ce8: 0xdfbf0030
    ctx->pc = 0x1d9ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9cec: 0x7bb20020
    ctx->pc = 0x1d9cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9cf0: 0x7bb10010
    ctx->pc = 0x1d9cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9cf4: 0x7bb00000
    ctx->pc = 0x1d9cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cf8: 0x3e00008
    ctx->pc = 0x1D9CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9CFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9D00u;
    // 0x1d9d00: 0x27bdffe0
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d04: 0xffbf0010
    ctx->pc = 0x1d9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d08: 0x7fb00000
    ctx->pc = 0x1d9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9d0c: 0xc07651c
    ctx->pc = 0x1D9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D14u);
    ctx->pc = 0x1D9D10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D9470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9470_0x1d9470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D14u; }
    }
    if (ctx->pc != 0x1D9D14u) { return; }
    ctx->pc = 0x1D9D14u;
    // 0x1d9d14: 0x10400004
    ctx->pc = 0x1D9D14u;
    {
        const bool branch_taken_0x1d9d14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9d14) {
            ctx->pc = 0x1D9D28u;
            goto label_1d9d28;
        }
    }
    ctx->pc = 0x1D9D1Cu;
    // 0x1d9d1c: 0x1000001a
    ctx->pc = 0x1D9D1Cu;
    {
        const bool branch_taken_0x1d9d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9d1c) {
            ctx->pc = 0x1D9D88u;
            goto label_1d9d88;
        }
    }
    ctx->pc = 0x1D9D24u;
    // 0x1d9d24: 0x0
    ctx->pc = 0x1d9d24u;
    // NOP
label_1d9d28:
    // 0x1d9d28: 0xc0766a8
    ctx->pc = 0x1D9D28u;
    SET_GPR_U32(ctx, 31, 0x1D9D30u);
    ctx->pc = 0x1D9D2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D9AA0u;
    goto label_1d9aa0;
    ctx->pc = 0x1D9D30u;
label_1d9d30:
    // 0x1d9d30: 0x14400003
    ctx->pc = 0x1D9D30u;
    {
        const bool branch_taken_0x1d9d30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9d30) {
            ctx->pc = 0x1D9D40u;
            goto label_1d9d40;
        }
    }
    ctx->pc = 0x1D9D38u;
    // 0x1d9d38: 0x10000013
    ctx->pc = 0x1D9D38u;
    {
        const bool branch_taken_0x1d9d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9D3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9d38) {
            ctx->pc = 0x1D9D88u;
            goto label_1d9d88;
        }
    }
    ctx->pc = 0x1D9D40u;
label_1d9d40:
    // 0x1d9d40: 0x8c430010
    ctx->pc = 0x1d9d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d9d44: 0x3c0400ff
    ctx->pc = 0x1d9d44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x1d9d48: 0x8c630000
    ctx->pc = 0x1d9d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9d4c: 0x3c02ff00
    ctx->pc = 0x1d9d4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1d9d50: 0x90670001
    ctx->pc = 0x1d9d50u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d9d54: 0x90650002
    ctx->pc = 0x1d9d54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d9d58: 0x90660000
    ctx->pc = 0x1d9d58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9d5c: 0x73a00
    ctx->pc = 0x1d9d5cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9d60: 0x30e7ff00
    ctx->pc = 0x1d9d60u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 65280));
    // 0x1d9d64: 0x52c00
    ctx->pc = 0x1d9d64u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1d9d68: 0x90630003
    ctx->pc = 0x1d9d68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1d9d6c: 0xc73025
    ctx->pc = 0x1d9d6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d9d70: 0xa42024
    ctx->pc = 0x1d9d70u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d9d74: 0x862025
    ctx->pc = 0x1d9d74u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d9d78: 0x31e00
    ctx->pc = 0x1d9d78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x1d9d7c: 0x621024
    ctx->pc = 0x1d9d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9d80: 0x441025
    ctx->pc = 0x1d9d80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9d84: 0x0
    ctx->pc = 0x1d9d84u;
    // NOP
label_1d9d88:
    // 0x1d9d88: 0xdfbf0010
    ctx->pc = 0x1d9d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d8c: 0x7bb00000
    ctx->pc = 0x1d9d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d90: 0x3e00008
    ctx->pc = 0x1D9D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9D98u;
    // 0x1d9d98: 0x0
    ctx->pc = 0x1d9d98u;
    // NOP
    // 0x1d9d9c: 0x0
    ctx->pc = 0x1d9d9cu;
    // NOP
    // 0x1d9da0: 0x27bdff70
    ctx->pc = 0x1d9da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d9da4: 0xffbf0070
    ctx->pc = 0x1d9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d9da8: 0x7fb60060
    ctx->pc = 0x1d9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d9dac: 0x7fb50050
    ctx->pc = 0x1d9dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d9db0: 0xa0b02d
    ctx->pc = 0x1d9db0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9db4: 0x7fb40040
    ctx->pc = 0x1d9db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d9db8: 0xc0a82d
    ctx->pc = 0x1d9db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dbc: 0x7fb30030
    ctx->pc = 0x1d9dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9dc0: 0x7fb20020
    ctx->pc = 0x1d9dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9dc4: 0x7fb10010
    ctx->pc = 0x1d9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9dc8: 0x7fb00000
    ctx->pc = 0x1d9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9dcc: 0x4800004
    ctx->pc = 0x1D9DCCu;
    {
        const bool branch_taken_0x1d9dcc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D9DD0u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d9dcc) {
            ctx->pc = 0x1D9DE0u;
            goto label_1d9de0;
        }
    }
    ctx->pc = 0x1D9DD4u;
    // 0x1d9dd4: 0x28820003
    ctx->pc = 0x1d9dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x1d9dd8: 0x14400007
    ctx->pc = 0x1D9DD8u;
    {
        const bool branch_taken_0x1d9dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9dd8) {
            ctx->pc = 0x1D9DF8u;
            goto label_1d9df8;
        }
    }
    ctx->pc = 0x1D9DE0u;
label_1d9de0:
    // 0x1d9de0: 0x24020009
    ctx->pc = 0x1d9de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d9de4: 0x3c010035
    ctx->pc = 0x1d9de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9de8: 0xac228c88
    ctx->pc = 0x1d9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    // 0x1d9dec: 0x10000098
    ctx->pc = 0x1D9DECu;
    {
        const bool branch_taken_0x1d9dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9DF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9dec) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9DF4u;
    // 0x1d9df4: 0x0
    ctx->pc = 0x1d9df4u;
    // NOP
label_1d9df8:
    // 0x1d9df8: 0x3c020035
    ctx->pc = 0x1d9df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9dfc: 0x49080
    ctx->pc = 0x1d9dfcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9e00: 0x24428c90
    ctx->pc = 0x1d9e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1d9e04: 0x528021
    ctx->pc = 0x1d9e04u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d9e08: 0x8e020000
    ctx->pc = 0x1d9e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9e0c: 0x441008c
    ctx->pc = 0x1D9E0Cu;
    {
        const bool branch_taken_0x1d9e0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D9E10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1d9e0c) {
            ctx->pc = 0x1DA040u;
            goto label_1da040;
        }
    }
    ctx->pc = 0x1D9E14u;
    // 0x1d9e14: 0x3c010035
    ctx->pc = 0x1d9e14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9e18: 0x2402ffff
    ctx->pc = 0x1d9e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e1c: 0x1000008c
    ctx->pc = 0x1D9E1Cu;
    {
        const bool branch_taken_0x1d9e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9E20u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9e1c) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9E24u;
    // 0x1d9e24: 0x0
    ctx->pc = 0x1d9e24u;
    // NOP
label_1d9e28:
    // 0x1d9e28: 0xc076514
    ctx->pc = 0x1D9E28u;
    SET_GPR_U32(ctx, 31, 0x1D9E30u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E30u; }
    }
    if (ctx->pc != 0x1D9E30u) { return; }
    ctx->pc = 0x1D9E30u;
    // 0x1d9e30: 0x8e230000
    ctx->pc = 0x1d9e30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9e34: 0x24020001
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e38: 0x1462000b
    ctx->pc = 0x1D9E38u;
    {
        const bool branch_taken_0x1d9e38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x1d9e38) {
            ctx->pc = 0x1D9E68u;
            goto label_1d9e68;
        }
    }
    ctx->pc = 0x1D9E40u;
    // 0x1d9e40: 0x2404ffff
    ctx->pc = 0x1d9e40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e44: 0x24428c70
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1d9e48: 0x3c010035
    ctx->pc = 0x1d9e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9e4c: 0x521821
    ctx->pc = 0x1d9e4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d9e50: 0x24020071
    ctx->pc = 0x1d9e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
    // 0x1d9e54: 0xac640000
    ctx->pc = 0x1d9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1d9e58: 0xc076518
    ctx->pc = 0x1D9E58u;
    SET_GPR_U32(ctx, 31, 0x1D9E60u);
    ctx->pc = 0x1D9E5Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E60u; }
    }
    if (ctx->pc != 0x1D9E60u) { return; }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0x1000007b
    ctx->pc = 0x1D9E60u;
    {
        const bool branch_taken_0x1d9e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9E64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9e60) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9E68u;
label_1d9e68:
    // 0x1d9e68: 0xc076518
    ctx->pc = 0x1D9E68u;
    SET_GPR_U32(ctx, 31, 0x1D9E70u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E70u; }
    }
    if (ctx->pc != 0x1D9E70u) { return; }
    ctx->pc = 0x1D9E70u;
    // 0x1d9e70: 0xa02d
    ctx->pc = 0x1d9e70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e74: 0x280182d
    ctx->pc = 0x1d9e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e78: 0x26820001
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d9e7c: 0x2a43c
    ctx->pc = 0x1d9e7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9e80: 0x3143c
    ctx->pc = 0x1d9e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d9e84: 0x2143f
    ctx->pc = 0x1d9e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9e88: 0x284141a0
    ctx->pc = 0x1d9e88u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1d9e8c: 0x10200022
    ctx->pc = 0x1D9E8Cu;
    {
        const bool branch_taken_0x1d9e8c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9E90u;
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        if (branch_taken_0x1d9e8c) {
            ctx->pc = 0x1D9F18u;
            goto label_1d9f18;
        }
    }
    ctx->pc = 0x1D9E94u;
    // 0x1d9e94: 0x3c020035
    ctx->pc = 0x1d9e94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9e98: 0x24428c90
    ctx->pc = 0x1d9e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1d9e9c: 0x529821
    ctx->pc = 0x1d9e9cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d9ea0:
    // 0x1d9ea0: 0x86640000
    ctx->pc = 0x1d9ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9ea4: 0x27a5008e
    ctx->pc = 0x1d9ea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 142));
    // 0x1d9ea8: 0x27a6008c
    ctx->pc = 0x1d9ea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 140));
    // 0x1d9eac: 0xc075f48
    ctx->pc = 0x1D9EACu;
    SET_GPR_U32(ctx, 31, 0x1D9EB4u);
    ctx->pc = 0x1D9EB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 138));
    ctx->pc = 0x1D7D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7D20_0x1d7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EB4u; }
    }
    if (ctx->pc != 0x1D9EB4u) { return; }
    ctx->pc = 0x1D9EB4u;
    // 0x1d9eb4: 0x2143c
    ctx->pc = 0x1d9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9eb8: 0x2143f
    ctx->pc = 0x1d9eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9ebc: 0x4410006
    ctx->pc = 0x1D9EBCu;
    {
        const bool branch_taken_0x1d9ebc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D9EC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1d9ebc) {
            ctx->pc = 0x1D9ED8u;
            goto label_1d9ed8;
        }
    }
    ctx->pc = 0x1D9EC4u;
    // 0x1d9ec4: 0x3c010035
    ctx->pc = 0x1d9ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9ec8: 0x2402ffff
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ecc: 0x10000060
    ctx->pc = 0x1D9ECCu;
    {
        const bool branch_taken_0x1d9ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9ED0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9ecc) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9ED4u;
    // 0x1d9ed4: 0x0
    ctx->pc = 0x1d9ed4u;
    // NOP
label_1d9ed8:
    // 0x1d9ed8: 0x87a3008e
    ctx->pc = 0x1d9ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x1d9edc: 0x24020002
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9ee0: 0x10620003
    ctx->pc = 0x1D9EE0u;
    {
        const bool branch_taken_0x1d9ee0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9EE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1d9ee0) {
            ctx->pc = 0x1D9EF0u;
            goto label_1d9ef0;
        }
    }
    ctx->pc = 0x1D9EE8u;
    // 0x1d9ee8: 0x1462000b
    ctx->pc = 0x1D9EE8u;
    {
        const bool branch_taken_0x1d9ee8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9ee8) {
            ctx->pc = 0x1D9F18u;
            goto label_1d9f18;
        }
    }
    ctx->pc = 0x1D9EF0u;
label_1d9ef0:
    // 0x1d9ef0: 0xc07690c
    ctx->pc = 0x1D9EF0u;
    SET_GPR_U32(ctx, 31, 0x1D9EF8u);
    ctx->pc = 0x1DA430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA430_0x1da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EF8u; }
    }
    if (ctx->pc != 0x1D9EF8u) { return; }
    ctx->pc = 0x1D9EF8u;
    // 0x1d9ef8: 0x280182d
    ctx->pc = 0x1d9ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9efc: 0x26820001
    ctx->pc = 0x1d9efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d9f00: 0x2a43c
    ctx->pc = 0x1d9f00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9f04: 0x3143c
    ctx->pc = 0x1d9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d9f08: 0x2143f
    ctx->pc = 0x1d9f08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9f0c: 0x284241a0
    ctx->pc = 0x1d9f0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1d9f10: 0x1440ffe3
    ctx->pc = 0x1D9F10u;
    {
        const bool branch_taken_0x1d9f10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9F14u;
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        if (branch_taken_0x1d9f10) {
            ctx->pc = 0x1D9EA0u;
            goto label_1d9ea0;
        }
    }
    ctx->pc = 0x1D9F18u;
label_1d9f18:
    // 0x1d9f18: 0x87a4008e
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x1d9f1c: 0x24020005
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d9f20: 0x14820007
    ctx->pc = 0x1D9F20u;
    {
        const bool branch_taken_0x1d9f20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9f20) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F28u;
    // 0x1d9f28: 0x87a3008a
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x1d9f2c: 0x14600012
    ctx->pc = 0x1D9F2Cu;
    {
        const bool branch_taken_0x1d9f2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f2c) {
            ctx->pc = 0x1D9F78u;
            goto label_1d9f78;
        }
    }
    ctx->pc = 0x1D9F34u;
    // 0x1d9f34: 0x10000018
    ctx->pc = 0x1D9F34u;
    {
        const bool branch_taken_0x1d9f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f34) {
            ctx->pc = 0x1D9F98u;
            goto label_1d9f98;
        }
    }
    ctx->pc = 0x1D9F3Cu;
    // 0x1d9f3c: 0x0
    ctx->pc = 0x1d9f3cu;
    // NOP
label_1d9f40:
    // 0x1d9f40: 0x2402ffff
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9f44: 0x14820006
    ctx->pc = 0x1D9F44u;
    {
        const bool branch_taken_0x1d9f44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9f44) {
            ctx->pc = 0x1D9F60u;
            goto label_1d9f60;
        }
    }
    ctx->pc = 0x1D9F4Cu;
    // 0x1d9f4c: 0x87a3008a
    ctx->pc = 0x1d9f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x1d9f50: 0x14600009
    ctx->pc = 0x1D9F50u;
    {
        const bool branch_taken_0x1d9f50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f50) {
            ctx->pc = 0x1D9F78u;
            goto label_1d9f78;
        }
    }
    ctx->pc = 0x1D9F58u;
    // 0x1d9f58: 0x1000000f
    ctx->pc = 0x1D9F58u;
    {
        const bool branch_taken_0x1d9f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f58) {
            ctx->pc = 0x1D9F98u;
            goto label_1d9f98;
        }
    }
    ctx->pc = 0x1D9F60u;
label_1d9f60:
    // 0x1d9f60: 0x24030004
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9f64: 0x10830004
    ctx->pc = 0x1D9F64u;
    {
        const bool branch_taken_0x1d9f64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D9F68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1d9f64) {
            ctx->pc = 0x1D9F78u;
            goto label_1d9f78;
        }
    }
    ctx->pc = 0x1D9F6Cu;
    // 0x1d9f6c: 0x3c010035
    ctx->pc = 0x1d9f6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9f70: 0x10000037
    ctx->pc = 0x1D9F70u;
    {
        const bool branch_taken_0x1d9f70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9F74u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9f70) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9F78u;
label_1d9f78:
    // 0x1d9f78: 0x87a3008a
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x1d9f7c: 0x3102a
    ctx->pc = 0x1d9f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1d9f80: 0x14400005
    ctx->pc = 0x1D9F80u;
    {
        const bool branch_taken_0x1d9f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f80) {
            ctx->pc = 0x1D9F98u;
            goto label_1d9f98;
        }
    }
    ctx->pc = 0x1D9F88u;
    // 0x1d9f88: 0xc07690c
    ctx->pc = 0x1D9F88u;
    SET_GPR_U32(ctx, 31, 0x1D9F90u);
    ctx->pc = 0x1DA430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA430_0x1da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F90u; }
    }
    if (ctx->pc != 0x1D9F90u) { return; }
    ctx->pc = 0x1D9F90u;
    // 0x1d9f90: 0x1000ffa5
    ctx->pc = 0x1D9F90u;
    {
        const bool branch_taken_0x1d9f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9f90) {
            ctx->pc = 0x1D9E28u;
            goto label_1d9e28;
        }
    }
    ctx->pc = 0x1D9F98u;
label_1d9f98:
    // 0x1d9f98: 0x14600003
    ctx->pc = 0x1D9F98u;
    {
        const bool branch_taken_0x1d9f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9F9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f98) {
            ctx->pc = 0x1D9FA8u;
            goto label_1d9fa8;
        }
    }
    ctx->pc = 0x1D9FA0u;
    // 0x1d9fa0: 0x10000023
    ctx->pc = 0x1D9FA0u;
    {
        const bool branch_taken_0x1d9fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9fa0) {
            ctx->pc = 0x1DA030u;
            goto label_1da030;
        }
    }
    ctx->pc = 0x1D9FA8u;
label_1d9fa8:
    // 0x1d9fa8: 0x75082b
    ctx->pc = 0x1d9fa8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d9fac: 0x10200004
    ctx->pc = 0x1D9FACu;
    {
        const bool branch_taken_0x1d9fac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9fac) {
            ctx->pc = 0x1D9FC0u;
            goto label_1d9fc0;
        }
    }
    ctx->pc = 0x1D9FB4u;
    // 0x1d9fb4: 0x3ac3c
    ctx->pc = 0x1d9fb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d9fb8: 0x15ac3f
    ctx->pc = 0x1d9fb8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1d9fbc: 0x0
    ctx->pc = 0x1d9fbcu;
    // NOP
label_1d9fc0:
    // 0x1d9fc0: 0x86040000
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9fc4: 0x15343c
    ctx->pc = 0x1d9fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1d9fc8: 0x2c0282d
    ctx->pc = 0x1d9fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fcc: 0xc075fd8
    ctx->pc = 0x1D9FCCu;
    SET_GPR_U32(ctx, 31, 0x1D9FD4u);
    ctx->pc = 0x1D9FD0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D7F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7F60_0x1d7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FD4u; }
    }
    if (ctx->pc != 0x1D9FD4u) { return; }
    ctx->pc = 0x1D9FD4u;
    // 0x1d9fd4: 0x2243c
    ctx->pc = 0x1d9fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9fd8: 0x4243f
    ctx->pc = 0x1d9fd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1d9fdc: 0x4810006
    ctx->pc = 0x1D9FDCu;
    {
        const bool branch_taken_0x1d9fdc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D9FE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1d9fdc) {
            ctx->pc = 0x1D9FF8u;
            goto label_1d9ff8;
        }
    }
    ctx->pc = 0x1D9FE4u;
    // 0x1d9fe4: 0x3c010035
    ctx->pc = 0x1d9fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9fe8: 0x2402ffff
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9fec: 0x10000018
    ctx->pc = 0x1D9FECu;
    {
        const bool branch_taken_0x1d9fec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9FF0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9fec) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1D9FF4u;
    // 0x1d9ff4: 0x0
    ctx->pc = 0x1d9ff4u;
    // NOP
label_1d9ff8:
    // 0x1d9ff8: 0x87a3008e
    ctx->pc = 0x1d9ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x1d9ffc: 0x24020005
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da000: 0x10620003
    ctx->pc = 0x1DA000u;
    {
        const bool branch_taken_0x1da000 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1DA004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1da000) {
            ctx->pc = 0x1DA010u;
            goto label_1da010;
        }
    }
    ctx->pc = 0x1DA008u;
    // 0x1da008: 0x14620009
    ctx->pc = 0x1DA008u;
    {
        const bool branch_taken_0x1da008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1da008) {
            ctx->pc = 0x1DA030u;
            goto label_1da030;
        }
    }
    ctx->pc = 0x1DA010u;
label_1da010:
    // 0x1da010: 0x14950007
    ctx->pc = 0x1DA010u;
    {
        const bool branch_taken_0x1da010 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 21));
        if (branch_taken_0x1da010) {
            ctx->pc = 0x1DA030u;
            goto label_1da030;
        }
    }
    ctx->pc = 0x1DA018u;
    // 0x1da018: 0x87a2008a
    ctx->pc = 0x1da018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x1da01c: 0x14820004
    ctx->pc = 0x1DA01Cu;
    {
        const bool branch_taken_0x1da01c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DA020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1da01c) {
            ctx->pc = 0x1DA030u;
            goto label_1da030;
        }
    }
    ctx->pc = 0x1DA024u;
    // 0x1da024: 0x3c010035
    ctx->pc = 0x1da024u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da028: 0xac228c88
    ctx->pc = 0x1da028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    // 0x1da02c: 0x0
    ctx->pc = 0x1da02cu;
    // NOP
label_1da030:
    // 0x1da030: 0x4143c
    ctx->pc = 0x1da030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1da034: 0x10000006
    ctx->pc = 0x1DA034u;
    {
        const bool branch_taken_0x1da034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA038u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x1da034) {
            ctx->pc = 0x1DA050u;
            goto label_1da050;
        }
    }
    ctx->pc = 0x1DA03Cu;
    // 0x1da03c: 0x0
    ctx->pc = 0x1da03cu;
    // NOP
label_1da040:
    // 0x1da040: 0x3c020035
    ctx->pc = 0x1da040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1da044: 0x24428c70
    ctx->pc = 0x1da044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1da048: 0x1000ff77
    ctx->pc = 0x1DA048u;
    {
        const bool branch_taken_0x1da048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA04Cu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x1da048) {
            ctx->pc = 0x1D9E28u;
            goto label_1d9e28;
        }
    }
    ctx->pc = 0x1DA050u;
label_1da050:
    // 0x1da050: 0xdfbf0070
    ctx->pc = 0x1da050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da054: 0x7bb60060
    ctx->pc = 0x1da054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1da058: 0x7bb50050
    ctx->pc = 0x1da058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da05c: 0x7bb40040
    ctx->pc = 0x1da05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da060: 0x7bb30030
    ctx->pc = 0x1da060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da064: 0x7bb20020
    ctx->pc = 0x1da064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da068: 0x7bb10010
    ctx->pc = 0x1da068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da06c: 0x7bb00000
    ctx->pc = 0x1da06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da070: 0x3e00008
    ctx->pc = 0x1DA070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA074u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA078u;
    // 0x1da078: 0x0
    ctx->pc = 0x1da078u;
    // NOP
    // 0x1da07c: 0x0
    ctx->pc = 0x1da07cu;
    // NOP
    // 0x1da080: 0x27bdffa0
    ctx->pc = 0x1da080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1da084: 0xffbf0040
    ctx->pc = 0x1da084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1da088: 0x7fb30030
    ctx->pc = 0x1da088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da08c: 0x7fb20020
    ctx->pc = 0x1da08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da090: 0xa0982d
    ctx->pc = 0x1da090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da094: 0x7fb10010
    ctx->pc = 0x1da094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da098: 0xc0902d
    ctx->pc = 0x1da098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da09c: 0x7fb00000
    ctx->pc = 0x1da09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da0a0: 0x4800005
    ctx->pc = 0x1DA0A0u;
    {
        const bool branch_taken_0x1da0a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DA0A4u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1da0a0) {
            ctx->pc = 0x1DA0B8u;
            goto label_1da0b8;
        }
    }
    ctx->pc = 0x1DA0A8u;
    // 0x1da0a8: 0x28820003
    ctx->pc = 0x1da0a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x1da0ac: 0x14400008
    ctx->pc = 0x1DA0ACu;
    {
        const bool branch_taken_0x1da0ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1da0ac) {
            ctx->pc = 0x1DA0D0u;
            goto label_1da0d0;
        }
    }
    ctx->pc = 0x1DA0B4u;
    // 0x1da0b4: 0x0
    ctx->pc = 0x1da0b4u;
    // NOP
label_1da0b8:
    // 0x1da0b8: 0x24020009
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1da0bc: 0x3c010035
    ctx->pc = 0x1da0bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da0c0: 0xac228c88
    ctx->pc = 0x1da0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    // 0x1da0c4: 0x10000046
    ctx->pc = 0x1DA0C4u;
    {
        const bool branch_taken_0x1da0c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA0C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1da0c4) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA0CCu;
    // 0x1da0cc: 0x0
    ctx->pc = 0x1da0ccu;
    // NOP
label_1da0d0:
    // 0x1da0d0: 0x3c020035
    ctx->pc = 0x1da0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1da0d4: 0x41880
    ctx->pc = 0x1da0d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1da0d8: 0x24428c90
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1da0dc: 0x438021
    ctx->pc = 0x1da0dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da0e0: 0x8e020000
    ctx->pc = 0x1da0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da0e4: 0x4410006
    ctx->pc = 0x1DA0E4u;
    {
        const bool branch_taken_0x1da0e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DA0E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1da0e4) {
            ctx->pc = 0x1DA100u;
            goto label_1da100;
        }
    }
    ctx->pc = 0x1DA0ECu;
    // 0x1da0ec: 0x3c010035
    ctx->pc = 0x1da0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da0f0: 0x2402ffff
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da0f4: 0x1000003a
    ctx->pc = 0x1DA0F4u;
    {
        const bool branch_taken_0x1da0f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA0F8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1da0f4) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA0FCu;
    // 0x1da0fc: 0x0
    ctx->pc = 0x1da0fcu;
    // NOP
label_1da100:
    // 0x1da100: 0x882d
    ctx->pc = 0x1da100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da104: 0x220182d
    ctx->pc = 0x1da104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da108: 0x26220001
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da10c: 0x28c3c
    ctx->pc = 0x1da10cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1da110: 0x3143c
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1da114: 0x2143f
    ctx->pc = 0x1da114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1da118: 0x284141a0
    ctx->pc = 0x1da118u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1da11c: 0x10200020
    ctx->pc = 0x1DA11Cu;
    {
        const bool branch_taken_0x1da11c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA120u;
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        if (branch_taken_0x1da11c) {
            ctx->pc = 0x1DA1A0u;
            goto label_1da1a0;
        }
    }
    ctx->pc = 0x1DA124u;
    // 0x1da124: 0x0
    ctx->pc = 0x1da124u;
    // NOP
label_1da128:
    // 0x1da128: 0x86040000
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da12c: 0x27a5005e
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 94));
    // 0x1da130: 0x27a6005c
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 92));
    // 0x1da134: 0xc075f48
    ctx->pc = 0x1DA134u;
    SET_GPR_U32(ctx, 31, 0x1DA13Cu);
    ctx->pc = 0x1DA138u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 90));
    ctx->pc = 0x1D7D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7D20_0x1d7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA13Cu; }
    }
    if (ctx->pc != 0x1DA13Cu) { return; }
    ctx->pc = 0x1DA13Cu;
    // 0x1da13c: 0x2143c
    ctx->pc = 0x1da13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1da140: 0x2143f
    ctx->pc = 0x1da140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1da144: 0x4410006
    ctx->pc = 0x1DA144u;
    {
        const bool branch_taken_0x1da144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DA148u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1da144) {
            ctx->pc = 0x1DA160u;
            goto label_1da160;
        }
    }
    ctx->pc = 0x1DA14Cu;
    // 0x1da14c: 0x3c010035
    ctx->pc = 0x1da14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da150: 0x2402ffff
    ctx->pc = 0x1da150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da154: 0x10000022
    ctx->pc = 0x1DA154u;
    {
        const bool branch_taken_0x1da154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA158u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1da154) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA15Cu;
    // 0x1da15c: 0x0
    ctx->pc = 0x1da15cu;
    // NOP
label_1da160:
    // 0x1da160: 0x87a3005e
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x1da164: 0x24020002
    ctx->pc = 0x1da164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da168: 0x10620003
    ctx->pc = 0x1DA168u;
    {
        const bool branch_taken_0x1da168 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1DA16Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1da168) {
            ctx->pc = 0x1DA178u;
            goto label_1da178;
        }
    }
    ctx->pc = 0x1DA170u;
    // 0x1da170: 0x1462000b
    ctx->pc = 0x1DA170u;
    {
        const bool branch_taken_0x1da170 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1da170) {
            ctx->pc = 0x1DA1A0u;
            goto label_1da1a0;
        }
    }
    ctx->pc = 0x1DA178u;
label_1da178:
    // 0x1da178: 0xc07690c
    ctx->pc = 0x1DA178u;
    SET_GPR_U32(ctx, 31, 0x1DA180u);
    ctx->pc = 0x1DA430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA430_0x1da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA180u; }
    }
    if (ctx->pc != 0x1DA180u) { return; }
    ctx->pc = 0x1DA180u;
    // 0x1da180: 0x220182d
    ctx->pc = 0x1da180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da184: 0x26220001
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da188: 0x28c3c
    ctx->pc = 0x1da188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1da18c: 0x3143c
    ctx->pc = 0x1da18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1da190: 0x2143f
    ctx->pc = 0x1da190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1da194: 0x284241a0
    ctx->pc = 0x1da194u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1da198: 0x1440ffe3
    ctx->pc = 0x1DA198u;
    {
        const bool branch_taken_0x1da198 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA19Cu;
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        if (branch_taken_0x1da198) {
            ctx->pc = 0x1DA128u;
            goto label_1da128;
        }
    }
    ctx->pc = 0x1DA1A0u;
label_1da1a0:
    // 0x1da1a0: 0x86040000
    ctx->pc = 0x1da1a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da1a4: 0x12343c
    ctx->pc = 0x1da1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1da1a8: 0x260282d
    ctx->pc = 0x1da1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da1ac: 0xc075f70
    ctx->pc = 0x1DA1ACu;
    SET_GPR_U32(ctx, 31, 0x1DA1B4u);
    ctx->pc = 0x1DA1B0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D7DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7DC0_0x1d7dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B4u; }
    }
    if (ctx->pc != 0x1DA1B4u) { return; }
    ctx->pc = 0x1DA1B4u;
    // 0x1da1b4: 0x2143c
    ctx->pc = 0x1da1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1da1b8: 0x2143f
    ctx->pc = 0x1da1b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1da1bc: 0x4410006
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DA1C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA1D8u;
            goto label_1da1d8;
        }
    }
    ctx->pc = 0x1DA1C4u;
    // 0x1da1c4: 0x3c010035
    ctx->pc = 0x1da1c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da1c8: 0x2402ffff
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da1cc: 0x10000004
    ctx->pc = 0x1DA1CCu;
    {
        const bool branch_taken_0x1da1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA1D0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1da1cc) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA1D4u;
    // 0x1da1d4: 0x0
    ctx->pc = 0x1da1d4u;
    // NOP
label_1da1d8:
    // 0x1da1d8: 0x12103c
    ctx->pc = 0x1da1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1da1dc: 0x2103e
    ctx->pc = 0x1da1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1da1e0:
    // 0x1da1e0: 0xdfbf0040
    ctx->pc = 0x1da1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da1e4: 0x7bb30030
    ctx->pc = 0x1da1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da1e8: 0x7bb20020
    ctx->pc = 0x1da1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da1ec: 0x7bb10010
    ctx->pc = 0x1da1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da1f0: 0x7bb00000
    ctx->pc = 0x1da1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da1f4: 0x3e00008
    ctx->pc = 0x1DA1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA1F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA1FCu;
    // 0x1da1fc: 0x0
    ctx->pc = 0x1da1fcu;
    // NOP
    // 0x1da200: 0x27bdffd0
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da204: 0xffbf0020
    ctx->pc = 0x1da204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1da208: 0x7fb10010
    ctx->pc = 0x1da208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da20c: 0x7fb00000
    ctx->pc = 0x1da20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da210: 0x80802d
    ctx->pc = 0x1da210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da214: 0x6000004
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1DA218u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA228u;
            goto label_1da228;
        }
    }
    ctx->pc = 0x1DA21Cu;
    // 0x1da21c: 0x14400008
    ctx->pc = 0x1DA21Cu;
    {
        const bool branch_taken_0x1da21c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1da21c) {
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA224u;
    // 0x1da224: 0x0
    ctx->pc = 0x1da224u;
    // NOP
label_1da228:
    // 0x1da228: 0x24020009
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1da22c: 0x3c010035
    ctx->pc = 0x1da22cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da230: 0xac228c88
    ctx->pc = 0x1da230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    // 0x1da234: 0x10000030
    ctx->pc = 0x1DA234u;
    {
        const bool branch_taken_0x1da234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA238u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1da234) {
            ctx->pc = 0x1DA2F8u;
            goto label_1da2f8;
        }
    }
    ctx->pc = 0x1DA23Cu;
    // 0x1da23c: 0x0
    ctx->pc = 0x1da23cu;
    // NOP
label_1da240:
    // 0x1da240: 0xc076514
    ctx->pc = 0x1DA240u;
    SET_GPR_U32(ctx, 31, 0x1DA248u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA248u; }
    }
    if (ctx->pc != 0x1DA248u) { return; }
    ctx->pc = 0x1DA248u;
    // 0x1da248: 0x3c020035
    ctx->pc = 0x1da248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1da24c: 0x108080
    ctx->pc = 0x1da24cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1da250: 0x24428c90
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1da254: 0x508821
    ctx->pc = 0x1da254u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1da258: 0x8e230000
    ctx->pc = 0x1da258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da25c: 0x2402fffe
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1da260: 0x14620009
    ctx->pc = 0x1DA260u;
    {
        const bool branch_taken_0x1da260 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DA264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x1da260) {
            ctx->pc = 0x1DA288u;
            goto label_1da288;
        }
    }
    ctx->pc = 0x1DA268u;
    // 0x1da268: 0x2403ffff
    ctx->pc = 0x1da268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da26c: 0x24428c70
    ctx->pc = 0x1da26cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1da270: 0xae230000
    ctx->pc = 0x1da270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1da274: 0x501021
    ctx->pc = 0x1da274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1da278: 0xc076518
    ctx->pc = 0x1DA278u;
    SET_GPR_U32(ctx, 31, 0x1DA280u);
    ctx->pc = 0x1DA27Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA280u; }
    }
    if (ctx->pc != 0x1DA280u) { return; }
    ctx->pc = 0x1DA280u;
    // 0x1da280: 0x1000001d
    ctx->pc = 0x1DA280u;
    {
        const bool branch_taken_0x1da280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1da280) {
            ctx->pc = 0x1DA2F8u;
            goto label_1da2f8;
        }
    }
    ctx->pc = 0x1DA288u;
label_1da288:
    // 0x1da288: 0xc076518
    ctx->pc = 0x1DA288u;
    SET_GPR_U32(ctx, 31, 0x1DA290u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA290u; }
    }
    if (ctx->pc != 0x1DA290u) { return; }
    ctx->pc = 0x1DA290u;
    // 0x1da290: 0x8e220000
    ctx->pc = 0x1da290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da294: 0x4410006
    ctx->pc = 0x1DA294u;
    {
        const bool branch_taken_0x1da294 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DA298u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1da294) {
            ctx->pc = 0x1DA2B0u;
            goto label_1da2b0;
        }
    }
    ctx->pc = 0x1DA29Cu;
    // 0x1da29c: 0x3c010035
    ctx->pc = 0x1da29cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da2a0: 0x2402ffff
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da2a4: 0x10000014
    ctx->pc = 0x1DA2A4u;
    {
        const bool branch_taken_0x1da2a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA2A8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1da2a4) {
            ctx->pc = 0x1DA2F8u;
            goto label_1da2f8;
        }
    }
    ctx->pc = 0x1DA2ACu;
    // 0x1da2ac: 0x0
    ctx->pc = 0x1da2acu;
    // NOP
label_1da2b0:
    // 0x1da2b0: 0xc076514
    ctx->pc = 0x1DA2B0u;
    SET_GPR_U32(ctx, 31, 0x1DA2B8u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B8u; }
    }
    if (ctx->pc != 0x1DA2B8u) { return; }
    ctx->pc = 0x1DA2B8u;
    // 0x1da2b8: 0x3c020035
    ctx->pc = 0x1da2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1da2bc: 0x24428c90
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1da2c0: 0x508821
    ctx->pc = 0x1da2c0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1da2c4: 0xc075f30
    ctx->pc = 0x1DA2C4u;
    SET_GPR_U32(ctx, 31, 0x1DA2CCu);
    ctx->pc = 0x1DA2C8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1D7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7CC0_0x1d7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2CCu; }
    }
    if (ctx->pc != 0x1DA2CCu) { return; }
    ctx->pc = 0x1DA2CCu;
    // 0x1da2cc: 0xc076060
    ctx->pc = 0x1DA2CCu;
    SET_GPR_U32(ctx, 31, 0x1DA2D4u);
    ctx->pc = 0x1DA2D0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1D8180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8180_0x1d8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2D4u; }
    }
    if (ctx->pc != 0x1DA2D4u) { return; }
    ctx->pc = 0x1DA2D4u;
    // 0x1da2d4: 0x3c020035
    ctx->pc = 0x1da2d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1da2d8: 0x2403ffff
    ctx->pc = 0x1da2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da2dc: 0x24428c70
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1da2e0: 0xae230000
    ctx->pc = 0x1da2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1da2e4: 0x501021
    ctx->pc = 0x1da2e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1da2e8: 0xc076518
    ctx->pc = 0x1DA2E8u;
    SET_GPR_U32(ctx, 31, 0x1DA2F0u);
    ctx->pc = 0x1DA2ECu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2F0u; }
    }
    if (ctx->pc != 0x1DA2F0u) { return; }
    ctx->pc = 0x1DA2F0u;
    // 0x1da2f0: 0x102d
    ctx->pc = 0x1da2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2f4: 0x0
    ctx->pc = 0x1da2f4u;
    // NOP
label_1da2f8:
    // 0x1da2f8: 0xdfbf0020
    ctx->pc = 0x1da2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da2fc: 0x7bb10010
    ctx->pc = 0x1da2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da300: 0x7bb00000
    ctx->pc = 0x1da300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da304: 0x3e00008
    ctx->pc = 0x1DA304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA30Cu;
    // 0x1da30c: 0x0
    ctx->pc = 0x1da30cu;
    // NOP
    // 0x1da310: 0x3e00008
    ctx->pc = 0x1DA310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA314u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA318u;
    // 0x1da318: 0x0
    ctx->pc = 0x1da318u;
    // NOP
    // 0x1da31c: 0x0
    ctx->pc = 0x1da31cu;
    // NOP
    // 0x1da320: 0x3e00008
    ctx->pc = 0x1DA320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA324u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9AA0u: goto label_1d9aa0;
            case 0x1D9AC8u: goto label_1d9ac8;
            case 0x1D9B38u: goto label_1d9b38;
            case 0x1D9B48u: goto label_1d9b48;
            case 0x1D9B50u: goto label_1d9b50;
            case 0x1D9B68u: goto label_1d9b68;
            case 0x1D9BA8u: goto label_1d9ba8;
            case 0x1D9C00u: goto label_1d9c00;
            case 0x1D9C18u: goto label_1d9c18;
            case 0x1D9C40u: goto label_1d9c40;
            case 0x1D9C58u: goto label_1d9c58;
            case 0x1D9CA0u: goto label_1d9ca0;
            case 0x1D9CA8u: goto label_1d9ca8;
            case 0x1D9CD8u: goto label_1d9cd8;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D30u: goto label_1d9d30;
            case 0x1D9D40u: goto label_1d9d40;
            case 0x1D9D88u: goto label_1d9d88;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E28u: goto label_1d9e28;
            case 0x1D9E68u: goto label_1d9e68;
            case 0x1D9EA0u: goto label_1d9ea0;
            case 0x1D9ED8u: goto label_1d9ed8;
            case 0x1D9EF0u: goto label_1d9ef0;
            case 0x1D9F18u: goto label_1d9f18;
            case 0x1D9F40u: goto label_1d9f40;
            case 0x1D9F60u: goto label_1d9f60;
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9F98u: goto label_1d9f98;
            case 0x1D9FA8u: goto label_1d9fa8;
            case 0x1D9FC0u: goto label_1d9fc0;
            case 0x1D9FF8u: goto label_1d9ff8;
            case 0x1DA010u: goto label_1da010;
            case 0x1DA030u: goto label_1da030;
            case 0x1DA040u: goto label_1da040;
            case 0x1DA050u: goto label_1da050;
            case 0x1DA0B8u: goto label_1da0b8;
            case 0x1DA0D0u: goto label_1da0d0;
            case 0x1DA100u: goto label_1da100;
            case 0x1DA128u: goto label_1da128;
            case 0x1DA160u: goto label_1da160;
            case 0x1DA178u: goto label_1da178;
            case 0x1DA1A0u: goto label_1da1a0;
            case 0x1DA1D8u: goto label_1da1d8;
            case 0x1DA1E0u: goto label_1da1e0;
            case 0x1DA228u: goto label_1da228;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA288u: goto label_1da288;
            case 0x1DA2B0u: goto label_1da2b0;
            case 0x1DA2F8u: goto label_1da2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA328u;
    // 0x1da328: 0x0
    ctx->pc = 0x1da328u;
    // NOP
    // 0x1da32c: 0x0
    ctx->pc = 0x1da32cu;
    // NOP
}
