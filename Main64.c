/*Q64: Find the digit that occurs the most times in an integer number.*/

#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0}, maxFreq = 0, maxDigit = 0;

    printf("Enter the number:\n");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (digit = 0; digit < 10; digit++) {
        if (freq[digit] > maxFreq) {
            maxFreq = freq[digit];
            maxDigit = digit;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
