#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189F40
// Address: 0x189f40 - 0x18a260
void sub_00189F40_0x189f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189f40u;

    // 0x189f40: 0x27bdff60
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x189f44: 0x24060020
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x189f48: 0xffbf0070
    ctx->pc = 0x189f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x189f4c: 0x7fb60060
    ctx->pc = 0x189f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x189f50: 0x7fb50050
    ctx->pc = 0x189f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x189f54: 0x7fb40040
    ctx->pc = 0x189f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189f58: 0x7fb30030
    ctx->pc = 0x189f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189f5c: 0x80a02d
    ctx->pc = 0x189f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f60: 0x7fb20020
    ctx->pc = 0x189f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189f64: 0xa0982d
    ctx->pc = 0x189f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f68: 0x7fb10010
    ctx->pc = 0x189f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189f6c: 0x27a40080
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x189f70: 0x7fb00000
    ctx->pc = 0x189f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189f74: 0x902d
    ctx->pc = 0x189f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f78: 0x8cb0004c
    ctx->pc = 0x189f78u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x189f7c: 0x882d
    ctx->pc = 0x189f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f80: 0xc0636e0
    ctx->pc = 0x189F80u;
    SET_GPR_U32(ctx, 31, 0x189F88u);
    ctx->pc = 0x189F84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F88u; }
    }
    if (ctx->pc != 0x189F88u) { return; }
    ctx->pc = 0x189F88u;
    // 0x189f88: 0x8e870008
    ctx->pc = 0x189f88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x189f8c: 0x240dffff
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189f90: 0x8e880004
    ctx->pc = 0x189f90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x189f94: 0x3c020023
    ctx->pc = 0x189f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x189f98: 0x602d
    ctx->pc = 0x189f98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f9c: 0x1a0502d
    ctx->pc = 0x189f9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fa0: 0x482d
    ctx->pc = 0x189fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fa4: 0xc02d
    ctx->pc = 0x189fa4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fa8: 0x582d
    ctx->pc = 0x189fa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fac: 0xa82d
    ctx->pc = 0x189facu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fb0: 0x3c050010
    ctx->pc = 0x189fb0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
    // 0x189fb4: 0x3c040020
    ctx->pc = 0x189fb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32 << 16));
    // 0x189fb8: 0x24030001
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fbc: 0x2442fd60
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x189fc0: 0xae600040
    ctx->pc = 0x189fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x189fc4: 0xae60003c
    ctx->pc = 0x189fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x189fc8: 0xae600044
    ctx->pc = 0x189fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x189fcc: 0x8e060020
    ctx->pc = 0x189fccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x189fd0: 0x10000053
    ctx->pc = 0x189FD0u;
    {
        const bool branch_taken_0x189fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189FD4u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x189fd0) {
            ctx->pc = 0x18A120u;
            goto label_18a120;
        }
    }
    ctx->pc = 0x189FD8u;
