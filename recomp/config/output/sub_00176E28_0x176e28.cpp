#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176E28
// Address: 0x176e28 - 0x176f30
void sub_00176E28_0x176e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176e28u;

    // 0x176e28: 0x27bdffe0
    ctx->pc = 0x176e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176e2c: 0x2402ffff
    ctx->pc = 0x176e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176e30: 0xffb10008
    ctx->pc = 0x176e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176e34: 0xa0882d
    ctx->pc = 0x176e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e38: 0xffb00000
    ctx->pc = 0x176e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176e3c: 0x80802d
    ctx->pc = 0x176e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e40: 0xffbf0010
    ctx->pc = 0x176e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176e44: 0xc05a78c
    ctx->pc = 0x176E44u;
    SET_GPR_U32(ctx, 31, 0x176E4Cu);
    ctx->pc = 0x176E48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E4Cu; }
    }
    if (ctx->pc != 0x176E4Cu) { return; }
    ctx->pc = 0x176E4Cu;
    // 0x176e4c: 0x3c05ff00
    ctx->pc = 0x176e4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x176e50: 0x10400007
    ctx->pc = 0x176E50u;
    {
        const bool branch_taken_0x176e50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176E54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176e50) {
            ctx->pc = 0x176E70u;
            goto label_176e70;
        }
    }
    ctx->pc = 0x176E58u;
    // 0x176e58: 0xdfb00000
    ctx->pc = 0x176e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e5c: 0x34a5011b
    ctx->pc = 0x176e5cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 283));
    // 0x176e60: 0xdfb10008
    ctx->pc = 0x176e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176e64: 0xdfbf0010
    ctx->pc = 0x176e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176e68: 0x805a704
    ctx->pc = 0x176E68u;
    ctx->pc = 0x176E6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176E70u;
label_176e70:
    // 0x176e70: 0x8e030920
    ctx->pc = 0x176e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x176e74: 0x10600005
    ctx->pc = 0x176E74u;
    {
        const bool branch_taken_0x176e74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x176E78u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x176e74) {
            ctx->pc = 0x176E8Cu;
            goto label_176e8c;
        }
    }
    ctx->pc = 0x176E7Cu;
    // 0x176e7c: 0x3c040024
    ctx->pc = 0x176e7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176e80: 0x832021
    ctx->pc = 0x176e80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x176e84: 0x8c840af0
    ctx->pc = 0x176e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2800)));
    // 0x176e88: 0xae240000
    ctx->pc = 0x176e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_176e8c:
    // 0x176e8c: 0xdfb00000
    ctx->pc = 0x176e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e90: 0xdfb10008
    ctx->pc = 0x176e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176e94: 0xdfbf0010
    ctx->pc = 0x176e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176e98: 0x3e00008
    ctx->pc = 0x176E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E70u: goto label_176e70;
            case 0x176E8Cu: goto label_176e8c;
            case 0x176EE8u: goto label_176ee8;
            case 0x176F18u: goto label_176f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176EA0u;
    // 0x176ea0: 0x27bdffe0
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176ea4: 0x2402ffff
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176ea8: 0xffb10008
    ctx->pc = 0x176ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176eac: 0xa0882d
    ctx->pc = 0x176eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176eb0: 0xffb00000
    ctx->pc = 0x176eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176eb4: 0x80802d
    ctx->pc = 0x176eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176eb8: 0xffbf0010
    ctx->pc = 0x176eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176ebc: 0xc05a78c
    ctx->pc = 0x176EBCu;
    SET_GPR_U32(ctx, 31, 0x176EC4u);
    ctx->pc = 0x176EC0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EC4u; }
    }
    if (ctx->pc != 0x176EC4u) { return; }
    ctx->pc = 0x176EC4u;
    // 0x176ec4: 0x3c05ff00
    ctx->pc = 0x176ec4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x176ec8: 0x10400007
    ctx->pc = 0x176EC8u;
    {
        const bool branch_taken_0x176ec8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176ECCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176ec8) {
            ctx->pc = 0x176EE8u;
            goto label_176ee8;
        }
    }
    ctx->pc = 0x176ED0u;
    // 0x176ed0: 0xdfb00000
    ctx->pc = 0x176ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ed4: 0x34a50118
    ctx->pc = 0x176ed4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 280));
    // 0x176ed8: 0xdfb10008
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176edc: 0xdfbf0010
    ctx->pc = 0x176edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ee0: 0x805a704
    ctx->pc = 0x176EE0u;
    ctx->pc = 0x176EE4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176EE8u;
label_176ee8:
    // 0x176ee8: 0x8e030920
    ctx->pc = 0x176ee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x176eec: 0x1060000a
    ctx->pc = 0x176EECu;
    {
        const bool branch_taken_0x176eec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x176EF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3264));
        if (branch_taken_0x176eec) {
            ctx->pc = 0x176F18u;
            goto label_176f18;
        }
    }
    ctx->pc = 0x176EF4u;
    // 0x176ef4: 0x31080
    ctx->pc = 0x176ef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x176ef8: 0x8c850268
    ctx->pc = 0x176ef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x176efc: 0x3c040024
    ctx->pc = 0x176efcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176f00: 0x822021
    ctx->pc = 0x176f00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x176f04: 0x8c840af0
    ctx->pc = 0x176f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2800)));
    // 0x176f08: 0xc056ea0
    ctx->pc = 0x176F08u;
    SET_GPR_U32(ctx, 31, 0x176F10u);
    ctx->pc = 0x176F0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F10u; }
    }
    if (ctx->pc != 0x176F10u) { return; }
    ctx->pc = 0x176F10u;
    // 0x176f10: 0xae220000
    ctx->pc = 0x176f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x176f14: 0x102d
    ctx->pc = 0x176f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176f18:
    // 0x176f18: 0xdfb00000
    ctx->pc = 0x176f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f1c: 0xdfb10008
    ctx->pc = 0x176f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176f20: 0xdfbf0010
    ctx->pc = 0x176f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f24: 0x3e00008
    ctx->pc = 0x176F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E70u: goto label_176e70;
            case 0x176E8Cu: goto label_176e8c;
            case 0x176EE8u: goto label_176ee8;
            case 0x176F18u: goto label_176f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176F2Cu;
    // 0x176f2c: 0x0
    ctx->pc = 0x176f2cu;
    // NOP
}
