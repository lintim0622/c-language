#include <stdio.h>

int main() {
    char name[20];
    char *ptr = "How are you?";
    printf("What is your name? ");
    gets(name);
    printf("Hi, %s, ", name);
    puts(ptr);
    return 0;
}