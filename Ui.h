#ifndef HWR_CPP_ASSIGNMENTS_UI_H
#define HWR_CPP_ASSIGNMENTS_UI_H


#include <vector>
#include "Reading.h"

class Ui {
public:
    void static start();
private:
    Ui():m_running(true){};
    std::vector<Reading> m_data;
    bool m_running;

    void run();

    static int displayMainMenuAndGetChoice();

    void readData();

    void outputInOrder();

    void outputSplit();
};


#endif //HWR_CPP_ASSIGNMENTS_UI_H
