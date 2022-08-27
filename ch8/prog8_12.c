#include <stdio.h>

int fib(int n);

int main() {
    for (int n = 1; n <= 10; n++)
        printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}