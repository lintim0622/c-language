#include <stdio.h>
#include <stdlib.h>

int main() {
    const int N = 10000;
    int count = 0;
    for (int i = 0; i < N; i++)
        if ((rand() % 6 + 1) == 3)
            count++;
    printf("When the dice are rolled %d times, the number of 3s is %d times\n", N, count);
    printf("Chances are %.3f\n", (float)count/N);
    return 0;
}