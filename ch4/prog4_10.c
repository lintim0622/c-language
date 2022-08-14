#include <stdio.h>

int main(void) {
    int a, b;
    printf("Please enter two integers, separated by commas: ");
    scanf("%d, %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    return 0;
}