/*Q1: Write a program to input two numbers and display their sum.*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Input :\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Output 1:\nSum = %d\n\n", sum);


    return 0;
}

