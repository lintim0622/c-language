#include <math.h>
#ifndef PI
#define PI 3.1416
#endif

void show(double radius);
double area(double radius) {
    show(radius);
    return PI*pow(radius, 2.0);
}