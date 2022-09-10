#include <stdio.h>

enum color {
    red,
    green,
    blue
};

int main() {
    enum color shirt;
    printf("sizeof(shirt) = %d\n", sizeof(shirt));
    printf("red = %d\n", red);
    printf("green = %d\n", green);
    printf("blue = %d\n", blue);

    shirt = green;
    if (shirt == green)
        printf("you choice a green Tshirt\n");
    else
        printf("you not choice a green Tshirt\n");
    return 0;
}