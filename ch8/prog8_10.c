#include <stdio.h>

int fac(int n);

int main() {
    int n = 5;
    printf("%d! = %d", n, fac(n));
    return 0;
}

int fac(int n) {
    if (n > 0)
        return n*fac(n-1);
    else
        return 1;
}