#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EB064
// Address: 0x1eb064 - 0x1eb368
void sub_001EB064_0x1eb064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1eb064u;

    // 0x1eb064: 0x27bdffc0
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb068: 0xffbe0030
    ctx->pc = 0x1eb068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1eb06c: 0xffbf0038
    ctx->pc = 0x1eb06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1eb070: 0x3a0f02d
    ctx->pc = 0x1eb070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb074: 0xafc40000
    ctx->pc = 0x1eb074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1eb078: 0xafc50004
    ctx->pc = 0x1eb078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1eb07c: 0xafc60008
    ctx->pc = 0x1eb07cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1eb080: 0xafc0000c
    ctx->pc = 0x1eb080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1eb084:
    // 0x1eb084: 0x8fc2000c
    ctx->pc = 0x1eb084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb088: 0x28420004
    ctx->pc = 0x1eb088u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1eb08c: 0x14400003
    ctx->pc = 0x1EB08Cu;
    {
        const bool branch_taken_0x1eb08c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb08c) {
            ctx->pc = 0x1EB09Cu;
            goto label_1eb09c;
        }
    }
    ctx->pc = 0x1EB094u;
    // 0x1eb094: 0x10000023
    ctx->pc = 0x1EB094u;
    {
        const bool branch_taken_0x1eb094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb094) {
            ctx->pc = 0x1EB124u;
            goto label_1eb124;
        }
    }
    ctx->pc = 0x1EB09Cu;
label_1eb09c:
    // 0x1eb09c: 0xafc00010
    ctx->pc = 0x1eb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_1eb0a0:
    // 0x1eb0a0: 0x8fc20010
    ctx->pc = 0x1eb0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb0a4: 0x28420100
    ctx->pc = 0x1eb0a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x1eb0a8: 0x14400006
    ctx->pc = 0x1EB0A8u;
    {
        const bool branch_taken_0x1eb0a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb0a8) {
            ctx->pc = 0x1EB0C4u;
            goto label_1eb0c4;
        }
    }
    ctx->pc = 0x1EB0B0u;
    // 0x1eb0b0: 0x8fc2000c
    ctx->pc = 0x1eb0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb0b4: 0x24420001
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb0b8: 0xafc2000c
    ctx->pc = 0x1eb0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eb0bc: 0x1000fff1
    ctx->pc = 0x1EB0BCu;
    {
        const bool branch_taken_0x1eb0bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb0bc) {
            ctx->pc = 0x1EB084u;
            goto label_1eb084;
        }
    }
    ctx->pc = 0x1EB0C4u;
label_1eb0c4:
    // 0x1eb0c4: 0x8fc40000
    ctx->pc = 0x1eb0c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb0c8: 0x8fc2000c
    ctx->pc = 0x1eb0c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb0cc: 0x21a00
    ctx->pc = 0x1eb0ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1eb0d0: 0x8fc20010
    ctx->pc = 0x1eb0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb0d4: 0x621021
    ctx->pc = 0x1eb0d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb0d8: 0x21080
    ctx->pc = 0x1eb0d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb0dc: 0x24430040
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 64));
    // 0x1eb0e0: 0x24820008
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eb0e4: 0x432021
    ctx->pc = 0x1eb0e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb0e8: 0x8fc2000c
    ctx->pc = 0x1eb0e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb0ec: 0x21a00
    ctx->pc = 0x1eb0ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1eb0f0: 0x8fc20010
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb0f4: 0x621021
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb0f8: 0x21880
    ctx->pc = 0x1eb0f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb0fc: 0x3c020026
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1eb100: 0x244281b8
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934968));
    // 0x1eb104: 0x431021
    ctx->pc = 0x1eb104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb108: 0x8c420000
    ctx->pc = 0x1eb108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb10c: 0xac820000
    ctx->pc = 0x1eb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1eb110: 0x8fc20010
    ctx->pc = 0x1eb110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb114: 0x24420001
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb118: 0xafc20010
    ctx->pc = 0x1eb118u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eb11c: 0x1000ffe0
    ctx->pc = 0x1EB11Cu;
    {
        const bool branch_taken_0x1eb11c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb11c) {
            ctx->pc = 0x1EB0A0u;
            goto label_1eb0a0;
        }
    }
    ctx->pc = 0x1EB124u;
