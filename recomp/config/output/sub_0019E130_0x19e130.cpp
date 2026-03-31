#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E130
// Address: 0x19e130 - 0x19e440
void sub_0019E130_0x19e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e130u;

    // 0x19e130: 0x27bdff40
    ctx->pc = 0x19e130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19e134: 0x3c0c0023
    ctx->pc = 0x19e134u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x19e138: 0x7fbe0080
    ctx->pc = 0x19e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19e13c: 0xc82d
    ctx->pc = 0x19e13cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e140: 0x7fb70070
    ctx->pc = 0x19e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19e144: 0x258c0770
    ctx->pc = 0x19e144u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1904));
    // 0x19e148: 0x7fb60060
    ctx->pc = 0x19e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e14c: 0x240b0008
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19e150: 0x7fb50050
    ctx->pc = 0x19e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e154: 0x7fb40040
    ctx->pc = 0x19e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e158: 0xa82d
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e15c: 0x7fb30030
    ctx->pc = 0x19e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e160: 0x7fb20020
    ctx->pc = 0x19e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e164: 0x7fb10010
    ctx->pc = 0x19e164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e168: 0x7fb00000
    ctx->pc = 0x19e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e16c: 0x8c980010
    ctx->pc = 0x19e16cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19e170: 0x8caf0010
    ctx->pc = 0x19e170u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e174: 0x100000a1
    ctx->pc = 0x19E174u;
    {
        const bool branch_taken_0x19e174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E178u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e174) {
            ctx->pc = 0x19E3FCu;
            goto label_19e3fc;
        }
    }
    ctx->pc = 0x19E17Cu;
label_19e17c:
    // 0x19e17c: 0x1000009a
    ctx->pc = 0x19E17Cu;
    {
        const bool branch_taken_0x19e17c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E180u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e17c) {
            ctx->pc = 0x19E3E8u;
            goto label_19e3e8;
        }
    }
    ctx->pc = 0x19E184u;
label_19e184:
    // 0x19e184: 0x14e3000c
    ctx->pc = 0x19E184u;
    {
        const bool branch_taken_0x19e184 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x19e184) {
            ctx->pc = 0x19E1B8u;
            goto label_19e1b8;
        }
    }
    ctx->pc = 0x19E18Cu;
    // 0x19e18c: 0x14c3000a
    ctx->pc = 0x19E18Cu;
    {
        const bool branch_taken_0x19e18c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x19e18c) {
            ctx->pc = 0x19E1B8u;
            goto label_19e1b8;
        }
    }
    ctx->pc = 0x19E194u;
    // 0x19e194: 0x3203001f
    ctx->pc = 0x19e194u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 31));
    // 0x19e198: 0x8c8d0014
    ctx->pc = 0x19e198u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19e19c: 0x1834021
    ctx->pc = 0x19e19cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x19e1a0: 0x91080000
    ctx->pc = 0x19e1a0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e1a4: 0x320300e0
    ctx->pc = 0x19e1a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 224));
    // 0x19e1a8: 0x681821
    ctx->pc = 0x19e1a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19e1ac: 0x1a31818
    ctx->pc = 0x19e1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e1b0: 0x10000004
    ctx->pc = 0x19E1B0u;
    {
        const bool branch_taken_0x19e1b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E1B4u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
        if (branch_taken_0x19e1b0) {
            ctx->pc = 0x19E1C4u;
            goto label_19e1c4;
        }
    }
    ctx->pc = 0x19E1B8u;
