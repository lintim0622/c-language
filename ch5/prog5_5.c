#include <stdio.h>

int main() {
    int a = 3, b = 3;
    printf("a = %d, ", a);
    printf("a++ = %d, ", a++);
    printf("a = %d\n", a);

    printf("b = %d, ", b);
    printf("++b = %d, ", ++b);
    printf("b = %d\n", b);
    return 0;
}