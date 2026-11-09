#include<stdio.h>
int main() 
{
    int a[7]={3,6,8,2,0,9,4};
    printf("%d\n",a[2]);
    printf("%d\n",a[5]);
    a[0]=1;
    printf("%d\n",a[0]);
    return 0;
}