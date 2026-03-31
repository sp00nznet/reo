#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DD60
// Address: 0x12dd60 - 0x12df50
void sub_0012DD60_0x12dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12dd60u;

label_12dd60:
    // 0x12dd60: 0x24c3001f
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 31));
    // 0x12dd64: 0x24c6003e
    ctx->pc = 0x12dd64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 62));
    // 0x12dd68: 0x28620000
    ctx->pc = 0x12dd68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x12dd6c: 0xc2180b
    ctx->pc = 0x12dd6cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x12dd70: 0x31943
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x12dd74: 0x641818
    ctx->pc = 0x12dd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12dd78: 0x310c0
    ctx->pc = 0x12dd78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x12dd7c: 0x431021
    ctx->pc = 0x12dd7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12dd80: 0x21040
    ctx->pc = 0x12dd80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x12dd84: 0x451021
    ctx->pc = 0x12dd84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12dd88: 0x3e00008
    ctx->pc = 0x12DD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DD60u: goto label_12dd60;
            case 0x12DDF4u: goto label_12ddf4;
            case 0x12DEA0u: goto label_12dea0;
            case 0x12DEB8u: goto label_12deb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD90u;
    // 0x12dd90: 0x27bdffb0
    ctx->pc = 0x12dd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12dd94: 0x240b0020
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 32));
    // 0x12dd98: 0xffb20010
    ctx->pc = 0x12dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dd9c: 0x80902d
    ctx->pc = 0x12dd9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dda0: 0x3a420001
    ctx->pc = 0x12dda0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 1));
    // 0x12dda4: 0x24030040
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x12dda8: 0x162180b
    ctx->pc = 0x12dda8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 11));
    // 0x12ddac: 0xffb10008
    ctx->pc = 0x12ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ddb0: 0xa0882d
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddb4: 0x282d
    ctx->pc = 0x12ddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddb8: 0x223001a
    ctx->pc = 0x12ddb8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12ddbc: 0xffb30018
    ctx->pc = 0x12ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ddc0: 0x100982d
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddc4: 0xffb00000
    ctx->pc = 0x12ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ddc8: 0xffb40020
    ctx->pc = 0x12ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ddcc: 0xe0a02d
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd0: 0xffb50028
    ctx->pc = 0x12ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12ddd4: 0x120a82d
    ctx->pc = 0x12ddd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd8: 0xffb60030
    ctx->pc = 0x12ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12dddc: 0x140b02d
    ctx->pc = 0x12dddcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde0: 0xffb70038
    ctx->pc = 0x12dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12dde4: 0xc0b82d
    ctx->pc = 0x12dde4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde8: 0xffbf0040
    ctx->pc = 0x12dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ddec: 0x50600001
    ctx->pc = 0x12DDECu;
    {
        const bool branch_taken_0x12ddec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x12ddec) {
            ctx->pc = 0x12DDF0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12DDF4u;
            goto label_12ddf4;
        }
    }
    ctx->pc = 0x12DDF4u;
label_12ddf4:
    // 0x12ddf4: 0x24040001
    ctx->pc = 0x12ddf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ddf8: 0x24060004
    ctx->pc = 0x12ddf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ddfc: 0x24070004
    ctx->pc = 0x12ddfcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12de00: 0x5810
    ctx->pc = 0x12de00u;
    SET_GPR_U32(ctx, 11, ctx->hi);
    // 0x12de04: 0x6b5823
    ctx->pc = 0x12de04u;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x12de08: 0x163001a
    ctx->pc = 0x12de08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x12de0c: 0x4010
    ctx->pc = 0x12de0cu;
    SET_GPR_U32(ctx, 8, ctx->hi);
    // 0x12de10: 0x2281021
    ctx->pc = 0x12de10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x12de14: 0xae680000
    ctx->pc = 0x12de14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x12de18: 0x2449001f
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 31));
    // 0x12de1c: 0x28430000
    ctx->pc = 0x12de1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x12de20: 0x123100b
    ctx->pc = 0x12de20u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 9));
    // 0x12de24: 0x21143
    ctx->pc = 0x12de24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12de28: 0x521018
    ctx->pc = 0x12de28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x12de2c: 0x280c0
    ctx->pc = 0x12de2cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 3));
    // 0x12de30: 0xc049be0
    ctx->pc = 0x12DE30u;
    SET_GPR_U32(ctx, 31, 0x12DE38u);
    ctx->pc = 0x12DE34u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x126F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126F80_0x126f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE38u; }
    }
    if (ctx->pc != 0x12DE38u) { return; }
    ctx->pc = 0x12DE38u;
    // 0x12de38: 0x108040
    ctx->pc = 0x12de38u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x12de3c: 0x24060800
    ctx->pc = 0x12de3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x12de40: 0x2028021
    ctx->pc = 0x12de40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12de44: 0x26050004
    ctx->pc = 0x12de44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4));
    // 0x12de48: 0x26100803
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2051));
    // 0x12de4c: 0x28a40000
    ctx->pc = 0x12de4cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 0));
    // 0x12de50: 0xa0182d
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de54: 0x204180b
    ctx->pc = 0x12de54u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x12de58: 0x240202d
    ctx->pc = 0x12de58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de5c: 0x31ac3
    ctx->pc = 0x12de5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x12de60: 0x31ac0
    ctx->pc = 0x12de60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x12de64: 0xa32823
    ctx->pc = 0x12de64u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12de68: 0xc53023
    ctx->pc = 0x12de68u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12de6c: 0x24c707ff
    ctx->pc = 0x12de6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 2047));
    // 0x12de70: 0x28c50000
    ctx->pc = 0x12de70u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), 0));
    // 0x12de74: 0xc0182d
    ctx->pc = 0x12de74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de78: 0xe5180b
    ctx->pc = 0x12de78u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x12de7c: 0x31ac3
    ctx->pc = 0x12de7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x12de80: 0x32ac0
    ctx->pc = 0x12de80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 11));
    // 0x12de84: 0xc51823
    ctx->pc = 0x12de84u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12de88: 0x431021
    ctx->pc = 0x12de88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12de8c: 0xae820000
    ctx->pc = 0x12de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x12de90: 0x40282d
    ctx->pc = 0x12de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de94: 0x8e660000
    ctx->pc = 0x12de94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12de98: 0xc04b758
    ctx->pc = 0x12DE98u;
    SET_GPR_U32(ctx, 31, 0x12DEA0u);
    ctx->pc = 0x12DE9Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->pc = 0x12DD60u;
    goto label_12dd60;
    ctx->pc = 0x12DEA0u;
