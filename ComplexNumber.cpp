#include <cmath>
#include "ComplexNumber.h"

// 1a)Da wir bereits structs für die kartesische und Polarkoordinaten verwendet haben, ist es naheliegend diese auch für
// die Constructoren zu verwenden. Da sie beide aus zwei double, Variablen bestehen wäre es nicht möglich zwei verschiedene
// Constructoren mit jeweils zwei double Werten zu haben.

// 1b)Der Compiler wirft einen Error. Da wir einen Constructor implementiert haben, wird kein default-Constructor mehr erzeugt,
// und wir haben keinen Constructor ohne Initialisierungswerte implementiert.

ComplexNumber::ComplexNumber(Cartesian cartesian) {
    this->setReal(cartesian.real);
    this->setImag(cartesian.imag);
}

ComplexNumber::ComplexNumber(Polar polar) {
    this->setR(polar.r);
    this->setPhi(polar.phi);
}

void ComplexNumber::setReal(double real) {
    cartesian.real = real;
    updateFromCartesian();
}

void ComplexNumber::setImag(double imag) {
    cartesian.imag = imag;
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
