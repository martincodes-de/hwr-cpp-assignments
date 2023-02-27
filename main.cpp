#include <iostream>
#include "Koordinate.h"
#include "Kreis.h"
#include "Rechteck.h"

int main() {
    Koordinate insertPoint(0.0, 0.0);

    Kreis kreis(insertPoint, 10.0);

    Rechteck rechteck(insertPoint, 20.0, 30.0);

    std::cout<<"Kreis:"<<std::endl;
    double kreisRadius = kreis.getRadius();
    std::cout<<"alter Radius: "<<kreisRadius<<std::endl;
    kreis.setRadius(15.0);
    double newKreisRadius = kreis.getRadius();
    std::cout<<"neuer Radius: "<<newKreisRadius<<std::endl;

    std::cout<<"Rechteck:"<<std::endl;
    double rechteckHeight = rechteck.getHeight();
    double rechteckWidth = rechteck.getWidth();
    std::cout<<"altes Rechteck: h="<<rechteckHeight<<", w="<<rechteckWidth<<std::endl;
    rechteck.setWidth(25.0);
    rechteck.setHeight(35.0);
    double newRechteckWidth = rechteck.getWidth();
    double newRechteckHeight = rechteck.getHeight();
    std::cout<<"neues Rechteck: h="<<newRechteckHeight<<", w="<<newRechteckWidth<<std::endl;

    return 0;
}