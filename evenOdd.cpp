#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: "); // t-shirts
    scanf("%d",&n);
    switch (n%2)   //checking n is even or not
    {
    case 0:
        printf("even number");   //switch fuunction
        break;

    default:
        printf("odd number");
        break;
    }
}
