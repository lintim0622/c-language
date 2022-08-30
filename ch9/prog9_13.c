#include <stdio.h>

void func(int a);

int main() {
    int a = 13;
    printf("in main(), a = %d, address = %p\n", a, &a);
    func(a);
    return 0;
}

void func(int a) {
    printf("in func(int a), a = %d, address = %p\n", a, &a);
}