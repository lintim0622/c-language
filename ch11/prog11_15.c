#include <stdio.h>

struct data {
    char name[10];
    int math;
};

typedef struct data score;
void display(score *s);

int main() {
    score st = {"Tim", 75};
    display(&st);
    return 0;
}

void display(score *s) {
    printf("name: %s\n", s->name);
    printf("math: %d\n", s->math);
}

