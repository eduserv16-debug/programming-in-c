/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Input 1:\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Output 1:\nFahrenheit=%.0f\n\n", fahrenheit);

    printf("Input 2:\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Output 2:\nFahrenheit=%.0f\n", fahrenheit);

    return 0;
}
