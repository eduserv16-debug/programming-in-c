/*Q11: Write a program to input an integer and check whether it is even or odd using if-else.*/

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first integer:\n");
    scanf("%d", &num1);
    printf("Enter second integer:\n");
    scanf("%d", &num2);
    if (num1 % 2 == 0) {
        printf("%d is even\n", num1);
    } else {
        printf("%d is odd\n", num1);
    }
    if (num2 % 2 == 0) {
        printf("%d is even\n", num2);
    } else {
        printf("%d is odd\n", num2);
    }
    return 0;
}

