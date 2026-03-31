#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00110DC0
// Address: 0x110dc0 - 0x111328
void sub_00110DC0_0x110dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x110dc0u;

    // 0x110dc0: 0x27bdfff0
    ctx->pc = 0x110dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110dc4: 0x5483f
    ctx->pc = 0x110dc4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x110dc8: 0x4503f
    ctx->pc = 0x110dc8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x110dcc: 0x5383c
    ctx->pc = 0x110dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x110dd0: 0x7383f
    ctx->pc = 0x110dd0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x110dd4: 0x4683c
    ctx->pc = 0x110dd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x110dd8: 0xd683f
    ctx->pc = 0x110dd8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x110ddc: 0x152000b0
    ctx->pc = 0x110DDCu;
    {
        const bool branch_taken_0x110ddc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x110DE0u;
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x110ddc) {
            ctx->pc = 0x1110A0u;
            goto label_1110a0;
        }
    }
    ctx->pc = 0x110DE4u;
    // 0x110de4: 0x147102b
    ctx->pc = 0x110de4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x110de8: 0x1040001f
    ctx->pc = 0x110DE8u;
    {
        const bool branch_taken_0x110de8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x110DECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x110de8) {
            ctx->pc = 0x110E68u;
            goto label_110e68;
        }
    }
    ctx->pc = 0x110DF0u;
    // 0x110df0: 0x47102b
    ctx->pc = 0x110df0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x110df4: 0x14400006
    ctx->pc = 0x110DF4u;
    {
        const bool branch_taken_0x110df4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x110DF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
        if (branch_taken_0x110df4) {
            ctx->pc = 0x110E10u;
            goto label_110e10;
        }
    }
    ctx->pc = 0x110DFCu;
    // 0x110dfc: 0x2ce20100
    ctx->pc = 0x110dfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 256));
    // 0x110e00: 0x24040008
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x110e04: 0x10000007
    ctx->pc = 0x110E04u;
    {
        const bool branch_taken_0x110e04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110E08u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
        if (branch_taken_0x110e04) {
            ctx->pc = 0x110E24u;
            goto label_110e24;
        }
    }
    ctx->pc = 0x110E0Cu;
    // 0x110e0c: 0x0
    ctx->pc = 0x110e0cu;
    // NOP
label_110e10:
    // 0x110e10: 0x24030018
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x110e14: 0x3442ffff
    ctx->pc = 0x110e14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x110e18: 0x24040010
    ctx->pc = 0x110e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x110e1c: 0x47102b
    ctx->pc = 0x110e1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x110e20: 0x62200b
    ctx->pc = 0x110e20u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_110e24:
    // 0x110e24: 0x871806
    ctx->pc = 0x110e24u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x110e28: 0x24050020
    ctx->pc = 0x110e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x110e2c: 0x3c020024
    ctx->pc = 0x110e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x110e30: 0x431021
    ctx->pc = 0x110e30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110e34: 0x904284a0
    ctx->pc = 0x110e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935712)));
    // 0x110e38: 0x441021
    ctx->pc = 0x110e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x110e3c: 0xa26023
    ctx->pc = 0x110e3cu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110e40: 0x11800006
    ctx->pc = 0x110E40u;
    {
        const bool branch_taken_0x110e40 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x110E44u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        if (branch_taken_0x110e40) {
            ctx->pc = 0x110E5Cu;
            goto label_110e5c;
        }
    }
    ctx->pc = 0x110E48u;
    // 0x110e48: 0x18a1804
    ctx->pc = 0x110e48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x110e4c: 0x4d1006
    ctx->pc = 0x110e4cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x110e50: 0x18d6804
    ctx->pc = 0x110e50u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x110e54: 0x625025
    ctx->pc = 0x110e54u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110e58: 0x1873804
    ctx->pc = 0x110e58u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_110e5c:
    // 0x110e5c: 0x73402
    ctx->pc = 0x110e5cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 16));
    // 0x110e60: 0x10000059
    ctx->pc = 0x110E60u;
    {
        const bool branch_taken_0x110e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110E64u;
        SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 7), 65535));
        if (branch_taken_0x110e60) {
            ctx->pc = 0x110FC8u;
            goto label_110fc8;
        }
    }
    ctx->pc = 0x110E68u;
