#include<stdio.h>
int main() 
{
    int a[3][3]={{1,3,5},{6,8,2},{4,9,7}};
    int i,j;
    printf(" Display the elements of the array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}