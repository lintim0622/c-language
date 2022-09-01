#include <stdio.h>

int main() {
    int *ptri;
    char *ptrc;

    printf("sizeof(ptri) = %d\n", sizeof(ptri));
    printf("sizeof(ptrc) = %d\n", sizeof(ptrc));
    printf("sizeof(*ptri) = %d\n", sizeof(*ptri));
    printf("sizeof(*ptrc) = %d\n", sizeof(*ptrc));
    return 0;
}