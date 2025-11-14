/*Q90: Toggle case of each character in a string.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    printf("Toggled case string:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
