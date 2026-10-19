#include "reo_overlays.h"

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace
{
    struct Installed
    {
        const ReoOverlay *overlay;
        std::unordered_map<uint32_t, ReoOverlayFn> functions;
    };

    std::vector<const ReoOverlay *> &registry()
    {
        static std::vector<const ReoOverlay *> overlays;
        return overlays;
    }

    std::vector<Installed> &installed()
    {
        static std::vector<Installed> overlays;
        return overlays;
    }

    bool isResident(const uint8_t *rdram, const ReoOverlay &overlay)
    {
        const uint8_t *header = rdram + overlay.base;
        return std::memcmp(header, "MWo3", 4) == 0 &&
               std::strncmp(reinterpret_cast<const char *>(header + 0x20), overlay.name, 16) == 0;
    }

    // ponytail: linear scan over at most a handful of overlays per call; index by base if it shows up in a profile.
    ReoOverlayFn resolve(const uint8_t *rdram, uint32_t pc)
    {
        const Installed *best = nullptr;
        for (const Installed &entry : installed())
        {
            const ReoOverlay &overlay = *entry.overlay;
            // A later overlay loaded at a higher base overwrites the tail of a lower one,
            // so the highest resident base that covers pc wins.
            if (pc >= overlay.base && pc < overlay.end && isResident(rdram, overlay) &&
                (!best || overlay.base > best->overlay->base))
                best = &entry;
        }
        if (!best)
            return nullptr;
        const auto it = best->functions.find(pc);
        return it == best->functions.end() ? nullptr : it->second;
    }

    void trampoline(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t pc = ctx->pc;
        if (ReoOverlayFn function = resolve(rdram, pc))
        {
            function(rdram, ctx, runtime);
            return;
        }
        static std::unordered_set<uint32_t> reported;
        if (reported.insert(pc).second)
            std::fprintf(stderr, "[overlay] no resident overlay has code at 0x%08X (ra=0x%08X)\n",
                         pc, getRegU32(ctx, 31));
        ctx->pc = getRegU32(ctx, 31);
    }
}

ReoOverlayRegistrar::ReoOverlayRegistrar(const ReoOverlay &overlay)
{
    registry().push_back(&overlay);
}

void reoInstallOverlays(PS2Runtime &runtime)
{
    size_t total = 0;
    for (const ReoOverlay *overlay : registry())
    {
        Installed entry{overlay, {}};
        entry.functions.reserve(overlay->count);
        for (size_t i = 0; i < overlay->count; ++i)
        {
            entry.functions.emplace(overlay->entries[i].address, overlay->entries[i].function);
            runtime.registerFunction(overlay->entries[i].address, trampoline);
        }
        total += overlay->count;
        std::printf("[BOOT] overlay %-12s 0x%06X-0x%06X  %zu entry points\n",
                    overlay->name, overlay->base, overlay->end, overlay->count);
        installed().push_back(std::move(entry));
    }
    std::printf("[BOOT] %zu overlays, %zu entry points behind the overlay trampoline\n",
                installed().size(), total);
}
