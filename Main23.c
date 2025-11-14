/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: Rs2/day 
Next 5 days late: Rs4/day 
Next 20 days late: Rs6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main() {
    int days, fine;
    printf("Input 1:\n");
    scanf("%d", &days);
    printf("Output 1:\n");
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if (days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled\n\n");
        goto next;
    }
    printf("Fine Rs%d\n\n", fine);
next:
    printf("Input 2:\n");
    scanf("%d", &days);
    printf("Output 2:\n");
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if (days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled\n\n");
        goto next2;
    }
    printf("Fine Rs%d\n\n", fine);
next2:
    printf("Input 3:\n");
    scanf("%d", &days);
    printf("Output 3:\n");
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if (days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled\n\n");
        goto next3;
    }
    printf("Fine Rs%d\n\n", fine);
next3:
    printf("Input 4:\n");
    scanf("%d", &days);
    printf("Output 4:\n");
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if (days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else {
        printf("Membership Cancelled\n");
        return 0;
    }
    printf("Fine Rs%d\n", fine);
    return 0;
}

