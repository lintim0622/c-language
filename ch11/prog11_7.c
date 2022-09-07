#include <stdio.h>
#define MAX 2

struct data {
    char name[10];
    int math;
};

int main() {
    struct data st[MAX];
    for (int i = 0; i < MAX; i++) {
        printf("student's name : ");
        gets(st[i].name);
        printf("math's score : ");
        scanf("%d", &st[i].math);
        fflush(stdin);
    }
    printf("========= result =========\n");
    for (int i = 0; i < MAX; i++)
        printf("%s's math score = %d\n", st[i].name, st[i].math);
    return 0;
}
