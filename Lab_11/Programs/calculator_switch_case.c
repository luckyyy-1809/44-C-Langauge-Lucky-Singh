#include<stdio.h>
int main() 
{
    int x,y;
    char ch;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* for multiplication\n");
    printf("/ for division\n");
    printf("%% for remainder\n");
    printf("enter your choice");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("%d+%d=%d",x,y,x+y);
            break;
        case '-':
            printf("%d-%d=%d",x,y,x-y);
            break;
        case '*':
            printf("%d*%d=%d",x,y,x*y);
            break;
        case '/':
            printf("%d/%d=%d",x,y,x/y);
            break;
        case '%':
            printf("%d%%%d=%d",x,y,x%y);
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}