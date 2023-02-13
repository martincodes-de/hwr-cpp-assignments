#include <iostream>
#include "Ui.h"

void Ui::start() {
    while (this->keepRunning) {
        this->showMenuAndWaitForInput();
    }
}

void Ui::showMenuAndWaitForInput() {
    int selectedActionNumber;

    displayMainMenu();

    std::cin >> selectedActionNumber;

    switch (selectedActionNumber) {
        case 1:
            promptImag();
            promptReal();
            break;
        case 2:
            promptR();
            promptPhi();
            break;
        case 3:
            promptReal();
            break;
        case 4:
            promptImag();
            break;
        case 5:
            promptR();
            break;
        case 6:
            promptPhi();
            break;
        case 7:
            printCartesian();
            break;
        case 8:
            printPolar();
            break;
        case 9:
            printCartesian();
            printPolar();
            break;
        case 10:
            this->keepRunning = false;
            break;
        default:
            std::cerr << "Ungueltige Nummer. Nur (1,2,3,4,5,6,7,8,9) erlaubt." << std::endl;
    }
}

void Ui::displayMainMenu() {
    std::cout << "1: als kartesische Form eingeben \t| 2: als polarkoordinaten Form eingeben" << std::endl;
    std::cout << "3: nur Realteil eingeben         \t| 4: nur Imaginaereteil eingeben" << std::endl;
    std::cout << "5: nur Betrag r eingeben         \t| 6: nur Phase phi eingeben" << std::endl;
    std::cout << "7: in kartesische Form ausgeben  \t| 8: in polarkoordinaten Form ausgeben" << std::endl;
    std::cout << "9: in beiden Formen ausgeben     \t| 10: Programm verlassen" << std::endl;
    std::cout << "Nummer waehlen (1,2,3,4,5,6,7,8,9) um Aktion zu waehlen: " << std::endl;
}

void Ui::promptReal() {
    std::cout << "Bitte Realteil eingeben:" << std::endl;
    std::cin >> real;
    this->complexNumber.setReal(real);
}

void Ui::promptImag() {
    std::cout << "Bitte Imaginaerteil eingeben:" << std::endl;
    std::cin >> imag;
    this->complexNumber.setImag(imag);
}

void Ui::promptR() {
    std::cout << "Bitte Betrag r eingeben" << std::endl;
    std::cin >> r;
    this->complexNumber.setR(r);
}

void Ui::promptPhi() {
    std::cout << "Bitte Betrag phi eingeben" << std::endl;
    std::cin >> phi;
    this->complexNumber.setPhi(phi);
}

void Ui::printCartesian() {
    std::cout << "Karthesische Form:  " << complexNumber.toCartesianString() << std::endl;
}

void Ui::printPolar() {
    std::cout << "Polare Form:\t    " << complexNumber.toPolarString() << std::endl;
}
