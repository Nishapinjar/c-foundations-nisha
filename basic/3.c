/* prgram to add one int and one float num*/
#include<stdio.h>
int main() {
    int a;
    float b, sum;
    printf("Enter an integer and a float number: ");
    scanf("%d %f", &a, &b);
    sum = a + b;
    printf("Sum = %.2f\n", sum);
    return 0;
}   