label_19e1b8:
    // 0x19e1b8: 0x8c8d0014
    ctx->pc = 0x19e1b8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19e1bc: 0x3194821
    ctx->pc = 0x19e1bcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x19e1c0: 0x32dc821
    ctx->pc = 0x19e1c0u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_19e1c4:
    // 0x19e1c4: 0x24030004
    ctx->pc = 0x19e1c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e1c8: 0x11a30012
    ctx->pc = 0x19E1C8u;
    {
        const bool branch_taken_0x19e1c8 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        ctx->pc = 0x19E1CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19e1c8) {
            ctx->pc = 0x19E214u;
            goto label_19e214;
        }
    }
    ctx->pc = 0x19E1D0u;
    // 0x19e1d0: 0x11a30008
    ctx->pc = 0x19E1D0u;
    {
        const bool branch_taken_0x19e1d0 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        if (branch_taken_0x19e1d0) {
            ctx->pc = 0x19E1F4u;
            goto label_19e1f4;
        }
    }
    ctx->pc = 0x19E1D8u;
    // 0x19e1d8: 0x24030002
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e1dc: 0x11a30003
    ctx->pc = 0x19E1DCu;
    {
        const bool branch_taken_0x19e1dc = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        if (branch_taken_0x19e1dc) {
            ctx->pc = 0x19E1ECu;
            goto label_19e1ec;
        }
    }
    ctx->pc = 0x19E1E4u;
    // 0x19e1e4: 0x1000000d
    ctx->pc = 0x19E1E4u;
    {
        const bool branch_taken_0x19e1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E1E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        if (branch_taken_0x19e1e4) {
            ctx->pc = 0x19E21Cu;
            goto label_19e21c;
        }
    }
    ctx->pc = 0x19E1ECu;
label_19e1ec:
    // 0x19e1ec: 0x1000000a
    ctx->pc = 0x19E1ECu;
    {
        const bool branch_taken_0x19e1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E1F0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        if (branch_taken_0x19e1ec) {
            ctx->pc = 0x19E218u;
            goto label_19e218;
        }
    }
    ctx->pc = 0x19E1F4u;
label_19e1f4:
    // 0x19e1f4: 0x91280002
    ctx->pc = 0x19e1f4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x19e1f8: 0x91230001
    ctx->pc = 0x19e1f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x19e1fc: 0x91220000
    ctx->pc = 0x19e1fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19e200: 0x84400
    ctx->pc = 0x19e200u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x19e204: 0x31a00
    ctx->pc = 0x19e204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x19e208: 0x1031825
    ctx->pc = 0x19e208u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19e20c: 0x10000002
    ctx->pc = 0x19E20Cu;
    {
        const bool branch_taken_0x19e20c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E210u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x19e20c) {
            ctx->pc = 0x19E218u;
            goto label_19e218;
        }
    }
    ctx->pc = 0x19E214u;
label_19e214:
    // 0x19e214: 0x8d220000
    ctx->pc = 0x19e214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_19e218:
    // 0x19e218: 0x8c83001c
    ctx->pc = 0x19e218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_19e21c:
    // 0x19e21c: 0x8c8a0018
    ctx->pc = 0x19e21cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19e220: 0x8c930020
    ctx->pc = 0x19e220u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x19e224: 0x8c890028
    ctx->pc = 0x19e224u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x19e228: 0x8c880024
    ctx->pc = 0x19e228u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x19e22c: 0x8c92002c
    ctx->pc = 0x19e22cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x19e230: 0x627006
    ctx->pc = 0x19e230u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19e234: 0x8c910038
    ctx->pc = 0x19e234u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x19e238: 0x8c830034
    ctx->pc = 0x19e238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x19e23c: 0x16a5023
    ctx->pc = 0x19e23cu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x19e240: 0x26e7024
    ctx->pc = 0x19e240u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x19e244: 0x14ea004
    ctx->pc = 0x19e244u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
    // 0x19e248: 0x1227006
    ctx->pc = 0x19e248u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x19e24c: 0x1684023
    ctx->pc = 0x19e24cu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x19e250: 0x24e7024
    ctx->pc = 0x19e250u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x19e254: 0x8c8a0030
    ctx->pc = 0x19e254u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19e258: 0x10e9804
    ctx->pc = 0x19e258u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
    // 0x19e25c: 0x8c890044
    ctx->pc = 0x19e25cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x19e260: 0x627006
    ctx->pc = 0x19e260u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19e264: 0x8c880040
    ctx->pc = 0x19e264u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19e268: 0x8c83003c
    ctx->pc = 0x19e268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x19e26c: 0x22e7024
    ctx->pc = 0x19e26cu;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x19e270: 0x16a5023
    ctx->pc = 0x19e270u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x19e274: 0x1021006
    ctx->pc = 0x19e274u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x19e278: 0x1224024
    ctx->pc = 0x19e278u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x19e27c: 0x1631023
    ctx->pc = 0x19e27cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x19e280: 0x488804
    ctx->pc = 0x19e280u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x19e284: 0x24020001
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e288: 0x14e2000b
    ctx->pc = 0x19E288u;
    {
        const bool branch_taken_0x19e288 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x19E28Cu;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x19e288) {
            ctx->pc = 0x19E2B8u;
            goto label_19e2b8;
        }
    }
    ctx->pc = 0x19E290u;
    // 0x19e290: 0x14c00009
    ctx->pc = 0x19E290u;
    {
        const bool branch_taken_0x19e290 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E294u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 31));
        if (branch_taken_0x19e290) {
            ctx->pc = 0x19E2B8u;
            goto label_19e2b8;
        }
    }
    ctx->pc = 0x19E298u;
    // 0x19e298: 0x320300e0
    ctx->pc = 0x19e298u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 224));
    // 0x19e29c: 0x1824021
    ctx->pc = 0x19e29cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x19e2a0: 0x91080000
    ctx->pc = 0x19e2a0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e2a4: 0x8ca20014
    ctx->pc = 0x19e2a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e2a8: 0x681821
    ctx->pc = 0x19e2a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19e2ac: 0x431018
    ctx->pc = 0x19e2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e2b0: 0x10000007
    ctx->pc = 0x19E2B0u;
    {
        const bool branch_taken_0x19e2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E2B4u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        if (branch_taken_0x19e2b0) {
            ctx->pc = 0x19E2D0u;
            goto label_19e2d0;
        }
    }
    ctx->pc = 0x19E2B8u;
