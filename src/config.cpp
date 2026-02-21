#include "config.h"
#include <cstdio>
#include <cstring>
#include <filesystem>

namespace reo {

bool Config::load(int argc, char* argv[]) {
    // Parse command-line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--game-data") == 0 && i + 1 < argc) {
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
            printf("  --game-data <path>   Path to extracted game data (default: game_data)\n");
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

    // Create save directory if it doesn't exist
    std::filesystem::create_directories(save_path);

    return true;
}

bool Config::save() const {
    // TODO: Write config to reo.ini
    return true;
}

} // namespace reo
