/* prgrm to check whether give umber is power of 2 numer or not*/
#include <stdio.h>
int main() {
    int n, res;
    printf("Enter a number: ");
    scanf("%d", &n);
    res = n & (n - 1);
    if (n > 0 && res == 0) {
        printf("%d is a power of 2\n", n);
    } else {
        printf("%d is not a power of 2\n", n);
    }
    return 0;
}