#include <stdio.h>
#define SIZE 3

void func(int a[]);

int main() {
    int a[SIZE] = {20, 8, 13};
    printf("in main(), array [a] address:%p\n", a);
    for (int i = 0; i < SIZE; i++)
        printf("a[%d] = %d, address = %p\n", i, a[i], a+i);
    func(a);
    return 0;
}

void func(int a[]) {
    printf("\nin func(int a[]), array [a] address:%p\n", a);
    for (int i = 0; i < SIZE; i++)
        printf("a[%d] = %d, address = %p\n", i, a[i], &a[i]);
}