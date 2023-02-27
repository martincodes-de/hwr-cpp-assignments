#ifndef HWR_CPP_ASSIGNMENTS_KREIS_H
#define HWR_CPP_ASSIGNMENTS_KREIS_H

#include "ZeichenElement.h"

class Kreis : public ZeichenElement {
public:
    Kreis(Koordinate insertPoint, double radius) : ZeichenElement(insertPoint), m_radius(radius) {}
    Kreis() : ZeichenElement(), m_radius(1) {}

    double getRadius() const { return m_radius; }

    void setRadius(double radius) { m_radius = radius; }

private:
    double m_radius;
};


#endif //HWR_CPP_ASSIGNMENTS_KREIS_H