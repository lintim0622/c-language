#include <stdio.h>
#include <conio.h>

int main(void) {
    char ch;
    printf("please enter a character : ");
    ch = getche();
    printf("   input character with you is : %c\n", ch);

    printf("please enter a character : ");
    ch = getch();
    printf("   input character with you is : %c\n", ch);
    return 0;
}