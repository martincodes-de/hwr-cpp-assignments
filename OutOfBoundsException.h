#ifndef MATRIX_OUTOFBOUNDSEXCEPTION_H
#define MATRIX_OUTOFBOUNDSEXCEPTION_H

#include <string>
class OutOfBoundsException
{
public:
    std::string getError()const { return  errorMessage;}
private:
    std::string errorMessage = "Out of Bounds";
};

#endif //MATRIX_OUTOFBOUNDSEXCEPTION_H
