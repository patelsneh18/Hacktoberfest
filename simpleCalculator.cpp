#include<stdio.h>

int main()
{
    printf("Enter operation to perform +,-,/,%,* : ");
    char operation;
    scanf("%c",&operation);
    printf("Enter two numbers to perform operation on: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
   
    
    int sol;
    switch (operation)
    {
    case '*':
        sol = num1*num2;
        printf("%d",sol);
        break;
    
    case '+':
        sol = num1+num2;
        printf("%d",sol);
        break;

    case '-':
        sol = num1-num2;
        printf("%d",sol);
        break;

    case '/':
        sol = num1/num2;
        printf("%d",sol);
        break;


    default:
    printf("Invalid Input");
        break;
    }
}