label_189fd8:
    // 0x189fd8: 0x94ef0000
    ctx->pc = 0x189fd8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189fdc: 0x8e660040
    ctx->pc = 0x189fdcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x189fe0: 0x31f93fff
    ctx->pc = 0x189fe0u;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 15), 16383));
    // 0x189fe4: 0xd93021
    ctx->pc = 0x189fe4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x189fe8: 0x272ffffe
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 25), 4294967294));
    // 0x189fec: 0xae660040
    ctx->pc = 0x189fecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
    // 0x189ff0: 0x8e66003c
    ctx->pc = 0x189ff0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x189ff4: 0xcf3021
    ctx->pc = 0x189ff4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x189ff8: 0xae66003c
    ctx->pc = 0x189ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
    // 0x189ffc: 0x8e8f0000
    ctx->pc = 0x189ffcu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18a000: 0x1e53024
    ctx->pc = 0x18a000u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x18a004: 0x10c00003
    ctx->pc = 0x18A004u;
    {
        const bool branch_taken_0x18a004 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A008u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x18a004) {
            ctx->pc = 0x18A014u;
            goto label_18a014;
        }
    }
    ctx->pc = 0x18A00Cu;
    // 0x18a00c: 0x94ec0000
    ctx->pc = 0x18a00cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18a010: 0x24e70002
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_18a014:
    // 0x18a014: 0x1e43024
    ctx->pc = 0x18a014u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x18a018: 0x10c00003
    ctx->pc = 0x18A018u;
    {
        const bool branch_taken_0x18a018 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A01Cu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 15), 4096));
        if (branch_taken_0x18a018) {
            ctx->pc = 0x18A028u;
            goto label_18a028;
        }
    }
    ctx->pc = 0x18A020u;
    // 0x18a020: 0x94e90000
    ctx->pc = 0x18a020u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18a024: 0x24e70002
    ctx->pc = 0x18a024u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_18a028:
    // 0x18a028: 0x10c00004
    ctx->pc = 0x18A028u;
    {
        const bool branch_taken_0x18a028 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a028) {
            ctx->pc = 0x18A03Cu;
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A030u;
    // 0x18a030: 0x3326ffff
    ctx->pc = 0x18a030u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 25), 65535));
    // 0x18a034: 0x63040
    ctx->pc = 0x18a034u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x18a038: 0xe63821
    ctx->pc = 0x18a038u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_18a03c:
    // 0x18a03c: 0x11ac000f
    ctx->pc = 0x18A03Cu;
    {
        const bool branch_taken_0x18a03c = (GPR_U32(ctx, 13) == GPR_U32(ctx, 12));
        if (branch_taken_0x18a03c) {
            ctx->pc = 0x18A07Cu;
            goto label_18a07c;
        }
    }
    ctx->pc = 0x18A044u;
    // 0x18a044: 0x11600004
    ctx->pc = 0x18A044u;
    {
        const bool branch_taken_0x18a044 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A048u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
        if (branch_taken_0x18a044) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x18A04Cu;
    // 0x18a04c: 0x2388821
    ctx->pc = 0x18a04cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x18a050: 0x582d
    ctx->pc = 0x18a050u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a054: 0x2519021
    ctx->pc = 0x18a054u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_18a058:
    // 0x18a058: 0x180682d
    ctx->pc = 0x18a058u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a05c: 0xa0c30080
    ctx->pc = 0x18a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a060: 0x120502d
    ctx->pc = 0x18a060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a064: 0x8e660044
    ctx->pc = 0x18a064u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x18a068: 0x24110030
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 48));
    // 0x18a06c: 0x24180020
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 32));
    // 0x18a070: 0x24c60001
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a074: 0x1000000f
    ctx->pc = 0x18A074u;
    {
        const bool branch_taken_0x18a074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A078u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
        if (branch_taken_0x18a074) {
            ctx->pc = 0x18A0B4u;
            goto label_18a0b4;
        }
    }
    ctx->pc = 0x18A07Cu;
label_18a07c:
    // 0x18a07c: 0x1149000d
    ctx->pc = 0x18A07Cu;
    {
        const bool branch_taken_0x18a07c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 9));
        if (branch_taken_0x18a07c) {
            ctx->pc = 0x18A0B4u;
            goto label_18a0b4;
        }
    }
    ctx->pc = 0x18A084u;
    // 0x18a084: 0x11600009
    ctx->pc = 0x18A084u;
    {
        const bool branch_taken_0x18a084 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A088u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a084) {
            ctx->pc = 0x18A0ACu;
            goto label_18a0ac;
        }
    }
    ctx->pc = 0x18A08Cu;
    // 0x18a08c: 0x2388821
    ctx->pc = 0x18a08cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x18a090: 0x22e3021
    ctx->pc = 0x18a090u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x18a094: 0xc5302b
    ctx->pc = 0x18a094u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18a098: 0x14c00003
    ctx->pc = 0x18A098u;
    {
        const bool branch_taken_0x18a098 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x18A09Cu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a098) {
            ctx->pc = 0x18A0A8u;
            goto label_18a0a8;
        }
    }
    ctx->pc = 0x18A0A0u;
    // 0x18a0a0: 0x2519021
    ctx->pc = 0x18a0a0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18a0a4: 0x24110010
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
label_18a0a8:
    // 0x18a0a8: 0x120502d
    ctx->pc = 0x18a0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_18a0ac:
    // 0x18a0ac: 0x26310020
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
    // 0x18a0b0: 0x24180020
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 32));
label_18a0b4:
    // 0x18a0b4: 0x1b200019
    ctx->pc = 0x18A0B4u;
    {
        const bool branch_taken_0x18a0b4 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x18a0b4) {
            ctx->pc = 0x18A11Cu;
            goto label_18a11c;
        }
    }
    ctx->pc = 0x18A0BCu;
    // 0x18a0bc: 0x8e0f0018
    ctx->pc = 0x18a0bcu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18a0c0: 0x8e060020
    ctx->pc = 0x18a0c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18a0c4: 0xf78c0
    ctx->pc = 0x18a0c4u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 15), 3));
    // 0x18a0c8: 0x4f7821
    ctx->pc = 0x18a0c8u;
    SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x18a0cc: 0x8def0000
    ctx->pc = 0x18a0ccu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_18a0d0:
    // 0x18a0d0: 0x30fb021
    ctx->pc = 0x18a0d0u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x18a0d4: 0x2c6b02b
    ctx->pc = 0x18a0d4u;
    SET_GPR_U32(ctx, 22, SLTU32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x18a0d8: 0x16c0000b
    ctx->pc = 0x18A0D8u;
    {
        const bool branch_taken_0x18a0d8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x18a0d8) {
            ctx->pc = 0x18A108u;
            goto label_18a108;
        }
    }
    ctx->pc = 0x18A0E0u;
    // 0x18a0e0: 0x2388821
    ctx->pc = 0x18a0e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x18a0e4: 0x22e5821
    ctx->pc = 0x18a0e4u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x18a0e8: 0x165582b
    ctx->pc = 0x18a0e8u;
    SET_GPR_U32(ctx, 11, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x18a0ec: 0x15600003
    ctx->pc = 0x18A0ECu;
    {
        const bool branch_taken_0x18a0ec = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        if (branch_taken_0x18a0ec) {
            ctx->pc = 0x18A0FCu;
            goto label_18a0fc;
        }
    }
    ctx->pc = 0x18A0F4u;
    // 0x18a0f4: 0x2519021
    ctx->pc = 0x18a0f4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18a0f8: 0x24110010
    ctx->pc = 0x18a0f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
label_18a0fc:
    // 0x18a0fc: 0x26310020
    ctx->pc = 0x18a0fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
    // 0x18a100: 0x24180020
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 32));
    // 0x18a104: 0x582d
    ctx->pc = 0x18a104u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a108:
    // 0x18a108: 0x2739ffff
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x18a10c: 0x256b0001
    ctx->pc = 0x18a10cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x18a110: 0x3339ffff
    ctx->pc = 0x18a110u;
    SET_GPR_U32(ctx, 25, AND32(GPR_U32(ctx, 25), 65535));
    // 0x18a114: 0x1720ffee
    ctx->pc = 0x18A114u;
    {
        const bool branch_taken_0x18a114 = (GPR_U32(ctx, 25) != GPR_U32(ctx, 0));
        ctx->pc = 0x18A118u;
        SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
        if (branch_taken_0x18a114) {
            ctx->pc = 0x18A0D0u;
            goto label_18a0d0;
        }
    }
    ctx->pc = 0x18A11Cu;
