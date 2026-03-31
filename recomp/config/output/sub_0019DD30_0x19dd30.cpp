#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019DD30
// Address: 0x19dd30 - 0x19e130
void sub_0019DD30_0x19dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19dd30u;

    // 0x19dd30: 0x27bdfef0
    ctx->pc = 0x19dd30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x19dd34: 0xffbf0090
    ctx->pc = 0x19dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19dd38: 0x7fbe0080
    ctx->pc = 0x19dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19dd3c: 0x7fb70070
    ctx->pc = 0x19dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19dd40: 0x7fb60060
    ctx->pc = 0x19dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19dd44: 0x7fb50050
    ctx->pc = 0x19dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19dd48: 0x7fb40040
    ctx->pc = 0x19dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19dd4c: 0x80a82d
    ctx->pc = 0x19dd4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd50: 0x7fb30030
    ctx->pc = 0x19dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19dd54: 0xa0a02d
    ctx->pc = 0x19dd54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd58: 0x7fb20020
    ctx->pc = 0x19dd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dd5c: 0x7fb10010
    ctx->pc = 0x19dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dd60: 0x7fb00000
    ctx->pc = 0x19dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19dd64: 0xafa600bc
    ctx->pc = 0x19dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x19dd68: 0x8ca40008
    ctx->pc = 0x19dd68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19dd6c: 0xc063714
    ctx->pc = 0x19DD6Cu;
    SET_GPR_U32(ctx, 31, 0x19DD74u);
    ctx->pc = 0x19DD70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD74u; }
    }
    if (ctx->pc != 0x19DD74u) { return; }
    ctx->pc = 0x19DD74u;
    // 0x19dd74: 0xae820024
    ctx->pc = 0x19dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x19dd78: 0xc063728
    ctx->pc = 0x19DD78u;
    SET_GPR_U32(ctx, 31, 0x19DD80u);
    ctx->pc = 0x19DD7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD80u; }
    }
    if (ctx->pc != 0x19DD80u) { return; }
    ctx->pc = 0x19DD80u;
    // 0x19dd80: 0x8ea30014
    ctx->pc = 0x19dd80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x19dd84: 0x40882d
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd88: 0x27a200d4
    ctx->pc = 0x19dd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x19dd8c: 0x27b600d0
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 208));
    // 0x19dd90: 0x27b700dc
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 220));
    // 0x19dd94: 0xafa000a0
    ctx->pc = 0x19dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x19dd98: 0xac430000
    ctx->pc = 0x19dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19dd9c: 0x8ea20000
    ctx->pc = 0x19dd9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19dda0: 0xafa200c0
    ctx->pc = 0x19dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x19dda4: 0x8693001a
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x19dda8: 0x8692001c
    ctx->pc = 0x19dda8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x19ddac: 0x100000cb
    ctx->pc = 0x19DDACu;
    {
        const bool branch_taken_0x19ddac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DDB0u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 244));
        if (branch_taken_0x19ddac) {
            ctx->pc = 0x19E0DCu;
            goto label_19e0dc;
        }
    }
    ctx->pc = 0x19DDB4u;
    // 0x19ddb4: 0x27a200c4
    ctx->pc = 0x19ddb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 196));
