#include <stdio.h>

int is_prime(int *num);

int main() {
    for (int i = 2; i <= 30; i++)
        if (is_prime(&i))
            printf("%d  ", i);
    printf("\n");
    return 0;
}

int is_prime(int *num) {
    for (int i = 2; i <= (*num)/2; i++)
        if ((*num) % i == 0)
            return 0;
    return 1;
}