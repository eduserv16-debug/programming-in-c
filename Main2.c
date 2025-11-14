/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, product, quotient;

    printf("Input 1:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    printf("Output 1:\nSum=%d, Diff=%d, Product=%d, Quotient=%d\n\n", sum, diff, product, quotient);

    printf("Input 2:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    printf("Output 2:\nSum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
