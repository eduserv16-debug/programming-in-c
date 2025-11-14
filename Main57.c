/*Q57: Find the sum of array elements.*/

#include <stdio.h>

int main() {
    int n, i, sum = 0, arr[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);
    return 0;
}
