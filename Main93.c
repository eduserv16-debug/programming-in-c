/*Q93: Check if two strings are anagrams of each other.*/
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int i, freq1[26] = {0}, freq2[26] = {0}, isAnagram = 1;

    printf("Enter first string:\n");
    scanf("%s", str1);

    printf("Enter second string:\n");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
