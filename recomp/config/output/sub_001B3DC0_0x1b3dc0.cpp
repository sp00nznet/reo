#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3DC0
// Address: 0x1b3dc0 - 0x1b3fa0
void sub_001B3DC0_0x1b3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3dc0u;

    // 0x1b3dc0: 0x27bdfff0
    ctx->pc = 0x1b3dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3dc4: 0xffbf0000
    ctx->pc = 0x1b3dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3dc8: 0xc06d298
    ctx->pc = 0x1B3DC8u;
    SET_GPR_U32(ctx, 31, 0x1B3DD0u);
    ctx->pc = 0x1B4A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A60_0x1b4a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DD0u; }
    }
    if (ctx->pc != 0x1B3DD0u) { return; }
    ctx->pc = 0x1B3DD0u;
    // 0x1b3dd0: 0x3c04001b
    ctx->pc = 0x1b3dd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)27 << 16));
    // 0x1b3dd4: 0xc06be9c
    ctx->pc = 0x1B3DD4u;
    SET_GPR_U32(ctx, 31, 0x1B3DDCu);
    ctx->pc = 0x1B3DD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17664));
    ctx->pc = 0x1AFA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA70_0x1afa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DDCu; }
    }
    if (ctx->pc != 0x1B3DDCu) { return; }
    ctx->pc = 0x1B3DDCu;
    // 0x1b3ddc: 0x3c010032
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3de0: 0x24030001
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3de4: 0x902443ea
    ctx->pc = 0x1b3de4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17386)));
    // 0x1b3de8: 0xdfbf0000
    ctx->pc = 0x1b3de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3dec: 0x3e00008
    ctx->pc = 0x1B3DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3E38u: goto label_1b3e38;
            case 0x1B3E64u: goto label_1b3e64;
            case 0x1B3E7Cu: goto label_1b3e7c;
            case 0x1B3EA8u: goto label_1b3ea8;
            case 0x1B3ED8u: goto label_1b3ed8;
            case 0x1B3F00u: goto label_1b3f00;
            case 0x1B3F1Cu: goto label_1b3f1c;
            case 0x1B3F24u: goto label_1b3f24;
            case 0x1B3F44u: goto label_1b3f44;
            case 0x1B3F70u: goto label_1b3f70;
            case 0x1B3F74u: goto label_1b3f74;
            case 0x1B3F78u: goto label_1b3f78;
            case 0x1B3F84u: goto label_1b3f84;
            case 0x1B3F88u: goto label_1b3f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3DF4u;
    // 0x1b3df4: 0x0
    ctx->pc = 0x1b3df4u;
    // NOP
    // 0x1b3df8: 0x0
    ctx->pc = 0x1b3df8u;
    // NOP
    // 0x1b3dfc: 0x0
    ctx->pc = 0x1b3dfcu;
    // NOP
    // 0x1b3e00: 0x27bdffc0
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3e04: 0x3c01004c
    ctx->pc = 0x1b3e04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3e08: 0xffbf0030
    ctx->pc = 0x1b3e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3e0c: 0x7fb20020
    ctx->pc = 0x1b3e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3e10: 0x7fb10010
    ctx->pc = 0x1b3e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3e14: 0x7fb00000
    ctx->pc = 0x1b3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3e18: 0x9023ae94
    ctx->pc = 0x1b3e18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946452)));
    // 0x1b3e1c: 0x14600059
    ctx->pc = 0x1B3E1Cu;
    {
        const bool branch_taken_0x1b3e1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3E20u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1b3e1c) {
            ctx->pc = 0x1B3F84u;
            goto label_1b3f84;
        }
    }
    ctx->pc = 0x1B3E24u;
    // 0x1b3e24: 0x902243c0
    ctx->pc = 0x1b3e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1b3e28: 0x10400003
    ctx->pc = 0x1B3E28u;
    {
        const bool branch_taken_0x1b3e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b3e28) {
            ctx->pc = 0x1B3E38u;
            goto label_1b3e38;
        }
    }
    ctx->pc = 0x1B3E30u;
    // 0x1b3e30: 0x3c01004c
    ctx->pc = 0x1b3e30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3e34: 0xa022ae8c
    ctx->pc = 0x1b3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946444), (uint8_t)GPR_U32(ctx, 2));
