#ifndef HWR_CPP_ASSIGNMENTS_KREIS_H
#define HWR_CPP_ASSIGNMENTS_KREIS_H

#include "ZeichenElement.h"

class Kreis : public ZeichenElement {
public:
    Kreis() : ZeichenElement(), m_radius(1) {}

    Kreis(double x, double y, double radius);

    double getArea() override { return 3.14 * m_radius * m_radius; }

    double getCirc() override { return 2 * 3.14 * m_radius; }

    std::string toString() override;

private:
    double m_radius;
};

#endif //HWR_CPP_ASSIGNMENTS_KREIS_H
