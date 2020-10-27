#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch (n>0)
    {
    case 0:
        switch (n<0)
        {
        case 1:
            printf("%d is a negative number",n);
            break;
        
        default:
            printf("%d is a ZERO",n);
            break;
        }
        break;

        

    case 1:
        printf("%d is a positive number",n);
        break;

    default:
        printf(" NULL");
        break;
    }
}