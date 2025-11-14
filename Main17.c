/*Q17: Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Input 1:\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    printf("Output 1:\n");
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n\n");
    }

    printf("Input 2:\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    printf("Output 2:\n");
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n\n");
    }

    printf("Input 3:\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    printf("Output 3:\n");
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n");
    }

    return 0;
}
