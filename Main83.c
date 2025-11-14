/*Q83: Count vowels and consonants in a string.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
