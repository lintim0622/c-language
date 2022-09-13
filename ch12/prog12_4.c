#include <stdio.h>
#define MAX 80

int main() {
    FILE *fptr;
    char str[MAX];
    int bytes;
    fptr = fopen("output.txt", "r");
    while (!feof(fptr)) {
        bytes = fread(str, sizeof(char), MAX, fptr);
        if (bytes < MAX)
            str[bytes] = '\0';
        printf("%s\n", str);
    }
    fclose(fptr);
    return 0;
}