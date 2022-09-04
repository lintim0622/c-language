#include <stdio.h>
#define SIZE 5
int *maximum(int *arr);

int main() {
    int a[SIZE] = {3, 1, 7, 2, 6};
    int *ptr = NULL;
    printf("array : ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    ptr = maximum(a);
    printf("\nmax = %d\n", *ptr);
    return 0;
}

int *maximum(int *arr) {
    int *max = arr;
    for (int i = 1; i < SIZE; i++) {
        if (*max < arr[i])
            max = arr+i;
    }
    return max;
}