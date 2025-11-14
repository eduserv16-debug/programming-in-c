/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.*/

#include <stdio.h>

int main() {
    int year;

    printf("Input 1:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Output 1:\nLeap year\n\n");
    else
        printf("Output 1:\nNot a leap year\n\n");

    printf("Input 2:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Output 2:\nLeap year\n\n");
    else
        printf("Output 2:\nNot a leap year\n\n");

    printf("Input 3:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Output 3:\nLeap year\n");
    else
        printf("Output 3:\nNot a leap year\n");

    return 0;
}
