#include <stdio.h>

int main() {
    char ch = 'a';
    char str1[] = "a";
    char str2[] = "sweet home";
    printf("character ch occupies %d bytes\n", sizeof(ch));
    printf("string str1 occupies %d bytes\n", sizeof(str1));
    printf("string str2 occupies %d bytes\n", sizeof(str2));
    return 0;
}