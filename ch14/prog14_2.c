#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[10];
    int score;
};

int main(void) {
    int num;
    printf("Number of student: ");
    scanf("%d", &num);
    struct student *ptr  = (struct student*) malloc(num*sizeof(struct student));
    for (int i = 0; i < num; i++) {
        fflush(stdin);
        printf("name for student %d: ", i+1);
        gets((ptr+i)->name);
        printf("score for student %d: ", i+1);
        scanf("%d", &(ptr+i)->score);
    }
    for (int i = 0; i < num; i++)
        printf("%s:score = %d\n", (ptr+i)->name, (ptr+i)->score);

    free(ptr);
    return 0;
}
