#include <stdio.h>

int main() {
    char *ptr[3] = {"Tom", "Lily", "James Lee"};
    for (int i = 0; i < 3; i++)
        printf("%s\n", ptr[i]);
    return 0;
}