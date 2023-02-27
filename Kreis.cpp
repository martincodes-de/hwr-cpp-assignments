#include "Kreis.h"
#include "InitException.h"

Kreis::Kreis(double x, double y, double radius) : ZeichenElement(x, y), m_radius(radius) {
    if (radius < 0) {
        throw InitException("Kreis", "Radius kleiner 0");
    }
}

std::string Kreis::toString() {
    return m_insertPoint.toString() + ", r=" + std::to_string(m_radius) + ", U=" + std::to_string(this->getCirc());
}
