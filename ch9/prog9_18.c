#include <stdio.h>
#define SIZE 5

void show(int arr[]), bubble(int arr[]);

int main() {
    int data[SIZE] = {26, 5, 81, 7, 63};
    printf("Before process...\n");
    show(data);
    bubble(data);

    printf("After process...\n");
    show(data);
    return 0;
}

void show(int arr[]) {
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubble(int arr[]) {
    int flag = 0;
    for (int i = 1; i < SIZE && (!flag); i++) {
        flag = 1;
        
        for (int j = 0; j < (SIZE-i); j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
    }
}