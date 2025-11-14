/*Q31: Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>
int main() {
    int n, binary[32], i;
    printf("Input 1:\n");
    scanf("%d", &n);
    printf("Output 1:\n");
    i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
 
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n\n");
    while (getchar() != '\n');
    printf("Input 2:\n");
    scanf("%d", &n);
    printf("Output 2:\n");
    i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}


