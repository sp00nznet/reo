#include "config.h"
#include <cstdio>
#include <cstring>
#include <filesystem>

namespace reo {

// Static game info table
static const GameInfo s_game_info[] = {
    {
        GameTitle::Outbreak,
        "Resident Evil Outbreak",
        "SLUS_207.65",
        "SLUS-20765",
        0x00100008,
        "game_data",
    },
    {
        GameTitle::File2,
        "Resident Evil Outbreak: File #2",
        "SLUS_209.84",
        "SLUS-20984",
        0x00100008,
        "game_data_file2",
    },
};

const GameInfo& get_game_info(GameTitle title) {
    return s_game_info[static_cast<int>(title)];
}

bool Config::load(int argc, char* argv[]) {
    // Parse command-line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--game") == 0 && i + 1 < argc) {
            const char* g = argv[++i];
            if (strcmp(g, "file1") == 0 || strcmp(g, "outbreak") == 0 || strcmp(g, "1") == 0) {
                game = GameTitle::Outbreak;
            } else if (strcmp(g, "file2") == 0 || strcmp(g, "2") == 0) {
                game = GameTitle::File2;
            } else {
                fprintf(stderr, "Unknown game: %s (use 'file1' or 'file2')\n", g);
                return false;
            }
        } else if (strcmp(argv[i], "--game-data") == 0 && i + 1 < argc) {
            game_data_path = argv[++i];
        } else if (strcmp(argv[i], "--width") == 0 && i + 1 < argc) {
            window_width = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--height") == 0 && i + 1 < argc) {
            window_height = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--fullscreen") == 0) {
            fullscreen = true;
        } else if (strcmp(argv[i], "--online") == 0) {
            online_enabled = true;
        } else if (strcmp(argv[i], "--server") == 0 && i + 1 < argc) {
            server_address = argv[++i];
        } else if (strcmp(argv[i], "--port") == 0 && i + 1 < argc) {
            server_port = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--name") == 0 && i + 1 < argc) {
            player_name = argv[++i];
        } else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("Usage: reo [options]\n");
            printf("  --game <title>       Which game to run: file1, file2 (default: file1)\n");
            printf("  --game-data <path>   Path to extracted game data (auto-detected per game)\n");
            printf("  --width <pixels>     Window width (default: 1280)\n");
            printf("  --height <pixels>    Window height (default: 720)\n");
            printf("  --fullscreen         Start in fullscreen mode\n");
            printf("  --online             Enable online multiplayer\n");
            printf("  --server <address>   Server address (default: obsrv.org)\n");
            printf("  --port <port>        Server port (default: 8200)\n");
            printf("  --name <name>        Player name (default: Survivor)\n");
            printf("  --help               Show this help\n");
            return false;
        }
    }

    // Auto-detect game data path if not explicitly set
    if (game_data_path.empty()) {
        game_data_path = game_info().default_data_path;
    }

    // Create save directory if it doesn't exist
    std::filesystem::create_directories(save_path);

    return true;
}

bool Config::save() const {
    // TODO: Write config to reo.ini
    return true;
}

} // namespace reo
