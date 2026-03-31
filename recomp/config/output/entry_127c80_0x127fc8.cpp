#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_127c80
// Address: 0x127c80 - 0x127fc8
void entry_127c80_0x127fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x127c80u;

    // 0x127c80: 0x517c2
    ctx->pc = 0x127c80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x127c84: 0x27bdff90
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127c88: 0xa21021
    ctx->pc = 0x127c88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x127c8c: 0x87a30078
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x127c90: 0x21043
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x127c94: 0xffb20030
    ctx->pc = 0x127c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x127c98: 0xafa20018
    ctx->pc = 0x127c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x127c9c: 0x80782d
    ctx->pc = 0x127c9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ca0: 0x87a20080
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127ca4: 0xa5400
    ctx->pc = 0x127ca4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x127ca8: 0xffb30038
    ctx->pc = 0x127ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x127cac: 0xa9c03
    ctx->pc = 0x127cacu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x127cb0: 0xffb00020
    ctx->pc = 0x127cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x127cb4: 0xb5c00
    ctx->pc = 0x127cb4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x127cb8: 0xffb10028
    ctx->pc = 0x127cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x127cbc: 0xc0c82d
    ctx->pc = 0x127cbcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cc0: 0xffb40040
    ctx->pc = 0x127cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127cc4: 0xb9403
    ctx->pc = 0x127cc4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x127cc8: 0xffb50048
    ctx->pc = 0x127cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x127ccc: 0xffb60050
    ctx->pc = 0x127cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x127cd0: 0xffb70058
    ctx->pc = 0x127cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x127cd4: 0xffbe0060
    ctx->pc = 0x127cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x127cd8: 0xafa50000
    ctx->pc = 0x127cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x127cdc: 0xafa70004
    ctx->pc = 0x127cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x127ce0: 0xafa90008
    ctx->pc = 0x127ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x127ce4: 0xafa20010
    ctx->pc = 0x127ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x127ce8: 0xafa00014
    ctx->pc = 0x127ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x127cec: 0xafa3000c
    ctx->pc = 0x127cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x127cf0: 0x8fa40018
    ctx->pc = 0x127cf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127cf4: 0x84ed0000
    ctx->pc = 0x127cf4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127cf8: 0x84ea0002
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x127cfc: 0x852e0000
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127d00: 0x1880009f
    ctx->pc = 0x127D00u;
    {
        const bool branch_taken_0x127d00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x127D04u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        if (branch_taken_0x127d00) {
            ctx->pc = 0x127F80u;
            goto label_127f80;
        }
    }
    ctx->pc = 0x127D08u;
