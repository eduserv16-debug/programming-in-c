/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;

    printf("Input 1:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Output 1:\nArea=%.2f, Circumference=%.2f\n\n", area, circumference);

    printf("Input 2:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Output 2:\nArea=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
