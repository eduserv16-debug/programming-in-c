/*Q98: Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], surname[100];
    int i = 0, j = 0, k = 0, spaceCount = 0;

    printf("Enter a name:\n");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            spaceCount++;
            if (spaceCount == 1 || spaceCount == 2) {
                printf("%c.", word[0]);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    printf(" %s\n", word);

    return 0;
}
