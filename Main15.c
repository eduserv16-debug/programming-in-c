/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>

int main() {
    char ch;

    printf("Input 1:\n");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Output 1:\nUppercase alphabet\n\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Output 1:\nLowercase alphabet\n\n");
    else if (ch >= '0' && ch <= '9')
        printf("Output 1:\nDigit\n\n");
    else
        printf("Output 1:\nSpecial character\n\n");

    printf("Input 2:\n");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Output 2:\nUppercase alphabet\n\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Output 2:\nLowercase alphabet\n\n");
    else if (ch >= '0' && ch <= '9')
        printf("Output 2:\nDigit\n\n");
    else
        printf("Output 2:\nSpecial character\n\n");

    printf("Input 3:\n");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Output 3:\nUppercase alphabet\n\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Output 3:\nLowercase alphabet\n\n");
    else if (ch >= '0' && ch <= '9')
        printf("Output 3:\nDigit\n\n");
    else
        printf("Output 3:\nSpecial character\n\n");

    printf("Input 4:\n");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Output 4:\nUppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Output 4:\nLowercase alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Output 4:\nDigit\n");
    else
        printf("Output 4:\nSpecial character\n");

    return 0;
}
