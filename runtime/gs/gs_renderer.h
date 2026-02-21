#pragma once

#include <cstdint>

namespace reo {

/*
 * Graphics Synthesizer Renderer
 *
 * Replaces the PS2 GS with a modern GPU renderer.
 * The GS was a fixed-function rasterizer that received primitives from
 * VU1 (via PATH1/XGKICK), VIF1 (PATH2/DIRECT), or DMA (PATH3).
 *
 * We intercept GS register writes (at 0x12000000+) and GIF packet
 * submissions, convert them to modern draw calls, and render via Vulkan.
 *
 * Future: integrate paraLLEl-GS for pixel-accurate rendering via
 * Vulkan compute shaders.
 */

// GS register offsets (privileged, at 0x12000000)
constexpr uint32_t GS_PMODE    = 0x0000;
constexpr uint32_t GS_SMODE1   = 0x0010;
constexpr uint32_t GS_SMODE2   = 0x0020;
constexpr uint32_t GS_SRFSH    = 0x0030;
constexpr uint32_t GS_SYNCH1   = 0x0040;
constexpr uint32_t GS_SYNCH2   = 0x0050;
constexpr uint32_t GS_SYNCV    = 0x0060;
constexpr uint32_t GS_DISPFB1  = 0x0070;
constexpr uint32_t GS_DISPLAY1 = 0x0080;
constexpr uint32_t GS_DISPFB2  = 0x0090;
constexpr uint32_t GS_DISPLAY2 = 0x00A0;
constexpr uint32_t GS_EXTBUF   = 0x00B0;
constexpr uint32_t GS_EXTDATA  = 0x00C0;
constexpr uint32_t GS_EXTWRITE = 0x00D0;
constexpr uint32_t GS_BGCOLOR  = 0x00E0;
constexpr uint32_t GS_CSR      = 0x1000;
constexpr uint32_t GS_IMR      = 0x1010;
constexpr uint32_t GS_BUSDIR   = 0x1040;
constexpr uint32_t GS_SIGLBLID = 0x1080;

class GSRenderer {
public:
    GSRenderer() = default;
    ~GSRenderer() = default;

    bool init(int width, int height, bool fullscreen);
    void shutdown();

    // GS register access (from MMIO)
    uint64_t read_register(uint32_t offset);
    void write_register(uint32_t offset, uint64_t value);

    // GIF packet submission (the 3 paths)
    void submit_path1(const void* data, uint32_t size);  // From VU1 XGKICK
    void submit_path2(const void* data, uint32_t size);  // From VIF1 DIRECT
    void submit_path3(const void* data, uint32_t size);  // From GIF DMA

    // Frame control
    void begin_frame();
    void end_frame();
    void present();

    // Vsync signal for timing
    bool vsync_triggered() const { return m_vsync_flag; }
    void clear_vsync() { m_vsync_flag = false; }

    const char* backend_name() const;

private:
    int m_width = 640;
    int m_height = 448;
    bool m_fullscreen = false;
    bool m_vsync_flag = false;

    // GS register state
    uint64_t m_regs[256] = {};

    // VRAM (4MB, same as PS2 GS)
    uint8_t m_vram[4 * 1024 * 1024] = {};

    // TODO: Vulkan device, swapchain, pipelines, etc.
};

} // namespace reo
