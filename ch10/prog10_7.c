#include <stdio.h>

void address(int *p);

int main() {
    int a = 12;
    int *ptr = &a;
    address(&a);
    address(ptr);
    return 0;
}

void address(int *p) {
    printf("In position %p, the stored variable content is %d\n", p, *p);
}