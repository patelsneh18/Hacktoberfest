#include<stdio.h>

int main()
{
    int n;
    printf("Enter the 1 for odd and 2 for even : ");
    scanf("%d",&n);
    int ul;
    printf("Enter Upper Limit: ");
    scanf("%d",&ul);
    int sum=0;
    if (n==1)
    {
        for (int i = 1; i <= ul; i+=2)
        {
            sum+=i;
        }
        
    }
    else if(n==2)
    {
        for (int i = 2; i <= ul; i+=2)
        {
            sum+=i;
        }
        
    }
    printf("%d",sum);
    return 0;
}