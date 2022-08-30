#include <stdio.h>

#define Begin {
#define End }

int main() Begin
    for (int i = 1; i <= 5; i++)
    Begin
        for (int j = 1; j <= i; j++)
        Begin
            printf("*");
        End
        printf("\n");
    End
    return 0;
End