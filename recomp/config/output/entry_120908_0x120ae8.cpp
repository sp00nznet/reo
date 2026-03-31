#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_120908
// Address: 0x120908 - 0x120ae8
void entry_120908_0x120ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120908u;

    // 0x120908: 0x27bdffe0
    ctx->pc = 0x120908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12090c: 0x46006046
    ctx->pc = 0x12090cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x120910: 0xffb00010
    ctx->pc = 0x120910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120914: 0xffbf0018
    ctx->pc = 0x120914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120918: 0x44066800
    ctx->pc = 0x120918u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[13]);
    // 0x12091c: 0x3c027fff
    ctx->pc = 0x12091cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x120920: 0x3442ffff
    ctx->pc = 0x120920u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120924: 0xc24024
    ctx->pc = 0x120924u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120928: 0x44050800
    ctx->pc = 0x120928u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x12092c: 0x3c033f80
    ctx->pc = 0x12092cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x120930: 0x14c30005
    ctx->pc = 0x120930u;
    {
        const bool branch_taken_0x120930 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x120934u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x120930) {
            ctx->pc = 0x120948u;
            goto label_120948;
        }
    }
    ctx->pc = 0x120938u;
    // 0x120938: 0xdfb00010
    ctx->pc = 0x120938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12093c: 0xdfbf0018
    ctx->pc = 0x12093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120940: 0x8048850
    ctx->pc = 0x120940u;
    ctx->pc = 0x120944u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x122140u;
    sub_00122140_0x122140(rdram, ctx, runtime); return;
    ctx->pc = 0x120948u;
label_120948:
    // 0x120948: 0x3c02007f
    ctx->pc = 0x120948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
    // 0x12094c: 0x62783
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 30));
    // 0x120950: 0x3442ffff
    ctx->pc = 0x120950u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120954: 0x30840002
    ctx->pc = 0x120954u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 2));
    // 0x120958: 0x51fc2
    ctx->pc = 0x120958u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 31));
    // 0x12095c: 0x47102a
    ctx->pc = 0x12095cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x120960: 0x14400012
    ctx->pc = 0x120960u;
    {
        const bool branch_taken_0x120960 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x120964u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x120960) {
            ctx->pc = 0x1209ACu;
            goto label_1209ac;
        }
    }
    ctx->pc = 0x120968u;
    // 0x120968: 0x24020002
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x12096c: 0x3c014049
    ctx->pc = 0x12096cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x120970: 0x34210fda
    ctx->pc = 0x120970u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x120974: 0x44810000
    ctx->pc = 0x120974u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120978: 0x12020057
    ctx->pc = 0x120978u;
    {
        const bool branch_taken_0x120978 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x12097Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
        if (branch_taken_0x120978) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120980u;
    // 0x120980: 0x50400005
    ctx->pc = 0x120980u;
    {
        const bool branch_taken_0x120980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x120980) {
            ctx->pc = 0x120984u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x120998u;
            goto label_120998;
        }
    }
    ctx->pc = 0x120988u;
    // 0x120988: 0x6000009
    ctx->pc = 0x120988u;
    {
        const bool branch_taken_0x120988 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x12098Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
        if (branch_taken_0x120988) {
            ctx->pc = 0x1209B0u;
            goto label_1209b0;
        }
    }
    ctx->pc = 0x120990u;
    // 0x120990: 0x10000051
    ctx->pc = 0x120990u;
    {
        const bool branch_taken_0x120990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120994u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x120990) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120998u;
label_120998:
    // 0x120998: 0x3c01c049
    ctx->pc = 0x120998u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x12099c: 0x34210fda
    ctx->pc = 0x12099cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x1209a0: 0x44810000
    ctx->pc = 0x1209a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1209a4: 0x5202004d
    ctx->pc = 0x1209A4u;
    {
        const bool branch_taken_0x1209a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1209a4) {
            ctx->pc = 0x1209A8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x120ADCu;
            goto label_120adc;
        }
    }
    ctx->pc = 0x1209ACu;
label_1209ac:
    // 0x1209ac: 0x3c02007f
    ctx->pc = 0x1209acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
