/*Q85: Reverse a string.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i, len = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("Reversed string:\n");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
