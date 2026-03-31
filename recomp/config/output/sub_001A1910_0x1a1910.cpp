#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1910
// Address: 0x1a1910 - 0x1a1970
void sub_001A1910_0x1a1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1910u;

    // 0x1a1910: 0x84890000
    ctx->pc = 0x1a1910u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1914: 0x3c02002b
    ctx->pc = 0x1a1914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a1918: 0x84880002
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a191c: 0x558c0
    ctx->pc = 0x1a191cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a1920: 0x2442ff20
    ctx->pc = 0x1a1920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x1a1924: 0x84870004
    ctx->pc = 0x1a1924u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1928: 0x84860006
    ctx->pc = 0x1a1928u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1a192c: 0x4b5021
    ctx->pc = 0x1a192cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1a1930: 0x3c02002b
    ctx->pc = 0x1a1930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a1934: 0x2442ff22
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967074));
    // 0x1a1938: 0x4b1821
    ctx->pc = 0x1a1938u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1a193c: 0x3c02002b
    ctx->pc = 0x1a193cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a1940: 0x2442ff24
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967076));
    // 0x1a1944: 0xa5490000
    ctx->pc = 0x1a1944u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1a1948: 0x4b1021
    ctx->pc = 0x1a1948u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1a194c: 0xa5480002
    ctx->pc = 0x1a194cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a1950: 0xa0202d
    ctx->pc = 0x1a1950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1954: 0xa5470004
    ctx->pc = 0x1a1954u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a1958: 0xa5460006
    ctx->pc = 0x1a1958u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a195c: 0x84660000
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1960: 0x84470000
    ctx->pc = 0x1a1960u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1964: 0x80697b0
    ctx->pc = 0x1A1964u;
    ctx->pc = 0x1A1968u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->pc = 0x1A5EC0u;
    entry_1a5ec0_0x1a5f00(rdram, ctx, runtime); return;
    ctx->pc = 0x1A196Cu;
    // 0x1a196c: 0x0
    ctx->pc = 0x1a196cu;
    // NOP
}
