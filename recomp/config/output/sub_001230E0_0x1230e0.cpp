#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001230E0
// Address: 0x1230e0 - 0x123470
void sub_001230E0_0x1230e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1230e0u;

    // 0x1230e0: 0x27bdffd0
    ctx->pc = 0x1230e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1230e4: 0x80c02d
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230e8: 0xffb00000
    ctx->pc = 0x1230e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1230ec: 0x3c104d52
    ctx->pc = 0x1230ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)19794 << 16));
    // 0x1230f0: 0xffb10008
    ctx->pc = 0x1230f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1230f4: 0x3c1100ff
    ctx->pc = 0x1230f4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)255 << 16));
    // 0x1230f8: 0xffb20010
    ctx->pc = 0x1230f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1230fc: 0x100902d
    ctx->pc = 0x1230fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123100: 0xffb30018
    ctx->pc = 0x123100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123104: 0xe0982d
    ctx->pc = 0x123104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123108: 0xffb40020
    ctx->pc = 0x123108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12310c: 0xc0a02d
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123110: 0xffb50028
    ctx->pc = 0x123110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x123114: 0xa0a82d
    ctx->pc = 0x123114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123118: 0x36104f46
    ctx->pc = 0x123118u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 20294));
    // 0x12311c: 0x930f0000
    ctx->pc = 0x12311cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123120: 0x930e0003
    ctx->pc = 0x123120u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x123124: 0x930c0002
    ctx->pc = 0x123124u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x123128: 0x930d0001
    ctx->pc = 0x123128u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x12312c: 0x27180004
    ctx->pc = 0x12312cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x123130: 0x93050003
    ctx->pc = 0x123130u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x123134: 0xe7600
    ctx->pc = 0x123134u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 24));
    // 0x123138: 0x93030002
    ctx->pc = 0x123138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x12313c: 0xd6a00
    ctx->pc = 0x12313cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x123140: 0x93040001
    ctx->pc = 0x123140u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x123144: 0x52e00
    ctx->pc = 0x123144u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x123148: 0x93020000
    ctx->pc = 0x123148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x12314c: 0x27180004
    ctx->pc = 0x12314cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x123150: 0x42200
    ctx->pc = 0x123150u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x123154: 0x31c00
    ctx->pc = 0x123154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x123158: 0x451025
    ctx->pc = 0x123158u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12315c: 0x93050002
    ctx->pc = 0x12315cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x123160: 0x641825
    ctx->pc = 0x123160u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123164: 0x930b0003
    ctx->pc = 0x123164u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x123168: 0x43c825
    ctx->pc = 0x123168u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12316c: 0x930a0001
    ctx->pc = 0x12316cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x123170: 0x191a03
    ctx->pc = 0x123170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x123174: 0x192602
    ctx->pc = 0x123174u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 25), 24));
    // 0x123178: 0x191200
    ctx->pc = 0x123178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 8));
    // 0x12317c: 0x93090000
    ctx->pc = 0x12317cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123180: 0xc6400
    ctx->pc = 0x123180u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
    // 0x123184: 0x3063ff00
    ctx->pc = 0x123184u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x123188: 0x511024
    ctx->pc = 0x123188u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12318c: 0x882d
    ctx->pc = 0x12318cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123190: 0x1ee7825
    ctx->pc = 0x123190u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123194: 0x702d
    ctx->pc = 0x123194u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123198: 0x18d6025
    ctx->pc = 0x123198u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x12319c: 0x682d
    ctx->pc = 0x12319cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a0: 0x832025
    ctx->pc = 0x1231a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1231a4: 0xb5e00
    ctx->pc = 0x1231a4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 24));
    // 0x1231a8: 0x52c00
    ctx->pc = 0x1231a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1231ac: 0xa5200
    ctx->pc = 0x1231acu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 8));
    // 0x1231b0: 0x822025
    ctx->pc = 0x1231b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1231b4: 0x191600
    ctx->pc = 0x1231b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 24));
    // 0x1231b8: 0x12b4825
    ctx->pc = 0x1231b8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1231bc: 0xaa2825
    ctx->pc = 0x1231bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1231c0: 0x1ec7825
    ctx->pc = 0x1231c0u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1231c4: 0x82c825
    ctx->pc = 0x1231c4u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1231c8: 0x1254825
    ctx->pc = 0x1231c8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1231cc: 0x27180004
    ctx->pc = 0x1231ccu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x1231d0: 0x15f0009e
    ctx->pc = 0x1231D0u;
    {
        const bool branch_taken_0x1231d0 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 16));
        ctx->pc = 0x1231D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1231d0) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x1231D8u;
    // 0x1231d8: 0x3c024646
    ctx->pc = 0x1231d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17990 << 16));
    // 0x1231dc: 0x34424941
    ctx->pc = 0x1231dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 18753));
    // 0x1231e0: 0x51220003
    ctx->pc = 0x1231E0u;
    {
        const bool branch_taken_0x1231e0 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 2));
        if (branch_taken_0x1231e0) {
            ctx->pc = 0x1231E4u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
            ctx->pc = 0x1231F0u;
            goto label_1231f0;
        }
    }
    ctx->pc = 0x1231E8u;
    // 0x1231e8: 0x10000098
    ctx->pc = 0x1231E8u;
    {
        const bool branch_taken_0x1231e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1231ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1231e8) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x1231F0u;
