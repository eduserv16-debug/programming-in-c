/*Q88: Replace spaces with hyphens in a string.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    printf("Modified string:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            printf("-");
        else
            printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
