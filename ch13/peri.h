#ifndef PI
#define PI 3.14159
#endif

void show(double radius);
double peri(double radius) {
    show(radius);
    return 2.0*PI*radius;
}