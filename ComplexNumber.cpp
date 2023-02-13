#include <cmath>
#include "ComplexNumber.h"

void ComplexNumber::setReal(double real) {
    cartesian.real=real;
    updateFromCartesian();
}

void ComplexNumber::setImag(double imag) {
    cartesian.imag=imag;
    updateFromCartesian();
}

void ComplexNumber::setR(double r) {
    polar.r = r;
    updateFromPolar();
}

void ComplexNumber::setPhi(double phi) {
    polar.phi = phi;
    updateFromPolar();
}

void ComplexNumber::updateFromCartesian() {
    polar.r = sqrt(pow(cartesian.imag, 2) + pow(cartesian.real, 2));
    polar.phi = atan(cartesian.imag / cartesian.real);
}

void ComplexNumber::updateFromPolar() {
    cartesian.real = polar.r * cos(polar.phi);
    cartesian.imag = polar.r * sin(polar.phi);
}

std::string ComplexNumber::toCartesianString() const {
    std::string buildString = std::to_string(cartesian.real) + " + " + std::to_string(cartesian.imag) + " i";
    return buildString;
}

std::string ComplexNumber::toPolarString() const {
    std::string buildString = std::to_string(polar.r) + " * e ^ (i * " + std::to_string(polar.phi) + ")";
    return buildString;
}
