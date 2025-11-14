/*Q73: Find the sum of each row of a matrix and store it in an array.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10], rowSum[10];

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }

    printf("\n");
    return 0;
}
