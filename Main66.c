/*Q66: Insert an element in a sorted array at the appropriate position.*/

#include <stdio.h>

int main() {
    int n, i, key, arr[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int pos = n;
    for (i = 0; i < n; i++) {
        if (key < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
