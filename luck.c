#include<stdio.h>
int main()
{
    int age;
    float height;
    printf("enter your age & height");
    scanf("%d %f",&age,&height);
if(age>=18 && height>=5.0)
{
    printf("you are eligible for the program");
}
else
{
    printf("you are not eligible for the program");
} 
return 0;
}