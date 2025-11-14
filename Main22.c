/*Q22: Write a program to find profit or loss percentage given cost price and selling price.*/

#include <stdio.h>

int main() {
    float cp, sp, percent;

    printf("Input 1:\n");
    scanf("%f %f", &cp, &sp);
    printf("Output 1:\n");
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n\n", percent);
    } else if (sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n\n", percent);
    } else {
        printf("No Profit No Loss\n\n");
    }

    printf("Input 2:\n");
    scanf("%f %f", &cp, &sp);
    printf("Output 2:\n");
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n\n", percent);
    } else if (sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n\n", percent);
    } else {
        printf("No Profit No Loss\n\n");
    }

    printf("Input 3:\n");
    scanf("%f %f", &cp, &sp);
    printf("Output 3:\n");
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", percent);
    } else if (sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
