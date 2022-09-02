#include <stdio.h>

int main() {
    int sum = 0;
    int a[3] = {5, 7, 9};
    int *ptr = a;
    for (int i = 0; i < 3; i++)
        sum += *(ptr++);
    printf("sum = %d\n", sum);
    return 0;
}