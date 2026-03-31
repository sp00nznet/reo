#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_156200
// Address: 0x156200 - 0x1562d0
void entry_156200_0x1562d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x156200u;

    // 0x156200: 0x52e00
    ctx->pc = 0x156200u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x156204: 0x30c2000f
    ctx->pc = 0x156204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 15));
    // 0x156208: 0x52e03
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x15620c: 0x10400009
    ctx->pc = 0x15620Cu;
    {
        const bool branch_taken_0x15620c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x156210u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        if (branch_taken_0x15620c) {
            ctx->pc = 0x156234u;
            goto label_156234;
        }
    }
    ctx->pc = 0x156214u;
    // 0x156214: 0x0
    ctx->pc = 0x156214u;
    // NOP
label_156218:
    // 0x156218: 0x2484ffff
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15621c: 0x2442ffff
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156220: 0x0
    ctx->pc = 0x156220u;
    // NOP
    // 0x156224: 0x0
    ctx->pc = 0x156224u;
    // NOP
    // 0x156228: 0x0
    ctx->pc = 0x156228u;
    // NOP
    // 0x15622c: 0x1440fffa
    ctx->pc = 0x15622Cu;
    {
        const bool branch_taken_0x15622c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156230u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x15622c) {
            ctx->pc = 0x156218u;
            goto label_156218;
        }
    }
    ctx->pc = 0x156234u;
label_156234:
    // 0x156234: 0x63102
    ctx->pc = 0x156234u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
    // 0x156238: 0x10c00023
    ctx->pc = 0x156238u;
    {
        const bool branch_taken_0x156238 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x156238) {
            ctx->pc = 0x1562C8u;
            goto label_1562c8;
        }
    }
    ctx->pc = 0x156240u;
label_156240:
    // 0x156240: 0x2484ffff
    ctx->pc = 0x156240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156244: 0x24c6ffff
    ctx->pc = 0x156244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x156248: 0xa0850000
    ctx->pc = 0x156248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15624c: 0x2484ffff
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156250: 0xa0850000
    ctx->pc = 0x156250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x156254: 0x2484ffff
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156258: 0xa0850000
    ctx->pc = 0x156258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15625c: 0x2484ffff
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156260: 0xa0850000
    ctx->pc = 0x156260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x156264: 0x2484ffff
    ctx->pc = 0x156264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156268: 0xa0850000
    ctx->pc = 0x156268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15626c: 0x2484ffff
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156270: 0xa0850000
    ctx->pc = 0x156270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x156274: 0x2484ffff
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156278: 0xa0850000
    ctx->pc = 0x156278u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15627c: 0x2484ffff
    ctx->pc = 0x15627cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156280: 0xa0850000
    ctx->pc = 0x156280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x156284: 0x2484ffff
    ctx->pc = 0x156284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156288: 0xa0850000
    ctx->pc = 0x156288u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15628c: 0x2484ffff
    ctx->pc = 0x15628cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156290: 0xa0850000
    ctx->pc = 0x156290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x156294: 0x2484ffff
    ctx->pc = 0x156294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156298: 0xa0850000
    ctx->pc = 0x156298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x15629c: 0x2484ffff
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1562a0: 0xa0850000
    ctx->pc = 0x1562a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1562a4: 0x2484ffff
    ctx->pc = 0x1562a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1562a8: 0xa0850000
    ctx->pc = 0x1562a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1562ac: 0x2484ffff
    ctx->pc = 0x1562acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1562b0: 0xa0850000
    ctx->pc = 0x1562b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1562b4: 0x2484ffff
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1562b8: 0xa0850000
    ctx->pc = 0x1562b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1562bc: 0x2484ffff
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1562c0: 0x14c0ffdf
    ctx->pc = 0x1562C0u;
    {
        const bool branch_taken_0x1562c0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1562C4u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1562c0) {
            ctx->pc = 0x156240u;
            goto label_156240;
        }
    }
    ctx->pc = 0x1562C8u;
label_1562c8:
    // 0x1562c8: 0x3e00008
    ctx->pc = 0x1562C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156218u: goto label_156218;
            case 0x156234u: goto label_156234;
            case 0x156240u: goto label_156240;
            case 0x1562C8u: goto label_1562c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1562D0u;
}
