/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.*/

#include <stdio.h>

int main() {
    char ch;

    printf("Input 1:\n");
    scanf(" %c", &ch);  
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Output 1:\nVowel\n\n");
    } else {
        printf("Output 1:\nConsonant\n\n");
    }

    printf("Input 2:\n");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Output 2:\nVowel\n");
    } else {
        printf("Output 2:\nConsonant\n");
    }

    return 0;
}
