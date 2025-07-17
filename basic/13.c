/* prgrm to macros set and reset a bit number*/
#include <stdio.h>
#define SET_BIT(a, p) ((a) | (1U << (p)))
#define RESET_BIT(a, p) ((a) & ~(1U << (p)))
int main() {
    int a, p, result_set, result_reset;
    printf("Enter a and p : ");
    scanf("%d %d", &a, &p);
    result_set = SET_BIT(a, p);
    result_reset = RESET_BIT(a, p);
    printf("After setting bit %d of %d: %d\n", p, a, result_set);
    printf("After resetting bit %d of %d: %d\n", p, a, result_reset);
    return 0;
}
