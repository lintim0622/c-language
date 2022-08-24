#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    while (ch != 113) {
        ch = getch();
        printf("ASCII of ch = %d\n", ch);
    }
    printf("you have beam put q...\n");
    return 0;
}