/*Q75: Add two matrices.*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    int mat1[10][10], mat2[10][10], sum[10][10];

    printf("Enter number of rows and columns for first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter number of rows and columns for second matrix:\n");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrix dimensions must match for addition.\n");
        return 1;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
