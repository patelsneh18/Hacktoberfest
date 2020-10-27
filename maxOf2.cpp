#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Two Numbers :");
    scanf("%d",num1);
    scanf("%d",num2);
    switch (num1>num2)
    {
    case 0:
        printf("Number 1 is smaller");
        break;
    
    case 1:
        printf("Number 2 is smaller");
        break;
    
    default:
    printf("Equal");
        break;
    }
    return 0;
}