label_127d08:
    // 0x127d08: 0x95e30000
    ctx->pc = 0x127d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x127d0c: 0x2406ff00
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127d10: 0x91e40001
    ctx->pc = 0x127d10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x127d14: 0x31a00
    ctx->pc = 0x127d14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127d18: 0x8fa50014
    ctx->pc = 0x127d18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127d1c: 0x661824
    ctx->pc = 0x127d1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x127d20: 0x832025
    ctx->pc = 0x127d20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127d24: 0x51040
    ctx->pc = 0x127d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x127d28: 0x42400
    ctx->pc = 0x127d28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x127d2c: 0x42c03
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127d30: 0x30a38000
    ctx->pc = 0x127d30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x127d34: 0x14600099
    ctx->pc = 0x127D34u;
    {
        const bool branch_taken_0x127d34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127D38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x127d34) {
            ctx->pc = 0x127F9Cu;
            goto label_127f9c;
        }
    }
    ctx->pc = 0x127D3Cu;
    // 0x127d3c: 0x8fa20070
    ctx->pc = 0x127d3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d40: 0x8fa60010
    ctx->pc = 0x127d40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d44: 0x94430000
    ctx->pc = 0x127d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127d48: 0xc00013
    ctx->pc = 0x127d48u;
    ctx->lo = GPR_U32(ctx, 6);
    // 0x127d4c: 0x8fa6000c
    ctx->pc = 0x127d4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127d50: 0x41040
    ctx->pc = 0x127d50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x127d54: 0x70662000
    ctx->pc = 0x127d54u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x127d58: 0xa31826
    ctx->pc = 0x127d58u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x127d5c: 0x30631fff
    ctx->pc = 0x127d5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x127d60: 0x2405ff00
    ctx->pc = 0x127d60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127d64: 0x24770001
    ctx->pc = 0x127d64u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 3), 1));
    // 0x127d68: 0x8fa30070
    ctx->pc = 0x127d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d6c: 0x30867fff
    ctx->pc = 0x127d6cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 32767));
    // 0x127d70: 0xa4660000
    ctx->pc = 0x127d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127d74: 0x95e30012
    ctx->pc = 0x127d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x127d78: 0x91e40013
    ctx->pc = 0x127d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x127d7c: 0x31a00
    ctx->pc = 0x127d7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127d80: 0x651824
    ctx->pc = 0x127d80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127d84: 0x832025
    ctx->pc = 0x127d84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127d88: 0x42400
    ctx->pc = 0x127d88u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x127d8c: 0x42c03
    ctx->pc = 0x127d8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127d90: 0x30a38000
    ctx->pc = 0x127d90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x127d94: 0x14600081
    ctx->pc = 0x127D94u;
    {
        const bool branch_taken_0x127d94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127D98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x127d94) {
            ctx->pc = 0x127F9Cu;
            goto label_127f9c;
        }
    }
    ctx->pc = 0x127D9Cu;
    // 0x127d9c: 0x25ef0002
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 2));
    // 0x127da0: 0x8fa40070
    ctx->pc = 0x127da0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127da4: 0x34168000
    ctx->pc = 0x127da4u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 32768));
    // 0x127da8: 0x600013
    ctx->pc = 0x127da8u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x127dac: 0x8fa3000c
    ctx->pc = 0x127dacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127db0: 0x3415ffff
    ctx->pc = 0x127db0u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 0), 65535));
    // 0x127db4: 0x24187fff
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x127db8: 0x70661000
    ctx->pc = 0x127db8u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x127dbc: 0xa61826
    ctx->pc = 0x127dbcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x127dc0: 0x30631fff
    ctx->pc = 0x127dc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x127dc4: 0x241e001e
    ctx->pc = 0x127dc4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 30));
    // 0x127dc8: 0x24740001
    ctx->pc = 0x127dc8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1));
    // 0x127dcc: 0x30427fff
    ctx->pc = 0x127dccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
    // 0x127dd0: 0xa4820000
    ctx->pc = 0x127dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x127dd4: 0x0
    ctx->pc = 0x127dd4u;
    // NOP
