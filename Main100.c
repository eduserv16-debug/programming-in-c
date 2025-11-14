/*Q100: Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, k, len;

    printf("Enter a string:\n");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1)) {
                printf(",");
            }
        }
    }

    printf("\n");
    return 0;
}
