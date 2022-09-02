#include <stdio.h>

int *max(int *p1, int *p2);

int main() {
    int a = 12, b = 17;
    int *ptr = NULL;
    ptr = max(&a, &b);
    printf("max = %d", *ptr);
    return 0;
}

int *max(int *p1, int *p2) {
    if (*p1 > *p2)
        return p1;
    return p2;
}