label_19ddb8:
    // 0x19ddb8: 0xac530000
    ctx->pc = 0x19ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x19ddbc: 0x27a200c8
    ctx->pc = 0x19ddbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 200));
    // 0x19ddc0: 0xac520000
    ctx->pc = 0x19ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x19ddc4: 0x27a200c4
    ctx->pc = 0x19ddc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 196));
    // 0x19ddc8: 0x8c430000
    ctx->pc = 0x19ddc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ddcc: 0x27a200d4
    ctx->pc = 0x19ddccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x19ddd0: 0x8c420000
    ctx->pc = 0x19ddd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ddd4: 0x621818
    ctx->pc = 0x19ddd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19ddd8: 0x27a200cc
    ctx->pc = 0x19ddd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 204));
    // 0x19dddc: 0xac430000
    ctx->pc = 0x19dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19dde0: 0x8e830020
    ctx->pc = 0x19dde0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19dde4: 0x10600093
    ctx->pc = 0x19DDE4u;
    {
        const bool branch_taken_0x19dde4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DDE8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19dde4) {
            ctx->pc = 0x19E034u;
            goto label_19e034;
        }
    }
    ctx->pc = 0x19DDECu;
    // 0x19ddec: 0x240a0001
    ctx->pc = 0x19ddecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ddf0: 0x106a006a
    ctx->pc = 0x19DDF0u;
    {
        const bool branch_taken_0x19ddf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 10));
        if (branch_taken_0x19ddf0) {
            ctx->pc = 0x19DF9Cu;
            goto label_19df9c;
        }
    }
    ctx->pc = 0x19DDF8u;
    // 0x19ddf8: 0x24020002
    ctx->pc = 0x19ddf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ddfc: 0x1062003e
    ctx->pc = 0x19DDFCu;
    {
        const bool branch_taken_0x19ddfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19DE00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19ddfc) {
            ctx->pc = 0x19DEF8u;
            goto label_19def8;
        }
    }
    ctx->pc = 0x19DE04u;
    // 0x19de04: 0x24020013
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x19de08: 0x10620022
    ctx->pc = 0x19DE08u;
    {
        const bool branch_taken_0x19de08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19de08) {
            ctx->pc = 0x19DE94u;
            goto label_19de94;
        }
    }
    ctx->pc = 0x19DE10u;
    // 0x19de10: 0x24020014
    ctx->pc = 0x19de10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x19de14: 0x10620006
    ctx->pc = 0x19DE14u;
    {
        const bool branch_taken_0x19de14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19de14) {
            ctx->pc = 0x19DE30u;
            goto label_19de30;
        }
    }
    ctx->pc = 0x19DE1Cu;
    // 0x19de1c: 0x3c040024
    ctx->pc = 0x19de1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x19de20: 0xc0682b4
    ctx->pc = 0x19DE20u;
    SET_GPR_U32(ctx, 31, 0x19DE28u);
    ctx->pc = 0x19DE24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7712));
    ctx->pc = 0x1A0AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AD0_0x1a0ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE28u; }
    }
    if (ctx->pc != 0x19DE28u) { return; }
    ctx->pc = 0x19DE28u;
    // 0x19de28: 0x100000a6
    ctx->pc = 0x19DE28u;
    {
        const bool branch_taken_0x19de28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DE2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x19de28) {
            ctx->pc = 0x19E0C4u;
            goto label_19e0c4;
        }
    }
    ctx->pc = 0x19DE30u;
label_19de30:
    // 0x19de30: 0x82820036
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x19de34: 0x2721818
    ctx->pc = 0x19de34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19de38: 0x14400007
    ctx->pc = 0x19DE38u;
    {
        const bool branch_taken_0x19de38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DE3Cu;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x19de38) {
            ctx->pc = 0x19DE58u;
            goto label_19de58;
        }
    }
    ctx->pc = 0x19DE40u;
    // 0x19de40: 0x8e860008
    ctx->pc = 0x19de40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19de44: 0x8ea50010
    ctx->pc = 0x19de44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19de48: 0xc0636ec
    ctx->pc = 0x19DE48u;
    SET_GPR_U32(ctx, 31, 0x19DE50u);
    ctx->pc = 0x19DE4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE50u; }
    }
    if (ctx->pc != 0x19DE50u) { return; }
    ctx->pc = 0x19DE50u;
    // 0x19de50: 0x1000009b
    ctx->pc = 0x19DE50u;
    {
        const bool branch_taken_0x19de50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19de50) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19DE58u;