label_127dd8:
    // 0x127dd8: 0x91e30000
    ctx->pc = 0x127dd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x127ddc: 0x24a1018
    ctx->pc = 0x127ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127de0: 0x726d2018
    ctx->pc = 0x127de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127de4: 0x91e60012
    ctx->pc = 0x127de4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x127de8: 0x31e00
    ctx->pc = 0x127de8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x127dec: 0x1a0502d
    ctx->pc = 0x127decu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127df0: 0x32f03
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x127df4: 0x63600
    ctx->pc = 0x127df4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 24));
    // 0x127df8: 0xb72818
    ctx->pc = 0x127df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x127dfc: 0x36603
    ctx->pc = 0x127dfcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x127e00: 0x822021
    ctx->pc = 0x127e00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127e04: 0x3182000f
    ctx->pc = 0x127e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 12), 15));
    // 0x127e08: 0x61f03
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x127e0c: 0x63603
    ctx->pc = 0x127e0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x127e10: 0x42303
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x127e14: 0x746018
    ctx->pc = 0x127e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x127e18: 0x3c030024
    ctx->pc = 0x127e18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x127e1c: 0x852821
    ctx->pc = 0x127e1cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127e20: 0x21080
    ctx->pc = 0x127e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x127e24: 0x24639be8
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941672));
    // 0x127e28: 0x435821
    ctx->pc = 0x127e28u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127e2c: 0xb61021
    ctx->pc = 0x127e2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127e30: 0x28a38000
    ctx->pc = 0x127e30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127e34: 0x2a2102b
    ctx->pc = 0x127e34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127e38: 0x24a8818
    ctx->pc = 0x127e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x127e3c: 0x25ef0001
    ctx->pc = 0x127e3cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x127e40: 0x305202a
    ctx->pc = 0x127e40u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127e44: 0x38630000
    ctx->pc = 0x127e44u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
    // 0x127e48: 0x10400004
    ctx->pc = 0x127E48u;
    {
        const bool branch_taken_0x127e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127E4Cu;
        SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 6), 15));
        if (branch_taken_0x127e48) {
            ctx->pc = 0x127E5Cu;
            goto label_127e5c;
        }
    }
    ctx->pc = 0x127E50u;
    // 0x127e50: 0x304280b
    ctx->pc = 0x127e50u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127e54: 0x24028000
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127e58: 0x43280b
    ctx->pc = 0x127e58u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127e5c:
    // 0x127e5c: 0x2502018
    ctx->pc = 0x127e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127e60: 0x1c0802d
    ctx->pc = 0x127e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e64: 0x726e1018
    ctx->pc = 0x127e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127e68: 0xa0682d
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e6c: 0x26d1818
    ctx->pc = 0x127e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x127e70: 0x2503818
    ctx->pc = 0x127e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x127e74: 0x1a0502d
    ctx->pc = 0x127e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e78: 0x441021
    ctx->pc = 0x127e78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x127e7c: 0x21303
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x127e80: 0x711821
    ctx->pc = 0x127e80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x127e84: 0x4c2821
    ctx->pc = 0x127e84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x127e88: 0x33303
    ctx->pc = 0x127e88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x127e8c: 0xb61821
    ctx->pc = 0x127e8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127e90: 0x28a28000
    ctx->pc = 0x127e90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127e94: 0x2a3182b
    ctx->pc = 0x127e94u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x127e98: 0x305202a
    ctx->pc = 0x127e98u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127e9c: 0x10600004
    ctx->pc = 0x127E9Cu;
    {
        const bool branch_taken_0x127e9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x127EA0u;
        SET_GPR_U32(ctx, 12, XOR32(GPR_U32(ctx, 2), 0));
        if (branch_taken_0x127e9c) {
            ctx->pc = 0x127EB0u;
            goto label_127eb0;
        }
    }
    ctx->pc = 0x127EA4u;
    // 0x127ea4: 0x304280b
    ctx->pc = 0x127ea4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127ea8: 0x24028000
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127eac: 0x4c280b
    ctx->pc = 0x127eacu;
    if (GPR_U32(ctx, 12) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127eb0:
    // 0x127eb0: 0x8d6c0000
    ctx->pc = 0x127eb0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x127eb4: 0xa0702d
    ctx->pc = 0x127eb4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127eb8: 0x26e1018
    ctx->pc = 0x127eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127ebc: 0x3c050024
    ctx->pc = 0x127ebcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x127ec0: 0x1972018
    ctx->pc = 0x127ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127ec4: 0x24a59be8
    ctx->pc = 0x127ec4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941672));
    // 0x127ec8: 0x91880
    ctx->pc = 0x127ec8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 2));
    // 0x127ecc: 0xa72d0000
    ctx->pc = 0x127eccu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127ed0: 0x651821
    ctx->pc = 0x127ed0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127ed4: 0x1c0802d
    ctx->pc = 0x127ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ed8: 0x471021
    ctx->pc = 0x127ed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x127edc: 0xa50e0000
    ctx->pc = 0x127edcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127ee0: 0xc42821
    ctx->pc = 0x127ee0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x127ee4: 0x8c660000
    ctx->pc = 0x127ee4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127ee8: 0x26303
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x127eec: 0xb61021
    ctx->pc = 0x127eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127ef0: 0x28a38000
    ctx->pc = 0x127ef0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127ef4: 0x2a2102b
    ctx->pc = 0x127ef4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127ef8: 0x27390002
    ctx->pc = 0x127ef8u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 2));
    // 0x127efc: 0x25080002
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x127f00: 0xd43018
    ctx->pc = 0x127f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x127f04: 0x305202a
    ctx->pc = 0x127f04u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127f08: 0x10400004
    ctx->pc = 0x127F08u;
    {
        const bool branch_taken_0x127f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127F0Cu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
        if (branch_taken_0x127f08) {
            ctx->pc = 0x127F1Cu;
            goto label_127f1c;
        }
    }
    ctx->pc = 0x127F10u;
    // 0x127f10: 0x304280b
    ctx->pc = 0x127f10u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127f14: 0x24028000
    ctx->pc = 0x127f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127f18: 0x43280b
    ctx->pc = 0x127f18u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127f1c:
    // 0x127f1c: 0xa0682d
    ctx->pc = 0x127f1cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f20: 0x1862821
    ctx->pc = 0x127f20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x127f24: 0xb61021
    ctx->pc = 0x127f24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127f28: 0x28a38000
    ctx->pc = 0x127f28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127f2c: 0x2a2102b
    ctx->pc = 0x127f2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127f30: 0x305202a
    ctx->pc = 0x127f30u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127f34: 0x10400004
    ctx->pc = 0x127F34u;
    {
        const bool branch_taken_0x127f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127F38u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
        if (branch_taken_0x127f34) {
            ctx->pc = 0x127F48u;
            goto label_127f48;
        }
    }
    ctx->pc = 0x127F3Cu;
    // 0x127f3c: 0x304280b
    ctx->pc = 0x127f3cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127f40: 0x24028000
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127f44: 0x43280b
    ctx->pc = 0x127f44u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127f48:
    // 0x127f48: 0xa0702d
    ctx->pc = 0x127f48u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f4c: 0x27defffe
    ctx->pc = 0x127f4cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x127f50: 0xa72d0000
    ctx->pc = 0x127f50u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127f54: 0x27390002
    ctx->pc = 0x127f54u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 2));
    // 0x127f58: 0xa50e0000
    ctx->pc = 0x127f58u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127f5c: 0x7c1ff9e
    ctx->pc = 0x127F5Cu;
    {
        const bool branch_taken_0x127f5c = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x127F60u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x127f5c) {
            ctx->pc = 0x127DD8u;
            goto label_127dd8;
        }
    }
    ctx->pc = 0x127F64u;
    // 0x127f64: 0x8fa60014
    ctx->pc = 0x127f64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127f68: 0x25ef0012
    ctx->pc = 0x127f68u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 18));
    // 0x127f6c: 0x8fa30018
    ctx->pc = 0x127f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127f70: 0x24c60001
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x127f74: 0xc3102a
    ctx->pc = 0x127f74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x127f78: 0x1440ff63
    ctx->pc = 0x127F78u;
    {
        const bool branch_taken_0x127f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x127F7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        if (branch_taken_0x127f78) {
            ctx->pc = 0x127D08u;
            goto label_127d08;
        }
    }
    ctx->pc = 0x127F80u;
