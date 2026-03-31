#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C58C0
// Address: 0x1c58c0 - 0x1c5970
void sub_001C58C0_0x1c58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c58c0u;

    // 0x1c58c0: 0x27bdffb0
    ctx->pc = 0x1c58c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c58c4: 0xffbf0040
    ctx->pc = 0x1c58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c58c8: 0x7fb30030
    ctx->pc = 0x1c58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c58cc: 0x7fb20020
    ctx->pc = 0x1c58ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c58d0: 0x80982d
    ctx->pc = 0x1c58d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58d4: 0x7fb10010
    ctx->pc = 0x1c58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c58d8: 0xa0902d
    ctx->pc = 0x1c58d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58dc: 0x7fb00000
    ctx->pc = 0x1c58dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c58e0: 0xc0882d
    ctx->pc = 0x1c58e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c58e4:
    // 0x1c58e4: 0x220202d
    ctx->pc = 0x1c58e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58e8: 0xc04a432
    ctx->pc = 0x1C58E8u;
    SET_GPR_U32(ctx, 31, 0x1C58F0u);
    ctx->pc = 0x1C58ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1290C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001290C8_0x1290c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C58F0u; }
    }
    if (ctx->pc != 0x1C58F0u) { return; }
    ctx->pc = 0x1C58F0u;
    // 0x1c58f0: 0x40802d
    ctx->pc = 0x1c58f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58f4: 0x0
    ctx->pc = 0x1c58f4u;
    // NOP
    // 0x1c58f8: 0x1040fffa
    ctx->pc = 0x1C58F8u;
    {
        const bool branch_taken_0x1c58f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c58f8) {
            ctx->pc = 0x1C58E4u;
            goto label_1c58e4;
        }
    }
    ctx->pc = 0x1C5900u;
    // 0x1c5900: 0xc04a702
    ctx->pc = 0x1C5900u;
    SET_GPR_U32(ctx, 31, 0x1C5908u);
    ctx->pc = 0x1C5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5908u; }
    }
    if (ctx->pc != 0x1C5908u) { return; }
    ctx->pc = 0x1C5908u;
    // 0x1c5908: 0x40282d
    ctx->pc = 0x1c5908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c590c: 0x200202d
    ctx->pc = 0x1c590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5910: 0xc04a5e8
    ctx->pc = 0x1C5910u;
    SET_GPR_U32(ctx, 31, 0x1C5918u);
    ctx->pc = 0x1C5914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5918u; }
    }
    if (ctx->pc != 0x1C5918u) { return; }
    ctx->pc = 0x1C5918u;
label_1c5918:
    // 0x1c5918: 0xc04a752
    ctx->pc = 0x1C5918u;
    SET_GPR_U32(ctx, 31, 0x1C5920u);
    ctx->pc = 0x1C591Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5920u; }
    }
    if (ctx->pc != 0x1C5920u) { return; }
    ctx->pc = 0x1C5920u;
    // 0x1c5920: 0x24030003
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5924: 0x0
    ctx->pc = 0x1c5924u;
    // NOP
    // 0x1c5928: 0x0
    ctx->pc = 0x1c5928u;
    // NOP
    // 0x1c592c: 0x1443fffa
    ctx->pc = 0x1C592Cu;
    {
        const bool branch_taken_0x1c592c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c592c) {
            ctx->pc = 0x1C5918u;
            goto label_1c5918;
        }
    }
    ctx->pc = 0x1C5934u;
    // 0x1c5934: 0xc04a4d4
    ctx->pc = 0x1C5934u;
    SET_GPR_U32(ctx, 31, 0x1C593Cu);
    ctx->pc = 0x1C5938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C593Cu; }
    }
    if (ctx->pc != 0x1C593Cu) { return; }
    ctx->pc = 0x1C593Cu;
    // 0x1c593c: 0x24020001
    ctx->pc = 0x1c593cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5940: 0x240202d
    ctx->pc = 0x1c5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5944: 0xc0704b0
    ctx->pc = 0x1C5944u;
    SET_GPR_U32(ctx, 31, 0x1C594Cu);
    ctx->pc = 0x1C5948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x1C12C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C12C0_0x1c12c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C594Cu; }
    }
    if (ctx->pc != 0x1C594Cu) { return; }
    ctx->pc = 0x1C594Cu;
    // 0x1c594c: 0xae620028
    ctx->pc = 0x1c594cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1c5950: 0xdfbf0040
    ctx->pc = 0x1c5950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5954: 0x7bb30030
    ctx->pc = 0x1c5954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5958: 0x7bb20020
    ctx->pc = 0x1c5958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c595c: 0x7bb10010
    ctx->pc = 0x1c595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5960: 0x7bb00000
    ctx->pc = 0x1c5960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5964: 0x3e00008
    ctx->pc = 0x1C5964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C58E4u: goto label_1c58e4;
            case 0x1C5918u: goto label_1c5918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C596Cu;
    // 0x1c596c: 0x0
    ctx->pc = 0x1c596cu;
    // NOP
}
