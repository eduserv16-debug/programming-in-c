/*Q79: Perform diagonal traversal of a matrix.*/
#include <stdio.h>

int main() {
    int r, c, i, j, d;
    int mat[10][10];

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (d = 0; d < r + c - 1; d++) {
        i = (d < c) ? 0 : d - c + 1;
        j = (d < c) ? d : c - 1;
        while (i < r && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
