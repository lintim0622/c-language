#include <stdio.h>

void count() {
    extern int cnt;
    cnt++;
    printf("cnt = %d\n", cnt);
}