label_1b3e38:
    // 0x1b3e38: 0x3c010032
    ctx->pc = 0x1b3e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b3e3c: 0x902243eb
    ctx->pc = 0x1b3e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17387)));
    // 0x1b3e40: 0x14400008
    ctx->pc = 0x1B3E40u;
    {
        const bool branch_taken_0x1b3e40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3E44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1b3e40) {
            ctx->pc = 0x1B3E64u;
            goto label_1b3e64;
        }
    }
    ctx->pc = 0x1B3E48u;
    // 0x1b3e48: 0xc06d298
    ctx->pc = 0x1B3E48u;
    SET_GPR_U32(ctx, 31, 0x1B3E50u);
    ctx->pc = 0x1B4A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A60_0x1b4a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E50u; }
    }
    if (ctx->pc != 0x1B3E50u) { return; }
    ctx->pc = 0x1B3E50u;
    // 0x1b3e50: 0x3c04001b
    ctx->pc = 0x1b3e50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)27 << 16));
    // 0x1b3e54: 0xc06be9c
    ctx->pc = 0x1B3E54u;
    SET_GPR_U32(ctx, 31, 0x1B3E5Cu);
    ctx->pc = 0x1B3E58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17664));
    ctx->pc = 0x1AFA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA70_0x1afa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E5Cu; }
    }
    if (ctx->pc != 0x1B3E5Cu) { return; }
    ctx->pc = 0x1B3E5Cu;
    // 0x1b3e5c: 0x1000004a
    ctx->pc = 0x1B3E5Cu;
    {
        const bool branch_taken_0x1b3e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3E60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1b3e5c) {
            ctx->pc = 0x1B3F88u;
            goto label_1b3f88;
        }
    }
    ctx->pc = 0x1B3E64u;
label_1b3e64:
    // 0x1b3e64: 0xc06a5d4
    ctx->pc = 0x1B3E64u;
    SET_GPR_U32(ctx, 31, 0x1B3E6Cu);
    ctx->pc = 0x1B3E68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E6Cu; }
    }
    if (ctx->pc != 0x1B3E6Cu) { return; }
    ctx->pc = 0x1B3E6Cu;
    // 0x1b3e6c: 0x3c120031
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)49 << 16));
    // 0x1b3e70: 0x40802d
    ctx->pc = 0x1b3e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e74: 0x265251d0
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20944));
    // 0x1b3e78: 0x882d
    ctx->pc = 0x1b3e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e7c:
    // 0x1b3e7c: 0x86430000
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b3e80: 0x1060003c
    ctx->pc = 0x1B3E80u;
    {
        const bool branch_taken_0x1b3e80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3e80) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3E88u;
    // 0x1b3e88: 0x86430006
    ctx->pc = 0x1b3e88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1b3e8c: 0x2463ffff
    ctx->pc = 0x1b3e8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b3e90: 0xa6430006
    ctx->pc = 0x1b3e90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b3e94: 0x86430006
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1b3e98: 0x14600003
    ctx->pc = 0x1B3E98u;
    {
        const bool branch_taken_0x1b3e98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3e98) {
            ctx->pc = 0x1B3EA8u;
            goto label_1b3ea8;
        }
    }
    ctx->pc = 0x1B3EA0u;
    // 0x1b3ea0: 0x10000034
    ctx->pc = 0x1B3EA0u;
    {
        const bool branch_taken_0x1b3ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3EA4u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1b3ea0) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3EA8u;
