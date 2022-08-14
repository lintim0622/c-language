#include <stdio.h>

int main(void) {
    char name[10];
    printf("What is your name : ");
    scanf("%s", name);
    printf("Hi, %s, How are you?\n", name);
    return 0;
}