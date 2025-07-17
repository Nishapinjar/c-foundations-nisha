/* prgm to find area of a rectangle*/
#include <stdio.h>
int main() {
    int length, breadth, area;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("Area of rectangle is: %d\n", area);
    return 0;   
}