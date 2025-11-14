/*Q72: Find the sum of all elements in a matrix.*/

#include <stdio.h>

int main() {
    int r, c, i, j, mat[10][10], sum = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements:\n");
    printf("%d\n", sum);

    return 0;
}
