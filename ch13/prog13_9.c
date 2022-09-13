#include <stdio.h>

int main(int argc, char const *argv[]) {
    FILE *fptr1, *fptr2;
    char ch;
    if (argc == 3) {
        fptr1 = fopen(argv[1], "r");
        fptr2 = fopen(argv[2], "w");
        if ((fptr1 != NULL) && (fptr2 != NULL)) {
            while ((ch = getc(fptr1)) != EOF)
                putc(ch, fptr2);
            fclose(fptr1);
            fclose(fptr2);
            printf("File copy complete\n");
        }
        else
            printf("File open failed\n");
    }
    else
        printf("Please recheck input\n");
    return 0;
}
