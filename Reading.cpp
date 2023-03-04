#include "Reading.h"

std::string Reading::toString() {
    return "T_avg =" + std::to_string(m_avgTemp) + ", # of lightning strikes=" + std::to_string(m_lightning);
}

std::string Reading::getAvgTempAsString() {
    return "T_avg =" + std::to_string(m_avgTemp);
}

std::string Reading::getLightningAsString() {
    return "T_avg =" + std::to_string(m_avgTemp);
}
