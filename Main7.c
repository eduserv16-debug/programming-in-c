/*Q7: Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() {
    int a, b;

    // First input
    printf("Input 1:\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Output 1:\nAfter swap: %d %d\n\n", a, b);

    // Second input
    printf("Input 2:\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Output 2:\nAfter swap: %d %d\n", a, b);

    return 0;
}
