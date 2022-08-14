#include <stdio.h>

int main(void) {
    char ch;
    printf("please enter a character : ");
    ch = getchar();
    printf("the character is ");
    putchar(ch);
    putchar('\n');
    return 0;
}