label_1eb124:
    // 0x1eb124: 0xafc00010
    ctx->pc = 0x1eb124u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x1eb128: 0xafc0000c
    ctx->pc = 0x1eb128u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1eb12c:
    // 0x1eb12c: 0x8fc2000c
    ctx->pc = 0x1eb12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb130: 0x28420012
    ctx->pc = 0x1eb130u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 18));
    // 0x1eb134: 0x14400003
    ctx->pc = 0x1EB134u;
    {
        const bool branch_taken_0x1eb134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb134) {
            ctx->pc = 0x1EB144u;
            goto label_1eb144;
        }
    }
    ctx->pc = 0x1EB13Cu;
    // 0x1eb13c: 0x1000002f
    ctx->pc = 0x1EB13Cu;
    {
        const bool branch_taken_0x1eb13c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb13c) {
            ctx->pc = 0x1EB1FCu;
            goto label_1eb1fc;
        }
    }
    ctx->pc = 0x1EB144u;
label_1eb144:
    // 0x1eb144: 0xafc00018
    ctx->pc = 0x1eb144u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x1eb148: 0xafc00014
    ctx->pc = 0x1eb148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_1eb14c:
    // 0x1eb14c: 0x8fc20014
    ctx->pc = 0x1eb14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb150: 0x28420004
    ctx->pc = 0x1eb150u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1eb154: 0x14400013
    ctx->pc = 0x1EB154u;
    {
        const bool branch_taken_0x1eb154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb154) {
            ctx->pc = 0x1EB1A4u;
            goto label_1eb1a4;
        }
    }
    ctx->pc = 0x1EB15Cu;
    // 0x1eb15c: 0x8fc30000
    ctx->pc = 0x1eb15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb160: 0x8fc2000c
    ctx->pc = 0x1eb160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb164: 0x21080
    ctx->pc = 0x1eb164u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb168: 0x622021
    ctx->pc = 0x1eb168u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb16c: 0x8fc2000c
    ctx->pc = 0x1eb16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb170: 0x21880
    ctx->pc = 0x1eb170u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb174: 0x3c020026
    ctx->pc = 0x1eb174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1eb178: 0x24428170
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1eb17c: 0x431021
    ctx->pc = 0x1eb17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb180: 0x8c430000
    ctx->pc = 0x1eb180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb184: 0x8fc20018
    ctx->pc = 0x1eb184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eb188: 0x621026
    ctx->pc = 0x1eb188u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb18c: 0xac820000
    ctx->pc = 0x1eb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1eb190: 0x8fc2000c
    ctx->pc = 0x1eb190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb194: 0x24420001
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb198: 0xafc2000c
    ctx->pc = 0x1eb198u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eb19c: 0x1000ffe3
    ctx->pc = 0x1EB19Cu;
    {
        const bool branch_taken_0x1eb19c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb19c) {
            ctx->pc = 0x1EB12Cu;
            goto label_1eb12c;
        }
    }
    ctx->pc = 0x1EB1A4u;
label_1eb1a4:
    // 0x1eb1a4: 0x8fc20018
    ctx->pc = 0x1eb1a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eb1a8: 0x22200
    ctx->pc = 0x1eb1a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1eb1ac: 0x8fc30004
    ctx->pc = 0x1eb1acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eb1b0: 0x8fc20010
    ctx->pc = 0x1eb1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb1b4: 0x621021
    ctx->pc = 0x1eb1b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb1b8: 0x90420000
    ctx->pc = 0x1eb1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb1bc: 0x821025
    ctx->pc = 0x1eb1bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eb1c0: 0xafc20018
    ctx->pc = 0x1eb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1eb1c4: 0x8fc20010
    ctx->pc = 0x1eb1c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb1c8: 0x24420001
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb1cc: 0xafc20010
    ctx->pc = 0x1eb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eb1d0: 0x8fc30010
    ctx->pc = 0x1eb1d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb1d4: 0x8fc20008
    ctx->pc = 0x1eb1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eb1d8: 0x62102a
    ctx->pc = 0x1eb1d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1eb1dc: 0x14400002
    ctx->pc = 0x1EB1DCu;
    {
        const bool branch_taken_0x1eb1dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb1dc) {
            ctx->pc = 0x1EB1E8u;
            goto label_1eb1e8;
        }
    }
    ctx->pc = 0x1EB1E4u;
    // 0x1eb1e4: 0xafc00010
    ctx->pc = 0x1eb1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_1eb1e8:
    // 0x1eb1e8: 0x8fc20014
    ctx->pc = 0x1eb1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb1ec: 0x24420001
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb1f0: 0xafc20014
    ctx->pc = 0x1eb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1eb1f4: 0x1000ffd5
    ctx->pc = 0x1EB1F4u;
    {
        const bool branch_taken_0x1eb1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb1f4) {
            ctx->pc = 0x1EB14Cu;
            goto label_1eb14c;
        }
    }
    ctx->pc = 0x1EB1FCu;