label_110e68:
    // 0x110e68: 0x14e00009
    ctx->pc = 0x110E68u;
    {
        const bool branch_taken_0x110e68 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x110E6Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        if (branch_taken_0x110e68) {
            ctx->pc = 0x110E90u;
            goto label_110e90;
        }
    }
    ctx->pc = 0x110E70u;
    // 0x110e70: 0x24020001
    ctx->pc = 0x110e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x110e74: 0x50e00001
    ctx->pc = 0x110E74u;
    {
        const bool branch_taken_0x110e74 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x110e74) {
            ctx->pc = 0x110E78u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x110E7Cu;
            goto label_110e7c;
        }
    }
    ctx->pc = 0x110E7Cu;
label_110e7c:
    // 0x110e7c: 0x49001b
    ctx->pc = 0x110e7cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 9) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x110e80: 0x1012
    ctx->pc = 0x110e80u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x110e84: 0x40382d
    ctx->pc = 0x110e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e88: 0x3402ffff
    ctx->pc = 0x110e88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x110e8c: 0x47102b
    ctx->pc = 0x110e8cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110e90:
    // 0x110e90: 0x14400005
    ctx->pc = 0x110E90u;
    {
        const bool branch_taken_0x110e90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x110E94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
        if (branch_taken_0x110e90) {
            ctx->pc = 0x110EA8u;
            goto label_110ea8;
        }
    }
    ctx->pc = 0x110E98u;
    // 0x110e98: 0x2ce20100
    ctx->pc = 0x110e98u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 256));
    // 0x110e9c: 0x24040008
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x110ea0: 0x10000006
    ctx->pc = 0x110EA0u;
    {
        const bool branch_taken_0x110ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110EA4u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
        if (branch_taken_0x110ea0) {
            ctx->pc = 0x110EBCu;
            goto label_110ebc;
        }
    }
    ctx->pc = 0x110EA8u;
label_110ea8:
    // 0x110ea8: 0x24030018
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x110eac: 0x3442ffff
    ctx->pc = 0x110eacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x110eb0: 0x24040010
    ctx->pc = 0x110eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x110eb4: 0x47102b
    ctx->pc = 0x110eb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x110eb8: 0x62200b
    ctx->pc = 0x110eb8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_110ebc:
    // 0x110ebc: 0x871806
    ctx->pc = 0x110ebcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x110ec0: 0x24050020
    ctx->pc = 0x110ec0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x110ec4: 0x3c020024
    ctx->pc = 0x110ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x110ec8: 0x431021
    ctx->pc = 0x110ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110ecc: 0x904284a0
    ctx->pc = 0x110eccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935712)));
    // 0x110ed0: 0x441021
    ctx->pc = 0x110ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x110ed4: 0xa26023
    ctx->pc = 0x110ed4u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110ed8: 0x15800005
    ctx->pc = 0x110ED8u;
    {
        const bool branch_taken_0x110ed8 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x110EDCu;
        SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        if (branch_taken_0x110ed8) {
            ctx->pc = 0x110EF0u;
            goto label_110ef0;
        }
    }
    ctx->pc = 0x110EE0u;
    // 0x110ee0: 0x1475023
    ctx->pc = 0x110ee0u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x110ee4: 0x72c02
    ctx->pc = 0x110ee4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 7), 16));
    // 0x110ee8: 0x10000035
    ctx->pc = 0x110EE8u;
    {
        const bool branch_taken_0x110ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110EECu;
        SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 7), 65535));
        if (branch_taken_0x110ee8) {
            ctx->pc = 0x110FC0u;
            goto label_110fc0;
        }
    }
    ctx->pc = 0x110EF0u;
label_110ef0:
    // 0x110ef0: 0x18a1804
    ctx->pc = 0x110ef0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x110ef4: 0x1ed1006
    ctx->pc = 0x110ef4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x110ef8: 0x18d6804
    ctx->pc = 0x110ef8u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x110efc: 0x1ea2006
    ctx->pc = 0x110efcu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x110f00: 0x625025
    ctx->pc = 0x110f00u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110f04: 0x1873804
    ctx->pc = 0x110f04u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x110f08: 0x72c02
    ctx->pc = 0x110f08u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 7), 16));
    // 0x110f0c: 0x85001b
    ctx->pc = 0x110f0cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 4) / divisor; ctx->hi = GPR_U32(ctx, 5) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,4); } }
    // 0x110f10: 0xa2402
    ctx->pc = 0x110f10u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 10), 16));
    // 0x110f14: 0x30eeffff
    ctx->pc = 0x110f14u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 7), 65535));
    // 0x110f18: 0xa0482d
    ctx->pc = 0x110f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f1c: 0x51200001
    ctx->pc = 0x110F1Cu;
    {
        const bool branch_taken_0x110f1c = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x110f1c) {
            ctx->pc = 0x110F20u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x110F24u;
            goto label_110f24;
        }
    }
    ctx->pc = 0x110F24u;
