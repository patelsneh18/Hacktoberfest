#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: "); // t-shirts
    scanf("%d",&n);
    switch (n%2) //condition for checking even aur odd
    {
    case 0:
        printf("even number");
        break;

    default:
        printf("odd number");
        break;
    }
}
