#include "cdvd.h"
#include <cstdio>
#include <fstream>
#include <algorithm>

namespace reo {

namespace fs = std::filesystem;

CDVD::CDVD(const fs::path& game_data_root)
    : m_root(game_data_root)
{
    build_file_map();
}

void CDVD::build_file_map() {
    if (!fs::exists(m_root)) {
        fprintf(stderr, "[CDVD] Game data root does not exist: %s\n",
                m_root.string().c_str());
        return;
    }

    int count = 0;
    for (auto& entry : fs::recursive_directory_iterator(m_root)) {
        if (entry.is_regular_file()) {
            // Build a PS2-style path relative to root
            auto rel = fs::relative(entry.path(), m_root);
            std::string ps2_path = rel.string();

            // Normalize: backslashes, uppercase
            std::replace(ps2_path.begin(), ps2_path.end(), '/', '\\');
            std::transform(ps2_path.begin(), ps2_path.end(), ps2_path.begin(), ::toupper);

            m_file_map[ps2_path] = entry.path();
            count++;
        }
    }

    printf("[CDVD] Mapped %d files from %s\n", count, m_root.string().c_str());
}

std::string CDVD::normalize_ps2_path(const std::string& path) const {
    std::string normalized = path;

    // Strip cdrom prefix
    const char* prefixes[] = { "cdrom0:\\", "cdrom0:", "cdrom:\\", "cdrom:", "host:" };
    for (auto prefix : prefixes) {
        size_t plen = strlen(prefix);
        if (normalized.size() >= plen &&
            _strnicmp(normalized.c_str(), prefix, plen) == 0) {
            normalized = normalized.substr(plen);
            break;
        }
    }

    // Strip version suffix (;1)
    auto semi = normalized.find(';');
    if (semi != std::string::npos) {
        normalized = normalized.substr(0, semi);
    }

    // Normalize separators and case
    std::replace(normalized.begin(), normalized.end(), '/', '\\');
    std::transform(normalized.begin(), normalized.end(), normalized.begin(), ::toupper);

    return normalized;
}

fs::path CDVD::resolve_path(const std::string& ps2_path) const {
    std::string key = normalize_ps2_path(ps2_path);
    auto it = m_file_map.find(key);
    if (it != m_file_map.end()) {
        return it->second;
    }
    return {};
}

bool CDVD::read_file(const std::string& ps2_path, std::vector<uint8_t>& out) {
    fs::path local = resolve_path(ps2_path);
    if (local.empty()) {
        fprintf(stderr, "[CDVD] File not found: %s\n", ps2_path.c_str());
        return false;
    }

    std::ifstream file(local, std::ios::binary | std::ios::ate);
    if (!file) {
        fprintf(stderr, "[CDVD] Failed to open: %s\n", local.string().c_str());
        return false;
    }

    auto size = file.tellg();
    file.seekg(0);
    out.resize((size_t)size);
    file.read((char*)out.data(), size);

    return true;
}

bool CDVD::read_sectors(uint32_t lba, uint32_t count, void* buffer) {
    // TODO: For raw sector access, we'd need the original ISO layout table
    // Most games use file-level access, so this is low priority
    fprintf(stderr, "[CDVD] Raw sector read not yet supported: LBA=%u count=%u\n",
            lba, count);
    return false;
}

bool CDVD::file_exists(const std::string& ps2_path) const {
    return !resolve_path(ps2_path).empty();
}

uint32_t CDVD::file_size(const std::string& ps2_path) const {
    fs::path local = resolve_path(ps2_path);
    if (local.empty()) return 0;
    return (uint32_t)fs::file_size(local);
}

} // namespace reo
