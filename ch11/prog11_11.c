#include <stdio.h>

struct data {
    char name[10];
    int math;
};

void swap(struct data *d1, struct data *d2);

int main() {
    struct data d1 = {"Jenny", 74};
    struct data d2 = {"Teresa", 88};
    swap(&d1, &d2);
    printf("After call swap function:\n");
    printf("d1.name = %s, d1.math = %d\n", d1.name, d1.math);
    printf("d2.name = %s, d2.math = %d\n", d2.name, d2.math);
    return 0;
}

void swap(struct data *d1, struct data *d2) {
    struct data tmp = *d1;
    *d1 = *d2;
    *d2 = tmp;
}