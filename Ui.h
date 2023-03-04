#ifndef HWR_CPP_ASSIGNMENTS_UI_H
#define HWR_CPP_ASSIGNMENTS_UI_H


#include "ZeichenElement.h"
#include <vector>

class Ui {
private:
    std::vector<ZeichenElement*> m_elements;

    static int displayMainMenuAndGetInput();

    void addCircle();

    void addRectagle();

    void outputInOrder();

    void outputSorted();

public:
    void start();
};


#endif //HWR_CPP_ASSIGNMENTS_UI_H
