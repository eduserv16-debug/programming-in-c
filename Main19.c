/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Input 1:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Output 1:\n");
    if (a == b && b == c)
        printf("Equilateral\n\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n\n");
    else
        printf("Scalene\n\n");

    printf("Input 2:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Output 2:\n");
    if (a == b && b == c)
        printf("Equilateral\n\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n\n");
    else
        printf("Scalene\n\n");

    printf("Input 3:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Output 3:\n");
    if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");

    return 0;
}
