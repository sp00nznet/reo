#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC4F0
// Address: 0x1bc4f0 - 0x1bc6f0
void sub_001BC4F0_0x1bc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc4f0u;

    // 0x1bc4f0: 0x27bdffd0
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc4f4: 0x2404006c
    ctx->pc = 0x1bc4f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bc4f8: 0xffbf0010
    ctx->pc = 0x1bc4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc4fc: 0x24050001
    ctx->pc = 0x1bc4fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc500: 0x7fb00000
    ctx->pc = 0x1bc500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc504: 0x3c100031
    ctx->pc = 0x1bc504u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x1bc508: 0xc06bde0
    ctx->pc = 0x1BC508u;
    SET_GPR_U32(ctx, 31, 0x1BC510u);
    ctx->pc = 0x1BC50Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26048));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC510u; }
    }
    if (ctx->pc != 0x1BC510u) { return; }
    ctx->pc = 0x1BC510u;
    // 0x1bc510: 0x202d
    ctx->pc = 0x1bc510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc514: 0xc0682f0
    ctx->pc = 0x1BC514u;
    SET_GPR_U32(ctx, 31, 0x1BC51Cu);
    ctx->pc = 0x1BC518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0BC0_0x1a0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC51Cu; }
    }
    if (ctx->pc != 0x1BC51Cu) { return; }
    ctx->pc = 0x1BC51Cu;
    // 0x1bc51c: 0x2404006c
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bc520: 0xc065804
    ctx->pc = 0x1BC520u;
    SET_GPR_U32(ctx, 31, 0x1BC528u);
    ctx->pc = 0x1BC524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00196010_0x196010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC528u; }
    }
    if (ctx->pc != 0x1BC528u) { return; }
    ctx->pc = 0x1BC528u;
    // 0x1bc528: 0xc06e0a8
    ctx->pc = 0x1BC528u;
    SET_GPR_U32(ctx, 31, 0x1BC530u);
    ctx->pc = 0x1BC52Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC530u; }
    }
    if (ctx->pc != 0x1BC530u) { return; }
    ctx->pc = 0x1BC530u;
    // 0x1bc530: 0x1440001b
    ctx->pc = 0x1BC530u;
    {
        const bool branch_taken_0x1bc530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bc530) {
            ctx->pc = 0x1BC5A0u;
            goto label_1bc5a0;
        }
    }
    ctx->pc = 0x1BC538u;
    // 0x1bc538: 0x92030000
    ctx->pc = 0x1bc538u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc53c: 0x10600018
    ctx->pc = 0x1BC53Cu;
    {
        const bool branch_taken_0x1bc53c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC540u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x1bc53c) {
            ctx->pc = 0x1BC5A0u;
            goto label_1bc5a0;
        }
    }
    ctx->pc = 0x1BC544u;
    // 0x1bc544: 0xc065804
    ctx->pc = 0x1BC544u;
    SET_GPR_U32(ctx, 31, 0x1BC54Cu);
    ctx->pc = 0x1BC548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x196010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00196010_0x196010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC54Cu; }
    }
    if (ctx->pc != 0x1BC54Cu) { return; }
    ctx->pc = 0x1BC54Cu;
    // 0x1bc54c: 0x24040060
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bc550: 0xc065804
    ctx->pc = 0x1BC550u;
    SET_GPR_U32(ctx, 31, 0x1BC558u);
    ctx->pc = 0x1BC554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00196010_0x196010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC558u; }
    }
    if (ctx->pc != 0x1BC558u) { return; }
    ctx->pc = 0x1BC558u;
    // 0x1bc558: 0x24040004
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc55c: 0xc06bc78
    ctx->pc = 0x1BC55Cu;
    SET_GPR_U32(ctx, 31, 0x1BC564u);
    ctx->pc = 0x1BC560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC564u; }
    }
    if (ctx->pc != 0x1BC564u) { return; }
    ctx->pc = 0x1BC564u;
    // 0x1bc564: 0x24020280
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1bc568: 0xa7a00020
    ctx->pc = 0x1bc568u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc56c: 0xa7a20024
    ctx->pc = 0x1bc56cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc570: 0x27a40020
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bc574: 0x240201c0
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bc578: 0xa7a00022
    ctx->pc = 0x1bc578u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc57c: 0xa7a20026
    ctx->pc = 0x1bc57cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc580: 0x8e03000c
    ctx->pc = 0x1bc580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc584: 0x92020010
    ctx->pc = 0x1bc584u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bc588: 0x31a3c
    ctx->pc = 0x1bc588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1bc58c: 0x31a3e
    ctx->pc = 0x1bc58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1bc590: 0x21600
    ctx->pc = 0x1bc590u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1bc594: 0x621025
    ctx->pc = 0x1bc594u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc598: 0xc06aed8
    ctx->pc = 0x1BC598u;
    SET_GPR_U32(ctx, 31, 0x1BC5A0u);
    ctx->pc = 0x1BC59Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5A0u; }
    }
    if (ctx->pc != 0x1BC5A0u) { return; }
    ctx->pc = 0x1BC5A0u;
