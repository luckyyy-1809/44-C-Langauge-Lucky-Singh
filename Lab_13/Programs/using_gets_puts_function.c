#include<stdio.h>
int main() 
{
    char name[25];
    printf("Enter your name: ");
    gets(name);
    printf("you entered");
    puts(name);
    return 0;
}