label_19de58:
    // 0x19de58: 0xc068358
    ctx->pc = 0x19DE58u;
    SET_GPR_U32(ctx, 31, 0x19DE60u);
    ctx->pc = 0x19DE5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D60_0x1a0d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE60u; }
    }
    if (ctx->pc != 0x19DE60u) { return; }
    ctx->pc = 0x19DE60u;
    // 0x19de60: 0xaec20000
    ctx->pc = 0x19de60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x19de64: 0x8ec40000
    ctx->pc = 0x19de64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x19de68: 0x8ea50010
    ctx->pc = 0x19de68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19de6c: 0xc0636ec
    ctx->pc = 0x19DE6Cu;
    SET_GPR_U32(ctx, 31, 0x19DE74u);
    ctx->pc = 0x19DE70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE74u; }
    }
    if (ctx->pc != 0x19DE74u) { return; }
    ctx->pc = 0x19DE74u;
    // 0x19de74: 0x8ec60000
    ctx->pc = 0x19de74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x19de78: 0x260202d
    ctx->pc = 0x19de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de7c: 0x240282d
    ctx->pc = 0x19de7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de80: 0x220382d
    ctx->pc = 0x19de80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de84: 0xc067910
    ctx->pc = 0x19DE84u;
    SET_GPR_U32(ctx, 31, 0x19DE8Cu);
    ctx->pc = 0x19DE88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E440_0x19e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE8Cu; }
    }
    if (ctx->pc != 0x19DE8Cu) { return; }
    ctx->pc = 0x19DE8Cu;
    // 0x19de8c: 0x1000008c
    ctx->pc = 0x19DE8Cu;
    {
        const bool branch_taken_0x19de8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19de8c) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19DE94u;
label_19de94:
    // 0x19de94: 0x82820036
    ctx->pc = 0x19de94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x19de98: 0x14400007
    ctx->pc = 0x19DE98u;
    {
        const bool branch_taken_0x19de98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DE9Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
        if (branch_taken_0x19de98) {
            ctx->pc = 0x19DEB8u;
            goto label_19deb8;
        }
    }
    ctx->pc = 0x19DEA0u;
    // 0x19dea0: 0x8e860008
    ctx->pc = 0x19dea0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19dea4: 0x8ea50010
    ctx->pc = 0x19dea4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19dea8: 0xc0636ec
    ctx->pc = 0x19DEA8u;
    SET_GPR_U32(ctx, 31, 0x19DEB0u);
    ctx->pc = 0x19DEACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEB0u; }
    }
    if (ctx->pc != 0x19DEB0u) { return; }
    ctx->pc = 0x19DEB0u;
    // 0x19deb0: 0x10000083
    ctx->pc = 0x19DEB0u;
    {
        const bool branch_taken_0x19deb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19deb0) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19DEB8u;