label_1b3ea8:
    // 0x1b3ea8: 0x1200000b
    ctx->pc = 0x1B3EA8u;
    {
        const bool branch_taken_0x1b3ea8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3EACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1b3ea8) {
            ctx->pc = 0x1B3ED8u;
            goto label_1b3ed8;
        }
    }
    ctx->pc = 0x1B3EB0u;
    // 0x1b3eb0: 0x902343c0
    ctx->pc = 0x1b3eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1b3eb4: 0x10600008
    ctx->pc = 0x1B3EB4u;
    {
        const bool branch_taken_0x1b3eb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3eb4) {
            ctx->pc = 0x1B3ED8u;
            goto label_1b3ed8;
        }
    }
    ctx->pc = 0x1B3EBCu;
    // 0x1b3ebc: 0x9243000b
    ctx->pc = 0x1b3ebcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x1b3ec0: 0x14600005
    ctx->pc = 0x1B3EC0u;
    {
        const bool branch_taken_0x1b3ec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b3ec0) {
            ctx->pc = 0x1B3ED8u;
            goto label_1b3ed8;
        }
    }
    ctx->pc = 0x1B3EC8u;
    // 0x1b3ec8: 0xc1b850c
    ctx->pc = 0x1B3EC8u;
    SET_GPR_U32(ctx, 31, 0x1B3ED0u);
    ctx->pc = 0x6E1430u;
    {
        auto targetFn = runtime->lookupFunction(0x6E1430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3ED0u; }
        if (ctx->pc != 0x1B3ED0u) { return; }
    }
    ctx->pc = 0x1B3ED0u;
    // 0x1b3ed0: 0x3c01004c
    ctx->pc = 0x1b3ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b3ed4: 0xa020ae8c
    ctx->pc = 0x1b3ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946444), (uint8_t)GPR_U32(ctx, 0));
label_1b3ed8:
    // 0x1b3ed8: 0x82440009
    ctx->pc = 0x1b3ed8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1b3edc: 0x24030002
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3ee0: 0x10830018
    ctx->pc = 0x1B3EE0u;
    {
        const bool branch_taken_0x1b3ee0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B3EE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b3ee0) {
            ctx->pc = 0x1B3F44u;
            goto label_1b3f44;
        }
    }
    ctx->pc = 0x1B3EE8u;
    // 0x1b3ee8: 0x10830005
    ctx->pc = 0x1B3EE8u;
    {
        const bool branch_taken_0x1b3ee8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b3ee8) {
            ctx->pc = 0x1B3F00u;
            goto label_1b3f00;
        }
    }
    ctx->pc = 0x1B3EF0u;
    // 0x1b3ef0: 0x10800020
    ctx->pc = 0x1B3EF0u;
    {
        const bool branch_taken_0x1b3ef0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3ef0) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3EF8u;
    // 0x1b3ef8: 0x1000001f
    ctx->pc = 0x1B3EF8u;
    {
        const bool branch_taken_0x1b3ef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3EFCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1b3ef8) {
            ctx->pc = 0x1B3F78u;
            goto label_1b3f78;
        }
    }
    ctx->pc = 0x1B3F00u;
label_1b3f00:
    // 0x1b3f00: 0x9243000a
    ctx->pc = 0x1b3f00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1b3f04: 0x28610064
    ctx->pc = 0x1b3f04u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 100));
    // 0x1b3f08: 0x10200004
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B3F1Cu;
            goto label_1b3f1c;
        }
    }
    ctx->pc = 0x1B3F10u;
    // 0x1b3f10: 0x24630005
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5));
    // 0x1b3f14: 0x10000003
    ctx->pc = 0x1B3F14u;
    {
        const bool branch_taken_0x1b3f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3F18u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b3f14) {
            ctx->pc = 0x1B3F24u;
            goto label_1b3f24;
        }
    }
    ctx->pc = 0x1B3F1Cu;
label_1b3f1c:
    // 0x1b3f1c: 0x24630003
    ctx->pc = 0x1b3f1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b3f20: 0xa243000a
    ctx->pc = 0x1b3f20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
