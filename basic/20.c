/* prgm to print all even nubers till n number*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        /* code */
        if(i%2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
    