label_1eb1fc:
    // 0x1eb1fc: 0xafc0001c
    ctx->pc = 0x1eb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
    // 0x1eb200: 0xafc00020
    ctx->pc = 0x1eb200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x1eb204: 0xafc0000c
    ctx->pc = 0x1eb204u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1eb208:
    // 0x1eb208: 0x8fc2000c
    ctx->pc = 0x1eb208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb20c: 0x28420012
    ctx->pc = 0x1eb20cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 18));
    // 0x1eb210: 0x14400003
    ctx->pc = 0x1EB210u;
    {
        const bool branch_taken_0x1eb210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb210) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB218u;
    // 0x1eb218: 0x1000001a
    ctx->pc = 0x1EB218u;
    {
        const bool branch_taken_0x1eb218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb218) {
            ctx->pc = 0x1EB284u;
            goto label_1eb284;
        }
    }
    ctx->pc = 0x1EB220u;
label_1eb220:
    // 0x1eb220: 0x27c2001c
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 28));
    // 0x1eb224: 0x27c30020
    ctx->pc = 0x1eb224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1eb228: 0x8fc40000
    ctx->pc = 0x1eb228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb22c: 0x40282d
    ctx->pc = 0x1eb22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb230: 0x60302d
    ctx->pc = 0x1eb230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb234: 0xc07ab82
    ctx->pc = 0x1EB234u;
    SET_GPR_U32(ctx, 31, 0x1EB23Cu);
    ctx->pc = 0x1EAE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAE08_0x1eae08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB23Cu; }
    }
    if (ctx->pc != 0x1EB23Cu) { return; }
    ctx->pc = 0x1EB23Cu;
    // 0x1eb23c: 0x8fc30000
    ctx->pc = 0x1eb23cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb240: 0x8fc2000c
    ctx->pc = 0x1eb240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb244: 0x21080
    ctx->pc = 0x1eb244u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb248: 0x621821
    ctx->pc = 0x1eb248u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb24c: 0x8fc2001c
    ctx->pc = 0x1eb24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb250: 0xac620000
    ctx->pc = 0x1eb250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb254: 0x8fc30000
    ctx->pc = 0x1eb254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb258: 0x8fc2000c
    ctx->pc = 0x1eb258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb25c: 0x21080
    ctx->pc = 0x1eb25cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb260: 0x24420004
    ctx->pc = 0x1eb260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eb264: 0x621821
    ctx->pc = 0x1eb264u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb268: 0x8fc20020
    ctx->pc = 0x1eb268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb26c: 0xac620000
    ctx->pc = 0x1eb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb270: 0x8fc2000c
    ctx->pc = 0x1eb270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb274: 0x24420002
    ctx->pc = 0x1eb274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1eb278: 0xafc2000c
    ctx->pc = 0x1eb278u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eb27c: 0x1000ffe2
    ctx->pc = 0x1EB27Cu;
    {
        const bool branch_taken_0x1eb27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb27c) {
            ctx->pc = 0x1EB208u;
            goto label_1eb208;
        }
    }
    ctx->pc = 0x1EB284u;
label_1eb284:
    // 0x1eb284: 0xafc0000c
    ctx->pc = 0x1eb284u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1eb288:
    // 0x1eb288: 0x8fc2000c
    ctx->pc = 0x1eb288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb28c: 0x28420004
    ctx->pc = 0x1eb28cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1eb290: 0x14400003
    ctx->pc = 0x1EB290u;
    {
        const bool branch_taken_0x1eb290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb290) {
            ctx->pc = 0x1EB2A0u;
            goto label_1eb2a0;
        }
    }
    ctx->pc = 0x1EB298u;
    // 0x1eb298: 0x1000002d
    ctx->pc = 0x1EB298u;
    {
        const bool branch_taken_0x1eb298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb298) {
            ctx->pc = 0x1EB350u;
            goto label_1eb350;
        }
    }
    ctx->pc = 0x1EB2A0u;
label_1eb2a0:
    // 0x1eb2a0: 0xafc00010
    ctx->pc = 0x1eb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_1eb2a4:
    // 0x1eb2a4: 0x8fc20010
    ctx->pc = 0x1eb2a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb2a8: 0x28420100
    ctx->pc = 0x1eb2a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x1eb2ac: 0x14400006
    ctx->pc = 0x1EB2ACu;
    {
        const bool branch_taken_0x1eb2ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb2ac) {
            ctx->pc = 0x1EB2C8u;
            goto label_1eb2c8;
        }
    }
    ctx->pc = 0x1EB2B4u;
    // 0x1eb2b4: 0x8fc2000c
    ctx->pc = 0x1eb2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb2b8: 0x24420001
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb2bc: 0xafc2000c
    ctx->pc = 0x1eb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1eb2c0: 0x1000fff1
    ctx->pc = 0x1EB2C0u;
    {
        const bool branch_taken_0x1eb2c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb2c0) {
            ctx->pc = 0x1EB288u;
            goto label_1eb288;
        }
    }
    ctx->pc = 0x1EB2C8u;
