#ifndef HWR_CPP_ASSIGNMENTS_RECHTECK_H
#define HWR_CPP_ASSIGNMENTS_RECHTECK_H


#include "ZeichenElement.h"

class Rechteck : public ZeichenElement {
public:
    Rechteck() : ZeichenElement(), m_width(1), m_height(1) {}

    Rechteck(double x, double y, double width, double height);

    double getArea() override { return m_width * m_height; }

    double getCirc() override { return 2 * (m_width + m_height); }

    std::string toString() override;

private:
    double m_width;
    double m_height;
};

#endif //HWR_CPP_ASSIGNMENTS_RECHTECK_H
