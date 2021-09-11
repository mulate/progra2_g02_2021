#include <iostream>
#include <cfloat>

#define PI 3.14

int main() {

    float a = 2;
    float b = PI;

    std::cout << sizeof(float) << std::endl;

    float c = 3.55;
    bool c2 = (3.55 == c);
    bool c3 = (3.55 - c) < FLT_EPSILON;

    double d = 2;
    double e = PI;
    double f = 3.55;

    std::cout << FLT_EPSILON;

    return 0;
}