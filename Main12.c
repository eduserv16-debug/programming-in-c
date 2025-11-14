/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include <stdio.h>

int main() {
    int num;

    printf("Input 1:\n");
    scanf("%d", &num);
    if (num >= 0) {
        if (num == 0)
            printf("Output 1:\nZero\n\n");
        else
            printf("Output 1:\nPositive\n\n");
    } else {
        printf("Output 1:\nNegative\n\n");
    }

    printf("Input 2:\n");
    scanf("%d", &num);
    if (num >= 0) {
        if (num == 0)
            printf("Output 2:\nZero\n\n");
        else
            printf("Output 2:\nPositive\n\n");
    } else {
        printf("Output 2:\nNegative\n\n");
    }

    printf("Input 3:\n");
    scanf("%d", &num);
    if (num >= 0) {
        if (num == 0)
            printf("Output 3:\nZero\n");
        else
            printf("Output 3:\nPositive\n");
    } else {
        printf("Output 3:\nNegative\n");
    }

    return 0;
}
