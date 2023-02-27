#ifndef HWR_CPP_ASSIGNMENTS_INITEXCEPTION_H
#define HWR_CPP_ASSIGNMENTS_INITEXCEPTION_H

#include <string>
#include <utility>

class InitException : std::exception {
public:
    InitException(std::string className, std::string reason)
            : m_className(std::move(className)), m_reason(std::move(reason)) {}

    std::string getError() const {
        return "Klasse \"" + m_className + "\" konnte nicht initialisiert werden!\n"
                                           "Grund: " + m_reason;
    }

private:
    std::string m_className;
    std::string m_reason;
};

#endif //HWR_CPP_ASSIGNMENTS_INITEXCEPTION_H
