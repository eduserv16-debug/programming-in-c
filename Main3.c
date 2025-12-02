/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
