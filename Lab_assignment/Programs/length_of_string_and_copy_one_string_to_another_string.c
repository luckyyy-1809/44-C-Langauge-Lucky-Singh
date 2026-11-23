#include<stdio.h>
#include<string.h>
int main() 
{
    char str1[50],str2[50];
    printf("Enter a string: ");
    gets(str1);
    printf("length of string is: %d\n",strlen(str1));
    strcpy(str2,str1);
    printf("Copied string is: %s\n",str2);
    return 0;
}