label_18a11c:
    // 0x18a11c: 0x26b50001
    ctx->pc = 0x18a11cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_18a120:
    // 0x18a120: 0x2a8302a
    ctx->pc = 0x18a120u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 8)));
    // 0x18a124: 0x14c0ffac
    ctx->pc = 0x18A124u;
    {
        const bool branch_taken_0x18a124 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x18a124) {
            ctx->pc = 0x189FD8u;
            goto label_189fd8;
        }
    }
    ctx->pc = 0x18A12Cu;
    // 0x18a12c: 0x2388821
    ctx->pc = 0x18a12cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x18a130: 0x202d
    ctx->pc = 0x18a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a134: 0x2519021
    ctx->pc = 0x18a134u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18a138: 0xae720018
    ctx->pc = 0x18a138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
    // 0x18a13c: 0xae600034
    ctx->pc = 0x18a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x18a140: 0x9d1021
    ctx->pc = 0x18a140u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_18a144:
    // 0x18a144: 0x80420080
    ctx->pc = 0x18a144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18a148: 0x10400006
    ctx->pc = 0x18A148u;
    {
        const bool branch_taken_0x18a148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a148) {
            ctx->pc = 0x18A164u;
            goto label_18a164;
        }
    }
    ctx->pc = 0x18A150u;
    // 0x18a150: 0x8e620034
    ctx->pc = 0x18a150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x18a154: 0x24430001
    ctx->pc = 0x18a154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18a158: 0x2621021
    ctx->pc = 0x18a158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18a15c: 0xae630034
    ctx->pc = 0x18a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x18a160: 0xa0440060
    ctx->pc = 0x18a160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 4));
