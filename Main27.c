/*Q27: Write a program to print the sum of the first n odd numbers.*/

#include <stdio.h>

int main() {
    int n;
    int i, count;  

    printf("Input 1:\n");
    scanf("%d", &n);
    printf("Output 1:\n");

    int sum1 = 0;
    i = 1;
    count = 0;
    while (count < n) {
        sum1 += i;
        i += 2;
        count++;
    }
    printf("%d\n\n", sum1);

    while (getchar() != '\n');

    printf("Input 2:\n");
    scanf("%d", &n);
    printf("Output 2:\n");

    int sum2 = 0;
    i = 1;
    count = 0;
    while (count < n) {
        sum2 += i;
        i += 2;
        count++;
    }
    printf("%d\n", sum2);

    return 0;
}

