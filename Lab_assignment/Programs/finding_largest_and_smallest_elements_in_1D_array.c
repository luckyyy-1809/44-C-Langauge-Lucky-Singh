#include<stdio.h>
int main() 
{
    int a[100],n,i;
    int largest,smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n); 
    if(n<1||n>100)
    {
        printf("Invalid array size.\n");
        return 0;
    }
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];
        if(a[i]<smallest)
            smallest=a[i];
    }
    printf("Largest element in the array is %d\n",largest);
    printf("Smallest element in the array is %d\n",smallest);
    return 0;
}