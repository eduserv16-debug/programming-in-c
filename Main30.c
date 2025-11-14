/*Q30: Write a program to reverse a given number.*/

#include <stdio.h>

int main() {
    int n, reversed, digit;

    printf("Input 1:\n");
    scanf("%d", &n);

    printf("Output 1:\n");
    reversed = 0;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("%d\n\n", reversed);

    while (getchar() != '\n');

    printf("Input 2:\n");
    scanf("%d", &n);

    printf("Output 2:\n");
    reversed = 0;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("%d\n", reversed);

    return 0;
}
