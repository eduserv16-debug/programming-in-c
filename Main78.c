/*Q78: Find the sum of main diagonal elements for a square matrix.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10], sum = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Matrix must be square to compute main diagonal sum.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                sum += mat[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements:\n");
    printf("%d\n", sum);

    return 0;
}
