#include <iostream>
#include <string>

// MAIOS v1.0 - Terminal Display Engine
namespace MAIOS {

class DisplayEngine {
public:
    // Menampilkan banner / header selamat datang ala sistem MAIOS
    static void renderBanner() {
        std::cout << "==========================================" << std::endl;
        std::cout << "         MAIOS v1.0 - TERMINAL UI         " << std::endl;
        std::cout << "      Custom Native OS Architecture       " << std::endl;
        std::cout << "==========================================" << std::endl;
    }

    // Menampilkan kotak status sistem di layar
    static void renderStatusBox(const std::string& statusText, int memoryUsage) {
        std::cout << "[DISPLAY] Rendering UI Window..." << std::endl;
        std::cout << "+----------------------------------------+" << std::endl;
        std::cout << "| Status: " << statusText << "                   |" << std::endl;
        std::cout << "| RAM Usage: " << memoryUsage << " MB / 1024 MB             |" << std::endl;
        std::cout << "+----------------------------------------+" << std::endl;
    }
};

} // namespace MAIOS

int main() {
    MAIOS::DisplayEngine::renderBanner();
    std::cout << std::endl;
    MAIOS::DisplayEngine::renderStatusBox("ONLINE & READY", 142);
    return 0;
}