label_1231f0:
    // 0x1231f0: 0x244bfffc
    ctx->pc = 0x1231f0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1231f4: 0x30b182b
    ctx->pc = 0x1231f4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x1231f8: 0x10600094
    ctx->pc = 0x1231F8u;
    {
        const bool branch_taken_0x1231f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1231FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1231f8) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x123200u;
    // 0x123200: 0x3c0c00ff
    ctx->pc = 0x123200u;
    SET_GPR_U32(ctx, 12, ((uint32_t)255 << 16));
    // 0x123204: 0x2410ff00
    ctx->pc = 0x123204u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x123208: 0x93090000
    ctx->pc = 0x123208u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x12320c: 0x0
    ctx->pc = 0x12320cu;
    // NOP
label_123210:
    // 0x123210: 0x3c0a444e
    ctx->pc = 0x123210u;
    SET_GPR_U32(ctx, 10, ((uint32_t)17486 << 16));
    // 0x123214: 0x93080003
    ctx->pc = 0x123214u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x123218: 0x354a5353
    ctx->pc = 0x123218u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 21331));
    // 0x12321c: 0x93060002
    ctx->pc = 0x12321cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x123220: 0x93070001
    ctx->pc = 0x123220u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x123224: 0x27180004
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x123228: 0x93050003
    ctx->pc = 0x123228u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x12322c: 0x84600
    ctx->pc = 0x12322cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 24));
    // 0x123230: 0x93030002
    ctx->pc = 0x123230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x123234: 0x63400
    ctx->pc = 0x123234u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x123238: 0x93040001
    ctx->pc = 0x123238u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x12323c: 0x52e00
    ctx->pc = 0x12323cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x123240: 0x93020000
    ctx->pc = 0x123240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123244: 0x27180004
    ctx->pc = 0x123244u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x123248: 0x42200
    ctx->pc = 0x123248u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x12324c: 0x31c00
    ctx->pc = 0x12324cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x123250: 0x641825
    ctx->pc = 0x123250u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123254: 0x451025
    ctx->pc = 0x123254u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x123258: 0x43c825
    ctx->pc = 0x123258u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12325c: 0x73a00
    ctx->pc = 0x12325cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x123260: 0x191a03
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x123264: 0x192602
    ctx->pc = 0x123264u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 25), 24));
    // 0x123268: 0x191200
    ctx->pc = 0x123268u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 8));
    // 0x12326c: 0x3063ff00
    ctx->pc = 0x12326cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x123270: 0x4c1024
    ctx->pc = 0x123270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x123274: 0x1284825
    ctx->pc = 0x123274u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x123278: 0xc73025
    ctx->pc = 0x123278u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12327c: 0x832025
    ctx->pc = 0x12327cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x123280: 0x822025
    ctx->pc = 0x123280u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123284: 0x191600
    ctx->pc = 0x123284u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 24));
    // 0x123288: 0x1267825
    ctx->pc = 0x123288u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x12328c: 0x11ea004c
    ctx->pc = 0x12328Cu;
    {
        const bool branch_taken_0x12328c = (GPR_U32(ctx, 15) == GPR_U32(ctx, 10));
        ctx->pc = 0x123290u;
        SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x12328c) {
            ctx->pc = 0x1233C0u;
            goto label_1233c0;
        }
    }
    ctx->pc = 0x123294u;
    // 0x123294: 0x3c024d4d
    ctx->pc = 0x123294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)19789 << 16));
    // 0x123298: 0x34424f43
    ctx->pc = 0x123298u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20291));
    // 0x12329c: 0x15e20064
    ctx->pc = 0x12329Cu;
    {
        const bool branch_taken_0x12329c = (GPR_U32(ctx, 15) != GPR_U32(ctx, 2));
        ctx->pc = 0x1232A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 25), 1));
        if (branch_taken_0x12329c) {
            ctx->pc = 0x123430u;
            goto label_123430;
        }
    }
    ctx->pc = 0x1232A4u;
    // 0x1232a4: 0x15a00066
    ctx->pc = 0x1232A4u;
    {
        const bool branch_taken_0x1232a4 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x1232A8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
        if (branch_taken_0x1232a4) {
            ctx->pc = 0x123440u;
            goto label_123440;
        }
    }
    ctx->pc = 0x1232ACu;
    // 0x1232ac: 0x2b220012
    ctx->pc = 0x1232acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), 18));
    // 0x1232b0: 0x14400066
    ctx->pc = 0x1232B0u;
    {
        const bool branch_taken_0x1232b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1232B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1232b0) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x1232B8u;
    // 0x1232b8: 0x93040001
    ctx->pc = 0x1232b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1232bc: 0x2406400e
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16398));
    // 0x1232c0: 0x93020000
    ctx->pc = 0x1232c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1232c4: 0x27180002
    ctx->pc = 0x1232c4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x1232c8: 0x42200
    ctx->pc = 0x1232c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1232cc: 0x240d0001
    ctx->pc = 0x1232ccu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1232d0: 0x441025
    ctx->pc = 0x1232d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1232d4: 0x21a00
    ctx->pc = 0x1232d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1232d8: 0x21202
    ctx->pc = 0x1232d8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1232dc: 0x3063ff00
    ctx->pc = 0x1232dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x1232e0: 0x431025
    ctx->pc = 0x1232e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1232e4: 0xae820000
    ctx->pc = 0x1232e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1232e8: 0x93050003
    ctx->pc = 0x1232e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1232ec: 0x93020002
    ctx->pc = 0x1232ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1232f0: 0x93040001
    ctx->pc = 0x1232f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1232f4: 0x52e00
    ctx->pc = 0x1232f4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1232f8: 0x93030000
    ctx->pc = 0x1232f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1232fc: 0x27180004
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x123300: 0x42200
    ctx->pc = 0x123300u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x123304: 0x21400
    ctx->pc = 0x123304u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x123308: 0x441025
    ctx->pc = 0x123308u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12330c: 0x651825
    ctx->pc = 0x12330cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x123310: 0x621825
    ctx->pc = 0x123310u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123314: 0x32a03
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x123318: 0x32200
    ctx->pc = 0x123318u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x12331c: 0x30a5ff00
    ctx->pc = 0x12331cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x123320: 0x31602
    ctx->pc = 0x123320u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 24));
    // 0x123324: 0x8c2024
    ctx->pc = 0x123324u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x123328: 0x31e00
    ctx->pc = 0x123328u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x12332c: 0x852025
    ctx->pc = 0x12332cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x123330: 0x431025
    ctx->pc = 0x123330u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123334: 0x441025
    ctx->pc = 0x123334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x123338: 0xae420000
    ctx->pc = 0x123338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12333c: 0x93040001
    ctx->pc = 0x12333cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x123340: 0x93020000
    ctx->pc = 0x123340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123344: 0x27180002
    ctx->pc = 0x123344u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x123348: 0x42200
    ctx->pc = 0x123348u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x12334c: 0x441025
    ctx->pc = 0x12334cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x123350: 0x21a00
    ctx->pc = 0x123350u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x123354: 0x21202
    ctx->pc = 0x123354u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x123358: 0x3063ff00
    ctx->pc = 0x123358u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x12335c: 0x431025
    ctx->pc = 0x12335cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123360: 0xae620000
    ctx->pc = 0x123360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x123364: 0x93050000
    ctx->pc = 0x123364u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123368: 0x93040001
    ctx->pc = 0x123368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x12336c: 0x27180002
    ctx->pc = 0x12336cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x123370: 0x93030001
    ctx->pc = 0x123370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x123374: 0x93020000
    ctx->pc = 0x123374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x123378: 0x27180008
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 8));
    // 0x12337c: 0x31a00
    ctx->pc = 0x12337cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x123380: 0x42200
    ctx->pc = 0x123380u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x123384: 0x431025
    ctx->pc = 0x123384u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123388: 0xa42825
    ctx->pc = 0x123388u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12338c: 0x21a00
    ctx->pc = 0x12338cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x123390: 0x21202
    ctx->pc = 0x123390u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x123394: 0x701824
    ctx->pc = 0x123394u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x123398: 0x52a02
    ctx->pc = 0x123398u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 8));
    // 0x12339c: 0x431025
    ctx->pc = 0x12339cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1233a0: 0xc53023
    ctx->pc = 0x1233a0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1233a4: 0x3042ffff
    ctx->pc = 0x1233a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1233a8: 0xc21007
    ctx->pc = 0x1233a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1233ac: 0x11c00023
    ctx->pc = 0x1233ACu;
    {
        const bool branch_taken_0x1233ac = (GPR_U32(ctx, 14) == GPR_U32(ctx, 0));
        ctx->pc = 0x1233B0u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1233ac) {
            ctx->pc = 0x12343Cu;
            goto label_12343c;
        }
    }
    ctx->pc = 0x1233B4u;
    // 0x1233b4: 0x10000025
    ctx->pc = 0x1233B4u;
    {
        const bool branch_taken_0x1233b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1233B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1233b4) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x1233BCu;
    // 0x1233bc: 0x0
    ctx->pc = 0x1233bcu;
    // NOP
