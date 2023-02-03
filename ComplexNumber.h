#ifndef HWR_CPP_ASSIGNMENTS_COMPLEXNUMBER_H
#define HWR_CPP_ASSIGNMENTS_COMPLEXNUMBER_H

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
    Cartesian cartesian;
    Polar polar;

    void updateFromCartesian();

    void updateFromPolar();

public:
    void setCartesian(double real, double imag);

    void setPolar(double r, double phi);

    void setReal(double real);

    void setImag(double imag);

    void setR(double r);

    void setPhi(double phi);

    Cartesian getCartesian();

    Polar getPolar();
};


#endif
