#include <cmath>
#include "ComplexNumber.h"

void ComplexNumber::setCartesian(double real, double imag) {
    cartesian.real = real;
    cartesian.imag = imag;

    updateFromCartesian();
}

void ComplexNumber::setPolar(double r, double phi) {
    polar.r = r;
    polar.phi = phi;

    updateFromPolar();
}

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

Cartesian ComplexNumber::getCartesian() {
    return cartesian;
}

Polar ComplexNumber::getPolar() {
    return polar;
}

void ComplexNumber::updateFromCartesian() {
    polar.r = sqrt(pow(cartesian.imag, 2) + pow(cartesian.real, 2));
    polar.phi = atan(cartesian.imag / cartesian.real);
}

void ComplexNumber::updateFromPolar() {
    cartesian.real = polar.r * cos(polar.phi);
    cartesian.imag = polar.r * sin(polar.phi);
}