/*Q33: Write a program to check if a number is an Armstrong number.*/

#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
