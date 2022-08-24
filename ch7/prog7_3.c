#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    while (sum <= 100) {
        sum += i;
        printf("from 1 accumulate to %2d = %d\n", i, sum);
        i++;
    }
    printf("Need to acculumate %d\n", i-1);
    return 0;
}