label_18a164:
    // 0x18a164: 0x24840001
    ctx->pc = 0x18a164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x18a168: 0x28820020
    ctx->pc = 0x18a168u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x18a16c: 0x1440fff5
    ctx->pc = 0x18A16Cu;
    {
        const bool branch_taken_0x18a16c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18A170u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        if (branch_taken_0x18a16c) {
            ctx->pc = 0x18A144u;
            goto label_18a144;
        }
    }
    ctx->pc = 0x18A174u;
    // 0x18a174: 0x8e660034
    ctx->pc = 0x18a174u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x18a178: 0x3c070023
    ctx->pc = 0x18a178u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x18a17c: 0x2643000f
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 15));
    // 0x18a180: 0x2402fff0
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a184: 0x622024
    ctx->pc = 0x18a184u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a188: 0x24e7fd40
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966592));
    // 0x18a18c: 0x24050003
    ctx->pc = 0x18a18cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a190: 0x61880
    ctx->pc = 0x18a190u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x18a194: 0x2463000f
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x18a198: 0x621824
    ctx->pc = 0x18a198u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a19c: 0xae630030
    ctx->pc = 0x18a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x18a1a0: 0x8e030014
    ctx->pc = 0x18a1a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18a1a4: 0x8e660034
    ctx->pc = 0x18a1a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x18a1a8: 0x31880
    ctx->pc = 0x18a1a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a1ac: 0xe31821
    ctx->pc = 0x18a1acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18a1b0: 0x8c630000
    ctx->pc = 0x18a1b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a1b4: 0xc31818
    ctx->pc = 0x18a1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x18a1b8: 0x2463000f
    ctx->pc = 0x18a1b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x18a1bc: 0x621824
    ctx->pc = 0x18a1bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a1c0: 0xae630028
    ctx->pc = 0x18a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x18a1c4: 0x8e630028
    ctx->pc = 0x18a1c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x18a1c8: 0x24630020
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x18a1cc: 0xae630028
    ctx->pc = 0x18a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x18a1d0: 0x8e630018
    ctx->pc = 0x18a1d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18a1d4: 0x2463000f
    ctx->pc = 0x18a1d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x18a1d8: 0x621824
    ctx->pc = 0x18a1d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a1dc: 0xae63002c
    ctx->pc = 0x18a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x18a1e0: 0x8e660030
    ctx->pc = 0x18a1e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x18a1e4: 0x8e63002c
    ctx->pc = 0x18a1e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x18a1e8: 0x24c6000f
    ctx->pc = 0x18a1e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 15));
    // 0x18a1ec: 0xc23024
    ctx->pc = 0x18a1ecu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18a1f0: 0x661821
    ctx->pc = 0x18a1f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18a1f4: 0xae630024
    ctx->pc = 0x18a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x18a1f8: 0x8e660030
    ctx->pc = 0x18a1f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x18a1fc: 0x8e630028
    ctx->pc = 0x18a1fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x18a200: 0x24c6000f
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 15));
    // 0x18a204: 0xc23024
    ctx->pc = 0x18a204u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18a208: 0x2463000f
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x18a20c: 0x621024
    ctx->pc = 0x18a20cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a210: 0x862021
    ctx->pc = 0x18a210u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18a214: 0xc063714
    ctx->pc = 0x18A214u;
    SET_GPR_U32(ctx, 31, 0x18A21Cu);
    ctx->pc = 0x18A218u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A21Cu; }
    }
    if (ctx->pc != 0x18A21Cu) { return; }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0xae62001c
    ctx->pc = 0x18a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x18a220: 0xc063728
    ctx->pc = 0x18A220u;
    SET_GPR_U32(ctx, 31, 0x18A228u);
    ctx->pc = 0x18A224u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A228u; }
    }
    if (ctx->pc != 0x18A228u) { return; }
    ctx->pc = 0x18A228u;
    // 0x18a228: 0xae620020
    ctx->pc = 0x18a228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x18a22c: 0xdfbf0070
    ctx->pc = 0x18a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a230: 0x7bb60060
    ctx->pc = 0x18a230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a234: 0x7bb50050
    ctx->pc = 0x18a234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a238: 0x7bb40040
    ctx->pc = 0x18a238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a23c: 0x7bb30030
    ctx->pc = 0x18a23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a240: 0x7bb20020
    ctx->pc = 0x18a240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a244: 0x7bb10010
    ctx->pc = 0x18a244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a248: 0x7bb00000
    ctx->pc = 0x18a248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a24c: 0x3e00008
    ctx->pc = 0x18A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189FD8u: goto label_189fd8;
            case 0x18A014u: goto label_18a014;
            case 0x18A028u: goto label_18a028;
            case 0x18A03Cu: goto label_18a03c;
            case 0x18A058u: goto label_18a058;
            case 0x18A07Cu: goto label_18a07c;
            case 0x18A0A8u: goto label_18a0a8;
            case 0x18A0ACu: goto label_18a0ac;
            case 0x18A0B4u: goto label_18a0b4;
            case 0x18A0D0u: goto label_18a0d0;
            case 0x18A0FCu: goto label_18a0fc;
            case 0x18A108u: goto label_18a108;
            case 0x18A11Cu: goto label_18a11c;
            case 0x18A120u: goto label_18a120;
            case 0x18A144u: goto label_18a144;
            case 0x18A164u: goto label_18a164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A254u;
    // 0x18a254: 0x0
    ctx->pc = 0x18a254u;
    // NOP
    // 0x18a258: 0x0
    ctx->pc = 0x18a258u;
    // NOP
    // 0x18a25c: 0x0
    ctx->pc = 0x18a25cu;
    // NOP
}
