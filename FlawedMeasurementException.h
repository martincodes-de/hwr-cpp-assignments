#ifndef HWR_CPP_ASSIGNMENTS_FLAWEDMEASUREMENTEXCEPTION_H
#define HWR_CPP_ASSIGNMENTS_FLAWEDMEASUREMENTEXCEPTION_H

#include <string>
#include <utility>

class FlawedMeasurementException : std::exception {
public:
    FlawedMeasurementException(std::string value, std::string reason) : m_value(std::move(value)),
                                                                        m_reason(std::move(reason)) {}

    std::string getError() const {
        return "Error in value " + m_value + ", because " + m_reason;
    }

private:
    std::string m_value;
    std::string m_reason;
};

#endif //HWR_CPP_ASSIGNMENTS_FLAWEDMEASUREMENTEXCEPTION_H
