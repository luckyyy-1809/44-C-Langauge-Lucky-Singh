#include<stdio.h>
int main() 
{
    int n;
    do
    {
        printf("enter any number greater than 0\n");
        scanf("%d",&n);
    }
    while(n<=0);
    printf("entered number is %d\n",n);
    return 0;
}