#include <stdio.h>
#define STR "Hello C language"

int main() {
    #ifdef STR
        printf(STR);
    #else
        printf("no define STR\n");
    #endif
    return 0;
}