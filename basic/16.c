/* prgrm to find greatest of two numbers*/
#include<stdio.h>
int main()
{
    int a, b;
    printf(" enter a and b value\n");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf(" a is greatest of two numbers %d\n", a);
    }
    else{
        printf("b is greatest of two numbers %d\n", b);
    }
    return 0;
}