#include <iostream>
#include "Ui.h"
#include "ComplexNumber.h"

void Ui::start() {
    while (this->keepRunning) {
        this->showMenuAndWaitForInput();
    }
}

void Ui::showMenuAndWaitForInput() {
    double real, imag, r, phi;
    int selectedActionNumber;

    std::cout << "1: als kartesische Form eingeben \t| 2: als polarkoordinaten Form eingeben" << std::endl;
    std::cout << "3: nur Realteil eingeben         \t| 4: nur Imaginaereteil eingeben" << std::endl;
    std::cout << "5: nur Betrag r eingeben         \t| 6: nur Phase phi eingeben" << std::endl;
    std::cout << "7: in kartesische Form ausgeben  \t| 8: in polarkoordinaten Form ausgeben" << std::endl;
    std::cout << "9: in beiden Formen ausgeben     \t| 10: Programm verlassen" << std::endl;
    std::cout << "Nummer waehlen (1,2,3,4,5,6,7,8,9) um Aktion zu waehlen: " << std::endl;

    std::cin >> selectedActionNumber;

    switch (selectedActionNumber) {
        case 1:
            std::cout<<"Bitte Realteil eingeben:"<<std::endl;
            std::cin>>real;

            std::cout<<"Bitte Imaginaerteil eingeben:"<<std::endl;
            std::cin>>imag;
            this->complexNumber.setCartesian(real,imag);
            break;
        case 2:
            std::cout << "Bitte Betrag r eingeben" << std::endl;
            std::cin >> r;

            std::cout << "Bitte Betrag phi eingeben" << std::endl;
            std::cin >> phi;

            this->complexNumber.setPolar(r, phi);
            break;
        case 3:
            std::cout << "Bitte Realteil eingeben:" << std::endl;
            std::cin >> real;
            this->complexNumber.setReal(real);
            break;
        case 4:
            std::cout<<"Bitte Imaginaerteil eingeben:"<<std::endl;
            std::cin>>imag;
            this->complexNumber.setImag(imag);
        case 5:
            std::cout << "Bitte Betrag r eingeben" << std::endl;
            std::cin >> r;
            this->complexNumber.setR(r);
            break;
        case 6:
            std::cout << "Bitte Betrag phi eingeben" << std::endl;
            std::cin >> phi;
            this->complexNumber.setPhi(phi);
            break;
        case 7:
            real = this->complexNumber.getCartesian().real;
            imag = this->complexNumber.getCartesian().imag;

            std::cout << "Realteil: " << real << " | Imaginaerteil: " << imag << std::endl;
            break;
        case 8:
            r = this->complexNumber.getPolar().r;
            phi = this->complexNumber.getPolar().phi;

            std::cout << "R: " << r << " | Phi: " << phi << std::endl;
            break;
        case 9:
            real = this->complexNumber.getCartesian().real;
            imag = this->complexNumber.getCartesian().imag;
            std::cout << "Realteil: " << real << " | Imaginaerteil: " << imag << std::endl;
            
            r = this->complexNumber.getPolar().r;
            phi = this->complexNumber.getPolar().phi;
            std::cout << "R: " << r << " | Phi: " << phi << std::endl;
            break;
        case 10:
            this->keepRunning = false;
            break;
        default:
            std::cerr << "Ungueltige Nummer. Nur (1,2,3,4,5,6,7,8,9) erlaubt." << std::endl;
    }
}
