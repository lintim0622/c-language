#include <stdio.h>
#include "count.h"

int cnt;
void count();

int main() {
    printf("please enter a value to cnt: ");
    scanf("%d", &cnt);

    count();
    count();

    cnt++;
    printf("cnt = %d\n", cnt);
    return 0;
}