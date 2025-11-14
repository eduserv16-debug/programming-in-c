/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    printf("Input 1:\n");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Output 1:\nArea=%d, Perimeter=%d\n\n", area, perimeter);

    printf("Input 2:\n");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Output 2:\nArea=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
