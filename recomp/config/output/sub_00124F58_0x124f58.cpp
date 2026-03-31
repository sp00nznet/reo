#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124F58
// Address: 0x124f58 - 0x1250a0
void sub_00124F58_0x124f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f58u;

    // 0x124f58: 0x52840
    ctx->pc = 0x124f58u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x124f5c: 0xa42821
    ctx->pc = 0x124f5cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x124f60: 0x3e00008
    ctx->pc = 0x124F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F64u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 222)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F68u;
    // 0x124f68: 0x3e00008
    ctx->pc = 0x124F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 204));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F70u;
    // 0x124f70: 0x27bdfff0
    ctx->pc = 0x124f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124f74: 0xffb00000
    ctx->pc = 0x124f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124f78: 0x80802d
    ctx->pc = 0x124f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f7c: 0xffbf0008
    ctx->pc = 0x124f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x124f80: 0x260500a8
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 168));
    // 0x124f84: 0x260600ac
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 172));
    // 0x124f88: 0xc04d3c0
    ctx->pc = 0x124F88u;
    SET_GPR_U32(ctx, 31, 0x124F90u);
    ctx->pc = 0x124F8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F00_0x134f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F90u; }
    }
    if (ctx->pc != 0x124F90u) { return; }
    ctx->pc = 0x124F90u;
    // 0x124f90: 0x8e040008
    ctx->pc = 0x124f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f94: 0x260700a6
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 166));
    // 0x124f98: 0x260500a2
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 162));
    // 0x124f9c: 0x260600a4
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 164));
    // 0x124fa0: 0xdfb00000
    ctx->pc = 0x124fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124fa4: 0xdfbf0008
    ctx->pc = 0x124fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124fa8: 0x804d3ce
    ctx->pc = 0x124FA8u;
    ctx->pc = 0x124FACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x134F38u;
    entry_134f38_0x134f58(rdram, ctx, runtime); return;
    ctx->pc = 0x124FB0u;
    // 0x124fb0: 0x27bdfff0
    ctx->pc = 0x124fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124fb4: 0xffb00000
    ctx->pc = 0x124fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124fb8: 0x80802d
    ctx->pc = 0x124fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fbc: 0xffbf0008
    ctx->pc = 0x124fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x124fc0: 0x260500a8
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 168));
    // 0x124fc4: 0x260600ac
    ctx->pc = 0x124fc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 172));
    // 0x124fc8: 0xc04d3b6
    ctx->pc = 0x124FC8u;
    SET_GPR_U32(ctx, 31, 0x124FD0u);
    ctx->pc = 0x124FCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134ED8_0x134ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FD0u; }
    }
    if (ctx->pc != 0x124FD0u) { return; }
    ctx->pc = 0x124FD0u;
    // 0x124fd0: 0x8e040008
    ctx->pc = 0x124fd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124fd4: 0x860700a6
    ctx->pc = 0x124fd4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x124fd8: 0x860500a2
    ctx->pc = 0x124fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x124fdc: 0x860600a4
    ctx->pc = 0x124fdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x124fe0: 0xdfbf0008
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124fe4: 0xdfb00000
    ctx->pc = 0x124fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124fe8: 0x804d3ca
    ctx->pc = 0x124FE8u;
    ctx->pc = 0x124FECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x134F28u;
    sub_00134F28_0x134f28(rdram, ctx, runtime); return;
    ctx->pc = 0x124FF0u;
    // 0x124ff0: 0x27bdffd0
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124ff4: 0xffb00010
    ctx->pc = 0x124ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124ff8: 0xa0802d
    ctx->pc = 0x124ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ffc: 0xffb10018
    ctx->pc = 0x124ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x125000: 0x80882d
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125004: 0xffbf0020
    ctx->pc = 0x125004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125008: 0xc042c56
    ctx->pc = 0x125008u;
    SET_GPR_U32(ctx, 31, 0x125010u);
    ctx->pc = 0x12500Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125010u; }
    }
    if (ctx->pc != 0x125010u) { return; }
    ctx->pc = 0x125010u;
    // 0x125010: 0x200202d
    ctx->pc = 0x125010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125014: 0x40282d
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125018: 0x3a0302d
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12501c: 0x27a70002
    ctx->pc = 0x12501cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 2));
    // 0x125020: 0xc049156
    ctx->pc = 0x125020u;
    SET_GPR_U32(ctx, 31, 0x125028u);
    ctx->pc = 0x125024u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x124558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124558_0x124558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125028u; }
    }
    if (ctx->pc != 0x125028u) { return; }
    ctx->pc = 0x125028u;
    // 0x125028: 0x97a30000
    ctx->pc = 0x125028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12502c: 0x97a40002
    ctx->pc = 0x12502cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x125030: 0x97a20004
    ctx->pc = 0x125030u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125034: 0xdfb00010
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125038: 0xa623009c
    ctx->pc = 0x125038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x12503c: 0xa62200a0
    ctx->pc = 0x12503cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x125040: 0xa624009e
    ctx->pc = 0x125040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 4));
    // 0x125044: 0xdfbf0020
    ctx->pc = 0x125044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125048: 0xdfb10018
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12504c: 0x3e00008
    ctx->pc = 0x12504Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125054u;
    // 0x125054: 0x0
    ctx->pc = 0x125054u;
    // NOP
    // 0x125058: 0x27bdfff0
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12505c: 0xffb00000
    ctx->pc = 0x12505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125060: 0xffbf0008
    ctx->pc = 0x125060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125064: 0xc042c56
    ctx->pc = 0x125064u;
    SET_GPR_U32(ctx, 31, 0x12506Cu);
    ctx->pc = 0x125068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12506Cu; }
    }
    if (ctx->pc != 0x12506Cu) { return; }
    ctx->pc = 0x12506Cu;
    // 0x12506c: 0xdfbf0008
    ctx->pc = 0x12506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125070: 0x200202d
    ctx->pc = 0x125070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125074: 0x3c060021
    ctx->pc = 0x125074u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x125078: 0x3c070021
    ctx->pc = 0x125078u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x12507c: 0x3c080021
    ctx->pc = 0x12507cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x125080: 0xdfb00000
    ctx->pc = 0x125080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125084: 0x40282d
    ctx->pc = 0x125084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125088: 0x24c6b94c
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294949196));
    // 0x12508c: 0x24e7b94e
    ctx->pc = 0x12508cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294949198));
    // 0x125090: 0x2508b950
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294949200));
    // 0x125094: 0x8049156
    ctx->pc = 0x125094u;
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124558u;
    sub_00124558_0x124558(rdram, ctx, runtime); return;
    ctx->pc = 0x12509Cu;
    // 0x12509c: 0x0
    ctx->pc = 0x12509cu;
    // NOP
}
