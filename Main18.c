/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>

int main() {
    int percentage;

    printf("Input 1:\n");
    scanf("%d", &percentage);
    printf("Output 1:\n");
    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n\n");
    else if (percentage >= 80)
        printf("Grade B\n\n");
    else if (percentage >= 70)
        printf("Grade C\n\n");
    else if (percentage >= 60)
        printf("Grade D\n\n");
    else
        printf("Grade F\n\n");

    printf("Input 2:\n");
    scanf("%d", &percentage);
    printf("Output 2:\n");
    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n\n");
    else if (percentage >= 80)
        printf("Grade B\n\n");
    else if (percentage >= 70)
        printf("Grade C\n\n");
    else if (percentage >= 60)
        printf("Grade D\n\n");
    else
        printf("Grade F\n\n");

    printf("Input 3:\n");
    scanf("%d", &percentage);
    printf("Output 3:\n");
    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n\n");
    else if (percentage >= 80)
        printf("Grade B\n\n");
    else if (percentage >= 70)
        printf("Grade C\n\n");
    else if (percentage >= 60)
        printf("Grade D\n\n");
    else
        printf("Grade F\n\n");

    printf("Input 4:\n");
    scanf("%d", &percentage);
    printf("Output 4:\n");
    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
