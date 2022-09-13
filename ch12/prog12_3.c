#include <stdio.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main() {
    FILE *fptr;
    char str[MAX], ch;
    int i = 0;
    fptr = fopen("output.txt", "a");

    printf("please enter a string, press enter to end:\n");
    while ((ch = getche()) != ENTER && i < MAX)
        str[i++] = ch;
    putc('\n', fptr);
    fwrite(str, sizeof(char), i, fptr);
    fclose(fptr);
    printf("\nfile append finish!\n");
    return 0;
}