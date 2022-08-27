#include <stdio.h>

int power(int base, int n);

int main() {
    int base = 2, n = 10;
    printf("%d^%d = %d\n", base, n, power(base, n));
    return 0;
}

int power(int base, int n) {
    if (n == 0)
        return 1;
    else
        return (base*power(base, n-1));
}