label_19e2b8:
    // 0x19e2b8: 0x8ca3000c
    ctx->pc = 0x19e2b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19e2bc: 0x8ca20014
    ctx->pc = 0x19e2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e2c0: 0x751818
    ctx->pc = 0x19e2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e2c4: 0x70561018
    ctx->pc = 0x19e2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x19e2c8: 0x1e31821
    ctx->pc = 0x19e2c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x19e2cc: 0x627021
    ctx->pc = 0x19e2ccu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19e2d0:
    // 0x19e2d0: 0x14c00008
    ctx->pc = 0x19E2D0u;
    {
        const bool branch_taken_0x19e2d0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E2D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x19e2d0) {
            ctx->pc = 0x19E2F4u;
            goto label_19e2f4;
        }
    }
    ctx->pc = 0x19E2D8u;
    // 0x19e2d8: 0x240200ff
    ctx->pc = 0x19e2d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x19e2dc: 0x16220003
    ctx->pc = 0x19E2DCu;
    {
        const bool branch_taken_0x19e2dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x19e2dc) {
            ctx->pc = 0x19E2ECu;
            goto label_19e2ec;
        }
    }
    ctx->pc = 0x19E2E4u;
    // 0x19e2e4: 0x10000008
    ctx->pc = 0x19E2E4u;
    {
        const bool branch_taken_0x19e2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E2E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x19e2e4) {
            ctx->pc = 0x19E308u;
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E2ECu;
label_19e2ec:
    // 0x19e2ec: 0x10000006
    ctx->pc = 0x19E2ECu;
    {
        const bool branch_taken_0x19e2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E2F0u;
        SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x19e2ec) {
            ctx->pc = 0x19E308u;
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E2F4u;
label_19e2f4:
    // 0x19e2f4: 0x16220003
    ctx->pc = 0x19E2F4u;
    {
        const bool branch_taken_0x19e2f4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x19e2f4) {
            ctx->pc = 0x19E304u;
            goto label_19e304;
        }
    }
    ctx->pc = 0x19E2FCu;
    // 0x19e2fc: 0x10000002
    ctx->pc = 0x19E2FCu;
    {
        const bool branch_taken_0x19e2fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E300u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x19e2fc) {
            ctx->pc = 0x19E308u;
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E304u;
label_19e304:
    // 0x19e304: 0x118840
    ctx->pc = 0x19e304u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 1));
