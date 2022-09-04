#include <stdio.h>

struct data {
    char name[10];
    int math;
} student;

int main() {
    printf("please enter a name : ");
    gets(student.name);
    printf("please enter a score : ");
    scanf("%d", &student.math);

    printf("name : %s\n", student.name);
    printf("score : %d\n", student.math);
    return 0;
}
