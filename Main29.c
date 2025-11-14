/*Q29: Write a program to calculate the factorial of a number.*/

#include <stdio.h>

int main() {
    int n, i;
    long long factorial;

    printf("Input 1:\n");
    scanf("%d", &n);

    printf("Output 1:\n");
    factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%lld\n\n", factorial);

    while (getchar() != '\n');

    printf("Input 2:\n");
    scanf("%d", &n);

    printf("Output 2:\n");
    factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%lld\n", factorial);

    return 0;
}
