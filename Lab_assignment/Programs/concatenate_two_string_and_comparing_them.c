#include<stdio.h>
#include<string.h>
int main() 
{
    char str1[50],str2[50];
    printf("Enter first string:");
    scanf("%49s",str1);
    printf("Enter second string:");
    scanf("%49s",str2);
    strcat(str1,str2);
    printf("Concatenated string: %s\n",str1);
    if(strcmp(str1,str2)==0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    return 0;

}