label_19e308:
    // 0x19e308: 0x8ca30024
    ctx->pc = 0x19e308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x19e30c: 0x8caa0018
    ctx->pc = 0x19e30cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e310: 0x8ca90020
    ctx->pc = 0x19e310u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19e314: 0x8ca8001c
    ctx->pc = 0x19e314u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x19e318: 0x8cb7002c
    ctx->pc = 0x19e318u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x19e31c: 0x8ca20028
    ctx->pc = 0x19e31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x19e320: 0x1631823
    ctx->pc = 0x19e320u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x19e324: 0x731806
    ctx->pc = 0x19e324u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x19e328: 0x7fa200a0
    ctx->pc = 0x19e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x19e32c: 0x16a1023
    ctx->pc = 0x19e32cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x19e330: 0x8cbe0030
    ctx->pc = 0x19e330u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x19e334: 0x545006
    ctx->pc = 0x19e334u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x19e338: 0x8ca20038
    ctx->pc = 0x19e338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x19e33c: 0x12a4824
    ctx->pc = 0x19e33cu;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19e340: 0x2e35024
    ctx->pc = 0x19e340u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x19e344: 0x7fa200b0
    ctx->pc = 0x19e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x19e348: 0x8ca20034
    ctx->pc = 0x19e348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x19e34c: 0x7fa20090
    ctx->pc = 0x19e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x19e350: 0x1091004
    ctx->pc = 0x19e350u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 8) & 0x1F));
    // 0x19e354: 0x8ca30044
    ctx->pc = 0x19e354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x19e358: 0x7ba900a0
    ctx->pc = 0x19e358u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e35c: 0x8ca8003c
    ctx->pc = 0x19e35cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x19e360: 0x8cb70040
    ctx->pc = 0x19e360u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x19e364: 0x12a5004
    ctx->pc = 0x19e364u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x19e368: 0x4a5025
    ctx->pc = 0x19e368u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x19e36c: 0x17e4823
    ctx->pc = 0x19e36cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 30)));
    // 0x19e370: 0x7ba200b0
    ctx->pc = 0x19e370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19e374: 0x1324806
    ctx->pc = 0x19e374u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 9) & 0x1F));
    // 0x19e378: 0x1684023
    ctx->pc = 0x19e378u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x19e37c: 0x1114006
    ctx->pc = 0x19e37cu;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 8) & 0x1F));
    // 0x19e380: 0x681824
    ctx->pc = 0x19e380u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19e384: 0x2e31804
    ctx->pc = 0x19e384u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
    // 0x19e388: 0x494824
    ctx->pc = 0x19e388u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19e38c: 0x7ba20090
    ctx->pc = 0x19e38cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e390: 0x491004
    ctx->pc = 0x19e390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x19e394: 0x4a1025
    ctx->pc = 0x19e394u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x19e398: 0x621025
    ctx->pc = 0x19e398u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e39c: 0x24030004
    ctx->pc = 0x19e39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e3a0: 0x11a3000e
    ctx->pc = 0x19E3A0u;
    {
        const bool branch_taken_0x19e3a0 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        ctx->pc = 0x19E3A4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19e3a0) {
            ctx->pc = 0x19E3DCu;
            goto label_19e3dc;
        }
    }
    ctx->pc = 0x19E3A8u;
    // 0x19e3a8: 0x11a30008
    ctx->pc = 0x19E3A8u;
    {
        const bool branch_taken_0x19e3a8 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        if (branch_taken_0x19e3a8) {
            ctx->pc = 0x19E3CCu;
            goto label_19e3cc;
        }
    }
    ctx->pc = 0x19E3B0u;
    // 0x19e3b0: 0x24030002
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e3b4: 0x11a30003
    ctx->pc = 0x19E3B4u;
    {
        const bool branch_taken_0x19e3b4 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 3));
        if (branch_taken_0x19e3b4) {
            ctx->pc = 0x19E3C4u;
            goto label_19e3c4;
        }
    }
    ctx->pc = 0x19E3BCu;
    // 0x19e3bc: 0x10000009
    ctx->pc = 0x19E3BCu;
    {
        const bool branch_taken_0x19e3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E3C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x19e3bc) {
            ctx->pc = 0x19E3E4u;
            goto label_19e3e4;
        }
    }
    ctx->pc = 0x19E3C4u;
