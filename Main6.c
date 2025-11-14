/*Q6: Write a program to swap two numbers using a third variable.*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Input 1:\n");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Output 1:\nAfter swap: %d %d\n\n", a, b);

    printf("Input 2:\n");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Output 2:\nAfter swap: %d %d\n", a, b);

    return 0;
}
