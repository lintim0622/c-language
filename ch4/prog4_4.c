#include <stdio.h>

int main(void) {
    int num1 = 32, num2 = 1024;
    float num3 = 12.3478f;

    printf("num1 = %6d km\n", num1);
    printf("num2 = %-6d km\n", num2);
    printf("num3 = %6.2f km\n", num3);
    return 0;
}