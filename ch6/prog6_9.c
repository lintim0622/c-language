#include <stdio.h>

int main() {
    int num1, num2, larger;
    printf("please enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    larger = num1 > num2 ? num1 : num2;
    printf("%d is more bigger.\n", larger);
    return 0;
}