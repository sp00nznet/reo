#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001876C8
// Address: 0x1876c8 - 0x187798
void sub_001876C8_0x1876c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1876c8u;

    // 0x1876c8: 0x27bdffd0
    ctx->pc = 0x1876c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1876cc: 0x3c020029
    ctx->pc = 0x1876ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1876d0: 0xffb30018
    ctx->pc = 0x1876d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1876d4: 0x3c130023
    ctx->pc = 0x1876d4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x1876d8: 0xffb00000
    ctx->pc = 0x1876d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1876dc: 0x2450d980
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x1876e0: 0xffb10008
    ctx->pc = 0x1876e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1876e4: 0x2671fd20
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 4294966560));
    // 0x1876e8: 0xffb20010
    ctx->pc = 0x1876e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1876ec: 0x80902d
    ctx->pc = 0x1876ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876f0: 0xffbf0020
    ctx->pc = 0x1876f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1876f4: 0xc062230
    ctx->pc = 0x1876F4u;
    SET_GPR_U32(ctx, 31, 0x1876FCu);
    ctx->pc = 0x1876F8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1888C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888C0_0x1888c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876FCu; }
    }
    if (ctx->pc != 0x1876FCu) { return; }
    ctx->pc = 0x1876FCu;
    // 0x1876fc: 0x200202d
    ctx->pc = 0x1876fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187700: 0xc0453c6
    ctx->pc = 0x187700u;
    SET_GPR_U32(ctx, 31, 0x187708u);
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 255));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187708u; }
    }
    if (ctx->pc != 0x187708u) { return; }
    ctx->pc = 0x187708u;
    // 0x187708: 0x8e040000
    ctx->pc = 0x187708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18770c: 0x8e220000
    ctx->pc = 0x18770cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187710: 0x44102a
    ctx->pc = 0x187710u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x187714: 0x10400008
    ctx->pc = 0x187714u;
    {
        const bool branch_taken_0x187714 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187718u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x187714) {
            ctx->pc = 0x187738u;
            goto label_187738;
        }
    }
    ctx->pc = 0x18771Cu;
    // 0x18771c: 0x8c630000
    ctx->pc = 0x18771cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187720: 0x64102a
    ctx->pc = 0x187720u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x187724: 0x50400006
    ctx->pc = 0x187724u;
    {
        const bool branch_taken_0x187724 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187724) {
            ctx->pc = 0x187728u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294966560));
            ctx->pc = 0x187740u;
            goto label_187740;
        }
    }
    ctx->pc = 0x18772Cu;
    // 0x18772c: 0x10000012
    ctx->pc = 0x18772Cu;
    {
        const bool branch_taken_0x18772c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187730u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x18772c) {
            ctx->pc = 0x187778u;
            goto label_187778;
        }
    }
    ctx->pc = 0x187734u;
    // 0x187734: 0x0
    ctx->pc = 0x187734u;
    // NOP
label_187738:
    // 0x187738: 0x8c630000
    ctx->pc = 0x187738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18773c: 0x2665fd20
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294966560));
label_187740:
    // 0x187740: 0x8ca20000
    ctx->pc = 0x187740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187744: 0x43102a
    ctx->pc = 0x187744u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x187748: 0x10400007
    ctx->pc = 0x187748u;
    {
        const bool branch_taken_0x187748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18774Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
        if (branch_taken_0x187748) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x187750u;
    // 0x187750: 0x10400005
    ctx->pc = 0x187750u;
    {
        const bool branch_taken_0x187750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187754u;
        SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
        if (branch_taken_0x187750) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x187758u;
    // 0x187758: 0xaca30000
    ctx->pc = 0x187758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18775c: 0x10000007
    ctx->pc = 0x18775Cu;
    {
        const bool branch_taken_0x18775c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187760u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957568));
        if (branch_taken_0x18775c) {
            ctx->pc = 0x18777Cu;
            goto label_18777c;
        }
    }
    ctx->pc = 0x187764u;
    // 0x187764: 0x0
    ctx->pc = 0x187764u;
    // NOP
label_187768:
    // 0x187768: 0xc0623b6
    ctx->pc = 0x187768u;
    SET_GPR_U32(ctx, 31, 0x187770u);
    ctx->pc = 0x18776Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187770u; }
    }
    if (ctx->pc != 0x187770u) { return; }
    ctx->pc = 0x187770u;
    // 0x187770: 0x24030003
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x187774: 0xae000008
    ctx->pc = 0x187774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_187778:
    // 0x187778: 0x200102d
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18777c:
    // 0x18777c: 0xdfb00000
    ctx->pc = 0x18777cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187780: 0xdfb10008
    ctx->pc = 0x187780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187784: 0xdfb20010
    ctx->pc = 0x187784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187788: 0xdfb30018
    ctx->pc = 0x187788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18778c: 0xdfbf0020
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187790: 0x3e00008
    ctx->pc = 0x187790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187738u: goto label_187738;
            case 0x187740u: goto label_187740;
            case 0x187768u: goto label_187768;
            case 0x187778u: goto label_187778;
            case 0x18777Cu: goto label_18777c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187798u;
}