label_19deb8:
    // 0x19deb8: 0xc068358
    ctx->pc = 0x19DEB8u;
    SET_GPR_U32(ctx, 31, 0x19DEC0u);
    ctx->pc = 0x19DEBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D60_0x1a0d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEC0u; }
    }
    if (ctx->pc != 0x19DEC0u) { return; }
    ctx->pc = 0x19DEC0u;
    // 0x19dec0: 0xaec20000
    ctx->pc = 0x19dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x19dec4: 0x8ec40000
    ctx->pc = 0x19dec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x19dec8: 0x8ea50010
    ctx->pc = 0x19dec8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19decc: 0xc0636ec
    ctx->pc = 0x19DECCu;
    SET_GPR_U32(ctx, 31, 0x19DED4u);
    ctx->pc = 0x19DED0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DED4u; }
    }
    if (ctx->pc != 0x19DED4u) { return; }
    ctx->pc = 0x19DED4u;
    // 0x19ded4: 0x8ec60000
    ctx->pc = 0x19ded4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x19ded8: 0x260202d
    ctx->pc = 0x19ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dedc: 0x240282d
    ctx->pc = 0x19dedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dee0: 0x220382d
    ctx->pc = 0x19dee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dee4: 0xc067910
    ctx->pc = 0x19DEE4u;
    SET_GPR_U32(ctx, 31, 0x19DEECu);
    ctx->pc = 0x19DEE8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19E440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E440_0x19e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEECu; }
    }
    if (ctx->pc != 0x19DEECu) { return; }
    ctx->pc = 0x19DEECu;
    // 0x19deec: 0x10000074
    ctx->pc = 0x19DEECu;
    {
        const bool branch_taken_0x19deec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19deec) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19DEF4u;
    // 0x19def4: 0x2722018
    ctx->pc = 0x19def4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_19def8:
    // 0x19def8: 0xaed10000
    ctx->pc = 0x19def8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x19defc: 0x24090005
    ctx->pc = 0x19defcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19df00: 0x27a200d8
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 216));
    // 0x19df04: 0xac490000
    ctx->pc = 0x19df04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x19df08: 0x2408000a
    ctx->pc = 0x19df08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19df0c: 0x2403001f
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x19df10: 0xaee80000
    ctx->pc = 0x19df10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x19df14: 0x48040
    ctx->pc = 0x19df14u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 1));
    // 0x19df18: 0x27a500e8
    ctx->pc = 0x19df18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 232));
    // 0x19df1c: 0x27a400e0
    ctx->pc = 0x19df1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x19df20: 0x27a600ec
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 236));
    // 0x19df24: 0xac830000
    ctx->pc = 0x19df24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19df28: 0x27a700f0
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 240));
    // 0x19df2c: 0x27a400e4
    ctx->pc = 0x19df2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 228));
    // 0x19df30: 0x27ab00f8
    ctx->pc = 0x19df30u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 248));
    // 0x19df34: 0xac890000
    ctx->pc = 0x19df34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x19df38: 0x2402000f
    ctx->pc = 0x19df38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19df3c: 0xaca90000
    ctx->pc = 0x19df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x19df40: 0x2a0202d
    ctx->pc = 0x19df40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df44: 0xacc30000
    ctx->pc = 0x19df44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x19df48: 0x27a500c0
    ctx->pc = 0x19df48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    // 0x19df4c: 0xace90000
    ctx->pc = 0x19df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x19df50: 0x302d
    ctx->pc = 0x19df50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df54: 0x8fa700bc
    ctx->pc = 0x19df54u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x19df58: 0xafc00000
    ctx->pc = 0x19df58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x19df5c: 0xad630000
    ctx->pc = 0x19df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x19df60: 0x27ab00fc
    ctx->pc = 0x19df60u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 252));
    // 0x19df64: 0xad6a0000
    ctx->pc = 0x19df64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x19df68: 0x27ab0100
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 256));
    // 0x19df6c: 0xad620000
    ctx->pc = 0x19df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x19df70: 0x27a20104
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 260));
    // 0x19df74: 0xac4a0000
    ctx->pc = 0x19df74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x19df78: 0xaee00000
    ctx->pc = 0x19df78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19df7c: 0x27a200e4
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 228));
    // 0x19df80: 0xafc80000
    ctx->pc = 0x19df80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x19df84: 0xac490000
    ctx->pc = 0x19df84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x19df88: 0x27a200ec
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 236));
    // 0x19df8c: 0xc06784c
    ctx->pc = 0x19DF8Cu;
    SET_GPR_U32(ctx, 31, 0x19DF94u);
    ctx->pc = 0x19DF90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19E130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E130_0x19e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF94u; }
    }
    if (ctx->pc != 0x19DF94u) { return; }
    ctx->pc = 0x19DF94u;
    // 0x19df94: 0x1000004a
    ctx->pc = 0x19DF94u;
    {
        const bool branch_taken_0x19df94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19df94) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19DF9Cu;