label_1233c0:
    // 0x1233c0: 0x15c0001f
    ctx->pc = 0x1233C0u;
    {
        const bool branch_taken_0x1233c0 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        ctx->pc = 0x1233C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
        if (branch_taken_0x1233c0) {
            ctx->pc = 0x123440u;
            goto label_123440;
        }
    }
    ctx->pc = 0x1233C8u;
    // 0x1233c8: 0x93050003
    ctx->pc = 0x1233c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1233cc: 0x240e0001
    ctx->pc = 0x1233ccu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1233d0: 0x93020002
    ctx->pc = 0x1233d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1233d4: 0x93040001
    ctx->pc = 0x1233d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1233d8: 0x52e00
    ctx->pc = 0x1233d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1233dc: 0x93030000
    ctx->pc = 0x1233dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1233e0: 0x27180004
    ctx->pc = 0x1233e0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x1233e4: 0x42200
    ctx->pc = 0x1233e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1233e8: 0x21400
    ctx->pc = 0x1233e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1233ec: 0x651825
    ctx->pc = 0x1233ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1233f0: 0x441025
    ctx->pc = 0x1233f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1233f4: 0x621025
    ctx->pc = 0x1233f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1233f8: 0x22a02
    ctx->pc = 0x1233f8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1233fc: 0x22200
    ctx->pc = 0x1233fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x123400: 0x21e02
    ctx->pc = 0x123400u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 24));
    // 0x123404: 0x21600
    ctx->pc = 0x123404u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x123408: 0x8c2024
    ctx->pc = 0x123408u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x12340c: 0x30a5ff00
    ctx->pc = 0x12340cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x123410: 0x621825
    ctx->pc = 0x123410u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123414: 0x852025
    ctx->pc = 0x123414u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x123418: 0x641025
    ctx->pc = 0x123418u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12341c: 0x11a00007
    ctx->pc = 0x12341Cu;
    {
        const bool branch_taken_0x12341c = (GPR_U32(ctx, 13) == GPR_U32(ctx, 0));
        ctx->pc = 0x123420u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        if (branch_taken_0x12341c) {
            ctx->pc = 0x12343Cu;
            goto label_12343c;
        }
    }
    ctx->pc = 0x123424u;
    // 0x123424: 0x10000009
    ctx->pc = 0x123424u;
    {
        const bool branch_taken_0x123424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123428u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123424) {
            ctx->pc = 0x12344Cu;
            goto label_12344c;
        }
    }
    ctx->pc = 0x12342Cu;
    // 0x12342c: 0x0
    ctx->pc = 0x12342cu;
    // NOP
