/* prgm to print greatest of three numbers*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values for a, b, and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c){
        printf("a is the greatest of the three numbers: %d\n", a);
    }
    else if(b >= a && b >= c){
        printf("b is the greatest of the three numbers: %d\n", b);
    }
    else{
        printf("c is the greatest of the three numbers: %d\n", c);
    }
    return 0;
}