label_12dea0:
    // 0x12dea0: 0x240202d
    ctx->pc = 0x12dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dea4: 0xaea20000
    ctx->pc = 0x12dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x12dea8: 0x8e660000
    ctx->pc = 0x12dea8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12deac: 0x8e850000
    ctx->pc = 0x12deacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12deb0: 0xc04b758
    ctx->pc = 0x12DEB0u;
    SET_GPR_U32(ctx, 31, 0x12DEB8u);
    ctx->pc = 0x12DEB4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    ctx->pc = 0x12DD60u;
    goto label_12dd60;
    ctx->pc = 0x12DEB8u;
label_12deb8:
    // 0x12deb8: 0xaec20000
    ctx->pc = 0x12deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x12debc: 0xdfb00000
    ctx->pc = 0x12debcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dec0: 0xdfb10008
    ctx->pc = 0x12dec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dec4: 0xdfb20010
    ctx->pc = 0x12dec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dec8: 0xdfb30018
    ctx->pc = 0x12dec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12decc: 0xdfb40020
    ctx->pc = 0x12deccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ded0: 0xdfb50028
    ctx->pc = 0x12ded0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ded4: 0xdfb60030
    ctx->pc = 0x12ded4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ded8: 0xdfb70038
    ctx->pc = 0x12ded8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12dedc: 0xdfbf0040
    ctx->pc = 0x12dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12dee0: 0x3e00008
    ctx->pc = 0x12DEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DD60u: goto label_12dd60;
            case 0x12DDF4u: goto label_12ddf4;
            case 0x12DEA0u: goto label_12dea0;
            case 0x12DEB8u: goto label_12deb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DEE8u;
    // 0x12dee8: 0x27bdffc0
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12deec: 0x100582d
    ctx->pc = 0x12deecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12def0: 0xffb00020
    ctx->pc = 0x12def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12def4: 0xe0802d
    ctx->pc = 0x12def4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12def8: 0xffb10028
    ctx->pc = 0x12def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12defc: 0xc0882d
    ctx->pc = 0x12defcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df00: 0xafa90000
    ctx->pc = 0x12df00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x12df04: 0x27a90014
    ctx->pc = 0x12df04u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 20));
    // 0x12df08: 0x27a20018
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 24));
    // 0x12df0c: 0x27a80013
    ctx->pc = 0x12df0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 19));
    // 0x12df10: 0x27a60010
    ctx->pc = 0x12df10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x12df14: 0x27a70012
    ctx->pc = 0x12df14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 18));
    // 0x12df18: 0x27aa0015
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 21));
    // 0x12df1c: 0xffbf0030
    ctx->pc = 0x12df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12df20: 0xc0499e6
    ctx->pc = 0x12DF20u;
    SET_GPR_U32(ctx, 31, 0x12DF28u);
    ctx->pc = 0x12DF24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x126798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126798_0x126798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF28u; }
    }
    if (ctx->pc != 0x12DF28u) { return; }
    ctx->pc = 0x12DF28u;
    // 0x12df28: 0x83a30015
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x12df2c: 0x83a40013
    ctx->pc = 0x12df2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x12df30: 0xae030000
    ctx->pc = 0x12df30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12df34: 0xdfbf0030
    ctx->pc = 0x12df34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12df38: 0xae240000
    ctx->pc = 0x12df38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12df3c: 0xdfb00020
    ctx->pc = 0x12df3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12df40: 0xdfb10028
    ctx->pc = 0x12df40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12df44: 0x3e00008
    ctx->pc = 0x12DF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DF48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DD60u: goto label_12dd60;
            case 0x12DDF4u: goto label_12ddf4;
            case 0x12DEA0u: goto label_12dea0;
            case 0x12DEB8u: goto label_12deb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DF4Cu;
    // 0x12df4c: 0x0
    ctx->pc = 0x12df4cu;
    // NOP
}
