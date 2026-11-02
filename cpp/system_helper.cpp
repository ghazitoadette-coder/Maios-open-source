#include <iostream>
#include <string>
#include <vector>

// MAIOS v1.0 - System Helper Utilities
namespace MAIOS {

class SystemHelper {
public:
    // Menampilkan status log sistem dengan format rapi
    static void logMessage(const std::string& tag, const std::string& message) {
        std::cout << "[MAIOS][" << tag << "] " << message << std::endl;
    }

    // Simulasi pengecekan komponen sistem yang aktif
    static void checkActiveModules() {
        std::vector<std::string> modules = {"Core Engine", "MAI Parser", "Storage Mount", "Memory Guard"};
        std::cout << "--- Scanning Active MAIOS Modules ---" << std::endl;
        for (const std::string& mod : modules) {
            std::cout << " > [OK] " << mod << " is running smoothly." << std::endl;
        }
    }
};

} // namespace MAIOS

int main() {
    MAIOS::SystemHelper::logMessage("HELPER", "Initializing system helper utilities...");
    MAIOS::SystemHelper::checkActiveModules();
    MAIOS::SystemHelper::logMessage("HELPER", "All helper routines executed successfully.");
    return 0;
}
