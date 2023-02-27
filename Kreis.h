#ifndef HWR_CPP_ASSIGNMENTS_KREIS_H
#define HWR_CPP_ASSIGNMENTS_KREIS_H

#include "ZeichenElement.h"

class Kreis : public ZeichenElement {
public:
    Kreis(Koordinate insertPoint, double radius) : ZeichenElement(insertPoint), m_radius(radius) {}

    Kreis() : ZeichenElement(), m_radius(1) {}

    Kreis(double x, double y, double radius) : ZeichenElement(x, y), m_radius(radius) {}

    double getRadius() const { return m_radius; }

    void setRadius(double radius) { m_radius = radius; }

    double getArea() override { return 3.14 * m_radius * m_radius; }

    double getCirc() override { return 2 * 3.14 * m_radius; }

    std::string getType() override { return "Kreis"; }

    std::string toString() override {
        return m_insertPoint.toString() + ", r=" + std::to_string(m_radius) + ", U=" + std::to_string(this->getCirc());
    }

private:
    double m_radius;
};


#endif //HWR_CPP_ASSIGNMENTS_KREIS_H
