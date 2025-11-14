/*Q1: Write a program to input two numbers and display their sum.*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Input 1:\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Output 1:\nSum = %d\n\n", sum);

    printf("Input 2:\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Output 2:\nSum = %d\n", sum);

    return 0;
}
