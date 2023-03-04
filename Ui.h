#ifndef HWR_CPP_ASSIGNMENTS_UI_H
#define HWR_CPP_ASSIGNMENTS_UI_H


#include "ZeichenElement.h"
#include <vector>

class Ui {
private:
    std::vector<ZeichenElement *> m_elements;

    static int displayMainMenuAndGetInput();

public:
    void start();

    void addCircle();

    void addRectagle();

    void outputInOrder();

    void outputSorted();
};


#endif //HWR_CPP_ASSIGNMENTS_UI_H
