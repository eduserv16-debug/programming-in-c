/*Q74: Find the transpose of a matrix.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10];

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (j = 0; j < c; j++) {
        for (i = 0; i < r; i++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
