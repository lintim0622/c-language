#include <stdio.h>

enum color {
    red = 114,
    green = 103,
    blue = 98
};

int main() {
    char key;
    enum color shirt;
    do {
        printf("please input r, g or b: ");
        scanf("%c", &key);
        fflush(stdin);
    } while (key != red && key != green && key != blue);

    shirt = key;
    switch (shirt) {
    case red:
        printf("you choice red\n");
        break;
    case green:
        printf("you choice green\n");
        break;
    case blue:
        printf("you choice blue\n");
        break;
    default:
        break;
    }
    
    return 0;
}