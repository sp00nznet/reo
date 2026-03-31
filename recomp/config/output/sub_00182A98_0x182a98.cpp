#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182A98
// Address: 0x182a98 - 0x182c08
void sub_00182A98_0x182a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182a98u;

    // 0x182a98: 0xa0382d
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a9c: 0x27bdffb0
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182aa0: 0x28e30000
    ctx->pc = 0x182aa0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 0));
    // 0x182aa4: 0x24e800ff
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 255));
    // 0x182aa8: 0xe0102d
    ctx->pc = 0x182aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182aac: 0xffb60030
    ctx->pc = 0x182aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x182ab0: 0x103100b
    ctx->pc = 0x182ab0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 8));
    // 0x182ab4: 0xffb50028
    ctx->pc = 0x182ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x182ab8: 0x2b203
    ctx->pc = 0x182ab8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 8));
    // 0x182abc: 0xc0a82d
    ctx->pc = 0x182abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ac0: 0x161a00
    ctx->pc = 0x182ac0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 22), 8));
    // 0x182ac4: 0xffb20010
    ctx->pc = 0x182ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182ac8: 0xffb30018
    ctx->pc = 0x182ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x182acc: 0x80982d
    ctx->pc = 0x182accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ad0: 0xffb00000
    ctx->pc = 0x182ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182ad4: 0xffb10008
    ctx->pc = 0x182ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182ad8: 0xffb40020
    ctx->pc = 0x182ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x182adc: 0xffb70038
    ctx->pc = 0x182adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x182ae0: 0xffbf0040
    ctx->pc = 0x182ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182ae4: 0xc060a3a
    ctx->pc = 0x182AE4u;
    SET_GPR_U32(ctx, 31, 0x182AECu);
    ctx->pc = 0x182AE8u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x1828E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001828E8_0x1828e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AECu; }
    }
    if (ctx->pc != 0x182AECu) { return; }
    ctx->pc = 0x182AECu;
    // 0x182aec: 0x8ea30000
    ctx->pc = 0x182aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182af0: 0x40902d
    ctx->pc = 0x182af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182af4: 0x14600038
    ctx->pc = 0x182AF4u;
    {
        const bool branch_taken_0x182af4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x182AF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182af4) {
            ctx->pc = 0x182BD8u;
            goto label_182bd8;
        }
    }
    ctx->pc = 0x182AFCu;
    // 0x182afc: 0x24020898
    ctx->pc = 0x182afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x182b00: 0x3c170028
    ctx->pc = 0x182b00u;
    SET_GPR_U32(ctx, 23, ((uint32_t)40 << 16));
    // 0x182b04: 0x2628018
    ctx->pc = 0x182b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x182b08: 0x26f45b48
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x182b0c: 0x26020800
    ctx->pc = 0x182b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2048));
    // 0x182b10: 0x548821
    ctx->pc = 0x182b10u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x182b14: 0x8e230000
    ctx->pc = 0x182b14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182b18: 0x10720027
    ctx->pc = 0x182B18u;
    {
        const bool branch_taken_0x182b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x182B1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 550));
        if (branch_taken_0x182b18) {
            ctx->pc = 0x182BB8u;
            goto label_182bb8;
        }
    }
    ctx->pc = 0x182B20u;
    // 0x182b20: 0xc060a84
    ctx->pc = 0x182B20u;
    SET_GPR_U32(ctx, 31, 0x182B28u);
    ctx->pc = 0x182B24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A10_0x182a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B28u; }
    }
    if (ctx->pc != 0x182B28u) { return; }
    ctx->pc = 0x182B28u;
    // 0x182b28: 0x1040001c
    ctx->pc = 0x182B28u;
    {
        const bool branch_taken_0x182b28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x182b28) {
            ctx->pc = 0x182B9Cu;
            goto label_182b9c;
        }
    }
    ctx->pc = 0x182B30u;
    // 0x182b30: 0x8e220000
    ctx->pc = 0x182b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182b34: 0x1840000f
    ctx->pc = 0x182B34u;
    {
        const bool branch_taken_0x182b34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x182B38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x182b34) {
            ctx->pc = 0x182B74u;
            goto label_182b74;
        }
    }
    ctx->pc = 0x182B3Cu;
    // 0x182b3c: 0x2141021
    ctx->pc = 0x182b3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x182b40: 0x24040001
    ctx->pc = 0x182b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182b44: 0x8c430894
    ctx->pc = 0x182b44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x182b48: 0x5464000a
    ctx->pc = 0x182B48u;
    {
        const bool branch_taken_0x182b48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x182b48) {
            ctx->pc = 0x182B4Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
            ctx->pc = 0x182B74u;
            goto label_182b74;
        }
    }
    ctx->pc = 0x182B50u;
    // 0x182b50: 0x26850400
    ctx->pc = 0x182b50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 1024));
    // 0x182b54: 0x260202d
    ctx->pc = 0x182b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b58: 0x2052821
    ctx->pc = 0x182b58u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x182b5c: 0x240302d
    ctx->pc = 0x182b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b60: 0xc061baa
    ctx->pc = 0x182B60u;
    SET_GPR_U32(ctx, 31, 0x182B68u);
    ctx->pc = 0x182B64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x186EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EA8_0x186ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B68u; }
    }
    if (ctx->pc != 0x182B68u) { return; }
    ctx->pc = 0x182B68u;
    // 0x182b68: 0x1040000c
    ctx->pc = 0x182B68u;
    {
        const bool branch_taken_0x182b68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x182b68) {
            ctx->pc = 0x182B9Cu;
            goto label_182b9c;
        }
    }
    ctx->pc = 0x182B70u;
    // 0x182b70: 0x24020898
    ctx->pc = 0x182b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