label_19df9c:
    // 0x19df9c: 0xaed10000
    ctx->pc = 0x19df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x19dfa0: 0x24090008
    ctx->pc = 0x19dfa0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19dfa4: 0x27a300d8
    ctx->pc = 0x19dfa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 216));
    // 0x19dfa8: 0x24020010
    ctx->pc = 0x19dfa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19dfac: 0xac690000
    ctx->pc = 0x19dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x19dfb0: 0x240800ff
    ctx->pc = 0x19dfb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
    // 0x19dfb4: 0xaee20000
    ctx->pc = 0x19dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x19dfb8: 0x27a300e0
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 224));
    // 0x19dfbc: 0xac680000
    ctx->pc = 0x19dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x19dfc0: 0x2722818
    ctx->pc = 0x19dfc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x19dfc4: 0x27a300e4
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 228));
    // 0x19dfc8: 0x2a0202d
    ctx->pc = 0x19dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfcc: 0xac690000
    ctx->pc = 0x19dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x19dfd0: 0x302d
    ctx->pc = 0x19dfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfd4: 0x27a300e8
    ctx->pc = 0x19dfd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 232));
    // 0x19dfd8: 0xac690000
    ctx->pc = 0x19dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x19dfdc: 0x58080
    ctx->pc = 0x19dfdcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 2));
    // 0x19dfe0: 0x27a300ec
    ctx->pc = 0x19dfe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 236));
    // 0x19dfe4: 0x27a500c0
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    // 0x19dfe8: 0xac680000
    ctx->pc = 0x19dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x19dfec: 0x8fa700bc
    ctx->pc = 0x19dfecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x19dff0: 0x27a300f0
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 240));
    // 0x19dff4: 0xac690000
    ctx->pc = 0x19dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x19dff8: 0xafc00000
    ctx->pc = 0x19dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x19dffc: 0x27a300f8
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 248));
    // 0x19e000: 0xac680000
    ctx->pc = 0x19e000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x19e004: 0x27a300fc
    ctx->pc = 0x19e004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 252));
    // 0x19e008: 0xac600000
    ctx->pc = 0x19e008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19e00c: 0x27a30100
    ctx->pc = 0x19e00cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 256));
    // 0x19e010: 0xac600000
    ctx->pc = 0x19e010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19e014: 0x27a30104
    ctx->pc = 0x19e014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 260));
    // 0x19e018: 0xac600000
    ctx->pc = 0x19e018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19e01c: 0xaee00000
    ctx->pc = 0x19e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19e020: 0xc06784c
    ctx->pc = 0x19E020u;
    SET_GPR_U32(ctx, 31, 0x19E028u);
    ctx->pc = 0x19E024u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19E130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E130_0x19e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E028u; }
    }
    if (ctx->pc != 0x19E028u) { return; }
    ctx->pc = 0x19E028u;
    // 0x19e028: 0x10000025
    ctx->pc = 0x19E028u;
    {
        const bool branch_taken_0x19e028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e028) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19E030u;
    // 0x19e030: 0x2722018
    ctx->pc = 0x19e030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_19e034:
    // 0x19e034: 0xaed10000
    ctx->pc = 0x19e034u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x19e038: 0x24090008
    ctx->pc = 0x19e038u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19e03c: 0x27a200d8
    ctx->pc = 0x19e03cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 216));
    // 0x19e040: 0xac490000
    ctx->pc = 0x19e040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x19e044: 0x24080010
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19e048: 0x240300ff
    ctx->pc = 0x19e048u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x19e04c: 0xaee80000
    ctx->pc = 0x19e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x19e050: 0x48080
    ctx->pc = 0x19e050u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 2));
    // 0x19e054: 0x27a500e8
    ctx->pc = 0x19e054u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 232));
    // 0x19e058: 0x27a400e0
    ctx->pc = 0x19e058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x19e05c: 0x27a600ec
    ctx->pc = 0x19e05cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 236));
    // 0x19e060: 0xac830000
    ctx->pc = 0x19e060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19e064: 0x27a700f0
    ctx->pc = 0x19e064u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 240));
    // 0x19e068: 0x27a400e4
    ctx->pc = 0x19e068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 228));
    // 0x19e06c: 0x27aa00f8
    ctx->pc = 0x19e06cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 248));
    // 0x19e070: 0xac890000
    ctx->pc = 0x19e070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x19e074: 0x24020018
    ctx->pc = 0x19e074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x19e078: 0xaca90000
    ctx->pc = 0x19e078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x19e07c: 0x2a0202d
    ctx->pc = 0x19e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e080: 0xacc30000
    ctx->pc = 0x19e080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x19e084: 0x27a500c0
    ctx->pc = 0x19e084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    // 0x19e088: 0xace90000
    ctx->pc = 0x19e088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x19e08c: 0x302d
    ctx->pc = 0x19e08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e090: 0x8fa700bc
    ctx->pc = 0x19e090u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x19e094: 0xafc00000
    ctx->pc = 0x19e094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x19e098: 0xad430000
    ctx->pc = 0x19e098u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x19e09c: 0x27aa00fc
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 252));
    // 0x19e0a0: 0xad490000
    ctx->pc = 0x19e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x19e0a4: 0x27a90100
    ctx->pc = 0x19e0a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 256));
    // 0x19e0a8: 0xad220000
    ctx->pc = 0x19e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19e0ac: 0x27a20104
    ctx->pc = 0x19e0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 260));
    // 0x19e0b0: 0xac430000
    ctx->pc = 0x19e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19e0b4: 0xaee00000
    ctx->pc = 0x19e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x19e0b8: 0xc06784c
    ctx->pc = 0x19E0B8u;
    SET_GPR_U32(ctx, 31, 0x19E0C0u);
    ctx->pc = 0x19E0BCu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x19E130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E130_0x19e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0C0u; }
    }
    if (ctx->pc != 0x19E0C0u) { return; }
    ctx->pc = 0x19E0C0u;
