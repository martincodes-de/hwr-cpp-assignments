#ifndef HWR_CPP_ASSIGNMENTS_READING_H
#define HWR_CPP_ASSIGNMENTS_READING_H


#include <string>

class Reading {
public:
    Reading(double avgTemp, int lightning) : m_avgTemp(avgTemp), m_lightning(lightning) {}

    std::string toString();

    std::string getAvgTempAsString();

    std::string getLightningAsString();
private:
    double m_avgTemp;
    int m_lightning;
};


#endif //HWR_CPP_ASSIGNMENTS_READING_H