label_182b74:
    // 0x182b74: 0x3c030028
    ctx->pc = 0x182b74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x182b78: 0x2628018
    ctx->pc = 0x182b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x182b7c: 0x24715f48
    ctx->pc = 0x182b7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 24392));
    // 0x182b80: 0x260202d
    ctx->pc = 0x182b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b84: 0x240302d
    ctx->pc = 0x182b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b88: 0x24070001
    ctx->pc = 0x182b88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182b8c: 0xc061b98
    ctx->pc = 0x182B8Cu;
    SET_GPR_U32(ctx, 31, 0x182B94u);
    ctx->pc = 0x182B90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x186E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E60_0x186e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B94u; }
    }
    if (ctx->pc != 0x182B94u) { return; }
    ctx->pc = 0x182B94u;
    // 0x182b94: 0x54400006
    ctx->pc = 0x182B94u;
    {
        const bool branch_taken_0x182b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x182b94) {
            ctx->pc = 0x182B98u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->pc = 0x182BB0u;
            goto label_182bb0;
        }
    }
    ctx->pc = 0x182B9Cu;
label_182b9c:
    // 0x182b9c: 0x3c038101
    ctx->pc = 0x182b9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x182ba0: 0x3463006f
    ctx->pc = 0x182ba0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 111));
    // 0x182ba4: 0x1000000c
    ctx->pc = 0x182BA4u;
    {
        const bool branch_taken_0x182ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x182ba4) {
            ctx->pc = 0x182BD8u;
            goto label_182bd8;
        }
    }
    ctx->pc = 0x182BACu;
    // 0x182bac: 0x0
    ctx->pc = 0x182bacu;
    // NOP
label_182bb0:
    // 0x182bb0: 0xac520400
    ctx->pc = 0x182bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
    // 0x182bb4: 0x24020226
    ctx->pc = 0x182bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 550));
label_182bb8:
    // 0x182bb8: 0x26e35b48
    ctx->pc = 0x182bb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 23368));
    // 0x182bbc: 0x2622018
    ctx->pc = 0x182bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x182bc0: 0x961021
    ctx->pc = 0x182bc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x182bc4: 0x21080
    ctx->pc = 0x182bc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x182bc8: 0x431021
    ctx->pc = 0x182bc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182bcc: 0x8c520400
    ctx->pc = 0x182bccu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x182bd0: 0xaea00000
    ctx->pc = 0x182bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x182bd4: 0x240102d
    ctx->pc = 0x182bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182bd8:
    // 0x182bd8: 0xdfb00000
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182bdc: 0xdfb10008
    ctx->pc = 0x182bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182be0: 0xdfb20010
    ctx->pc = 0x182be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182be4: 0xdfb30018
    ctx->pc = 0x182be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182be8: 0xdfb40020
    ctx->pc = 0x182be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182bec: 0xdfb50028
    ctx->pc = 0x182becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182bf0: 0xdfb60030
    ctx->pc = 0x182bf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182bf4: 0xdfb70038
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182bf8: 0xdfbf0040
    ctx->pc = 0x182bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182bfc: 0x3e00008
    ctx->pc = 0x182BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182B74u: goto label_182b74;
            case 0x182B9Cu: goto label_182b9c;
            case 0x182BB0u: goto label_182bb0;
            case 0x182BB8u: goto label_182bb8;
            case 0x182BD8u: goto label_182bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182C04u;
    // 0x182c04: 0x0
    ctx->pc = 0x182c04u;
    // NOP
}