label_110f24:
    // 0x110f24: 0x1012
    ctx->pc = 0x110f24u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x110f28: 0x1810
    ctx->pc = 0x110f28u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x110f2c: 0x4e4018
    ctx->pc = 0x110f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x110f30: 0x31c00
    ctx->pc = 0x110f30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x110f34: 0x643025
    ctx->pc = 0x110f34u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x110f38: 0xc8102b
    ctx->pc = 0x110f38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x110f3c: 0x1040000a
    ctx->pc = 0x110F3Cu;
    {
        const bool branch_taken_0x110f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x110F40u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x110f3c) {
            ctx->pc = 0x110F68u;
            goto label_110f68;
        }
    }
    ctx->pc = 0x110F44u;
    // 0x110f44: 0xc73021
    ctx->pc = 0x110f44u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x110f48: 0xc7102b
    ctx->pc = 0x110f48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x110f4c: 0x54400007
    ctx->pc = 0x110F4Cu;
    {
        const bool branch_taken_0x110f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x110f4c) {
            ctx->pc = 0x110F50u;
            SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->pc = 0x110F6Cu;
            goto label_110f6c;
        }
    }
    ctx->pc = 0x110F54u;
    // 0x110f54: 0xc8102b
    ctx->pc = 0x110f54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x110f58: 0xc71821
    ctx->pc = 0x110f58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x110f5c: 0x38420000
    ctx->pc = 0x110f5cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x110f60: 0x62300b
    ctx->pc = 0x110f60u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x110f64: 0x0
    ctx->pc = 0x110f64u;
    // NOP
label_110f68:
    // 0x110f68: 0xc83023
    ctx->pc = 0x110f68u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_110f6c:
    // 0x110f6c: 0x3144ffff
    ctx->pc = 0x110f6cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), 65535));
    // 0x110f70: 0xc9001b
    ctx->pc = 0x110f70u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 6) / divisor; ctx->hi = GPR_U32(ctx, 9) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,6); } }
    // 0x110f74: 0x51200001
    ctx->pc = 0x110F74u;
    {
        const bool branch_taken_0x110f74 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x110f74) {
            ctx->pc = 0x110F78u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x110F7Cu;
            goto label_110f7c;
        }
    }
    ctx->pc = 0x110F7Cu;
label_110f7c:
    // 0x110f7c: 0x1012
    ctx->pc = 0x110f7cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x110f80: 0x1810
    ctx->pc = 0x110f80u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x110f84: 0x4f4018
    ctx->pc = 0x110f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x110f88: 0x31c00
    ctx->pc = 0x110f88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x110f8c: 0x642025
    ctx->pc = 0x110f8cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x110f90: 0x88102b
    ctx->pc = 0x110f90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x110f94: 0x1040000a
    ctx->pc = 0x110F94u;
    {
        const bool branch_taken_0x110f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x110F98u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        if (branch_taken_0x110f94) {
            ctx->pc = 0x110FC0u;
            goto label_110fc0;
        }
    }
    ctx->pc = 0x110F9Cu;
    // 0x110f9c: 0x872021
    ctx->pc = 0x110f9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x110fa0: 0x87102b
    ctx->pc = 0x110fa0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x110fa4: 0x14400006
    ctx->pc = 0x110FA4u;
    {
        const bool branch_taken_0x110fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x110FA8u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        if (branch_taken_0x110fa4) {
            ctx->pc = 0x110FC0u;
            goto label_110fc0;
        }
    }
    ctx->pc = 0x110FACu;
    // 0x110fac: 0x88102b
    ctx->pc = 0x110facu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x110fb0: 0x871821
    ctx->pc = 0x110fb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x110fb4: 0x38420000
    ctx->pc = 0x110fb4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x110fb8: 0x62200b
    ctx->pc = 0x110fb8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x110fbc: 0x885023
    ctx->pc = 0x110fbcu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_110fc0:
    // 0x110fc0: 0xa0302d
    ctx->pc = 0x110fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fc4: 0x1c0482d
    ctx->pc = 0x110fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_110fc8:
    // 0x110fc8: 0x146001b
    ctx->pc = 0x110fc8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 10) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,10); } }
    // 0x110fcc: 0xd2402
    ctx->pc = 0x110fccu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 13), 16));
    // 0x110fd0: 0x50c00001
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x110FD4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x110FD8u;
            goto label_110fd8;
        }
    }
    ctx->pc = 0x110FD8u;
