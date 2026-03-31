#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DB00
// Address: 0x12db00 - 0x12dd60
void sub_0012DB00_0x12db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12db00u;

label_12db00:
    // 0x12db00: 0x3c020022
    ctx->pc = 0x12db00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x12db04: 0x27bdffd0
    ctx->pc = 0x12db04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12db08: 0x8c438748
    ctx->pc = 0x12db08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936392)));
    // 0x12db0c: 0xffb00000
    ctx->pc = 0x12db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12db10: 0xa0802d
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db14: 0xffb10008
    ctx->pc = 0x12db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12db18: 0x80882d
    ctx->pc = 0x12db18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db1c: 0xffb20010
    ctx->pc = 0x12db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12db20: 0xc0902d
    ctx->pc = 0x12db20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db24: 0xffb30018
    ctx->pc = 0x12db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12db28: 0xe0982d
    ctx->pc = 0x12db28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db2c: 0xffb40020
    ctx->pc = 0x12db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12db30: 0x100a02d
    ctx->pc = 0x12db30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db34: 0x14600003
    ctx->pc = 0x12DB34u;
    {
        const bool branch_taken_0x12db34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DB38u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x12db34) {
            ctx->pc = 0x12DB44u;
            goto label_12db44;
        }
    }
    ctx->pc = 0x12DB3Cu;
    // 0x12db3c: 0xc04b6b0
    ctx->pc = 0x12DB3Cu;
    SET_GPR_U32(ctx, 31, 0x12DB44u);
    ctx->pc = 0x12DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAC0_0x12dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB44u; }
    }
    if (ctx->pc != 0x12DB44u) { return; }
    ctx->pc = 0x12DB44u;
label_12db44:
    // 0x12db44: 0xa6400000
    ctx->pc = 0x12db44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12db48: 0xa6600000
    ctx->pc = 0x12db48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12db4c: 0x16200003
    ctx->pc = 0x12DB4Cu;
    {
        const bool branch_taken_0x12db4c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DB50u;
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x12db4c) {
            ctx->pc = 0x12DB5Cu;
            goto label_12db5c;
        }
    }
    ctx->pc = 0x12DB54u;
    // 0x12db54: 0x1a00004f
    ctx->pc = 0x12DB54u;
    {
        const bool branch_taken_0x12db54 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12DB58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12db54) {
            ctx->pc = 0x12DC94u;
            goto label_12dc94;
        }
    }
    ctx->pc = 0x12DB5Cu;
label_12db5c:
    // 0x12db5c: 0x3c0b0024
    ctx->pc = 0x12db5cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)36 << 16));
    // 0x12db60: 0x382d
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db64: 0x25629360
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x12db68: 0x1a000018
    ctx->pc = 0x12DB68u;
    {
        const bool branch_taken_0x12db68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12DB6Cu;
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        if (branch_taken_0x12db68) {
            ctx->pc = 0x12DBCCu;
            goto label_12dbcc;
        }
    }
    ctx->pc = 0x12DB70u;
    // 0x12db70: 0x40402d
    ctx->pc = 0x12db70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db74: 0x0
    ctx->pc = 0x12db74u;
    // NOP
