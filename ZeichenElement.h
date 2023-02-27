#ifndef HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
#define HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H


#include "Koordinate.h"

class ZeichenElement {
public:
    ZeichenElement(const Koordinate insertPoint) : m_insertPoint(insertPoint) {}
    Koordinate getInsertPoint() const { return m_insertPoint; }
private:
    Koordinate m_insertPoint;
};


#endif //HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
