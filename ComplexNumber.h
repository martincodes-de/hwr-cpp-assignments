#ifndef HWR_CPP_ASSIGNMENTS_COMPLEXNUMBER_H
#define HWR_CPP_ASSIGNMENTS_COMPLEXNUMBER_H

#include <string>

struct Cartesian {
    double real;
    double imag;
};

struct Polar {
    double r;
    double phi;
};

class ComplexNumber {
private:
    Cartesian cartesian{};
    Polar polar{};

    void updateFromCartesian();

    void updateFromPolar();

public:
    explicit ComplexNumber(Cartesian givenCartesian = {1, 1}) : cartesian(givenCartesian){};

    explicit ComplexNumber(Polar givenPolar = {1,1}) : polar(givenPolar){};

    ComplexNumber()= default;

    void setReal(double real);

    void setImag(double imag);

    void setR(double r);

    void setPhi(double phi);

    std::string toCartesianString() const;

    std::string toPolarString() const;
};


#endif
