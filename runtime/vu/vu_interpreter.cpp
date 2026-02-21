#include "vu_interpreter.h"
#include <cstdio>
#include <cstring>
#include <cmath>

namespace reo {

VUInterpreter::VUInterpreter(int unit_id, uint8_t* code_mem, uint32_t code_size,
                             uint8_t* data_mem, uint32_t data_size)
    : m_unit_id(unit_id)
    , m_code_mem(code_mem)
    , m_code_size(code_size)
    , m_data_mem(data_mem)
    , m_data_size(data_size)
{
    reset();
}

void VUInterpreter::reset() {
    m_state.reset();
}

void VUInterpreter::start(uint32_t addr) {
    m_state.pc = addr;
    m_state.running = true;
    m_state.stall_cycles = 0;
    printf("[VU%d] Start execution at 0x%04X\n", m_unit_id, addr);
}

void VUInterpreter::step() {
    if (!m_state.running) return;

    if (m_state.pc >= m_code_size) {
        printf("[VU%d] PC out of bounds: 0x%04X (code size: 0x%X)\n",
               m_unit_id, m_state.pc, m_code_size);
        m_state.running = false;
        return;
    }

    // Each VU instruction is 8 bytes: 4 bytes upper + 4 bytes lower
    // They execute in parallel (dual-issue)
    uint32_t* code = (uint32_t*)(m_code_mem + m_state.pc);
    uint32_t lower = code[0];
    uint32_t upper = code[1];

    // Check for STOP bit (bit 31 of lower instruction)
    // Actually the stop bit is indicated by the lower word being a NOP with stop flag
    // For VU microcode, the end-of-program marker varies

    execute_upper(upper);
    execute_lower(lower);

    m_state.pc += 8;

    // VF[0] is always (0, 0, 0, 1) — enforce this
    m_state.vf[0].x = 0.0f;
    m_state.vf[0].y = 0.0f;
    m_state.vf[0].z = 0.0f;
    m_state.vf[0].w = 1.0f;

    // VI[0] is always 0
    m_state.vi[0] = 0;
}

void VUInterpreter::run(int max_cycles) {
    for (int i = 0; i < max_cycles && m_state.running; i++) {
        step();
    }

    if (m_state.running) {
        printf("[VU%d] Warning: execution did not complete within %d cycles\n",
               m_unit_id, max_cycles);
    }
}

void VUInterpreter::execute_upper(uint32_t inst) {
    // Decode upper instruction (FMAC operations)
    // Format varies by opcode
    // Bits [31:26] = opcode
    uint32_t opcode = (inst >> 26) & 0x3F;

    // Destination mask (xyzw) in bits [24:21]
    // uint32_t dest = (inst >> 21) & 0xF;

    switch (opcode) {
    case 0x00: // ADDx/ADDy/ADDz/ADDw
        vu_add(inst);
        break;
    case 0x01: // SUBx/SUBy/SUBz/SUBw
        vu_sub(inst);
        break;
    case 0x02: // MADDx/MADDy/MADDz/MADDw
        vu_madd(inst);
        break;
    case 0x03: // MSUBx/MSUBy/MSUBz/MSUBw
        vu_msub(inst);
        break;
    case 0x04: // MAXx/MAXy/MAXz/MAXw
        vu_max(inst);
        break;
    case 0x05: // MINx/MINy/MINz/MINw
        vu_min(inst);
        break;
    case 0x06: // MULx/MULy/MULz/MULw
        vu_mul(inst);
        break;
    case 0x0A: // ADD
        vu_add(inst);
        break;
    case 0x0B: // SUB
        vu_sub(inst);
        break;
    case 0x0C: // MADD
        vu_madd(inst);
        break;
    case 0x0D: // MSUB
        vu_msub(inst);
        break;
    case 0x0E: // MAX
        vu_max(inst);
        break;
    case 0x0F: // MINI
        vu_min(inst);
        break;
    case 0x10: // MUL
        vu_mul(inst);
        break;
    case 0x1C: // special (FTOI, ITOF, etc.)
        // sub-opcode in lower bits
        vu_ftoi(inst);
        break;
    default:
        // NOP or unimplemented
        break;
    }
}

void VUInterpreter::execute_lower(uint32_t inst) {
    // Lower instruction decode
    uint32_t opcode = inst & 0x3F;

    // Check for special lower instructions
    if (inst == 0x8000033C || inst == 0x00000000) {
        // NOP
        return;
    }

    // Check for STOP (indicated by specific patterns)
    if ((inst & 0x7FF) == 0x3FF) {
        // STOP instruction
        m_state.running = false;
        printf("[VU%d] STOP at PC=0x%04X\n", m_unit_id, m_state.pc);
        return;
    }

    switch (opcode & 0x3F) {
    case 0x30: // IADD
        vu_iadd(inst);
        break;
    case 0x31: // ISUB
        vu_isub(inst);
        break;
    case 0x34: // IOR
        vu_ior(inst);
        break;
    case 0x35: // IAND
        vu_iand(inst);
        break;
    default:
        // Many more lower opcodes to implement
        break;
    }
}

// Stub implementations — these will be filled in as we test with actual VU programs

void VUInterpreter::vu_add(uint32_t inst) {
    // TODO: Full ADD implementation with dest mask and broadcast
}

void VUInterpreter::vu_sub(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_mul(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_madd(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_msub(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_max(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_min(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_ftoi(uint32_t inst) {
    // TODO: Float-to-integer conversion
}

void VUInterpreter::vu_itof(uint32_t inst) {
    // TODO: Integer-to-float conversion
}

void VUInterpreter::vu_div(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_sqrt(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_rsqrt(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_iadd(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_isub(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_iand(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_ior(uint32_t inst) {
    // TODO
}

void VUInterpreter::vu_ilw(uint32_t inst) {
    // TODO: Integer load word from VU data memory
}

void VUInterpreter::vu_isw(uint32_t inst) {
    // TODO: Integer store word to VU data memory
}

void VUInterpreter::vu_lq(uint32_t inst) {
    // TODO: Load quadword from VU data memory
}

void VUInterpreter::vu_sq(uint32_t inst) {
    // TODO: Store quadword to VU data memory
}

void VUInterpreter::vu_branch(uint32_t inst) {
    // TODO: Conditional/unconditional branches
}

void VUInterpreter::vu_xgkick(uint32_t inst) {
    // VU1 only — kick GIF packet to GS via PATH1
    if (m_unit_id != 1) return;

    uint32_t addr = m_state.vi[(inst >> 11) & 0x1F] * 16;
    printf("[VU1] XGKICK: addr=0x%04X\n", addr);

    // TODO: Read GIF packet from VU1 data memory and submit to GS renderer
}

} // namespace reo
