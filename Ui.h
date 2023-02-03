#ifndef HWR_CPP_ASSIGNMENTS_UI_H
#define HWR_CPP_ASSIGNMENTS_UI_H

#include "ComplexNumber.h"

class Ui {
private:
    ComplexNumber complexNumber{};
    bool keepRunning = true;
    double real{}, imag{}, r{}, phi{};

    void showMenuAndWaitForInput();

public:
    void start();

private:
    static void displayMainMenu();

    void promptReal();

    void promptImag();

    void promptR();

    void promptPhi();

    void printCartesian();

    void printPolar();
};

#endif //HWR_CPP_ASSIGNMENTS_UI_H
