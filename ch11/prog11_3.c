#include <stdio.h>

struct data {
    char name[10];
    int math;
};

int main() {
    struct data student = {"Jenny", 77};
    printf("student's name : %s\n", student.name);
    printf("math'score : %d\n", student.math);
    return 0;
}