label_110fd8:
    // 0x110fd8: 0x1012
    ctx->pc = 0x110fd8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x110fdc: 0x1810
    ctx->pc = 0x110fdcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x110fe0: 0x494018
    ctx->pc = 0x110fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x110fe4: 0x31c00
    ctx->pc = 0x110fe4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x110fe8: 0x642825
    ctx->pc = 0x110fe8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x110fec: 0xa8102b
    ctx->pc = 0x110fecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110ff0: 0x5040000a
    ctx->pc = 0x110FF0u;
    {
        const bool branch_taken_0x110ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x110ff0) {
            ctx->pc = 0x110FF4u;
            SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->pc = 0x11101Cu;
            goto label_11101c;
        }
    }
    ctx->pc = 0x110FF8u;
    // 0x110ff8: 0xa72821
    ctx->pc = 0x110ff8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x110ffc: 0xa7102b
    ctx->pc = 0x110ffcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x111000: 0x54400006
    ctx->pc = 0x111000u;
    {
        const bool branch_taken_0x111000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111000) {
            ctx->pc = 0x111004u;
            SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->pc = 0x11101Cu;
            goto label_11101c;
        }
    }
    ctx->pc = 0x111008u;
    // 0x111008: 0xa8102b
    ctx->pc = 0x111008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11100c: 0xa71821
    ctx->pc = 0x11100cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x111010: 0x38420000
    ctx->pc = 0x111010u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x111014: 0x62280b
    ctx->pc = 0x111014u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x111018: 0xa82823
    ctx->pc = 0x111018u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_11101c:
    // 0x11101c: 0x31a4ffff
    ctx->pc = 0x11101cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 13), 65535));
    // 0x111020: 0xa6001b
    ctx->pc = 0x111020u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 5) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,5); } }
    // 0x111024: 0x50c00001
    ctx->pc = 0x111024u;
    {
        const bool branch_taken_0x111024 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x111024) {
            ctx->pc = 0x111028u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11102Cu;
            goto label_11102c;
        }
    }
    ctx->pc = 0x11102Cu;
label_11102c:
    // 0x11102c: 0x1012
    ctx->pc = 0x11102cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x111030: 0x1810
    ctx->pc = 0x111030u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x111034: 0x494018
    ctx->pc = 0x111034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x111038: 0x31c00
    ctx->pc = 0x111038u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x11103c: 0x642025
    ctx->pc = 0x11103cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111040: 0x88102b
    ctx->pc = 0x111040u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x111044: 0x10400008
    ctx->pc = 0x111044u;
    {
        const bool branch_taken_0x111044 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x111044) {
            ctx->pc = 0x111068u;
            goto label_111068;
        }
    }
    ctx->pc = 0x11104Cu;
    // 0x11104c: 0x872021
    ctx->pc = 0x11104cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x111050: 0x87102b
    ctx->pc = 0x111050u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x111054: 0x14400004
    ctx->pc = 0x111054u;
    {
        const bool branch_taken_0x111054 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111058u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        if (branch_taken_0x111054) {
            ctx->pc = 0x111068u;
            goto label_111068;
        }
    }
    ctx->pc = 0x11105Cu;
    // 0x11105c: 0x871821
    ctx->pc = 0x11105cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x111060: 0x38420000
    ctx->pc = 0x111060u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x111064: 0x62200b
    ctx->pc = 0x111064u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_111068:
    // 0x111068: 0x130000ac
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x11106Cu;
        SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        if (branch_taken_0x111068) {
            ctx->pc = 0x11131Cu;
            goto label_11131c;
        }
    }
    ctx->pc = 0x111070u;
    // 0x111070: 0x18d1006
    ctx->pc = 0x111070u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x111074: 0x2403ffff
    ctx->pc = 0x111074u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111078: 0x3183c
    ctx->pc = 0x111078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11107c: 0x2103c
    ctx->pc = 0x11107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111080: 0x1635824
    ctx->pc = 0x111080u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x111084: 0x2103e
    ctx->pc = 0x111084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111088: 0x3c03ffff
    ctx->pc = 0x111088u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x11108c: 0x3183e
    ctx->pc = 0x11108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x111090: 0x1625825
    ctx->pc = 0x111090u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x111094: 0x100000a0
    ctx->pc = 0x111094u;
    {
        const bool branch_taken_0x111094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111098u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        if (branch_taken_0x111094) {
            ctx->pc = 0x111318u;
            goto label_111318;
        }
    }
    ctx->pc = 0x11109Cu;
    // 0x11109c: 0x0
    ctx->pc = 0x11109cu;
    // NOP
