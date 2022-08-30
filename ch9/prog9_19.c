#include <stdio.h>
#define ROW 4
#define COL 3

void search(int a[][COL], int b[]);

int main() {
    int a[ROW][COL] = {{26, 5, 7},
                       {10, 3, 47},
                       {6, 76, 8},
                       {40, 4, 32}};
    int b[2];
    printf("per element in 2D array:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }
    search(a, b);
    printf("Max value in 2D array : %02d\n", b[0]);
    printf("Min value in 2D array : %02d\n", b[1]);
    return 0;
}

void search(int a[][COL], int b[]) {
    b[0] = b[1] = a[0][0];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (b[0] < a[i][j])
                b[0] = a[i][j];
            if (b[1] > a[i][j])
                b[1] = a[i][j];
        }
    }
}