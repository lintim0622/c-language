#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int count = 0;
    fptr = fopen("welcome.txt", "r"); // C:\\Users\\lintim0622\\Desktop\\python_C_C++\\c language\\ch12
    if (fptr != NULL) {
        while ((ch = getc(fptr)) != EOF) {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\ntotal have %d characters\n", count);
    }
    else
        printf("FILE open failed!\n");
    return 0;
}