label_12db78:
    // 0x12db78: 0x2271821
    ctx->pc = 0x12db78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x12db7c: 0x24e70001
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x12db80: 0x80620000
    ctx->pc = 0x12db80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12db84: 0xf0302a
    ctx->pc = 0x12db84u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x12db88: 0x21040
    ctx->pc = 0x12db88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x12db8c: 0x481021
    ctx->pc = 0x12db8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12db90: 0x84430100
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12db94: 0x1431818
    ctx->pc = 0x12db94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12db98: 0x246503ff
    ctx->pc = 0x12db98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x12db9c: 0x28640000
    ctx->pc = 0x12db9cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x12dba0: 0x60102d
    ctx->pc = 0x12dba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dba4: 0xa4100b
    ctx->pc = 0x12dba4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x12dba8: 0x21283
    ctx->pc = 0x12dba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12dbac: 0x21280
    ctx->pc = 0x12dbacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x12dbb0: 0x621823
    ctx->pc = 0x12dbb0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12dbb4: 0x31840
    ctx->pc = 0x12dbb4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x12dbb8: 0x681821
    ctx->pc = 0x12dbb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12dbbc: 0x14c0ffee
    ctx->pc = 0x12DBBCu;
    {
        const bool branch_taken_0x12dbbc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DBC0u;
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x12dbbc) {
            ctx->pc = 0x12DB78u;
            goto label_12db78;
        }
    }
    ctx->pc = 0x12DBC4u;
    // 0x12dbc4: 0x25629360
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x12dbc8: 0x382d
    ctx->pc = 0x12dbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12dbcc:
    // 0x12dbcc: 0x1a000015
    ctx->pc = 0x12DBCCu;
    {
        const bool branch_taken_0x12dbcc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12DBD0u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        if (branch_taken_0x12dbcc) {
            ctx->pc = 0x12DC24u;
            goto label_12dc24;
        }
    }
    ctx->pc = 0x12DBD4u;
    // 0x12dbd4: 0x40482d
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12dbd8:
    // 0x12dbd8: 0x2271821
    ctx->pc = 0x12dbd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x12dbdc: 0x24e70001
    ctx->pc = 0x12dbdcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x12dbe0: 0x80620000
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12dbe4: 0xf0302a
    ctx->pc = 0x12dbe4u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x12dbe8: 0x21040
    ctx->pc = 0x12dbe8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x12dbec: 0x491021
    ctx->pc = 0x12dbecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x12dbf0: 0x84430100
    ctx->pc = 0x12dbf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12dbf4: 0x1031818
    ctx->pc = 0x12dbf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12dbf8: 0x246503ff
    ctx->pc = 0x12dbf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x12dbfc: 0x28640000
    ctx->pc = 0x12dbfcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x12dc00: 0x60102d
    ctx->pc = 0x12dc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc04: 0xa4100b
    ctx->pc = 0x12dc04u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x12dc08: 0x21283
    ctx->pc = 0x12dc08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12dc0c: 0x21280
    ctx->pc = 0x12dc0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x12dc10: 0x621823
    ctx->pc = 0x12dc10u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12dc14: 0x31840
    ctx->pc = 0x12dc14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x12dc18: 0x691821
    ctx->pc = 0x12dc18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12dc1c: 0x14c0ffee
    ctx->pc = 0x12DC1Cu;
    {
        const bool branch_taken_0x12dc1c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DC20u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x12dc1c) {
            ctx->pc = 0x12DBD8u;
            goto label_12dbd8;
        }
    }
    ctx->pc = 0x12DC24u;
label_12dc24:
    // 0x12dc24: 0x25629360
    ctx->pc = 0x12dc24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 11), 4294939488));
    // 0x12dc28: 0x382d
    ctx->pc = 0x12dc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc2c: 0x1a000015
    ctx->pc = 0x12DC2Cu;
    {
        const bool branch_taken_0x12dc2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12DC30u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        if (branch_taken_0x12dc2c) {
            ctx->pc = 0x12DC84u;
            goto label_12dc84;
        }
    }
    ctx->pc = 0x12DC34u;
    // 0x12dc34: 0x40482d
    ctx->pc = 0x12dc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12dc38:
    // 0x12dc38: 0x2271821
    ctx->pc = 0x12dc38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x12dc3c: 0x24e70001
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x12dc40: 0x80620000
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12dc44: 0xf0302a
    ctx->pc = 0x12dc44u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x12dc48: 0x21040
    ctx->pc = 0x12dc48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x12dc4c: 0x491021
    ctx->pc = 0x12dc4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x12dc50: 0x84430100
    ctx->pc = 0x12dc50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12dc54: 0x831818
    ctx->pc = 0x12dc54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12dc58: 0x28640000
    ctx->pc = 0x12dc58u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 0));
    // 0x12dc5c: 0x246503ff
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x12dc60: 0x60102d
    ctx->pc = 0x12dc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc64: 0xa4100b
    ctx->pc = 0x12dc64u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x12dc68: 0x21283
    ctx->pc = 0x12dc68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12dc6c: 0x21280
    ctx->pc = 0x12dc6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x12dc70: 0x621823
    ctx->pc = 0x12dc70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12dc74: 0x31840
    ctx->pc = 0x12dc74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x12dc78: 0x691821
    ctx->pc = 0x12dc78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12dc7c: 0x14c0ffee
    ctx->pc = 0x12DC7Cu;
    {
        const bool branch_taken_0x12dc7c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DC80u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x12dc7c) {
            ctx->pc = 0x12DC38u;
            goto label_12dc38;
        }
    }
    ctx->pc = 0x12DC84u;
