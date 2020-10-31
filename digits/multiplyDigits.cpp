#include<stdio.h>

int main()
{
    int n;
    int result=1;
    int m;
    printf("Enter the Number\n");
    scanf("%d",&n);
    do
    {
        m = n%10;
        result = m*result;
        n/=10;
    } while (n>0);
    printf("%d",result);
}