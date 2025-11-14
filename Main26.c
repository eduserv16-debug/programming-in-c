/*Q26: Write a program to print numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Input 1:\n");
    scanf("%d", &n);
    printf("Output 1:\n");
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("Input 2:\n");
    scanf("%d", &n);
    printf("Output 2:\n");
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
