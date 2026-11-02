#ifndef MAIOS_UTILS_H
#define MAIOS_UTILS_H

#include <string>
#include <vector>

namespace MAIOS {
    namespace Utils {
        std::vector<std::string> getModuleList();
        void logMessage(const std::string& message);
    }
}

#endif // MAIOS_UTILS_H
