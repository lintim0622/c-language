#include <stdio.h>
#define SIZE 15

int main() {
    #ifdef SIZE
        #if SIZE > 20
            char str[SIZE] = "Hello C language";
        #else
            char *str = "Hello C language";
        #endif
    #else
        char *str = "SIZE not defined";
    #endif
    printf("%s\n", str);
    return 0;
}