#include<stdio.h>

int main()
{
    int n;
    int arr[10];
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        arr[i]=0;
    }
    int lastDigit;
    while (n>0)
    {
        lastDigit = n%10;
        n/=10;
        arr[lastDigit]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Frequency of %d is %d\n",i,arr[i]);
    }
    return 0;
}