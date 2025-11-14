/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at Rs5/unit 
Next 100 units at Rs7/unit 
Next 100 units at Rs10/unit 
Above at Rs12/unit*/

#include <stdio.h>

int main() {
    int units, bill;

    printf("Input 1:\n");
    scanf("%d", &units);
    printf("Output 1:\n");
    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    printf("Bill: Rs %d\n\n", bill);

    printf("Input 2:\n");
    scanf("%d", &units);
    printf("Output 2:\n");
    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    printf("Bill: Rs %d\n\n", bill);

    printf("Input 3:\n");
    scanf("%d", &units);
    printf("Output 3:\n");
    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    printf("Bill: Rs %d\n", bill);

    return 0;
}
