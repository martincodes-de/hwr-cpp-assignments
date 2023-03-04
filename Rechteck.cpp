#include "Rechteck.h"
#include "InitException.h"

Rechteck::Rechteck(double x, double y, double width, double height) : ZeichenElement(x, y), m_width(width),
                                                                      m_height(height) {
    if (width < 0 || height < 0) {
        throw InitException("Rechteck", "Hoehe oder Breite kleiner 0");
    }
}

std::string Rechteck::toString() {
    return m_insertPoint.toString() + ", w=" + std::to_string(m_width) + ", h=" + std::to_string(m_height) +
           ", U=" +
           std::to_string(this->getCirc());
}