label_12dc84:
    // 0x12dc84: 0xa64a0000
    ctx->pc = 0x12dc84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x12dc88: 0x102d
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc8c: 0xa6680000
    ctx->pc = 0x12dc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x12dc90: 0xa6840000
    ctx->pc = 0x12dc90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_12dc94:
    // 0x12dc94: 0xdfb00000
    ctx->pc = 0x12dc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc98: 0xdfb10008
    ctx->pc = 0x12dc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dc9c: 0xdfb20010
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dca0: 0xdfb30018
    ctx->pc = 0x12dca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dca4: 0xdfb40020
    ctx->pc = 0x12dca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dca8: 0xdfbf0028
    ctx->pc = 0x12dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12dcac: 0x3e00008
    ctx->pc = 0x12DCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DCB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB00u: goto label_12db00;
            case 0x12DB44u: goto label_12db44;
            case 0x12DB5Cu: goto label_12db5c;
            case 0x12DB78u: goto label_12db78;
            case 0x12DBCCu: goto label_12dbcc;
            case 0x12DBD8u: goto label_12dbd8;
            case 0x12DC24u: goto label_12dc24;
            case 0x12DC38u: goto label_12dc38;
            case 0x12DC84u: goto label_12dc84;
            case 0x12DC94u: goto label_12dc94;
            case 0x12DCECu: goto label_12dcec;
            case 0x12DD08u: goto label_12dd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DCB4u;
    // 0x12dcb4: 0x0
    ctx->pc = 0x12dcb4u;
    // NOP
    // 0x12dcb8: 0x3c020022
    ctx->pc = 0x12dcb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x12dcbc: 0x27bdffe0
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dcc0: 0x8c438748
    ctx->pc = 0x12dcc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936392)));
    // 0x12dcc4: 0xffb00000
    ctx->pc = 0x12dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dcc8: 0x80802d
    ctx->pc = 0x12dcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dccc: 0xffb10008
    ctx->pc = 0x12dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dcd0: 0xa0882d
    ctx->pc = 0x12dcd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcd4: 0xffb20010
    ctx->pc = 0x12dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dcd8: 0xc0902d
    ctx->pc = 0x12dcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcdc: 0x14600003
    ctx->pc = 0x12DCDCu;
    {
        const bool branch_taken_0x12dcdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DCE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x12dcdc) {
            ctx->pc = 0x12DCECu;
            goto label_12dcec;
        }
    }
    ctx->pc = 0x12DCE4u;
    // 0x12dce4: 0xc04b6b0
    ctx->pc = 0x12DCE4u;
    SET_GPR_U32(ctx, 31, 0x12DCECu);
    ctx->pc = 0x12DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAC0_0x12dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DCECu; }
    }
    if (ctx->pc != 0x12DCECu) { return; }
    ctx->pc = 0x12DCECu;
label_12dcec:
    // 0x12dcec: 0x3c040024
    ctx->pc = 0x12dcecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12dcf0: 0x200302d
    ctx->pc = 0x12dcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf4: 0x220382d
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf8: 0x240402d
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcfc: 0x2484ad98
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946200));
    // 0x12dd00: 0xc04b6c0
    ctx->pc = 0x12DD00u;
    SET_GPR_U32(ctx, 31, 0x12DD08u);
    ctx->pc = 0x12DD04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x12DB00u;
    goto label_12db00;
    ctx->pc = 0x12DD08u;
