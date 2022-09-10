#include <stdio.h>

void toUPPER(char s[]);

int main() {
    char str[15];
    printf("please enter a string : ");
    gets(str);
    toUPPER(str);
    printf("trandform to upper : %s\n", str);
    return 0;
}

void toUPPER(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        i++;
    }
}