label_1bc5a0:
    // 0x1bc5a0: 0xdfbf0010
    ctx->pc = 0x1bc5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc5a4: 0x7bb00000
    ctx->pc = 0x1bc5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc5a8: 0x3e00008
    ctx->pc = 0x1BC5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC5ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC5A0u: goto label_1bc5a0;
            case 0x1BC610u: goto label_1bc610;
            case 0x1BC628u: goto label_1bc628;
            case 0x1BC688u: goto label_1bc688;
            case 0x1BC6C8u: goto label_1bc6c8;
            case 0x1BC6D8u: goto label_1bc6d8;
            case 0x1BC6E0u: goto label_1bc6e0;
            case 0x1BC6E4u: goto label_1bc6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC5B0u;
    // 0x1bc5b0: 0x3c010031
    ctx->pc = 0x1bc5b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc5b4: 0x902265c0
    ctx->pc = 0x1bc5b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26048)));
    // 0x1bc5b8: 0x38420001
    ctx->pc = 0x1bc5b8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1bc5bc: 0x3e00008
    ctx->pc = 0x1BC5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC5C0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC5A0u: goto label_1bc5a0;
            case 0x1BC610u: goto label_1bc610;
            case 0x1BC628u: goto label_1bc628;
            case 0x1BC688u: goto label_1bc688;
            case 0x1BC6C8u: goto label_1bc6c8;
            case 0x1BC6D8u: goto label_1bc6d8;
            case 0x1BC6E0u: goto label_1bc6e0;
            case 0x1BC6E4u: goto label_1bc6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC5C4u;
    // 0x1bc5c4: 0x0
    ctx->pc = 0x1bc5c4u;
    // NOP
    // 0x1bc5c8: 0x0
    ctx->pc = 0x1bc5c8u;
    // NOP
    // 0x1bc5cc: 0x0
    ctx->pc = 0x1bc5ccu;
    // NOP
    // 0x1bc5d0: 0x27bdffd0
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc5d4: 0x3c010032
    ctx->pc = 0x1bc5d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bc5d8: 0xffbf0010
    ctx->pc = 0x1bc5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc5dc: 0x24030080
    ctx->pc = 0x1bc5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc5e0: 0x7fb00000
    ctx->pc = 0x1bc5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc5e4: 0x903043f0
    ctx->pc = 0x1bc5e4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17392)));
    // 0x1bc5e8: 0x12030027
    ctx->pc = 0x1BC5E8u;
    {
        const bool branch_taken_0x1bc5e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BC5ECu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), 129));
        if (branch_taken_0x1bc5e8) {
            ctx->pc = 0x1BC688u;
            goto label_1bc688;
        }
    }
    ctx->pc = 0x1BC5F0u;
    // 0x1bc5f0: 0x14200007
    ctx->pc = 0x1BC5F0u;
    {
        const bool branch_taken_0x1bc5f0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BC5F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1bc5f0) {
            ctx->pc = 0x1BC610u;
            goto label_1bc610;
        }
    }
    ctx->pc = 0x1BC5F8u;
    // 0x1bc5f8: 0x24040004
    ctx->pc = 0x1bc5f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc5fc: 0xc06bc78
    ctx->pc = 0x1BC5FCu;
    SET_GPR_U32(ctx, 31, 0x1BC604u);
    ctx->pc = 0x1BC600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC604u; }
    }
    if (ctx->pc != 0x1BC604u) { return; }
    ctx->pc = 0x1BC604u;
    // 0x1bc604: 0x2610ff80
    ctx->pc = 0x1bc604u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x1bc608: 0x10000007
    ctx->pc = 0x1BC608u;
    {
        const bool branch_taken_0x1bc608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC60Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1bc608) {
            ctx->pc = 0x1BC628u;
            goto label_1bc628;
        }
    }
    ctx->pc = 0x1BC610u;
