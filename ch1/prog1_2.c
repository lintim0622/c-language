#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch;
    printf("Input a character: ");
    scanf("%c", &ch);
    printf("ch=%c, The ASCII code is %d\n", ch, ch);
    // system("pause");
    return 0;
}