label_1209b0:
    // 0x1209b0: 0x3442ffff
    ctx->pc = 0x1209b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1209b4: 0x48102a
    ctx->pc = 0x1209b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
    // 0x1209b8: 0x1440000b
    ctx->pc = 0x1209B8u;
    {
        const bool branch_taken_0x1209b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1209BCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        if (branch_taken_0x1209b8) {
            ctx->pc = 0x1209E8u;
            goto label_1209e8;
        }
    }
    ctx->pc = 0x1209C0u;
    // 0x1209c0: 0x3c01bfc9
    ctx->pc = 0x1209c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x1209c4: 0x34210fda
    ctx->pc = 0x1209c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x1209c8: 0x44810000
    ctx->pc = 0x1209c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1209cc: 0x4a00042
    ctx->pc = 0x1209CCu;
    {
        const bool branch_taken_0x1209cc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1209D0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1209cc) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x1209D4u;
    // 0x1209d4: 0x3c013fc9
    ctx->pc = 0x1209d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x1209d8: 0x34210fda
    ctx->pc = 0x1209d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x1209dc: 0x44810000
    ctx->pc = 0x1209dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1209e0: 0x1000003f
    ctx->pc = 0x1209E0u;
    {
        const bool branch_taken_0x1209e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1209E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x1209e0) {
            ctx->pc = 0x120AE0u;
            goto label_120ae0;
        }
    }
    ctx->pc = 0x1209E8u;
label_1209e8:
    // 0x1209e8: 0x3c013fc9
    ctx->pc = 0x1209e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x1209ec: 0x34210fda
    ctx->pc = 0x1209ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x1209f0: 0x44811000
    ctx->pc = 0x1209f0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x1209f4: 0x31dc3
    ctx->pc = 0x1209f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1209f8: 0x2862003d
    ctx->pc = 0x1209f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 61));
    // 0x1209fc: 0x1040000f
    ctx->pc = 0x1209FCu;
    {
        const bool branch_taken_0x1209fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120A00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1209fc) {
            ctx->pc = 0x120A3Cu;
            goto label_120a3c;
        }
    }
    ctx->pc = 0x120A04u;
    // 0x120a04: 0x4c10004
    ctx->pc = 0x120A04u;
    {
        const bool branch_taken_0x120a04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x120A08u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967236));
        if (branch_taken_0x120a04) {
            ctx->pc = 0x120A18u;
            goto label_120a18;
        }
    }
    ctx->pc = 0x120A0Cu;
    // 0x120a0c: 0x44801000
    ctx->pc = 0x120a0cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x120a10: 0x1440000a
    ctx->pc = 0x120A10u;
    {
        const bool branch_taken_0x120a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x120A14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x120a10) {
            ctx->pc = 0x120A3Cu;
            goto label_120a3c;
        }
    }
    ctx->pc = 0x120A18u;
label_120a18:
    // 0x120a18: 0x0
    ctx->pc = 0x120a18u;
    // NOP
    // 0x120a1c: 0x0
    ctx->pc = 0x120a1cu;
    // NOP
    // 0x120a20: 0x460d0b03
    ctx->pc = 0x120a20u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[13];
    // 0x120a24: 0xc04892a
    ctx->pc = 0x120A24u;
    SET_GPR_U32(ctx, 31, 0x120A2Cu);
    ctx->pc = 0x1224A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001224A8_0x1224a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120A2Cu; }
    }
    if (ctx->pc != 0x120A2Cu) { return; }
    ctx->pc = 0x120A2Cu;
    // 0x120a2c: 0xc048850
    ctx->pc = 0x120A2Cu;
    SET_GPR_U32(ctx, 31, 0x120A34u);
    ctx->pc = 0x120A30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x122140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122140_0x122140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120A34u; }
    }
    if (ctx->pc != 0x120A34u) { return; }
    ctx->pc = 0x120A34u;
    // 0x120a34: 0x46000086
    ctx->pc = 0x120a34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x120a38: 0x24020001
    ctx->pc = 0x120a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_120a3c:
    // 0x120a3c: 0x1202000c
    ctx->pc = 0x120A3Cu;
    {
        const bool branch_taken_0x120a3c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x120A40u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x120a3c) {
            ctx->pc = 0x120A70u;
            goto label_120a70;
        }
    }
    ctx->pc = 0x120A44u;
    // 0x120a44: 0x50400006
    ctx->pc = 0x120A44u;
    {
        const bool branch_taken_0x120a44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x120a44) {
            ctx->pc = 0x120A48u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x120A60u;
            goto label_120a60;
        }
    }
    ctx->pc = 0x120A4Cu;
    // 0x120a4c: 0x12000022
    ctx->pc = 0x120A4Cu;
    {
        const bool branch_taken_0x120a4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x120A50u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x120a4c) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120A54u;
    // 0x120a54: 0x10000018
    ctx->pc = 0x120A54u;
    {
        const bool branch_taken_0x120a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x120a54) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A5Cu;
    // 0x120a5c: 0x0
    ctx->pc = 0x120a5cu;
    // NOP
