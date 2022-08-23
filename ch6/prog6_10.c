#include <stdio.h>

int main() {
    int a, b;
    char oper;
    printf("please enter operator (eg:3+2) : ");
    scanf("%d %c %d", &a, &oper, &b);
    switch (oper) {
    case '+':
        printf("%d+%d=%d\n", a, b, a+b);
        break;
    case '-':
        printf("%d-%d=%d\n", a, b, a-b);
        break;
    case '*':
        printf("%d*%d=%d\n", a, b, a*b);
        break;
    case '/':
        printf("%d/%d=%.3f\n", a, b, (float)a/b);
        break;
    
    default:
        printf("unrecognized expression\n");
        break;
    }
    return 0;
}