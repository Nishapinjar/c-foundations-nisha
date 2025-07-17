/* prgrm to swap two numbers without using temp varible*/
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of a by b to get original a
    a = a - b; // Step 3: Subtract the new value of b from a to get original b
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
