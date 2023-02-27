#ifndef HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
#define HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H

#include <string>
#include "Koordinate.h"

class ZeichenElement {
protected:
    explicit ZeichenElement(Koordinate insertPoint) : m_insertPoint(insertPoint) {};

    explicit ZeichenElement() : m_insertPoint() {};

    //Der Konstruktor der Basisklasse sollte im protected-Bereich definiert werden, um den Zugriff von unerwünschten
    // Klassen und Funktionen zu verhindern. Das hat zur Konsequenz, dass der Konstruktor nur von abgeleiteten Klassen
    // aufgerufen werden kann.

    ZeichenElement(double x, double y) : m_insertPoint(x, y) {}

    //Diese Funktionen müssen Polymorph implementiert werden, weil sich die Berechnung von Fläche und Umfang für Kreis und
    // Rechteck unterscheidet.

    Koordinate m_insertPoint;

public:
    virtual std::string toString() = 0;

    virtual double getArea() = 0;

    virtual double getCirc() = 0;
};


#endif //HWR_CPP_ASSIGNMENTS_ZEICHENELEMENT_H