label_12dd08:
    // 0x12dd08: 0x102d
    ctx->pc = 0x12dd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd0c: 0xdfb00000
    ctx->pc = 0x12dd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd10: 0xdfb10008
    ctx->pc = 0x12dd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dd14: 0xdfb20010
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd18: 0xdfbf0018
    ctx->pc = 0x12dd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dd1c: 0x3e00008
    ctx->pc = 0x12DD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB00u: goto label_12db00;
            case 0x12DB44u: goto label_12db44;
            case 0x12DB5Cu: goto label_12db5c;
            case 0x12DB78u: goto label_12db78;
            case 0x12DBCCu: goto label_12dbcc;
            case 0x12DBD8u: goto label_12dbd8;
            case 0x12DC24u: goto label_12dc24;
            case 0x12DC38u: goto label_12dc38;
            case 0x12DC84u: goto label_12dc84;
            case 0x12DC94u: goto label_12dc94;
            case 0x12DCECu: goto label_12dcec;
            case 0x12DD08u: goto label_12dd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD24u;
    // 0x12dd24: 0x0
    ctx->pc = 0x12dd24u;
    // NOP
    // 0x12dd28: 0x94a70000
    ctx->pc = 0x12dd28u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12dd2c: 0x102d
    ctx->pc = 0x12dd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd30: 0x94850000
    ctx->pc = 0x12dd30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12dd34: 0x94c30000
    ctx->pc = 0x12dd34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12dd38: 0xa72818
    ctx->pc = 0x12dd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x12dd3c: 0x651821
    ctx->pc = 0x12dd3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12dd40: 0x3e00008
    ctx->pc = 0x12DD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD44u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB00u: goto label_12db00;
            case 0x12DB44u: goto label_12db44;
            case 0x12DB5Cu: goto label_12db5c;
            case 0x12DB78u: goto label_12db78;
            case 0x12DBCCu: goto label_12dbcc;
            case 0x12DBD8u: goto label_12dbd8;
            case 0x12DC24u: goto label_12dc24;
            case 0x12DC38u: goto label_12dc38;
            case 0x12DC84u: goto label_12dc84;
            case 0x12DC94u: goto label_12dc94;
            case 0x12DCECu: goto label_12dcec;
            case 0x12DD08u: goto label_12dd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD48u;
    // 0x12dd48: 0x3e00008
    ctx->pc = 0x12DD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB00u: goto label_12db00;
            case 0x12DB44u: goto label_12db44;
            case 0x12DB5Cu: goto label_12db5c;
            case 0x12DB78u: goto label_12db78;
            case 0x12DBCCu: goto label_12dbcc;
            case 0x12DBD8u: goto label_12dbd8;
            case 0x12DC24u: goto label_12dc24;
            case 0x12DC38u: goto label_12dc38;
            case 0x12DC84u: goto label_12dc84;
            case 0x12DC94u: goto label_12dc94;
            case 0x12DCECu: goto label_12dcec;
            case 0x12DD08u: goto label_12dd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD50u;
    // 0x12dd50: 0x3c020024
    ctx->pc = 0x12dd50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x12dd54: 0x3e00008
    ctx->pc = 0x12DD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946264));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB00u: goto label_12db00;
            case 0x12DB44u: goto label_12db44;
            case 0x12DB5Cu: goto label_12db5c;
            case 0x12DB78u: goto label_12db78;
            case 0x12DBCCu: goto label_12dbcc;
            case 0x12DBD8u: goto label_12dbd8;
            case 0x12DC24u: goto label_12dc24;
            case 0x12DC38u: goto label_12dc38;
            case 0x12DC84u: goto label_12dc84;
            case 0x12DC94u: goto label_12dc94;
            case 0x12DCECu: goto label_12dcec;
            case 0x12DD08u: goto label_12dd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD5Cu;
    // 0x12dd5c: 0x0
    ctx->pc = 0x12dd5cu;
    // NOP
}
