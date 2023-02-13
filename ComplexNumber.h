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

//Only needed for 2.4
struct TwoPointFour {
    float x;
    float y;
};

class ComplexNumber {
private:
    Cartesian cartesian{};
    Polar polar{};

    void updateFromCartesian();

    void updateFromPolar();

public:
    explicit ComplexNumber(Cartesian givenCartesian = {1, 1}) : cartesian(givenCartesian) {}

    //Commented out to fix ambiguity:

    //explicit ComplexNumber(Polar givenPolar = {1,1}) : polar(givenPolar){}

    //ComplexNumber()= default;

    ComplexNumber(TwoPointFour);

    explicit ComplexNumber(double length);

    void setReal(double real);

    void setImag(double imag);

    void setR(double r);

    void setPhi(double phi);

    std::string toCartesianString() const;

    std::string toPolarString() const;
};


#endif
