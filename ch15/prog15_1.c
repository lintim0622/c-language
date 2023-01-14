#include <stdio.h>
#define size 8

void show_binary(int num);

int main() {
    printf("89 binary value: ");
    show_binary(89);
    return 0;
}

void show_binary(int num) {
    int b[size] = {0};
    for (int i = 0; i < size; i++) {
        b[size-i-1] = num % 2;
        num = num / 2;
    }
    for (int i = 0; i < size; i++)
        printf("%d", b[i]);
    printf("\n");
}