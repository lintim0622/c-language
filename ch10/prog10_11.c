#include <stdio.h>

void rect(int x, int y, int *p1, int *p2);

int main() {
    int a = 5, b = 8;
    int area = 0, peri = 0;
    rect(a, b, &area, &peri);
    printf("area = %d, total length = %d\n", area, peri);
    return 0;
}

void rect(int x, int y, int *p1, int *p2) {
    *p1 = x*y;
    *p2 = 2*(x+y);
}