label_120a60:
    // 0x120a60: 0x1202000b
    ctx->pc = 0x120A60u;
    {
        const bool branch_taken_0x120a60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x120a60) {
            ctx->pc = 0x120A90u;
            goto label_120a90;
        }
    }
    ctx->pc = 0x120A68u;
    // 0x120a68: 0x10000013
    ctx->pc = 0x120A68u;
    {
        const bool branch_taken_0x120a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x120a68) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A70u;
label_120a70:
    // 0x120a70: 0xe7a20000
    ctx->pc = 0x120a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120a74: 0x3c028000
    ctx->pc = 0x120a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x120a78: 0x8fa30000
    ctx->pc = 0x120a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a7c: 0x621826
    ctx->pc = 0x120a7cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120a80: 0x44831000
    ctx->pc = 0x120a80u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x120a84: 0x10000014
    ctx->pc = 0x120A84u;
    {
        const bool branch_taken_0x120a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120A88u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x120a84) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120A8Cu;
    // 0x120a8c: 0x0
    ctx->pc = 0x120a8cu;
    // NOP
label_120a90:
    // 0x120a90: 0x3c013422
    ctx->pc = 0x120a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)13346 << 16));
    // 0x120a94: 0x34212168
    ctx->pc = 0x120a94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 8552));
    // 0x120a98: 0x44810000
    ctx->pc = 0x120a98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120a9c: 0x3c014049
    ctx->pc = 0x120a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x120aa0: 0x34210fda
    ctx->pc = 0x120aa0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x120aa4: 0x44810800
    ctx->pc = 0x120aa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120aa8: 0x46001001
    ctx->pc = 0x120aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x120aac: 0x1000000a
    ctx->pc = 0x120AACu;
    {
        const bool branch_taken_0x120aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120AB0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x120aac) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120AB4u;
    // 0x120ab4: 0x0
    ctx->pc = 0x120ab4u;
    // NOP
label_120ab8:
    // 0x120ab8: 0x3c013422
    ctx->pc = 0x120ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)13346 << 16));
    // 0x120abc: 0x34212168
    ctx->pc = 0x120abcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 8552));
    // 0x120ac0: 0x44810000
    ctx->pc = 0x120ac0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120ac4: 0x3c014049
    ctx->pc = 0x120ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x120ac8: 0x34210fda
    ctx->pc = 0x120ac8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x120acc: 0x44810800
    ctx->pc = 0x120accu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120ad0: 0x46001001
    ctx->pc = 0x120ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x120ad4: 0x46010001
    ctx->pc = 0x120ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_120ad8:
    // 0x120ad8: 0xdfb00010
    ctx->pc = 0x120ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_120adc:
    // 0x120adc: 0xdfbf0018
    ctx->pc = 0x120adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_120ae0:
    // 0x120ae0: 0x3e00008
    ctx->pc = 0x120AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120AE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120948u: goto label_120948;
            case 0x120998u: goto label_120998;
            case 0x1209ACu: goto label_1209ac;
            case 0x1209B0u: goto label_1209b0;
            case 0x1209E8u: goto label_1209e8;
            case 0x120A18u: goto label_120a18;
            case 0x120A3Cu: goto label_120a3c;
            case 0x120A60u: goto label_120a60;
            case 0x120A70u: goto label_120a70;
            case 0x120A90u: goto label_120a90;
            case 0x120AB8u: goto label_120ab8;
            case 0x120AD8u: goto label_120ad8;
            case 0x120ADCu: goto label_120adc;
            case 0x120AE0u: goto label_120ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120AE8u;
}
