/* prgrm to find solution of logical operators equation*/
#include <stdio.h>
int main()
{
    int res;
    res = 2+3*4>2+1%2*3&&2/4<=5+1==3-2%6||0+1-2+1-3&&0;
    printf("Result of the arithmetic expression is: %d\n", res);
    return 0;
}