#include <stdio.h>

double Lebniz(int n);
double power(double base, int n);

int main() {
    const int MAX_NUM = 10000;
    for (int i = 1; i <= MAX_NUM; i++)
        if (i == MAX_NUM)
            printf("Leibniz(%d) = %12.10f\n", i, Lebniz(i));
    return 0;
}

double Lebniz(int n) {
    double sum = 0.0;
    for (int k = 1; k <= n; k++)
        sum += power(-1.0, k-1)/(2.0*k-1.0);
    return 4.0*sum;
}
double power(double base, int n) {
    double pow = 1.0;
    for (int i = 1; i <= n; i++)
        pow *= base;
    return pow;
}