label_123430:
    // 0x123430: 0x2403fffe
    ctx->pc = 0x123430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123434: 0x431024
    ctx->pc = 0x123434u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123438: 0x302c021
    ctx->pc = 0x123438u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_12343c:
    // 0x12343c: 0x30b102b
    ctx->pc = 0x12343cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
label_123440:
    // 0x123440: 0x5440ff73
    ctx->pc = 0x123440u;
    {
        const bool branch_taken_0x123440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x123440) {
            ctx->pc = 0x123444u;
            SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->pc = 0x123210u;
            goto label_123210;
        }
    }
    ctx->pc = 0x123448u;
    // 0x123448: 0x220102d
    ctx->pc = 0x123448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12344c:
    // 0x12344c: 0xdfb00000
    ctx->pc = 0x12344cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123450: 0xdfb10008
    ctx->pc = 0x123450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123454: 0xdfb20010
    ctx->pc = 0x123454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123458: 0xdfb30018
    ctx->pc = 0x123458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12345c: 0xdfb40020
    ctx->pc = 0x12345cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123460: 0xdfb50028
    ctx->pc = 0x123460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123464: 0x3e00008
    ctx->pc = 0x123464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1231F0u: goto label_1231f0;
            case 0x123210u: goto label_123210;
            case 0x1233C0u: goto label_1233c0;
            case 0x123430u: goto label_123430;
            case 0x12343Cu: goto label_12343c;
            case 0x123440u: goto label_123440;
            case 0x12344Cu: goto label_12344c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12346Cu;
    // 0x12346c: 0x0
    ctx->pc = 0x12346cu;
    // NOP
}
