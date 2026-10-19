// Self-check for the MWo3 decoder that goes into reo_bootstrap.cpp.
// 0.DAT (compressed) must decode byte-exact to the PCSX2 dump of the title overlay.
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>
#include <fstream>
#include <iterator>
#include <cassert>

static std::vector<uint8_t> mwo3Unpack(const std::vector<uint8_t> &c)
{
    std::vector<uint8_t> out;
    size_t ci = 0;
    auto rd = [&](size_t o) -> uint16_t {
        return static_cast<uint16_t>(c[o] | (c[o + 1] << 8));
    };
    while (ci + 2 <= c.size())
    {
        uint16_t flag = rd(ci);
        ci += 2;
        for (int b = 15; b >= 0; --b)
        {
            if (ci + 2 > c.size()) return out;
            if (!((flag >> b) & 1))
            {
                out.push_back(c[ci]); out.push_back(c[ci + 1]); ci += 2; continue;
            }
            uint16_t tok = rd(ci); ci += 2;
            size_t dist = static_cast<size_t>(tok & 0x7FFu) * 2u;
            size_t len = static_cast<size_t>(tok >> 11) * 2u;
            if (len == 0u) { if (ci + 2 > c.size()) return out; len = static_cast<size_t>(rd(ci)) * 2u; ci += 2; }
            if (dist == 0u)
            {
                // Matches the game's own decoder at 0x1AF618/0x1AF628: dist==0
                // with len==0 terminates, dist==0 with a length emits a run of
                // zero words. Treating dist==0 as "end" truncates such a stream.
                if (len == 0u) return out;
                out.insert(out.end(), len, uint8_t(0));
                continue;
            }
            if (dist > out.size()) return out;
            const size_t p = out.size();
            for (size_t k = 0; k < len; ++k) out.push_back(out[p - dist + k]);
        }
    }
    return out;
}

static std::vector<uint8_t> slurp(const char *p)
{
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

int main()
{
    auto raw = slurp("game_data/BIN/0.DAT");
    auto elf = slurp("tools/ps2_debug/overlay_dumps/overlay_title.elf");
    assert(!raw.empty() && !elf.empty());
    auto img = mwo3Unpack(raw);
    const size_t n = 0x1cd24;
    assert(img.size() >= n);
    assert(std::memcmp(img.data(), elf.data() + 0x60, n) == 0);
    assert(img[0] == 'M' && img[1] == 'W' && img[2] == 'o' && img[3] == '3');
    auto r32 = [&](size_t o) {
        return uint32_t(img[o] | (img[o+1] << 8) | (img[o+2] << 16) | (img[o+3] << 24));
    };
    assert(r32(8) + 0x40u + r32(0x0C) + r32(0x10) == r32(0x18));
    printf("ok: decoded %zu bytes, first 0x%zx match the dump, header invariant holds\n", img.size(), n);
    return 0;
}

// Build+run from the repo root:
//   cl /nologo /EHsc /O2 tools\ps2_debug\t_mwo3.cpp && t_mwo3.exe
