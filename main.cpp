#include <iostream>
#include <vector>
#include "Koordinate.h"
#include "Kreis.h"
#include "Rechteck.h"
#include "InitException.h"

int main() {
    bool cycleContinue = true;
    std::vector<ZeichenElement *> elements;

    while (cycleContinue) {
        int input;
        std::cout << "MENUE:" << std::endl;
        std::cout << "Kreis erstellen          1" << std::endl;
        std::cout << "Rechteck erstellen       2" << std::endl;
        std::cout << "In Reihenfolge anzeigen  3" << std::endl;
        std::cout << "Sortiert anzeigen        4" << std::endl;
        std::cout << "Beenden                  5" << std::endl;
        std::cout << "__________________________" << std::endl;
        std::cout << "Geben Sie ihre Wahl ein.  " << std::endl;
        std::cin >> input;

        double x, y, radius, height, width, area;

        switch (input) {
            case 1:
                std::cout << "__________________________" << std::endl;
                std::cout << "Kreis erstellen:" << std::endl;
                std::cout << "X Koordinate eingeben: ";
                std::cin >> x;
                std::cout << "Y Koordinate eingeben: ";
                std::cin >> y;
                std::cout << "Radius eingeben: ";
                std::cin >> radius;
                std::cout << "__________________________" << std::endl;

                try {
                    elements.push_back(new Kreis(x, y, radius));
                } catch (const InitException &e) {
                    std::cout << e.getError() << std::endl;
                    std::cout << "__________________________" << std::endl;
                }
                break;

            case 2:
                std::cout << "__________________________" << std::endl;
                std::cout << "Rechteck erstellen:" << std::endl;
                std::cout << "X Koordinate eingeben: ";
                std::cin >> x;
                std::cout << "Y Koordinate eingeben: ";
                std::cin >> y;
                std::cout << "Hoehe eingeben: ";
                std::cin >> height;
                std::cout << "Breite eingeben: ";
                std::cin >> width;
                std::cout << "__________________________" << std::endl;

                try {
                    elements.push_back(new Rechteck(x, y, width, height));
                } catch (const InitException &e) {
                    std::cout << e.getError() << std::endl;
                    std::cout << "__________________________" << std::endl;

                }
                break;

            case 3:
                area = 0;
                std::cout << "__________________________" << std::endl;
                for (auto &element: elements) {
                    std::cout << element->toString() << std::endl;
                    std::cout << std::endl;
                    area += element->getArea();
                }
                std::cout << "Die Gesamtflaeche aller Elemente betraegt " << area << std::endl;
                std::cout << "__________________________" << std::endl;
                break;

            case 4:
                area = 0;
                std::cout << "__________________________" << std::endl;
                for (auto &element: elements) {
                    if (element->getType() == "Kreis") {
                        std::cout << element->toString() << std::endl;
                        std::cout << std::endl;
                        area += element->getArea();
                    }
                }
                std::cout << "Die Gesamtflaeche aller Kreise betraegt " << area << std::endl;
                std::cout << std::endl;

                area = 0;
                for (auto &element: elements) {
                    if (element->getType() == "Rechteck") {
                        std::cout << element->toString() << std::endl;
                        std::cout << std::endl;
                        area += element->getArea();
                    }
                }
                std::cout << "Die Gesamtflaeche aller Rechtecke betraegt " << area << std::endl;

                std::cout << "__________________________" << std::endl;
                break;

            case 5:
                cycleContinue = false;
                break;
            default:
                std::cout << "Falsche Eingabe" << std::endl;
                std::cout << "__________________________" << std::endl;

        }
    }
    return 0;
}