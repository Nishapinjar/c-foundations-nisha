/* area of traiangle when 3 sides are given*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter sides a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle = %.2f\n", area);
    return 0;
}
