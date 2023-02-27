#include <iostream>
#include "Koordinate.h"
#include "Kreis.h"
#include "Rechteck.h"

int main() {
    Koordinate insertPoint(0.0, 0.0);

    Kreis kreis(insertPoint, 10.0);

    Rechteck rechteck(insertPoint, 20.0, 30.0);

    std::cout << "Kreis:" << std::endl;
    double kreisRadius = kreis.getRadius();
    double kreisArea = kreis.getArea();
    double kreisCirc = kreis.getCirc();
    std::cout << "alter Kreis: r=" << kreisRadius << ", A=" << kreisArea << ", U=" << kreisCirc << std::endl;
    kreis.setRadius(15.0);
    double newKreisRadius = kreis.getRadius();
    double newKreisArea = kreis.getArea();
    double newKreisCirc = kreis.getCirc();
    std::cout << "neuer Kreis: r=" << newKreisRadius << ", A=" << newKreisArea << ", U=" << newKreisCirc << std::endl;

    std::cout << "Rechteck:" << std::endl;
    double rechteckHeight = rechteck.getHeight();
    double rechteckWidth = rechteck.getWidth();
    double rechteckArea = rechteck.getArea();
    double rechteckCirc = rechteck.getCirc();
    std::cout << "altes Rechteck: h=" << rechteckHeight << ", w=" << rechteckWidth << ", A=" << rechteckArea << ", U="
              << rechteckCirc << std::endl;
    rechteck.setWidth(25.0);
    rechteck.setHeight(35.0);
    double newRechteckWidth = rechteck.getWidth();
    double newRechteckHeight = rechteck.getHeight();
    double newRechteckArea = rechteck.getArea();
    double newRechteckCirc = rechteck.getCirc();
    std::cout << "neues Rechteck: h=" << newRechteckHeight << ", w=" << newRechteckWidth << ", A=" << newRechteckArea
              << ", U=" << newRechteckCirc << std::endl;

    return 0;
}