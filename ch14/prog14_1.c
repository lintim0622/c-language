#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = (int *) malloc(3*sizeof(int));

    *ptr = 12;
    *(ptr+1) = 35;
    *(ptr+2) = 140;

    for (int i = 0; i < 3; i++) {
        printf("*ptr+%d = %d\n", i, *(ptr+i));
    }

    free(ptr);
    return 0;
}