/*Q95: Check if one string is a rotation of another.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000], concat[2000];
    int len1, len2;

    printf("Enter first string:\n");
    scanf("%s", str1);

    printf("Enter second string:\n");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(concat, str1);
    strcat(concat, str1);

    if (strstr(concat, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
