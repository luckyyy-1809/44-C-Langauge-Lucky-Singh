#include<stdio.h>
int main() 
{
    int a,b,quotient,remainder;
    printf("Enter dividend and divisor: ");
    scanf("%d %d",&a,&b);
    quotient = a/b;
    remainder = a%b;
    printf("Quotient is %d\n", quotient);
    printf("Remainder is %d\n", remainder);
    return 0;
}