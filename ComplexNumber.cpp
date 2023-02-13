#include <cmath>
#include "ComplexNumber.h"

// 1a)Da wir bereits structs für die kartesische und Polarkoordinaten verwendet haben, ist es naheliegend diese auch für
// die Constructoren zu verwenden. Da sie beide aus zwei double, Variablen bestehen wäre es nicht möglich zwei verschiedene
// Constructoren mit jeweils zwei double Werten zu haben.

// 1b)Der Compiler wirft einen Error. Da wir einen Constructor implementiert haben, wird kein default-Constructor mehr erzeugt,
// und wir haben keinen Constructor ohne Initialisierungswerte implementiert.

// 2) "C:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe" --build C:\Users\Malte\CLionProjects\hwr-cpp-assignments\cmake-build-debug --target hwr_cpp_assignments -j 9
// FAILED: CMakeFiles/hwr_cpp_assignments.dir/Ui.cpp.obj
// C:/Users/Malte/CLionProjects/hwr-cpp-assignments/Ui.cpp: In constructor 'Ui::Ui()':
// C:/Users/Malte/CLionProjects/hwr-cpp-assignments/Ui.cpp:97:8: error: call of overloaded 'ComplexNumber()' is ambiguous
//   97 | Ui::Ui(){}
//      |        ^

ComplexNumber::ComplexNumber(TwoPointFour twoPointFour) {
    setR(twoPointFour.x);
    setPhi(twoPointFour.y);
}

ComplexNumber::ComplexNumber(double length) {
    setR(length);
    if (length > 0) {
        setPhi(0.7854); // 0.7854 rad equals 45°
    } else {
        setPhi(-0.7854); // -0.7854 rad equals -45°
    }
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