label_19e0c0:
    // 0x19e0c0: 0x8fa200a0
    ctx->pc = 0x19e0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_19e0c4:
    // 0x19e0c4: 0x2308821
    ctx->pc = 0x19e0c4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x19e0c8: 0x139843
    ctx->pc = 0x19e0c8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x19e0cc: 0x129043
    ctx->pc = 0x19e0ccu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x19e0d0: 0x26b50048
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 72));
    // 0x19e0d4: 0x24420001
    ctx->pc = 0x19e0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19e0d8: 0xafa200a0
    ctx->pc = 0x19e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_19e0dc:
    // 0x19e0dc: 0x8e830030
    ctx->pc = 0x19e0dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x19e0e0: 0x8fa200a0
    ctx->pc = 0x19e0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e0e4: 0x43102b
    ctx->pc = 0x19e0e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e0e8: 0x1440ff33
    ctx->pc = 0x19E0E8u;
    {
        const bool branch_taken_0x19e0e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E0ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 196));
        if (branch_taken_0x19e0e8) {
            ctx->pc = 0x19DDB8u;
            goto label_19ddb8;
        }
    }
    ctx->pc = 0x19E0F0u;
    // 0x19e0f0: 0xdfbf0090
    ctx->pc = 0x19e0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e0f4: 0x24020001
    ctx->pc = 0x19e0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0f8: 0x7bbe0080
    ctx->pc = 0x19e0f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e0fc: 0x7bb70070
    ctx->pc = 0x19e0fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e100: 0x7bb60060
    ctx->pc = 0x19e100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e104: 0x7bb50050
    ctx->pc = 0x19e104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e108: 0x7bb40040
    ctx->pc = 0x19e108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e10c: 0x7bb30030
    ctx->pc = 0x19e10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e110: 0x7bb20020
    ctx->pc = 0x19e110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e114: 0x7bb10010
    ctx->pc = 0x19e114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e118: 0x7bb00000
    ctx->pc = 0x19e118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e11c: 0x3e00008
    ctx->pc = 0x19E11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DDB8u: goto label_19ddb8;
            case 0x19DE30u: goto label_19de30;
            case 0x19DE58u: goto label_19de58;
            case 0x19DE94u: goto label_19de94;
            case 0x19DEB8u: goto label_19deb8;
            case 0x19DEF8u: goto label_19def8;
            case 0x19DF9Cu: goto label_19df9c;
            case 0x19E034u: goto label_19e034;
            case 0x19E0C0u: goto label_19e0c0;
            case 0x19E0C4u: goto label_19e0c4;
            case 0x19E0DCu: goto label_19e0dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E124u;
    // 0x19e124: 0x0
    ctx->pc = 0x19e124u;
    // NOP
    // 0x19e128: 0x0
    ctx->pc = 0x19e128u;
    // NOP
    // 0x19e12c: 0x0
    ctx->pc = 0x19e12cu;
    // NOP
}
