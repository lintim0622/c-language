#include <stdio.h>
#define SIZE 8

void show_binary(int num);

int main(void) {
    int a = 89;
    int b = a << 1;

    printf("%d binary value: ", a);
    show_binary(a);
    printf("after left shift a bit: ");
    show_binary(b);
    printf("after left shift a bit ten value is %d\n", b);
    return 0;
}

void show_binary(int num) {
    int b[SIZE] = {0};
    for (int i = 1; i <= SIZE; i++) {
        b[SIZE-i] = num % 2;
        num /= 2;
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d", b[i]);
    printf("\n");
}