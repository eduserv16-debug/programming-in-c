/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int num = 2 * (i + 1);
        int den = 4 * i + 3;
        sum += (float)num / den;
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
