#include <stdio.h>
#define MAX 3

struct data {
    char name[10];
    int math;
};

int maximum(struct data arr[]);

int main() {
    struct data students[MAX] = {{"Mary", 87}, {"Flora", 93}, {"Jenny", 74}};
    int index = maximum(students);
    printf("%s's score is highest, ", (students+index)->name);
    printf("score is %d p", students[index].math);
    return 0;
}

int maximum(struct data arr[]) {
    int index, m = arr[0].math;
    for (int i = 1; i < MAX; i++) {
        if (arr[i].math > m) {
            m = arr[i].math;
            index = i;
        }
    }
    return index;
}