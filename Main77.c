/*Q77: Check if the elements on the diagonal of a matrix are distinct.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10], diag[10], count = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r && i < c; i++) {
        diag[count++] = mat[i][i];
    }

    int isDistinct = 1;
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    printf("Diagonal elements are distinct:\n");
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