label_1bc610:
    // 0x1bc610: 0xc06bc78
    ctx->pc = 0x1BC610u;
    SET_GPR_U32(ctx, 31, 0x1BC618u);
    ctx->pc = 0x1BC614u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC618u; }
    }
    if (ctx->pc != 0x1BC618u) { return; }
    ctx->pc = 0x1BC618u;
    // 0x1bc618: 0x24020080
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc61c: 0x282d
    ctx->pc = 0x1bc61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc620: 0x508023
    ctx->pc = 0x1bc620u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bc624: 0x108040
    ctx->pc = 0x1bc624u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_1bc628:
    // 0x1bc628: 0x24020280
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1bc62c: 0x101e00
    ctx->pc = 0x1bc62cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 24));
    // 0x1bc630: 0xa7a20024
    ctx->pc = 0x1bc630u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc634: 0x2404005f
    ctx->pc = 0x1bc634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1bc638: 0x240201c0
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bc63c: 0xa7a00022
    ctx->pc = 0x1bc63cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc640: 0xa7a20026
    ctx->pc = 0x1bc640u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc644: 0x51400
    ctx->pc = 0x1bc644u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1bc648: 0xa7a00020
    ctx->pc = 0x1bc648u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc64c: 0x621825
    ctx->pc = 0x1bc64cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc650: 0x51200
    ctx->pc = 0x1bc650u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 8));
    // 0x1bc654: 0x431025
    ctx->pc = 0x1bc654u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc658: 0xa21025
    ctx->pc = 0x1bc658u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bc65c: 0x24050005
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bc660: 0xc06bde0
    ctx->pc = 0x1BC660u;
    SET_GPR_U32(ctx, 31, 0x1BC668u);
    ctx->pc = 0x1BC664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC668u; }
    }
    if (ctx->pc != 0x1BC668u) { return; }
    ctx->pc = 0x1BC668u;
    // 0x1bc668: 0x24040060
    ctx->pc = 0x1bc668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bc66c: 0xc06bde0
    ctx->pc = 0x1BC66Cu;
    SET_GPR_U32(ctx, 31, 0x1BC674u);
    ctx->pc = 0x1BC670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC674u; }
    }
    if (ctx->pc != 0x1BC674u) { return; }
    ctx->pc = 0x1BC674u;
    // 0x1bc674: 0x2404006c
    ctx->pc = 0x1bc674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bc678: 0xc06bde0
    ctx->pc = 0x1BC678u;
    SET_GPR_U32(ctx, 31, 0x1BC680u);
    ctx->pc = 0x1BC67Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC680u; }
    }
    if (ctx->pc != 0x1BC680u) { return; }
    ctx->pc = 0x1BC680u;
    // 0x1bc680: 0xc06aed8
    ctx->pc = 0x1BC680u;
    SET_GPR_U32(ctx, 31, 0x1BC688u);
    ctx->pc = 0x1BC684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC688u; }
    }
    if (ctx->pc != 0x1BC688u) { return; }
    ctx->pc = 0x1BC688u;
