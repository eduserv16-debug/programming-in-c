/*Q41: Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    last = num % 10;

    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    if (digits == 0) {
        result = num;
    } else {
        middle = num % (int)pow(10, digits);
        middle = middle - last;
        result = last * (int)pow(10, digits) + middle + first;
    }

    printf("%d\n", result);
    return 0;
}
