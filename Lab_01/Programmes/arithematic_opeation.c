#include<stdio.h>
int main()
//Lucky Singh
{
    int num1,num2,sum,sub,mul;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    printf("Sum of numbers is %d\n",sum);
    printf("Subtraction of numbers is %d\n",sub);
    printf("Multiplication of numbers is %d\n",mul);
    return 0;
}