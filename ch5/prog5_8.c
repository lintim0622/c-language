#include <stdio.h>

int main() {
    char ch = 'a';
    short s = -2;
    int i = 3;
    float f = 5.3f;
    double d = 6.28;
    printf("(ch/s)-(d/f)-(s+i) = %f\n", (ch/s)-(d/f)-(s+i));
    printf("size = %d\n", sizeof((ch/s)-(d/f)-(s+i)));
    return 0;
}