#ifndef MAIOS_APP_SUPPORT_H
#define MAIOS_APP_SUPPORT_H

#include <string>
#include <vector>
#include <iostream>

namespace MAIOS {
    namespace AppSupport {
        // Struktur data untuk mendefinisikan dukungan aplikasi di MAIOS
        struct AppInfo {
            std::string appName;
            std::string packageName;
            bool isSupported;
        };

        inline void registerSupportedApps() {
            std::cout << "[MAIOS] Mendaftarkan dukungan aplikasi sistem..." << std::endl;
        }
    }
}

#endif // MAIOS_APP_SUPPORT_H
