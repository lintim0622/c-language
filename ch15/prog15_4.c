#include <stdio.h>

int main() {
    struct status {
        unsigned sex : 1;
        unsigned marriage : 1;
        unsigned age : 7;
    };

    struct status tom = {1, 0, 21};
    if (tom.sex == 0)
        printf("Girl, ");
    else
        printf("Boy, ");

    if (tom.marriage == 0)
        printf("unmarriage, ");
    else
        printf("marriaged, ");

    printf("%d years old\n", tom.age);

    printf("sizeof(tom) = %d\n", sizeof(tom));
    return 0;
}