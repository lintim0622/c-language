#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    char ch;
    printf("please enter an integer : ");
    scanf("%d", &num);
    fflush(stdin);

    printf("please enter a character : ");
    scanf("%c", &ch);
    printf("num = %d, ASCII of ch = %d\n", num, ch);
    return 0;
}