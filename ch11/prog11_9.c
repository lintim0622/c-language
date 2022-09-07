#include <stdio.h>
#define MAX 3

struct data {
    char name[10];
    int math;
};

int main() {
    struct data students[MAX] = {{"Mary", 87}, {"Flora", 93}, {"Jenny", 74}};
    int m = students[0].math, index = 0;
    
    for (int i = 1; i < MAX; i++) {
        if ((students+i)->math > m) {
            m = (students+i)->math;
            index = i;
        }   
    }
    
    printf("%s's score is highest, ", (students+index)->name);
    printf("score is %d p", students[index].math);
    return 0;
}