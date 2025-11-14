/*Q16: Write a program to input three numbers and find the largest among them using if–else.*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Input 1:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Output 1:\nLargest is %d\n\n", a);
    else if (b >= a && b >= c)
        printf("Output 1:\nLargest is %d\n\n", b);
    else
        printf("Output 1:\nLargest is %d\n\n", c);

    printf("Input 2:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Output 2:\nLargest is %d\n", a);
    else if (b >= a && b >= c)
        printf("Output 2:\nLargest is %d\n", b);
    else
        printf("Output 2:\nLargest is %d\n", c);

    return 0;
}