label_1b3f24:
    // 0x1b3f24: 0x9243000a
    ctx->pc = 0x1b3f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1b3f28: 0x28630080
    ctx->pc = 0x1b3f28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 128));
    // 0x1b3f2c: 0x14600011
    ctx->pc = 0x1B3F2Cu;
    {
        const bool branch_taken_0x1b3f2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3F30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1b3f2c) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3F34u;
    // 0x1b3f34: 0x24030002
    ctx->pc = 0x1b3f34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3f38: 0xa244000a
    ctx->pc = 0x1b3f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b3f3c: 0x1000000d
    ctx->pc = 0x1B3F3Cu;
    {
        const bool branch_taken_0x1b3f3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B3F40u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b3f3c) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3F44u;
label_1b3f44:
    // 0x1b3f44: 0x86430006
    ctx->pc = 0x1b3f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1b3f48: 0x2861001f
    ctx->pc = 0x1b3f48u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 31));
    // 0x1b3f4c: 0x10200009
    ctx->pc = 0x1B3F4Cu;
    {
        const bool branch_taken_0x1b3f4c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3f4c) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3F54u;
    // 0x1b3f54: 0x9243000a
    ctx->pc = 0x1b3f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1b3f58: 0x10600006
    ctx->pc = 0x1B3F58u;
    {
        const bool branch_taken_0x1b3f58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b3f58) {
            ctx->pc = 0x1B3F74u;
            goto label_1b3f74;
        }
    }
    ctx->pc = 0x1B3F60u;
    // 0x1b3f60: 0x2463fffc
    ctx->pc = 0x1b3f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1b3f64: 0x4610002
    ctx->pc = 0x1B3F64u;
    {
        const bool branch_taken_0x1b3f64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b3f64) {
            ctx->pc = 0x1B3F70u;
            goto label_1b3f70;
        }
    }
    ctx->pc = 0x1B3F6Cu;
    // 0x1b3f6c: 0x182d
    ctx->pc = 0x1b3f6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3f70:
    // 0x1b3f70: 0xa243000a
    ctx->pc = 0x1b3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
label_1b3f74:
    // 0x1b3f74: 0x26310001
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b3f78:
    // 0x1b3f78: 0x2a230020
    ctx->pc = 0x1b3f78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 32));
    // 0x1b3f7c: 0x1460ffbf
    ctx->pc = 0x1B3F7Cu;
    {
        const bool branch_taken_0x1b3f7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B3F80u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 140));
        if (branch_taken_0x1b3f7c) {
            ctx->pc = 0x1B3E7Cu;
            goto label_1b3e7c;
        }
    }
    ctx->pc = 0x1B3F84u;
label_1b3f84:
    // 0x1b3f84: 0xdfbf0030
    ctx->pc = 0x1b3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3f88:
    // 0x1b3f88: 0x7bb20020
    ctx->pc = 0x1b3f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3f8c: 0x7bb10010
    ctx->pc = 0x1b3f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3f90: 0x7bb00000
    ctx->pc = 0x1b3f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3f94: 0x3e00008
    ctx->pc = 0x1B3F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3E38u: goto label_1b3e38;
            case 0x1B3E64u: goto label_1b3e64;
            case 0x1B3E7Cu: goto label_1b3e7c;
            case 0x1B3EA8u: goto label_1b3ea8;
            case 0x1B3ED8u: goto label_1b3ed8;
            case 0x1B3F00u: goto label_1b3f00;
            case 0x1B3F1Cu: goto label_1b3f1c;
            case 0x1B3F24u: goto label_1b3f24;
            case 0x1B3F44u: goto label_1b3f44;
            case 0x1B3F70u: goto label_1b3f70;
            case 0x1B3F74u: goto label_1b3f74;
            case 0x1B3F78u: goto label_1b3f78;
            case 0x1B3F84u: goto label_1b3f84;
            case 0x1B3F88u: goto label_1b3f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3F9Cu;
    // 0x1b3f9c: 0x0
    ctx->pc = 0x1b3f9cu;
    // NOP
}
