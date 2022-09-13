#include <stdio.h>
#include "area.h"
#include "peri.h"
#include "show.h"

double area(double radius);
double peri(double radius);

int main() {
    printf("area(2.2)=%5.2f\n", area(2.2));
    printf("peri(1.4)=%5.2f\n", peri(1.4));
    return 0;
}