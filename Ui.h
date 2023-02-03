#ifndef HWR_CPP_ASSIGNMENTS_UI_H
#define HWR_CPP_ASSIGNMENTS_UI_H

#include "ComplexNumber.h"

class Ui {
private:
    ComplexNumber complexNumber{};
    bool keepRunning = true;

    void showMenuAndWaitForInput();

public:
    void start();
};

#endif //HWR_CPP_ASSIGNMENTS_UI_H
