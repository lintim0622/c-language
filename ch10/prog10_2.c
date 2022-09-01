#include <stdio.h>

int main() {
    int *ptr, num = 20;
    ptr = &num;
    printf("num = %d, &num = %p\n", num, &num);
    printf("*ptr = %d, ptr = %p, &ptr = %p\n", *ptr, ptr, &ptr);
    return 0;
}