label_1110a0:
    // 0x1110a0: 0x149102b
    ctx->pc = 0x1110a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1110a4: 0x1040000e
    ctx->pc = 0x1110A4u;
    {
        const bool branch_taken_0x1110a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1110A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x1110a4) {
            ctx->pc = 0x1110E0u;
            goto label_1110e0;
        }
    }
    ctx->pc = 0x1110ACu;
    // 0x1110ac: 0x2403ffff
    ctx->pc = 0x1110acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1110b0: 0x3183c
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1110b4: 0xd103c
    ctx->pc = 0x1110b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1110b8: 0x2103e
    ctx->pc = 0x1110b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1110bc: 0x1635824
    ctx->pc = 0x1110bcu;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1110c0: 0x1625825
    ctx->pc = 0x1110c0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1110c4: 0xa103c
    ctx->pc = 0x1110c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1110c8: 0x3c03ffff
    ctx->pc = 0x1110c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x1110cc: 0x3183e
    ctx->pc = 0x1110ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1110d0: 0x1635824
    ctx->pc = 0x1110d0u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1110d4: 0x1625825
    ctx->pc = 0x1110d4u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1110d8: 0x10000090
    ctx->pc = 0x1110D8u;
    {
        const bool branch_taken_0x1110d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1110DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        if (branch_taken_0x1110d8) {
            ctx->pc = 0x11131Cu;
            goto label_11131c;
        }
    }
    ctx->pc = 0x1110E0u;
label_1110e0:
    // 0x1110e0: 0x49102b
    ctx->pc = 0x1110e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1110e4: 0x14400006
    ctx->pc = 0x1110E4u;
    {
        const bool branch_taken_0x1110e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1110E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
        if (branch_taken_0x1110e4) {
            ctx->pc = 0x111100u;
            goto label_111100;
        }
    }
    ctx->pc = 0x1110ECu;
    // 0x1110ec: 0x2d220100
    ctx->pc = 0x1110ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), 256));
    // 0x1110f0: 0x24040008
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1110f4: 0x10000007
    ctx->pc = 0x1110F4u;
    {
        const bool branch_taken_0x1110f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1110F8u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
        if (branch_taken_0x1110f4) {
            ctx->pc = 0x111114u;
            goto label_111114;
        }
    }
    ctx->pc = 0x1110FCu;
    // 0x1110fc: 0x0
    ctx->pc = 0x1110fcu;
    // NOP
label_111100:
    // 0x111100: 0x24030018
    ctx->pc = 0x111100u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x111104: 0x3442ffff
    ctx->pc = 0x111104u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x111108: 0x24040010
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x11110c: 0x49102b
    ctx->pc = 0x11110cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x111110: 0x62200b
    ctx->pc = 0x111110u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_111114:
    // 0x111114: 0x891806
    ctx->pc = 0x111114u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x111118: 0x24050020
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x11111c: 0x3c020024
    ctx->pc = 0x11111cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x111120: 0x431021
    ctx->pc = 0x111120u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111124: 0x904284a0
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935712)));
    // 0x111128: 0x441021
    ctx->pc = 0x111128u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11112c: 0xa26023
    ctx->pc = 0x11112cu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111130: 0x15800019
    ctx->pc = 0x111130u;
    {
        const bool branch_taken_0x111130 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x111134u;
        SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        if (branch_taken_0x111130) {
            ctx->pc = 0x111198u;
            goto label_111198;
        }
    }
    ctx->pc = 0x111138u;
    // 0x111138: 0x12a102b
    ctx->pc = 0x111138u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x11113c: 0x14400004
    ctx->pc = 0x11113Cu;
    {
        const bool branch_taken_0x11113c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111140u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        if (branch_taken_0x11113c) {
            ctx->pc = 0x111150u;
            goto label_111150;
        }
    }
    ctx->pc = 0x111144u;
    // 0x111144: 0x1a7102b
    ctx->pc = 0x111144u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x111148: 0x14400005
    ctx->pc = 0x111148u;
    {
        const bool branch_taken_0x111148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11114Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        if (branch_taken_0x111148) {
            ctx->pc = 0x111160u;
            goto label_111160;
        }
    }
    ctx->pc = 0x111150u;
