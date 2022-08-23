#include <stdio.h>

int main() {
    char grade;
    printf("Input grade : ");
    scanf("%c", &grade);
    switch (grade) {
    case 'a':
    case 'A':
        printf("Excellent!\n");
        break;

    case 'b':
    case 'B':
        printf("good!\n");
        break;

    case 'c':
    case 'C':
        printf("be study hard!\n");
        break;
    
    default:
        printf("Failed\n");
        break;
    }
    return 0;
}