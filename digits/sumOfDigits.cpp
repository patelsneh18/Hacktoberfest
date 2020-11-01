#include<stdio.h>

int main()
{
    int digit,n;
    int sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n>0)
    {
        digit = n%10;
        n/=10;
        sum+=digit;
    }
    printf("%d",sum);
}