label_111150:
    // 0x111150: 0x1492023
    ctx->pc = 0x111150u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x111154: 0x1a2182b
    ctx->pc = 0x111154u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x111158: 0x40682d
    ctx->pc = 0x111158u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11115c: 0x835023
    ctx->pc = 0x11115cu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_111160:
    // 0x111160: 0x1300006e
    ctx->pc = 0x111160u;
    {
        const bool branch_taken_0x111160 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x111164u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        if (branch_taken_0x111160) {
            ctx->pc = 0x11131Cu;
            goto label_11131c;
        }
    }
    ctx->pc = 0x111168u;
    // 0x111168: 0x2403ffff
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11116c: 0x3183c
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x111170: 0x2103e
    ctx->pc = 0x111170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111174: 0x1635824
    ctx->pc = 0x111174u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x111178: 0x1625825
    ctx->pc = 0x111178u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11117c: 0xa103c
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x111180: 0x3c03ffff
    ctx->pc = 0x111180u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x111184: 0x3183e
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x111188: 0x1635824
    ctx->pc = 0x111188u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x11118c: 0x10000062
    ctx->pc = 0x11118Cu;
    {
        const bool branch_taken_0x11118c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111190u;
        SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x11118c) {
            ctx->pc = 0x111318u;
            goto label_111318;
        }
    }
    ctx->pc = 0x111194u;
    // 0x111194: 0x0
    ctx->pc = 0x111194u;
    // NOP
label_111198:
    // 0x111198: 0x18a2804
    ctx->pc = 0x111198u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x11119c: 0x1892004
    ctx->pc = 0x11119cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1111a0: 0x1e71006
    ctx->pc = 0x1111a0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1111a4: 0x1ed1806
    ctx->pc = 0x1111a4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1111a8: 0x18d6804
    ctx->pc = 0x1111a8u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1111ac: 0x824825
    ctx->pc = 0x1111acu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1111b0: 0x1ea2006
    ctx->pc = 0x1111b0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1111b4: 0x1873804
    ctx->pc = 0x1111b4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1111b8: 0xa35025
    ctx->pc = 0x1111b8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1111bc: 0x93402
    ctx->pc = 0x1111bcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 9), 16));
    // 0x1111c0: 0x86001b
    ctx->pc = 0x1111c0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 4) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,4); } }
    // 0x1111c4: 0xa2402
    ctx->pc = 0x1111c4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 10), 16));
    // 0x1111c8: 0x3125ffff
    ctx->pc = 0x1111c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1111cc: 0x50c00001
    ctx->pc = 0x1111CCu;
    {
        const bool branch_taken_0x1111cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1111cc) {
            ctx->pc = 0x1111D0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1111D4u;
            goto label_1111d4;
        }
    }
    ctx->pc = 0x1111D4u;
label_1111d4:
    // 0x1111d4: 0x1012
    ctx->pc = 0x1111d4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1111d8: 0x1810
    ctx->pc = 0x1111d8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1111dc: 0x40702d
    ctx->pc = 0x1111dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e0: 0x31c00
    ctx->pc = 0x1111e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1111e4: 0x1c54018
    ctx->pc = 0x1111e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x1111e8: 0x641825
    ctx->pc = 0x1111e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1111ec: 0x68102b
    ctx->pc = 0x1111ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1111f0: 0x5040000c
    ctx->pc = 0x1111F0u;
    {
        const bool branch_taken_0x1111f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1111f0) {
            ctx->pc = 0x1111F4u;
            SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->pc = 0x111224u;
            goto label_111224;
        }
    }
    ctx->pc = 0x1111F8u;
    // 0x1111f8: 0x691821
    ctx->pc = 0x1111f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1111fc: 0x69102b
    ctx->pc = 0x1111fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x111200: 0x14400007
    ctx->pc = 0x111200u;
    {
        const bool branch_taken_0x111200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111204u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294967295));
        if (branch_taken_0x111200) {
            ctx->pc = 0x111220u;
            goto label_111220;
        }
    }
    ctx->pc = 0x111208u;
    // 0x111208: 0x68102b
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11120c: 0x50400005
    ctx->pc = 0x11120Cu;
    {
        const bool branch_taken_0x11120c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11120c) {
            ctx->pc = 0x111210u;
            SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->pc = 0x111224u;
            goto label_111224;
        }
    }
    ctx->pc = 0x111214u;
    // 0x111214: 0x25ceffff
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x111218: 0x691821
    ctx->pc = 0x111218u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11121c: 0x0
    ctx->pc = 0x11121cu;
    // NOP
