#include "gs_renderer.h"
#include <cstdio>
#include <cstring>

namespace reo {

bool GSRenderer::init(int width, int height, bool fullscreen) {
    m_width = width;
    m_height = height;
    m_fullscreen = fullscreen;

    memset(m_vram, 0, sizeof(m_vram));
    memset(m_regs, 0, sizeof(m_regs));

    // Set CSR defaults (revision ID, etc.)
    // GS revision: 0x55 for late-model PS2
    m_regs[GS_CSR >> 4] = 0x55;

    printf("[GS] Renderer initialized: %dx%d %s\n",
           width, height, fullscreen ? "fullscreen" : "windowed");

#ifdef REO_HAS_VULKAN
    // TODO: Create Vulkan instance, device, swapchain
    printf("[GS] Backend: Vulkan (stub - not yet implemented)\n");
#else
    printf("[GS] Backend: Software (stub - no Vulkan SDK)\n");
#endif

    return true;
}

void GSRenderer::shutdown() {
    printf("[GS] Renderer shutdown\n");
    // TODO: Destroy Vulkan resources
}

uint64_t GSRenderer::read_register(uint32_t offset) {
    uint32_t idx = (offset & 0x1FFF) >> 4;
    if (idx < 256) {
        return m_regs[idx];
    }
    printf("[GS] Read unknown register offset 0x%04X\n", offset);
    return 0;
}

void GSRenderer::write_register(uint32_t offset, uint64_t value) {
    uint32_t idx = (offset & 0x1FFF) >> 4;
    if (idx < 256) {
        m_regs[idx] = value;
    }

    switch (offset & 0x1FFF) {
    case GS_CSR:
        // Writing to CSR can trigger vsync acknowledge, FIFO reset, etc.
        if (value & 0x08) {
            m_vsync_flag = false;  // Acknowledge vsync
        }
        break;

    case GS_BGCOLOR:
        // Background color — useful for debugging
        {
            uint8_t r = value & 0xFF;
            uint8_t g = (value >> 8) & 0xFF;
            uint8_t b = (value >> 16) & 0xFF;
            printf("[GS] BG Color: R=%d G=%d B=%d\n", r, g, b);
        }
        break;

    case GS_DISPFB1:
    case GS_DISPFB2:
        printf("[GS] Display framebuffer %d configured: 0x%016llX\n",
               (offset & 0x1FFF) == GS_DISPFB1 ? 1 : 2,
               (unsigned long long)value);
        break;

    default:
        break;
    }
}

void GSRenderer::submit_path1(const void* data, uint32_t size) {
    // PATH1: VU1 → GIF → GS (via XGKICK)
    // This is the primary geometry submission path
    printf("[GS] PATH1 packet: %u bytes\n", size);
    // TODO: Parse GIF tags, extract primitives, render
}

void GSRenderer::submit_path2(const void* data, uint32_t size) {
    // PATH2: VIF1 → GIF → GS (via DIRECT/DIRECTHL)
    printf("[GS] PATH2 packet: %u bytes\n", size);
    // TODO: Parse GIF tags
}

void GSRenderer::submit_path3(const void* data, uint32_t size) {
    // PATH3: GIF DMA → GS
    printf("[GS] PATH3 packet: %u bytes\n", size);
    // TODO: Parse GIF tags
}

void GSRenderer::begin_frame() {
    // TODO: Begin Vulkan render pass
}

void GSRenderer::end_frame() {
    m_vsync_flag = true;
    // TODO: End render pass
}

void GSRenderer::present() {
    // TODO: Vulkan swapchain present
}

const char* GSRenderer::backend_name() const {
#ifdef REO_HAS_VULKAN
    return "Vulkan";
#else
    return "Software (stub)";
#endif
}

} // namespace reo
