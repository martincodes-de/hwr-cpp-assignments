#include "Reading.h"
#include "FlawedMeasurementException.h"

Reading::Reading(double avgTemp, int lightning) : m_avgTemp(avgTemp), m_lightning(lightning) {
    if (avgTemp < -25 || avgTemp > 70) {
        throw FlawedMeasurementException("avg temp", "average temperature is out of bounds");
    }
    if (lightning < 0) {
        throw FlawedMeasurementException("lightning", "negative number of lightning strikes is impossible");
    }
}

std::string Reading::toString() const {
    return "T_avg =" + std::to_string(m_avgTemp) + ", # of lightning strikes=" + std::to_string(m_lightning);
}

std::string Reading::getAvgTempAsString() const {
    return "T_avg =" + std::to_string(m_avgTemp);
}

std::string Reading::getLightningAsString() const {
    return "T_avg =" + std::to_string(m_avgTemp);
}