label_127f80:
    // 0x127f80: 0x8fa40004
    ctx->pc = 0x127f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x127f84: 0xa48a0002
    ctx->pc = 0x127f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x127f88: 0x8fa20000
    ctx->pc = 0x127f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f8c: 0xa48d0000
    ctx->pc = 0x127f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127f90: 0x8fa50008
    ctx->pc = 0x127f90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127f94: 0xa4b00002
    ctx->pc = 0x127f94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x127f98: 0xa4ae0000
    ctx->pc = 0x127f98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_127f9c:
    // 0x127f9c: 0xdfb00020
    ctx->pc = 0x127f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127fa0: 0xdfb10028
    ctx->pc = 0x127fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127fa4: 0xdfb20030
    ctx->pc = 0x127fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127fa8: 0xdfb30038
    ctx->pc = 0x127fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x127fac: 0xdfb40040
    ctx->pc = 0x127facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127fb0: 0xdfb50048
    ctx->pc = 0x127fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127fb4: 0xdfb60050
    ctx->pc = 0x127fb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127fb8: 0xdfb70058
    ctx->pc = 0x127fb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x127fbc: 0xdfbe0060
    ctx->pc = 0x127fbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127fc0: 0x3e00008
    ctx->pc = 0x127FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127FC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127D08u: goto label_127d08;
            case 0x127DD8u: goto label_127dd8;
            case 0x127E5Cu: goto label_127e5c;
            case 0x127EB0u: goto label_127eb0;
            case 0x127F1Cu: goto label_127f1c;
            case 0x127F48u: goto label_127f48;
            case 0x127F80u: goto label_127f80;
            case 0x127F9Cu: goto label_127f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127FC8u;
}
