#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC1D0
// Address: 0x1bc1d0 - 0x1bc2b0
void sub_001BC1D0_0x1bc1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc1d0u;

    // 0x1bc1d0: 0x3c010031
    ctx->pc = 0x1bc1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc1d4: 0x3c030031
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x1bc1d8: 0xa42465e4
    ctx->pc = 0x1bc1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26084), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bc1dc: 0x2484ffff
    ctx->pc = 0x1bc1dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1bc1e0: 0x3c010031
    ctx->pc = 0x1bc1e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc1e4: 0x42900
    ctx->pc = 0x1bc1e4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1bc1e8: 0x3c040023
    ctx->pc = 0x1bc1e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1bc1ec: 0x24844e30
    ctx->pc = 0x1bc1ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20016));
    // 0x1bc1f0: 0x854021
    ctx->pc = 0x1bc1f0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc1f4: 0xac2865f4
    ctx->pc = 0x1bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26100), GPR_U32(ctx, 8));
    // 0x1bc1f8: 0x9107000c
    ctx->pc = 0x1bc1f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1bc1fc: 0x9104000d
    ctx->pc = 0x1bc1fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x1bc200: 0x87082a
    ctx->pc = 0x1bc200u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x1bc204: 0x10200006
    ctx->pc = 0x1BC204u;
    {
        const bool branch_taken_0x1bc204 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC208u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26080));
        if (branch_taken_0x1bc204) {
            ctx->pc = 0x1BC220u;
            goto label_1bc220;
        }
    }
    ctx->pc = 0x1BC20Cu;
    // 0x1bc20c: 0x24050001
    ctx->pc = 0x1bc20cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc210: 0xe42023
    ctx->pc = 0x1bc210u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bc214: 0xa4650006
    ctx->pc = 0x1bc214u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bc218: 0x10000005
    ctx->pc = 0x1BC218u;
    {
        const bool branch_taken_0x1bc218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC21Cu;
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1bc218) {
            ctx->pc = 0x1BC230u;
            goto label_1bc230;
        }
    }
    ctx->pc = 0x1BC220u;
label_1bc220:
    // 0x1bc220: 0x24050002
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc224: 0x872023
    ctx->pc = 0x1bc224u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bc228: 0xa4650006
    ctx->pc = 0x1bc228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bc22c: 0xa4640010
    ctx->pc = 0x1bc22cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
label_1bc230:
    // 0x1bc230: 0x8505000e
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x1bc234: 0x24040001
    ctx->pc = 0x1bc234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc238: 0xa4650012
    ctx->pc = 0x1bc238u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bc23c: 0x84660010
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bc240: 0x84650012
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1bc244: 0xc5001a
    ctx->pc = 0x1bc244u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1bc248: 0x0
    ctx->pc = 0x1bc248u;
    // NOP
    // 0x1bc24c: 0x0
    ctx->pc = 0x1bc24cu;
    // NOP
    // 0x1bc250: 0x2812
    ctx->pc = 0x1bc250u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1bc254: 0xa4650010
    ctx->pc = 0x1bc254u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bc258: 0x84650006
    ctx->pc = 0x1bc258u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1bc25c: 0x14a40004
    ctx->pc = 0x1BC25Cu;
    {
        const bool branch_taken_0x1bc25c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1bc25c) {
            ctx->pc = 0x1BC270u;
            goto label_1bc270;
        }
    }
    ctx->pc = 0x1BC264u;
    // 0x1bc264: 0x84640010
    ctx->pc = 0x1bc264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bc268: 0x42023
    ctx->pc = 0x1bc268u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1bc26c: 0xa4640010
    ctx->pc = 0x1bc26cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
label_1bc270:
    // 0x1bc270: 0x91060001
    ctx->pc = 0x1bc270u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1bc274: 0x3c050023
    ctx->pc = 0x1bc274u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1bc278: 0x30e400ff
    ctx->pc = 0x1bc278u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 255));
    // 0x1bc27c: 0x24a54ed0
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20176));
    // 0x1bc280: 0x42600
    ctx->pc = 0x1bc280u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x1bc284: 0x63080
    ctx->pc = 0x1bc284u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bc288: 0xa62821
    ctx->pc = 0x1bc288u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bc28c: 0x8ca50000
    ctx->pc = 0x1bc28cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc290: 0x52a3c
    ctx->pc = 0x1bc290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x1bc294: 0x52a3e
    ctx->pc = 0x1bc294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x1bc298: 0x852025
    ctx->pc = 0x1bc298u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc29c: 0x3e00008
    ctx->pc = 0x1BC29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2A0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC220u: goto label_1bc220;
            case 0x1BC230u: goto label_1bc230;
            case 0x1BC270u: goto label_1bc270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC2A4u;
    // 0x1bc2a4: 0x0
    ctx->pc = 0x1bc2a4u;
    // NOP
    // 0x1bc2a8: 0x0
    ctx->pc = 0x1bc2a8u;
    // NOP
    // 0x1bc2ac: 0x0
    ctx->pc = 0x1bc2acu;
    // NOP
}
