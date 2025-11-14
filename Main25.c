/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Input 1:\n");
    scanf("%d %d %c", &a, &b, &op);
    printf("Output 1:\n");
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        case '%': result = a % b; break;
        default: printf("Invalid operator\n"); return 0;
    }
    printf("%d\n\n", result);

    printf("Input 2:\n");
    scanf("%d %d %c", &a, &b, &op);
    printf("Output 2:\n");
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        case '%': result = a % b; break;
        default: printf("Invalid operator\n"); return 0;
    }
    printf("%d\n\n", result);

    printf("Input 3:\n");
    scanf("%d %d %c", &a, &b, &op);
    printf("Output 3:\n");
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        case '%': result = a % b; break;
        default: printf("Invalid operator\n"); return 0;
    }
    printf("%d\n", result);

    return 0;
}
