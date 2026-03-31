#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DC1E8
// Address: 0x1dc1e8 - 0x1dc298
void sub_001DC1E8_0x1dc1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1dc1e8u;

    // 0x1dc1e8: 0x27bdffe0
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc1ec: 0xffbe0010
    ctx->pc = 0x1dc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1dc1f0: 0xffbf0018
    ctx->pc = 0x1dc1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dc1f4: 0x3a0f02d
    ctx->pc = 0x1dc1f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1f8: 0xafc40000
    ctx->pc = 0x1dc1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1dc1fc: 0xafc50004
    ctx->pc = 0x1dc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1dc200: 0x8fc40004
    ctx->pc = 0x1dc200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc204: 0x24050010
    ctx->pc = 0x1dc204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dc208: 0xc07cc3c
    ctx->pc = 0x1DC208u;
    SET_GPR_U32(ctx, 31, 0x1DC210u);
    ctx->pc = 0x1F30F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F30F0_0x1f30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC210u; }
    }
    if (ctx->pc != 0x1DC210u) { return; }
    ctx->pc = 0x1DC210u;
    // 0x1dc210: 0xafc20008
    ctx->pc = 0x1dc210u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1dc214: 0x8fc20008
    ctx->pc = 0x1dc214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc218: 0x14400003
    ctx->pc = 0x1DC218u;
    {
        const bool branch_taken_0x1dc218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc218) {
            ctx->pc = 0x1DC228u;
            goto label_1dc228;
        }
    }
    ctx->pc = 0x1DC220u;
    // 0x1dc220: 0x10000017
    ctx->pc = 0x1DC220u;
    {
        const bool branch_taken_0x1dc220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc220) {
            ctx->pc = 0x1DC280u;
            goto label_1dc280;
        }
    }
    ctx->pc = 0x1DC228u;
label_1dc228:
    // 0x1dc228: 0x8fc30008
    ctx->pc = 0x1dc228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc22c: 0x24026000
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24576));
    // 0x1dc230: 0xa4620000
    ctx->pc = 0x1dc230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc234: 0x8fc30008
    ctx->pc = 0x1dc234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc238: 0x8fc20008
    ctx->pc = 0x1dc238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc23c: 0x94420000
    ctx->pc = 0x1dc23cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc240: 0x34420010
    ctx->pc = 0x1dc240u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
    // 0x1dc244: 0xa4620000
    ctx->pc = 0x1dc244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dc248: 0x8fc40004
    ctx->pc = 0x1dc248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc24c: 0xc07cd0f
    ctx->pc = 0x1DC24Cu;
    SET_GPR_U32(ctx, 31, 0x1DC254u);
    ctx->pc = 0x1F343Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F343C_0x1f343c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC254u; }
    }
    if (ctx->pc != 0x1DC254u) { return; }
    ctx->pc = 0x1DC254u;
    // 0x1dc254: 0x40182d
    ctx->pc = 0x1dc254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc258: 0x8fc20008
    ctx->pc = 0x1dc258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc25c: 0xac43000c
    ctx->pc = 0x1dc25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dc260: 0x8fc30008
    ctx->pc = 0x1dc260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc264: 0x8fc20000
    ctx->pc = 0x1dc264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc268: 0x8c420044
    ctx->pc = 0x1dc268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dc26c: 0xac620004
    ctx->pc = 0x1dc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dc270: 0x8fc20008
    ctx->pc = 0x1dc270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc274: 0xac400008
    ctx->pc = 0x1dc274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1dc278: 0x8fc20008
    ctx->pc = 0x1dc278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc27c: 0xa4400002
    ctx->pc = 0x1dc27cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_1dc280:
    // 0x1dc280: 0x3c0e82d
    ctx->pc = 0x1dc280u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc284: 0xdfbe0010
    ctx->pc = 0x1dc284u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc288: 0xdfbf0018
    ctx->pc = 0x1dc288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc28c: 0x27bd0020
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc290: 0x3e00008
    ctx->pc = 0x1DC290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC228u: goto label_1dc228;
            case 0x1DC280u: goto label_1dc280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC298u;
}
