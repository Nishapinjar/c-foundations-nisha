/* prgrm to find bit count of a number*/
#include <stdio.h>
int main() {
     int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%u", &n);
    while (n > 0) {
        count += n & 1; // Increment count if the last bit is 1
        n >>= 1; // Right shift n by 1 to process the next bit
    }
    printf("Number of bits set to 1: %d\n", count);
    return 0;
}