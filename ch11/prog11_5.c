#include <stdio.h>

struct date {
    int month;
    int day;
};

struct data {
    char name[10];
    int math;
    struct date birthday;
};

int main() {
    struct data s1 = {"Tim", 77, {6, 22}};
    printf("student's name: %s\n", s1.name);
    printf("birthday: %02d/%d\n", s1.birthday.month, s1.birthday.day);
    printf("math'score: %d\n", s1.math);
    return 0;
}