label_111220:
    // 0x111220: 0x681823
    ctx->pc = 0x111220u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_111224:
    // 0x111224: 0x50c00001
    ctx->pc = 0x111224u;
    {
        const bool branch_taken_0x111224 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x111224) {
            ctx->pc = 0x111228u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11122Cu;
            goto label_11122c;
        }
    }
    ctx->pc = 0x11122Cu;
label_11122c:
    // 0x11122c: 0x66001b
    ctx->pc = 0x11122cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x111230: 0x3144ffff
    ctx->pc = 0x111230u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), 65535));
    // 0x111234: 0x1012
    ctx->pc = 0x111234u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x111238: 0x1810
    ctx->pc = 0x111238u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11123c: 0x40302d
    ctx->pc = 0x11123cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111240: 0x31c00
    ctx->pc = 0x111240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x111244: 0xc54018
    ctx->pc = 0x111244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x111248: 0x642825
    ctx->pc = 0x111248u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11124c: 0xa8102b
    ctx->pc = 0x11124cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x111250: 0x5040000b
    ctx->pc = 0x111250u;
    {
        const bool branch_taken_0x111250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x111250) {
            ctx->pc = 0x111254u;
            SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->pc = 0x111280u;
            goto label_111280;
        }
    }
    ctx->pc = 0x111258u;
    // 0x111258: 0xa92821
    ctx->pc = 0x111258u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11125c: 0xa9102b
    ctx->pc = 0x11125cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x111260: 0x14400006
    ctx->pc = 0x111260u;
    {
        const bool branch_taken_0x111260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x111264u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x111260) {
            ctx->pc = 0x11127Cu;
            goto label_11127c;
        }
    }
    ctx->pc = 0x111268u;
    // 0x111268: 0xa8102b
    ctx->pc = 0x111268u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11126c: 0x50400004
    ctx->pc = 0x11126Cu;
    {
        const bool branch_taken_0x11126c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11126c) {
            ctx->pc = 0x111270u;
            SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->pc = 0x111280u;
            goto label_111280;
        }
    }
    ctx->pc = 0x111274u;
    // 0x111274: 0x24c6ffff
    ctx->pc = 0x111274u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x111278: 0xa92821
    ctx->pc = 0x111278u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_11127c:
    // 0x11127c: 0xa82823
    ctx->pc = 0x11127cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_111280:
    // 0x111280: 0xe1400
    ctx->pc = 0x111280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 14), 16));
    // 0x111284: 0x461025
    ctx->pc = 0x111284u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x111288: 0xa0502d
    ctx->pc = 0x111288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11128c: 0x470019
    ctx->pc = 0x11128cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_U32(ctx, 0, (uint32_t)result); }
    // 0x111290: 0x3010
    ctx->pc = 0x111290u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x111294: 0x4012
    ctx->pc = 0x111294u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x111298: 0x146182b
    ctx->pc = 0x111298u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11129c: 0x14600006
    ctx->pc = 0x11129Cu;
    {
        const bool branch_taken_0x11129c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1112A0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x11129c) {
            ctx->pc = 0x1112B8u;
            goto label_1112b8;
        }
    }
    ctx->pc = 0x1112A4u;
    // 0x1112a4: 0x14ca0008
    ctx->pc = 0x1112A4u;
    {
        const bool branch_taken_0x1112a4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 10));
        ctx->pc = 0x1112A8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        if (branch_taken_0x1112a4) {
            ctx->pc = 0x1112C8u;
            goto label_1112c8;
        }
    }
    ctx->pc = 0x1112ACu;
    // 0x1112ac: 0x10400006
    ctx->pc = 0x1112ACu;
    {
        const bool branch_taken_0x1112ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1112B0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x1112ac) {
            ctx->pc = 0x1112C8u;
            goto label_1112c8;
        }
    }
    ctx->pc = 0x1112B4u;
    // 0x1112b4: 0x0
    ctx->pc = 0x1112b4u;
    // NOP
