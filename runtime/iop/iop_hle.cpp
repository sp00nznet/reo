#include "iop_hle.h"
#include <cstdio>

namespace reo {

IopHLE::IopHLE(Memory& ee_memory) : m_ee_memory(ee_memory) {
}

void IopHLE::sif_rpc_call(uint32_t module_id, uint32_t func_id,
                           uint32_t send_buf, uint32_t send_size,
                           uint32_t recv_buf, uint32_t recv_size) {
    switch (module_id) {
    case SIF_PADMAN:
        hle_padman(func_id, send_buf, recv_buf);
        break;
    case SIF_MCSERV:
        hle_mcserv(func_id, send_buf, recv_buf);
        break;
    case SIF_CDVD:
        hle_cdvd(func_id, send_buf, recv_buf);
        break;
    case SIF_LIBSD:
        hle_libsd(func_id, send_buf, recv_buf);
        break;
    case SIF_INET:
    case SIF_NETCNF:
        hle_inet(func_id, send_buf, recv_buf);
        break;
    default:
        printf("[IOP] Unknown SIF RPC module: 0x%08X func: %d\n", module_id, func_id);
        break;
    }
}

void IopHLE::sif_dma_to_iop(uint32_t ee_addr, uint32_t iop_addr, uint32_t size) {
    // Copy from EE RAM to IOP RAM
    uint8_t* src = m_ee_memory.get_pointer(ee_addr);
    uint8_t* dst = m_ee_memory.iop_ram() + (iop_addr & 0x1FFFFF);
    if (src && dst) {
        memcpy(dst, src, size);
    }
}

void IopHLE::sif_dma_to_ee(uint32_t iop_addr, uint32_t ee_addr, uint32_t size) {
    // Copy from IOP RAM to EE RAM
    uint8_t* src = m_ee_memory.iop_ram() + (iop_addr & 0x1FFFFF);
    uint8_t* dst = m_ee_memory.get_pointer(ee_addr);
    if (src && dst) {
        memcpy(dst, src, size);
    }
}

int IopHLE::load_module(const std::string& name) {
    printf("[IOP] Load module: %s (HLE)\n", name.c_str());

    // Return a fake module ID — we don't actually load IOP code
    static int next_module = 100;
    return next_module++;
}

void IopHLE::hle_padman(uint32_t func, uint32_t send, uint32_t recv) {
    // padman functions:
    //   0 = padInit, 1 = padEnd, 2 = padPortOpen, 3 = padPortClose
    //   4 = padRead, 5 = padSetMainMode, etc.
    switch (func) {
    case 0: // padInit
        printf("[IOP:PAD] padInit\n");
        break;
    case 2: // padPortOpen
        printf("[IOP:PAD] padPortOpen\n");
        break;
    case 4: // padRead
        // TODO: Return current controller state
        // Write DualShock2 button data to recv buffer
        break;
    default:
        printf("[IOP:PAD] func=%d\n", func);
        break;
    }
}

void IopHLE::hle_mcserv(uint32_t func, uint32_t send, uint32_t recv) {
    // Memory card functions
    // We redirect to local save files
    switch (func) {
    case 0: // mcInit
        printf("[IOP:MC] mcInit\n");
        break;
    case 4: // mcOpen
        printf("[IOP:MC] mcOpen\n");
        break;
    case 6: // mcRead
        printf("[IOP:MC] mcRead\n");
        // TODO: Read from local save file
        break;
    case 7: // mcWrite
        printf("[IOP:MC] mcWrite\n");
        // TODO: Write to local save file
        break;
    default:
        printf("[IOP:MC] func=%d\n", func);
        break;
    }
}

void IopHLE::hle_cdvd(uint32_t func, uint32_t send, uint32_t recv) {
    // CD/DVD access — redirect to extracted game files
    switch (func) {
    case 0: // cdInit
        printf("[IOP:CDVD] cdInit\n");
        break;
    case 1: // cdRead
        printf("[IOP:CDVD] cdRead\n");
        // TODO: Read from extracted game files
        break;
    case 6: // cdSearchFile
        printf("[IOP:CDVD] cdSearchFile\n");
        // TODO: Search in extracted file listing
        break;
    default:
        printf("[IOP:CDVD] func=%d\n", func);
        break;
    }
}

void IopHLE::hle_libsd(uint32_t func, uint32_t send, uint32_t recv) {
    // Sound driver (SPU2 interface)
    switch (func) {
    case 0: // sceSdInit
        printf("[IOP:SD] sceSdInit\n");
        break;
    case 4: // sceSdSetParam
        printf("[IOP:SD] sceSdSetParam\n");
        // TODO: Configure SPU2 voice parameters
        break;
    case 11: // sceSdVoiceTrans
        printf("[IOP:SD] sceSdVoiceTrans (DMA to SPU2 RAM)\n");
        // TODO: Transfer audio data to SPU2
        break;
    default:
        printf("[IOP:SD] func=%d\n", func);
        break;
    }
}

void IopHLE::hle_inet(uint32_t func, uint32_t send, uint32_t recv) {
    // Network stack — this is the critical path for online play
    // The original game uses Sony's inet/netcnf IOP modules
    // We replace them with direct Winsock calls
    switch (func) {
    case 0: // sceInetInit
        printf("[IOP:NET] sceInetInit\n");
        break;
    case 1: // sceInetCreate (create socket)
        printf("[IOP:NET] sceInetCreate\n");
        // TODO: Create native socket
        break;
    case 5: // sceInetConnect
        printf("[IOP:NET] sceInetConnect\n");
        // TODO: Connect native socket
        break;
    case 8: // sceInetSend
        printf("[IOP:NET] sceInetSend\n");
        break;
    case 9: // sceInetRecv
        printf("[IOP:NET] sceInetRecv\n");
        break;
    default:
        printf("[IOP:NET] func=%d\n", func);
        break;
    }
}

} // namespace reo