label_1bc688:
    // 0x1bc688: 0xdfbf0010
    ctx->pc = 0x1bc688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc68c: 0x7bb00000
    ctx->pc = 0x1bc68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc690: 0x3e00008
    ctx->pc = 0x1BC690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC5A0u: goto label_1bc5a0;
            case 0x1BC610u: goto label_1bc610;
            case 0x1BC628u: goto label_1bc628;
            case 0x1BC688u: goto label_1bc688;
            case 0x1BC6C8u: goto label_1bc6c8;
            case 0x1BC6D8u: goto label_1bc6d8;
            case 0x1BC6E0u: goto label_1bc6e0;
            case 0x1BC6E4u: goto label_1bc6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC698u;
    // 0x1bc698: 0x0
    ctx->pc = 0x1bc698u;
    // NOP
    // 0x1bc69c: 0x0
    ctx->pc = 0x1bc69cu;
    // NOP
    // 0x1bc6a0: 0x27bdfff0
    ctx->pc = 0x1bc6a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc6a4: 0x24030001
    ctx->pc = 0x1bc6a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc6a8: 0xffbf0000
    ctx->pc = 0x1bc6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc6ac: 0x90850008
    ctx->pc = 0x1bc6acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bc6b0: 0x10a30009
    ctx->pc = 0x1BC6B0u;
    {
        const bool branch_taken_0x1bc6b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bc6b0) {
            ctx->pc = 0x1BC6D8u;
            goto label_1bc6d8;
        }
    }
    ctx->pc = 0x1BC6B8u;
    // 0x1bc6b8: 0x10a00003
    ctx->pc = 0x1BC6B8u;
    {
        const bool branch_taken_0x1bc6b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc6b8) {
            ctx->pc = 0x1BC6C8u;
            goto label_1bc6c8;
        }
    }
    ctx->pc = 0x1BC6C0u;
    // 0x1bc6c0: 0x10000008
    ctx->pc = 0x1BC6C0u;
    {
        const bool branch_taken_0x1bc6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC6C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1bc6c0) {
            ctx->pc = 0x1BC6E4u;
            goto label_1bc6e4;
        }
    }
    ctx->pc = 0x1BC6C8u;
label_1bc6c8:
    // 0x1bc6c8: 0xc06f1bc
    ctx->pc = 0x1BC6C8u;
    SET_GPR_U32(ctx, 31, 0x1BC6D0u);
    ctx->pc = 0x1BC6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC6F0_0x1bc6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D0u; }
    }
    if (ctx->pc != 0x1BC6D0u) { return; }
    ctx->pc = 0x1BC6D0u;
    // 0x1bc6d0: 0x10000003
    ctx->pc = 0x1BC6D0u;
    {
        const bool branch_taken_0x1bc6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc6d0) {
            ctx->pc = 0x1BC6E0u;
            goto label_1bc6e0;
        }
    }
    ctx->pc = 0x1BC6D8u;
label_1bc6d8:
    // 0x1bc6d8: 0xc06f21c
    ctx->pc = 0x1BC6D8u;
    SET_GPR_U32(ctx, 31, 0x1BC6E0u);
    ctx->pc = 0x1BC870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC870_0x1bc870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6E0u; }
    }
    if (ctx->pc != 0x1BC6E0u) { return; }
    ctx->pc = 0x1BC6E0u;
label_1bc6e0:
    // 0x1bc6e0: 0xdfbf0000
    ctx->pc = 0x1bc6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc6e4:
    // 0x1bc6e4: 0x3e00008
    ctx->pc = 0x1BC6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC6E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC5A0u: goto label_1bc5a0;
            case 0x1BC610u: goto label_1bc610;
            case 0x1BC628u: goto label_1bc628;
            case 0x1BC688u: goto label_1bc688;
            case 0x1BC6C8u: goto label_1bc6c8;
            case 0x1BC6D8u: goto label_1bc6d8;
            case 0x1BC6E0u: goto label_1bc6e0;
            case 0x1BC6E4u: goto label_1bc6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC6ECu;
    // 0x1bc6ec: 0x0
    ctx->pc = 0x1bc6ecu;
    // NOP
}