label_1112b8:
    // 0x1112b8: 0xc92023
    ctx->pc = 0x1112b8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1112bc: 0x102182b
    ctx->pc = 0x1112bcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1112c0: 0x40402d
    ctx->pc = 0x1112c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c4: 0x833023
    ctx->pc = 0x1112c4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1112c8:
    // 0x1112c8: 0x13000014
    ctx->pc = 0x1112C8u;
    {
        const bool branch_taken_0x1112c8 = (GPR_U32(ctx, 24) == GPR_U32(ctx, 0));
        ctx->pc = 0x1112CCu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        if (branch_taken_0x1112c8) {
            ctx->pc = 0x11131Cu;
            goto label_11131c;
        }
    }
    ctx->pc = 0x1112D0u;
    // 0x1112d0: 0xa62823
    ctx->pc = 0x1112d0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1112d4: 0x1a4182b
    ctx->pc = 0x1112d4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1112d8: 0xa35023
    ctx->pc = 0x1112d8u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1112dc: 0x1ea1004
    ctx->pc = 0x1112dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1112e0: 0x2403ffff
    ctx->pc = 0x1112e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1112e4: 0x3183c
    ctx->pc = 0x1112e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1112e8: 0x1842006
    ctx->pc = 0x1112e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1112ec: 0x1635824
    ctx->pc = 0x1112ecu;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1112f0: 0x441025
    ctx->pc = 0x1112f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1112f4: 0x3c04ffff
    ctx->pc = 0x1112f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x1112f8: 0x4203e
    ctx->pc = 0x1112f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1112fc: 0x2103c
    ctx->pc = 0x1112fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111300: 0x18a1806
    ctx->pc = 0x111300u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x111304: 0x2103e
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111308: 0x3183c
    ctx->pc = 0x111308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11130c: 0x1625825
    ctx->pc = 0x11130cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x111310: 0x1645824
    ctx->pc = 0x111310u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x111314: 0x1635825
    ctx->pc = 0x111314u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_111318:
    // 0x111318: 0xff0b0000
    ctx->pc = 0x111318u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_11131c:
    // 0x11131c: 0xdfa20000
    ctx->pc = 0x11131cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111320: 0x3e00008
    ctx->pc = 0x111320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110E10u: goto label_110e10;
            case 0x110E24u: goto label_110e24;
            case 0x110E5Cu: goto label_110e5c;
            case 0x110E68u: goto label_110e68;
            case 0x110E7Cu: goto label_110e7c;
            case 0x110E90u: goto label_110e90;
            case 0x110EA8u: goto label_110ea8;
            case 0x110EBCu: goto label_110ebc;
            case 0x110EF0u: goto label_110ef0;
            case 0x110F24u: goto label_110f24;
            case 0x110F68u: goto label_110f68;
            case 0x110F6Cu: goto label_110f6c;
            case 0x110F7Cu: goto label_110f7c;
            case 0x110FC0u: goto label_110fc0;
            case 0x110FC8u: goto label_110fc8;
            case 0x110FD8u: goto label_110fd8;
            case 0x11101Cu: goto label_11101c;
            case 0x11102Cu: goto label_11102c;
            case 0x111068u: goto label_111068;
            case 0x1110A0u: goto label_1110a0;
            case 0x1110E0u: goto label_1110e0;
            case 0x111100u: goto label_111100;
            case 0x111114u: goto label_111114;
            case 0x111150u: goto label_111150;
            case 0x111160u: goto label_111160;
            case 0x111198u: goto label_111198;
            case 0x1111D4u: goto label_1111d4;
            case 0x111220u: goto label_111220;
            case 0x111224u: goto label_111224;
            case 0x11122Cu: goto label_11122c;
            case 0x11127Cu: goto label_11127c;
            case 0x111280u: goto label_111280;
            case 0x1112B8u: goto label_1112b8;
            case 0x1112C8u: goto label_1112c8;
            case 0x111318u: goto label_111318;
            case 0x11131Cu: goto label_11131c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111328u;
}
