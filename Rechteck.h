#ifndef HWR_CPP_ASSIGNMENTS_RECHTECK_H
#define HWR_CPP_ASSIGNMENTS_RECHTECK_H


#include "ZeichenElement.h"

class Rechteck : public ZeichenElement {
public:
    Rechteck(Koordinate insertPoint, double width, double height) : ZeichenElement(insertPoint), m_width(width),
                                                                    m_height(height) {}

    Rechteck() : ZeichenElement(), m_width(1), m_height(1) {}

    Rechteck(double x, double y, double width, double height) : ZeichenElement(x, y), m_width(width),
                                                                m_height(height) {}

    double getWidth() const { return m_width; }

    double getHeight() const { return m_height; }

    void setWidth(double width) { m_width = width; }

    void setHeight(double height) { m_height = height; }

    double getArea() override { return m_width * m_height; }

    double getCirc() override { return 2 * (m_width + m_height); }

    std::string toString() override {
        return m_insertPoint.toString() + ", w=" + std::to_string(m_width) + ", h=" + std::to_string(m_height) +
               ", U=" +
               std::to_string(this->getCirc());
    }

private:
    double m_width;
    double m_height;
};


#endif //HWR_CPP_ASSIGNMENTS_RECHTECK_H