label_19e3c4:
    // 0x19e3c4: 0x10000006
    ctx->pc = 0x19E3C4u;
    {
        const bool branch_taken_0x19e3c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E3C8u;
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x19e3c4) {
            ctx->pc = 0x19E3E0u;
            goto label_19e3e0;
        }
    }
    ctx->pc = 0x19E3CCu;
label_19e3cc:
    // 0x19e3cc: 0xa1d40000
    ctx->pc = 0x19e3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x19e3d0: 0xa1d30001
    ctx->pc = 0x19e3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1), (uint8_t)GPR_U32(ctx, 19));
    // 0x19e3d4: 0x10000002
    ctx->pc = 0x19E3D4u;
    {
        const bool branch_taken_0x19e3d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E3D8u;
        WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x19e3d4) {
            ctx->pc = 0x19E3E0u;
            goto label_19e3e0;
        }
    }
    ctx->pc = 0x19E3DCu;
label_19e3dc:
    // 0x19e3dc: 0xadc20000
    ctx->pc = 0x19e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_19e3e0:
    // 0x19e3e0: 0x26100001
    ctx->pc = 0x19e3e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_19e3e4:
    // 0x19e3e4: 0x26d60001
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_19e3e8:
    // 0x19e3e8: 0x8ca30004
    ctx->pc = 0x19e3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19e3ec: 0x2c3182a
    ctx->pc = 0x19e3ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 3)));
    // 0x19e3f0: 0x1460ff64
    ctx->pc = 0x19E3F0u;
    {
        const bool branch_taken_0x19e3f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E3F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19e3f0) {
            ctx->pc = 0x19E184u;
            goto label_19e184;
        }
    }
    ctx->pc = 0x19E3F8u;
    // 0x19e3f8: 0x26b50001
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_19e3fc:
    // 0x19e3fc: 0x8ca30008
    ctx->pc = 0x19e3fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19e400: 0x2a3182a
    ctx->pc = 0x19e400u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
    // 0x19e404: 0x1460ff5d
    ctx->pc = 0x19E404u;
    {
        const bool branch_taken_0x19e404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e404) {
            ctx->pc = 0x19E17Cu;
            goto label_19e17c;
        }
    }
    ctx->pc = 0x19E40Cu;
    // 0x19e40c: 0x7bbe0080
    ctx->pc = 0x19e40cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e410: 0x24020001
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e414: 0x7bb70070
    ctx->pc = 0x19e414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e418: 0x7bb60060
    ctx->pc = 0x19e418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e41c: 0x7bb50050
    ctx->pc = 0x19e41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e420: 0x7bb40040
    ctx->pc = 0x19e420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e424: 0x7bb30030
    ctx->pc = 0x19e424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e428: 0x7bb20020
    ctx->pc = 0x19e428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e42c: 0x7bb10010
    ctx->pc = 0x19e42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e430: 0x7bb00000
    ctx->pc = 0x19e430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e434: 0x3e00008
    ctx->pc = 0x19E434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E17Cu: goto label_19e17c;
            case 0x19E184u: goto label_19e184;
            case 0x19E1B8u: goto label_19e1b8;
            case 0x19E1C4u: goto label_19e1c4;
            case 0x19E1ECu: goto label_19e1ec;
            case 0x19E1F4u: goto label_19e1f4;
            case 0x19E214u: goto label_19e214;
            case 0x19E218u: goto label_19e218;
            case 0x19E21Cu: goto label_19e21c;
            case 0x19E2B8u: goto label_19e2b8;
            case 0x19E2D0u: goto label_19e2d0;
            case 0x19E2ECu: goto label_19e2ec;
            case 0x19E2F4u: goto label_19e2f4;
            case 0x19E304u: goto label_19e304;
            case 0x19E308u: goto label_19e308;
            case 0x19E3C4u: goto label_19e3c4;
            case 0x19E3CCu: goto label_19e3cc;
            case 0x19E3DCu: goto label_19e3dc;
            case 0x19E3E0u: goto label_19e3e0;
            case 0x19E3E4u: goto label_19e3e4;
            case 0x19E3E8u: goto label_19e3e8;
            case 0x19E3FCu: goto label_19e3fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E43Cu;
    // 0x19e43c: 0x0
    ctx->pc = 0x19e43cu;
    // NOP
}
