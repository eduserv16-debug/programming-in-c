/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.*/

#include <stdio.h>

int main() {
    int day;

    printf("Input 1:\n");
    scanf("%d", &day);
    printf("Output 1:\n");
    switch(day) {
        case 1: printf("Monday\n\n"); break;
        case 2: printf("Tuesday\n\n"); break;
        case 3: printf("Wednesday\n\n"); break;
        case 4: printf("Thursday\n\n"); break;
        case 5: printf("Friday\n\n"); break;
        case 6: printf("Saturday\n\n"); break;
        case 7: printf("Sunday\n\n"); break;
        default: printf("Invalid input\n\n");
    }

    printf("Input 2:\n");
    scanf("%d", &day);
    printf("Output 2:\n");
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input\n");
    }

    return 0;
}
