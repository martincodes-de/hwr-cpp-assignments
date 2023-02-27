#ifndef HWR_CPP_ASSIGNMENTS_KOORDINATE_H
#define HWR_CPP_ASSIGNMENTS_KOORDINATE_H
#include <string>

class Koordinate {
public:
    Koordinate(double x, double y) : m_x(x), m_y(y) {}

    Koordinate() : m_x(0), m_y(0) {}
    //Standardparameter für Koordinaten ergeben nur Sinn, wenn bei der Anwendung erzeugte ZeichenElemente auch standardmäßig
    // an einer bestimmten Stelle erzeugt werden. Es kann beispielsweise Sinn ergeben neue Objekte im Koordinatenursprung zu erzeugen.

    std::string toString() { return "x=" + std::to_string(m_x) + ", y=" + std::to_string(m_y); }

private:
    double m_x;
    double m_y;
};

#endif //HWR_CPP_ASSIGNMENTS_KOORDINATE_H
