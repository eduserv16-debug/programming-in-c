/*Q76: Check if a matrix is symmetric.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10], isSymmetric = 1;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (r != c) {
        isSymmetric = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) break;
        }
    }

    printf("Matrix is symmetric:\n");
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
