#ifndef MAIOS_CORE_H
#define MAIOS_CORE_H

#include <iostream>
#include <string>
#include <vector>

namespace MAIOS {
    const std::string VERSION = "1.0.0-alpha";

    inline void initializeCore() {
        std::cout << "[MAIOS] Core system initialized successfully." << std::endl;
    }
}

#endif // MAIOS_CORE_H
