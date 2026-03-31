#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E930
// Address: 0x16e930 - 0x16e9b8
void sub_0016E930_0x16e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e930u;

    // 0x16e930: 0x27bdffe0
    ctx->pc = 0x16e930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e934: 0x24030003
    ctx->pc = 0x16e934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16e938: 0xffb00000
    ctx->pc = 0x16e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e93c: 0x80802d
    ctx->pc = 0x16e93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e940: 0xffb10008
    ctx->pc = 0x16e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16e944: 0xc0882d
    ctx->pc = 0x16e944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e948: 0xffbf0010
    ctx->pc = 0x16e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e94c: 0x14a30015
    ctx->pc = 0x16E94Cu;
    {
        const bool branch_taken_0x16e94c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x16E950u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e94c) {
            ctx->pc = 0x16E9A4u;
            goto label_16e9a4;
        }
    }
    ctx->pc = 0x16E954u;
    // 0x16e954: 0xc05d58a
    ctx->pc = 0x16E954u;
    SET_GPR_U32(ctx, 31, 0x16E95Cu);
    ctx->pc = 0x16E958u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E95Cu; }
    }
    if (ctx->pc != 0x16E95Cu) { return; }
    ctx->pc = 0x16E95Cu;
    // 0x16e95c: 0x10400004
    ctx->pc = 0x16E95Cu;
    {
        const bool branch_taken_0x16e95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E960u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2316));
        if (branch_taken_0x16e95c) {
            ctx->pc = 0x16E970u;
            goto label_16e970;
        }
    }
    ctx->pc = 0x16E964u;
    // 0x16e964: 0x1000000f
    ctx->pc = 0x16E964u;
    {
        const bool branch_taken_0x16e964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E968u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e964) {
            ctx->pc = 0x16E9A4u;
            goto label_16e9a4;
        }
    }
    ctx->pc = 0x16E96Cu;
    // 0x16e96c: 0x0
    ctx->pc = 0x16e96cu;
    // NOP
label_16e970:
    // 0x16e970: 0x8c660008
    ctx->pc = 0x16e970u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16e974: 0x2610094c
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2380));
    // 0x16e978: 0x8c62000c
    ctx->pc = 0x16e978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16e97c: 0x8e250004
    ctx->pc = 0x16e97cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16e980: 0xc20018
    ctx->pc = 0x16e980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x16e984: 0x3012
    ctx->pc = 0x16e984u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x16e988: 0xc05625a
    ctx->pc = 0x16E988u;
    SET_GPR_U32(ctx, 31, 0x16E990u);
    ctx->pc = 0x16E98Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x158968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158968_0x158968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E990u; }
    }
    if (ctx->pc != 0x16E990u) { return; }
    ctx->pc = 0x16E990u;
    // 0x16e990: 0x50400005
    ctx->pc = 0x16E990u;
    {
        const bool branch_taken_0x16e990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e990) {
            ctx->pc = 0x16E994u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16E9A8u;
            goto label_16e9a8;
        }
    }
    ctx->pc = 0x16E998u;
    // 0x16e998: 0x8e030010
    ctx->pc = 0x16e998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16e99c: 0x24630001
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x16e9a0: 0xae030010
    ctx->pc = 0x16e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_16e9a4:
    // 0x16e9a4: 0xdfb00000
    ctx->pc = 0x16e9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e9a8:
    // 0x16e9a8: 0xdfb10008
    ctx->pc = 0x16e9a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e9ac: 0xdfbf0010
    ctx->pc = 0x16e9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e9b0: 0x3e00008
    ctx->pc = 0x16E9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E970u: goto label_16e970;
            case 0x16E9A4u: goto label_16e9a4;
            case 0x16E9A8u: goto label_16e9a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E9B8u;
}
