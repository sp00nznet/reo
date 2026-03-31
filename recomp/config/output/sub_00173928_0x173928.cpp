#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173928
// Address: 0x173928 - 0x173990
void sub_00173928_0x173928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173928u;

label_173928:
    // 0x173928: 0x27bdffe0
    ctx->pc = 0x173928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17392c:
    // 0x17392c: 0xffb00000
    ctx->pc = 0x17392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173930:
    // 0x173930: 0xffb10008
    ctx->pc = 0x173930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173934:
    // 0x173934: 0x80882d
    ctx->pc = 0x173934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173938:
    // 0x173938: 0xffb20010
    ctx->pc = 0x173938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17393c:
    // 0x17393c: 0xc0902d
    ctx->pc = 0x17393cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_173940:
    // 0x173940: 0xffbf0018
    ctx->pc = 0x173940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_173944:
    // 0x173944: 0x2630094c
    ctx->pc = 0x173944u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2380));
label_173948:
    // 0x173948: 0x8e020004
    ctx->pc = 0x173948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17394c:
    // 0x17394c: 0x451021
    ctx->pc = 0x17394cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_173950:
    // 0x173950: 0x24050025
    ctx->pc = 0x173950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
label_173954:
    // 0x173954: 0xc05d58a
label_173958:
    if (ctx->pc == 0x173958u) {
        ctx->pc = 0x173958u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x17395Cu;
        goto label_17395c;
    }
    ctx->pc = 0x173954u;
    SET_GPR_U32(ctx, 31, 0x17395Cu);
    ctx->pc = 0x173958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17395Cu; }
    }
    if (ctx->pc != 0x17395Cu) { return; }
    ctx->pc = 0x17395Cu;
label_17395c:
    // 0x17395c: 0x220202d
    ctx->pc = 0x17395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173960:
    // 0x173960: 0x240282d
    ctx->pc = 0x173960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173964:
    // 0x173964: 0x10400003
label_173968:
    if (ctx->pc == 0x173968u) {
        ctx->pc = 0x173968u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17396Cu;
        goto label_17396c;
    }
    ctx->pc = 0x173964u;
    {
        const bool branch_taken_0x173964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173968u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173964) {
            ctx->pc = 0x173974u;
            goto label_173974;
        }
    }
    ctx->pc = 0x17396Cu;
label_17396c:
    // 0x17396c: 0x40f809
label_173970:
    if (ctx->pc == 0x173970u) {
        ctx->pc = 0x173974u;
        goto label_173974;
    }
    ctx->pc = 0x17396Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173974u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173928u: goto label_173928;
            case 0x17392Cu: goto label_17392c;
            case 0x173930u: goto label_173930;
            case 0x173934u: goto label_173934;
            case 0x173938u: goto label_173938;
            case 0x17393Cu: goto label_17393c;
            case 0x173940u: goto label_173940;
            case 0x173944u: goto label_173944;
            case 0x173948u: goto label_173948;
            case 0x17394Cu: goto label_17394c;
            case 0x173950u: goto label_173950;
            case 0x173954u: goto label_173954;
            case 0x173958u: goto label_173958;
            case 0x17395Cu: goto label_17395c;
            case 0x173960u: goto label_173960;
            case 0x173964u: goto label_173964;
            case 0x173968u: goto label_173968;
            case 0x17396Cu: goto label_17396c;
            case 0x173970u: goto label_173970;
            case 0x173974u: goto label_173974;
            case 0x173978u: goto label_173978;
            case 0x17397Cu: goto label_17397c;
            case 0x173980u: goto label_173980;
            case 0x173984u: goto label_173984;
            case 0x173988u: goto label_173988;
            case 0x17398Cu: goto label_17398c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173974u; }
            if (ctx->pc != 0x173974u) { return; }
        }
    }
    ctx->pc = 0x173974u;
label_173974:
    // 0x173974: 0xdfb00000
    ctx->pc = 0x173974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173978:
    // 0x173978: 0xdfb10008
    ctx->pc = 0x173978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17397c:
    // 0x17397c: 0xdfb20010
    ctx->pc = 0x17397cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173980:
    // 0x173980: 0xdfbf0018
    ctx->pc = 0x173980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_173984:
    // 0x173984: 0x3e00008
label_173988:
    if (ctx->pc == 0x173988u) {
        ctx->pc = 0x173988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17398Cu;
        goto label_17398c;
    }
    ctx->pc = 0x173984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173928u: goto label_173928;
            case 0x17392Cu: goto label_17392c;
            case 0x173930u: goto label_173930;
            case 0x173934u: goto label_173934;
            case 0x173938u: goto label_173938;
            case 0x17393Cu: goto label_17393c;
            case 0x173940u: goto label_173940;
            case 0x173944u: goto label_173944;
            case 0x173948u: goto label_173948;
            case 0x17394Cu: goto label_17394c;
            case 0x173950u: goto label_173950;
            case 0x173954u: goto label_173954;
            case 0x173958u: goto label_173958;
            case 0x17395Cu: goto label_17395c;
            case 0x173960u: goto label_173960;
            case 0x173964u: goto label_173964;
            case 0x173968u: goto label_173968;
            case 0x17396Cu: goto label_17396c;
            case 0x173970u: goto label_173970;
            case 0x173974u: goto label_173974;
            case 0x173978u: goto label_173978;
            case 0x17397Cu: goto label_17397c;
            case 0x173980u: goto label_173980;
            case 0x173984u: goto label_173984;
            case 0x173988u: goto label_173988;
            case 0x17398Cu: goto label_17398c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17398Cu;
label_17398c:
    // 0x17398c: 0x0
    ctx->pc = 0x17398cu;
    // NOP
}
