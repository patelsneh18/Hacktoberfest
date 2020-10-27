#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch (n%2)
    {
    case 0:
        printf("even number");
        break;

    default:
        printf("odd number");
        break;
    }
}