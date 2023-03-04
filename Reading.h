#ifndef HWR_CPP_ASSIGNMENTS_READING_H
#define HWR_CPP_ASSIGNMENTS_READING_H


#include <string>

class Reading {
public:
    Reading(double avgTemp, int lightning);

    std::string toString() const;

    std::string getAvgTempAsString() const;

    std::string getLightningAsString() const;

    double getAvgTmp() const { return m_avgTemp; }

    int getLightning() const { return m_lightning; }

private:
    double m_avgTemp;
    int m_lightning;
};


#endif //HWR_CPP_ASSIGNMENTS_READING_H
