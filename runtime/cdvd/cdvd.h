#pragma once

#include <cstdint>
#include <string>
#include <filesystem>
#include <unordered_map>
#include <vector>

namespace reo {

/*
 * CDVD — Disc I/O Replacement
 *
 * Redirects all CD/DVD reads to extracted game files on the local filesystem.
 * The PS2 game reads sectors from the DVD; we translate sector offsets
 * to file paths using a pre-built file table from the ISO extraction step.
 */

class CDVD {
public:
    explicit CDVD(const std::filesystem::path& game_data_root);

    // Read file by PS2 path (e.g., "cdrom0:\\DATA\\NETBIO00.DAT;1")
    bool read_file(const std::string& ps2_path, std::vector<uint8_t>& out);

    // Read raw sectors (for games that bypass the filesystem)
    bool read_sectors(uint32_t lba, uint32_t count, void* buffer);

    // Check if a file exists on the virtual disc
    bool file_exists(const std::string& ps2_path) const;

    // Get file size
    uint32_t file_size(const std::string& ps2_path) const;

    // Translate PS2 path to local filesystem path
    std::filesystem::path resolve_path(const std::string& ps2_path) const;

private:
    std::filesystem::path m_root;
    std::unordered_map<std::string, std::filesystem::path> m_file_map;

    void build_file_map();
    std::string normalize_ps2_path(const std::string& path) const;
};

} // namespace reo