label_1eb2c8:
    // 0x1eb2c8: 0x27c2001c
    ctx->pc = 0x1eb2c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 28));
    // 0x1eb2cc: 0x27c30020
    ctx->pc = 0x1eb2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1eb2d0: 0x8fc40000
    ctx->pc = 0x1eb2d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb2d4: 0x40282d
    ctx->pc = 0x1eb2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2d8: 0x60302d
    ctx->pc = 0x1eb2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2dc: 0xc07ab82
    ctx->pc = 0x1EB2DCu;
    SET_GPR_U32(ctx, 31, 0x1EB2E4u);
    ctx->pc = 0x1EAE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAE08_0x1eae08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2E4u; }
    }
    if (ctx->pc != 0x1EB2E4u) { return; }
    ctx->pc = 0x1EB2E4u;
    // 0x1eb2e4: 0x8fc40000
    ctx->pc = 0x1eb2e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb2e8: 0x8fc2000c
    ctx->pc = 0x1eb2e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb2ec: 0x21a00
    ctx->pc = 0x1eb2ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1eb2f0: 0x8fc20010
    ctx->pc = 0x1eb2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb2f4: 0x621021
    ctx->pc = 0x1eb2f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb2f8: 0x21080
    ctx->pc = 0x1eb2f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb2fc: 0x24430040
    ctx->pc = 0x1eb2fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 64));
    // 0x1eb300: 0x24820008
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eb304: 0x431821
    ctx->pc = 0x1eb304u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb308: 0x8fc2001c
    ctx->pc = 0x1eb308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb30c: 0xac620000
    ctx->pc = 0x1eb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb310: 0x8fc40000
    ctx->pc = 0x1eb310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb314: 0x8fc2000c
    ctx->pc = 0x1eb314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb318: 0x21a00
    ctx->pc = 0x1eb318u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1eb31c: 0x8fc20010
    ctx->pc = 0x1eb31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb320: 0x621021
    ctx->pc = 0x1eb320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb324: 0x21080
    ctx->pc = 0x1eb324u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb328: 0x24430044
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 68));
    // 0x1eb32c: 0x24820008
    ctx->pc = 0x1eb32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1eb330: 0x431821
    ctx->pc = 0x1eb330u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb334: 0x8fc20020
    ctx->pc = 0x1eb334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb338: 0xac620000
    ctx->pc = 0x1eb338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb33c: 0x8fc20010
    ctx->pc = 0x1eb33cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1eb340: 0x24420002
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1eb344: 0xafc20010
    ctx->pc = 0x1eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1eb348: 0x1000ffd6
    ctx->pc = 0x1EB348u;
    {
        const bool branch_taken_0x1eb348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb348) {
            ctx->pc = 0x1EB2A4u;
            goto label_1eb2a4;
        }
    }
    ctx->pc = 0x1EB350u;
label_1eb350:
    // 0x1eb350: 0x3c0e82d
    ctx->pc = 0x1eb350u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb354: 0xdfbe0030
    ctx->pc = 0x1eb354u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb358: 0xdfbf0038
    ctx->pc = 0x1eb358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eb35c: 0x27bd0040
    ctx->pc = 0x1eb35cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb360: 0x3e00008
    ctx->pc = 0x1EB360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB084u: goto label_1eb084;
            case 0x1EB09Cu: goto label_1eb09c;
            case 0x1EB0A0u: goto label_1eb0a0;
            case 0x1EB0C4u: goto label_1eb0c4;
            case 0x1EB124u: goto label_1eb124;
            case 0x1EB12Cu: goto label_1eb12c;
            case 0x1EB144u: goto label_1eb144;
            case 0x1EB14Cu: goto label_1eb14c;
            case 0x1EB1A4u: goto label_1eb1a4;
            case 0x1EB1E8u: goto label_1eb1e8;
            case 0x1EB1FCu: goto label_1eb1fc;
            case 0x1EB208u: goto label_1eb208;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB284u: goto label_1eb284;
            case 0x1EB288u: goto label_1eb288;
            case 0x1EB2A0u: goto label_1eb2a0;
            case 0x1EB2A4u: goto label_1eb2a4;
            case 0x1EB2C8u: goto label_1eb2c8;
            case 0x1EB350u: goto label_1eb350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB368u;
}
