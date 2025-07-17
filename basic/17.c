/* prgrm to find sum of n numbers*/
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the n value: ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        /* code */
        sum += i;
    }
    printf("Sum of first %d numbers is: %d\n", n, sum);
    return 0;
}
