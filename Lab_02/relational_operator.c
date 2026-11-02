#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b\n");
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        printf("a is greater than or equal to b\n");
    }
    else
    {
        printf("a is less than b\n");
    }
    return 0; 
}