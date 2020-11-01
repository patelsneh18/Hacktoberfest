#include<stdio.h>

int main()
{
    int n;
    printf("Enter the 1 for odd and 2 for even : ");
    scanf("%d",&n);
    if (n==1)
    {
        for (int i = 1; i < 101; i+2)
        {
            printf("%d\t",i);
        }
        
    }
    else
    {
        for (int i = 2; i < 101; i+2)
        {
            printf("%d\t",i);
        }
        
    }
    
}