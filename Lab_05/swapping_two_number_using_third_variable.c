#include<stdio.h>
int main() 
{
    int a,b,x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    x = a;
    a = b;
    b = x;
    printf("after swapping: a = %d, b = %d\n", a,b);
    return 0;
}