/*Q8: Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>

int main() {
    int n, sum;

    printf("Input 1:\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Output 1:\nSum=%d\n\n", sum);

    printf("Input 2:\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Output 2:\nSum=%d\n", sum);

    return 0;
}
