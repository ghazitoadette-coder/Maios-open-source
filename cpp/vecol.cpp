#include <iostream>
#include <vector>
#include <string>
#include "../H/maios_core.h"
#include "../H/maios_utils.h"

// Implementasi modul vecol untuk proyek MAIOS
namespace MAIOS {
    namespace VecolModule {
        void runVecolProcess() {
            std::cout << "[MAIOS] Menjalankan proses Vecol dengan versi: " << VERSION << std::endl;
            Utils::logMessage("Modul Vecol berhasil dimuat.");
        }
    }
}

int main() {
    MAIOS::initializeCore();
    MAIOS::VecolModule::runVecolProcess();
    return 0;
}
