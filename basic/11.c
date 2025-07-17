/* prgrm to find solution of bitwise operators equation*/
#include <stdio.h>
int main()
{
    int res;
    res = 2+4&3+5%1|2/3;
    printf("Result of the arithmetic expression is: %d\n", res);
    return 0;
}