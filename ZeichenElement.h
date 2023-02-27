#ifndef HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
#define HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H

#include "Koordinate.h"

class ZeichenElement {
protected:
    explicit ZeichenElement(Koordinate insertPoint) : m_insertPoint(insertPoint) {};

    explicit ZeichenElement() : m_insertPoint() {};

    //Der Konstruktor der Basisklasse sollte im protected-Bereich definiert werden, um den Zugriff von unerwünschten
    // Klassen und Funktionen zu verhindern. Das hat zur Konsequenz, dass der Konstruktor nur von abgeleiteten Klassen
    // aufgerufen werden kann.
    Koordinate getInsertPoint() const { return m_insertPoint; }

private:
    Koordinate m_insertPoint;
};


#endif //HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
