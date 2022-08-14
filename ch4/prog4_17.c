#include <stdio.h>

int main(void) {
    int num;
    char str[10];
    printf("please enter an integer : ");
    scanf("%d", &num);
    printf("num = %d\n", num);

    printf("please enter a string : ");
    scanf("%s", str);
    printf("str = %s", str);
    return 0;
}