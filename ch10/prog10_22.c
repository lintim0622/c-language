#include <stdio.h>

int main() {
    int num[3][4] = {0};
    printf("num = %p\n", num);
    printf("*num = %p\n", *num);
    printf("&num = %p\n", &num);
    printf("num[0] = %p\n", num[0]);
    printf("num[1] = %p\n", num[1]);
    printf("num[2] = %p\n", num[2]);
    printf("&num[0] = %p\n", &num[0]);
    printf("&num[1] = %p\n", &num[1]);
    printf("&num[2] = %p\n", &num[2]);
    return 0;
}