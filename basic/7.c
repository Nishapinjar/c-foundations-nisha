/*prgm t find simple interest*/
#include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple interest is: %.2f\n", simple_interest);  
    return 0;
}